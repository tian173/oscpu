package pkg

import chisel3._
import chisel3.util._

object pc_sel_e extends Enumeration {
  val PC_BOOT, PC_JUMP, PC_EXC, PC_ERET, PC_DRET, PC_BP = Value
}

object exc_pc_sel_e extends Enumeration {
  val EXC_PC_EXC, EXC_PC_IRQ, EXC_PC_DBD, EXC_PC_DBG_EXC = Value
}

class irqs_t extends Bundle {
  val irq_software = Bool()
  val irq_timer = Bool()
  val irq_external = Bool()
  val irq_fast = UInt(15.W)
}

object dbg_cause_e extends Enumeration {
  val DBG_CAUSE_NONE, DBG_CAUSE_EBREAK, DBG_CAUSE_TRIGGER, DBG_CAUSE_HALTREQ, DBG_CAUSE_STEP = Value
}

object priv_lvl_e extends Enumeration {
  val PRIV_LVL_M = "b11"
  val PRIV_LVL_H = "b10"
  val PRIV_LVL_S = "b01"
  val PRIV_LVL_U = "b00" 
}

object ctrl_fsm_e extends Enumeration {
  val RESET, BOOT_SET, WAIT_SLEEP, SLEEP, FIRST_FETCH, DECODE, FLUSH, IRQ_TAKEN, DBG_TAKEN_IF, DBG_TAKEN_ID = Value
}

object nmi_int_cause_e extends Enumeration {
val NMI_INT_CAUSE_ECC = 0.U(5.W)
}

class ExcCauseT extends Bundle {
  val irq_int = UInt(1.W)
  val irq_ext = UInt(1.W)
  val lower_cause = UInt(5.W)
}

object exc_cause_t{
  val ExcCauseIrqSoftwareM = Wire(new ExcCauseT())
  ExcCauseIrqSoftwareM.irq_int := 0.U
  ExcCauseIrqSoftwareM.irq_ext := 1.U
  ExcCauseIrqSoftwareM.lower_cause := 3.U

  val ExcCauseIrqTimerM = Wire(new ExcCauseT())
  ExcCauseIrqTimerM.irq_int := 0.U
  ExcCauseIrqTimerM.irq_ext := 1.U
  ExcCauseIrqTimerM.lower_cause := 7.U

  val ExcCauseIrqExternalM = Wire(new ExcCauseT())
  ExcCauseIrqExternalM.irq_int := 0.U
  ExcCauseIrqExternalM.irq_ext := 1.U
  ExcCauseIrqExternalM.lower_cause := 11.U

  val ExcCauseIrqNm = Wire(new ExcCauseT())
  ExcCauseIrqNm.irq_int := 0.U
  ExcCauseIrqNm.irq_ext := 1.U
  ExcCauseIrqNm.lower_cause := 31.U

  val ExcCauseInsnAddrMisa = Wire(new ExcCauseT())
  ExcCauseInsnAddrMisa.irq_int := 0.U
  ExcCauseInsnAddrMisa.irq_ext := 0.U
  ExcCauseInsnAddrMisa.lower_cause := 0.U

  val ExcCauseInstrAccessFault = Wire(new ExcCauseT())
  ExcCauseInstrAccessFault.irq_int := 0.U
  ExcCauseInstrAccessFault.irq_ext := 0.U
  ExcCauseInstrAccessFault.lower_cause := 1.U

  val ExcCauseIllegalInsn = Wire(new ExcCauseT())
  ExcCauseIllegalInsn.irq_int := 0.U
  ExcCauseIllegalInsn.irq_ext := 0.U
  ExcCauseIllegalInsn.lower_cause := 2.U

  val ExcCauseBreakpoint = Wire(new ExcCauseT())
  ExcCauseBreakpoint.irq_int := 0.U
  ExcCauseBreakpoint.irq_ext := 0.U
  ExcCauseBreakpoint.lower_cause := 3.U

  val ExcCauseLoadAccessFault = Wire(new ExcCauseT())
  ExcCauseLoadAccessFault.irq_int := 0.U
  ExcCauseLoadAccessFault.irq_ext := 0.U
  ExcCauseLoadAccessFault.lower_cause := 5.U

  val ExcCauseStoreAccessFault = Wire(new ExcCauseT())
  ExcCauseStoreAccessFault.irq_int := 0.U
  ExcCauseStoreAccessFault.irq_ext := 0.U
  ExcCauseStoreAccessFault.lower_cause := 7.U

  val ExcCauseEcallUMode = Wire(new ExcCauseT())
  ExcCauseEcallUMode.irq_int := 0.U
  ExcCauseEcallUMode.irq_ext := 0.U
  ExcCauseEcallUMode.lower_cause := 8.U

  val ExcCauseEcallMMode = Wire(new ExcCauseT())
  ExcCauseEcallMMode.irq_int := 0.U
  ExcCauseEcallMMode.irq_ext := 0.U
  ExcCauseEcallMMode.lower_cause := 11.U
}


