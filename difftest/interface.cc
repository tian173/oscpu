#include "svdpi.h"
#include "Vtop__Dpi.h"
#include "difftest.h"

extern CPU_state state;

extern "C" void update_reg(int id,int val){
    state.gpr[id] = val;
}

extern "C" void update_pc(int valid, int pc, int inst){
    state.pc = (uint32_t)pc;
    state.inst = (uint32_t)inst;
    state.valid = valid;
}

extern "C" void update_csr(int id, long long val){
    state.csr[id] = val;
}
extern "C" void update_indi(svBit cpu_is_mmio, svBit cpu_valid, int rcsr_id){
    state.is_mmio = cpu_is_mmio;
    state.valid   = cpu_valid;
    state.rcsr_id = rcsr_id;
}
