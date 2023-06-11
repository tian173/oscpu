// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedFst* tracep);
void Vtop___024root__traceChgSub1(Vtop___024root* vlSelf, VerilatedFst* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedFst* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
        Vtop___024root__traceChgSub1((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp1159;
    VlWide<3>/*95:0*/ __Vtemp1160;
    VlWide<3>/*95:0*/ __Vtemp1162;
    VlWide<3>/*95:0*/ __Vtemp1163;
    VlWide<3>/*95:0*/ __Vtemp1164;
    VlWide<3>/*95:0*/ __Vtemp1165;
    VlWide<3>/*95:0*/ __Vtemp1168;
    VlWide<3>/*95:0*/ __Vtemp1169;
    VlWide<3>/*95:0*/ __Vtemp1171;
    VlWide<3>/*95:0*/ __Vtemp1172;
    VlWide<3>/*95:0*/ __Vtemp1173;
    VlWide<3>/*95:0*/ __Vtemp1177;
    VlWide<3>/*95:0*/ __Vtemp1178;
    VlWide<3>/*95:0*/ __Vtemp1180;
    VlWide<3>/*95:0*/ __Vtemp1181;
    VlWide<3>/*95:0*/ __Vtemp1182;
    VlWide<3>/*95:0*/ __Vtemp1186;
    VlWide<3>/*95:0*/ __Vtemp1187;
    VlWide<3>/*95:0*/ __Vtemp1189;
    VlWide<3>/*95:0*/ __Vtemp1190;
    VlWide<3>/*95:0*/ __Vtemp1191;
    VlWide<3>/*95:0*/ __Vtemp1195;
    VlWide<3>/*95:0*/ __Vtemp1196;
    VlWide<3>/*95:0*/ __Vtemp1198;
    VlWide<3>/*95:0*/ __Vtemp1199;
    VlWide<3>/*95:0*/ __Vtemp1200;
    VlWide<32>/*1023:0*/ __Vtemp1231;
    VlWide<8>/*255:0*/ __Vtemp1237;
    VlWide<16>/*511:0*/ __Vtemp1251;
    VlWide<8>/*255:0*/ __Vtemp1257;
    VlWide<16>/*511:0*/ __Vtemp1271;
    VlWide<32>/*1023:0*/ __Vtemp1301;
    VlWide<64>/*2047:0*/ __Vtemp1302;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc),32);
            tracep->chgIData(oldp+1,(vlSelf->top__DOT__mem_io_instIO_rdata),32);
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__rv32e__DOT__fetch__DOT__prevFinish));
            tracep->chgIData(oldp+3,((0xfffffffcU & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)),32);
            tracep->chgIData(oldp+4,(((0x200bff8U == 
                                       (0xfffffffcU 
                                        & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr))
                                       ? vlSelf->top__DOT__mem__DOT__mtime
                                       : ((vlSelf->top__DOT__mem__DOT__ram
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
                                                  & vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)]))))),32);
            tracep->chgIData(oldp+5,((IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wdata_T_2)),32);
            tracep->chgCData(oldp+6,((0xfU & (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wmask_T_8))),4);
            tracep->chgBit(oldp+7,((1U & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode) 
                                          >> 3U))));
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_valid));
            tracep->chgIData(oldp+9,(((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_valid)
                                       ? (((1U == (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 0U
                                                    : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_379))) 
                                           | ((2U == 
                                               ((0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                 ? 0U
                                                 : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_379))) 
                                              & ((7U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xcU)))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                  >= vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                   < vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0xcU)))
                                                    ? 
                                                   VL_GTES_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0xcU)))
                                                     ? 
                                                    VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                          >> 0xcU)))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                      != vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                           >> 0xcU))) 
                                                      & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                         == vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))))))))
                                           ? ((2U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                                               ? (0xfffffffeU 
                                                  & (vlSelf->top__DOT__rv32e__DOT__regs_io_rs1_data 
                                                     + vlSelf->top__DOT__rv32e__DOT__decode__DOT__imm))
                                               : (vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc 
                                                  + vlSelf->top__DOT__rv32e__DOT__decode__DOT__imm))
                                           : ((IData)(4U) 
                                              + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))
                                       : ((IData)(4U) 
                                          + vlSelf->top__DOT__rv32e__DOT__memory_io_mem2wb_pc))),32);
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__rv32e__DOT__writeback_io_instFinish));
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP),5);
            tracep->chgBit(oldp+12,(((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_3) 
                                     & (0U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_2)))));
            tracep->chgBit(oldp+13,((0x73U == (0x7fU 
                                               & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgCData(oldp+14,((7U & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                             >> 0xcU))),3);
            tracep->chgIData(oldp+15,((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)),32);
            tracep->chgIData(oldp+16,(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d),32);
            tracep->chgCData(oldp+17,((0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                >> 7U))),5);
            tracep->chgIData(oldp+18,(((2U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                                        ? (0xfffffffeU 
                                           & (vlSelf->top__DOT__rv32e__DOT__regs_io_rs1_data 
                                              + vlSelf->top__DOT__rv32e__DOT__decode__DOT__imm))
                                        : (vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc 
                                           + vlSelf->top__DOT__rv32e__DOT__decode__DOT__imm))),32);
            tracep->chgBit(oldp+19,(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_valid));
            tracep->chgCData(oldp+20,(((0x37U == (0x7fU 
                                                  & vlSelf->top__DOT__mem_io_instIO_rdata))
                                        ? 0U : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_379))),2);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode),5);
            tracep->chgIData(oldp+22,(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr),32);
            tracep->chgIData(oldp+23,(vlSelf->top__DOT__rv32e__DOT__regs_io_rs2_data),32);
            tracep->chgIData(oldp+24,((0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                >> 0xfU))),32);
            tracep->chgIData(oldp+25,(vlSelf->top__DOT__rv32e__DOT__regs_io_rs1_data),32);
            tracep->chgIData(oldp+26,((0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                >> 0x14U))),32);
            tracep->chgSData(oldp+27,((vlSelf->top__DOT__mem_io_instIO_rdata 
                                       >> 0x14U)),12);
            tracep->chgIData(oldp+28,(((0x301U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U))
                                        ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__misa
                                        : ((0x300U 
                                            == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                >> 0x14U))
                                            ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mstatus
                                            : ((0x341U 
                                                == 
                                                (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                                ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mepc
                                                : (
                                                   (0x343U 
                                                    == 
                                                    (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtval
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_24))))),32);
            tracep->chgIData(oldp+29,((((1U == ((0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                 ? 0U
                                                 : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_379))) 
                                        | ((2U == (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 0U
                                                    : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_379))) 
                                           & ((7U == 
                                               (7U 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0xcU)))
                                               ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                  >= vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                   < vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0xcU)))
                                                    ? 
                                                   VL_GTES_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0xcU)))
                                                     ? 
                                                    VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                          >> 0xcU)))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                      != vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                           >> 0xcU))) 
                                                      & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                         == vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))))))))
                                        ? ((2U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                                            ? (0xfffffffeU 
                                               & (vlSelf->top__DOT__rv32e__DOT__regs_io_rs1_data 
                                                  + vlSelf->top__DOT__rv32e__DOT__decode__DOT__imm))
                                            : (vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc 
                                               + vlSelf->top__DOT__rv32e__DOT__decode__DOT__imm))
                                        : ((IData)(4U) 
                                           + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc))),32);
            tracep->chgIData(oldp+30,((0x1fU & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                >> 7U))),32);
            tracep->chgIData(oldp+31,(((0x73U == (0x7fU 
                                                  & vlSelf->top__DOT__mem_io_instIO_rdata))
                                        ? vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d
                                        : (IData)((
                                                   (0x14U 
                                                    == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                    ? (QData)((IData)(
                                                                      VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                     ? (QData)((IData)(
                                                                       VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                     : vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_88))))),32);
            tracep->chgIData(oldp+32,(vlSelf->top__DOT__rv32e__DOT__memory_io_mem2wb_pc),32);
            tracep->chgIData(oldp+33,(((IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__state)
                                        ? vlSelf->top__DOT__rv32e__DOT__memory__DOT__inst_r
                                        : vlSelf->top__DOT__mem_io_instIO_rdata)),32);
            tracep->chgIData(oldp+34,(((IData)(4U) 
                                       + vlSelf->top__DOT__rv32e__DOT__memory_io_mem2wb_pc)),32);
            tracep->chgIData(oldp+35,((0x1fU & ((IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__state)
                                                 ? (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__id_r)
                                                 : 
                                                (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 7U)))),32);
            tracep->chgIData(oldp+36,(((6U == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                                        ? vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2
                                        : ((0x15U == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                                            ? (0xffffU 
                                               & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                            : ((5U 
                                                == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                                                ? (
                                                   (((0x8000U 
                                                      & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                                      ? 0xffffU
                                                      : 0U) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2))
                                                : (
                                                   (0x14U 
                                                    == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                                                    ? 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                                                     ? 
                                                    ((((0x80U 
                                                        & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                                        ? 0xffffffU
                                                        : 0U) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2))
                                                     : 0U)))))),32);
            tracep->chgBit(oldp+37,((1U & ((IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__state)
                                            ? ((IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__mode_r) 
                                               >> 2U)
                                            : ((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode) 
                                               >> 2U)))));
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__rv32e__DOT__memory_io_mem2wb_valid));
            tracep->chgIData(oldp+39,(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id),32);
            tracep->chgIData(oldp+40,(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data),32);
            tracep->chgBit(oldp+41,(vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_en));
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__rv32e__DOT__string_));
            tracep->chgIData(oldp+43,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10),32);
            tracep->chgSData(oldp+44,((0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id)),12);
            tracep->chgBit(oldp+45,(0U));
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__rv32e__DOT__writeback_io_instFinish));
            tracep->chgIData(oldp+47,((0x7fU & vlSelf->top__DOT__mem_io_instIO_rdata)),32);
            tracep->chgBit(oldp+48,((0x37U == (0x7fU 
                                               & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+49,((0x17U == (0x7fU 
                                               & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+50,((0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgIData(oldp+51,((0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata)),32);
            tracep->chgBit(oldp+52,((0x67U == (0x707fU 
                                               & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+53,((0x63U == (0x707fU 
                                               & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+54,((0x1063U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+55,((0x4063U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+56,((0x5063U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+57,((0x6063U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+58,((0x7063U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+59,((3U == (0x707fU 
                                            & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+60,((0x1003U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+61,((0x2003U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+62,((0x4003U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+63,((0x5003U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+64,((0x23U == (0x707fU 
                                               & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+65,((0x1023U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+66,((0x2023U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+67,((0x13U == (0x707fU 
                                               & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+68,((0x2013U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+69,((0x3013U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+70,((0x4013U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+71,((0x6013U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+72,((0x7013U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgIData(oldp+73,((0xfc00707fU 
                                       & vlSelf->top__DOT__mem_io_instIO_rdata)),32);
            tracep->chgBit(oldp+74,((0x1013U == (0xfc00707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+75,((0x5013U == (0xfc00707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+76,((0x40005013U == 
                                     (0xfc00707fU & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgIData(oldp+77,((0xfe00707fU 
                                       & vlSelf->top__DOT__mem_io_instIO_rdata)),32);
            tracep->chgBit(oldp+78,((0x33U == (0xfe00707fU 
                                               & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+79,((0x40000033U == 
                                     (0xfe00707fU & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+80,((0x1033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+81,((0x2033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+82,((0x3033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+83,((0x4033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+84,((0x5033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+85,((0x40005033U == 
                                     (0xfe00707fU & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+86,((0x6033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+87,((0x7033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+88,((0x2000033U == 
                                     (0xfe00707fU & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+89,((0x2001033U == 
                                     (0xfe00707fU & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+90,((0x2003033U == 
                                     (0xfe00707fU & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+91,((0x2004033U == 
                                     (0xfe00707fU & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+92,((0x2005033U == 
                                     (0xfe00707fU & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+93,((0x2006033U == 
                                     (0xfe00707fU & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+94,((0x2007033U == 
                                     (0xfe00707fU & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+95,((0x1073U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+96,((0x2073U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+97,((0x3073U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+98,((0x5073U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+99,((0x6073U == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+100,((0x7073U == (0x707fU 
                                                  & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgIData(oldp+101,((0xf00fffffU 
                                        & vlSelf->top__DOT__mem_io_instIO_rdata)),32);
            tracep->chgBit(oldp+102,((0xfU == (0xf00fffffU 
                                               & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+103,((0x100fU == vlSelf->top__DOT__mem_io_instIO_rdata)));
            tracep->chgIData(oldp+104,((0xfe007fffU 
                                        & vlSelf->top__DOT__mem_io_instIO_rdata)),32);
            tracep->chgBit(oldp+105,((0x12000073U == 
                                      (0xfe007fffU 
                                       & vlSelf->top__DOT__mem_io_instIO_rdata))));
            tracep->chgBit(oldp+106,((0x10500073U == vlSelf->top__DOT__mem_io_instIO_rdata)));
            tracep->chgBit(oldp+107,((0x6bU == vlSelf->top__DOT__mem_io_instIO_rdata)));
            tracep->chgCData(oldp+108,(((0x6bU == vlSelf->top__DOT__mem_io_instIO_rdata)
                                         ? 0U : 7U)),3);
            tracep->chgCData(oldp+109,(((0x10500073U 
                                         == vlSelf->top__DOT__mem_io_instIO_rdata)
                                         ? 0U : ((0x6bU 
                                                  == vlSelf->top__DOT__mem_io_instIO_rdata)
                                                  ? 0U
                                                  : 7U))),3);
            tracep->chgCData(oldp+110,(((0x12000073U 
                                         == (0xfe007fffU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0U : ((0x10500073U 
                                                  == vlSelf->top__DOT__mem_io_instIO_rdata)
                                                  ? 0U
                                                  : 
                                                 ((0x6bU 
                                                   == vlSelf->top__DOT__mem_io_instIO_rdata)
                                                   ? 0U
                                                   : 7U)))),3);
            tracep->chgCData(oldp+111,(((0x100fU == vlSelf->top__DOT__mem_io_instIO_rdata)
                                         ? 0U : ((0x12000073U 
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
                                                    : 7U))))),3);
            tracep->chgCData(oldp+112,(((0xfU == (0xf00fffffU 
                                                  & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0U : ((0x100fU 
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
                                                     : 7U)))))),3);
            tracep->chgCData(oldp+113,(((0x7073U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0xfU 
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
                                                      : 7U))))))),3);
            tracep->chgCData(oldp+114,(((0x6073U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x7073U 
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
                                                       : 7U)))))))),3);
            tracep->chgCData(oldp+115,(((0x5073U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x6073U 
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
                                                        : 7U))))))))),3);
            tracep->chgCData(oldp+116,(((0x3073U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x5073U 
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
                                                         : 7U)))))))))),3);
            tracep->chgCData(oldp+117,(((0x2073U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x3073U 
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
                                                          : 7U))))))))))),3);
            tracep->chgCData(oldp+118,(((0x1073U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x2073U 
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
                                                           : 7U)))))))))))),3);
            tracep->chgCData(oldp+119,(((0x2007033U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x1073U 
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
                                                            : 7U))))))))))))),3);
            tracep->chgCData(oldp+120,(((0x2006033U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x2007033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 1U
                                                  : 
                                                 ((0x1073U 
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
                                                             : 7U)))))))))))))),3);
            tracep->chgCData(oldp+121,(((0x2005033U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x2006033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 1U
                                                  : 
                                                 ((0x2007033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                   ? 1U
                                                   : 
                                                  ((0x1073U 
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
                                                              : 7U))))))))))))))),3);
            tracep->chgCData(oldp+122,(((0x2004033U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x2005033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 1U
                                                  : 
                                                 ((0x2006033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                   ? 1U
                                                   : 
                                                  ((0x2007033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 1U
                                                    : 
                                                   ((0x1073U 
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
                                                               : 7U)))))))))))))))),3);
            tracep->chgCData(oldp+123,(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125),3);
            tracep->chgCData(oldp+124,(((0x2001033U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125))),3);
            tracep->chgCData(oldp+125,(((0x2000033U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x2001033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 1U
                                                  : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125)))),3);
            tracep->chgCData(oldp+126,(((0x7033U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x2000033U 
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
                                                   : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125))))),3);
            tracep->chgCData(oldp+127,(((0x6033U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x7033U 
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
                                                    : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125)))))),3);
            tracep->chgCData(oldp+128,(((0x40005033U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x6033U 
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
                                                     : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125))))))),3);
            tracep->chgCData(oldp+129,(((0x5033U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x40005033U 
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
                                                      : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125)))))))),3);
            tracep->chgCData(oldp+130,(((0x4033U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x5033U 
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
                                                       : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125))))))))),3);
            tracep->chgCData(oldp+131,(((0x3033U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x4033U 
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
                                                        : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125)))))))))),3);
            tracep->chgCData(oldp+132,(((0x2033U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x3033U 
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
                                                         : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125))))))))))),3);
            tracep->chgCData(oldp+133,(((0x1033U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x2033U 
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
                                                          : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125)))))))))))),3);
            tracep->chgCData(oldp+134,(((0x40000033U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x1033U 
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
                                                           : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125))))))))))))),3);
            tracep->chgCData(oldp+135,(((0x33U == (0xfe00707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x40000033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 1U
                                                  : 
                                                 ((0x1033U 
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
                                                            : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125)))))))))))))),3);
            tracep->chgCData(oldp+136,(((0x40005013U 
                                         == (0xfc00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x33U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 1U
                                                  : 
                                                 ((0x40000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                   ? 1U
                                                   : 
                                                  ((0x1033U 
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
                                                             : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125))))))))))))))),3);
            tracep->chgCData(oldp+137,(((0x5013U == 
                                         (0xfc00707fU 
                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x40005013U 
                                                  == 
                                                  (0xfc00707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 2U
                                                  : 
                                                 ((0x33U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                   ? 1U
                                                   : 
                                                  ((0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 1U
                                                    : 
                                                   ((0x1033U 
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
                                                              : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_125)))))))))))))))),3);
            tracep->chgCData(oldp+138,(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140),3);
            tracep->chgCData(oldp+139,(((0x7013U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140))),3);
            tracep->chgCData(oldp+140,(((0x6013U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x7013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 2U
                                                  : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140)))),3);
            tracep->chgCData(oldp+141,(((0x4013U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x6013U 
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
                                                   : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140))))),3);
            tracep->chgCData(oldp+142,(((0x3013U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x4013U 
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
                                                    : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140)))))),3);
            tracep->chgCData(oldp+143,(((0x2013U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x3013U 
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
                                                     : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140))))))),3);
            tracep->chgCData(oldp+144,(((0x13U == (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x2013U 
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
                                                      : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140)))))))),3);
            tracep->chgCData(oldp+145,(((0x2023U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 3U : ((0x13U 
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
                                                       : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140))))))))),3);
            tracep->chgCData(oldp+146,(((0x1023U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 3U : ((0x2023U 
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
                                                        : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140)))))))))),3);
            tracep->chgCData(oldp+147,(((0x23U == (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 3U : ((0x1023U 
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
                                                         : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140))))))))))),3);
            tracep->chgCData(oldp+148,(((0x5003U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x23U 
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
                                                          : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140)))))))))))),3);
            tracep->chgCData(oldp+149,(((0x4003U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x5003U 
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
                                                           : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140))))))))))))),3);
            tracep->chgCData(oldp+150,(((0x2003U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x4003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 2U
                                                  : 
                                                 ((0x5003U 
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
                                                            : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140)))))))))))))),3);
            tracep->chgCData(oldp+151,(((0x1003U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x2003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 2U
                                                  : 
                                                 ((0x4003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                   ? 2U
                                                   : 
                                                  ((0x5003U 
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
                                                             : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140))))))))))))))),3);
            tracep->chgCData(oldp+152,(((3U == (0x707fU 
                                                & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x1003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 2U
                                                  : 
                                                 ((0x2003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                   ? 2U
                                                   : 
                                                  ((0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 2U
                                                    : 
                                                   ((0x5003U 
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
                                                              : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_140)))))))))))))))),3);
            tracep->chgCData(oldp+153,(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_155),3);
            tracep->chgCData(oldp+154,(((0x6063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 4U : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_155))),3);
            tracep->chgCData(oldp+155,(((0x5063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 4U : ((0x6063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 4U
                                                  : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_155)))),3);
            tracep->chgCData(oldp+156,(((0x4063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 4U : ((0x5063U 
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
                                                   : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_155))))),3);
            tracep->chgCData(oldp+157,(((0x1063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 4U : ((0x4063U 
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
                                                    : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_155)))))),3);
            tracep->chgCData(oldp+158,(((0x63U == (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 4U : ((0x1063U 
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
                                                     : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_155))))))),3);
            tracep->chgCData(oldp+159,(((0x67U == (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 4U
                                                  : 
                                                 ((0x1063U 
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
                                                      : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_155)))))))),3);
            tracep->chgCData(oldp+160,(((0x6fU == (0x7fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 6U : ((0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 2U
                                                  : 
                                                 ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                   ? 4U
                                                   : 
                                                  ((0x1063U 
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
                                                       : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_155))))))))),3);
            tracep->chgCData(oldp+161,(((0x17U == (0x7fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 5U : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 6U
                                                  : 
                                                 ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                   ? 2U
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 4U
                                                    : 
                                                   ((0x1063U 
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
                                                        : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_155)))))))))),3);
            tracep->chgCData(oldp+162,(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0),3);
            tracep->chgCData(oldp+163,(((0x7073U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0x15U : 0U)),5);
            tracep->chgCData(oldp+164,(((0x6073U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 5U : ((0x7073U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 0x15U
                                                  : 0U))),5);
            tracep->chgCData(oldp+165,(((0x5073U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x6073U 
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
                                                   : 0U)))),5);
            tracep->chgCData(oldp+166,(((0x3073U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0x15U : 
                                        ((0x5073U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__mem_io_instIO_rdata))
                                          ? 1U : ((0x6073U 
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
                                                    : 0U))))),5);
            tracep->chgCData(oldp+167,(((0x2073U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 5U : ((0x3073U 
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
                                                     : 0U)))))),5);
            tracep->chgCData(oldp+168,(((0x1073U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x2073U 
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
                                                      : 0U))))))),5);
            tracep->chgCData(oldp+169,(((0x2007033U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0x14U : 
                                        ((0x1073U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__mem_io_instIO_rdata))
                                          ? 1U : ((0x2073U 
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
                                                       : 0U)))))))),5);
            tracep->chgCData(oldp+170,(((0x2006033U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0x13U : 
                                        ((0x2007033U 
                                          == (0xfe00707fU 
                                              & vlSelf->top__DOT__mem_io_instIO_rdata))
                                          ? 0x14U : 
                                         ((0x1073U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__mem_io_instIO_rdata))
                                           ? 1U : (
                                                   (0x2073U 
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
                                                        : 0U))))))))),5);
            tracep->chgCData(oldp+171,(((0x2005033U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0x12U : 
                                        ((0x2006033U 
                                          == (0xfe00707fU 
                                              & vlSelf->top__DOT__mem_io_instIO_rdata))
                                          ? 0x13U : 
                                         ((0x2007033U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__mem_io_instIO_rdata))
                                           ? 0x14U : 
                                          ((0x1073U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__mem_io_instIO_rdata))
                                            ? 1U : 
                                           ((0x2073U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))
                                             ? 5U : 
                                            ((0x3073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__mem_io_instIO_rdata))
                                              ? 0x15U
                                              : ((0x5073U 
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
                                                    : 0U)))))))))),5);
            tracep->chgCData(oldp+172,(((0x2004033U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0x11U : 
                                        ((0x2005033U 
                                          == (0xfe00707fU 
                                              & vlSelf->top__DOT__mem_io_instIO_rdata))
                                          ? 0x12U : 
                                         ((0x2006033U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__mem_io_instIO_rdata))
                                           ? 0x13U : 
                                          ((0x2007033U 
                                            == (0xfe00707fU 
                                                & vlSelf->top__DOT__mem_io_instIO_rdata))
                                            ? 0x14U
                                            : ((0x1073U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                ? 1U
                                                : (
                                                   (0x2073U 
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
                                                        : 0U))))))))))),5);
            tracep->chgCData(oldp+173,(((0x2003033U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0xfU : (
                                                   (0x2004033U 
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
                                                             : 0U)))))))))))),5);
            tracep->chgCData(oldp+174,(((0x2001033U 
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
                                                              : 0U))))))))))))),5);
            tracep->chgCData(oldp+175,(((0x2000033U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0xdU : (
                                                   (0x2001033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 0xeU
                                                    : 
                                                   ((0x2003033U 
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
                                                               : 0U)))))))))))))),5);
            tracep->chgCData(oldp+176,(((0x7033U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 6U : ((0x2000033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 0xdU
                                                  : 
                                                 ((0x2001033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                   ? 0xeU
                                                   : 
                                                  ((0x2003033U 
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
                                                              : 0U))))))))))))))),5);
            tracep->chgCData(oldp+177,(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183),5);
            tracep->chgCData(oldp+178,(((0x40005033U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 9U : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183))),5);
            tracep->chgCData(oldp+179,(((0x5033U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 8U : ((0x40005033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 9U
                                                  : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183)))),5);
            tracep->chgCData(oldp+180,(((0x4033U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 4U : ((0x5033U 
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
                                                   : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183))))),5);
            tracep->chgCData(oldp+181,(((0x3033U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0xcU : (
                                                   (0x4033U 
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
                                                      : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183)))))),5);
            tracep->chgCData(oldp+182,(((0x2033U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0xbU : (
                                                   (0x3033U 
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
                                                       : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183))))))),5);
            tracep->chgCData(oldp+183,(((0x1033U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 7U : ((0x2033U 
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
                                                      : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183)))))))),5);
            tracep->chgCData(oldp+184,(((0x40000033U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0xaU : (
                                                   (0x1033U 
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
                                                         : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183))))))))),5);
            tracep->chgCData(oldp+185,(((0x33U == (0xfe00707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 3U : ((0x40000033U 
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
                                                        : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183)))))))))),5);
            tracep->chgCData(oldp+186,(((0x40005013U 
                                         == (0xfc00707fU 
                                             & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 9U : ((0x33U 
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
                                                         : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183))))))))))),5);
            tracep->chgCData(oldp+187,(((0x5013U == 
                                         (0xfc00707fU 
                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 8U : ((0x40005013U 
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
                                                          : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183)))))))))))),5);
            tracep->chgCData(oldp+188,(((0x1013U == 
                                         (0xfc00707fU 
                                          & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 7U : ((0x5013U 
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
                                                           : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183))))))))))))),5);
            tracep->chgCData(oldp+189,(((0x7013U == 
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
                                                            : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183)))))))))))))),5);
            tracep->chgCData(oldp+190,(((0x6013U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 5U : ((0x7013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 6U
                                                  : 
                                                 ((0x1013U 
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
                                                             : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183))))))))))))))),5);
            tracep->chgCData(oldp+191,(((0x4013U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 4U : ((0x6013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 5U
                                                  : 
                                                 ((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                   ? 6U
                                                   : 
                                                  ((0x1013U 
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
                                                              : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_183)))))))))))))))),5);
            tracep->chgCData(oldp+192,(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198),5);
            tracep->chgCData(oldp+193,(((0x2013U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0xbU : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198))),5);
            tracep->chgCData(oldp+194,(((0x13U == (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 3U : ((0x2013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 0xbU
                                                  : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198)))),5);
            tracep->chgCData(oldp+195,(((0x2023U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 3U : ((0x13U 
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
                                                   : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198))))),5);
            tracep->chgCData(oldp+196,(((0x1023U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 3U : ((0x2023U 
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
                                                    : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198)))))),5);
            tracep->chgCData(oldp+197,(((0x23U == (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 3U : ((0x1023U 
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
                                                     : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198))))))),5);
            tracep->chgCData(oldp+198,(((0x5003U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 3U : ((0x23U 
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
                                                      : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198)))))))),5);
            tracep->chgCData(oldp+199,(((0x4003U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 3U : ((0x5003U 
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
                                                       : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198))))))))),5);
            tracep->chgCData(oldp+200,(((0x2003U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 3U : ((0x4003U 
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
                                                        : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198)))))))))),5);
            tracep->chgCData(oldp+201,(((0x1003U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 3U : ((0x2003U 
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
                                                         : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198))))))))))),5);
            tracep->chgCData(oldp+202,(((3U == (0x707fU 
                                                & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 3U : ((0x1003U 
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
                                                          : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198)))))))))))),5);
            tracep->chgCData(oldp+203,(((0x7063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0U : ((3U 
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
                                                           : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198))))))))))))),5);
            tracep->chgCData(oldp+204,(((0x6063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0U : ((0x7063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 0U
                                                  : 
                                                 ((3U 
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
                                                            : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198)))))))))))))),5);
            tracep->chgCData(oldp+205,(((0x5063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0U : ((0x6063U 
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
                                                             : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198))))))))))))))),5);
            tracep->chgCData(oldp+206,(((0x4063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0U : ((0x5063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 0U
                                                  : 
                                                 ((0x6063U 
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
                                                              : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_198)))))))))))))))),5);
            tracep->chgCData(oldp+207,(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_213),5);
            tracep->chgCData(oldp+208,(((0x63U == (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0U : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_213))),5);
            tracep->chgCData(oldp+209,(((0x67U == (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 0U
                                                  : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_213)))),5);
            tracep->chgCData(oldp+210,(((0x6fU == (0x7fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 2U
                                                  : 
                                                 ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                   ? 0U
                                                   : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_213))))),5);
            tracep->chgCData(oldp+211,(((0x17U == (0x7fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 3U : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 1U
                                                  : 
                                                 ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                   ? 2U
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 0U
                                                    : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_213)))))),5);
            tracep->chgCData(oldp+212,(((0x2023U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0xaU : 0U)),5);
            tracep->chgCData(oldp+213,(((0x1023U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 9U : ((0x2023U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 0xaU
                                                  : 0U))),5);
            tracep->chgCData(oldp+214,(((0x23U == (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 8U : ((0x1023U 
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
                                                   : 0U)))),5);
            tracep->chgCData(oldp+215,(((0x5003U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0x15U : 
                                        ((0x23U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__mem_io_instIO_rdata))
                                          ? 8U : ((0x1023U 
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
                                                    : 0U))))),5);
            tracep->chgCData(oldp+216,(((0x4003U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0x14U : 
                                        ((0x5003U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__mem_io_instIO_rdata))
                                          ? 0x15U : 
                                         ((0x23U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__mem_io_instIO_rdata))
                                           ? 8U : (
                                                   (0x1023U 
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
                                                     : 0U)))))),5);
            tracep->chgCData(oldp+217,(((0x2003U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 6U : ((0x4003U 
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
                                                      : 0U))))))),5);
            tracep->chgCData(oldp+218,(((0x1003U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 5U : ((0x2003U 
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
                                                       : 0U)))))))),5);
            tracep->chgCData(oldp+219,(((3U == (0x707fU 
                                                & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 4U : ((0x1003U 
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
                                                        : 0U))))))))),5);
            tracep->chgCData(oldp+220,(((0x7063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0U : ((3U 
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
                                                         : 0U)))))))))),5);
            tracep->chgCData(oldp+221,(((0x6063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0U : ((0x7063U 
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
                                                          : 0U))))))))))),5);
            tracep->chgCData(oldp+222,(((0x5063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0U : ((0x6063U 
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
                                                           : 0U)))))))))))),5);
            tracep->chgCData(oldp+223,(((0x4063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0U : ((0x5063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 0U
                                                  : 
                                                 ((0x6063U 
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
                                                            : 0U))))))))))))),5);
            tracep->chgCData(oldp+224,(((0x1063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0U : ((0x4063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 0U
                                                  : 
                                                 ((0x5063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                   ? 0U
                                                   : 
                                                  ((0x6063U 
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
                                                             : 0U)))))))))))))),5);
            tracep->chgCData(oldp+225,(((0x63U == (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0U : ((0x1063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 0U
                                                  : 
                                                 ((0x4063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                   ? 0U
                                                   : 
                                                  ((0x5063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 0U
                                                    : 
                                                   ((0x6063U 
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
                                                              : 0U))))))))))))))),5);
            tracep->chgCData(oldp+226,(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_269),5);
            tracep->chgCData(oldp+227,(((0x6fU == (0x7fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 0U : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_269))),5);
            tracep->chgCData(oldp+228,(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_271),5);
            tracep->chgCData(oldp+229,(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_2),5);
            tracep->chgBit(oldp+230,(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_307));
            tracep->chgBit(oldp+231,(((0x2023U != (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                      & ((0x13U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                         | (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_307)))));
            tracep->chgBit(oldp+232,(((0x1023U != (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                      & ((0x2023U != 
                                          (0x707fU 
                                           & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                         & ((0x13U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                            | (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_307))))));
            tracep->chgBit(oldp+233,(((0x23U != (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                      & ((0x1023U != 
                                          (0x707fU 
                                           & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                         & ((0x2023U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                            & ((0x13U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                               | (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_307)))))));
            tracep->chgBit(oldp+234,(((0x7063U != (0x707fU 
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
                                                                 | (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_307)))))))))))));
            tracep->chgBit(oldp+235,(((0x6063U != (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                      & ((0x7063U != 
                                          (0x707fU 
                                           & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                         & ((3U == 
                                             (0x707fU 
                                              & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                            | ((0x1003U 
                                                == 
                                                (0x707fU 
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
                                                                    | (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_307))))))))))))));
            tracep->chgBit(oldp+236,(((0x5063U != (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                      & ((0x6063U != 
                                          (0x707fU 
                                           & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                         & ((0x7063U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                            & ((3U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                               | ((0x1003U 
                                                   == 
                                                   (0x707fU 
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
                                                                       | (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_307)))))))))))))));
            tracep->chgBit(oldp+237,(((0x4063U != (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                      & ((0x5063U != 
                                          (0x707fU 
                                           & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                         & ((0x6063U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                            & ((0x7063U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                               & ((3U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                  | ((0x1003U 
                                                      == 
                                                      (0x707fU 
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
                                                                          | (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_307))))))))))))))));
            tracep->chgBit(oldp+238,(((0x1063U != (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                      & ((0x4063U != 
                                          (0x707fU 
                                           & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                         & ((0x5063U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                            & ((0x6063U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                               & ((0x7063U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                  & ((3U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                     | ((0x1003U 
                                                         == 
                                                         (0x707fU 
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
                                                                             | (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_307)))))))))))))))));
            tracep->chgBit(oldp+239,(((0x63U != (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                      & ((0x1063U != 
                                          (0x707fU 
                                           & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                         & ((0x4063U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                            & ((0x5063U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                               & ((0x6063U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                  & ((0x7063U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                     & ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__mem_io_instIO_rdata)) 
                                                        | ((0x1003U 
                                                            == 
                                                            (0x707fU 
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
                                                                                | (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_307))))))))))))))))));
            tracep->chgBit(oldp+240,(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_3));
            tracep->chgCData(oldp+241,(((0x7063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : 0U)),2);
            tracep->chgCData(oldp+242,(((0x6063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x7063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 2U
                                                  : 0U))),2);
            tracep->chgCData(oldp+243,(((0x5063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x6063U 
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
                                                   : 0U)))),2);
            tracep->chgCData(oldp+244,(((0x4063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x5063U 
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
                                                    : 0U))))),2);
            tracep->chgCData(oldp+245,(((0x1063U == 
                                         (0x707fU & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x4063U 
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
                                                     : 0U)))))),2);
            tracep->chgCData(oldp+246,(((0x63U == (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 2U : ((0x1063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 2U
                                                  : 
                                                 ((0x4063U 
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
                                                      : 0U))))))),2);
            tracep->chgCData(oldp+247,(((0x67U == (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 2U
                                                  : 
                                                 ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                   ? 2U
                                                   : 
                                                  ((0x4063U 
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
                                                       : 0U)))))))),2);
            tracep->chgCData(oldp+248,(((0x6fU == (0x7fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                         ? 1U : ((0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 1U
                                                  : 
                                                 ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                   ? 2U
                                                   : 
                                                  ((0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 2U
                                                    : 
                                                   ((0x4063U 
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
                                                        : 0U))))))))),2);
            tracep->chgCData(oldp+249,(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_379),2);
            tracep->chgBit(oldp+250,((IData)((0x4073U 
                                              == (0x407fU 
                                                  & vlSelf->top__DOT__mem_io_instIO_rdata)))));
            tracep->chgSData(oldp+251,(vlSelf->top__DOT__rv32e__DOT__decode__DOT___imm_T_5),12);
            tracep->chgSData(oldp+252,(vlSelf->top__DOT__rv32e__DOT__decode__DOT___imm_T_11),13);
            tracep->chgIData(oldp+253,((0xfffff000U 
                                        & vlSelf->top__DOT__mem_io_instIO_rdata)),32);
            tracep->chgIData(oldp+254,(((0x100000U 
                                         & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                            >> 0xbU)) 
                                        | ((0xff000U 
                                            & vlSelf->top__DOT__mem_io_instIO_rdata) 
                                           | ((0x800U 
                                               & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U)))))),21);
            tracep->chgIData(oldp+255,(vlSelf->top__DOT__rv32e__DOT__decode__DOT___GEN_0),21);
            tracep->chgIData(oldp+256,(((5U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                                         ? (0xfffff000U 
                                            & vlSelf->top__DOT__mem_io_instIO_rdata)
                                         : (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__rv32e__DOT__decode__DOT___GEN_0 
                                                            >> 0x14U)))) 
                                             << 0x15U) 
                                            | vlSelf->top__DOT__rv32e__DOT__decode__DOT___GEN_0))),32);
            tracep->chgIData(oldp+257,(((4U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___imm_T_11) 
                                                            >> 0xcU)))) 
                                             << 0xdU) 
                                            | (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___imm_T_11))
                                         : ((5U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                                             ? (0xfffff000U 
                                                & vlSelf->top__DOT__mem_io_instIO_rdata)
                                             : (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__rv32e__DOT__decode__DOT___GEN_0 
                                                                >> 0x14U)))) 
                                                 << 0x15U) 
                                                | vlSelf->top__DOT__rv32e__DOT__decode__DOT___GEN_0)))),32);
            tracep->chgIData(oldp+258,(vlSelf->top__DOT__rv32e__DOT__decode__DOT___GEN_3),32);
            tracep->chgIData(oldp+259,(vlSelf->top__DOT__rv32e__DOT__decode__DOT__imm),32);
            tracep->chgBit(oldp+260,((0U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_2))));
            tracep->chgIData(oldp+261,(((0x80000U & vlSelf->top__DOT__mem_io_instIO_rdata)
                                         ? 0x7ffffffU
                                         : 0U)),27);
            tracep->chgQData(oldp+262,((((QData)((IData)(
                                                         ((0x80000U 
                                                           & vlSelf->top__DOT__mem_io_instIO_rdata)
                                                           ? 0x7ffffffU
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                              >> 0xfU)))))),59);
            tracep->chgBit(oldp+264,((5U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))));
            tracep->chgBit(oldp+265,((6U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))));
            tracep->chgIData(oldp+266,(((IData)(4U) 
                                        + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)),32);
            tracep->chgIData(oldp+267,(((6U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                                         ? ((IData)(4U) 
                                            + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)
                                         : vlSelf->top__DOT__rv32e__DOT__regs_io_rs1_data)),32);
            tracep->chgIData(oldp+268,(((5U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                                         ? vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc
                                         : ((6U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                                             ? ((IData)(4U) 
                                                + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)
                                             : vlSelf->top__DOT__rv32e__DOT__regs_io_rs1_data))),32);
            tracep->chgQData(oldp+269,(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10),59);
            tracep->chgBit(oldp+271,((2U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))));
            tracep->chgBit(oldp+272,(((2U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0)) 
                                      & (1U == ((0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                 ? 0U
                                                 : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_379))))));
            tracep->chgBit(oldp+273,(((5U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0)) 
                                      | (2U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0)))));
            tracep->chgIData(oldp+274,(((2U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                                         ? (((- (IData)(
                                                        (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelf->top__DOT__mem_io_instIO_rdata 
                                               >> 0x14U))
                                         : vlSelf->top__DOT__rv32e__DOT__decode__DOT___GEN_3)),32);
            tracep->chgIData(oldp+275,((((5U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0)) 
                                         | (2U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0)))
                                         ? ((2U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                                             ? (((- (IData)(
                                                            (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U))
                                             : vlSelf->top__DOT__rv32e__DOT__decode__DOT___GEN_3)
                                         : vlSelf->top__DOT__rv32e__DOT__regs_io_rs2_data)),32);
            tracep->chgIData(oldp+276,((((2U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0)) 
                                         & (1U == (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                    ? 0U
                                                    : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_379))))
                                         ? ((IData)(4U) 
                                            + vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc)
                                         : (((5U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0)) 
                                             | (2U 
                                                == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0)))
                                             ? ((2U 
                                                 == (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT__instType_0))
                                                 ? 
                                                (((- (IData)(
                                                             (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U))
                                                 : vlSelf->top__DOT__rv32e__DOT__decode__DOT___GEN_3)
                                             : vlSelf->top__DOT__rv32e__DOT__regs_io_rs2_data))),32);
            tracep->chgIData(oldp+277,((vlSelf->top__DOT__rv32e__DOT__regs_io_rs1_data 
                                        + vlSelf->top__DOT__rv32e__DOT__decode__DOT__imm)),32);
            tracep->chgIData(oldp+278,((0xfffffffeU 
                                        & (vlSelf->top__DOT__rv32e__DOT__regs_io_rs1_data 
                                           + vlSelf->top__DOT__rv32e__DOT__decode__DOT__imm))),32);
            tracep->chgIData(oldp+279,((vlSelf->top__DOT__rv32e__DOT__fetch__DOT__pc 
                                        + vlSelf->top__DOT__rv32e__DOT__decode__DOT__imm)),32);
            tracep->chgIData(oldp+280,((IData)(((0x14U 
                                                 == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                 ? (QData)((IData)(
                                                                   VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                 : 
                                                ((0x13U 
                                                  == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                  ? (QData)((IData)(
                                                                    VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                  : vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_88)))),32);
            tracep->chgBit(oldp+281,(((7U == (7U & 
                                              (vlSelf->top__DOT__mem_io_instIO_rdata 
                                               >> 0xcU)))
                                       ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                          >= vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                       : ((6U == (7U 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xcU)))
                                           ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                              < vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                           : ((5U == 
                                               (7U 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0xcU)))
                                               ? VL_GTES_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0xcU)))
                                                   ? 
                                                  VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0xcU)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                    != vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0xcU))) 
                                                    & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                       == vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))))))));
            tracep->chgBit(oldp+282,(((1U == ((0x37U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                               ? 0U
                                               : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_379))) 
                                      | ((2U == ((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__mem_io_instIO_rdata))
                                                  ? 0U
                                                  : (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___instType_T_379))) 
                                         & ((7U == 
                                             (7U & 
                                              (vlSelf->top__DOT__mem_io_instIO_rdata 
                                               >> 0xcU)))
                                             ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                >= vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                             : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xcU)))
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                 < vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                 : 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xcU)))
                                                  ? 
                                                 VL_GTES_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0xcU)))
                                                   ? 
                                                  VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0xcU)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                    != vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0xcU))) 
                                                    & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                       == vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))))))))));
            tracep->chgIData(oldp+283,(((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                        + vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)),32);
            tracep->chgIData(oldp+284,(((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                        ^ vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)),32);
            tracep->chgIData(oldp+285,(((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                        | vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)),32);
            tracep->chgIData(oldp+286,(((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                        & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)),32);
            tracep->chgQData(oldp+287,((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10))),63);
            tracep->chgQData(oldp+289,((0x7fffffffffffffffULL 
                                        & ((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)) 
                                           << (0x1fU 
                                               & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))),63);
            tracep->chgIData(oldp+291,(((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                        >> (0x1fU & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d))),32);
            tracep->chgIData(oldp+292,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), 
                                                      (0x1fU 
                                                       & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d))),32);
            tracep->chgIData(oldp+293,(((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                        - vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)),32);
            tracep->chgBit(oldp+294,(VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)));
            tracep->chgBit(oldp+295,(((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                      < vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)));
            tracep->chgIData(oldp+296,((~ (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10))),32);
            tracep->chgIData(oldp+297,(((~ (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)) 
                                        & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)),32);
            tracep->chgQData(oldp+298,(vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_23),64);
            tracep->chgQData(oldp+300,(VL_MULS_QQQ(64,64,64, 
                                                   VL_EXTENDS_QI(64,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)), 
                                                   VL_EXTENDS_QI(64,32, vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d))),64);
            tracep->chgQData(oldp+302,((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d))),33);
            VL_EXTENDS_WI(65,32, __Vtemp1159, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10));
            __Vtemp1160[0U] = __Vtemp1159[0U];
            __Vtemp1160[1U] = __Vtemp1159[1U];
            __Vtemp1160[2U] = (1U & __Vtemp1159[2U]);
            VL_EXTENDS_WQ(65,33, __Vtemp1162, (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)));
            __Vtemp1163[0U] = __Vtemp1162[0U];
            __Vtemp1163[1U] = __Vtemp1162[1U];
            __Vtemp1163[2U] = (1U & __Vtemp1162[2U]);
            VL_MULS_WWW(65,65,65, __Vtemp1164, __Vtemp1160, __Vtemp1163);
            __Vtemp1165[0U] = __Vtemp1164[0U];
            __Vtemp1165[1U] = __Vtemp1164[1U];
            __Vtemp1165[2U] = (1U & __Vtemp1164[2U]);
            tracep->chgWData(oldp+304,(__Vtemp1165),65);
            VL_EXTENDS_WI(65,32, __Vtemp1168, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10));
            __Vtemp1169[0U] = __Vtemp1168[0U];
            __Vtemp1169[1U] = __Vtemp1168[1U];
            __Vtemp1169[2U] = (1U & __Vtemp1168[2U]);
            VL_EXTENDS_WQ(65,33, __Vtemp1171, (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)));
            __Vtemp1172[0U] = __Vtemp1171[0U];
            __Vtemp1172[1U] = __Vtemp1171[1U];
            __Vtemp1172[2U] = (1U & __Vtemp1171[2U]);
            VL_MULS_WWW(65,65,65, __Vtemp1173, __Vtemp1169, __Vtemp1172);
            tracep->chgQData(oldp+307,((((QData)((IData)(
                                                         __Vtemp1173[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp1173[0U])))),64);
            VL_EXTENDS_WI(65,32, __Vtemp1177, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10));
            __Vtemp1178[0U] = __Vtemp1177[0U];
            __Vtemp1178[1U] = __Vtemp1177[1U];
            __Vtemp1178[2U] = (1U & __Vtemp1177[2U]);
            VL_EXTENDS_WQ(65,33, __Vtemp1180, (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)));
            __Vtemp1181[0U] = __Vtemp1180[0U];
            __Vtemp1181[1U] = __Vtemp1180[1U];
            __Vtemp1181[2U] = (1U & __Vtemp1180[2U]);
            VL_MULS_WWW(65,65,65, __Vtemp1182, __Vtemp1178, __Vtemp1181);
            tracep->chgIData(oldp+309,(__Vtemp1182[1U]),32);
            tracep->chgQData(oldp+310,((0x1ffffffffULL 
                                        & VL_DIVS_QQQ(33, 
                                                      (0x1ffffffffULL 
                                                       & VL_EXTENDS_QI(33,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10))), 
                                                      (0x1ffffffffULL 
                                                       & VL_EXTENDS_QI(33,32, vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d))))),33);
            tracep->chgIData(oldp+312,(VL_DIV_III(32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)),32);
            tracep->chgIData(oldp+313,(VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)),32);
            tracep->chgIData(oldp+314,(VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)),32);
            tracep->chgIData(oldp+315,(((1U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                         ? (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)
                                         : 0U)),32);
            tracep->chgIData(oldp+316,(((2U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                         ? vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d
                                         : ((1U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                             ? (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)
                                             : 0U))),32);
            tracep->chgIData(oldp+317,(((3U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                         ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                            + vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                         : ((2U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                             ? vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d
                                             : ((1U 
                                                 == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                 ? (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)
                                                 : 0U)))),32);
            tracep->chgIData(oldp+318,(((4U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                         ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                            ^ vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                         : ((3U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                             ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                + vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                             : ((2U 
                                                 == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                 ? vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                  ? (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)
                                                  : 0U))))),32);
            tracep->chgIData(oldp+319,(((5U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                         ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                            | vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                         : ((4U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                             ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                ^ vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                             : ((3U 
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
                                                   : 0U)))))),32);
            tracep->chgIData(oldp+320,(((6U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                         ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                            & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                         : ((5U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                             ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                | vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                             : ((4U 
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
                                                    : 0U))))))),32);
            tracep->chgQData(oldp+321,((0x7fffffffffffffffULL 
                                        & ((7U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                            ? ((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)) 
                                               << (0x1fU 
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
                                                                     : 0U))))))))))),63);
            tracep->chgQData(oldp+323,((0x7fffffffffffffffULL 
                                        & ((8U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                            ? (QData)((IData)(
                                                              ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                               >> 
                                                               (0x1fU 
                                                                & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d))))
                                            : ((7U 
                                                == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                ? ((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)) 
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
                                                                         : 0U)))))))))))),63);
            tracep->chgQData(oldp+325,((0x7fffffffffffffffULL 
                                        & ((9U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                            ? (QData)((IData)(
                                                              VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), 
                                                                             (0x1fU 
                                                                              & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d))))
                                            : ((8U 
                                                == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                ? (QData)((IData)(
                                                                  ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d))))
                                                : (
                                                   (7U 
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
                                                                             : 0U))))))))))))),63);
            tracep->chgQData(oldp+327,(vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_70),63);
            tracep->chgQData(oldp+329,(((0xbU == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                         ? (QData)((IData)(
                                                           VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                         : vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_70)),63);
            tracep->chgQData(oldp+331,(((0xcU == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                         ? (QData)((IData)(
                                                           ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                            < vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                         : ((0xbU == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                             ? (QData)((IData)(
                                                               VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                             : vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_70))),63);
            tracep->chgQData(oldp+333,(((0x15U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                         ? (QData)((IData)(
                                                           ((~ (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)) 
                                                            & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                         : ((0xcU == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                             ? (QData)((IData)(
                                                               ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                                < vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                             : ((0xbU 
                                                 == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                 ? (QData)((IData)(
                                                                   VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                 : vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_70)))),63);
            tracep->chgQData(oldp+335,(((0xdU == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                         ? (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_23))
                                         : ((0x15U 
                                             == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                             ? (QData)((IData)(
                                                               ((~ (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)) 
                                                                & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                             : ((0xcU 
                                                 == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                 ? (QData)((IData)(
                                                                   ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                                    < vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                 : 
                                                ((0xbU 
                                                  == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                  ? (QData)((IData)(
                                                                    VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                  : vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_70))))),63);
            tracep->chgQData(oldp+337,(((0xeU == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                         ? (QData)((IData)(
                                                           (VL_MULS_QQQ(64,64,64, 
                                                                        VL_EXTENDS_QI(64,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)), 
                                                                        VL_EXTENDS_QI(64,32, vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)) 
                                                            >> 0x20U)))
                                         : ((0xdU == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                             ? (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_23))
                                             : ((0x15U 
                                                 == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                 ? (QData)((IData)(
                                                                   ((~ (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)) 
                                                                    & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                  ? (QData)((IData)(
                                                                    ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                                     < vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                   ? (QData)((IData)(
                                                                     VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                   : vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_70)))))),63);
            tracep->chgQData(oldp+339,(((0xfU == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                         ? (QData)((IData)(
                                                           (vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_23 
                                                            >> 0x20U)))
                                         : ((0xeU == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                             ? (QData)((IData)(
                                                               (VL_MULS_QQQ(64,64,64, 
                                                                            VL_EXTENDS_QI(64,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)), 
                                                                            VL_EXTENDS_QI(64,32, vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)) 
                                                                >> 0x20U)))
                                             : ((0xdU 
                                                 == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                 ? (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_23))
                                                 : 
                                                ((0x15U 
                                                  == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                  ? (QData)((IData)(
                                                                    ((~ (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)) 
                                                                     & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                   ? (QData)((IData)(
                                                                     ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                                      < vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                    ? (QData)((IData)(
                                                                      VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                    : vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_70))))))),63);
            VL_EXTENDS_WI(65,32, __Vtemp1186, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10));
            __Vtemp1187[0U] = __Vtemp1186[0U];
            __Vtemp1187[1U] = __Vtemp1186[1U];
            __Vtemp1187[2U] = (1U & __Vtemp1186[2U]);
            VL_EXTENDS_WQ(65,33, __Vtemp1189, (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)));
            __Vtemp1190[0U] = __Vtemp1189[0U];
            __Vtemp1190[1U] = __Vtemp1189[1U];
            __Vtemp1190[2U] = (1U & __Vtemp1189[2U]);
            VL_MULS_WWW(65,65,65, __Vtemp1191, __Vtemp1187, __Vtemp1190);
            tracep->chgQData(oldp+341,(((0x10U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                         ? (QData)((IData)(
                                                           __Vtemp1191[1U]))
                                         : ((0xfU == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                             ? (QData)((IData)(
                                                               (vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_23 
                                                                >> 0x20U)))
                                             : ((0xeU 
                                                 == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                 ? (QData)((IData)(
                                                                   (VL_MULS_QQQ(64,64,64, 
                                                                                VL_EXTENDS_QI(64,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)), 
                                                                                VL_EXTENDS_QI(64,32, vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)) 
                                                                    >> 0x20U)))
                                                 : 
                                                ((0xdU 
                                                  == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                  ? (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_23))
                                                  : 
                                                 ((0x15U 
                                                   == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                   ? (QData)((IData)(
                                                                     ((~ (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)) 
                                                                      & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                    ? (QData)((IData)(
                                                                      ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                                       < vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                     ? (QData)((IData)(
                                                                       VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                     : vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_70)))))))),63);
            VL_EXTENDS_WI(65,32, __Vtemp1195, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10));
            __Vtemp1196[0U] = __Vtemp1195[0U];
            __Vtemp1196[1U] = __Vtemp1195[1U];
            __Vtemp1196[2U] = (1U & __Vtemp1195[2U]);
            VL_EXTENDS_WQ(65,33, __Vtemp1198, (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)));
            __Vtemp1199[0U] = __Vtemp1198[0U];
            __Vtemp1199[1U] = __Vtemp1198[1U];
            __Vtemp1199[2U] = (1U & __Vtemp1198[2U]);
            VL_MULS_WWW(65,65,65, __Vtemp1200, __Vtemp1196, __Vtemp1199);
            tracep->chgQData(oldp+343,(((0x11U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                         ? (0x1ffffffffULL 
                                            & VL_DIVS_QQQ(33, 
                                                          (0x1ffffffffULL 
                                                           & VL_EXTENDS_QI(33,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10))), 
                                                          (0x1ffffffffULL 
                                                           & VL_EXTENDS_QI(33,32, vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d))))
                                         : ((0x10U 
                                             == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                             ? (QData)((IData)(
                                                               __Vtemp1200[1U]))
                                             : ((0xfU 
                                                 == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                 ? (QData)((IData)(
                                                                   (vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_23 
                                                                    >> 0x20U)))
                                                 : 
                                                ((0xeU 
                                                  == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                  ? (QData)((IData)(
                                                                    (VL_MULS_QQQ(64,64,64, 
                                                                                VL_EXTENDS_QI(64,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)), 
                                                                                VL_EXTENDS_QI(64,32, vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)) 
                                                                     >> 0x20U)))
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                   ? (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_23))
                                                   : 
                                                  ((0x15U 
                                                    == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                    ? (QData)((IData)(
                                                                      ((~ (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10)) 
                                                                       & vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                     ? (QData)((IData)(
                                                                       ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                                        < vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                                      ? (QData)((IData)(
                                                                        VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                                      : vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_70))))))))),63);
            tracep->chgQData(oldp+345,(vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_88),63);
            tracep->chgQData(oldp+347,(((0x13U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                         ? (QData)((IData)(
                                                           VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                         : vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_88)),63);
            tracep->chgQData(oldp+349,(((0x14U == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                         ? (QData)((IData)(
                                                           VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                         : ((0x13U 
                                             == (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP))
                                             ? (QData)((IData)(
                                                               VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))
                                             : vlSelf->top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_88))),63);
            tracep->chgBit(oldp+351,(((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                      == vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)));
            tracep->chgBit(oldp+352,(((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                      != vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)));
            tracep->chgBit(oldp+353,(VL_GTES_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)));
            tracep->chgBit(oldp+354,(((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                      >= vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)));
            tracep->chgBit(oldp+355,(((1U == (7U & 
                                              (vlSelf->top__DOT__mem_io_instIO_rdata 
                                               >> 0xcU)))
                                       ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                          != vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                       : ((0U == (7U 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xcU))) 
                                          & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                             == vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))));
            tracep->chgBit(oldp+356,(((4U == (7U & 
                                              (vlSelf->top__DOT__mem_io_instIO_rdata 
                                               >> 0xcU)))
                                       ? VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                       : ((1U == (7U 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xcU)))
                                           ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                              != vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                           : ((0U == 
                                               (7U 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0xcU))) 
                                              & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                 == vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d))))));
            tracep->chgBit(oldp+357,(((5U == (7U & 
                                              (vlSelf->top__DOT__mem_io_instIO_rdata 
                                               >> 0xcU)))
                                       ? VL_GTES_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                       : ((4U == (7U 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xcU)))
                                           ? VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                           : ((1U == 
                                               (7U 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0xcU)))
                                               ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                  != vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0xcU))) 
                                                  & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                     == vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)))))));
            tracep->chgBit(oldp+358,(((6U == (7U & 
                                              (vlSelf->top__DOT__mem_io_instIO_rdata 
                                               >> 0xcU)))
                                       ? ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                          < vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                       : ((5U == (7U 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xcU)))
                                           ? VL_GTES_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                           : ((4U == 
                                               (7U 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0xcU)))
                                               ? VL_LTS_III(1,32,32, (IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10), vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                   != vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d)
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0xcU))) 
                                                   & ((IData)(vlSelf->top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10) 
                                                      == vlSelf->top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d))))))));
            tracep->chgBit(oldp+359,(vlSelf->top__DOT__rv32e__DOT__memory__DOT__state));
            tracep->chgCData(oldp+360,(vlSelf->top__DOT__rv32e__DOT__memory__DOT__id_r),5);
            tracep->chgCData(oldp+361,(vlSelf->top__DOT__rv32e__DOT__memory__DOT__mode_r),5);
            tracep->chgIData(oldp+362,(vlSelf->top__DOT__rv32e__DOT__memory__DOT__addr_r),32);
            tracep->chgIData(oldp+363,(vlSelf->top__DOT__rv32e__DOT__memory__DOT__pc_r),32);
            tracep->chgIData(oldp+364,(vlSelf->top__DOT__rv32e__DOT__memory__DOT__inst_r),32);
            tracep->chgBit(oldp+365,((1U & (~ (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__state)))));
            tracep->chgBit(oldp+366,(vlSelf->top__DOT__rv32e__DOT__memory__DOT__state));
            tracep->chgCData(oldp+367,(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode),5);
            tracep->chgIData(oldp+368,(((IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__state)
                                         ? vlSelf->top__DOT__rv32e__DOT__memory__DOT__addr_r
                                         : vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr)),32);
            tracep->chgCData(oldp+369,((0x18U & (vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr 
                                                 << 3U))),5);
            tracep->chgQData(oldp+370,((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs_io_rs2_data))),63);
            tracep->chgQData(oldp+372,(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wdata_T_2),63);
            tracep->chgCData(oldp+374,(((1U == (3U 
                                                & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode)))
                                         ? 3U : (0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode))))),2);
            tracep->chgCData(oldp+375,(((2U == (3U 
                                                & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode)))
                                         ? 0xfU : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode)))
                                                    ? 3U
                                                    : 
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode)))))),4);
            tracep->chgCData(oldp+376,(((2U == (3U 
                                                & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode)))
                                         ? 0xfU : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode)))
                                                    ? 3U
                                                    : 
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_memMode)))))),7);
            tracep->chgCData(oldp+377,(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_memIO_wmask_T_8),7);
            tracep->chgCData(oldp+378,((0x1fU & ((IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__state)
                                                  ? (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__id_r)
                                                  : 
                                                 (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 7U)))),5);
            tracep->chgCData(oldp+379,((0x18U & (((IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__state)
                                                   ? vlSelf->top__DOT__rv32e__DOT__memory__DOT__addr_r
                                                   : vlSelf->top__DOT__rv32e__DOT__decode_io_id2mem_addr) 
                                                 << 3U))),5);
            tracep->chgIData(oldp+380,(vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2),32);
            tracep->chgIData(oldp+381,(((0x80U & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                         ? 0xffffffU
                                         : 0U)),24);
            tracep->chgIData(oldp+382,(((((0x80U & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                           ? 0xffffffU
                                           : 0U) << 8U) 
                                        | (0xffU & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2))),32);
            tracep->chgSData(oldp+383,(((0x8000U & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                         ? 0xffffU : 0U)),16);
            tracep->chgIData(oldp+384,(((((0x8000U 
                                           & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                           ? 0xffffU
                                           : 0U) << 0x10U) 
                                        | (0xffffU 
                                           & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2))),32);
            tracep->chgIData(oldp+385,(((4U == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                                         ? ((((0x80U 
                                               & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                               ? 0xffffffU
                                               : 0U) 
                                             << 8U) 
                                            | (0xffU 
                                               & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2))
                                         : 0U)),32);
            tracep->chgIData(oldp+386,(((0x14U == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                                         ? (0xffU & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                         : ((4U == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                                             ? ((((0x80U 
                                                   & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                                   ? 0xffffffU
                                                   : 0U) 
                                                 << 8U) 
                                                | (0xffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2))
                                             : 0U))),32);
            tracep->chgIData(oldp+387,(((5U == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                                         ? ((((0x8000U 
                                               & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                               ? 0xffffU
                                               : 0U) 
                                             << 0x10U) 
                                            | (0xffffU 
                                               & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2))
                                         : ((0x14U 
                                             == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                                             ? (0xffU 
                                                & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                             : ((4U 
                                                 == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                                                 ? 
                                                ((((0x80U 
                                                    & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                                    ? 0xffffffU
                                                    : 0U) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2))
                                                 : 0U)))),32);
            tracep->chgIData(oldp+388,(((0x15U == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                                         ? (0xffffU 
                                            & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                         : ((5U == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                                             ? ((((0x8000U 
                                                   & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                                   ? 0xffffU
                                                   : 0U) 
                                                 << 0x10U) 
                                                | (0xffffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2))
                                             : ((0x14U 
                                                 == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                                                 ? 
                                                (0xffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->top__DOT__rv32e__DOT__memory__DOT__curMode))
                                                  ? 
                                                 ((((0x80U 
                                                     & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2)
                                                     ? 0xffffffU
                                                     : 0U) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2))
                                                  : 0U))))),32);
            tracep->chgBit(oldp+389,(vlSelf->top__DOT__rv32e__DOT__writeback__DOT__prevFinish));
            tracep->chgIData(oldp+390,(vlSelf->top__DOT__rv32e__DOT__writeback__DOT__prevPC),32);
            tracep->chgIData(oldp+391,(vlSelf->top__DOT__rv32e__DOT__writeback__DOT__prevInst),32);
            tracep->chgQData(oldp+392,((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__writeback__DOT__prevPC))),64);
            __Vtemp1231[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
            __Vtemp1231[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
            __Vtemp1231[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
            __Vtemp1231[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
            __Vtemp1231[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
            __Vtemp1231[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
            __Vtemp1231[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
            __Vtemp1231[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
            __Vtemp1231[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
            __Vtemp1231[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
            __Vtemp1231[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
            __Vtemp1231[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
            __Vtemp1231[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
            __Vtemp1231[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
            __Vtemp1231[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
            __Vtemp1231[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
            __Vtemp1231[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
            __Vtemp1231[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
            __Vtemp1231[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
            __Vtemp1231[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
            __Vtemp1231[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
            __Vtemp1231[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
            __Vtemp1231[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
            __Vtemp1231[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
            __Vtemp1231[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
            __Vtemp1231[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
            __Vtemp1231[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
            __Vtemp1231[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
            __Vtemp1231[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
            __Vtemp1231[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
            __Vtemp1231[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
            __Vtemp1231[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                          >> 0x20U));
            tracep->chgWData(oldp+394,(__Vtemp1231),1024);
            tracep->chgIData(oldp+426,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0),32);
            tracep->chgIData(oldp+427,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1),32);
            tracep->chgIData(oldp+428,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2),32);
            tracep->chgIData(oldp+429,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3),32);
            tracep->chgIData(oldp+430,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4),32);
            tracep->chgIData(oldp+431,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5),32);
            tracep->chgIData(oldp+432,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6),32);
            tracep->chgIData(oldp+433,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7),32);
            tracep->chgIData(oldp+434,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8),32);
            tracep->chgIData(oldp+435,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9),32);
            tracep->chgIData(oldp+436,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11),32);
            tracep->chgIData(oldp+437,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12),32);
            tracep->chgIData(oldp+438,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13),32);
            tracep->chgIData(oldp+439,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14),32);
            tracep->chgIData(oldp+440,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15),32);
            tracep->chgIData(oldp+441,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16),32);
            tracep->chgIData(oldp+442,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17),32);
            tracep->chgIData(oldp+443,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18),32);
            tracep->chgIData(oldp+444,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19),32);
            tracep->chgIData(oldp+445,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20),32);
            tracep->chgIData(oldp+446,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21),32);
            tracep->chgIData(oldp+447,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22),32);
            tracep->chgIData(oldp+448,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23),32);
            tracep->chgIData(oldp+449,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24),32);
            tracep->chgIData(oldp+450,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25),32);
            tracep->chgIData(oldp+451,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26),32);
            tracep->chgIData(oldp+452,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27),32);
            tracep->chgIData(oldp+453,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28),32);
            tracep->chgIData(oldp+454,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29),32);
            tracep->chgIData(oldp+455,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30),32);
            tracep->chgIData(oldp+456,(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31),32);
            tracep->chgIData(oldp+457,(((1U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1
                                         : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0)),32);
            tracep->chgIData(oldp+458,(((2U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2
                                         : ((1U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1
                                             : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0))),32);
            tracep->chgIData(oldp+459,(((3U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3
                                         : ((2U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2
                                             : ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1
                                                 : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0)))),32);
            tracep->chgIData(oldp+460,(((4U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                         : ((3U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3
                                             : ((2U 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0))))),32);
            tracep->chgIData(oldp+461,(((5U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                         : ((4U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                             : ((3U 
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
                                                   : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0)))))),32);
            tracep->chgIData(oldp+462,(((6U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6
                                         : ((5U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                             : ((4U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                                 : 
                                                ((3U 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0))))))),32);
            tracep->chgIData(oldp+463,(((7U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7
                                         : ((6U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6
                                             : ((5U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                                  : 
                                                 ((3U 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0)))))))),32);
            tracep->chgIData(oldp+464,(((8U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8
                                         : ((7U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7
                                             : ((6U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6
                                                 : 
                                                ((5U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0xfU)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                                   : 
                                                  ((3U 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0))))))))),32);
            tracep->chgIData(oldp+465,(((9U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9
                                         : ((8U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8
                                             : ((7U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7
                                                 : 
                                                ((6U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0xfU)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0xfU)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                                    : 
                                                   ((3U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0)))))))))),32);
            tracep->chgIData(oldp+466,(((0xaU == (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10
                                         : ((9U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9
                                             : ((8U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8
                                                 : 
                                                ((7U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0xfU)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0xfU)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0xfU)))
                                                     ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                                     : 
                                                    ((3U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0))))))))))),32);
            tracep->chgIData(oldp+467,(((0xbU == (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11
                                         : ((0xaU == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10
                                             : ((9U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8
                                                  : 
                                                 ((7U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0xfU)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0xfU)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0xfU)))
                                                     ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                          >> 0xfU)))
                                                      ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                                      : 
                                                     ((3U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0)))))))))))),32);
            tracep->chgIData(oldp+468,(((0xcU == (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12
                                         : ((0xbU == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11
                                             : ((0xaU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10
                                                 : 
                                                ((9U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9
                                                  : 
                                                 ((8U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0xfU)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0xfU)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0xfU)))
                                                     ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                          >> 0xfU)))
                                                      ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                           >> 0xfU)))
                                                       ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                                       : 
                                                      ((3U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0))))))))))))),32);
            tracep->chgIData(oldp+469,(vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_13),32);
            tracep->chgIData(oldp+470,(((0xeU == (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14
                                         : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_13)),32);
            tracep->chgIData(oldp+471,(((0xfU == (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15
                                         : ((0xeU == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14
                                             : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_13))),32);
            tracep->chgIData(oldp+472,(((0x10U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16
                                         : ((0xfU == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15
                                             : ((0xeU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14
                                                 : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_13)))),32);
            tracep->chgIData(oldp+473,(((0x11U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                         : ((0x10U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16
                                             : ((0xfU 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_13))))),32);
            tracep->chgIData(oldp+474,(((0x12U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                         : ((0x11U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                             : ((0x10U 
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
                                                   : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_13)))))),32);
            tracep->chgIData(oldp+475,(((0x13U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19
                                         : ((0x12U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                             : ((0x11U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                                 : 
                                                ((0x10U 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_13))))))),32);
            tracep->chgIData(oldp+476,(((0x14U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20
                                         : ((0x13U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19
                                             : ((0x12U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                                 : 
                                                ((0x11U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                                  : 
                                                 ((0x10U 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_13)))))))),32);
            tracep->chgIData(oldp+477,(((0x15U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21
                                         : ((0x14U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20
                                             : ((0x13U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19
                                                 : 
                                                ((0x12U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                                  : 
                                                 ((0x11U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0xfU)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                                   : 
                                                  ((0x10U 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_13))))))))),32);
            tracep->chgIData(oldp+478,(((0x16U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22
                                         : ((0x15U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21
                                             : ((0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20
                                                 : 
                                                ((0x13U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19
                                                  : 
                                                 ((0x12U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0xfU)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                                   : 
                                                  ((0x11U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0xfU)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                                    : 
                                                   ((0x10U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_13)))))))))),32);
            tracep->chgIData(oldp+479,(((0x17U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23
                                         : ((0x16U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22
                                             : ((0x15U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21
                                                 : 
                                                ((0x14U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20
                                                  : 
                                                 ((0x13U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0xfU)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19
                                                   : 
                                                  ((0x12U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0xfU)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                                    : 
                                                   ((0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0xfU)))
                                                     ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                                     : 
                                                    ((0x10U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_13))))))))))),32);
            tracep->chgIData(oldp+480,(((0x18U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24
                                         : ((0x17U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23
                                             : ((0x16U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22
                                                 : 
                                                ((0x15U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21
                                                  : 
                                                 ((0x14U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0xfU)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20
                                                   : 
                                                  ((0x13U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0xfU)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19
                                                    : 
                                                   ((0x12U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0xfU)))
                                                     ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                                     : 
                                                    ((0x11U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                          >> 0xfU)))
                                                      ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                                      : 
                                                     ((0x10U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_13)))))))))))),32);
            tracep->chgIData(oldp+481,(((0x19U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25
                                         : ((0x18U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24
                                             : ((0x17U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23
                                                 : 
                                                ((0x16U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22
                                                  : 
                                                 ((0x15U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0xfU)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21
                                                   : 
                                                  ((0x14U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0xfU)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0xfU)))
                                                     ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19
                                                     : 
                                                    ((0x12U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                          >> 0xfU)))
                                                      ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                                      : 
                                                     ((0x11U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                           >> 0xfU)))
                                                       ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                                       : 
                                                      ((0x10U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_13))))))))))))),32);
            tracep->chgIData(oldp+482,(vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_26),32);
            tracep->chgIData(oldp+483,(((0x1bU == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27
                                         : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_26)),32);
            tracep->chgIData(oldp+484,(((0x1cU == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28
                                         : ((0x1bU 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27
                                             : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_26))),32);
            tracep->chgIData(oldp+485,(((0x1dU == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29
                                         : ((0x1cU 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28
                                             : ((0x1bU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27
                                                 : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_26)))),32);
            tracep->chgIData(oldp+486,(((0x1eU == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30
                                         : ((0x1dU 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0xfU)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29
                                             : ((0x1cU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28
                                                 : 
                                                ((0x1bU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0xfU)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27
                                                  : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_26))))),32);
            tracep->chgIData(oldp+487,(((1U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1
                                         : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0)),32);
            tracep->chgIData(oldp+488,(((2U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2
                                         : ((1U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1
                                             : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0))),32);
            tracep->chgIData(oldp+489,(((3U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3
                                         : ((2U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2
                                             : ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1
                                                 : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0)))),32);
            tracep->chgIData(oldp+490,(((4U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                         : ((3U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3
                                             : ((2U 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0))))),32);
            tracep->chgIData(oldp+491,(((5U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                         : ((4U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                             : ((3U 
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
                                                   : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0)))))),32);
            tracep->chgIData(oldp+492,(((6U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6
                                         : ((5U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                             : ((4U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                                 : 
                                                ((3U 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0))))))),32);
            tracep->chgIData(oldp+493,(((7U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7
                                         : ((6U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6
                                             : ((5U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                                  : 
                                                 ((3U 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0)))))))),32);
            tracep->chgIData(oldp+494,(((8U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8
                                         : ((7U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7
                                             : ((6U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6
                                                 : 
                                                ((5U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0x14U)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                                   : 
                                                  ((3U 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0))))))))),32);
            tracep->chgIData(oldp+495,(((9U == (0x1fU 
                                                & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9
                                         : ((8U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8
                                             : ((7U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7
                                                 : 
                                                ((6U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0x14U)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0x14U)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                                    : 
                                                   ((3U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0)))))))))),32);
            tracep->chgIData(oldp+496,(((0xaU == (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10
                                         : ((9U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9
                                             : ((8U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8
                                                 : 
                                                ((7U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0x14U)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0x14U)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0x14U)))
                                                     ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                                     : 
                                                    ((3U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0))))))))))),32);
            tracep->chgIData(oldp+497,(((0xbU == (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11
                                         : ((0xaU == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10
                                             : ((9U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8
                                                  : 
                                                 ((7U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0x14U)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0x14U)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0x14U)))
                                                     ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                          >> 0x14U)))
                                                      ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                                      : 
                                                     ((3U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0)))))))))))),32);
            tracep->chgIData(oldp+498,(((0xcU == (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12
                                         : ((0xbU == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11
                                             : ((0xaU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10
                                                 : 
                                                ((9U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9
                                                  : 
                                                 ((8U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0x14U)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0x14U)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0x14U)))
                                                     ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                          >> 0x14U)))
                                                      ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                           >> 0x14U)))
                                                       ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4
                                                       : 
                                                      ((3U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0))))))))))))),32);
            tracep->chgIData(oldp+499,(vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_45),32);
            tracep->chgIData(oldp+500,(((0xeU == (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14
                                         : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_45)),32);
            tracep->chgIData(oldp+501,(((0xfU == (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15
                                         : ((0xeU == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14
                                             : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_45))),32);
            tracep->chgIData(oldp+502,(((0x10U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16
                                         : ((0xfU == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15
                                             : ((0xeU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14
                                                 : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_45)))),32);
            tracep->chgIData(oldp+503,(((0x11U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                         : ((0x10U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16
                                             : ((0xfU 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_45))))),32);
            tracep->chgIData(oldp+504,(((0x12U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                         : ((0x11U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                             : ((0x10U 
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
                                                   : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_45)))))),32);
            tracep->chgIData(oldp+505,(((0x13U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19
                                         : ((0x12U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                             : ((0x11U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                                 : 
                                                ((0x10U 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_45))))))),32);
            tracep->chgIData(oldp+506,(((0x14U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20
                                         : ((0x13U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19
                                             : ((0x12U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                                 : 
                                                ((0x11U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                                  : 
                                                 ((0x10U 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_45)))))))),32);
            tracep->chgIData(oldp+507,(((0x15U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21
                                         : ((0x14U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20
                                             : ((0x13U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19
                                                 : 
                                                ((0x12U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                                  : 
                                                 ((0x11U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0x14U)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                                   : 
                                                  ((0x10U 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_45))))))))),32);
            tracep->chgIData(oldp+508,(((0x16U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22
                                         : ((0x15U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21
                                             : ((0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20
                                                 : 
                                                ((0x13U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19
                                                  : 
                                                 ((0x12U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0x14U)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                                   : 
                                                  ((0x11U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0x14U)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                                    : 
                                                   ((0x10U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_45)))))))))),32);
            tracep->chgIData(oldp+509,(((0x17U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23
                                         : ((0x16U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22
                                             : ((0x15U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21
                                                 : 
                                                ((0x14U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20
                                                  : 
                                                 ((0x13U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0x14U)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19
                                                   : 
                                                  ((0x12U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0x14U)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                                    : 
                                                   ((0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0x14U)))
                                                     ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                                     : 
                                                    ((0x10U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_45))))))))))),32);
            tracep->chgIData(oldp+510,(((0x18U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24
                                         : ((0x17U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23
                                             : ((0x16U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22
                                                 : 
                                                ((0x15U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21
                                                  : 
                                                 ((0x14U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0x14U)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20
                                                   : 
                                                  ((0x13U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0x14U)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19
                                                    : 
                                                   ((0x12U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0x14U)))
                                                     ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                                     : 
                                                    ((0x11U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                          >> 0x14U)))
                                                      ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                                      : 
                                                     ((0x10U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_45)))))))))))),32);
            tracep->chgIData(oldp+511,(((0x19U == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25
                                         : ((0x18U 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24
                                             : ((0x17U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23
                                                 : 
                                                ((0x16U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22
                                                  : 
                                                 ((0x15U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0x14U)))
                                                   ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21
                                                   : 
                                                  ((0x14U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0x14U)))
                                                    ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                         >> 0x14U)))
                                                     ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19
                                                     : 
                                                    ((0x12U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                          >> 0x14U)))
                                                      ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18
                                                      : 
                                                     ((0x11U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                           >> 0x14U)))
                                                       ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17
                                                       : 
                                                      ((0x10U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_45))))))))))))),32);
            tracep->chgIData(oldp+512,(vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_58),32);
            tracep->chgIData(oldp+513,(((0x1bU == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27
                                         : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_58)),32);
            tracep->chgIData(oldp+514,(((0x1cU == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28
                                         : ((0x1bU 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27
                                             : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_58))),32);
            tracep->chgIData(oldp+515,(((0x1dU == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29
                                         : ((0x1cU 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28
                                             : ((0x1bU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27
                                                 : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_58)))),32);
            tracep->chgIData(oldp+516,(((0x1eU == (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                         ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30
                                         : ((0x1dU 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U)))
                                             ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29
                                             : ((0x1cU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28
                                                 : 
                                                ((0x1bU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U)))
                                                  ? vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27
                                                  : vlSelf->top__DOT__rv32e__DOT__regs__DOT___GEN_58))))),32);
            __Vtemp1237[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
            __Vtemp1237[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
            __Vtemp1237[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
            __Vtemp1237[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
            __Vtemp1237[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
            __Vtemp1237[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
            __Vtemp1237[6U] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6))));
            __Vtemp1237[7U] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6))) 
                                       >> 0x20U));
            tracep->chgWData(oldp+517,(__Vtemp1237),256);
            __Vtemp1251[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
            __Vtemp1251[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
            __Vtemp1251[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
            __Vtemp1251[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
            __Vtemp1251[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
            __Vtemp1251[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
            __Vtemp1251[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
            __Vtemp1251[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
            __Vtemp1251[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
            __Vtemp1251[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
            __Vtemp1251[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
            __Vtemp1251[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
            __Vtemp1251[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
            __Vtemp1251[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
            __Vtemp1251[0xeU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14))));
            __Vtemp1251[0xfU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14))) 
                                         >> 0x20U));
            tracep->chgWData(oldp+525,(__Vtemp1251),512);
            __Vtemp1257[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
            __Vtemp1257[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
            __Vtemp1257[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
            __Vtemp1257[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
            __Vtemp1257[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
            __Vtemp1257[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
            __Vtemp1257[6U] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22))));
            __Vtemp1257[7U] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22))) 
                                       >> 0x20U));
            tracep->chgWData(oldp+541,(__Vtemp1257),256);
            __Vtemp1271[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
            __Vtemp1271[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
            __Vtemp1271[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
            __Vtemp1271[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
            __Vtemp1271[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
            __Vtemp1271[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
            __Vtemp1271[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
            __Vtemp1271[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
            __Vtemp1271[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
            __Vtemp1271[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
            __Vtemp1271[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
            __Vtemp1271[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
            __Vtemp1271[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
            __Vtemp1271[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
            __Vtemp1271[0xeU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
            __Vtemp1271[0xfU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                         >> 0x20U));
            tracep->chgWData(oldp+549,(__Vtemp1271),512);
            __Vtemp1301[0U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
            __Vtemp1301[1U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
            __Vtemp1301[2U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
            __Vtemp1301[3U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
            __Vtemp1301[4U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
            __Vtemp1301[5U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
            __Vtemp1301[6U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
            __Vtemp1301[7U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
            __Vtemp1301[8U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
            __Vtemp1301[9U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
            __Vtemp1301[0xaU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
            __Vtemp1301[0xbU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
            __Vtemp1301[0xcU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
            __Vtemp1301[0xdU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
            __Vtemp1301[0xeU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
            __Vtemp1301[0xfU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
            __Vtemp1301[0x10U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
            __Vtemp1301[0x11U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
            __Vtemp1301[0x12U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
            __Vtemp1301[0x13U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
            __Vtemp1301[0x14U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
            __Vtemp1301[0x15U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
            __Vtemp1301[0x16U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
            __Vtemp1301[0x17U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
            __Vtemp1301[0x18U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
            __Vtemp1301[0x19U] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
            __Vtemp1301[0x1aU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
            __Vtemp1301[0x1bU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
            __Vtemp1301[0x1cU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
            __Vtemp1301[0x1dU] = vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
            __Vtemp1301[0x1eU] = (IData)((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))));
            __Vtemp1301[0x1fU] = (IData)(((((QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F31)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top__DOT__rv32e__DOT__regs__DOT__regs___05F30))) 
                                          >> 0x20U));
            VL_EXTEND_WW(2048,1024, __Vtemp1302, __Vtemp1301);
            tracep->chgWData(oldp+565,(__Vtemp1302),2048);
            tracep->chgIData(oldp+629,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__misa),32);
            tracep->chgIData(oldp+630,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mstatus),32);
            tracep->chgIData(oldp+631,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mepc),32);
            tracep->chgIData(oldp+632,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtval),32);
            tracep->chgIData(oldp+633,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mscratch),32);
            tracep->chgIData(oldp+634,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause),32);
            tracep->chgIData(oldp+635,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec),32);
            tracep->chgIData(oldp+636,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie),32);
            tracep->chgIData(oldp+637,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip),32);
            tracep->chgIData(oldp+638,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg),32);
            tracep->chgIData(oldp+639,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg),32);
            tracep->chgIData(oldp+640,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren),32);
            tracep->chgIData(oldp+641,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren),32);
            tracep->chgIData(oldp+642,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc),32);
            tracep->chgIData(oldp+643,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval),32);
            tracep->chgIData(oldp+644,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch),32);
            tracep->chgIData(oldp+645,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec),32);
            tracep->chgIData(oldp+646,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp),32);
            tracep->chgIData(oldp+647,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause),32);
            tracep->chgIData(oldp+648,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0),32);
            tracep->chgIData(oldp+649,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1),32);
            tracep->chgIData(oldp+650,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2),32);
            tracep->chgIData(oldp+651,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3),32);
            tracep->chgIData(oldp+652,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch),32);
            tracep->chgIData(oldp+653,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid),32);
            tracep->chgIData(oldp+654,((0xde122U & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mstatus)),32);
            tracep->chgIData(oldp+655,((vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie 
                                        & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)),32);
            tracep->chgIData(oldp+656,((0x222U & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip)),32);
            tracep->chgIData(oldp+657,(((0xf14U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : 0xabcdabcdU)),32);
            tracep->chgIData(oldp+658,(((0x40U == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                         : ((0xf14U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                             : 0xabcdabcdU))),32);
            tracep->chgIData(oldp+659,(((0x3a0U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                         : ((0x40U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                             : ((0xf14U 
                                                 == 
                                                 (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 0x14U))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                 : 0xabcdabcdU)))),32);
            tracep->chgIData(oldp+660,(((0x3b3U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                         : ((0x3a0U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                             : ((0x40U 
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
                                                  : 0xabcdabcdU))))),32);
            tracep->chgIData(oldp+661,(((0x3b2U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
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
                                                 : 
                                                ((0x40U 
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
                                                   : 0xabcdabcdU)))))),32);
            tracep->chgIData(oldp+662,(((0x3b1U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                         : ((0x3b2U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                             : ((0x3b3U 
                                                 == 
                                                 (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 0x14U))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                 : 
                                                ((0x3a0U 
                                                  == 
                                                  (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                  : 
                                                 ((0x40U 
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
                                                    : 0xabcdabcdU))))))),32);
            tracep->chgIData(oldp+663,(((0x3b0U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                         : ((0x3b1U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                             : ((0x3b2U 
                                                 == 
                                                 (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 0x14U))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                 : 
                                                ((0x3b3U 
                                                  == 
                                                  (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                  : 
                                                 ((0x3a0U 
                                                   == 
                                                   (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                   : 
                                                  ((0x40U 
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
                                                     : 0xabcdabcdU)))))))),32);
            tracep->chgIData(oldp+664,(((0x144U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? (0x222U 
                                            & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip)
                                         : ((0x3b0U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                             : ((0x3b1U 
                                                 == 
                                                 (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 0x14U))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                 : 
                                                ((0x3b2U 
                                                  == 
                                                  (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                  : 
                                                 ((0x3b3U 
                                                   == 
                                                   (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                   : 
                                                  ((0x3a0U 
                                                    == 
                                                    (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                    : 
                                                   ((0x40U 
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
                                                      : 0xabcdabcdU))))))))),32);
            tracep->chgIData(oldp+665,(((0x104U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? (vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie 
                                            & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)
                                         : ((0x144U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? (0x222U 
                                                & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip)
                                             : ((0x3b0U 
                                                 == 
                                                 (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 0x14U))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                 : 
                                                ((0x3b1U 
                                                  == 
                                                  (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                  : 
                                                 ((0x3b2U 
                                                   == 
                                                   (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                   : 
                                                  ((0x3b3U 
                                                    == 
                                                    (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                    : 
                                                   ((0x3a0U 
                                                     == 
                                                     (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                     : 
                                                    ((0x40U 
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
                                                       : 0xabcdabcdU)))))))))),32);
            tracep->chgIData(oldp+666,(((0x100U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? (0xde122U 
                                            & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mstatus)
                                         : ((0x104U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? (vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie 
                                                & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)
                                             : ((0x144U 
                                                 == 
                                                 (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 0x14U))
                                                 ? 
                                                (0x222U 
                                                 & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip)
                                                 : 
                                                ((0x3b0U 
                                                  == 
                                                  (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                  : 
                                                 ((0x3b1U 
                                                   == 
                                                   (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                   : 
                                                  ((0x3b2U 
                                                    == 
                                                    (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                    : 
                                                   ((0x3b3U 
                                                     == 
                                                     (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                     : 
                                                    ((0x3a0U 
                                                      == 
                                                      (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0x14U))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                      : 
                                                     ((0x40U 
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
                                                        : 0xabcdabcdU))))))))))),32);
            tracep->chgIData(oldp+667,(((0x142U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                         : ((0x100U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? (0xde122U 
                                                & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mstatus)
                                             : ((0x104U 
                                                 == 
                                                 (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 0x14U))
                                                 ? 
                                                (vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie 
                                                 & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)
                                                 : 
                                                ((0x144U 
                                                  == 
                                                  (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U))
                                                  ? 
                                                 (0x222U 
                                                  & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip)
                                                  : 
                                                 ((0x3b0U 
                                                   == 
                                                   (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                                   : 
                                                  ((0x3b1U 
                                                    == 
                                                    (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                    : 
                                                   ((0x3b2U 
                                                     == 
                                                     (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                     : 
                                                    ((0x3b3U 
                                                      == 
                                                      (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0x14U))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                      : 
                                                     ((0x3a0U 
                                                       == 
                                                       (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0x14U))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                       : 
                                                      ((0x40U 
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
                                                         : 0xabcdabcdU)))))))))))),32);
            tracep->chgIData(oldp+668,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_11),32);
            tracep->chgIData(oldp+669,(((0x105U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_11)),32);
            tracep->chgIData(oldp+670,(((0x140U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                         : ((0x105U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_11))),32);
            tracep->chgIData(oldp+671,(((0x143U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                         : ((0x140U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                             : ((0x105U 
                                                 == 
                                                 (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 0x14U))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_11)))),32);
            tracep->chgIData(oldp+672,(((0x141U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                         : ((0x143U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                             : ((0x140U 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_11))))),32);
            tracep->chgIData(oldp+673,(((0x106U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                         : ((0x141U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                             : ((0x143U 
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
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_11)))))),32);
            tracep->chgIData(oldp+674,(((0x306U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
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
                                                 : 
                                                ((0x143U 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_11))))))),32);
            tracep->chgIData(oldp+675,(((0x303U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                         : ((0x306U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                             : ((0x106U 
                                                 == 
                                                 (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 0x14U))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                 : 
                                                ((0x141U 
                                                  == 
                                                  (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                  : 
                                                 ((0x143U 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_11)))))))),32);
            tracep->chgIData(oldp+676,(((0x302U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                         : ((0x303U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                             : ((0x306U 
                                                 == 
                                                 (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 0x14U))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                 : 
                                                ((0x106U 
                                                  == 
                                                  (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                  : 
                                                 ((0x141U 
                                                   == 
                                                   (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                   : 
                                                  ((0x143U 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_11))))))))),32);
            tracep->chgIData(oldp+677,(((0x342U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                         : ((0x302U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                             : ((0x303U 
                                                 == 
                                                 (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 0x14U))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                 : 
                                                ((0x306U 
                                                  == 
                                                  (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                  : 
                                                 ((0x106U 
                                                   == 
                                                   (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                   : 
                                                  ((0x141U 
                                                    == 
                                                    (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                    : 
                                                   ((0x143U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_11)))))))))),32);
            tracep->chgIData(oldp+678,(((0x344U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                         : ((0x342U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                             : ((0x302U 
                                                 == 
                                                 (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 0x14U))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                 : 
                                                ((0x303U 
                                                  == 
                                                  (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                  : 
                                                 ((0x306U 
                                                   == 
                                                   (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                   : 
                                                  ((0x106U 
                                                    == 
                                                    (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                    : 
                                                   ((0x141U 
                                                     == 
                                                     (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                     : 
                                                    ((0x143U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_11))))))))))),32);
            tracep->chgIData(oldp+679,(((0x304U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                         : ((0x344U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                             : ((0x342U 
                                                 == 
                                                 (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 0x14U))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                                 : 
                                                ((0x302U 
                                                  == 
                                                  (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                  : 
                                                 ((0x303U 
                                                   == 
                                                   (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                   : 
                                                  ((0x306U 
                                                    == 
                                                    (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                    : 
                                                   ((0x106U 
                                                     == 
                                                     (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                     : 
                                                    ((0x141U 
                                                      == 
                                                      (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0x14U))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                      : 
                                                     ((0x143U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_11)))))))))))),32);
            tracep->chgIData(oldp+680,(((0x305U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtvec
                                         : ((0x304U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                             : ((0x344U 
                                                 == 
                                                 (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 0x14U))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                   >> 0x14U))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcause
                                                  : 
                                                 ((0x302U 
                                                   == 
                                                   (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                    >> 0x14U))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__medeleg
                                                   : 
                                                  ((0x303U 
                                                    == 
                                                    (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                     >> 0x14U))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                      >> 0x14U))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren
                                                     : 
                                                    ((0x106U 
                                                      == 
                                                      (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                       >> 0x14U))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                                      : 
                                                     ((0x141U 
                                                       == 
                                                       (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                        >> 0x14U))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                                       : 
                                                      ((0x143U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_11))))))))))))),32);
            tracep->chgIData(oldp+681,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_24),32);
            tracep->chgIData(oldp+682,(((0x343U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtval
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_24)),32);
            tracep->chgIData(oldp+683,(((0x341U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mepc
                                         : ((0x343U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtval
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_24))),32);
            tracep->chgIData(oldp+684,(((0x300U == 
                                         (vlSelf->top__DOT__mem_io_instIO_rdata 
                                          >> 0x14U))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mstatus
                                         : ((0x341U 
                                             == (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                 >> 0x14U))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mepc
                                             : ((0x343U 
                                                 == 
                                                 (vlSelf->top__DOT__mem_io_instIO_rdata 
                                                  >> 0x14U))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mtval
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_24)))),32);
            tracep->chgIData(oldp+685,((0x7e7faaU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)),32);
            tracep->chgIData(oldp+686,((((3U == (3U 
                                                 & (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data 
                                                    >> 0xdU))) 
                                         | (3U == (3U 
                                                   & (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data 
                                                      >> 0xfU))))
                                         ? 0x80000000U
                                         : 0U)),32);
            tracep->chgIData(oldp+687,(((0x7e7faaU 
                                         & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data) 
                                        | (((3U == 
                                             (3U & 
                                              (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data 
                                               >> 0xdU))) 
                                            | (3U == 
                                               (3U 
                                                & (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data 
                                                   >> 0xfU))))
                                            ? 0x80000000U
                                            : 0U))),32);
            tracep->chgIData(oldp+688,((0x7f818055U 
                                        & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mstatus)),32);
            tracep->chgIData(oldp+689,((0x807e7faaU 
                                        & ((0x7e7faaU 
                                            & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data) 
                                           | (((3U 
                                                == 
                                                (3U 
                                                 & (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data 
                                                    >> 0xdU))) 
                                               | (3U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data 
                                                      >> 0xfU))))
                                               ? 0x80000000U
                                               : 0U)))),32);
            tracep->chgIData(oldp+690,(((0x7f818055U 
                                         & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mstatus) 
                                        | (0x807e7faaU 
                                           & ((0x7e7faaU 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data) 
                                              | (((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data 
                                                       >> 0xdU))) 
                                                  | (3U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data 
                                                         >> 0xfU))))
                                                  ? 0x80000000U
                                                  : 0U))))),32);
            tracep->chgIData(oldp+691,((0xffffffddU 
                                        & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip)),32);
            tracep->chgIData(oldp+692,((0x22U & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)),32);
            tracep->chgIData(oldp+693,(((0xffffffddU 
                                         & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip) 
                                        | (0x22U & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data))),32);
            tracep->chgIData(oldp+694,((0xb309U & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)),32);
            tracep->chgIData(oldp+695,((0x222U & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data)),32);
            tracep->chgIData(oldp+696,((~ vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)),32);
            tracep->chgIData(oldp+697,((vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie 
                                        & (~ vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg))),32);
            tracep->chgIData(oldp+698,((vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data 
                                        & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)),32);
            tracep->chgIData(oldp+699,(((vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie 
                                         & (~ vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)) 
                                        | (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data 
                                           & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg))),32);
            tracep->chgIData(oldp+700,((0xfffffdddU 
                                        & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip)),32);
            tracep->chgIData(oldp+701,(((0xfffffdddU 
                                         & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip) 
                                        | (0x222U & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data))),32);
            tracep->chgIData(oldp+702,(((0xf14U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid)),32);
            tracep->chgIData(oldp+703,(((0x40U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch)),32);
            tracep->chgIData(oldp+704,(((0x40U == (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : ((0xf14U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid))),32);
            tracep->chgIData(oldp+705,(((0x3a0U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                         : ((0x40U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch))),32);
            tracep->chgIData(oldp+706,(((0x3a0U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : ((0x40U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                             : ((0xf14U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid)))),32);
            tracep->chgIData(oldp+707,(((0x3b3U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3)),32);
            tracep->chgIData(oldp+708,(((0x3b3U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                         : ((0x3a0U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                             : ((0x40U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch)))),32);
            tracep->chgIData(oldp+709,(((0x3b3U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : ((0x3a0U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                             : ((0x40U 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid))))),32);
            tracep->chgIData(oldp+710,(((0x3b2U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2)),32);
            tracep->chgIData(oldp+711,(((0x3b2U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                         : ((0x3b3U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3))),32);
            tracep->chgIData(oldp+712,(((0x3b2U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                         : ((0x3b3U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                             : ((0x3a0U 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch))))),32);
            tracep->chgIData(oldp+713,(((0x3b2U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : ((0x3b3U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                             : ((0x3a0U 
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
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid)))))),32);
            tracep->chgIData(oldp+714,(((0x3b1U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1)),32);
            tracep->chgIData(oldp+715,(((0x3b1U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                         : ((0x3b2U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2))),32);
            tracep->chgIData(oldp+716,(((0x3b1U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                         : ((0x3b2U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                             : ((0x3b3U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3)))),32);
            tracep->chgIData(oldp+717,(((0x3b1U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                         : ((0x3b2U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                             : ((0x3b3U 
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
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch)))))),32);
            tracep->chgIData(oldp+718,(((0x3b1U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                 : 
                                                ((0x3a0U 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid))))))),32);
            tracep->chgIData(oldp+719,(((0x3b0U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0)),32);
            tracep->chgIData(oldp+720,(((0x3b0U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                         : ((0x3b1U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1))),32);
            tracep->chgIData(oldp+721,(((0x3b0U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                         : ((0x3b1U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                             : ((0x3b2U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2)))),32);
            tracep->chgIData(oldp+722,(((0x3b0U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                         : ((0x3b1U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                             : ((0x3b2U 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3))))),32);
            tracep->chgIData(oldp+723,(((0x3b0U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                 : 
                                                ((0x3b3U 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch))))))),32);
            tracep->chgIData(oldp+724,(((0x3b0U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : ((0x3b1U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                             : ((0x3b2U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                 : 
                                                ((0x3b3U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                  : 
                                                 ((0x3a0U 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid)))))))),32);
            tracep->chgIData(oldp+725,(((0x144U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? ((0xfffffdddU 
                                             & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip) 
                                            | (0x222U 
                                               & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data))
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip)),32);
            tracep->chgIData(oldp+726,(((0x144U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                         : ((0x3b0U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0))),32);
            tracep->chgIData(oldp+727,(((0x144U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                         : ((0x3b0U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                             : ((0x3b1U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1)))),32);
            tracep->chgIData(oldp+728,(((0x144U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                         : ((0x3b0U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                             : ((0x3b1U 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2))))),32);
            tracep->chgIData(oldp+729,(((0x144U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                         : ((0x3b0U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                             : ((0x3b1U 
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
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3)))))),32);
            tracep->chgIData(oldp+730,(((0x144U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                         : ((0x3b0U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                             : ((0x3b1U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                 : 
                                                ((0x3b2U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                  : 
                                                 ((0x3b3U 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch)))))))),32);
            tracep->chgIData(oldp+731,(((0x144U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : ((0x3b0U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                             : ((0x3b1U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                 : 
                                                ((0x3b2U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                  : 
                                                 ((0x3b3U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                   : 
                                                  ((0x3a0U 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid))))))))),32);
            tracep->chgIData(oldp+732,(((0x104U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? ((vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie 
                                             & (~ vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)) 
                                            | (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data 
                                               & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg))
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie)),32);
            tracep->chgIData(oldp+733,(((0x104U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                         : ((0x144U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? ((0xfffffdddU 
                                                 & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip) 
                                                | (0x222U 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data))
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip))),32);
            tracep->chgIData(oldp+734,(((0x104U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                         : ((0x144U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                             : ((0x3b0U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0)))),32);
            tracep->chgIData(oldp+735,(((0x104U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                         : ((0x144U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                             : ((0x3b0U 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1))))),32);
            tracep->chgIData(oldp+736,(((0x104U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                         : ((0x144U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                             : ((0x3b0U 
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
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2)))))),32);
            tracep->chgIData(oldp+737,(((0x104U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                 : 
                                                ((0x3b1U 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3))))))),32);
            tracep->chgIData(oldp+738,(((0x104U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                         : ((0x144U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                             : ((0x3b0U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                 : 
                                                ((0x3b1U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                  : 
                                                 ((0x3b2U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                   : 
                                                  ((0x3b3U 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch))))))))),32);
            tracep->chgIData(oldp+739,(((0x104U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : ((0x144U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                             : ((0x3b0U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                 : 
                                                ((0x3b1U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                  : 
                                                 ((0x3b2U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                   : 
                                                  ((0x3b3U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                    : 
                                                   ((0x3a0U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid)))))))))),32);
            tracep->chgIData(oldp+740,(((0x100U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                         : ((0x104U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? ((vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie 
                                                 & (~ vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)) 
                                                | (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data 
                                                   & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg))
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie))),32);
            tracep->chgIData(oldp+741,(((0x100U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                         : ((0x104U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                             : ((0x144U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? 
                                                ((0xfffffdddU 
                                                  & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip) 
                                                 | (0x222U 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data))
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip)))),32);
            tracep->chgIData(oldp+742,(((0x100U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                         : ((0x104U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                             : ((0x144U 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0))))),32);
            tracep->chgIData(oldp+743,(((0x100U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                         : ((0x104U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                             : ((0x144U 
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
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1)))))),32);
            tracep->chgIData(oldp+744,(((0x100U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                 : 
                                                ((0x3b0U 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2))))))),32);
            tracep->chgIData(oldp+745,(((0x100U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                         : ((0x104U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                             : ((0x144U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                 : 
                                                ((0x3b0U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                  : 
                                                 ((0x3b1U 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3)))))))),32);
            tracep->chgIData(oldp+746,(((0x100U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                         : ((0x104U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                             : ((0x144U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                 : 
                                                ((0x3b0U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                  : 
                                                 ((0x3b1U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                   : 
                                                  ((0x3b2U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                    : 
                                                   ((0x3b3U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch)))))))))),32);
            tracep->chgIData(oldp+747,(((0x100U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : ((0x104U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                             : ((0x144U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                 : 
                                                ((0x3b0U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                  : 
                                                 ((0x3b1U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                   : 
                                                  ((0x3b2U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                    : 
                                                   ((0x3b3U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                     : 
                                                    ((0x3a0U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid))))))))))),32);
            tracep->chgIData(oldp+748,(((0x142U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause)),32);
            tracep->chgIData(oldp+749,(((0x142U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                         : ((0x100U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                             : ((0x104U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? 
                                                ((vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie 
                                                  & (~ vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg)) 
                                                 | (vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data 
                                                    & vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mideleg))
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie)))),32);
            tracep->chgIData(oldp+750,(((0x142U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                         : ((0x100U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                             : ((0x104U 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip))))),32);
            tracep->chgIData(oldp+751,(((0x142U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                         : ((0x100U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                             : ((0x104U 
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
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0)))))),32);
            tracep->chgIData(oldp+752,(((0x142U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                 : 
                                                ((0x144U 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1))))))),32);
            tracep->chgIData(oldp+753,(((0x142U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                         : ((0x100U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                             : ((0x104U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                 : 
                                                ((0x144U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                  : 
                                                 ((0x3b0U 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2)))))))),32);
            tracep->chgIData(oldp+754,(((0x142U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                         : ((0x100U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                             : ((0x104U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                 : 
                                                ((0x144U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                  : 
                                                 ((0x3b0U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                   : 
                                                  ((0x3b1U 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3))))))))),32);
            tracep->chgIData(oldp+755,(((0x142U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                         : ((0x100U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                             : ((0x104U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                 : 
                                                ((0x144U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                  : 
                                                 ((0x3b0U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                   : 
                                                  ((0x3b1U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                    : 
                                                   ((0x3b2U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                     : 
                                                    ((0x3b3U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch))))))))))),32);
            tracep->chgIData(oldp+756,(((0x142U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : ((0x100U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                             : ((0x104U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                 : 
                                                ((0x144U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                  : 
                                                 ((0x3b0U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                   : 
                                                  ((0x3b1U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                    : 
                                                   ((0x3b2U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                     : 
                                                    ((0x3b3U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                      : 
                                                     ((0x3a0U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid)))))))))))),32);
            tracep->chgIData(oldp+757,(((0x180U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp)),32);
            tracep->chgIData(oldp+758,(((0x180U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                         : ((0x142U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause))),32);
            tracep->chgIData(oldp+759,(((0x180U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                         : ((0x142U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                             : ((0x100U 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie))))),32);
            tracep->chgIData(oldp+760,(((0x180U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip)))))),32);
            tracep->chgIData(oldp+761,(((0x180U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0))))))),32);
            tracep->chgIData(oldp+762,(((0x180U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                         : ((0x142U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                             : ((0x100U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                 : 
                                                ((0x104U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                  : 
                                                 ((0x144U 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1)))))))),32);
            tracep->chgIData(oldp+763,(((0x180U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                         : ((0x142U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                             : ((0x100U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                 : 
                                                ((0x104U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                  : 
                                                 ((0x144U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                   : 
                                                  ((0x3b0U 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2))))))))),32);
            tracep->chgIData(oldp+764,(((0x180U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                         : ((0x142U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                             : ((0x100U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                 : 
                                                ((0x104U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                  : 
                                                 ((0x144U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                   : 
                                                  ((0x3b0U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                    : 
                                                   ((0x3b1U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3)))))))))),32);
            tracep->chgIData(oldp+765,(((0x180U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                         : ((0x142U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                             : ((0x100U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                 : 
                                                ((0x104U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                  : 
                                                 ((0x144U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                   : 
                                                  ((0x3b0U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                    : 
                                                   ((0x3b1U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                     : 
                                                    ((0x3b2U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                      : 
                                                     ((0x3b3U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch)))))))))))),32);
            tracep->chgIData(oldp+766,(((0x180U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : ((0x142U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                             : ((0x100U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                 : 
                                                ((0x104U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                  : 
                                                 ((0x144U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                   : 
                                                  ((0x3b0U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                    : 
                                                   ((0x3b1U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                     : 
                                                    ((0x3b2U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                      : 
                                                     ((0x3b3U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                       : 
                                                      ((0x3a0U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid))))))))))))),32);
            tracep->chgIData(oldp+767,(((0x105U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec)),32);
            tracep->chgIData(oldp+768,(((0x105U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                         : ((0x180U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp))),32);
            tracep->chgIData(oldp+769,(((0x105U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                         : ((0x180U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                             : ((0x142U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause)))),32);
            tracep->chgIData(oldp+770,(((0x105U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie)))))),32);
            tracep->chgIData(oldp+771,(((0x105U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                         : ((0x180U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                             : ((0x142U 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip))))))),32);
            tracep->chgIData(oldp+772,(((0x105U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                         : ((0x180U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                             : ((0x142U 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0)))))))),32);
            tracep->chgIData(oldp+773,(((0x105U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                         : ((0x180U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                             : ((0x142U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                 : 
                                                ((0x100U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                  : 
                                                 ((0x104U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                   : 
                                                  ((0x144U 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1))))))))),32);
            tracep->chgIData(oldp+774,(((0x105U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                         : ((0x180U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                             : ((0x142U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                 : 
                                                ((0x100U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                  : 
                                                 ((0x104U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                   : 
                                                  ((0x144U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                    : 
                                                   ((0x3b0U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2)))))))))),32);
            tracep->chgIData(oldp+775,(((0x105U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                         : ((0x180U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                             : ((0x142U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                 : 
                                                ((0x100U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                  : 
                                                 ((0x104U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                   : 
                                                  ((0x144U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                    : 
                                                   ((0x3b0U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                     : 
                                                    ((0x3b1U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3))))))))))),32);
            tracep->chgIData(oldp+776,(((0x105U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                         : ((0x180U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                             : ((0x142U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                 : 
                                                ((0x100U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                  : 
                                                 ((0x104U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                   : 
                                                  ((0x144U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                    : 
                                                   ((0x3b0U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                     : 
                                                    ((0x3b1U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                      : 
                                                     ((0x3b2U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                                       : 
                                                      ((0x3b3U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch))))))))))))),32);
            tracep->chgIData(oldp+777,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115),32);
            tracep->chgIData(oldp+778,(((0x140U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch)),32);
            tracep->chgIData(oldp+779,(((0x140U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                         : ((0x105U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec))),32);
            tracep->chgIData(oldp+780,(((0x140U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                         : ((0x105U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                             : ((0x180U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp)))),32);
            tracep->chgIData(oldp+781,(((0x140U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                         : ((0x105U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                             : ((0x180U 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause))))),32);
            tracep->chgIData(oldp+782,(((0x140U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                         : ((0x105U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                             : ((0x180U 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie))))))),32);
            tracep->chgIData(oldp+783,(((0x140U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                         : ((0x105U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                             : ((0x180U 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip)))))))),32);
            tracep->chgIData(oldp+784,(((0x140U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                         : ((0x105U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                             : ((0x180U 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0))))))))),32);
            tracep->chgIData(oldp+785,(((0x140U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                         : ((0x105U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                             : ((0x180U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                 : 
                                                ((0x142U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                  : 
                                                 ((0x100U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                   : 
                                                  ((0x104U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                    : 
                                                   ((0x144U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1)))))))))),32);
            tracep->chgIData(oldp+786,(((0x140U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                         : ((0x105U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                             : ((0x180U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                 : 
                                                ((0x142U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                  : 
                                                 ((0x100U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                   : 
                                                  ((0x104U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                    : 
                                                   ((0x144U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                     : 
                                                    ((0x3b0U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2))))))))))),32);
            tracep->chgIData(oldp+787,(((0x140U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                         : ((0x105U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                             : ((0x180U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                 : 
                                                ((0x142U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                  : 
                                                 ((0x100U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                   : 
                                                  ((0x104U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                    : 
                                                   ((0x144U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                     : 
                                                    ((0x3b0U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                      : 
                                                     ((0x3b1U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3)))))))))))),32);
            tracep->chgIData(oldp+788,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127),32);
            tracep->chgIData(oldp+789,(((0x140U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115)),32);
            tracep->chgIData(oldp+790,(((0x143U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval)),32);
            tracep->chgIData(oldp+791,(((0x143U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                         : ((0x140U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch))),32);
            tracep->chgIData(oldp+792,(((0x143U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                         : ((0x140U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                             : ((0x105U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec)))),32);
            tracep->chgIData(oldp+793,(((0x143U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                         : ((0x140U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                             : ((0x105U 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp))))),32);
            tracep->chgIData(oldp+794,(((0x143U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                         : ((0x140U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause
                                             : ((0x105U 
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
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause)))))),32);
            tracep->chgIData(oldp+795,(((0x143U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                         : ((0x140U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                             : ((0x105U 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie)))))))),32);
            tracep->chgIData(oldp+796,(((0x143U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                         : ((0x140U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                             : ((0x105U 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip))))))))),32);
            tracep->chgIData(oldp+797,(((0x143U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                         : ((0x140U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                             : ((0x105U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0)))))))))),32);
            tracep->chgIData(oldp+798,(((0x143U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                         : ((0x140U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                             : ((0x105U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                 : 
                                                ((0x180U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                  : 
                                                 ((0x142U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                   : 
                                                  ((0x100U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                    : 
                                                   ((0x104U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                     : 
                                                    ((0x144U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1))))))))))),32);
            tracep->chgIData(oldp+799,(((0x143U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                         : ((0x140U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                             : ((0x105U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                 : 
                                                ((0x180U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                  : 
                                                 ((0x142U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                   : 
                                                  ((0x100U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                    : 
                                                   ((0x104U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                     : 
                                                    ((0x144U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                      : 
                                                     ((0x3b0U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2)))))))))))),32);
            tracep->chgIData(oldp+800,(((0x143U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                         : ((0x140U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                             : ((0x105U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                 : 
                                                ((0x180U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                  : 
                                                 ((0x142U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                   : 
                                                  ((0x100U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                    : 
                                                   ((0x104U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                     : 
                                                    ((0x144U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                      : 
                                                     ((0x3b0U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                                       : 
                                                      ((0x3b1U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3))))))))))))),32);
            tracep->chgIData(oldp+801,(((0x143U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127)),32);
            tracep->chgIData(oldp+802,(((0x143U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : ((0x140U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115))),32);
            tracep->chgIData(oldp+803,(((0x141U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc)),32);
            tracep->chgIData(oldp+804,(((0x141U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                         : ((0x143U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval))),32);
            tracep->chgIData(oldp+805,(((0x141U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                         : ((0x143U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                             : ((0x140U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch)))),32);
            tracep->chgIData(oldp+806,(((0x141U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                         : ((0x143U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                             : ((0x140U 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec))))),32);
            tracep->chgIData(oldp+807,(((0x141U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                         : ((0x143U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp
                                             : ((0x140U 
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
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp)))))),32);
            tracep->chgIData(oldp+808,(((0x141U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause))))))),32);
            tracep->chgIData(oldp+809,(((0x141U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                         : ((0x143U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie
                                             : ((0x140U 
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
                                                      : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie))))))))),32);
            tracep->chgIData(oldp+810,(((0x141U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                         : ((0x143U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip
                                             : ((0x140U 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip)))))))))),32);
            tracep->chgIData(oldp+811,(((0x141U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                         : ((0x143U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0
                                             : ((0x140U 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0))))))))))),32);
            tracep->chgIData(oldp+812,(((0x141U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                         : ((0x143U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                             : ((0x140U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                 : 
                                                ((0x105U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                  : 
                                                 ((0x180U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                   : 
                                                  ((0x142U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                     : 
                                                    ((0x104U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                      : 
                                                     ((0x144U 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1)))))))))))),32);
            tracep->chgIData(oldp+813,(((0x141U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                         : ((0x143U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                             : ((0x140U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                 : 
                                                ((0x105U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                  : 
                                                 ((0x180U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                   : 
                                                  ((0x142U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                     : 
                                                    ((0x104U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                      : 
                                                     ((0x144U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2
                                                       : 
                                                      ((0x3b0U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2))))))))))))),32);
            tracep->chgIData(oldp+814,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154),32);
            tracep->chgIData(oldp+815,(((0x141U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                         : ((0x143U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__uscratch
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127))),32);
            tracep->chgIData(oldp+816,(((0x141U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                         : ((0x143U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                             : ((0x140U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mhartid
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115)))),32);
            tracep->chgIData(oldp+817,(((0x106U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren)),32);
            tracep->chgIData(oldp+818,(((0x106U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc
                                         : ((0x141U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc))),32);
            tracep->chgIData(oldp+819,(((0x106U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                         : ((0x141U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval
                                             : ((0x143U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval)))),32);
            tracep->chgIData(oldp+820,(((0x106U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                         : ((0x141U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch
                                             : ((0x143U 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch))))),32);
            tracep->chgIData(oldp+821,(((0x106U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                         : ((0x141U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec
                                             : ((0x143U 
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
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec)))))),32);
            tracep->chgIData(oldp+822,(((0x106U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp))))))),32);
            tracep->chgIData(oldp+823,(((0x106U == 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scause)))))))),32);
            tracep->chgIData(oldp+824,(((0x106U == 
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
                                                       : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mie)))))))))),32);
            tracep->chgIData(oldp+825,(((0x106U == 
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
                                                        : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mip))))))))))),32);
            tracep->chgIData(oldp+826,(((0x106U == 
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
                                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0)))))))))))),32);
            tracep->chgIData(oldp+827,(((0x106U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                         : ((0x141U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                             : ((0x143U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                 ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                 : 
                                                ((0x140U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                  ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                  : 
                                                 ((0x105U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                   ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                   : 
                                                  ((0x180U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                    ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                    : 
                                                   ((0x142U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                     ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                      ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                      : 
                                                     ((0x104U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                                       ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1
                                                       : 
                                                      ((0x144U 
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
                                                          : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1))))))))))))),32);
            tracep->chgIData(oldp+828,(vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_169),32);
            tracep->chgIData(oldp+829,(((0x106U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_154)),32);
            tracep->chgIData(oldp+830,(((0x106U == 
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
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_127)))),32);
            tracep->chgIData(oldp+831,(((0x106U == 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT___GEN_115))))),32);
            tracep->chgIData(oldp+832,(((0x306U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                         : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__mcounteren)),32);
            tracep->chgIData(oldp+833,(((0x306U == 
                                         (0xfffU & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                         ? vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren
                                         : ((0x106U 
                                             == (0xfffU 
                                                 & vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_id))
                                             ? vlSelf->top__DOT__rv32e__DOT__writeback_io_wreg_data
                                             : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__scounteren))),32);
            tracep->chgIData(oldp+834,(((0x306U == 
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
                                                 : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sepc)))),32);
            tracep->chgIData(oldp+835,(((0x306U == 
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
                                                  : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stval))))),32);
            tracep->chgIData(oldp+836,(((0x306U == 
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
                                                   : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__sscratch)))))),32);
            tracep->chgIData(oldp+837,(((0x306U == 
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
                                                    : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__stvec))))))),32);
            tracep->chgIData(oldp+838,(((0x306U == 
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
                                                     : vlSelf->top__DOT__rv32e__DOT__csrs__DOT__satp)))))))),32);
        }
    }
}
