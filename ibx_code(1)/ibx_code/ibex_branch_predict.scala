import chisel3._
import chisel3.util._

class SimTop extends Module {
  val io = IO(new Bundle {
    // val clk_i = Input(Clock())
    // val rst_ni = Input(Bool())

    // Instruction from fetch stage
  val fetch_rdata_i = Input(UInt(32.W))
  val fetch_pc_i = Input(UInt(32.W))
  val fetch_valid_i = Input(Bool())

  // Prediction for supplied instruction
  val predict_branch_taken_o = Output(Bool())
  val predict_branch_pc_o = Output(UInt(32.W))
  })

  
  val imm_j_type = Wire(UInt(32.W))
  val imm_b_type = Wire(UInt(32.W))
  val imm_cj_type = Wire(UInt(32.W))
  val imm_cb_type = Wire(UInt(32.W))

  val branch_imm = Wire(UInt(32.W))

  val instr = Wire(UInt(32.W))

  val instr_j = Wire(Bool())
  val instr_b = Wire(Bool())
  val instr_cj = Wire(Bool())
  val instr_cb = Wire(Bool())

  val instr_b_taken = Wire(Bool())

  // Provide short internal name for fetch_rdata_i due to reduce line wrapping
  instr := io.fetch_rdata_i

  // Extract and sign-extend to 32-bit the various immediates that may be used to calculate the
  // target

  // Uncompressed immediates
  imm_j_type := Cat(Fill(12, instr(31)), instr(19, 12), instr(20), instr(30, 21), 0.U(1.W))
  imm_b_type := Cat(Fill(19, instr(31)), instr(31), instr(7), instr(30, 25), instr(11, 8), 0.U(1.W))

  // Compressed immediates
  imm_cj_type := Cat(Fill(20, instr(12)), instr(12), instr(8), instr(10, 9), instr(6), instr(7),
    instr(2), instr(11), instr(5, 3), 0.U(1.W))

  imm_cb_type := Cat(Fill(23, instr(12)), instr(12), instr(6, 5), instr(2), instr(11, 10),
    instr(4, 3), 0.U(1.W))

  // Determine if the instruction is a branch or a jump

  // Uncompressed branch/jump
  instr_b := (instr(6, 0) === "h63".U(7.W))
  instr_j := (instr(6, 0) === "h6f".U(7.W))

  // Compressed branch/jump
  instr_cb := (instr(1, 0) === "b01".U) & ((instr(15, 13) === "b110".U) | (instr(15, 13) === "b111".U))
  instr_cj := (instr(1, 0) === "b01".U) & ((instr(15, 13) === "b101".U) | (instr(15, 13) === "b001".U))

  // Select out the branch offset for target calculation based upon the instruction type
  branch_imm := imm_b_type

  branch_imm := MuxCase(0.U, Array(
    (instr_j === true.B)  -> imm_j_type,
    (instr_b === true.B)  -> imm_b_type,
    (instr_cj === true.B) -> imm_cj_type,
    (instr_cb === true.B) -> imm_cb_type
  ))
  
  instr_b_taken := (instr_b & imm_b_type(31)) | (instr_cb & imm_cb_type(31))
  io.predict_branch_taken_o := io.fetch_valid_i & (instr_j | instr_cj | instr_b_taken);
  io.predict_branch_pc_o := io.fetch_pc_i + branch_imm

}