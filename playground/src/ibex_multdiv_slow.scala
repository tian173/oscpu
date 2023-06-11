import chisel3._
import chisel3.util._
import pkg.{ID, md_op_e, rv32m_e}
import scala.annotation.switch
class ibex_multdiv_slow extends Module {
  val io = IO(new Bundle {
    val mult_en_i         = Input(Bool())
    val div_en_i          = Input(Bool())
    val mult_sel_i        = Input(Bool())
    val div_sel_i         = Input(Bool())
    val operator_i        = Input(UInt(2.W))
    val signed_mode_i     = Input(UInt(2.W))
    val op_a_i            = Input(UInt(ID.Datawidth.W))
    val op_b_i            = Input(UInt(ID.Datawidth.W))
    val alu_adder_ext_i   = Input(UInt(34.W))
    val alu_adder_i       = Input(UInt(ID.Datawidth.W))
    val equal_to_zero_i   = Input(Bool())
    val data_ind_timing_i = Input(Bool())
    val alu_operand_a_o   = Output(UInt(33.W))
    val alu_operand_b_o   = Output(UInt(33.W))
    val imd_val_q_i       = Input(Vec(2, UInt(34.W)))
    val imd_val_d_o       = Output(Vec(2, UInt(34.W)))
    val imd_val_we_o      = Output(Vec(2,Bool()))
    val multdiv_ready_id_i= Input(Bool())
    val multdiv_result_o  = Output(UInt(ID.Datawidth.W))
    val valid_o           = Output(Bool())
  })
object md_fsm_e extends Enumeration{
    val MD_IDLE, MD_ABS_A, MD_ABS_B, MD_COMP, MD_LAST, MD_CHANGE_SIGN, MD_FINISH =Value
}

val md_state_q =RegInit(md_fsm_e.MD_IDLE.id.U)
val md_state_d =WireInit(md_fsm_e.MD_IDLE.id.U)
val accum_window_q =Wire(UInt(33.W))
val accum_window_d =Wire(UInt(33.W))
val res_adder_l = Wire(UInt(33.W))
val res_adder_h = Wire(UInt(33.W))
val multdiv_count_q = RegInit(0.U(5.W))
val multdiv_count_d = Wire(UInt(5.W))
val op_b_shift_q = RegInit(0.U(33.W))
val op_b_shift_d =  Wire(UInt(33.W))
val op_a_shift_q = RegInit(0.U(33.W))
val op_a_shift_d = Wire(UInt(33.W))
val op_a_ext = Wire(UInt(33.W))
val op_b_ext = Wire(UInt(33.W))
val one_shift = Wire(UInt(33.W))
val op_a_bw_pp = WireInit(0.U(33.W))
val op_a_bw_last_pp = WireInit(0.U(33.W))
val b_0 = Wire(UInt(32.W))
val sign_a = Wire(UInt(1.W))
val sign_b = Wire(UInt(1.W))
val next_quotient = Wire(UInt(33.W))
val next_remainder = Wire(UInt(32.W))
val op_numerator_q = Wire(UInt(32.W))
val op_numerator_d = Wire(UInt(32.W))
val is_greater_equal = Wire(UInt(1.W))
val div_change_sign = Wire(UInt(1.W))
val rem_change_sign = Wire(UInt(1.W))
val div_by_zero_d = Wire(Bool())
val div_by_zero_q = RegInit(false.B)
val multdiv_hold = Wire(Bool())
val multdiv_en = Wire(Bool())

res_adder_l := io.alu_adder_ext_i(32, 0)
res_adder_h := io.alu_adder_ext_i(33, 1)

io.imd_val_d_o(0) := Cat(Fill(1, 0.U), accum_window_d)
io.imd_val_we_o(0) := ~multdiv_hold
accum_window_q := io.imd_val_q_i(0)(32, 0)

io.imd_val_d_o(1) := Cat(Fill(2, 0.U), op_numerator_d)
io.imd_val_we_o(1) := multdiv_en
op_numerator_q := io.imd_val_q_i(1)(31, 0)

io.alu_operand_a_o := accum_window_q
io.alu_operand_b_o := Cat(~op_b_shift_q(31, 0), Fill(1, 1.U)) 
switch(io.operator_i){
    is(md_op_e.MD_OP_MULL.id.U){
        io.alu_operand_b_o := op_a_bw_pp
    }
    is(md_op_e.MD_OP_MULH.id.U){
        io.alu_operand_b_o := Mux(md_state_q === md_fsm_e.MD_LAST.id.U, op_a_bw_last_pp, op_a_bw_pp)
    }
    is(md_op_e.MD_OP_DIV.id.U, md_op_e.MD_OP_REM.id.U){
        switch(md_state_q){
            is(md_fsm_e.MD_IDLE.id.U){
                io.alu_operand_a_o := Cat(Fill(32, 0.U), Fill(1, 1.U))
                io.alu_operand_b_o := Cat(~io.op_b_i, Fill(1, 1.U))
            }
            is(md_fsm_e.MD_ABS_A.id.U){
                io.alu_operand_a_o := Cat(Fill(32, 0.U), Fill(1, 1.U))
                io.alu_operand_b_o := Cat(~io.op_a_i, Fill(1, 1.U))
            }
            is(md_fsm_e.MD_ABS_B.id.U){
                io.alu_operand_a_o := Cat(Fill(32, 0.U), Fill(1, 1.U))
                io.alu_operand_b_o := Cat(~io.op_b_i, Fill(1, 1.U))
            }
            is(md_fsm_e.MD_CHANGE_SIGN.id.U){
                io.alu_operand_a_o := Cat(Fill(32, 0.U), Fill(1, 1.U))
                io.alu_operand_b_o := Cat(~accum_window_q(31, 0), Fill(1, 1.U))
            }
        }
    }
}
b_0 := Cat(Fill(32, op_b_shift_q(0)))
op_a_bw_pp :=Cat(Fill(1, ~(op_a_shift_q(32) & op_b_shift_q(0))), (op_a_shift_q(31, 0) & b_0))
op_a_bw_last_pp :=Cat(Fill(1, op_a_shift_q(32) & op_b_shift_q(0)), ~(op_a_shift_q(31, 0) & b_0))

 sign_a   := io.op_a_i(31) & io.signed_mode_i(0)
 sign_b   := io.op_b_i(31) & io.signed_mode_i(1)

 op_a_ext := Cat(sign_a, io.op_a_i)
 op_b_ext := Cat(sign_b, io.op_b_i)

 is_greater_equal :=Mux(accum_window_q(31) === op_b_shift_q(31), ~res_adder_h(31), accum_window_q(31))
 one_shift :=Cat(Fill(32, 0.U), Fill(1, 1.U)) <<multdiv_count_q
 next_remainder := Mux(is_greater_equal === 1.U, res_adder_h(31, 0), accum_window_q(31, 0))
 next_quotient := Mux(is_greater_equal === 1.U, op_a_shift_q | one_shift, op_a_shift_q)
 div_change_sign  := (sign_a ^ sign_b) & ~div_by_zero_q.asUInt
 rem_change_sign  := sign_a
 
 multdiv_count_d  := multdiv_count_q
 accum_window_d   := accum_window_q
 op_b_shift_d     := op_b_shift_q
 op_a_shift_d     := op_a_shift_q
 op_numerator_d   := op_numerator_q
 md_state_d       := md_state_q
 multdiv_hold     := false.B
 div_by_zero_d    := div_by_zero_q
 when(io.mult_sel_i || io.div_sel_i){
    switch(md_state_q){
        is(md_fsm_e.MD_IDLE.id.U){
            switch(io.operator_i){
                is(md_op_e.MD_OP_MULL.id.U){
                    op_a_shift_d := op_a_ext << 1.U
                    accum_window_d := Cat(Fill(1, ~(op_a_ext(32) & io.op_b_i(0))), op_a_ext(31, 0) & Fill(32, io.op_b_i(0)))
                    op_b_shift_d := op_b_ext >> 1.U
                    md_state_d := Mux(!io.data_ind_timing_i && ((op_b_ext >> 1.U) === 0.U), md_fsm_e.MD_LAST.id.U, md_fsm_e.MD_COMP.id.U)
                }
                is(md_op_e.MD_OP_MULH.id.U){
                    op_a_shift_d := op_a_ext 
                    accum_window_d := Cat(Fill(1, 1.U), Fill(1, ~(op_a_ext(32) & io.op_b_i(0))), op_a_ext(31, 1) & Fill(31, io.op_b_i(0)))
                    op_b_shift_d := op_b_ext >> 1.U
                    md_state_d := md_fsm_e.MD_COMP.id.U
                }
                is(md_op_e.MD_OP_DIV.id.U){
                    accum_window_d := Cat(Fill(33, 1.U))
                    md_state_d := Mux(!io.data_ind_timing_i && io.equal_to_zero_i, md_fsm_e.MD_FINISH.id.U, md_fsm_e.MD_ABS_A.id.U)
                    div_by_zero_d  := io.equal_to_zero_i

                }
                is(md_op_e.MD_OP_REM.id.U){
                    accum_window_d := op_a_ext
                    md_state_d := Mux(!io.data_ind_timing_i && io.equal_to_zero_i, md_fsm_e.MD_FINISH.id.U, md_fsm_e.MD_ABS_A.id.U)
                }
            }
            multdiv_count_d   := 31.U(5.W)
        }
        is(md_fsm_e.MD_ABS_A.id.U){
            op_a_shift_d := 0.U
            op_numerator_d :=Mux(sign_a===1.U, io.alu_adder_i, io.op_a_i)
            md_state_d := md_fsm_e.MD_ABS_B.id.U
        }
        is(md_fsm_e.MD_ABS_B.id.U){
            accum_window_d := Cat(Fill(32, 0.U),op_numerator_q(31))
            op_b_shift_d :=Mux(sign_b === 1.U, Cat(Fill(1, 0.U), io.alu_adder_i), Cat(Fill(1, 0.U), io.op_b_i))
            md_state_d := md_fsm_e.MD_COMP.id.U
        }
        is(md_fsm_e.MD_COMP.id.U){
            multdiv_count_d := multdiv_count_q -1.U
            switch(io.operator_i){
                is(md_op_e.MD_OP_MULL.id.U){
                    accum_window_d := res_adder_l
                    op_a_shift_d   := op_a_shift_q << 1.U
                    op_b_shift_d   := op_b_shift_q >> 1.U
                    md_state_d     := Mux(((!io.data_ind_timing_i)&&(op_b_shift_d === 0.U))||(multdiv_count_q === 1.U), md_fsm_e.MD_LAST.id.U, md_fsm_e.MD_COMP.id.U)         
                }
                is(md_op_e.MD_OP_MULH.id.U){
                    accum_window_d := res_adder_h
                    op_a_shift_d   := op_a_shift_q 
                    op_b_shift_d   := op_b_shift_q >> 1.U
                    md_state_d     := Mux((multdiv_count_q === 1.U), md_fsm_e.MD_LAST.id.U, md_fsm_e.MD_COMP.id.U)         
                }
                is(md_op_e.MD_OP_DIV.id.U, md_op_e.MD_OP_REM.id.U){
                    accum_window_d :=Cat(next_remainder(31, 0), op_numerator_q(multdiv_count_d))
                    op_a_shift_d   := next_quotient
                    md_state_d :=Mux(multdiv_count_q === 1.U, md_fsm_e.MD_LAST.id.U, md_fsm_e.MD_COMP.id.U)
                    io.alu_operand_a_o := Cat(accum_window_q(31 ,0), Fill(1, 1.U))
                    io.alu_operand_b_o := Cat(~op_b_shift_q(31, 0), Fill(1, 1.U))
                }
            }
        }
        is(md_fsm_e.MD_LAST.id.U){
            switch(io.operator_i){
                is(md_op_e.MD_OP_MULL.id.U){
                    accum_window_d := res_adder_l
                    md_state_d := md_fsm_e.MD_IDLE.id.U
                    multdiv_hold := ~io.multdiv_ready_id_i
                }
                is(md_op_e.MD_OP_MULH.id.U){
                    accum_window_d := res_adder_l
                    md_state_d := md_fsm_e.MD_IDLE.id.U
                    multdiv_hold := ~io.multdiv_ready_id_i
                }
                is(md_op_e.MD_OP_DIV.id.U){
                    accum_window_d := next_quotient
                    md_state_d := md_fsm_e.MD_CHANGE_SIGN.id.U
                    io.alu_operand_a_o := Cat(accum_window_q(31 ,0), Fill(1, 1.U))
                    io.alu_operand_b_o := Cat(~op_b_shift_q(31, 0), Fill(1, 1.U))
                }
                is(md_op_e.MD_OP_REM.id.U){
                    accum_window_d := Cat(Fill(1, 0.U), next_remainder(31, 0))
                    md_state_d := md_fsm_e.MD_CHANGE_SIGN.id.U
                    io.alu_operand_a_o := Cat(accum_window_q(31 ,0), Fill(1, 1.U))
                    io.alu_operand_b_o := Cat(~op_b_shift_q(31, 0), Fill(1, 1.U))
                }
            } 
        }
        is(md_fsm_e.MD_CHANGE_SIGN.id.U){
            md_state_d := md_fsm_e.MD_FINISH.id.U
            switch(io.operator_i){
                is(md_op_e.MD_OP_DIV.id.U){
                    accum_window_d := Mux(div_change_sign === 1.U, Cat(Fill(1, 0.U),io.alu_adder_i), accum_window_q)
                }
                is(md_op_e.MD_OP_REM.id.U){
                    accum_window_d := Mux(rem_change_sign === 1.U, Cat(Fill(1, 0.U),io.alu_adder_i), accum_window_q)
                }
            }
        }
        is(md_fsm_e.MD_FINISH.id.U){
            md_state_d := md_fsm_e.MD_IDLE.id.U
            multdiv_hold := ~io.multdiv_ready_id_i
        }
    }
  }
    multdiv_en := (io.mult_en_i | io.div_en_i) & ~multdiv_hold
    when(multdiv_en){
        multdiv_count_q  := multdiv_count_d
        op_b_shift_q     := op_b_shift_d
        op_a_shift_q     := op_a_shift_d
        md_state_q       := md_state_d
        div_by_zero_q    := div_by_zero_d
   }
    io.valid_o := (md_state_q === md_fsm_e.MD_FINISH.id.U)  |
                 ((md_state_q === md_fsm_e.MD_LAST.id.U)   &
                 ((io.operator_i === md_op_e.MD_OP_MULL.id.U) |
                 (io.operator_i === md_op_e.MD_OP_MULH.id.U)))
    io.multdiv_result_o := Mux(io.div_en_i ===1.U,accum_window_q(31, 0), res_adder_l(31, 0))
}







