// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at build/UpdateInst.v:10:30
    extern void update_indi(svBit is_mmio, svBit valid, int rcsr_id);
    // DPI import at build/UpdateInst.v:11:30
    extern void update_pc(int valid, int pc, int inst);
    // DPI import at build/UpdateRegs.v:5:30
    extern void update_reg(int id, int val);

#ifdef __cplusplus
}
#endif
