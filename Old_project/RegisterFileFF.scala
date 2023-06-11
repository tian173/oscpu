import chisel3._
import chisel3.util.experimental._
import ID._
import chisel3.util._

class RegisterFileFF extends Module {
    val io = IO(new Bundle{
        val test_en_i = Input(Bool()) 
        val dumm_instr_id_i = Input(Bool())
        //read port R1
        val raddr_a_i = Input(UInt(5.W))
        val rdata_a_o = Output(UInt(Datawidth.W))
        //read port R2
        val raddr_b_i = Input(UInt(5.W))
        val rdata_b_o = Output(UInt(Datawidth.W))
        //write port w1
        val wdata_a_i = Input(UInt(Datawidth.W))
        val waddr_a_i = Input(UInt(5.W))
        val we_a_i    = Input(Bool())
    })
    val ADDR_WIDTH = if(RV32E) 4 else 5
    
    val NUM_WORDS  = 1 << ADDR_WIDTH
    val rf_reg = RegInit(VecInit(Seq.fill(NUM_WORDS)(0.U(Datawidth.W))))
    val we_a_dec = Wire(Vec(NUM_WORDS,Bool()))
    we_a_dec(0) := false.B
    for (i <- 1 until NUM_WORDS){
        we_a_dec(i) := (io.waddr_a_i === i.U)&io.we_a_i
    }
    for (i <- 1 until NUM_WORDS){
        rf_reg(i) := Mux(we_a_dec(i)===1.U, io.wdata_a_i, rf_reg(i))
    }
    when (DummInstructions){    
        val we_r0_dummy = io.we_a_i & io.dumm_instr_id_i   
        rf_reg(0) := Mux(we_r0_dummy, io.wdata_a_i, rf_reg(0))
    } .otherwise {
        rf_reg(0) := 0.U
        val unused_dummy_instr = io.dumm_instr_id_i      
    }
    io.rdata_a_o := rf_reg(io.raddr_a_i)
    io.rdata_b_o := rf_reg(io.raddr_b_i)
    val unused_test_en = io.test_en_i
}   
object RegisterFileFFOption extends App {
    emitVerilog(new RegisterFileFF(), Array("--target-dir", "generated"))
}