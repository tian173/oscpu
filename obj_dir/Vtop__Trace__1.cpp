// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub1(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 840);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(((0x306U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                       : ((0x106U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                           ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                           : ((0x141U 
                                               == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                               ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                               : ((0x143U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                   : 
                                                  ((0x140U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                    : 
                                                   ((0x105U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause))))))))),32);
            tracep->chgIData(oldp+1,(((0x306U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                       : ((0x106U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                           ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                           : ((0x141U 
                                               == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                               ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                               : ((0x143U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                   : 
                                                  ((0x140U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                    : 
                                                   ((0x105U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                     : 
                                                    ((0x180U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                      : 
                                                     ((0x142U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                       : 
                                                      ((0x100U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie))))))))))),32);
            tracep->chgIData(oldp+2,(((0x306U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                       : ((0x106U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                           ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                           : ((0x141U 
                                               == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                               ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                               : ((0x143U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                   : 
                                                  ((0x140U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                    : 
                                                   ((0x105U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                     : 
                                                    ((0x180U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                      : 
                                                     ((0x142U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                       : 
                                                      ((0x100U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                        : 
                                                       ((0x104U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip)))))))))))),32);
            tracep->chgIData(oldp+3,(((0x306U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                       : ((0x106U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                           ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                           : ((0x141U 
                                               == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                               ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                               : ((0x143U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                   : 
                                                  ((0x140U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                    : 
                                                   ((0x105U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                     : 
                                                    ((0x180U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                      : 
                                                     ((0x142U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                       : 
                                                      ((0x100U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                        : 
                                                       ((0x104U 
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
                                                           : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0))))))))))))),32);
            tracep->chgIData(oldp+4,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185),32);
            tracep->chgIData(oldp+5,(((0x306U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169)),32);
            tracep->chgIData(oldp+6,(((0x306U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                       : ((0x106U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                           ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                           : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154))),32);
            tracep->chgIData(oldp+7,(((0x306U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                       : ((0x106U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                           ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                           : ((0x141U 
                                               == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                               ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                               : ((0x143U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127))))),32);
            tracep->chgIData(oldp+8,(((0x306U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                       : ((0x106U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                           ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                           : ((0x141U 
                                               == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                               ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                               : ((0x143U 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115)))))),32);
            tracep->chgIData(oldp+9,(((0x303U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? (0x222U & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)),32);
            tracep->chgIData(oldp+10,(((0x303U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                        : ((0x306U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                            : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren))),32);
            tracep->chgIData(oldp+11,(((0x303U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                        : ((0x306U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                            : ((0x106U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren)))),32);
            tracep->chgIData(oldp+12,(((0x303U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                        : ((0x306U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                            : ((0x106U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                : (
                                                   (0x141U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc))))),32);
            tracep->chgIData(oldp+13,(((0x303U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                        : ((0x306U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                            : ((0x106U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                : (
                                                   (0x141U 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval)))))),32);
            tracep->chgIData(oldp+14,(((0x303U == (0xfffU 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch))))))),32);
            tracep->chgIData(oldp+15,(((0x303U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                        : ((0x306U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                            : ((0x106U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                : (
                                                   (0x141U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                    : 
                                                   ((0x143U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec)))))))),32);
            tracep->chgIData(oldp+16,(((0x303U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                        : ((0x306U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                            : ((0x106U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                : (
                                                   (0x141U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                    : 
                                                   ((0x143U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                     : 
                                                    ((0x140U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp))))))))),32);
            tracep->chgIData(oldp+17,(((0x303U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                        : ((0x306U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                            : ((0x106U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                : (
                                                   (0x141U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                    : 
                                                   ((0x143U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                     : 
                                                    ((0x140U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                      : 
                                                     ((0x105U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause)))))))))),32);
            tracep->chgIData(oldp+18,(((0x303U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                        : ((0x306U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                            : ((0x106U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                : (
                                                   (0x141U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                    : 
                                                   ((0x143U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                     : 
                                                    ((0x140U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                      : 
                                                     ((0x105U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                       : 
                                                      ((0x180U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                        : 
                                                       ((0x142U 
                                                         == 
                                                         (0xfffU 
                                                          & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                         : 
                                                        ((0x100U 
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
                                                           : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie)))))))))))),32);
            tracep->chgIData(oldp+19,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201),32);
            tracep->chgIData(oldp+20,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202),32);
            tracep->chgIData(oldp+21,(((0x303U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185)),32);
            tracep->chgIData(oldp+22,(((0x303U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                        : ((0x306U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                            : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169))),32);
            tracep->chgIData(oldp+23,(((0x303U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                        : ((0x306U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                            : ((0x106U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154)))),32);
            tracep->chgIData(oldp+24,(((0x303U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                        : ((0x306U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                            : ((0x106U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                : (
                                                   (0x141U 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127)))))),32);
            tracep->chgIData(oldp+25,(((0x303U == (0xfffU 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115))))))),32);
            tracep->chgIData(oldp+26,(((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? (0xb309U 
                                           & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg)),32);
            tracep->chgIData(oldp+27,(((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                        : ((0x303U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? (0x222U 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                            : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg))),32);
            tracep->chgIData(oldp+28,(((0x302U == (0xfffU 
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
                                                : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren)))),32);
            tracep->chgIData(oldp+29,(((0x302U == (0xfffU 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren))))),32);
            tracep->chgIData(oldp+30,(((0x302U == (0xfffU 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc)))))),32);
            tracep->chgIData(oldp+31,(((0x302U == (0xfffU 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval))))))),32);
            tracep->chgIData(oldp+32,(((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                        : ((0x303U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                            : ((0x306U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                : (
                                                   (0x106U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                    : 
                                                   ((0x141U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch)))))))),32);
            tracep->chgIData(oldp+33,(((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                        : ((0x303U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                            : ((0x306U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                : (
                                                   (0x106U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                    : 
                                                   ((0x141U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                     : 
                                                    ((0x143U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec))))))))),32);
            tracep->chgIData(oldp+34,(((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                        : ((0x303U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                            : ((0x306U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                : (
                                                   (0x106U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                    : 
                                                   ((0x141U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                     : 
                                                    ((0x143U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                      : 
                                                     ((0x140U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp)))))))))),32);
            tracep->chgIData(oldp+35,(((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                        : ((0x303U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                            : ((0x306U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                : (
                                                   (0x106U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                    : 
                                                   ((0x141U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                     : 
                                                    ((0x143U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                      : 
                                                     ((0x140U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                       : 
                                                      ((0x105U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause))))))))))),32);
            tracep->chgIData(oldp+36,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219),32);
            tracep->chgIData(oldp+37,(((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201)),32);
            tracep->chgIData(oldp+38,(((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202)),32);
            tracep->chgIData(oldp+39,(((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                        : ((0x303U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                            : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185))),32);
            tracep->chgIData(oldp+40,(((0x302U == (0xfffU 
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
                                                : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169)))),32);
            tracep->chgIData(oldp+41,(((0x302U == (0xfffU 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154))))),32);
            tracep->chgIData(oldp+42,(((0x302U == (0xfffU 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127))))))),32);
            tracep->chgIData(oldp+43,(((0x302U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                        : ((0x303U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                            : ((0x306U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                : (
                                                   (0x106U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                    : 
                                                   ((0x141U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115)))))))),32);
            tracep->chgIData(oldp+44,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause)),32);
            tracep->chgIData(oldp+45,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                        : ((0x302U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? (0xb309U 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                            : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg))),32);
            tracep->chgIData(oldp+46,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                        : ((0x302U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                            : ((0x303U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? (0x222U 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                                : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)))),32);
            tracep->chgIData(oldp+47,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                        : ((0x302U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                            : ((0x303U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                : (
                                                   (0x306U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren))))),32);
            tracep->chgIData(oldp+48,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                        : ((0x302U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                            : ((0x303U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                : (
                                                   (0x306U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                    : 
                                                   ((0x106U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren)))))),32);
            tracep->chgIData(oldp+49,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                        : ((0x302U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                            : ((0x303U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                : (
                                                   (0x306U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                    : 
                                                   ((0x106U 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc))))))),32);
            tracep->chgIData(oldp+50,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                        : ((0x302U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                            : ((0x303U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                : (
                                                   (0x306U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                    : 
                                                   ((0x106U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval)))))))),32);
            tracep->chgIData(oldp+51,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                        : ((0x302U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                            : ((0x303U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                : (
                                                   (0x306U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                    : 
                                                   ((0x106U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                     : 
                                                    ((0x141U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch))))))))),32);
            tracep->chgIData(oldp+52,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                        : ((0x302U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                            : ((0x303U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                : (
                                                   (0x306U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                    : 
                                                   ((0x106U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                     : 
                                                    ((0x141U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                      : 
                                                     ((0x143U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec)))))))))),32);
            tracep->chgIData(oldp+53,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                        : ((0x302U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                            : ((0x303U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                : (
                                                   (0x306U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                    : 
                                                   ((0x106U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                     : 
                                                    ((0x141U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                      : 
                                                     ((0x143U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                       : 
                                                      ((0x140U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp))))))))))),32);
            tracep->chgIData(oldp+54,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                        : ((0x302U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                            : ((0x303U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                : (
                                                   (0x306U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                    : 
                                                   ((0x106U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                     : 
                                                    ((0x141U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                      : 
                                                     ((0x143U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                       : 
                                                      ((0x140U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                        : 
                                                       ((0x105U 
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
                                                           : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause)))))))))))),32);
            tracep->chgIData(oldp+55,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219)),32);
            tracep->chgIData(oldp+56,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                        : ((0x302U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                            : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201))),32);
            tracep->chgIData(oldp+57,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                        : ((0x302U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                            : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202))),32);
            tracep->chgIData(oldp+58,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                        : ((0x302U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                            : ((0x303U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185)))),32);
            tracep->chgIData(oldp+59,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                        : ((0x302U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                            : ((0x303U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                : (
                                                   (0x306U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169))))),32);
            tracep->chgIData(oldp+60,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                        : ((0x302U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                            : ((0x303U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                : (
                                                   (0x306U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                    : 
                                                   ((0x106U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154)))))),32);
            tracep->chgIData(oldp+61,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                        : ((0x302U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                            : ((0x303U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                : (
                                                   (0x306U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                    : 
                                                   ((0x106U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127)))))))),32);
            tracep->chgIData(oldp+62,(((0x342U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                        : ((0x302U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                            : ((0x303U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                : (
                                                   (0x306U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                    : 
                                                   ((0x106U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                     : 
                                                    ((0x141U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115))))))))),32);
            tracep->chgIData(oldp+63,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? ((0xffffffddU 
                                            & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip) 
                                           | (0x22U 
                                              & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data))
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201)))),32);
            tracep->chgIData(oldp+64,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                            : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause))),32);
            tracep->chgIData(oldp+65,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? (0xb309U 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                                : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg)))),32);
            tracep->chgIData(oldp+66,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                : (
                                                   (0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? 
                                                   (0x222U 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg))))),32);
            tracep->chgIData(oldp+67,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                : (
                                                   (0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren)))))),32);
            tracep->chgIData(oldp+68,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                : (
                                                   (0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                     : 
                                                    ((0x106U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren))))))),32);
            tracep->chgIData(oldp+69,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                : (
                                                   (0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                     : 
                                                    ((0x106U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc)))))))),32);
            tracep->chgIData(oldp+70,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                : (
                                                   (0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                     : 
                                                    ((0x106U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval))))))))),32);
            tracep->chgIData(oldp+71,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                : (
                                                   (0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                     : 
                                                    ((0x106U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                      : 
                                                     ((0x141U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch)))))))))),32);
            tracep->chgIData(oldp+72,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                : (
                                                   (0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                     : 
                                                    ((0x106U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                      : 
                                                     ((0x141U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                       : 
                                                      ((0x143U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec))))))))))),32);
            tracep->chgIData(oldp+73,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                : (
                                                   (0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                     : 
                                                    ((0x106U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                      : 
                                                     ((0x141U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                       : 
                                                      ((0x143U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                        : 
                                                       ((0x140U 
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
                                                           : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp)))))))))))),32);
            tracep->chgIData(oldp+74,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                : (
                                                   (0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                     : 
                                                    ((0x106U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                      : 
                                                     ((0x141U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                       : 
                                                      ((0x143U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                        : 
                                                       ((0x140U 
                                                         == 
                                                         (0xfffU 
                                                          & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                         : 
                                                        ((0x105U 
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
                                                            : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause))))))))))))),32);
            tracep->chgIData(oldp+75,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                            : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219))),32);
            tracep->chgIData(oldp+76,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202)))),32);
            tracep->chgIData(oldp+77,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                : (
                                                   (0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185))))),32);
            tracep->chgIData(oldp+78,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                : (
                                                   (0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169)))))),32);
            tracep->chgIData(oldp+79,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                : (
                                                   (0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                     : 
                                                    ((0x106U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154))))))),32);
            tracep->chgIData(oldp+80,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                : (
                                                   (0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                     : 
                                                    ((0x106U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127))))))))),32);
            tracep->chgIData(oldp+81,(((0x344U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                : (
                                                   (0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                     : 
                                                    ((0x106U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                      : 
                                                     ((0x141U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115)))))))))),32);
            tracep->chgIData(oldp+82,(((0x304U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                        : ((0x344U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219)))),32);
            tracep->chgIData(oldp+83,(((0x304U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                        : ((0x344U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? ((0xffffffddU 
                                                & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip) 
                                               | (0x22U 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data))
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                : (
                                                   (0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201))))),32);
            tracep->chgIData(oldp+84,(((0x304U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                        : ((0x344U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause)))),32);
            tracep->chgIData(oldp+85,(((0x304U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                        : ((0x344U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                : (
                                                   (0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? 
                                                   (0xb309U 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg))))),32);
            tracep->chgIData(oldp+86,(((0x304U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                        : ((0x344U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                : (
                                                   (0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? 
                                                    (0x222U 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)))))),32);
            tracep->chgIData(oldp+87,(((0x304U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                        : ((0x344U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                : (
                                                   (0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren))))))),32);
            tracep->chgIData(oldp+88,(((0x304U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                        : ((0x344U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                : (
                                                   (0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                      : 
                                                     ((0x106U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren)))))))),32);
            tracep->chgIData(oldp+89,(((0x304U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                        : ((0x344U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                : (
                                                   (0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                      : 
                                                     ((0x106U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc))))))))),32);
            tracep->chgIData(oldp+90,(((0x304U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                        : ((0x344U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                : (
                                                   (0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                      : 
                                                     ((0x106U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval)))))))))),32);
            tracep->chgIData(oldp+91,(((0x304U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                        : ((0x344U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                : (
                                                   (0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                      : 
                                                     ((0x106U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                       : 
                                                      ((0x141U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch))))))))))),32);
            tracep->chgIData(oldp+92,(((0x304U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                        : ((0x344U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                : (
                                                   (0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                      : 
                                                     ((0x106U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                       : 
                                                      ((0x141U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                        : 
                                                       ((0x143U 
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
                                                           : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec)))))))))))),32);
            tracep->chgIData(oldp+93,(((0x304U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                        : ((0x344U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                : (
                                                   (0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                      : 
                                                     ((0x106U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                       : 
                                                      ((0x141U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                        : 
                                                       ((0x143U 
                                                         == 
                                                         (0xfffU 
                                                          & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                         : 
                                                        ((0x140U 
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
                                                            : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp))))))))))))),32);
            tracep->chgIData(oldp+94,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_280),32);
            tracep->chgIData(oldp+95,(((0x304U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                        : ((0x344U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                : (
                                                   (0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202))))),32);
            tracep->chgIData(oldp+96,(((0x304U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                        : ((0x344U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                : (
                                                   (0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185)))))),32);
            tracep->chgIData(oldp+97,(((0x304U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                        : ((0x344U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                : (
                                                   (0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169))))))),32);
            tracep->chgIData(oldp+98,(((0x304U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                        : ((0x344U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                : (
                                                   (0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                      : 
                                                     ((0x106U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154)))))))),32);
            tracep->chgIData(oldp+99,(((0x304U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                        : ((0x344U 
                                            == (0xfffU 
                                                & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                            : ((0x342U 
                                                == 
                                                (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                : (
                                                   (0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                      : 
                                                     ((0x106U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127)))))))))),32);
            tracep->chgIData(oldp+100,(((0x304U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : ((0x344U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                             : ((0x342U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                 : 
                                                ((0x302U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                  : 
                                                 ((0x303U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                   : 
                                                  ((0x306U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                    : 
                                                   ((0x106U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                     : 
                                                    ((0x141U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115))))))))))),32);
            tracep->chgIData(oldp+101,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec)),32);
            tracep->chgIData(oldp+102,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                             : ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219))))),32);
            tracep->chgIData(oldp+103,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                             : ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? 
                                                ((0xffffffddU 
                                                  & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip) 
                                                 | (0x22U 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data))
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201)))))),32);
            tracep->chgIData(oldp+104,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                             : ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause))))),32);
            tracep->chgIData(oldp+105,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                             : ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? 
                                                  (0xb309U 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg)))))),32);
            tracep->chgIData(oldp+106,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                             : ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                   : 
                                                  ((0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? 
                                                   (0x222U 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg))))))),32);
            tracep->chgIData(oldp+107,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                             : ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                   : 
                                                  ((0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren)))))))),32);
            tracep->chgIData(oldp+108,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                             : ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                   : 
                                                  ((0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                     : 
                                                    ((0x106U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren))))))))),32);
            tracep->chgIData(oldp+109,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                             : ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                   : 
                                                  ((0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                     : 
                                                    ((0x106U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc)))))))))),32);
            tracep->chgIData(oldp+110,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                             : ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                   : 
                                                  ((0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                     : 
                                                    ((0x106U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval))))))))))),32);
            tracep->chgIData(oldp+111,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                             : ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                   : 
                                                  ((0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                     : 
                                                    ((0x106U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                      : 
                                                     ((0x141U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch)))))))))))),32);
            tracep->chgIData(oldp+112,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                             : ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                   : 
                                                  ((0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                     : 
                                                    ((0x106U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                      : 
                                                     ((0x141U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                       : 
                                                      ((0x143U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec))))))))))))),32);
            tracep->chgIData(oldp+113,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_300),32);
            tracep->chgIData(oldp+114,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_280)),32);
            tracep->chgIData(oldp+115,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                             : ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202)))))),32);
            tracep->chgIData(oldp+116,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                             : ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                   : 
                                                  ((0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185))))))),32);
            tracep->chgIData(oldp+117,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                             : ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                   : 
                                                  ((0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169)))))))),32);
            tracep->chgIData(oldp+118,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                             : ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                   : 
                                                  ((0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                     : 
                                                    ((0x106U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154))))))))),32);
            tracep->chgIData(oldp+119,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                             : ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                   : 
                                                  ((0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                     : 
                                                    ((0x106U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127))))))))))),32);
            tracep->chgIData(oldp+120,(((0x305U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                             : ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                   : 
                                                  ((0x303U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                     : 
                                                    ((0x106U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                      : 
                                                     ((0x141U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115)))))))))))),32);
            tracep->chgIData(oldp+121,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch)),32);
            tracep->chgIData(oldp+122,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec))),32);
            tracep->chgIData(oldp+123,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                 : 
                                                ((0x344U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219)))))),32);
            tracep->chgIData(oldp+124,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                 : 
                                                ((0x344U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? 
                                                 ((0xffffffddU 
                                                   & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip) 
                                                  | (0x22U 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data))
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                   : 
                                                  ((0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201))))))),32);
            tracep->chgIData(oldp+125,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                                 : 
                                                ((0x344U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause)))))),32);
            tracep->chgIData(oldp+126,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                 : 
                                                ((0x344U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                   : 
                                                  ((0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? 
                                                   (0xb309U 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg))))))),32);
            tracep->chgIData(oldp+127,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                 : 
                                                ((0x344U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                   : 
                                                  ((0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? 
                                                    (0x222U 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)))))))),32);
            tracep->chgIData(oldp+128,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                 : 
                                                ((0x344U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                   : 
                                                  ((0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren))))))))),32);
            tracep->chgIData(oldp+129,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                 : 
                                                ((0x344U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                   : 
                                                  ((0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                      : 
                                                     ((0x106U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren)))))))))),32);
            tracep->chgIData(oldp+130,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                 : 
                                                ((0x344U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                   : 
                                                  ((0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                      : 
                                                     ((0x106U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc))))))))))),32);
            tracep->chgIData(oldp+131,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                 : 
                                                ((0x344U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                   : 
                                                  ((0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                      : 
                                                     ((0x106U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval)))))))))))),32);
            tracep->chgIData(oldp+132,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                 : 
                                                ((0x344U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                   : 
                                                  ((0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                      : 
                                                     ((0x106U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                                       : 
                                                      ((0x141U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch))))))))))))),32);
            tracep->chgIData(oldp+133,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_321),32);
            tracep->chgIData(oldp+134,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_300)),32);
            tracep->chgIData(oldp+135,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_280))),32);
            tracep->chgIData(oldp+136,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                 : 
                                                ((0x344U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                   : 
                                                  ((0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202))))))),32);
            tracep->chgIData(oldp+137,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                 : 
                                                ((0x344U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                   : 
                                                  ((0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185)))))))),32);
            tracep->chgIData(oldp+138,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                 : 
                                                ((0x344U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                   : 
                                                  ((0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169))))))))),32);
            tracep->chgIData(oldp+139,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                 : 
                                                ((0x344U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                   : 
                                                  ((0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                      : 
                                                     ((0x106U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154)))))))))),32);
            tracep->chgIData(oldp+140,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                 : 
                                                ((0x344U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                   : 
                                                  ((0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                      : 
                                                     ((0x106U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127)))))))))))),32);
            tracep->chgIData(oldp+141,(((0x340U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : ((0x305U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                             : ((0x304U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                 : 
                                                ((0x344U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                   : 
                                                  ((0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                     : 
                                                    ((0x306U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                      : 
                                                     ((0x106U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                       : 
                                                      ((0x141U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115))))))))))))),32);
            tracep->chgIData(oldp+142,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtval)),32);
            tracep->chgIData(oldp+143,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch))),32);
            tracep->chgIData(oldp+144,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec
                                             : ((0x305U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec)))),32);
            tracep->chgIData(oldp+145,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                             : ((0x305U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                 : 
                                                ((0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                  : 
                                                 ((0x344U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219))))))),32);
            tracep->chgIData(oldp+146,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                             : ((0x305U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                 : 
                                                ((0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                  : 
                                                 ((0x344U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? 
                                                  ((0xffffffddU 
                                                    & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip) 
                                                   | (0x22U 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data))
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201)))))))),32);
            tracep->chgIData(oldp+147,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                             : ((0x305U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                                 : 
                                                ((0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                                  : 
                                                 ((0x344U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause))))))),32);
            tracep->chgIData(oldp+148,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                             : ((0x305U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                 : 
                                                ((0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                  : 
                                                 ((0x344U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? 
                                                    (0xb309U 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg)))))))),32);
            tracep->chgIData(oldp+149,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                             : ((0x305U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                 : 
                                                ((0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                  : 
                                                 ((0x344U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                     : 
                                                    ((0x303U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? 
                                                     (0x222U 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg))))))))),32);
            tracep->chgIData(oldp+150,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                             : ((0x305U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                 : 
                                                ((0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                  : 
                                                 ((0x344U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                     : 
                                                    ((0x303U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                      : 
                                                     ((0x306U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren)))))))))),32);
            tracep->chgIData(oldp+151,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                             : ((0x305U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                 : 
                                                ((0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                  : 
                                                 ((0x344U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                     : 
                                                    ((0x303U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                      : 
                                                     ((0x306U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                       : 
                                                      ((0x106U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                        ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren))))))))))),32);
            tracep->chgIData(oldp+152,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                             : ((0x305U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                 : 
                                                ((0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                  : 
                                                 ((0x344U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                     : 
                                                    ((0x303U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                      : 
                                                     ((0x306U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                       : 
                                                      ((0x106U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc)))))))))))),32);
            tracep->chgIData(oldp+153,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                             : ((0x305U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                 : 
                                                ((0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                  : 
                                                 ((0x344U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                     : 
                                                    ((0x303U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                      : 
                                                     ((0x306U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                                       : 
                                                      ((0x106U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval))))))))))))),32);
            tracep->chgIData(oldp+154,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_343),32);
            tracep->chgIData(oldp+155,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_321)),32);
            tracep->chgIData(oldp+156,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_300))),32);
            tracep->chgIData(oldp+157,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                             : ((0x305U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_280)))),32);
            tracep->chgIData(oldp+158,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                             : ((0x305U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                 : 
                                                ((0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                  : 
                                                 ((0x344U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202)))))))),32);
            tracep->chgIData(oldp+159,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                             : ((0x305U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                 : 
                                                ((0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                  : 
                                                 ((0x344U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                     : 
                                                    ((0x303U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185))))))))),32);
            tracep->chgIData(oldp+160,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                             : ((0x305U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                 : 
                                                ((0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                  : 
                                                 ((0x344U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                     : 
                                                    ((0x303U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                      : 
                                                     ((0x306U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169)))))))))),32);
            tracep->chgIData(oldp+161,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                             : ((0x305U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                 : 
                                                ((0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                  : 
                                                 ((0x344U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                     : 
                                                    ((0x303U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                      : 
                                                     ((0x306U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                       : 
                                                      ((0x106U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154))))))))))),32);
            tracep->chgIData(oldp+162,(((0x343U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                         : ((0x340U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                             : ((0x305U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                 : 
                                                ((0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                  : 
                                                 ((0x344U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                     : 
                                                    ((0x303U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                      : 
                                                     ((0x306U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                       : 
                                                      ((0x106U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127))))))))))))),32);
            tracep->chgIData(oldp+163,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_353),32);
            tracep->chgIData(oldp+164,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mepc)),32);
            tracep->chgIData(oldp+165,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtval
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtval))),32);
            tracep->chgIData(oldp+166,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch
                                             : ((0x340U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch)))),32);
            tracep->chgIData(oldp+167,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec
                                             : ((0x340U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec
                                                 : 
                                                ((0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec))))),32);
            tracep->chgIData(oldp+168,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                             : ((0x340U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                 : 
                                                ((0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                  : 
                                                 ((0x304U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                   : 
                                                  ((0x344U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219)))))))),32);
            tracep->chgIData(oldp+169,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                             : ((0x340U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                 : 
                                                ((0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                  : 
                                                 ((0x304U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                   : 
                                                  ((0x344U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? 
                                                   ((0xffffffddU 
                                                     & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip) 
                                                    | (0x22U 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data))
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                     : 
                                                    ((0x302U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201))))))))),32);
            tracep->chgIData(oldp+170,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                             : ((0x340U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                                 : 
                                                ((0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                                  : 
                                                 ((0x304U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                                   : 
                                                  ((0x344U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause)))))))),32);
            tracep->chgIData(oldp+171,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                             : ((0x340U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                 : 
                                                ((0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                  : 
                                                 ((0x304U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                   : 
                                                  ((0x344U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                     : 
                                                    ((0x302U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? 
                                                     (0xb309U 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg))))))))),32);
            tracep->chgIData(oldp+172,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                             : ((0x340U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                 : 
                                                ((0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                  : 
                                                 ((0x304U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                   : 
                                                  ((0x344U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                     : 
                                                    ((0x302U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                      : 
                                                     ((0x303U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? 
                                                      (0x222U 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)))))))))),32);
            tracep->chgIData(oldp+173,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                             : ((0x340U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                 : 
                                                ((0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                  : 
                                                 ((0x304U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                   : 
                                                  ((0x344U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                     : 
                                                    ((0x302U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                      : 
                                                     ((0x303U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                       : 
                                                      ((0x306U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                        ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren))))))))))),32);
            tracep->chgIData(oldp+174,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                             : ((0x340U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                 : 
                                                ((0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                  : 
                                                 ((0x304U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                   : 
                                                  ((0x344U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                     : 
                                                    ((0x302U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                      : 
                                                     ((0x303U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                       : 
                                                      ((0x306U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                        : 
                                                       ((0x106U 
                                                         == 
                                                         (0xfffU 
                                                          & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren)))))))))))),32);
            tracep->chgIData(oldp+175,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                             : ((0x340U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                 : 
                                                ((0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                  : 
                                                 ((0x304U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                   : 
                                                  ((0x344U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                     : 
                                                    ((0x302U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                      : 
                                                     ((0x303U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                       : 
                                                      ((0x306U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                        : 
                                                       ((0x106U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc))))))))))))),32);
            tracep->chgIData(oldp+176,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_366),32);
            tracep->chgIData(oldp+177,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_343)),32);
            tracep->chgIData(oldp+178,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_321))),32);
            tracep->chgIData(oldp+179,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                             : ((0x340U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_300)))),32);
            tracep->chgIData(oldp+180,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                             : ((0x340U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                 : 
                                                ((0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_280))))),32);
            tracep->chgIData(oldp+181,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                             : ((0x340U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                 : 
                                                ((0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                  : 
                                                 ((0x304U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                   : 
                                                  ((0x344U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                     : 
                                                    ((0x302U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202))))))))),32);
            tracep->chgIData(oldp+182,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                             : ((0x340U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                 : 
                                                ((0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                  : 
                                                 ((0x304U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                   : 
                                                  ((0x344U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                     : 
                                                    ((0x302U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                      : 
                                                     ((0x303U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185)))))))))),32);
            tracep->chgIData(oldp+183,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                             : ((0x340U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                 : 
                                                ((0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                  : 
                                                 ((0x304U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                   : 
                                                  ((0x344U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                     : 
                                                    ((0x302U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                      : 
                                                     ((0x303U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                       : 
                                                      ((0x306U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169))))))))))),32);
            tracep->chgIData(oldp+184,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                             : ((0x340U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                 : 
                                                ((0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                  : 
                                                 ((0x304U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                   : 
                                                  ((0x344U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                     : 
                                                    ((0x302U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                      : 
                                                     ((0x303U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                       : 
                                                      ((0x306U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                        : 
                                                       ((0x106U 
                                                         == 
                                                         (0xfffU 
                                                          & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154)))))))))))),32);
            tracep->chgIData(oldp+185,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_376),32);
            tracep->chgIData(oldp+186,(((0x341U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_353)),32);
            tracep->chgIData(oldp+187,((0xfffffffU 
                                        & ((IData)(3U) 
                                           + (0xffffffcU 
                                              & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))),28);
            tracep->chgCData(oldp+188,(vlSelf->top__DOT__mem__DOT__ram
                                       [(0xfffffffU 
                                         & ((IData)(3U) 
                                            + (0xffffffcU 
                                               & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))]),8);
            tracep->chgIData(oldp+189,((0xfffffffU 
                                        & ((IData)(2U) 
                                           + (0xffffffcU 
                                              & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))),28);
            tracep->chgCData(oldp+190,(vlSelf->top__DOT__mem__DOT__ram
                                       [(0xfffffffU 
                                         & ((IData)(2U) 
                                            + (0xffffffcU 
                                               & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))]),8);
            tracep->chgIData(oldp+191,((0xfffffffU 
                                        & ((IData)(1U) 
                                           + (0xffffffcU 
                                              & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))),28);
            tracep->chgCData(oldp+192,(vlSelf->top__DOT__mem__DOT__ram
                                       [(0xfffffffU 
                                         & ((IData)(1U) 
                                            + (0xffffffcU 
                                               & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))]),8);
            tracep->chgIData(oldp+193,((0xffffffcU 
                                        & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)),28);
            tracep->chgCData(oldp+194,(vlSelf->top__DOT__mem__DOT__ram
                                       [(0xffffffcU 
                                         & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)]),8);
            tracep->chgIData(oldp+195,((0xfffffffU 
                                        & ((IData)(3U) 
                                           + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))),28);
            tracep->chgCData(oldp+196,(vlSelf->top__DOT__mem__DOT__ram
                                       [(0xfffffffU 
                                         & ((IData)(3U) 
                                            + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))]),8);
            tracep->chgIData(oldp+197,((0xfffffffU 
                                        & ((IData)(2U) 
                                           + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))),28);
            tracep->chgCData(oldp+198,(vlSelf->top__DOT__mem__DOT__ram
                                       [(0xfffffffU 
                                         & ((IData)(2U) 
                                            + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))]),8);
            tracep->chgIData(oldp+199,((0xfffffffU 
                                        & ((IData)(1U) 
                                           + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))),28);
            tracep->chgCData(oldp+200,(vlSelf->top__DOT__mem__DOT__ram
                                       [(0xfffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))]),8);
            tracep->chgIData(oldp+201,((0xfffffffU 
                                        & vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)),28);
            tracep->chgCData(oldp+202,(vlSelf->top__DOT__mem__DOT__ram
                                       [(0xfffffffU 
                                         & vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)]),8);
            tracep->chgBit(oldp+203,(((IData)(vlSelf->top__DOT__mem__DOT___T_2) 
                                      & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid))));
            tracep->chgIData(oldp+204,((0xfffffffU 
                                        & (IData)((QData)((IData)(
                                                                  (0xfffffffcU 
                                                                   & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))))),28);
            tracep->chgCData(oldp+205,(vlSelf->top__DOT__mem__DOT__ram
                                       [(0xfffffffU 
                                         & (IData)((QData)((IData)(
                                                                   (0xfffffffcU 
                                                                    & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))))]),8);
            tracep->chgCData(oldp+206,((0xffU & ((1U 
                                                  & (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wmask_T_8))
                                                  ? (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wdata_T_2)
                                                  : 
                                                 vlSelf->top__DOT__mem__DOT__ram
                                                 [(0xfffffffU 
                                                   & (IData)((QData)((IData)(
                                                                             (0xfffffffcU 
                                                                              & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))))]))),8);
            tracep->chgCData(oldp+207,((0xffU & ((2U 
                                                  & (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wmask_T_8))
                                                  ? (IData)(
                                                            (vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wdata_T_2 
                                                             >> 8U))
                                                  : 
                                                 vlSelf->top__DOT__mem__DOT__ram
                                                 [(0xfffffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffffffcU 
                                                       & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))]))),8);
            tracep->chgCData(oldp+208,((0xffU & ((4U 
                                                  & (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wmask_T_8))
                                                  ? (IData)(
                                                            (vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wdata_T_2 
                                                             >> 0x10U))
                                                  : 
                                                 vlSelf->top__DOT__mem__DOT__ram
                                                 [(0xfffffffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffffffcU 
                                                       & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))]))),8);
            tracep->chgCData(oldp+209,((0xffU & ((8U 
                                                  & (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wmask_T_8))
                                                  ? (IData)(
                                                            (vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wdata_T_2 
                                                             >> 0x18U))
                                                  : 
                                                 vlSelf->top__DOT__mem__DOT__ram
                                                 [(0xfffffffU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0xffffffcU 
                                                       & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))]))),8);
            tracep->chgIData(oldp+210,(vlSelf->top__DOT__mem__DOT__mtime),32);
            tracep->chgIData(oldp+211,(((IData)(1U) 
                                        + vlSelf->top__DOT__mem__DOT__mtime)),32);
            tracep->chgIData(oldp+212,(((IData)(3U) 
                                        + (0xfffffffcU 
                                           & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr))),32);
            tracep->chgIData(oldp+213,((0xfffffffU 
                                        & ((IData)(3U) 
                                           + (0xfffffffcU 
                                              & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))),32);
            tracep->chgIData(oldp+214,(((IData)(2U) 
                                        + (0xfffffffcU 
                                           & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr))),32);
            tracep->chgIData(oldp+215,((0xfffffffU 
                                        & ((IData)(2U) 
                                           + (0xfffffffcU 
                                              & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))),32);
            tracep->chgIData(oldp+216,(((IData)(1U) 
                                        + (0xfffffffcU 
                                           & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr))),32);
            tracep->chgIData(oldp+217,((0xfffffffU 
                                        & ((IData)(1U) 
                                           + (0xfffffffcU 
                                              & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))),32);
            tracep->chgQData(oldp+218,((QData)((IData)(
                                                       (0xfffffffcU 
                                                        & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))),33);
            tracep->chgIData(oldp+220,((0xffffffcU 
                                        & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)),32);
            tracep->chgIData(oldp+221,(((vlSelf->top__DOT__mem__DOT__ram
                                         [(0xfffffffU 
                                           & ((IData)(3U) 
                                              + (0xffffffcU 
                                                 & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))] 
                                         << 0x18U) 
                                        | ((vlSelf->top__DOT__mem__DOT__ram
                                            [(0xfffffffU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0xffffffcU 
                                                  & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))] 
                                            << 0x10U) 
                                           | ((vlSelf->top__DOT__mem__DOT__ram
                                               [(0xfffffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0xffffffcU 
                                                     & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))] 
                                               << 8U) 
                                              | vlSelf->top__DOT__mem__DOT__ram
                                              [(0xffffffcU 
                                                & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)])))),32);
            tracep->chgIData(oldp+222,(((IData)(3U) 
                                        + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)),32);
            tracep->chgIData(oldp+223,((0xfffffffU 
                                        & ((IData)(3U) 
                                           + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))),32);
            tracep->chgIData(oldp+224,(((IData)(2U) 
                                        + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)),32);
            tracep->chgIData(oldp+225,((0xfffffffU 
                                        & ((IData)(2U) 
                                           + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))),32);
            tracep->chgIData(oldp+226,(((IData)(1U) 
                                        + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)),32);
            tracep->chgIData(oldp+227,((0xfffffffU 
                                        & ((IData)(1U) 
                                           + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))),32);
            tracep->chgQData(oldp+228,((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))),33);
            tracep->chgIData(oldp+230,((0xfffffffU 
                                        & vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)),32);
            tracep->chgSData(oldp+231,(((vlSelf->top__DOT__mem__DOT__ram
                                         [(0xfffffffU 
                                           & ((IData)(1U) 
                                              + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))] 
                                         << 8U) | vlSelf->top__DOT__mem__DOT__ram
                                        [(0xfffffffU 
                                          & vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)])),16);
            tracep->chgSData(oldp+232,(((vlSelf->top__DOT__mem__DOT__ram
                                         [(0xfffffffU 
                                           & ((IData)(3U) 
                                              + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))] 
                                         << 8U) | vlSelf->top__DOT__mem__DOT__ram
                                        [(0xfffffffU 
                                          & ((IData)(2U) 
                                             + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))])),16);
            tracep->chgBit(oldp+233,(vlSelf->top__DOT__mem__DOT___T_2));
            tracep->chgBit(oldp+234,((((vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr 
                                        >> 0x1fU) & 
                                       ((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode) 
                                        >> 3U)) & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid))));
            tracep->chgBit(oldp+235,(((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid) 
                                      & (~ (vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr 
                                            >> 0x1fU)))));
        }
        tracep->chgBit(oldp+236,(vlSelf->clock));
        tracep->chgBit(oldp+237,(vlSelf->reset));
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
