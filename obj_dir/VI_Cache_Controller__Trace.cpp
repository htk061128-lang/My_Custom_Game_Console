// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VI_Cache_Controller__Syms.h"


void VI_Cache_Controller::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VI_Cache_Controller__Syms* __restrict vlSymsp = static_cast<VI_Cache_Controller__Syms*>(userp);
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VI_Cache_Controller::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VI_Cache_Controller__Syms* __restrict vlSymsp = static_cast<VI_Cache_Controller__Syms*>(userp);
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->I_Cache_Controller__DOT__main_state),4);
            tracep->chgSData(oldp+1,(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag),15);
            tracep->chgCData(oldp+2,(vlTOPp->I_Cache_Controller__DOT__burst_counter),4);
            tracep->chgIData(oldp+3,(vlTOPp->I_Cache_Controller__DOT__word_buffer[0]),32);
            tracep->chgIData(oldp+4,(vlTOPp->I_Cache_Controller__DOT__word_buffer[1]),32);
            tracep->chgIData(oldp+5,(vlTOPp->I_Cache_Controller__DOT__word_buffer[2]),32);
            tracep->chgIData(oldp+6,(vlTOPp->I_Cache_Controller__DOT__word_buffer[3]),32);
            tracep->chgBit(oldp+7,(vlTOPp->I_Cache_Controller__DOT__random_bit));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+8,(vlTOPp->I_Cache_Controller__DOT__main_next),4);
            tracep->chgBit(oldp+9,(vlTOPp->I_Cache_Controller__DOT__cpu_tag_save));
            tracep->chgBit(oldp+10,(vlTOPp->I_Cache_Controller__DOT__burst_counter_reset));
            tracep->chgBit(oldp+11,(vlTOPp->I_Cache_Controller__DOT__burst_counter_plus));
            tracep->chgIData(oldp+12,(vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[0]),32);
            tracep->chgIData(oldp+13,(vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[1]),32);
            tracep->chgIData(oldp+14,(vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[2]),32);
            tracep->chgIData(oldp+15,(vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[3]),32);
            tracep->chgBit(oldp+16,(vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_0));
            tracep->chgBit(oldp+17,(vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_1));
            tracep->chgBit(oldp+18,(vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_2));
            tracep->chgBit(oldp+19,(vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_3));
        }
        tracep->chgBit(oldp+20,(vlTOPp->clk));
        tracep->chgBit(oldp+21,(vlTOPp->resetn));
        tracep->chgBit(oldp+22,(vlTOPp->CPU_valid));
        tracep->chgBit(oldp+23,(vlTOPp->CPU_instr));
        tracep->chgBit(oldp+24,(vlTOPp->CPU_ready));
        tracep->chgIData(oldp+25,(vlTOPp->CPU_addr),32);
        tracep->chgIData(oldp+26,(vlTOPp->CPU_wdata),32);
        tracep->chgCData(oldp+27,(vlTOPp->CPU_wstrb),4);
        tracep->chgIData(oldp+28,(vlTOPp->CPU_rdata),32);
        tracep->chgBit(oldp+29,(vlTOPp->EMEM_valid));
        tracep->chgBit(oldp+30,(vlTOPp->EMEM_ready));
        tracep->chgIData(oldp+31,(vlTOPp->EMEM_addr),32);
        tracep->chgIData(oldp+32,(vlTOPp->EMEM_wdata),32);
        tracep->chgCData(oldp+33,(vlTOPp->EMEM_wstrb),4);
        tracep->chgIData(oldp+34,(vlTOPp->EMEM_rdata),32);
        tracep->chgCData(oldp+35,(vlTOPp->EMEM_burst_len),8);
        tracep->chgBit(oldp+36,(vlTOPp->EMEM_burst_en));
        tracep->chgBit(oldp+37,(vlTOPp->BRAM0_wen));
        tracep->chgCData(oldp+38,(vlTOPp->BRAM0_wstrb),8);
        tracep->chgSData(oldp+39,(vlTOPp->BRAM0_waddr),9);
        tracep->chgWData(oldp+40,(vlTOPp->BRAM0_din),72);
        tracep->chgBit(oldp+43,(vlTOPp->BRAM0_ren));
        tracep->chgSData(oldp+44,(vlTOPp->BRAM0_raddr),9);
        tracep->chgWData(oldp+45,(vlTOPp->BRAM0_dout),72);
        tracep->chgBit(oldp+48,(vlTOPp->BRAM1_wen));
        tracep->chgCData(oldp+49,(vlTOPp->BRAM1_wstrb),8);
        tracep->chgSData(oldp+50,(vlTOPp->BRAM1_waddr),9);
        tracep->chgWData(oldp+51,(vlTOPp->BRAM1_din),72);
        tracep->chgBit(oldp+54,(vlTOPp->BRAM1_ren));
        tracep->chgSData(oldp+55,(vlTOPp->BRAM1_raddr),9);
        tracep->chgWData(oldp+56,(vlTOPp->BRAM1_dout),72);
        tracep->chgBit(oldp+59,(vlTOPp->BRAM2_wen));
        tracep->chgCData(oldp+60,(vlTOPp->BRAM2_wstrb),8);
        tracep->chgSData(oldp+61,(vlTOPp->BRAM2_waddr),9);
        tracep->chgWData(oldp+62,(vlTOPp->BRAM2_din),72);
        tracep->chgBit(oldp+65,(vlTOPp->BRAM2_ren));
        tracep->chgSData(oldp+66,(vlTOPp->BRAM2_raddr),9);
        tracep->chgWData(oldp+67,(vlTOPp->BRAM2_dout),72);
        tracep->chgBit(oldp+70,(vlTOPp->BRAM3_wen));
        tracep->chgCData(oldp+71,(vlTOPp->BRAM3_wstrb),8);
        tracep->chgSData(oldp+72,(vlTOPp->BRAM3_waddr),9);
        tracep->chgWData(oldp+73,(vlTOPp->BRAM3_din),72);
        tracep->chgBit(oldp+76,(vlTOPp->BRAM3_ren));
        tracep->chgSData(oldp+77,(vlTOPp->BRAM3_raddr),9);
        tracep->chgWData(oldp+78,(vlTOPp->BRAM3_dout),72);
        tracep->chgBit(oldp+81,(vlTOPp->cache_hit));
    }
}

void VI_Cache_Controller::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VI_Cache_Controller__Syms* __restrict vlSymsp = static_cast<VI_Cache_Controller__Syms*>(userp);
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
