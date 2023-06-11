import chisel3._
import chisel3.util._
import pkg.{ID, md_op_e, rv32m_e}
import scala.annotation.switch
class ibex_multdiv_fast (val RV32M: UInt = rv32m_e.RV32MFast.id.U)  extends Module {
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
  val md_state_q = RegInit(md_fsm_e.MD_IDLE.id.U)
  val md_state_d = WireInit(md_fsm_e.MD_IDLE.id.U)

  val mac_res_signed = Wire(SInt(34.W))//
  val mac_res_ext = Wire(UInt(35.W))//
  val accum = Wire(UInt(34.W))//
  val accum_h = WireInit(0.U(18.W))//
  val accum_l = WireInit(0.U(16.W))//
  val sign_a = Wire(UInt(1.W))
  val sign_b = Wire(UInt(1.W))
  val mult_valid = Wire(Bool())
  val mult_hold  = Wire(Bool())
  val signed_mult = (io.signed_mode_i=/= "b00".U)//

  val mac_res_d = Wire(UInt(34.W)) 
  val op_remainder_d = Wire(UInt(34.W)) 
  val mac_res = Wire(UInt(34.W))
  // DIvider signals
  val div_sign_a = Wire(UInt(1.W))
  val div_sign_b = Wire(UInt(1.W))
  val is_greater_equal = Wire(UInt(1.W))
  val div_change_sign = Wire(UInt(1.W))
  val rem_change_sign = Wire(UInt(1.W))
  val one_shift = Wire(UInt(32.W))

  val op_denominator_q = Wire(UInt(32.W))
  val op_numerator_q = RegInit(0.U(32.W))
  val op_quotient_q = RegInit(0.U(32.W))

  val op_denominator_d = Wire(UInt(32.W))
  val op_numerator_d = Wire(UInt(32.W))
  val op_quotient_d = Wire(UInt(32.W))
  val next_remainder = Wire(UInt(32.W))
  val next_quotient = Wire(UInt(33.W))
  val res_adder_h = Wire(UInt(32.W))
  val div_valid = Wire(Bool())
  val multdiv_en = Wire(Bool())

  val div_hold = Wire(Bool())
  val div_by_zero_d = Wire(Bool())

  val div_by_zero_q = RegInit(false.B)

  val mult_en_internal = Wire(Bool())
  val div_en_internal = Wire(Bool())
  val div_counter_q = RegInit(0.U(5.W))
  val div_counter_d = Wire(UInt(5.W))
  val unused_mult_sel_i = Wire(Bool())
  unused_mult_sel_i := io.mult_sel_i //
  mult_en_internal := io.mult_en_i & ~mult_hold //
  div_en_internal := io.div_en_i & ~div_hold //
  //always
  when(div_en_internal){
  div_counter_q  := div_counter_d //
  op_numerator_q := op_numerator_d //
  op_quotient_q  := op_quotient_d //
  div_by_zero_q  := div_by_zero_d //
  md_state_q     := md_state_d //
   }.otherwise{
    
   }
  //
  multdiv_en := mult_en_internal | div_en_internal //

  op_denominator_q := io.imd_val_q_i(1)(31, 0) //

  when(RV32M === rv32m_e.RV32MSingleCycle.id.U){
    object mult_fsm_e extends Enumeration{
    val MULL, MULH = Value
    }
    val mult_state_d = WireInit(mult_fsm_e.MULL.id.U)
    val mult_state_q = RegInit(mult_fsm_e.MULL.id.U)
    val mult1_res = Wire(SInt(34.W))
    val mult2_res = Wire(SInt(34.W))
    val mult3_res = Wire(SInt(34.W))
    
    val mult1_res_uns = Wire(UInt(34.W))
    val summand1 = Wire(UInt(34.W))
    val summand2 = Wire(UInt(34.W))
    val summand3 = Wire(UInt(34.W))
  
    
    val mult1_sign_a = Wire(UInt(1.W))
    val mult1_sign_b = Wire(UInt(1.W))
    val mult1_op_a = Wire(UInt(16.W))
    val mult1_op_b = Wire(UInt(16.W))

    val mult2_sign_a = Wire(UInt(1.W))
    val mult2_sign_b = Wire(UInt(1.W))
    val mult2_op_a = Wire(UInt(16.W))
    val mult2_op_b = Wire(UInt(16.W))

    val mult3_sign_a = Wire(UInt(1.W))
    val mult3_sign_b = Wire(UInt(1.W))
    val mult3_op_a = Wire(UInt(16.W))
    val mult3_op_b = Wire(UInt(16.W))
  
    mult1_res := Cat(mult1_sign_a, mult1_op_a).asSInt * Cat(mult1_sign_b, mult1_op_b).asSInt//
    mult2_res := Cat(mult2_sign_a, mult2_op_a).asSInt * Cat(mult2_sign_b, mult2_op_b).asSInt//
    mult3_res := Cat(mult3_sign_a, mult3_op_a).asSInt * Cat(mult3_sign_b, mult3_op_b).asSInt//
  
  
    mac_res_signed := summand1.asSInt + summand2.asSInt + summand3.asSInt //

    mult1_res_uns := mult1_res.asUInt //
    mac_res_ext := mac_res_signed.asUInt//
    mac_res := mac_res_ext(33, 0) //
  
    sign_a := io.signed_mode_i(0) & io.op_a_i(31) //
    sign_b := io.signed_mode_i(1) & io.op_b_i(31) //
    // al*bl
    mult1_sign_a := 0.U
    mult1_sign_b := 0.U
    mult1_op_a   := io.op_a_i(15, 0)
    mult1_op_b   := io.op_b_i(15, 0)
    // al*bh
    mult2_sign_a := 0.U
    mult2_sign_b := sign_b
    mult2_op_a   := io.op_a_i(15, 0)
    mult2_op_b   := io.op_b_i(31, 16)
    
    //used in MULH
    accum_l := io.imd_val_q_i(0)(33,16) ///
    accum_h := Cat(Fill(16, (signed_mult.asUInt & io.imd_val_q_i(0)(33)).asUInt))///
    accum   :=Cat(accum_h, accum_l)///
    // ah*bl
    mult3_sign_a := sign_a //
    mult3_sign_b := 0.U    //
    mult3_op_a   := io.op_a_i(31, 16)//
    mult3_op_b   := io.op_b_i(15, 0)//
    
    summand1 := Cat(Fill(18, 0.U), mult1_res(31, 16).asUInt)//
    summand2 := mult2_res.asUInt//
    summand3 := mult3_res.asUInt//

    mac_res_d :=Cat(Fill(2, 0.U), mac_res(15, 0), mult1_res_uns(15, 0))//
    mult_valid := io.mult_en_i //
    mult_state_d := mult_fsm_e.MULL.id.U //
    mult_hold := false.B //
    switch(mult_state_q){
      is(mult_fsm_e.MULL.id.U){
        when(io.operator_i =/= md_op_e.MD_OP_MULL.id.U){
          mac_res_d :=mac_res //
          mult_valid := false.B //
          mult_state_d := mult_fsm_e.MULH.id.U //
        }.otherwise{
          mult_hold := ~io.multdiv_ready_id_i //
        }
      }
      is(mult_fsm_e.MULH.id.U){
        mult3_sign_a := sign_a //
        mult3_sign_b := sign_b    //
        mult3_op_a   := io.op_a_i(31, 16)//
        mult3_op_b   := io.op_b_i(31, 16)//
        mac_res_d    := mac_res

        summand1     := 0.U//
        summand2     := accum//
        summand3     := mult3_res.asUInt//
        mult_state_d := mult_fsm_e.MULL.id.U//
        mult_valid   := true.B //
        mult_hold    := ~io.multdiv_ready_id_i //
      }
     
    }
    mult_state_q := Mux(mult_en_internal, mult_state_d, mult_state_q) //
  }.otherwise{
    object mult_fsm_e extends Enumeration{
    val ALBL, ALBH, AHBL, AHBH = Value
    }
    val mult_op_a = Wire(UInt(16.W))
    val mult_op_b = Wire(UInt(16.W))
    val mult_state_q = RegInit(mult_fsm_e.ALBL.id.U)
    val mult_state_d = WireInit(mult_fsm_e.ALBL.id.U)
    mac_res_signed  := Cat(sign_a, mult_op_a).asSInt * Cat(sign_b, mult_op_b).asSInt +accum.asSInt //
    mac_res_ext     := mac_res_signed.asUInt  //
    mac_res         := mac_res_ext(33, 0) //
    mult_op_a       := io.op_a_i(15, 0)//
    mult_op_b       := io.op_b_i(15, 0)//
    sign_a          := 0.U//
    sign_b          := 0.U//
    accum           := io.imd_val_q_i(0)//
    mac_res_d       := mac_res//
    mult_state_d    := mult_state_q//
    mult_valid      := false.B//
    mult_hold       := false.B//
    switch(mult_state_q){
      is(mult_fsm_e.ALBL.id.U){
        mult_op_a    := io.op_a_i(15, 0)//
        mult_op_b    := io.op_b_i(15, 0)//
        sign_a       := 0.U//
        sign_b       := 0.U//
        accum        := 0.U//
        mac_res_d    := mac_res//
        mult_state_d := mult_fsm_e.ALBH.id.U//
      }
      is(mult_fsm_e.ALBH.id.U){
        mult_op_a    := io.op_a_i(15, 0)
        mult_op_b    := io.op_b_i(31, 16)
        sign_a       := 0.U
        sign_b       := io.signed_mode_i(1) & io.op_b_i(31)
        accum        := Cat(Fill(18, 0.U), io.imd_val_q_i(0)(31, 16))
       
        when(io.operator_i === md_op_e.MD_OP_MULL.id.U){
          mac_res_d  := Cat(Fill(2, 0.U), mac_res(15, 0), io.imd_val_q_i(0)(15, 0))
        }.otherwise{
          mac_res_d  := mac_res
        }
        mult_state_d := mult_fsm_e.AHBL.id.U
      }
      is(mult_fsm_e.AHBL.id.U){
        mult_op_a    := io.op_a_i(31, 16)
        mult_op_b    := io.op_b_i(15, 0)
        sign_a       := io.signed_mode_i(0) & io.op_a_i(31)
        sign_b       := 0.U
        
        when(io.operator_i === md_op_e.MD_OP_MULL.id.U){
          accum        := Cat(Fill(18, 0.U), io.imd_val_q_i(0)(31, 16))
          mac_res_d    := Cat(Fill(2, 0.U), mac_res(15, 0), io.imd_val_q_i(0)(15, 0))
          mult_valid   := true.B

            // Note no state transition will occur if mult_hold is set
          mult_state_d := mult_fsm_e.ALBL.id.U
          mult_hold    := ~io.multdiv_ready_id_i
        }.otherwise{
          accum  := io.imd_val_q_i(0)
          mac_res_d :=mac_res
          mult_state_d := mult_fsm_e.AHBH.id.U
        }
      }
      is(mult_fsm_e.AHBH.id.U){
        mult_op_a    := io.op_a_i(31, 16)
        mult_op_b    := io.op_b_i(31, 16)
        sign_a       := io.signed_mode_i(0) & io.op_a_i(31)
        sign_b       := io.signed_mode_i(1) & io.op_b_i(31)
        accum_l      := io.imd_val_q_i(0)(33,16) ///
        accum_h      := Cat(Fill(16, (signed_mult.asUInt & io.imd_val_q_i(0)(33)).asUInt))///
        accum        := Cat(accum_h, accum_l)///
        mac_res_d    := mac_res
        mult_valid   := true.B
        mult_state_d := mult_fsm_e.ALBL.id.U
        mult_hold    := ~io.multdiv_ready_id_i
      } 
      
    }
    mult_state_q := Mux(mult_en_internal, mult_state_d, mult_state_q) 

  }
  res_adder_h := io.alu_adder_ext_i(32, 1)
 
  next_remainder := Mux(is_greater_equal=== 1.U, res_adder_h(31, 0), io.imd_val_q_i(0)(31, 0))
  next_quotient  := Mux(is_greater_equal=== 1.U, Cat(Fill(1, 0.U), op_quotient_q) | Cat(Fill(1, 0.U), one_shift), Cat(Fill(1, 0.U), op_quotient_q))

  one_shift := Cat(Fill(31, 0.U),Fill(1, 1.U)) << div_counter_q
  is_greater_equal := Mux(((io.imd_val_q_i(0)(31) ^ op_denominator_q(31)) === 0.U), Mux((res_adder_h(31) === 0.U), 1.U, 0.U), io.imd_val_q_i(0)(31))

  div_sign_a := io.op_a_i(31) & io.signed_mode_i(0)
  div_sign_b := io.op_b_i(31) & io.signed_mode_i(1)
  div_change_sign := (div_sign_a ^ div_sign_b) & (~div_by_zero_q).asUInt
  rem_change_sign := div_sign_a
  //alway
  div_counter_d      := div_counter_q - 1.U
  op_remainder_d     := io.imd_val_q_i(0)
  op_quotient_d      := op_quotient_q
  md_state_d         := md_state_q
  op_numerator_d     := op_numerator_q
  op_denominator_d   := op_denominator_q
  io.alu_operand_a_o := Cat(Fill(32, 0.U), Fill(1, 1.U)) 
  io.alu_operand_b_o := Cat(~io.op_b_i, Fill(1, 1.U)) 
  div_valid          := false.B
  div_hold           := false.B
  div_by_zero_d      := div_by_zero_q
  switch(md_state_q){
    is(md_fsm_e.MD_IDLE.id.U){
      when(io.operator_i === md_op_e.MD_OP_DIV.id.U){
        op_remainder_d := Cat(Fill(32, 1.U))
        md_state_d := Mux((!io.data_ind_timing_i && io.equal_to_zero_i), md_fsm_e.MD_FINISH.id.U, md_fsm_e.MD_ABS_A.id.U)
        div_by_zero_d := io.equal_to_zero_i
      }.otherwise{
        op_remainder_d := Cat(Fill(2, 0.U), io.op_a_i)
        md_state_d := Mux((!io.data_ind_timing_i && io.equal_to_zero_i), md_fsm_e.MD_FINISH.id.U, md_fsm_e.MD_ABS_A.id.U)
      }
      io.alu_operand_a_o := Cat(Fill(32, 0.U), Fill(1, 1.U))
      io.alu_operand_b_o := Cat(~io.op_b_i, Fill(1, 1.U))
      div_counter_d := 31.U
    }
    is(md_fsm_e.MD_ABS_A.id.U){
      op_quotient_d := 0.U
      op_numerator_d := Mux(div_sign_a === 1.U, io.alu_adder_i, io.op_a_i)
      md_state_d := md_fsm_e.MD_ABS_B.id.U
      div_counter_d := 31.U
      io.alu_operand_a_o := Cat(Fill(32, 0.U), Fill(1, 1.U))
      io.alu_operand_b_o := Cat(~io.op_a_i, Fill(1, 1.U))
    }
    is(md_fsm_e.MD_ABS_B.id.U){
      op_remainder_d := Cat(Fill(33, 0.U), op_numerator_q(31))
      op_denominator_d := Mux(div_sign_b === 1.U, io.alu_adder_i, io.op_b_i)
      md_state_d := md_fsm_e.MD_COMP.id.U
      div_counter_d := 31.U
      io.alu_operand_a_o := Cat(Fill(32, 0.U), Fill(1, 1.U))
      io.alu_operand_b_o := Cat(~io.op_b_i, Fill(1, 1.U))

    }
    is(md_fsm_e.MD_COMP.id.U){
      op_remainder_d := Cat(Fill(1, 0.U), next_remainder(31, 0), op_numerator_q(div_counter_d))
      op_quotient_d := next_quotient(31, 0)
      md_state_d := Mux(div_counter_q === 1.U, md_fsm_e.MD_LAST.id.U, md_fsm_e.MD_COMP.id.U)
      
      io.alu_operand_a_o := Cat(io.imd_val_q_i(0)(31, 0), Fill(1, 1.U))
      io.alu_operand_b_o := Cat(~op_denominator_q(31, 0), Fill(1, 1.U))
    }
    is(md_fsm_e.MD_LAST.id.U){
      when(io.operator_i === md_op_e.MD_OP_DIV.id.U){
        op_remainder_d := Cat(Fill(1, 0.U), next_quotient)

      }.otherwise{
        op_remainder_d := Cat(Fill(2, 0.U), next_remainder(31, 0))
      }
      io.alu_operand_a_o := Cat(io.imd_val_q_i(0)(31, 0), Fill(1, 1.U))
      io.alu_operand_b_o := Cat(~op_denominator_q(31, 0), Fill(1, 1.U))
      md_state_d := md_fsm_e.MD_CHANGE_SIGN.id.U
    }
    is(md_fsm_e.MD_CHANGE_SIGN.id.U){
      md_state_d := md_fsm_e.MD_FINISH.id.U
      when(io.operator_i === md_op_e.MD_OP_DIV.id.U){
        op_remainder_d := Mux(div_change_sign === 1.U, Cat(Fill(2, 0.U), io.alu_adder_i), io.imd_val_q_i(0))
      }.otherwise{
        op_remainder_d := Mux(rem_change_sign === 1.U, Cat(Fill(2, 0.U), io.alu_adder_i), io.imd_val_q_i(0))
      }
      io.alu_operand_a_o := Cat(Fill(32, 0.U), Fill(1, 1.U))
      io.alu_operand_b_o := Cat(~io.imd_val_q_i(0)(31, 0), Fill(1, 1.U))
    }
    is(md_fsm_e.MD_FINISH.id.U){
      md_state_d := md_fsm_e.MD_IDLE.id.U
      div_hold := ~io.multdiv_ready_id_i
      div_valid := true.B
    }
  }

  io.imd_val_we_o(0) := multdiv_en //
  io.imd_val_we_o(1) := div_en_internal //
 
  io.multdiv_result_o := Mux(io.div_en_i, io.imd_val_q_i(0)(31, 0), mac_res_d(31, 0)) //

  io.valid_o := mult_valid  | div_valid
  io.imd_val_d_o(0) := Mux(io.div_sel_i, op_remainder_d, mac_res_d) //
  io.imd_val_d_o(1) := Cat(Fill(2, 0.U), op_denominator_d) //
}

