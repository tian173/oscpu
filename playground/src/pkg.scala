package pkg
import chisel3._
import chisel3.util._

object ID extends Enumeration {
    val RV32E = false
    val Datawidth = 32
    val DummInstructions = false.B
}
object rv32m_e extends Enumeration {
  val RV32MNone, RV32MSlow, RV32MFast, RV32MSingleCycle = Value
}
object md_op_e extends Enumeration {
  val MD_OP_MULL, MD_OP_MULH, MD_OP_DIV, MD_OP_REM =Value
}