import chisel3._
import chisel3.util._

class SimTop(val CounterWidth: Int = 32, val ProvideValUpd: Boolean = false) extends Module {
  val io = IO(new Bundle {
  // val clk_i          = Input (Bool())
  // val rst_ni         = Input (Bool())
  val reset          = Input (Bool())

  val counter_inc_i  = Input (Bool())
  val counterh_we_i  = Input (Bool())
  val counter_we_i   = Input (Bool())
  val counter_val_i  = Input (UInt(32.W))
  val counter_val_o  = Output(UInt(64.W))
  val counter_val_upd_o = Output(UInt(64.W))
  })

  val counter             = WireInit(0.U(64.W))
  val counter_upd         = WireInit(0.U(CounterWidth.W))
  val counter_load        = WireInit(0.U(64.W))
  val we                  = Wire(Bool())
  val counter_d           = WireInit(0.U(CounterWidth.W))
  we := false.B
  // Increment
  counter_upd := counter(CounterWidth-1, 0) + Cat(Fill(CounterWidth-1, 0.U), 1.U)

  // Update
  when (true.B) {
    // Write
    we := io.counter_we_i | io.counterh_we_i
    counter_load := Cat(counter(63,32), io.counter_val_i)
    when (io.counterh_we_i) {
      counter_load := Cat(io.counter_val_i, counter(31,0))
    }

    // Next value logic
    when (we) {
      counter_d := counter_load(CounterWidth-1,0)
    } .elsewhen (io.counter_inc_i) {
      counter_d := counter_upd(CounterWidth-1,0)
    } .otherwise {
      counter_d := counter(CounterWidth-1,0)
    }
  }

  // Counter flop
  val counter_q = RegInit(0.U(CounterWidth.W))
  when(io.reset) {
    counter_q := 0.U
  }.otherwise {
    counter_q := counter_d
  }

  if (CounterWidth < 64) {
    val unused_counter_load = Wire(UInt((64-CounterWidth).W))
    
    counter := Cat(0.U((64-CounterWidth).W),counter_q)
    io.counter_val_o := counter

    if (ProvideValUpd) {
      io.counter_val_upd_o := counter_upd
    } else {
      io.counter_val_upd_o := 0.U
    }
    unused_counter_load := counter_load(63, CounterWidth)
  } else {
    io.counter_val_o := counter_q

    if (ProvideValUpd) {
      io.counter_val_upd_o := counter_upd
    } else {
      io.counter_val_upd_o := 0.U
    }
  }
}