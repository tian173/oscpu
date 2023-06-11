// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceFullSub1(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+840,(((0x306U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                      : ((0x106U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+841,(((0x306U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                      : ((0x106U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+842,(((0x306U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                      : ((0x106U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+843,(((0x306U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                      : ((0x106U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+844,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185),32);
        tracep->fullIData(oldp+845,(((0x306U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169)),32);
        tracep->fullIData(oldp+846,(((0x306U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                      : ((0x106U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154))),32);
        tracep->fullIData(oldp+847,(((0x306U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                      : ((0x106U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+848,(((0x306U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                      : ((0x106U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+849,(((0x303U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? (0x222U & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)),32);
        tracep->fullIData(oldp+850,(((0x303U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                      : ((0x306U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren))),32);
        tracep->fullIData(oldp+851,(((0x303U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                      : ((0x306U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                          : ((0x106U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                              : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren)))),32);
        tracep->fullIData(oldp+852,(((0x303U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                      : ((0x306U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                          : ((0x106U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                              : ((0x141U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc))))),32);
        tracep->fullIData(oldp+853,(((0x303U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                      : ((0x306U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                          : ((0x106U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                              : ((0x141U 
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
        tracep->fullIData(oldp+854,(((0x303U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                      : ((0x306U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                          : ((0x106U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                              : ((0x141U 
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
        tracep->fullIData(oldp+855,(((0x303U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                      : ((0x306U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+856,(((0x303U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                      : ((0x306U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                          : ((0x106U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                              : ((0x141U 
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
        tracep->fullIData(oldp+857,(((0x303U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                      : ((0x306U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                          : ((0x106U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                              : ((0x141U 
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
        tracep->fullIData(oldp+858,(((0x303U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                      : ((0x306U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                          : ((0x106U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                              : ((0x141U 
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
        tracep->fullIData(oldp+859,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201),32);
        tracep->fullIData(oldp+860,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202),32);
        tracep->fullIData(oldp+861,(((0x303U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185)),32);
        tracep->fullIData(oldp+862,(((0x303U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                      : ((0x306U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169))),32);
        tracep->fullIData(oldp+863,(((0x303U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                      : ((0x306U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                          : ((0x106U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                              : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154)))),32);
        tracep->fullIData(oldp+864,(((0x303U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                      : ((0x306U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                          : ((0x106U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                              : ((0x141U 
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
        tracep->fullIData(oldp+865,(((0x303U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                      : ((0x306U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                          : ((0x106U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                              : ((0x141U 
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
        tracep->fullIData(oldp+866,(((0x302U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? (0xb309U & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg)),32);
        tracep->fullIData(oldp+867,(((0x302U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                      : ((0x303U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? (0x222U 
                                             & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg))),32);
        tracep->fullIData(oldp+868,(((0x302U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                      : ((0x303U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                          : ((0x306U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                              : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren)))),32);
        tracep->fullIData(oldp+869,(((0x302U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                      : ((0x303U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren))))),32);
        tracep->fullIData(oldp+870,(((0x302U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                      : ((0x303U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : 
                                                 ((0x141U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc)))))),32);
        tracep->fullIData(oldp+871,(((0x302U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                      : ((0x303U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+872,(((0x302U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                      : ((0x303U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+873,(((0x302U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                      : ((0x303U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+874,(((0x302U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                      : ((0x303U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+875,(((0x302U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                      : ((0x303U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+876,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219),32);
        tracep->fullIData(oldp+877,(((0x302U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201)),32);
        tracep->fullIData(oldp+878,(((0x302U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202)),32);
        tracep->fullIData(oldp+879,(((0x302U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                      : ((0x303U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185))),32);
        tracep->fullIData(oldp+880,(((0x302U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                      : ((0x303U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                          : ((0x306U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                              : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169)))),32);
        tracep->fullIData(oldp+881,(((0x302U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                      : ((0x303U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154))))),32);
        tracep->fullIData(oldp+882,(((0x302U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                      : ((0x303U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+883,(((0x302U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                      : ((0x303U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+884,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause)),32);
        tracep->fullIData(oldp+885,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                      : ((0x302U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? (0xb309U 
                                             & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg))),32);
        tracep->fullIData(oldp+886,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                      : ((0x302U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                          : ((0x303U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? (0x222U 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                              : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)))),32);
        tracep->fullIData(oldp+887,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                      : ((0x302U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren))))),32);
        tracep->fullIData(oldp+888,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                      : ((0x302U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : 
                                                 ((0x106U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren)))))),32);
        tracep->fullIData(oldp+889,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                      : ((0x302U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+890,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                      : ((0x302U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+891,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                      : ((0x302U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+892,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                      : ((0x302U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+893,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                      : ((0x302U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+894,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                      : ((0x302U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+895,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219)),32);
        tracep->fullIData(oldp+896,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                      : ((0x302U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201))),32);
        tracep->fullIData(oldp+897,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                      : ((0x302U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202))),32);
        tracep->fullIData(oldp+898,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                      : ((0x302U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                          : ((0x303U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                              : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185)))),32);
        tracep->fullIData(oldp+899,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                      : ((0x302U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169))))),32);
        tracep->fullIData(oldp+900,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                      : ((0x302U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : 
                                                 ((0x106U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154)))))),32);
        tracep->fullIData(oldp+901,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                      : ((0x302U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+902,(((0x342U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                      : ((0x302U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+903,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? ((0xffffffddU 
                                          & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip) 
                                         | (0x22U & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data))
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                          : ((0x302U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                              : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201)))),32);
        tracep->fullIData(oldp+904,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause))),32);
        tracep->fullIData(oldp+905,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                          : ((0x302U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? (0xb309U 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                              : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg)))),32);
        tracep->fullIData(oldp+906,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                          : ((0x302U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                              : ((0x303U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? 
                                                 (0x222U 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg))))),32);
        tracep->fullIData(oldp+907,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : 
                                                 ((0x306U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren)))))),32);
        tracep->fullIData(oldp+908,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+909,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+910,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+911,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+912,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+913,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+914,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+915,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219))),32);
        tracep->fullIData(oldp+916,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                          : ((0x302U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                              : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202)))),32);
        tracep->fullIData(oldp+917,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185))))),32);
        tracep->fullIData(oldp+918,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : 
                                                 ((0x306U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169)))))),32);
        tracep->fullIData(oldp+919,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+920,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+921,(((0x344U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+922,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                          : ((0x342U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                              : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219)))),32);
        tracep->fullIData(oldp+923,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201))))),32);
        tracep->fullIData(oldp+924,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                          : ((0x342U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                              : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause)))),32);
        tracep->fullIData(oldp+925,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                          : ((0x342U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                              : ((0x302U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? 
                                                 (0xb309U 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg))))),32);
        tracep->fullIData(oldp+926,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : 
                                                 ((0x303U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? 
                                                  (0x222U 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)))))),32);
        tracep->fullIData(oldp+927,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+928,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+929,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+930,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+931,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+932,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+933,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+934,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_280),32);
        tracep->fullIData(oldp+935,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202))))),32);
        tracep->fullIData(oldp+936,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : 
                                                 ((0x303U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185)))))),32);
        tracep->fullIData(oldp+937,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+938,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+939,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+940,(((0x304U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                      : ((0x344U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+941,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec)),32);
        tracep->fullIData(oldp+942,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                      : ((0x304U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219))))),32);
        tracep->fullIData(oldp+943,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                      : ((0x304U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201)))))),32);
        tracep->fullIData(oldp+944,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                      : ((0x304U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause))))),32);
        tracep->fullIData(oldp+945,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                      : ((0x304U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? 
                                                  (0xb309U 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg)))))),32);
        tracep->fullIData(oldp+946,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                      : ((0x304U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+947,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                      : ((0x304U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+948,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                      : ((0x304U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+949,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                      : ((0x304U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+950,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                      : ((0x304U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+951,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                      : ((0x304U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+952,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                      : ((0x304U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+953,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_300),32);
        tracep->fullIData(oldp+954,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_280)),32);
        tracep->fullIData(oldp+955,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                      : ((0x304U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202)))))),32);
        tracep->fullIData(oldp+956,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                      : ((0x304U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+957,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                      : ((0x304U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+958,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                      : ((0x304U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+959,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                      : ((0x304U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
        tracep->fullIData(oldp+960,(((0x305U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                      : ((0x304U == 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115)))))))))))),32);
        tracep->fullIData(oldp+961,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch)),32);
        tracep->fullIData(oldp+962,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec
                                      : ((0x305U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec))),32);
        tracep->fullIData(oldp+963,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                      : ((0x305U == 
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
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219)))))),32);
        tracep->fullIData(oldp+964,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                      : ((0x305U == 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201))))))),32);
        tracep->fullIData(oldp+965,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                      : ((0x305U == 
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
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause)))))),32);
        tracep->fullIData(oldp+966,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                      : ((0x305U == 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg))))))),32);
        tracep->fullIData(oldp+967,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                      : ((0x305U == 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)))))))),32);
        tracep->fullIData(oldp+968,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                      : ((0x305U == 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren))))))))),32);
        tracep->fullIData(oldp+969,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                      : ((0x305U == 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren)))))))))),32);
        tracep->fullIData(oldp+970,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                      : ((0x305U == 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc))))))))))),32);
        tracep->fullIData(oldp+971,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                      : ((0x305U == 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval)))))))))))),32);
        tracep->fullIData(oldp+972,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                      : ((0x305U == 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch))))))))))))),32);
        tracep->fullIData(oldp+973,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_321),32);
        tracep->fullIData(oldp+974,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_300)),32);
        tracep->fullIData(oldp+975,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                      : ((0x305U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_280))),32);
        tracep->fullIData(oldp+976,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                      : ((0x305U == 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202))))))),32);
        tracep->fullIData(oldp+977,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                      : ((0x305U == 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185)))))))),32);
        tracep->fullIData(oldp+978,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                      : ((0x305U == 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169))))))))),32);
        tracep->fullIData(oldp+979,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                      : ((0x305U == 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154)))))))))),32);
        tracep->fullIData(oldp+980,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                      : ((0x305U == 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127)))))))))))),32);
        tracep->fullIData(oldp+981,(((0x340U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                      : ((0x305U == 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115))))))))))))),32);
        tracep->fullIData(oldp+982,(((0x343U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtval)),32);
        tracep->fullIData(oldp+983,(((0x343U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch
                                      : ((0x340U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch))),32);
        tracep->fullIData(oldp+984,(((0x343U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec
                                      : ((0x340U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec
                                          : ((0x305U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                              : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec)))),32);
        tracep->fullIData(oldp+985,(((0x343U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                      : ((0x340U == 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219))))))),32);
        tracep->fullIData(oldp+986,(((0x343U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                      : ((0x340U == 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201)))))))),32);
        tracep->fullIData(oldp+987,(((0x343U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                      : ((0x340U == 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause))))))),32);
        tracep->fullIData(oldp+988,(((0x343U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                      : ((0x340U == 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg)))))))),32);
        tracep->fullIData(oldp+989,(((0x343U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                      : ((0x340U == 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg))))))))),32);
        tracep->fullIData(oldp+990,(((0x343U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                      : ((0x340U == 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren)))))))))),32);
        tracep->fullIData(oldp+991,(((0x343U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                      : ((0x340U == 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren))))))))))),32);
        tracep->fullIData(oldp+992,(((0x343U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                      : ((0x340U == 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc)))))))))))),32);
        tracep->fullIData(oldp+993,(((0x343U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                      : ((0x340U == 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval))))))))))))),32);
        tracep->fullIData(oldp+994,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_343),32);
        tracep->fullIData(oldp+995,(((0x343U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_321)),32);
        tracep->fullIData(oldp+996,(((0x343U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                      : ((0x340U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_300))),32);
        tracep->fullIData(oldp+997,(((0x343U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                      : ((0x340U == 
                                          (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                          ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                          : ((0x305U 
                                              == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                              ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                              : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_280)))),32);
        tracep->fullIData(oldp+998,(((0x343U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                      : ((0x340U == 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202)))))))),32);
        tracep->fullIData(oldp+999,(((0x343U == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                      : ((0x340U == 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185))))))))),32);
        tracep->fullIData(oldp+1000,(((0x343U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                       : ((0x340U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169)))))))))),32);
        tracep->fullIData(oldp+1001,(((0x343U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                       : ((0x340U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154))))))))))),32);
        tracep->fullIData(oldp+1002,(((0x343U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                       : ((0x340U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                           : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127))))))))))))),32);
        tracep->fullIData(oldp+1003,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_353),32);
        tracep->fullIData(oldp+1004,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mepc)),32);
        tracep->fullIData(oldp+1005,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtval
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                           ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                           : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtval))),32);
        tracep->fullIData(oldp+1006,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                           ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch
                                           : ((0x340U 
                                               == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                               ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                               : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch)))),32);
        tracep->fullIData(oldp+1007,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec))))),32);
        tracep->fullIData(oldp+1008,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_219)))))))),32);
        tracep->fullIData(oldp+1009,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_201))))))))),32);
        tracep->fullIData(oldp+1010,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause)))))))),32);
        tracep->fullIData(oldp+1011,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg))))))))),32);
        tracep->fullIData(oldp+1012,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)))))))))),32);
        tracep->fullIData(oldp+1013,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren))))))))))),32);
        tracep->fullIData(oldp+1014,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren)))))))))))),32);
        tracep->fullIData(oldp+1015,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                           : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc))))))))))))),32);
        tracep->fullIData(oldp+1016,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_366),32);
        tracep->fullIData(oldp+1017,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_343)),32);
        tracep->fullIData(oldp+1018,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                           ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                           : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_321))),32);
        tracep->fullIData(oldp+1019,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                           ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                           : ((0x340U 
                                               == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                               ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                               : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_300)))),32);
        tracep->fullIData(oldp+1020,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_280))))),32);
        tracep->fullIData(oldp+1021,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_202))))))))),32);
        tracep->fullIData(oldp+1022,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_185)))))))))),32);
        tracep->fullIData(oldp+1023,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169))))))))))),32);
        tracep->fullIData(oldp+1024,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                       : ((0x343U == 
                                           (0xfffU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154)))))))))))),32);
        tracep->fullIData(oldp+1025,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_376),32);
        tracep->fullIData(oldp+1026,(((0x341U == (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_353)),32);
        tracep->fullIData(oldp+1027,((0xfffffffU & 
                                      ((IData)(3U) 
                                       + (0xffffffcU 
                                          & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))),28);
        tracep->fullCData(oldp+1028,(vlSelf->top__DOT__mem__DOT__ram
                                     [(0xfffffffU & 
                                       ((IData)(3U) 
                                        + (0xffffffcU 
                                           & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))]),8);
        tracep->fullIData(oldp+1029,((0xfffffffU & 
                                      ((IData)(2U) 
                                       + (0xffffffcU 
                                          & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))),28);
        tracep->fullCData(oldp+1030,(vlSelf->top__DOT__mem__DOT__ram
                                     [(0xfffffffU & 
                                       ((IData)(2U) 
                                        + (0xffffffcU 
                                           & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))]),8);
        tracep->fullIData(oldp+1031,((0xfffffffU & 
                                      ((IData)(1U) 
                                       + (0xffffffcU 
                                          & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))),28);
        tracep->fullCData(oldp+1032,(vlSelf->top__DOT__mem__DOT__ram
                                     [(0xfffffffU & 
                                       ((IData)(1U) 
                                        + (0xffffffcU 
                                           & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))]),8);
        tracep->fullIData(oldp+1033,((0xffffffcU & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)),28);
        tracep->fullCData(oldp+1034,(vlSelf->top__DOT__mem__DOT__ram
                                     [(0xffffffcU & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)]),8);
        tracep->fullIData(oldp+1035,((0xfffffffU & 
                                      ((IData)(3U) 
                                       + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))),28);
        tracep->fullCData(oldp+1036,(vlSelf->top__DOT__mem__DOT__ram
                                     [(0xfffffffU & 
                                       ((IData)(3U) 
                                        + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))]),8);
        tracep->fullIData(oldp+1037,((0xfffffffU & 
                                      ((IData)(2U) 
                                       + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))),28);
        tracep->fullCData(oldp+1038,(vlSelf->top__DOT__mem__DOT__ram
                                     [(0xfffffffU & 
                                       ((IData)(2U) 
                                        + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))]),8);
        tracep->fullIData(oldp+1039,((0xfffffffU & 
                                      ((IData)(1U) 
                                       + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))),28);
        tracep->fullCData(oldp+1040,(vlSelf->top__DOT__mem__DOT__ram
                                     [(0xfffffffU & 
                                       ((IData)(1U) 
                                        + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))]),8);
        tracep->fullIData(oldp+1041,((0xfffffffU & vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)),28);
        tracep->fullCData(oldp+1042,(vlSelf->top__DOT__mem__DOT__ram
                                     [(0xfffffffU & vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)]),8);
        tracep->fullBit(oldp+1043,(((IData)(vlSelf->top__DOT__mem__DOT___T_2) 
                                    & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid))));
        tracep->fullIData(oldp+1044,((0xfffffffU & (IData)((QData)((IData)(
                                                                           (0xfffffffcU 
                                                                            & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))))),28);
        tracep->fullCData(oldp+1045,(vlSelf->top__DOT__mem__DOT__ram
                                     [(0xfffffffU & (IData)((QData)((IData)(
                                                                            (0xfffffffcU 
                                                                             & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))))]),8);
        tracep->fullCData(oldp+1046,((0xffU & ((1U 
                                                & (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wmask_T_8))
                                                ? (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wdata_T_2)
                                                : vlSelf->top__DOT__mem__DOT__ram
                                               [(0xfffffffU 
                                                 & (IData)((QData)((IData)(
                                                                           (0xfffffffcU 
                                                                            & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))))]))),8);
        tracep->fullCData(oldp+1047,((0xffU & ((2U 
                                                & (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wmask_T_8))
                                                ? (IData)(
                                                          (vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wdata_T_2 
                                                           >> 8U))
                                                : vlSelf->top__DOT__mem__DOT__ram
                                               [(0xfffffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0xffffffcU 
                                                     & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))]))),8);
        tracep->fullCData(oldp+1048,((0xffU & ((4U 
                                                & (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wmask_T_8))
                                                ? (IData)(
                                                          (vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wdata_T_2 
                                                           >> 0x10U))
                                                : vlSelf->top__DOT__mem__DOT__ram
                                               [(0xfffffffU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0xffffffcU 
                                                     & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))]))),8);
        tracep->fullCData(oldp+1049,((0xffU & ((8U 
                                                & (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wmask_T_8))
                                                ? (IData)(
                                                          (vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wdata_T_2 
                                                           >> 0x18U))
                                                : vlSelf->top__DOT__mem__DOT__ram
                                               [(0xfffffffU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    (0xffffffcU 
                                                     & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))]))),8);
        tracep->fullIData(oldp+1050,(vlSelf->top__DOT__mem__DOT__mtime),32);
        tracep->fullIData(oldp+1051,(((IData)(1U) + vlSelf->top__DOT__mem__DOT__mtime)),32);
        tracep->fullIData(oldp+1052,(((IData)(3U) + 
                                      (0xfffffffcU 
                                       & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr))),32);
        tracep->fullIData(oldp+1053,((0xfffffffU & 
                                      ((IData)(3U) 
                                       + (0xfffffffcU 
                                          & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))),32);
        tracep->fullIData(oldp+1054,(((IData)(2U) + 
                                      (0xfffffffcU 
                                       & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr))),32);
        tracep->fullIData(oldp+1055,((0xfffffffU & 
                                      ((IData)(2U) 
                                       + (0xfffffffcU 
                                          & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))),32);
        tracep->fullIData(oldp+1056,(((IData)(1U) + 
                                      (0xfffffffcU 
                                       & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr))),32);
        tracep->fullIData(oldp+1057,((0xfffffffU & 
                                      ((IData)(1U) 
                                       + (0xfffffffcU 
                                          & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))),32);
        tracep->fullQData(oldp+1058,((QData)((IData)(
                                                     (0xfffffffcU 
                                                      & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))),33);
        tracep->fullIData(oldp+1060,((0xffffffcU & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)),32);
        tracep->fullIData(oldp+1061,(((vlSelf->top__DOT__mem__DOT__ram
                                       [(0xfffffffU 
                                         & ((IData)(3U) 
                                            + (0xffffffcU 
                                               & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))] 
                                       << 0x18U) | 
                                      ((vlSelf->top__DOT__mem__DOT__ram
                                        [(0xfffffffU 
                                          & ((IData)(2U) 
                                             + (0xffffffcU 
                                                & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))] 
                                        << 0x10U) | 
                                       ((vlSelf->top__DOT__mem__DOT__ram
                                         [(0xfffffffU 
                                           & ((IData)(1U) 
                                              + (0xffffffcU 
                                                 & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)))] 
                                         << 8U) | vlSelf->top__DOT__mem__DOT__ram
                                        [(0xffffffcU 
                                          & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)])))),32);
        tracep->fullIData(oldp+1062,(((IData)(3U) + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)),32);
        tracep->fullIData(oldp+1063,((0xfffffffU & 
                                      ((IData)(3U) 
                                       + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))),32);
        tracep->fullIData(oldp+1064,(((IData)(2U) + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)),32);
        tracep->fullIData(oldp+1065,((0xfffffffU & 
                                      ((IData)(2U) 
                                       + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))),32);
        tracep->fullIData(oldp+1066,(((IData)(1U) + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)),32);
        tracep->fullIData(oldp+1067,((0xfffffffU & 
                                      ((IData)(1U) 
                                       + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))),32);
        tracep->fullQData(oldp+1068,((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))),33);
        tracep->fullIData(oldp+1070,((0xfffffffU & vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)),32);
        tracep->fullSData(oldp+1071,(((vlSelf->top__DOT__mem__DOT__ram
                                       [(0xfffffffU 
                                         & ((IData)(1U) 
                                            + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))] 
                                       << 8U) | vlSelf->top__DOT__mem__DOT__ram
                                      [(0xfffffffU 
                                        & vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)])),16);
        tracep->fullSData(oldp+1072,(((vlSelf->top__DOT__mem__DOT__ram
                                       [(0xfffffffU 
                                         & ((IData)(3U) 
                                            + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))] 
                                       << 8U) | vlSelf->top__DOT__mem__DOT__ram
                                      [(0xfffffffU 
                                        & ((IData)(2U) 
                                           + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))])),16);
        tracep->fullBit(oldp+1073,(vlSelf->top__DOT__mem__DOT___T_2));
        tracep->fullBit(oldp+1074,((((vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr 
                                      >> 0x1fU) & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode) 
                                                   >> 3U)) 
                                    & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid))));
        tracep->fullBit(oldp+1075,(((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid) 
                                    & (~ (vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr 
                                          >> 0x1fU)))));
        tracep->fullBit(oldp+1076,(vlSelf->clock));
        tracep->fullBit(oldp+1077,(vlSelf->reset));
        tracep->fullIData(oldp+1078,(0U),32);
        tracep->fullCData(oldp+1079,(0U),4);
        tracep->fullBit(oldp+1080,(0U));
        tracep->fullSData(oldp+1081,(0U),12);
        tracep->fullBit(oldp+1082,(1U));
    }
}
