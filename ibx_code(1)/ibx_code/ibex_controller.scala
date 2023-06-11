import chisel3._
import chisel3.util._

import pkg.{pc_sel_e,exc_pc_sel_e,exc_cause_t,irqs_t,dbg_cause_e,
  priv_lvl_e,ctrl_fsm_e,nmi_int_cause_e}
import pkg.ExcCauseT
import pkg.irqs_t

class SimTop(val WritebackStage: Bool = true.B, 
             val BranchPredictor: Bool = true.B,           
             val MemECC: Bool = false.B) extends Module {             
  val io = IO(new Bundle {

    val ctrl_busy_o = Output(Bool())

    // decoder related signals
    val illegal_insn_i = Input(Bool())
    val ecall_insn_i = Input(Bool())
    val mret_insn_i = Input(Bool())
    val dret_insn_i = Input(Bool())
    val wfi_insn_i = Input(Bool())
    val ebrk_insn_i = Input(Bool())
    val csr_pipe_flush_i = Input(Bool())

    // instr from IF-ID pipeline stage
    val instr_valid_i = Input(Bool())
    val instr_i = Input(UInt(32.W))
    val instr_compressed_i = Input(UInt(16.W))
    val instr_is_compressed_i = Input(Bool())
    val instr_bp_taken_i = Input(Bool())
    val instr_fetch_err_i = Input(Bool())
    val instr_fetch_err_plus2_i = Input(Bool())
    val pc_id_i = Input(UInt(32.W))

    // to IF-ID pipeline stage
    val instr_valid_clear_o = Output(Bool())
    val id_in_ready_o = Output(Bool())
    val controller_run_o = Output(Bool())
    val instr_exec_i = Input(Bool())

    // to prefetcher
    val instr_req_o = Output(Bool())
    val pc_set_o = Output(Bool())
    val pc_mux_o = Output(UInt(3.W))
    val nt_branch_mispredict_o = Output(Bool())
    val exc_pc_mux_o = Output(UInt(2.W))
    val exc_cause_o = Output(new ExcCauseT())

    // LSU
    val lsu_addr_last_i = Input(UInt(32.W))
    val load_err_i = Input(Bool()) 
    val store_err_i = Input(Bool())
    val mem_resp_intg_err_i = Input(Bool())
    val wb_exception_o = Output(Bool())
    val id_exception_o = Output(Bool())

    // jump/branch signals
    val branch_set_i = Input(Bool())
    val branch_not_set_i = Input(Bool())
    val jump_set_i = Input(Bool())

    // interrupt signals
    val csr_mstatus_mie_i = Input(Bool())
    val irq_pending_i = Input(Bool())
    val irqs_i = Input(new irqs_t())
    val irq_nm_ext_i = Input(Bool())
    val nmi_mode_o = Output(Bool())

    // debug signals
    val debug_req_i = Input(Bool())
    val debug_cause_o = Output(UInt(3.W))
    val debug_csr_save_o = Output(Bool())
    val debug_mode_o = Output(Bool())
    val debug_mode_entering_o = Output(Bool())
    val debug_single_step_i = Input(Bool())
    val debug_ebreakm_i = Input(Bool())
    val debug_ebreaku_i = Input(Bool())
    val trigger_match_i = Input(Bool())

    val csr_save_if_o = Output(Bool())
    val csr_save_id_o = Output(Bool())
    val csr_save_wb_o = Output(Bool())
    val csr_restore_mret_id_o = Output(Bool())
    val csr_restore_dret_id_o = Output(Bool())
    val csr_save_cause_o = Output(Bool())
    val csr_mtval_o = Output(UInt(32.W))
    val priv_mode_i = Input(UInt(2.W))

    // stall & flush signals
    val stall_id_i = Input(Bool())
    val stall_wb_i = Input(Bool())
    val flush_id_o = Output(Bool())
    val ready_wb_i = Input(Bool())

    // performance monitors
    val perf_jump_o = Output(Bool())
    val perf_tbranch_o = Output(Bool())
  })

    val ctrl_fsm_cs = RegInit(ctrl_fsm_e.RESET.id.U)
    val ctrl_fsm_ns = Wire(UInt(4.W))
    val nmi_mode_q = RegInit(false.B)
    val nmi_mode_d = Wire(Bool())
    val debug_mode_q = RegInit(false.B)
    val debug_mode_d = Wire(Bool())
    val debug_cause_d = Wire(UInt(3.W))
    val debug_cause_q = RegInit(dbg_cause_e.DBG_CAUSE_NONE.id.U)
    val load_err_q = RegInit(false.B)
    val load_err_d = Wire(Bool())
    val store_err_q = RegInit(false.B)
    val store_err_d = Wire(Bool())
    val exc_req_q = RegInit(false.B)
    val exc_req_d = Wire(Bool())
    val illegal_insn_q = RegInit(false.B)
    val illegal_insn_d = Wire(Bool())

    val instr_fetch_err_prio = Wire(Bool())
    val illegal_insn_prio = Wire(Bool())
    val ecall_insn_prio = Wire(Bool())
    val ebrk_insn_prio = Wire(Bool())
    val store_err_prio = Wire(Bool())
    val load_err_prio = Wire(Bool())

    val stall = Wire(Bool())
    val halt_if = Wire(Bool())
    val retain_id = Wire(Bool())
    val flush_id = Wire(Bool())
    val exc_req_lsu = Wire(Bool())
    val special_req = Wire(Bool())
    val special_req_pc_change = Wire(Bool())
    val special_req_flush_only = Wire(Bool())
    val do_single_step_q = RegInit(false.B)
    val do_single_step_d = Wire(Bool())
    val enter_debug_mode_prio_q = RegInit(false.B)
    val enter_debug_mode_prio_d = Wire(Bool())
    val enter_debug_mode = Wire(Bool())
    val ebreak_into_debug = Wire(Bool())
    val irq_enabled = Wire(Bool())
    val handle_irq = Wire(Bool())
    val id_wb_pending = Wire(Bool())

    val irq_nm = Wire(Bool())
    val irq_nm_int = Wire(Bool())
    dontTouch(irq_nm_int)
    val irq_nm_int_mtval = Wire(UInt(32.W))
    val irq_nm_int_cause = Wire(UInt(5.W))

    val mfip_id = Wire(UInt(4.W))
    val unused_irq_timer = Wire(Bool())
    
    val ecall_insn = Wire(Bool())
    val mret_insn = Wire(Bool())
    val dret_insn = Wire(Bool())
    val wfi_insn = Wire(Bool())
    val ebrk_insn = Wire(Bool())
    val csr_pipe_flush = Wire(Bool())
    val instr_fetch_err = Wire(Bool())

  // Exceptions //
    load_err_d     := io.load_err_i
    store_err_d    := io.store_err_i

    ecall_insn     := io.ecall_insn_i && io.instr_valid_i
    mret_insn      := io.mret_insn_i && io.instr_valid_i
    dret_insn      := io.dret_insn_i && io.instr_valid_i
    wfi_insn       := io.wfi_insn_i && io.instr_valid_i
    ebrk_insn      := io.ebrk_insn_i && io.instr_valid_i
    csr_pipe_flush := io.csr_pipe_flush_i && io.instr_valid_i
    instr_fetch_err:= io.instr_fetch_err_i && io.instr_valid_i

    illegal_insn_d := io.illegal_insn_i && (ctrl_fsm_cs =/= ctrl_fsm_e.FLUSH.id.U)

    exc_req_d      := (ecall_insn | ebrk_insn | illegal_insn_d |
                            instr_fetch_err) && (ctrl_fsm_cs =/= ctrl_fsm_e.FLUSH.id.U)

    exc_req_lsu    := io.store_err_i | io.load_err_i

    io.id_exception_o := exc_req_d && ~io.wb_exception_o

    special_req_flush_only := wfi_insn | csr_pipe_flush

    special_req_pc_change := mret_insn | dret_insn | exc_req_d | exc_req_lsu
    special_req    := special_req_pc_change | special_req_flush_only
    id_wb_pending  := io.instr_valid_i | ~io.ready_wb_i

    when (WritebackStage) {
      instr_fetch_err_prio := false.B
      illegal_insn_prio    := false.B
      ecall_insn_prio      := false.B
      ebrk_insn_prio       := false.B
      store_err_prio       := false.B
      load_err_prio        := false.B

      when(store_err_q) {
        store_err_prio := true.B
      } .elsewhen(load_err_q) {
        load_err_prio := true.B
      } .elsewhen(instr_fetch_err) {
        instr_fetch_err_prio := true.B
      } .elsewhen(illegal_insn_q) {
        illegal_insn_prio := true.B
      } .elsewhen(ecall_insn) {
        ecall_insn_prio := true.B
      } .elsewhen(ebrk_insn) {
        ebrk_insn_prio := true.B
      }

      io.wb_exception_o := load_err_q || store_err_q || io.load_err_i || io.store_err_i
    } .otherwise {
      instr_fetch_err_prio := false.B
      illegal_insn_prio    := false.B
      ecall_insn_prio      := false.B
      ebrk_insn_prio       := false.B
      store_err_prio       := false.B
      load_err_prio        := false.B

      when(instr_fetch_err) {
        instr_fetch_err_prio := true.B
      } .elsewhen(illegal_insn_q) {
        illegal_insn_prio := true.B
      } .elsewhen(ecall_insn) {
        ecall_insn_prio := true.B
      } .elsewhen(ebrk_insn) {
        ebrk_insn_prio := true.B
      } .elsewhen(store_err_q) {
        store_err_prio := true.B
      } .elsewhen(load_err_q) {
        load_err_prio := true.B
      }
      io.wb_exception_o := false.B
    }

  // Interrupts //
    val unused_mem_resp_intg_err_i = Wire(UInt(1.W))
    unused_mem_resp_intg_err_i := io.mem_resp_intg_err_i

    irq_nm_int := false.B
    irq_nm_int_cause := nmi_int_cause_e.NMI_INT_CAUSE_ECC
    irq_nm_int_mtval := 0.U

    do_single_step_d := Mux(io.instr_valid_i, !debug_mode_q && io.debug_single_step_i, do_single_step_q)

    enter_debug_mode_prio_d := (io.debug_req_i | do_single_step_d) && !debug_mode_q
    enter_debug_mode := enter_debug_mode_prio_d | (io.trigger_match_i && !debug_mode_q)

    ebreak_into_debug := Mux(io.priv_mode_i === priv_lvl_e.PRIV_LVL_M.U, io.debug_ebreakm_i,
                            Mux(io.priv_mode_i === priv_lvl_e.PRIV_LVL_U.U, io.debug_ebreaku_i, 0.U))

    irq_nm := io.irq_nm_ext_i | irq_nm_int

    irq_enabled := io.csr_mstatus_mie_i | (io.priv_mode_i === priv_lvl_e.PRIV_LVL_U.U)

    handle_irq := !debug_mode_q && !io.debug_single_step_i && !nmi_mode_q &&
          (irq_nm | (io.irq_pending_i && irq_enabled))

    mfip_id := 0.U
    for (i <- 14 to 0 by -1) {
      when (io.irqs_i.irq_fast(i)) {
        mfip_id := i.U(4.W)(3, 0)
      }
    }

    unused_irq_timer := io.irqs_i.irq_timer

    debug_cause_d := Mux(io.trigger_match_i, dbg_cause_e.DBG_CAUSE_TRIGGER.id.U,
                     Mux(ebrk_insn_prio && ebreak_into_debug, dbg_cause_e.DBG_CAUSE_EBREAK.id.U,
                     Mux(io.debug_req_i, dbg_cause_e.DBG_CAUSE_HALTREQ.id.U,
                     Mux(do_single_step_d, dbg_cause_e.DBG_CAUSE_STEP.id.U,
                     dbg_cause_e.DBG_CAUSE_NONE.id.U))))

    debug_cause_q := debug_cause_d

    io.debug_cause_o := debug_cause_q  

  // Core controller //

    io.instr_req_o := true.B
    io.csr_save_if_o := false.B
    io.csr_save_id_o := false.B
    io.csr_save_wb_o := false.B
    io.csr_restore_mret_id_o := false.B
    io.csr_restore_dret_id_o := false.B
    io.csr_save_cause_o := false.B
    io.csr_mtval_o := 0.U

    io.pc_mux_o := pc_sel_e.PC_BOOT.id.U
    io.pc_set_o := false.B
    io.nt_branch_mispredict_o := false.B

    io.exc_pc_mux_o := exc_pc_sel_e.EXC_PC_IRQ.id.U
    io.exc_cause_o.irq_int := exc_cause_t.ExcCauseInsnAddrMisa.irq_int
    io.exc_cause_o.irq_ext := exc_cause_t.ExcCauseInsnAddrMisa.irq_ext
    io.exc_cause_o.lower_cause := exc_cause_t.ExcCauseInsnAddrMisa.lower_cause

    ctrl_fsm_ns := ctrl_fsm_cs
    io.ctrl_busy_o := true.B

    halt_if := false.B
    retain_id := false.B
    flush_id := false.B

    io.debug_csr_save_o := false.B
    debug_mode_d := debug_mode_q
    io.debug_mode_entering_o := false.B
    nmi_mode_d := nmi_mode_q

    io.perf_tbranch_o := false.B
    io.perf_jump_o := false.B

    io.controller_run_o := false.B

  switch(ctrl_fsm_cs) {
    is(ctrl_fsm_e.RESET.id.U) {
      io.instr_req_o := false.B
      io.pc_mux_o := pc_sel_e.PC_BOOT.id.U
      io.pc_set_o := true.B
      ctrl_fsm_ns := ctrl_fsm_e.BOOT_SET.id.U
    }
    is(ctrl_fsm_e.BOOT_SET.id.U) {
      io.instr_req_o := true.B
      io.pc_mux_o := pc_sel_e.PC_BOOT.id.U
      io.pc_set_o := true.B
      ctrl_fsm_ns := ctrl_fsm_e.FIRST_FETCH.id.U
    }
    is(ctrl_fsm_e.WAIT_SLEEP.id.U) {
      io.ctrl_busy_o := false.B
      io.instr_req_o := false.B
      halt_if := true.B
      flush_id := true.B
      ctrl_fsm_ns := ctrl_fsm_e.SLEEP.id.U
    }
    is(ctrl_fsm_e.SLEEP.id.U) {
      io.instr_req_o := false.B
      halt_if := true.B
      flush_id := true.B

      when(irq_nm || io.irq_pending_i || io.debug_req_i || debug_mode_q || io.debug_single_step_i){
        ctrl_fsm_ns := ctrl_fsm_e.FIRST_FETCH.id.U
      }.otherwise{
        io.ctrl_busy_o := false.B
      }
    }
    is(ctrl_fsm_e.FIRST_FETCH.id.U) {
      when(io.id_in_ready_o){
        ctrl_fsm_ns := ctrl_fsm_e.DECODE.id.U
      }

      when(handle_irq){
        ctrl_fsm_ns := ctrl_fsm_e.IRQ_TAKEN.id.U
        halt_if := true.B
      }

      when(enter_debug_mode){
        ctrl_fsm_ns := ctrl_fsm_e.DBG_TAKEN_IF.id.U
        halt_if := true.B
      }
    }
    is(ctrl_fsm_e.DECODE.id.U) {
      io.controller_run_o := true.B
      io.pc_mux_o := pc_sel_e.PC_JUMP.id.U

      when(special_req){
        retain_id := true.B
        when(io.ready_wb_i || io.wb_exception_o){
          ctrl_fsm_ns := ctrl_fsm_e.FLUSH.id.U
        }
      }

      when(io.branch_set_i || io.jump_set_i){
        io.pc_set_o := Mux(BranchPredictor, !io.instr_bp_taken_i, true.B)
        io.perf_tbranch_o := io.branch_set_i
        io.perf_jump_o := io.jump_set_i
      }

      when(BranchPredictor){
        when(io.instr_bp_taken_i && io.branch_not_set_i){
          io.nt_branch_mispredict_o := true.B
        }
      }

      when((enter_debug_mode || handle_irq) && (stall || id_wb_pending)){
        halt_if := true.B
      }

      when(!stall && !special_req && !id_wb_pending){
        when(enter_debug_mode){
          ctrl_fsm_ns := ctrl_fsm_e.DBG_TAKEN_IF.id.U
          halt_if := true.B
        }.elsewhen(handle_irq){
          ctrl_fsm_ns := ctrl_fsm_e.IRQ_TAKEN.id.U
          halt_if := true.B
        }
      }
    }
    is(ctrl_fsm_e.IRQ_TAKEN.id.U) {
      io.pc_mux_o := pc_sel_e.PC_EXC.id.U
      io.exc_pc_mux_o := exc_pc_sel_e.EXC_PC_IRQ.id.U

      when(handle_irq){
        io.pc_set_o := true.B
        io.csr_save_if_o := true.B
        io.csr_save_cause_o := true.B
        when(irq_nm && !nmi_mode_q){
          io.exc_cause_o.irq_int := Mux(io.irq_nm_ext_i,exc_cause_t.ExcCauseIrqNm.irq_int,1.U)
          io.exc_cause_o.irq_ext := Mux(io.irq_nm_ext_i,exc_cause_t.ExcCauseIrqNm.irq_ext,0.U)
          io.exc_cause_o.lower_cause := Mux(io.irq_nm_ext_i,exc_cause_t.ExcCauseIrqNm.lower_cause,irq_nm_int_cause)
                                    
          when(irq_nm_int && !io.irq_nm_ext_i){
            io.csr_mtval_o := irq_nm_int_mtval
          }
          nmi_mode_d := true.B
        }.elsewhen(io.irqs_i.irq_fast =/= 0.U(15.W)){
          io.exc_cause_o.irq_int := 0.U
          io.exc_cause_o.irq_ext := 1.U
          io.exc_cause_o.lower_cause := Cat(1.U, mfip_id)          
        }.elsewhen(io.irqs_i.irq_external) {
          io.exc_cause_o.irq_int := exc_cause_t.ExcCauseIrqExternalM.irq_int
          io.exc_cause_o.irq_ext := exc_cause_t.ExcCauseIrqExternalM.irq_ext
          io.exc_cause_o.lower_cause := exc_cause_t.ExcCauseIrqExternalM.lower_cause
        }.elsewhen(io.irqs_i.irq_software) {
          io.exc_cause_o.irq_int := exc_cause_t.ExcCauseIrqSoftwareM.irq_int
          io.exc_cause_o.irq_ext := exc_cause_t.ExcCauseIrqSoftwareM.irq_ext
          io.exc_cause_o.lower_cause := exc_cause_t.ExcCauseIrqSoftwareM.lower_cause          
        }.otherwise {
          io.exc_cause_o.irq_int := exc_cause_t.ExcCauseIrqTimerM.irq_int
          io.exc_cause_o.irq_ext := exc_cause_t.ExcCauseIrqTimerM.irq_ext
          io.exc_cause_o.lower_cause := exc_cause_t.ExcCauseIrqTimerM.lower_cause            
        }
      }

      ctrl_fsm_ns := ctrl_fsm_e.DECODE.id.U
    }

    is(ctrl_fsm_e.DBG_TAKEN_IF.id.U) { 
      io.pc_mux_o := pc_sel_e.PC_EXC.id.U
      io.exc_pc_mux_o := exc_pc_sel_e.EXC_PC_DBD.id.U

      flush_id := true.B
      io.pc_set_o := true.B

      io.csr_save_if_o := true.B
      io.debug_csr_save_o := true.B

      io.csr_save_cause_o := true.B

      debug_mode_d := true.B
      io.debug_mode_entering_o := true.B

      ctrl_fsm_ns := ctrl_fsm_e.DECODE.id.U    
    }

    is(ctrl_fsm_e.DBG_TAKEN_ID.id.U) { 
      flush_id := true.B
      io.pc_mux_o := pc_sel_e.PC_EXC.id.U
      io.pc_set_o := true.B
      io.exc_pc_mux_o := exc_pc_sel_e.EXC_PC_DBD.id.U

      when(ebreak_into_debug && !debug_mode_q) { 
        io.csr_save_cause_o := true.B
        io.csr_save_id_o := true.B
        io.debug_csr_save_o := true.B
      }

      debug_mode_d := true.B
      io.debug_mode_entering_o := true.B

      ctrl_fsm_ns  := ctrl_fsm_e.DECODE.id.U
    }

    is(ctrl_fsm_e.FLUSH.id.U) {
      halt_if := true.B
      flush_id := true.B
      ctrl_fsm_ns := ctrl_fsm_e.DECODE.id.U
      
      when(exc_req_q || store_err_q || load_err_q) {
        io.pc_set_o := true.B
        io.pc_mux_o := pc_sel_e.PC_EXC.id.U
        io.exc_pc_mux_o := Mux(debug_mode_q, exc_pc_sel_e.EXC_PC_DBG_EXC.id.U, exc_pc_sel_e.EXC_PC_EXC.id.U)   

        when (WritebackStage) {
          when(store_err_q | load_err_q) {
            io.csr_save_id_o := false.B
            io.csr_save_wb_o := true.B
          }
        } .otherwise {
          io.csr_save_id_o := false.B
        }

        io.csr_save_cause_o := true.B

        when(instr_fetch_err_prio === true.B) {
          io.exc_cause_o.irq_int := exc_cause_t.ExcCauseInstrAccessFault.irq_int
          io.exc_cause_o.irq_ext := exc_cause_t.ExcCauseInstrAccessFault.irq_ext
          io.exc_cause_o.lower_cause := exc_cause_t.ExcCauseInstrAccessFault.lower_cause             
          io.csr_mtval_o := Mux(io.instr_fetch_err_plus2_i, (io.pc_id_i + 2.U(32.W)), io.pc_id_i)
        }
        .elsewhen(illegal_insn_prio === true.B) {
          io.exc_cause_o.irq_int := exc_cause_t.ExcCauseIllegalInsn.irq_int
          io.exc_cause_o.irq_ext := exc_cause_t.ExcCauseIllegalInsn.irq_ext
          io.exc_cause_o.lower_cause := exc_cause_t.ExcCauseIllegalInsn.lower_cause              
          io.csr_mtval_o := Mux(io.instr_is_compressed_i, Cat(0.U(16.W), io.instr_compressed_i), io.instr_i)
        }
        .elsewhen(ecall_insn_prio === true.B) {
          io.exc_cause_o.irq_int := Mux((io.priv_mode_i === priv_lvl_e.PRIV_LVL_M.U), exc_cause_t.ExcCauseEcallMMode.irq_int, exc_cause_t.ExcCauseEcallUMode.irq_int)
          io.exc_cause_o.irq_ext := Mux((io.priv_mode_i === priv_lvl_e.PRIV_LVL_M.U), exc_cause_t.ExcCauseEcallMMode.irq_ext, exc_cause_t.ExcCauseEcallUMode.irq_ext)
          io.exc_cause_o.lower_cause := Mux((io.priv_mode_i === priv_lvl_e.PRIV_LVL_M.U), exc_cause_t.ExcCauseEcallMMode.lower_cause, exc_cause_t.ExcCauseEcallUMode.lower_cause)
        }
        .elsewhen(ebrk_insn_prio === true.B) {
          when(debug_mode_q || ebreak_into_debug) {
            io.pc_set_o := false.B
            io.csr_save_id_o := false.B
            io.csr_save_cause_o := false.B
            ctrl_fsm_ns := ctrl_fsm_e.DBG_TAKEN_ID.id.U
            flush_id := false.B
          } .otherwise {
            io.exc_cause_o.irq_int := exc_cause_t.ExcCauseBreakpoint.irq_int
            io.exc_cause_o.irq_ext := exc_cause_t.ExcCauseBreakpoint.irq_ext
            io.exc_cause_o.lower_cause := exc_cause_t.ExcCauseBreakpoint.lower_cause                 
          }
        }
        .elsewhen(store_err_prio === true.B) {
          io.exc_cause_o.irq_int := exc_cause_t.ExcCauseStoreAccessFault.irq_int
          io.exc_cause_o.irq_ext := exc_cause_t.ExcCauseStoreAccessFault.irq_ext
          io.exc_cause_o.lower_cause := exc_cause_t.ExcCauseStoreAccessFault.lower_cause             
          io.csr_mtval_o := io.lsu_addr_last_i
        }
        .elsewhen(load_err_prio === true.B) {
          io.exc_cause_o.irq_int := exc_cause_t.ExcCauseLoadAccessFault.irq_int
          io.exc_cause_o.irq_ext := exc_cause_t.ExcCauseLoadAccessFault.irq_ext
          io.exc_cause_o.lower_cause := exc_cause_t.ExcCauseLoadAccessFault.lower_cause              
          io.csr_mtval_o := io.lsu_addr_last_i
        }
      } .otherwise {

        when(mret_insn) {
          io.pc_mux_o := pc_sel_e.PC_ERET.id.U
          io.pc_set_o := true.B
          io.csr_restore_mret_id_o := true.B
          
          when(nmi_mode_q) {
            nmi_mode_d := false.B // exit NMI mode
          }
        } .elsewhen(dret_insn) {
          io.pc_mux_o := pc_sel_e.PC_DRET.id.U
          io.pc_set_o := true.B
          debug_mode_d := false.B
          io.csr_restore_dret_id_o := true.B
        } .elsewhen(wfi_insn) {
          ctrl_fsm_ns := ctrl_fsm_e.WAIT_SLEEP.id.U  
        }
      }

      when(enter_debug_mode_prio_q && !(ebrk_insn_prio && ebreak_into_debug)) {
        ctrl_fsm_ns := ctrl_fsm_e.DBG_TAKEN_IF.id.U
      }
    }  

    // default {
    //   io.instr_req_o := false.B
    //   ctrl_fsm_ns := ctrl_fsm_e.RESET.id.U
    // }  
  }

    when (!io.instr_exec_i) {
      halt_if := true.B
    }

    io.flush_id_o := flush_id
    io.debug_mode_o := debug_mode_q
    io.nmi_mode_o := nmi_mode_q

    // Stall control //  
    stall := io.stall_id_i | io.stall_wb_i
    io.id_in_ready_o := !stall && !halt_if && !retain_id
    io.instr_valid_clear_o := !(stall | retain_id) | flush_id
    
    ctrl_fsm_cs := ctrl_fsm_ns
    nmi_mode_q := nmi_mode_d
    do_single_step_q := do_single_step_d
    debug_mode_q := debug_mode_d
    enter_debug_mode_prio_q := enter_debug_mode_prio_d
    load_err_q := load_err_d
    store_err_q := store_err_d
    exc_req_q := exc_req_d
    illegal_insn_q := illegal_insn_d

    val rvfi_flush_next = Wire(Bool())
    dontTouch(rvfi_flush_next)
    rvfi_flush_next := ctrl_fsm_ns === ctrl_fsm_e.FLUSH.id.U
}