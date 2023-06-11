import chisel3.util._
import chisel3._
object RV32ETop extends App{
    emitVerilog(new ibex_multdiv_fast(), Array("--target-dir", "generated"))

}