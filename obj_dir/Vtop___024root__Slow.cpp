// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1004;
    VlWide<3>/*95:0*/ __Vtemp1005;
    VlWide<3>/*95:0*/ __Vtemp1007;
    VlWide<3>/*95:0*/ __Vtemp1008;
    VlWide<3>/*95:0*/ __Vtemp1009;
    // Body
    vlSelf->top__DOT__mem__DOT___mtime_T_1 = ((IData)(1U) 
                                              + vlSelf->top__DOT__mem__DOT__mtime);
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
    VL_EXTENDS_WI(65,32, __Vtemp1004, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10));
    __Vtemp1005[0U] = __Vtemp1004[0U];
    __Vtemp1005[1U] = __Vtemp1004[1U];
    __Vtemp1005[2U] = (1U & __Vtemp1004[2U]);
    VL_EXTENDS_WQ(65,33, __Vtemp1007, (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)));
    __Vtemp1008[0U] = __Vtemp1007[0U];
    __Vtemp1008[1U] = __Vtemp1007[1U];
    __Vtemp1008[2U] = (1U & __Vtemp1007[2U]);
    VL_MULS_WWW(65,65,65, __Vtemp1009, __Vtemp1005, __Vtemp1008);
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
                    ? (QData)((IData)(__Vtemp1009[1U]))
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

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_io_instIO_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__execute_io_ex2wb_nextPC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__memory_io_mem2wb_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__memory_io_mem2wb_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rv32e__DOT__writeback_io_instFinish = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rv32e__DOT__regs_io_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs_io_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__string_ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__fetch__DOT__prevFinish = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rv32e__DOT__fetch__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_155 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_213 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_269 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_271 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_307 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_379 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___imm_T_5 = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___imm_T_11 = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___GEN_0 = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___GEN_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10 = VL_RAND_RESET_Q(59);
    vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_23 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_70 = VL_RAND_RESET_Q(63);
    vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_88 = VL_RAND_RESET_Q(63);
    vlSelf->top__DOT__rv32e__DOT__memory__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rv32e__DOT__memory__DOT__id_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rv32e__DOT__memory__DOT__mode_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rv32e__DOT__memory__DOT__addr_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__memory__DOT__pc_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__memory__DOT__inst_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__memory__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wdata_T_2 = VL_RAND_RESET_Q(63);
    vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wmask_T_8 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__writeback__DOT__prevFinish = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rv32e__DOT__writeback__DOT__prevPC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__writeback__DOT__prevInst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_26 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_45 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_58 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__misa = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtval = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_24 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___mstatus_T_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_280 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_300 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_321 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_343 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_353 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_354 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_355 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_356 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_357 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_358 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_359 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_360 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_361 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_362 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_363 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_364 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_365 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_366 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_367 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_368 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_369 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_370 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_371 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_372 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_373 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_374 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_376 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_377 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<268435456; ++__Vi0) {
        vlSelf->top__DOT__mem__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__mem__DOT__ram_MPORT_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mem__DOT__ram_MPORT_2_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mem__DOT__ram_MPORT_4_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mem__DOT__ram_MPORT_6_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mem__DOT__mtime = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mem__DOT___mtime_T_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mem__DOT___T_2 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
