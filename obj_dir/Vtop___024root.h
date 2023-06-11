// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedFst;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*4:0*/ top__DOT__rv32e__DOT__decode_io_id2ex_ctrl_aluOP;
        CData/*0:0*/ top__DOT__rv32e__DOT__decode_io_id2ex_valid;
        CData/*0:0*/ top__DOT__rv32e__DOT__decode_io_id2mem_valid;
        CData/*4:0*/ top__DOT__rv32e__DOT__decode_io_id2mem_memMode;
        CData/*0:0*/ top__DOT__rv32e__DOT__memory_io_mem2wb_valid;
        CData/*0:0*/ top__DOT__rv32e__DOT__writeback_io_instFinish;
        CData/*0:0*/ top__DOT__rv32e__DOT__writeback_io_wreg_en;
        CData/*0:0*/ top__DOT__rv32e__DOT__string_;
        CData/*0:0*/ top__DOT__rv32e__DOT__fetch__DOT__prevFinish;
        CData/*0:0*/ top__DOT__rv32e__DOT__fetch__DOT___GEN_1;
        CData/*2:0*/ top__DOT__rv32e__DOT__decode__DOT___instType_T_125;
        CData/*2:0*/ top__DOT__rv32e__DOT__decode__DOT___instType_T_140;
        CData/*2:0*/ top__DOT__rv32e__DOT__decode__DOT___instType_T_155;
        CData/*2:0*/ top__DOT__rv32e__DOT__decode__DOT__instType_0;
        CData/*4:0*/ top__DOT__rv32e__DOT__decode__DOT___instType_T_183;
        CData/*4:0*/ top__DOT__rv32e__DOT__decode__DOT___instType_T_198;
        CData/*4:0*/ top__DOT__rv32e__DOT__decode__DOT___instType_T_213;
        CData/*4:0*/ top__DOT__rv32e__DOT__decode__DOT___instType_T_269;
        CData/*4:0*/ top__DOT__rv32e__DOT__decode__DOT___instType_T_271;
        CData/*4:0*/ top__DOT__rv32e__DOT__decode__DOT__instType_2;
        CData/*0:0*/ top__DOT__rv32e__DOT__decode__DOT___instType_T_307;
        CData/*0:0*/ top__DOT__rv32e__DOT__decode__DOT__instType_3;
        CData/*1:0*/ top__DOT__rv32e__DOT__decode__DOT___instType_T_379;
        CData/*0:0*/ top__DOT__rv32e__DOT__memory__DOT__state;
        CData/*4:0*/ top__DOT__rv32e__DOT__memory__DOT__id_r;
        CData/*4:0*/ top__DOT__rv32e__DOT__memory__DOT__mode_r;
        CData/*0:0*/ top__DOT__rv32e__DOT__memory__DOT___GEN_0;
        CData/*4:0*/ top__DOT__rv32e__DOT__memory__DOT__curMode;
        CData/*6:0*/ top__DOT__rv32e__DOT__memory__DOT___io_memIO_wmask_T_8;
        CData/*0:0*/ top__DOT__rv32e__DOT__writeback__DOT__prevFinish;
        CData/*7:0*/ top__DOT__mem__DOT__ram_MPORT_data;
        CData/*7:0*/ top__DOT__mem__DOT__ram_MPORT_2_data;
        CData/*7:0*/ top__DOT__mem__DOT__ram_MPORT_4_data;
        CData/*7:0*/ top__DOT__mem__DOT__ram_MPORT_6_data;
        CData/*0:0*/ top__DOT__mem__DOT___T_2;
        SData/*11:0*/ top__DOT__rv32e__DOT__decode__DOT___imm_T_5;
        SData/*12:0*/ top__DOT__rv32e__DOT__decode__DOT___imm_T_11;
        IData/*31:0*/ top__DOT__mem_io_instIO_rdata;
        IData/*31:0*/ top__DOT__rv32e__DOT__decode_io_id2ex_rs2_d;
        IData/*31:0*/ top__DOT__rv32e__DOT__decode_io_id2mem_addr;
        IData/*31:0*/ top__DOT__rv32e__DOT__execute_io_ex2wb_nextPC;
        IData/*31:0*/ top__DOT__rv32e__DOT__memory_io_mem2wb_pc;
        IData/*31:0*/ top__DOT__rv32e__DOT__writeback_io_wreg_id;
        IData/*31:0*/ top__DOT__rv32e__DOT__writeback_io_wreg_data;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs_io_rs1_data;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs_io_rs2_data;
        IData/*31:0*/ top__DOT__rv32e__DOT__fetch__DOT__pc;
        IData/*20:0*/ top__DOT__rv32e__DOT__decode__DOT___GEN_0;
        IData/*31:0*/ top__DOT__rv32e__DOT__decode__DOT___GEN_3;
        IData/*31:0*/ top__DOT__rv32e__DOT__decode__DOT__imm;
        IData/*31:0*/ top__DOT__rv32e__DOT__memory__DOT__addr_r;
        IData/*31:0*/ top__DOT__rv32e__DOT__memory__DOT__pc_r;
        IData/*31:0*/ top__DOT__rv32e__DOT__memory__DOT__inst_r;
        IData/*31:0*/ top__DOT__rv32e__DOT__memory__DOT___io_mem2wb_wreg_data_T_2;
        IData/*31:0*/ top__DOT__rv32e__DOT__writeback__DOT__prevPC;
        IData/*31:0*/ top__DOT__rv32e__DOT__writeback__DOT__prevInst;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F0;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F1;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F2;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F3;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F4;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F5;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F6;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F7;
    };
    struct {
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F8;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F9;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F10;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F11;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F12;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F13;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F14;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F15;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F16;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F17;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F18;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F19;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F20;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F21;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F22;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F23;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F24;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F25;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F26;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F27;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F28;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F29;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F30;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT__regs___05F31;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT___GEN_13;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT___GEN_26;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT___GEN_45;
        IData/*31:0*/ top__DOT__rv32e__DOT__regs__DOT___GEN_58;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__misa;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__mstatus;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__mepc;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__mtval;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__mscratch;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__mcause;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__mtvec;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__mie;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__mip;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__medeleg;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__mideleg;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__mcounteren;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__scounteren;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__sepc;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__stval;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__sscratch;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__stvec;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__satp;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__scause;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__pmpaddr0;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__pmpaddr1;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__pmpaddr2;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__pmpaddr3;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__uscratch;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT__mhartid;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_11;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_24;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___mstatus_T_5;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_115;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_127;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_154;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_169;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_185;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_201;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_202;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_219;
    };
    struct {
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_280;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_300;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_321;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_343;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_353;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_354;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_355;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_356;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_357;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_358;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_359;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_360;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_361;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_362;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_363;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_364;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_365;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_366;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_367;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_368;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_369;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_370;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_371;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_372;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_373;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_374;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_376;
        IData/*31:0*/ top__DOT__rv32e__DOT__csrs__DOT___GEN_377;
        IData/*31:0*/ top__DOT__mem__DOT__mtime;
        IData/*31:0*/ top__DOT__mem__DOT___mtime_T_1;
        QData/*58:0*/ top__DOT__rv32e__DOT__decode__DOT___io_id2ex_rs1_d_T_10;
        QData/*63:0*/ top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_23;
        QData/*62:0*/ top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_70;
        QData/*62:0*/ top__DOT__rv32e__DOT__execute__DOT__alu__DOT___alu_val_T_88;
        QData/*62:0*/ top__DOT__rv32e__DOT__memory__DOT___io_memIO_wdata_T_2;
        VlUnpacked<CData/*7:0*/, 268435456> top__DOT__mem__DOT__ram;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
