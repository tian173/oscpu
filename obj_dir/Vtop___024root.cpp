// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void update_indi(svBit is_mmio, svBit valid, int rcsr_id);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__writeback__DOT__updateInst__DOT__update_indi_TOP(CData/*0:0*/ is_mmio, CData/*0:0*/ valid, IData/*31:0*/ rcsr_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__writeback__DOT__updateInst__DOT__update_indi_TOP\n"); );
    // Body
    svBit is_mmio__Vcvt;
    for (size_t is_mmio__Vidx = 0; is_mmio__Vidx < 1; ++is_mmio__Vidx) is_mmio__Vcvt = is_mmio;
    svBit valid__Vcvt;
    for (size_t valid__Vidx = 0; valid__Vidx < 1; ++valid__Vidx) valid__Vcvt = valid;
    int rcsr_id__Vcvt;
    for (size_t rcsr_id__Vidx = 0; rcsr_id__Vidx < 1; ++rcsr_id__Vidx) rcsr_id__Vcvt = rcsr_id;
    update_indi(is_mmio__Vcvt, valid__Vcvt, rcsr_id__Vcvt);
}

extern "C" void update_pc(int valid, int pc, int inst);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__writeback__DOT__updateInst__DOT__update_pc_TOP(IData/*31:0*/ valid, IData/*31:0*/ pc, IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__writeback__DOT__updateInst__DOT__update_pc_TOP\n"); );
    // Body
    int valid__Vcvt;
    for (size_t valid__Vidx = 0; valid__Vidx < 1; ++valid__Vidx) valid__Vcvt = valid;
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    update_pc(valid__Vcvt, pc__Vcvt, inst__Vcvt);
}

extern "C" void update_reg(int id, int val);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(IData/*31:0*/ id, IData/*31:0*/ val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP\n"); );
    // Body
    int id__Vcvt;
    for (size_t id__Vidx = 0; id__Vidx < 1; ++id__Vidx) id__Vcvt = id;
    int val__Vcvt;
    for (size_t val__Vidx = 0; val__Vidx < 1; ++val__Vidx) val__Vcvt = val;
    update_reg(id__Vcvt, val__Vcvt);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ __Vdly__top__DOT__rv32e__DOT__memory__DOT__state;
    CData/*7:0*/ __Vdlyvval__top__DOT__mem__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__mem__DOT__ram__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem__DOT__ram__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__mem__DOT__ram__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem__DOT__ram__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__mem__DOT__ram__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem__DOT__ram__v3;
    IData/*27:0*/ __Vdlyvdim0__top__DOT__mem__DOT__ram__v0;
    IData/*27:0*/ __Vdlyvdim0__top__DOT__mem__DOT__ram__v1;
    IData/*27:0*/ __Vdlyvdim0__top__DOT__mem__DOT__ram__v2;
    IData/*27:0*/ __Vdlyvdim0__top__DOT__mem__DOT__ram__v3;
    VlWide<32>/*1023:0*/ __Vtemp30;
    VlWide<64>/*2047:0*/ __Vtemp31;
    VlWide<32>/*1023:0*/ __Vtemp61;
    VlWide<64>/*2047:0*/ __Vtemp62;
    VlWide<32>/*1023:0*/ __Vtemp92;
    VlWide<64>/*2047:0*/ __Vtemp93;
    VlWide<32>/*1023:0*/ __Vtemp123;
    VlWide<64>/*2047:0*/ __Vtemp124;
    VlWide<32>/*1023:0*/ __Vtemp154;
    VlWide<64>/*2047:0*/ __Vtemp155;
    VlWide<32>/*1023:0*/ __Vtemp185;
    VlWide<64>/*2047:0*/ __Vtemp186;
    VlWide<32>/*1023:0*/ __Vtemp216;
    VlWide<64>/*2047:0*/ __Vtemp217;
    VlWide<32>/*1023:0*/ __Vtemp247;
    VlWide<64>/*2047:0*/ __Vtemp248;
    VlWide<32>/*1023:0*/ __Vtemp278;
    VlWide<64>/*2047:0*/ __Vtemp279;
    VlWide<32>/*1023:0*/ __Vtemp309;
    VlWide<64>/*2047:0*/ __Vtemp310;
    VlWide<32>/*1023:0*/ __Vtemp340;
    VlWide<64>/*2047:0*/ __Vtemp341;
    VlWide<32>/*1023:0*/ __Vtemp371;
    VlWide<64>/*2047:0*/ __Vtemp372;
    VlWide<32>/*1023:0*/ __Vtemp402;
    VlWide<64>/*2047:0*/ __Vtemp403;
    VlWide<32>/*1023:0*/ __Vtemp433;
    VlWide<64>/*2047:0*/ __Vtemp434;
    VlWide<32>/*1023:0*/ __Vtemp464;
    VlWide<64>/*2047:0*/ __Vtemp465;
    VlWide<32>/*1023:0*/ __Vtemp495;
    VlWide<64>/*2047:0*/ __Vtemp496;
    VlWide<32>/*1023:0*/ __Vtemp526;
    VlWide<64>/*2047:0*/ __Vtemp527;
    VlWide<32>/*1023:0*/ __Vtemp557;
    VlWide<64>/*2047:0*/ __Vtemp558;
    VlWide<32>/*1023:0*/ __Vtemp588;
    VlWide<64>/*2047:0*/ __Vtemp589;
    VlWide<32>/*1023:0*/ __Vtemp619;
    VlWide<64>/*2047:0*/ __Vtemp620;
    VlWide<32>/*1023:0*/ __Vtemp650;
    VlWide<64>/*2047:0*/ __Vtemp651;
    VlWide<32>/*1023:0*/ __Vtemp681;
    VlWide<64>/*2047:0*/ __Vtemp682;
    VlWide<32>/*1023:0*/ __Vtemp712;
    VlWide<64>/*2047:0*/ __Vtemp713;
    VlWide<32>/*1023:0*/ __Vtemp743;
    VlWide<64>/*2047:0*/ __Vtemp744;
    VlWide<32>/*1023:0*/ __Vtemp774;
    VlWide<64>/*2047:0*/ __Vtemp775;
    VlWide<32>/*1023:0*/ __Vtemp805;
    VlWide<64>/*2047:0*/ __Vtemp806;
    VlWide<32>/*1023:0*/ __Vtemp836;
    VlWide<64>/*2047:0*/ __Vtemp837;
    VlWide<32>/*1023:0*/ __Vtemp867;
    VlWide<64>/*2047:0*/ __Vtemp868;
    VlWide<32>/*1023:0*/ __Vtemp898;
    VlWide<64>/*2047:0*/ __Vtemp899;
    VlWide<32>/*1023:0*/ __Vtemp929;
    VlWide<64>/*2047:0*/ __Vtemp930;
    VlWide<32>/*1023:0*/ __Vtemp960;
    VlWide<64>/*2047:0*/ __Vtemp961;
    VlWide<32>/*1023:0*/ __Vtemp991;
    VlWide<64>/*2047:0*/ __Vtemp992;
    VlWide<3>/*95:0*/ __Vtemp995;
    VlWide<3>/*95:0*/ __Vtemp996;
    VlWide<3>/*95:0*/ __Vtemp998;
    VlWide<3>/*95:0*/ __Vtemp999;
    VlWide<3>/*95:0*/ __Vtemp1000;
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->top__DOT__rv32e__DOT__string_) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"%c",8,(0xffU & vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10));
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
    }
    __Vdly__top__DOT__rv32e__DOT__memory__DOT__state 
        = vlSelf->top__DOT__rv32e__DOT__memory__DOT__state;
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__writeback__DOT__updateInst__DOT__update_indi_TOP(vlSelf->top__DOT__rv32e__DOT__string_, (IData)(vlSelf->top__DOT__rv32e__DOT__writeback__DOT__prevFinish), 0U);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__writeback__DOT__updateInst__DOT__update_pc_TOP(vlSelf->top__DOT__rv32e__DOT__writeback__DOT__prevFinish, vlSelf->top__DOT__rv32e__DOT__writeback__DOT__prevPC, vlSelf->top__DOT__rv32e__DOT__writeback__DOT__prevInst);
    if (VL_UNLIKELY((((~ (((vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr 
                            >> 0x1fU) & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode) 
                                         >> 3U)) & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid))) 
                      & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid) 
                         & (~ (vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr 
                               >> 0x1fU)))) & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"invalid addr 0x%x\n",
                   32,(0xfffffffcU & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr));
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
    }
    __Vtemp30[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp30[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp30[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp30[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp30[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp30[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp30[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp30[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp30[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp30[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp30[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp30[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp30[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp30[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp30[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp30[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp30[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp30[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp30[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp30[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp30[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp30[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp30[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp30[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp30[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp30[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp30[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp30[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp30[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp30[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp30[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp30[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp31, __Vtemp30);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0U, 
                                                                                __Vtemp31[0U]);
    __Vtemp61[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp61[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp61[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp61[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp61[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp61[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp61[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp61[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp61[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp61[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp61[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp61[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp61[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp61[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp61[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp61[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp61[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp61[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp61[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp61[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp61[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp61[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp61[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp61[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp61[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp61[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp61[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp61[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp61[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp61[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp61[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp61[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp62, __Vtemp61);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(1U, 
                                                                                __Vtemp62[1U]);
    __Vtemp92[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp92[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp92[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp92[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp92[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp92[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp92[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp92[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp92[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp92[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp92[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp92[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp92[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp92[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp92[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp92[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp92[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp92[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp92[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp92[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp92[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp92[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp92[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp92[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp92[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp92[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp92[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp92[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp92[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp92[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp92[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp92[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp93, __Vtemp92);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(2U, 
                                                                                __Vtemp93[2U]);
    __Vtemp123[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp123[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp123[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp123[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp123[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp123[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp123[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp123[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp123[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp123[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp123[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp123[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp123[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp123[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp123[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp123[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp123[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp123[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp123[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp123[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp123[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp123[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp123[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp123[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp123[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp123[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp123[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp123[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp123[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp123[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp123[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp123[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp124, __Vtemp123);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(3U, 
                                                                                __Vtemp124[3U]);
    __Vtemp154[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp154[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp154[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp154[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp154[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp154[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp154[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp154[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp154[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp154[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp154[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp154[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp154[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp154[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp154[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp154[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp154[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp154[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp154[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp154[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp154[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp154[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp154[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp154[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp154[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp154[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp154[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp154[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp154[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp154[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp154[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp154[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp155, __Vtemp154);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(4U, 
                                                                                __Vtemp155[4U]);
    __Vtemp185[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp185[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp185[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp185[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp185[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp185[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp185[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp185[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp185[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp185[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp185[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp185[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp185[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp185[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp185[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp185[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp185[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp185[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp185[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp185[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp185[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp185[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp185[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp185[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp185[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp185[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp185[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp185[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp185[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp185[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp185[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp185[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp186, __Vtemp185);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(5U, 
                                                                                __Vtemp186[5U]);
    __Vtemp216[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp216[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp216[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp216[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp216[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp216[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp216[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp216[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp216[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp216[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp216[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp216[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp216[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp216[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp216[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp216[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp216[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp216[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp216[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp216[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp216[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp216[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp216[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp216[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp216[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp216[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp216[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp216[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp216[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp216[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp216[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp216[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp217, __Vtemp216);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(6U, 
                                                                                __Vtemp217[6U]);
    __Vtemp247[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp247[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp247[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp247[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp247[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp247[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp247[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp247[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp247[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp247[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp247[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp247[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp247[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp247[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp247[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp247[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp247[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp247[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp247[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp247[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp247[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp247[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp247[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp247[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp247[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp247[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp247[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp247[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp247[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp247[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp247[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp247[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp248, __Vtemp247);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(7U, 
                                                                                __Vtemp248[7U]);
    __Vtemp278[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp278[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp278[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp278[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp278[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp278[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp278[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp278[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp278[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp278[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp278[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp278[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp278[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp278[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp278[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp278[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp278[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp278[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp278[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp278[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp278[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp278[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp278[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp278[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp278[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp278[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp278[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp278[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp278[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp278[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp278[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp278[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp279, __Vtemp278);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(8U, 
                                                                                __Vtemp279[8U]);
    __Vtemp309[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp309[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp309[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp309[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp309[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp309[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp309[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp309[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp309[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp309[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp309[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp309[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp309[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp309[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp309[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp309[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp309[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp309[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp309[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp309[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp309[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp309[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp309[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp309[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp309[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp309[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp309[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp309[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp309[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp309[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp309[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp309[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp310, __Vtemp309);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(9U, 
                                                                                __Vtemp310[9U]);
    __Vtemp340[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp340[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp340[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp340[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp340[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp340[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp340[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp340[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp340[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp340[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp340[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp340[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp340[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp340[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp340[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp340[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp340[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp340[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp340[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp340[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp340[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp340[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp340[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp340[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp340[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp340[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp340[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp340[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp340[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp340[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp340[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp340[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp341, __Vtemp340);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0xaU, 
                                                                                __Vtemp341[0xaU]);
    __Vtemp371[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp371[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp371[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp371[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp371[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp371[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp371[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp371[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp371[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp371[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp371[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp371[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp371[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp371[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp371[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp371[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp371[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp371[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp371[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp371[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp371[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp371[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp371[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp371[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp371[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp371[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp371[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp371[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp371[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp371[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp371[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp371[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp372, __Vtemp371);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0xbU, 
                                                                                __Vtemp372[0xbU]);
    __Vtemp402[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp402[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp402[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp402[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp402[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp402[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp402[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp402[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp402[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp402[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp402[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp402[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp402[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp402[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp402[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp402[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp402[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp402[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp402[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp402[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp402[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp402[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp402[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp402[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp402[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp402[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp402[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp402[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp402[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp402[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp402[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp402[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp403, __Vtemp402);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0xcU, 
                                                                                __Vtemp403[0xcU]);
    __Vtemp433[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp433[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp433[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp433[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp433[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp433[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp433[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp433[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp433[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp433[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp433[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp433[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp433[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp433[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp433[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp433[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp433[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp433[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp433[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp433[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp433[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp433[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp433[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp433[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp433[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp433[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp433[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp433[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp433[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp433[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp433[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp433[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp434, __Vtemp433);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0xdU, 
                                                                                __Vtemp434[0xdU]);
    __Vtemp464[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp464[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp464[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp464[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp464[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp464[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp464[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp464[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp464[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp464[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp464[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp464[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp464[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp464[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp464[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp464[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp464[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp464[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp464[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp464[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp464[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp464[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp464[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp464[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp464[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp464[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp464[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp464[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp464[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp464[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp464[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp464[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp465, __Vtemp464);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0xeU, 
                                                                                __Vtemp465[0xeU]);
    __Vtemp495[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp495[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp495[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp495[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp495[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp495[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp495[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp495[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp495[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp495[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp495[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp495[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp495[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp495[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp495[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp495[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp495[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp495[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp495[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp495[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp495[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp495[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp495[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp495[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp495[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp495[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp495[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp495[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp495[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp495[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp495[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp495[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp496, __Vtemp495);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0xfU, 
                                                                                __Vtemp496[0xfU]);
    __Vtemp526[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp526[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp526[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp526[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp526[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp526[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp526[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp526[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp526[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp526[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp526[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp526[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp526[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp526[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp526[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp526[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp526[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp526[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp526[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp526[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp526[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp526[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp526[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp526[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp526[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp526[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp526[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp526[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp526[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp526[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp526[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp526[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp527, __Vtemp526);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0x10U, 
                                                                                __Vtemp527[0x10U]);
    __Vtemp557[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp557[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp557[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp557[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp557[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp557[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp557[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp557[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp557[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp557[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp557[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp557[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp557[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp557[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp557[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp557[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp557[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp557[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp557[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp557[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp557[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp557[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp557[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp557[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp557[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp557[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp557[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp557[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp557[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp557[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp557[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp557[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp558, __Vtemp557);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0x11U, 
                                                                                __Vtemp558[0x11U]);
    __Vtemp588[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp588[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp588[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp588[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp588[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp588[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp588[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp588[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp588[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp588[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp588[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp588[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp588[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp588[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp588[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp588[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp588[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp588[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp588[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp588[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp588[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp588[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp588[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp588[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp588[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp588[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp588[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp588[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp588[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp588[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp588[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp588[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp589, __Vtemp588);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0x12U, 
                                                                                __Vtemp589[0x12U]);
    __Vtemp619[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp619[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp619[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp619[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp619[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp619[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp619[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp619[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp619[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp619[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp619[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp619[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp619[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp619[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp619[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp619[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp619[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp619[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp619[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp619[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp619[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp619[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp619[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp619[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp619[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp619[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp619[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp619[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp619[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp619[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp619[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp619[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp620, __Vtemp619);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0x13U, 
                                                                                __Vtemp620[0x13U]);
    __Vtemp650[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp650[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp650[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp650[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp650[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp650[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp650[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp650[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp650[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp650[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp650[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp650[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp650[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp650[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp650[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp650[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp650[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp650[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp650[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp650[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp650[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp650[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp650[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp650[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp650[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp650[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp650[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp650[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp650[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp650[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp650[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp650[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp651, __Vtemp650);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0x14U, 
                                                                                __Vtemp651[0x14U]);
    __Vtemp681[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp681[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp681[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp681[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp681[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp681[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp681[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp681[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp681[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp681[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp681[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp681[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp681[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp681[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp681[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp681[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp681[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp681[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp681[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp681[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp681[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp681[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp681[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp681[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp681[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp681[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp681[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp681[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp681[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp681[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp681[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp681[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp682, __Vtemp681);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0x15U, 
                                                                                __Vtemp682[0x15U]);
    __Vtemp712[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp712[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp712[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp712[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp712[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp712[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp712[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp712[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp712[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp712[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp712[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp712[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp712[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp712[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp712[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp712[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp712[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp712[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp712[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp712[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp712[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp712[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp712[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp712[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp712[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp712[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp712[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp712[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp712[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp712[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp712[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp712[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp713, __Vtemp712);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0x16U, 
                                                                                __Vtemp713[0x16U]);
    __Vtemp743[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp743[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp743[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp743[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp743[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp743[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp743[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp743[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp743[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp743[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp743[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp743[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp743[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp743[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp743[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp743[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp743[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp743[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp743[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp743[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp743[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp743[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp743[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp743[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp743[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp743[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp743[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp743[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp743[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp743[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp743[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp743[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp744, __Vtemp743);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0x17U, 
                                                                                __Vtemp744[0x17U]);
    __Vtemp774[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp774[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp774[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp774[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp774[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp774[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp774[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp774[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp774[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp774[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp774[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp774[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp774[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp774[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp774[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp774[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp774[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp774[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp774[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp774[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp774[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp774[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp774[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp774[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp774[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp774[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp774[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp774[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp774[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp774[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp774[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp774[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp775, __Vtemp774);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0x18U, 
                                                                                __Vtemp775[0x18U]);
    __Vtemp805[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp805[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp805[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp805[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp805[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp805[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp805[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp805[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp805[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp805[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp805[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp805[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp805[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp805[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp805[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp805[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp805[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp805[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp805[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp805[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp805[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp805[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp805[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp805[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp805[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp805[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp805[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp805[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp805[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp805[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp805[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp805[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp806, __Vtemp805);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0x19U, 
                                                                                __Vtemp806[0x19U]);
    __Vtemp836[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp836[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp836[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp836[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp836[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp836[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp836[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp836[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp836[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp836[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp836[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp836[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp836[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp836[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp836[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp836[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp836[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp836[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp836[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp836[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp836[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp836[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp836[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp836[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp836[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp836[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp836[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp836[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp836[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp836[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp836[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp836[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp837, __Vtemp836);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0x1aU, 
                                                                                __Vtemp837[0x1aU]);
    __Vtemp867[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp867[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp867[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp867[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp867[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp867[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp867[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp867[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp867[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp867[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp867[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp867[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp867[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp867[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp867[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp867[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp867[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp867[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp867[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp867[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp867[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp867[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp867[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp867[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp867[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp867[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp867[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp867[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp867[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp867[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp867[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp867[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp868, __Vtemp867);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0x1bU, 
                                                                                __Vtemp868[0x1bU]);
    __Vtemp898[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp898[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp898[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp898[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp898[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp898[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp898[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp898[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp898[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp898[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp898[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp898[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp898[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp898[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp898[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp898[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp898[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp898[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp898[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp898[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp898[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp898[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp898[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp898[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp898[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp898[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp898[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp898[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp898[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp898[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp898[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp898[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp899, __Vtemp898);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0x1cU, 
                                                                                __Vtemp899[0x1cU]);
    __Vtemp929[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp929[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp929[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp929[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp929[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp929[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp929[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp929[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp929[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp929[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp929[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp929[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp929[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp929[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp929[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp929[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp929[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp929[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp929[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp929[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp929[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp929[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp929[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp929[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp929[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp929[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp929[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp929[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp929[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp929[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp929[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp929[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp930, __Vtemp929);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0x1dU, 
                                                                                __Vtemp930[0x1dU]);
    __Vtemp960[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp960[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp960[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp960[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp960[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp960[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp960[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp960[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp960[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp960[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp960[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp960[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp960[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp960[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp960[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp960[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp960[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp960[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp960[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp960[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp960[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp960[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp960[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp960[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp960[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp960[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp960[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp960[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp960[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp960[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp960[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp960[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp961, __Vtemp960);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0x1eU, 
                                                                                __Vtemp961[0x1eU]);
    __Vtemp991[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
    __Vtemp991[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
    __Vtemp991[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
    __Vtemp991[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
    __Vtemp991[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
    __Vtemp991[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
    __Vtemp991[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
    __Vtemp991[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    __Vtemp991[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
    __Vtemp991[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
    __Vtemp991[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
    __Vtemp991[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
    __Vtemp991[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
    __Vtemp991[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
    __Vtemp991[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
    __Vtemp991[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
    __Vtemp991[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
    __Vtemp991[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
    __Vtemp991[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
    __Vtemp991[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
    __Vtemp991[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
    __Vtemp991[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
    __Vtemp991[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
    __Vtemp991[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
    __Vtemp991[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
    __Vtemp991[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
    __Vtemp991[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
    __Vtemp991[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
    __Vtemp991[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
    __Vtemp991[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
    __Vtemp991[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
    __Vtemp991[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                 >> 0x20U));
    VL_EXTEND_WW(2048,1024, __Vtemp992, __Vtemp991);
    Vtop___024root____Vdpiimwrap_top__DOT__rv32e__DOT__regs__DOT__updateRegs__DOT__update_reg_TOP(0x1fU, 
                                                                                __Vtemp992[0x1fU]);
    __Vdlyvset__top__DOT__mem__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__mem__DOT__ram__v1 = 0U;
    __Vdlyvset__top__DOT__mem__DOT__ram__v2 = 0U;
    __Vdlyvset__top__DOT__mem__DOT__ram__v3 = 0U;
    vlSelf->top__DOT__mem__DOT__mtime = ((IData)(vlSelf->reset)
                                          ? 0U : vlSelf->top__DOT__mem__DOT___mtime_T_1);
    vlSelf->top__DOT__rv32e__DOT__fetch__DOT__prevFinish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->top__DOT__rv32e__DOT__fetch__DOT___GEN_1));
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtval = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtval 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_355;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mepc = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mepc 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_354;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__misa = 0x14112dU;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__csrs__DOT__misa 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_365;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_364;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_360;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_363;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_356;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_366;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_361;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_357;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_368;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_367;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0 = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_371;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_370;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_369;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3 = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_374;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_376;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1 = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_372;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2 = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_373;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_377;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mstatus = 0xa0000000U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mstatus 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___mstatus_T_5;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_362;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_359;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) {
        if ((0x301U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            if ((0x300U != (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
                vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie 
                    = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_358;
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT___T_2) 
         & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid))) {
        __Vdlyvval__top__DOT__mem__DOT__ram__v0 = vlSelf->top__DOT__mem__DOT__ram_MPORT_data;
        __Vdlyvset__top__DOT__mem__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__mem__DOT__ram__v0 = 
            (0xfffffffU & (IData)((QData)((IData)((0xfffffffcU 
                                                   & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT___T_2) 
         & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid))) {
        __Vdlyvval__top__DOT__mem__DOT__ram__v1 = vlSelf->top__DOT__mem__DOT__ram_MPORT_2_data;
        __Vdlyvset__top__DOT__mem__DOT__ram__v1 = 1U;
        __Vdlyvdim0__top__DOT__mem__DOT__ram__v1 = 
            (0xfffffffU & ((IData)(1U) + (0xffffffcU 
                                          & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT___T_2) 
         & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid))) {
        __Vdlyvval__top__DOT__mem__DOT__ram__v2 = vlSelf->top__DOT__mem__DOT__ram_MPORT_4_data;
        __Vdlyvset__top__DOT__mem__DOT__ram__v2 = 1U;
        __Vdlyvdim0__top__DOT__mem__DOT__ram__v2 = 
            (0xfffffffU & ((IData)(2U) + (0xffffffcU 
                                          & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT___T_2) 
         & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid))) {
        __Vdlyvval__top__DOT__mem__DOT__ram__v3 = vlSelf->top__DOT__mem__DOT__ram_MPORT_6_data;
        __Vdlyvset__top__DOT__mem__DOT__ram__v3 = 1U;
        __Vdlyvdim0__top__DOT__mem__DOT__ram__v3 = 
            (0xfffffffU & ((IData)(3U) + (0xffffffcU 
                                          & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)));
    }
    vlSelf->top__DOT__rv32e__DOT__writeback__DOT__prevFinish 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_instFinish));
    vlSelf->top__DOT__rv32e__DOT__string_ = (0x7bU 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata));
    if (vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_valid) {
        vlSelf->top__DOT__rv32e__DOT__writeback__DOT__prevPC 
            = vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc;
        vlSelf->top__DOT__rv32e__DOT__writeback__DOT__prevInst 
            = vlSelf->top__DOT__mem_io_instIO_rdata;
    } else {
        vlSelf->top__DOT__rv32e__DOT__writeback__DOT__prevPC 
            = vlSelf->top__DOT__rv32e__DOT__memory_io_mem2wb_pc;
        vlSelf->top__DOT__rv32e__DOT__writeback__DOT__prevInst 
            = ((IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__state)
                ? vlSelf->top__DOT__rv32e__DOT__memory__DOT__inst_r
                : vlSelf->top__DOT__mem_io_instIO_rdata);
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0x1fU == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0x1eU == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0x1dU == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0x1cU == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0x1bU == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0x1aU == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0x19U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0x18U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0x17U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0x16U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0x15U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0x14U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0x13U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0x12U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0x11U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0x10U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0xfU == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0xeU == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0xdU == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0xcU == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0xbU == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((9U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((8U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((7U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((6U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((5U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((4U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((3U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((2U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((1U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0U == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10 = 0U;
    } else if (((IData)(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en) 
                & (0U != vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        if ((0xaU == (0x1fU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
            vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10 
                = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        }
    }
    if (__Vdlyvset__top__DOT__mem__DOT__ram__v0) {
        vlSelf->top__DOT__mem__DOT__ram[__Vdlyvdim0__top__DOT__mem__DOT__ram__v0] 
            = __Vdlyvval__top__DOT__mem__DOT__ram__v0;
    }
    if (__Vdlyvset__top__DOT__mem__DOT__ram__v1) {
        vlSelf->top__DOT__mem__DOT__ram[__Vdlyvdim0__top__DOT__mem__DOT__ram__v1] 
            = __Vdlyvval__top__DOT__mem__DOT__ram__v1;
    }
    if (__Vdlyvset__top__DOT__mem__DOT__ram__v2) {
        vlSelf->top__DOT__mem__DOT__ram[__Vdlyvdim0__top__DOT__mem__DOT__ram__v2] 
            = __Vdlyvval__top__DOT__mem__DOT__ram__v2;
    }
    if (__Vdlyvset__top__DOT__mem__DOT__ram__v3) {
        vlSelf->top__DOT__mem__DOT__ram[__Vdlyvdim0__top__DOT__mem__DOT__ram__v3] 
            = __Vdlyvval__top__DOT__mem__DOT__ram__v3;
    }
    vlSelf->top__DOT__mem__DOT___mtime_T_1 = ((IData)(1U) 
                                              + vlSelf->top__DOT__mem__DOT__mtime);
    if (vlSelf->reset) {
        __Vdly__top__DOT__rv32e__DOT__memory__DOT__state = 0U;
    } else if (vlSelf->top__DOT__rv32e__DOT__memory__DOT__state) {
        if (vlSelf->top__DOT__rv32e__DOT__memory__DOT__state) {
            if (vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid) {
                __Vdly__top__DOT__rv32e__DOT__memory__DOT__state = 0U;
            }
        }
    } else {
        __Vdly__top__DOT__rv32e__DOT__memory__DOT__state 
            = vlSelf->top__DOT__rv32e__DOT__memory__DOT___GEN_0;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__memory__DOT__id_r = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__memory__DOT__mode_r = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__memory__DOT__addr_r = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__memory__DOT__pc_r = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__memory__DOT__inst_r = 0U;
    }
    vlSelf->top__DOT__rv32e__DOT__memory__DOT__state 
        = __Vdly__top__DOT__rv32e__DOT__memory__DOT__state;
    if (vlSelf->reset) {
        vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc = 0x80000000U;
    } else if (vlSelf->top__DOT__rv32e__DOT__writeback_io_instFinish) {
        vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc 
            = ((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_valid)
                ? vlSelf->top__DOT__rv32e__DOT__execute_io_ex2wb_nextPC
                : ((IData)(4U) + vlSelf->top__DOT__rv32e__DOT__memory_io_mem2wb_pc));
    }
    vlSelf->top__DOT__rv32e__DOT__memory_io_mem2wb_pc 
        = ((IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__state)
            ? vlSelf->top__DOT__rv32e__DOT__memory__DOT__pc_r
            : vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc);
    vlSelf->top__DOT__mem_io_instIO_rdata = (((vlSelf->top__DOT__mem__DOT__ram
                                               [(0xfffffffU 
                                                 & ((IData)(3U) 
                                                    + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))] 
                                               << 0x18U) 
                                              | (vlSelf->top__DOT__mem__DOT__ram
                                                 [(0xfffffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))] 
                                                 << 0x10U)) 
                                             | ((vlSelf->top__DOT__mem__DOT__ram
                                                 [(0xfffffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__mem__DOT__ram
                                                [(0xfffffffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)]));
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_307 
        = ((0x2013U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata)) 
           | ((0x3013U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata)) 
              | ((0x4013U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                 | ((0x6013U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                    | ((0x7013U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                       | ((0x1013U == (0xfc00707fU 
                                       & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                          | ((0x5013U == (0xfc00707fU 
                                          & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                             | ((0x40005013U == (0xfc00707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                | ((0x33U == (0xfe00707fU 
                                              & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                   | ((0x40000033U 
                                       == (0xfe00707fU 
                                           & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                      | ((0x1033U == 
                                          (0xfe00707fU 
                                           & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                         | ((0x2033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                            | ((0x3033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                               | ((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                  | ((0x5033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                     | ((0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                        | ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                           | ((0x7033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                              | ((0x2000033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                                 | ((0x2001033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                                    | ((0x2003033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                                       | ((0x2004033U 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                                          | ((0x2005033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                                             | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                                                | ((0x2007033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                                                | ((0x6073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                                                | (0x7073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__mem_io_instIO_rdata))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_379 
        = ((0x17U == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata))
            ? 0U : ((0x6fU == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                     ? 1U : ((0x67U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                              ? 1U : ((0x63U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))
                                       ? 2U : ((0x1063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                ? 2U
                                                : (
                                                   (0x4063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 2U
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                     ? 2U
                                                     : 
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                      ? 2U
                                                      : 
                                                     ((0x7063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                       ? 2U
                                                       : 0U)))))))));
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_269 
        = ((0x67U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
            ? 0U : ((0x63U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                     ? 0U : ((0x1063U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                              ? 0U : ((0x4063U == (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                       ? 0U : ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                ? 0U
                                                : (
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 0U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                     ? 0U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                      ? 4U
                                                      : 
                                                     ((0x1003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                       ? 5U
                                                       : 
                                                      ((0x2003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                        ? 6U
                                                        : 
                                                       ((0x4003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                         ? 0x14U
                                                         : 
                                                        ((0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                          ? 0x15U
                                                          : 
                                                         ((0x23U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                           ? 8U
                                                           : 
                                                          ((0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                            ? 9U
                                                            : 
                                                           ((0x2023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                             ? 0xaU
                                                             : 0U)))))))))))))));
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_11 
        = ((0x180U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                       >> 0x14U)) ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
            : ((0x142U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                           >> 0x14U)) ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                : ((0x100U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                               >> 0x14U)) ? (0xde122U 
                                             & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mstatus)
                    : ((0x104U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                   >> 0x14U)) ? (vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie 
                                                 & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)
                        : ((0x144U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                       >> 0x14U)) ? 
                           (0x222U & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip)
                            : ((0x3b0U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                           >> 0x14U))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                : ((0x3b1U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                               >> 0x14U))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                    : ((0x3b2U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                        : ((0x3b3U 
                                            == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                >> 0x14U))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                            : ((0x3a0U 
                                                == 
                                                (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                    : 
                                                   ((0xf14U 
                                                     == 
                                                     (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                     : 0xabcdabcdU))))))))))));
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183 
        = ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
            ? 5U : ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                     ? 6U : ((0x2000033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                              ? 0xdU : ((0x2001033U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0xeU : (
                                                   (0x2003033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 0xfU
                                                    : 
                                                   ((0x2004033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                     ? 0x11U
                                                     : 
                                                    ((0x2005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                      ? 0x12U
                                                      : 
                                                     ((0x2006033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                       ? 0x13U
                                                       : 
                                                      ((0x2007033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                        ? 0x14U
                                                        : 
                                                       ((0x1073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                         ? 1U
                                                         : 
                                                        ((0x2073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                          ? 5U
                                                          : 
                                                         ((0x3073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                           ? 0x15U
                                                           : 
                                                          ((0x5073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                            ? 1U
                                                            : 
                                                           ((0x6073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                             ? 5U
                                                             : 
                                                            ((0x7073U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                              ? 0x15U
                                                              : 0U)))))))))))))));
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___imm_T_5 
        = ((0xfe0U & (vlSelf->top__DOT__mem_io_instIO_rdata 
                      >> 0x14U)) | (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                             >> 7U)));
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___imm_T_11 
        = ((0x1000U & (vlSelf->top__DOT__mem_io_instIO_rdata 
                       >> 0x13U)) | ((0x800U & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->top__DOT__mem_io_instIO_rdata 
                                            >> 7U)))));
    vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_45 
        = ((0xdU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                              >> 0x14U))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13
            : ((0xcU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                  >> 0x14U))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12
                : ((0xbU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                      >> 0x14U))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11
                    : ((0xaU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U)))
                        ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10
                        : ((9U == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                            >> 0x14U)))
                            ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9
                            : ((8U == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                >> 0x14U)))
                                ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8
                                : ((7U == (0x1fU & 
                                           (vlSelf->top__DOT__mem_io_instIO_rdata 
                                            >> 0x14U)))
                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7
                                    : ((6U == (0x1fU 
                                               & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 0x14U)))
                                        ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6
                                        : ((5U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                            ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U)))
                                                ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0x14U)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0x14U)))
                                                     ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                          >> 0x14U)))
                                                      ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1
                                                      : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0)))))))))))));
    vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_13 
        = ((0xdU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                              >> 0xfU))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13
            : ((0xcU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                  >> 0xfU))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12
                : ((0xbU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                      >> 0xfU))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11
                    : ((0xaU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0xfU)))
                        ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10
                        : ((9U == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                            >> 0xfU)))
                            ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9
                            : ((8U == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                >> 0xfU)))
                                ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8
                                : ((7U == (0x1fU & 
                                           (vlSelf->top__DOT__mem_io_instIO_rdata 
                                            >> 0xfU)))
                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7
                                    : ((6U == (0x1fU 
                                               & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 0xfU)))
                                        ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6
                                        : ((5U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                            ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0xfU)))
                                                ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0xfU)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0xfU)))
                                                     ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                          >> 0xfU)))
                                                      ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1
                                                      : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0)))))))))))));
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125 
        = ((0x2003033U == (0xfe00707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
            ? 1U : ((0x2004033U == (0xfe00707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                     ? 1U : ((0x2005033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                              ? 1U : ((0x2006033U == 
                                       (0xfe00707fU 
                                        & vlSelf->top__DOT__mem_io_instIO_rdata))
                                       ? 1U : ((0x2007033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                ? 1U
                                                : (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 2U
                                                    : 
                                                   ((0x2073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                     ? 2U
                                                     : 
                                                    ((0x3073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                      ? 2U
                                                      : 
                                                     ((0x5073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                       ? 2U
                                                       : 
                                                      ((0x6073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                        ? 2U
                                                        : 
                                                       ((0x7073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                         ? 2U
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0xf00fffffU 
                                                           & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                          ? 0U
                                                          : 
                                                         ((0x100fU 
                                                           == vlSelf->top__DOT__mem_io_instIO_rdata)
                                                           ? 0U
                                                           : 
                                                          ((0x12000073U 
                                                            == 
                                                            (0xfe007fffU 
                                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                            ? 0U
                                                            : 
                                                           ((0x10500073U 
                                                             == vlSelf->top__DOT__mem_io_instIO_rdata)
                                                             ? 0U
                                                             : 
                                                            ((0x6bU 
                                                              == vlSelf->top__DOT__mem_io_instIO_rdata)
                                                              ? 0U
                                                              : 7U))))))))))))))));
    vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_3 
        = ((0x37U == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata)) 
           | ((0x17U == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata)) 
              | ((0x6fU == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                 | ((0x67U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                    | ((0x63U != (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                       & ((0x1063U != (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                          & ((0x4063U != (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                             & ((0x5063U != (0x707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                & ((0x6063U != (0x707fU 
                                                & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                   & ((0x7063U != (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                      & ((3U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                         | ((0x1003U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                            | ((0x2003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                               | ((0x4003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                  | ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                     | ((0x23U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                        & ((0x1023U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                           & ((0x2023U 
                                                               != 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                              & ((0x13U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                                 | (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_307))))))))))))))))))));
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_271 
        = ((0x17U == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata))
            ? 0U : ((0x6fU == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                     ? 0U : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_269)));
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_24 
        = ((0x340U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                       >> 0x14U)) ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch
            : ((0x305U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                           >> 0x14U)) ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec
                : ((0x304U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                               >> 0x14U)) ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                    : ((0x344U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                   >> 0x14U)) ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                        : ((0x342U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                       >> 0x14U)) ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                            : ((0x302U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                           >> 0x14U))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                : ((0x303U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                               >> 0x14U))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                    : ((0x306U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                        : ((0x106U 
                                            == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                >> 0x14U))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                            : ((0x141U 
                                                == 
                                                (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                : (
                                                   (0x143U 
                                                    == 
                                                    (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                    : 
                                                   ((0x140U 
                                                     == 
                                                     (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                     : 
                                                    ((0x105U 
                                                      == 
                                                      (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0x14U))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_11)))))))))))));
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198 
        = ((0x3013U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
            ? 0xcU : ((0x4013U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                       ? 4U : ((0x6013U == (0x707fU 
                                            & vlSelf->top__DOT__mem_io_instIO_rdata))
                                ? 5U : ((0x7013U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 6U : ((0x1013U 
                                                  == 
                                                  (0xfc00707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 7U
                                                  : 
                                                 ((0x5013U 
                                                   == 
                                                   (0xfc00707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                   ? 8U
                                                   : 
                                                  ((0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 9U
                                                    : 
                                                   ((0x33U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                     ? 3U
                                                     : 
                                                    ((0x40000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                      ? 0xaU
                                                      : 
                                                     ((0x1033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                       ? 7U
                                                       : 
                                                      ((0x2033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                        ? 0xbU
                                                        : 
                                                       ((0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                         ? 0xcU
                                                         : 
                                                        ((0x4033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                          ? 4U
                                                          : 
                                                         ((0x5033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                           ? 8U
                                                           : 
                                                          ((0x40005033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                            ? 9U
                                                            : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183))))))))))))))));
    vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_58 
        = ((0x1aU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                               >> 0x14U))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26
            : ((0x19U == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                   >> 0x14U))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25
                : ((0x18U == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                       >> 0x14U))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24
                    : ((0x17U == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                           >> 0x14U)))
                        ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23
                        : ((0x16U == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                               >> 0x14U)))
                            ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22
                            : ((0x15U == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U)))
                                ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21
                                : ((0x14U == (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U)))
                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20
                                    : ((0x13U == (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                        ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                >> 0x14U)))
                                            ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U)))
                                                ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0x14U)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0x14U)))
                                                     ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                          >> 0x14U)))
                                                      ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14
                                                      : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_45)))))))))))));
    vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_26 
        = ((0x1aU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                               >> 0xfU))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26
            : ((0x19U == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                   >> 0xfU))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25
                : ((0x18U == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                       >> 0xfU))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24
                    : ((0x17U == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                           >> 0xfU)))
                        ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23
                        : ((0x16U == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                               >> 0xfU)))
                            ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22
                            : ((0x15U == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0xfU)))
                                ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21
                                : ((0x14U == (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0xfU)))
                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20
                                    : ((0x13U == (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                        ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                >> 0xfU)))
                                            ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0xfU)))
                                                ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0xfU)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0xfU)))
                                                     ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                          >> 0xfU)))
                                                      ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14
                                                      : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_13)))))))))))));
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140 
        = ((0x1013U == (0xfc00707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
            ? 2U : ((0x5013U == (0xfc00707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                     ? 2U : ((0x40005013U == (0xfc00707fU 
                                              & vlSelf->top__DOT__mem_io_instIO_rdata))
                              ? 2U : ((0x33U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))
                                       ? 1U : ((0x40000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                ? 1U
                                                : (
                                                   (0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 1U
                                                    : 
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                     ? 1U
                                                     : 
                                                    ((0x3033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                      ? 1U
                                                      : 
                                                     ((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                       ? 1U
                                                       : 
                                                      ((0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                        ? 1U
                                                        : 
                                                       ((0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                         ? 1U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                          ? 1U
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                           ? 1U
                                                           : 
                                                          ((0x2000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                            ? 1U
                                                            : 
                                                           ((0x2001033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                             ? 1U
                                                             : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125))))))))))))))));
    if ((0x37U == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata))) {
        vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode = 0U;
        vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_2 = 0U;
    } else {
        vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode 
            = vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_271;
        vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_2 
            = vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_271;
    }
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_213 
        = ((0x1063U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
            ? 0U : ((0x4063U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                     ? 0U : ((0x5063U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                              ? 0U : ((0x6063U == (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                       ? 0U : ((0x7063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                ? 0U
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 3U
                                                    : 
                                                   ((0x1003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                     ? 3U
                                                     : 
                                                    ((0x2003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                      ? 3U
                                                      : 
                                                     ((0x4003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                       ? 3U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                        ? 3U
                                                        : 
                                                       ((0x23U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                         ? 3U
                                                         : 
                                                        ((0x1023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                          ? 3U
                                                          : 
                                                         ((0x2023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                           ? 3U
                                                           : 
                                                          ((0x13U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                            ? 3U
                                                            : 
                                                           ((0x2013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                             ? 0xbU
                                                             : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198))))))))))))))));
    vlSelf->top__DOT__rv32e__DOT__regs_io_rs2_data 
        = ((0x1fU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                               >> 0x14U))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31
            : ((0x1eU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                   >> 0x14U))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30
                : ((0x1dU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                       >> 0x14U))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29
                    : ((0x1cU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                           >> 0x14U)))
                        ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28
                        : ((0x1bU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                               >> 0x14U)))
                            ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27
                            : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_58)))));
    vlSelf->top__DOT__rv32e__DOT__regs_io_rs1_data 
        = ((0x1fU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                               >> 0xfU))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31
            : ((0x1eU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                   >> 0xfU))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30
                : ((0x1dU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                       >> 0xfU))) ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29
                    : ((0x1cU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                           >> 0xfU)))
                        ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28
                        : ((0x1bU == (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                               >> 0xfU)))
                            ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27
                            : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_26)))));
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_155 
        = ((0x7063U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
            ? 4U : ((3U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                     ? 2U : ((0x1003U == (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                              ? 2U : ((0x2003U == (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                       ? 2U : ((0x4003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                ? 2U
                                                : (
                                                   (0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 2U
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                     ? 3U
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                      ? 3U
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                       ? 3U
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                        ? 2U
                                                        : 
                                                       ((0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                         ? 2U
                                                         : 
                                                        ((0x3013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                          ? 2U
                                                          : 
                                                         ((0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                           ? 2U
                                                           : 
                                                          ((0x6013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                            ? 2U
                                                            : 
                                                           ((0x7013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                             ? 2U
                                                             : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140))))))))))))))));
    vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode 
        = ((IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__state)
            ? (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__mode_r)
            : (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode));
    vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid 
        = ((IData)(vlSelf->top__DOT__rv32e__DOT__fetch__DOT__prevFinish) 
           & (0U != (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_2)));
    vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_valid 
        = ((IData)(vlSelf->top__DOT__rv32e__DOT__fetch__DOT__prevFinish) 
           & (0U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_2)));
    if ((0x37U == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata))) {
        vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP = 2U;
        vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0 = 5U;
    } else {
        vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP 
            = ((0x17U == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                ? 3U : ((0x6fU == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                         ? 1U : ((0x67U == (0x707fU 
                                            & vlSelf->top__DOT__mem_io_instIO_rdata))
                                  ? 2U : ((0x63U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__mem_io_instIO_rdata))
                                           ? 0U : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_213)))));
        vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0 
            = ((0x17U == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                ? 5U : ((0x6fU == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                         ? 6U : ((0x67U == (0x707fU 
                                            & vlSelf->top__DOT__mem_io_instIO_rdata))
                                  ? 2U : ((0x63U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__mem_io_instIO_rdata))
                                           ? 4U : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 4U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                     ? 4U
                                                     : 
                                                    ((0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                      ? 4U
                                                      : 
                                                     ((0x6063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                       ? 4U
                                                       : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_155)))))))));
    }
    vlSelf->top__DOT__rv32e__DOT__memory__DOT___GEN_0 
        = vlSelf->top__DOT__rv32e__DOT__memory__DOT__state;
    vlSelf->top__DOT__rv32e__DOT__memory_io_mem2wb_valid 
        = (((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid) 
            | (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__state)) 
           & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid));
    vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id 
        = ((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_valid)
            ? (0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                        >> 7U)) : (0x1fU & ((IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__state)
                                             ? (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__id_r)
                                             : (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                >> 7U))));
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10 
        = ((IData)((0x4073U == (0x407fU & vlSelf->top__DOT__mem_io_instIO_rdata)))
            ? (((QData)((IData)(((0x80000U & vlSelf->top__DOT__mem_io_instIO_rdata)
                                  ? 0x7ffffffU : 0U))) 
                << 0x20U) | (QData)((IData)((0x1fU 
                                             & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                >> 0xfU)))))
            : (QData)((IData)(((5U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                                ? vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc
                                : ((6U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                                    ? ((IData)(4U) 
                                       + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)
                                    : vlSelf->top__DOT__rv32e__DOT__regs_io_rs1_data)))));
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___GEN_0 
        = ((6U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
            ? ((0x100000U & (vlSelf->top__DOT__mem_io_instIO_rdata 
                             >> 0xbU)) | ((0xff000U 
                                           & vlSelf->top__DOT__mem_io_instIO_rdata) 
                                          | ((0x800U 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 9U)) 
                                             | (0x7feU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U)))))
            : 0U);
    vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en 
        = (((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_valid) 
            & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_3) 
               & (0U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_2)))) 
           | ((IData)(vlSelf->top__DOT__rv32e__DOT__memory_io_mem2wb_valid) 
              & ((IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__state)
                  ? ((IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__mode_r) 
                     >> 2U) : ((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode) 
                               >> 2U))));
    vlSelf->top__DOT__rv32e__DOT__writeback_io_instFinish 
        = ((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_valid) 
           | (IData)(vlSelf->top__DOT__rv32e__DOT__memory_io_mem2wb_valid));
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___GEN_3 
        = ((3U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
            ? (((- (IData)((1U & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___imm_T_5) 
                                  >> 0xbU)))) << 0xcU) 
               | (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___imm_T_5))
            : ((4U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                ? (((- (IData)((1U & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___imm_T_11) 
                                      >> 0xcU)))) << 0xdU) 
                   | (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___imm_T_11))
                : ((5U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                    ? (0xfffff000U & vlSelf->top__DOT__mem_io_instIO_rdata)
                    : (((- (IData)((1U & (vlSelf->top__DOT__rv32e__DOT__decode__DOT___GEN_0 
                                          >> 0x14U)))) 
                        << 0x15U) | vlSelf->top__DOT__rv32e__DOT__decode__DOT___GEN_0))));
    vlSelf->top__DOT__rv32e__DOT__fetch__DOT___GEN_1 
        = vlSelf->top__DOT__rv32e__DOT__writeback_io_instFinish;
    vlSelf->top__DOT__rv32e__DOT__decode__DOT__imm 
        = ((2U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
            ? (((- (IData)((vlSelf->top__DOT__mem_io_instIO_rdata 
                            >> 0x1fU))) << 0xcU) | 
               (vlSelf->top__DOT__mem_io_instIO_rdata 
                >> 0x14U)) : vlSelf->top__DOT__rv32e__DOT__decode__DOT___GEN_3);
    vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d 
        = ((0x73U == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata))
            ? ((0x301U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                           >> 0x14U)) ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__misa
                : ((0x300U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                               >> 0x14U)) ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mstatus
                    : ((0x341U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                   >> 0x14U)) ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mepc
                        : ((0x343U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                       >> 0x14U)) ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtval
                            : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_24))))
            : (((2U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0)) 
                & (1U == ((0x37U == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                           ? 0U : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_379))))
                ? ((IData)(4U) + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)
                : (((5U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0)) 
                    | (2U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0)))
                    ? ((2U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                        ? (((- (IData)((vlSelf->top__DOT__mem_io_instIO_rdata 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->top__DOT__mem_io_instIO_rdata 
                                        >> 0x14U)) : vlSelf->top__DOT__rv32e__DOT__decode__DOT___GEN_3)
                    : vlSelf->top__DOT__rv32e__DOT__regs_io_rs2_data)));
    vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr 
        = (vlSelf->top__DOT__rv32e__DOT__regs_io_rs1_data 
           + vlSelf->top__DOT__rv32e__DOT__decode__DOT__imm);
    vlSelf->top__DOT__rv32e__DOT__execute_io_ex2wb_nextPC 
        = (((1U == ((0x37U == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                     ? 0U : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_379))) 
            | ((2U == ((0x37U == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                        ? 0U : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_379))) 
               & ((7U == (7U & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                >> 0xcU))) ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                              >= vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                   : ((6U == (7U & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                    >> 0xcU))) ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                  < vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                       : ((5U == (7U & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                        >> 0xcU))) ? 
                          VL_GTES_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                           : ((4U == (7U & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                            >> 0xcU)))
                               ? VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                               : ((1U == (7U & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                >> 0xcU)))
                                   ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                      != vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                   : ((0U == (7U & 
                                              (vlSelf->top__DOT__mem_io_instIO_rdata 
                                               >> 0xcU))) 
                                      & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                         == vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))))))))
            ? ((2U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                ? (0xfffffffeU & (vlSelf->top__DOT__rv32e__DOT__regs_io_rs1_data 
                                  + vlSelf->top__DOT__rv32e__DOT__decode__DOT__imm))
                : (vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc 
                   + vlSelf->top__DOT__rv32e__DOT__decode__DOT__imm))
            : ((IData)(4U) + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc));
    vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_23 
        = ((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)) 
           * (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)));
    vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_70 
        = (0x7fffffffffffffffULL & ((0xaU == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                     ? (QData)((IData)(
                                                       ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                        - vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                     : ((9U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                         ? (QData)((IData)(
                                                           VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), 
                                                                          (0x1fU 
                                                                           & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d))))
                                         : ((8U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                             ? (QData)((IData)(
                                                               ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d))))
                                             : ((7U 
                                                 == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                 ? 
                                                ((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)) 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d))
                                                 : (QData)((IData)(
                                                                   ((6U 
                                                                     == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                                     ? 
                                                                    ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                                     & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                                      ? 
                                                                     ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                                      | vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                                       ? 
                                                                      ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                                       ^ vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                                        ? 
                                                                       ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                                        + vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                                         ? vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                                          ? (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)
                                                                          : 0U)))))))))))));
    vlSelf->top__DOT__mem__DOT___T_2 = (1U & ((vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr 
                                               >> 0x1fU) 
                                              & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode) 
                                                 >> 3U)));
    vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wdata_T_2 
        = (0x7fffffffffffffffULL & ((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs_io_rs2_data)) 
                                    << (0x18U & (vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr 
                                                 << 3U))));
    vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wmask_T_8 
        = (0x7fU & (((2U == (3U & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode)))
                      ? 0xfU : ((1U == (3U & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode)))
                                 ? 3U : (0U == (3U 
                                                & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode))))) 
                    << (3U & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)));
    vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2 
        = (((0x200bff8U == (0xfffffffcU & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr))
             ? vlSelf->top__DOT__mem__DOT__mtime : 
            ((vlSelf->top__DOT__mem__DOT__ram[(0xfffffffU 
                                               & ((IData)(3U) 
                                                  + 
                                                  (0xffffffcU 
                                                   & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))] 
              << 0x18U) | ((vlSelf->top__DOT__mem__DOT__ram
                            [(0xfffffffU & ((IData)(2U) 
                                            + (0xffffffcU 
                                               & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))] 
                            << 0x10U) | ((vlSelf->top__DOT__mem__DOT__ram
                                          [(0xfffffffU 
                                            & ((IData)(1U) 
                                               + (0xffffffcU 
                                                  & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))] 
                                          << 8U) | 
                                         vlSelf->top__DOT__mem__DOT__ram
                                         [(0xffffffcU 
                                           & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)])))) 
           >> (0x18U & (((IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__state)
                          ? vlSelf->top__DOT__rv32e__DOT__memory__DOT__addr_r
                          : vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr) 
                        << 3U)));
    VL_EXTENDS_WI(65,32, __Vtemp995, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10));
    __Vtemp996[0U] = __Vtemp995[0U];
    __Vtemp996[1U] = __Vtemp995[1U];
    __Vtemp996[2U] = (1U & __Vtemp995[2U]);
    VL_EXTENDS_WQ(65,33, __Vtemp998, (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)));
    __Vtemp999[0U] = __Vtemp998[0U];
    __Vtemp999[1U] = __Vtemp998[1U];
    __Vtemp999[2U] = (1U & __Vtemp998[2U]);
    VL_MULS_WWW(65,65,65, __Vtemp1000, __Vtemp996, __Vtemp999);
    vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_88 
        = ((0x12U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
            ? (QData)((IData)(VL_DIV_III(32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
            : ((0x11U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                ? (0x1ffffffffULL & VL_DIVS_QQQ(33, 
                                                (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10))), 
                                                (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,32, vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d))))
                : ((0x10U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                    ? (QData)((IData)(__Vtemp1000[1U]))
                    : ((0xfU == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                        ? (QData)((IData)((vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_23 
                                           >> 0x20U)))
                        : ((0xeU == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                            ? (QData)((IData)((VL_MULS_QQQ(64,64,64, 
                                                           VL_EXTENDS_QI(64,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)), 
                                                           VL_EXTENDS_QI(64,32, vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)) 
                                               >> 0x20U)))
                            : ((0xdU == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                ? (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_23))
                                : ((0x15U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                    ? (QData)((IData)(
                                                      ((~ (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)) 
                                                       & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                    : ((0xcU == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                        ? (QData)((IData)(
                                                          ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                           < vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                        : ((0xbU == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                            ? (QData)((IData)(
                                                              VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                            : vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_70)))))))));
    vlSelf->top__DOT__mem__DOT__ram_MPORT_data = (0xffU 
                                                  & ((1U 
                                                      & (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wmask_T_8))
                                                      ? (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wdata_T_2)
                                                      : 
                                                     vlSelf->top__DOT__mem__DOT__ram
                                                     [
                                                     (0xfffffffU 
                                                      & (IData)((QData)((IData)(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))))]));
    vlSelf->top__DOT__mem__DOT__ram_MPORT_2_data = 
        (0xffU & ((2U & (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wmask_T_8))
                   ? (IData)((vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wdata_T_2 
                              >> 8U)) : vlSelf->top__DOT__mem__DOT__ram
                  [(0xfffffffU & ((IData)(1U) + (0xffffffcU 
                                                 & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))]));
    vlSelf->top__DOT__mem__DOT__ram_MPORT_4_data = 
        (0xffU & ((4U & (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wmask_T_8))
                   ? (IData)((vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wdata_T_2 
                              >> 0x10U)) : vlSelf->top__DOT__mem__DOT__ram
                  [(0xfffffffU & ((IData)(2U) + (0xffffffcU 
                                                 & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))]));
    vlSelf->top__DOT__mem__DOT__ram_MPORT_6_data = 
        (0xffU & ((8U & (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wmask_T_8))
                   ? (IData)((vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wdata_T_2 
                              >> 0x18U)) : vlSelf->top__DOT__mem__DOT__ram
                  [(0xfffffffU & ((IData)(3U) + (0xffffffcU 
                                                 & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))]));
    vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data 
        = ((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_valid)
            ? ((0x73U == (0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                ? vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d
                : (IData)(((0x14U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                            ? (QData)((IData)(VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                            : ((0x13U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                ? (QData)((IData)(VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                : vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_88))))
            : ((6U == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                ? vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2
                : ((0x15U == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                    ? (0xffffU & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                    : ((5U == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                        ? ((((0x8000U & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                              ? 0xffffU : 0U) << 0x10U) 
                           | (0xffffU & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2))
                        : ((0x14U == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                            ? (0xffU & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                            : ((4U == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                                ? ((((0x80U & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                      ? 0xffffffU : 0U) 
                                    << 8U) | (0xffU 
                                              & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2))
                                : 0U))))));
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___mstatus_T_5 
        = ((0x7f818055U & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mstatus) 
           | (0x807e7faaU & ((0x7e7faaU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data) 
                             | (((3U == (3U & (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data 
                                               >> 0xdU))) 
                                 | (3U == (3U & (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data 
                                                 >> 0xfU))))
                                 ? 0x80000000U : 0U))));
    if ((0x341U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_354 
            = vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_355 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtval;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_356 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_357 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_360 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_361 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_362 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_363 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_364 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_365 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_366 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval;
    } else {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_354 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mepc;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_355 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtval);
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_356 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch));
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_357 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec
                    : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec)));
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_360 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                    : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                        : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                            : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                : ((0x342U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause))))));
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_361 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                    : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                        : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                            : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                : ((0x342U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                    : ((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? (0xb309U 
                                           & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg)))))));
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_362 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                    : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                        : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                            : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                : ((0x342U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                    : ((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                        : ((0x303U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? (0x222U 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                            : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg))))))));
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_363 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                    : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                        : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                            : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                : ((0x342U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                    : ((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                        : ((0x303U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                            : ((0x306U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren)))))))));
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_364 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                    : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                        : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                            : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                : ((0x342U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                    : ((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                        : ((0x303U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                            : ((0x306U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                : (
                                                   (0x106U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren))))))))));
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_365 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                    : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                        : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                            : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                : ((0x342U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                    : ((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                        : ((0x303U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                            : ((0x306U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                : (
                                                   (0x106U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                    : 
                                                   ((0x141U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc)))))))))));
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_366 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                    : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                        : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                            : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                : ((0x342U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                    : ((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                        : ((0x303U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                            : ((0x306U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                : (
                                                   (0x106U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                    : 
                                                   ((0x141U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                     : 
                                                    ((0x143U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval))))))))))));
    }
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127 
        = ((0x140U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
            : ((0x105U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                : ((0x180U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                    : ((0x142U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                        : ((0x100U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                            : ((0x104U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                : ((0x144U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                    : ((0x3b0U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                        : ((0x3b1U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                            : ((0x3b2U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                : (
                                                   (0x3b3U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                    : 
                                                   ((0x3a0U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                     : 
                                                    ((0x40U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch)))))))))))));
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154 
        = ((0x141U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
            : ((0x143U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                : ((0x140U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                    : ((0x105U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                        : ((0x180U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                            : ((0x142U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                : ((0x100U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                    : ((0x104U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                        : ((0x144U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                            : ((0x3b0U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                : (
                                                   (0x3b1U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                    : 
                                                   ((0x3b2U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                     : 
                                                    ((0x3b3U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3)))))))))))));
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169 
        = ((0x106U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
            : ((0x141U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                : ((0x143U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                    : ((0x140U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                        : ((0x105U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                            : ((0x180U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                : ((0x142U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                    : ((0x100U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                        : ((0x104U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                            : ((0x144U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                : (
                                                   (0x3b0U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                    : 
                                                   ((0x3b1U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                     : 
                                                    ((0x3b2U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2)))))))))))));
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185 
        = ((0x306U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
            : ((0x106U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                : ((0x141U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                    : ((0x143U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                        : ((0x140U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                            : ((0x105U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                : ((0x180U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                    : ((0x142U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                        : ((0x100U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                            : ((0x104U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                : (
                                                   (0x144U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                    : 
                                                   ((0x3b0U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                     : 
                                                    ((0x3b1U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1)))))))))))));
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202 
        = ((0x303U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
            : ((0x306U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                : ((0x106U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                    : ((0x141U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                        : ((0x143U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                            : ((0x140U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                : ((0x105U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                    : ((0x180U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                        : ((0x142U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                            : ((0x100U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                : (
                                                   (0x104U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                    : 
                                                   ((0x144U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                     : 
                                                    ((0x3b0U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0)))))))))))));
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_280 
        = ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
            : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                : ((0x342U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                    : ((0x302U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                        : ((0x303U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                            : ((0x306U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                : ((0x106U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                    : ((0x141U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                        : ((0x143U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                            : ((0x140U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                : (
                                                   (0x105U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                    : 
                                                   ((0x180U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                     : 
                                                    ((0x142U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause)))))))))))));
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_300 
        = ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
            : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                    : ((0x342U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                        : ((0x302U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                            : ((0x303U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                : ((0x306U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                    : ((0x106U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                        : ((0x141U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                            : ((0x143U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                : (
                                                   (0x140U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                    : 
                                                   ((0x105U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                     : 
                                                    ((0x180U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp)))))))))))));
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_321 
        = ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
            : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                    : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                        : ((0x342U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                            : ((0x302U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                : ((0x303U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                    : ((0x306U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                        : ((0x106U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                            : ((0x141U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                : (
                                                   (0x143U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                    : 
                                                   ((0x140U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                     : 
                                                    ((0x105U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec)))))))))))));
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_343 
        = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
            : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                    : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                        : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                            : ((0x342U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                : ((0x302U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                    : ((0x303U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                        : ((0x306U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                            : ((0x106U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                : (
                                                   (0x141U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                    : 
                                                   ((0x143U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                     : 
                                                    ((0x140U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch)))))))))))));
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201 
        = ((0x303U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
            : ((0x306U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                : ((0x106U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                    : ((0x141U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                        : ((0x143U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                            : ((0x140U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                : ((0x105U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                    : ((0x180U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                        : ((0x142U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                            : ((0x100U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                : (
                                                   (0x104U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                    : 
                                                   ((0x144U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? 
                                                    ((0xfffffdddU 
                                                      & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip) 
                                                     | (0x222U 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data))
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip))))))))))));
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219 
        = ((0x302U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
            : ((0x303U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                : ((0x306U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                    : ((0x106U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                        : ((0x141U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                            : ((0x143U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                : ((0x140U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                    : ((0x105U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                        : ((0x180U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                            : ((0x142U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                : (
                                                   (0x100U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                    : 
                                                   ((0x104U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? 
                                                    ((vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie 
                                                      & (~ vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)) 
                                                     | (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data 
                                                        & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg))
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie))))))))))));
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115 
        = ((0x105U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
            : ((0x180U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                : ((0x142U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                    : ((0x100U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                        : ((0x104U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                            : ((0x144U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                : ((0x3b0U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                    : ((0x3b1U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                        : ((0x3b2U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                            : ((0x3b3U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                : (
                                                   (0x3a0U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                    : 
                                                   ((0x40U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                     : 
                                                    ((0xf14U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid)))))))))))));
    if ((0x341U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))) {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_376 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_374 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_373 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_372 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_371 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_370 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_369 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_368 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_367 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_359 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_358 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie;
    } else {
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_376 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                    : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                        : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                            : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                : ((0x342U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                    : ((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                        : ((0x303U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                            : ((0x306U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                : (
                                                   (0x106U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                    : 
                                                   ((0x141U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                     : 
                                                    ((0x143U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127))))))))))));
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_374 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                    : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                        : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                            : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                : ((0x342U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                    : ((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                        : ((0x303U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                            : ((0x306U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                : (
                                                   (0x106U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154))))))))));
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_373 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                    : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                        : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                            : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                : ((0x342U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                    : ((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                        : ((0x303U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                            : ((0x306U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169)))))))));
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_372 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                    : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                        : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                            : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                : ((0x342U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                    : ((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                        : ((0x303U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                            : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185))))))));
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_371 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                    : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                        : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                            : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                : ((0x342U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                    : ((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202)))))));
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_370 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                    : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_280)));
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_369 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_300));
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_368 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_321);
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_367 
            = vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_343;
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_359 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                    : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                        : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                            : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? ((0xffffffddU & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip) 
                                   | (0x22U & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data))
                                : ((0x342U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                    : ((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201)))))));
        vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_358 
            = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                    : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                        : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                            : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                : ((0x342U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219))))));
    }
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_353 
        = ((0x343U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
            : ((0x340U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                : ((0x305U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                    : ((0x304U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                        : ((0x344U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                            : ((0x342U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                : ((0x302U == (0xfffU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                    : ((0x303U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                        : ((0x306U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                            : ((0x106U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                : (
                                                   (0x141U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                    : 
                                                   ((0x143U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                     : 
                                                    ((0x140U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115)))))))))))));
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_377 
        = ((0x341U == (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
            : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_353);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
