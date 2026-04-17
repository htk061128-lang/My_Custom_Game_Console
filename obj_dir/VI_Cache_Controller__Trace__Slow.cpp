// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VI_Cache_Controller__Syms.h"


//======================

void VI_Cache_Controller::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VI_Cache_Controller::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VI_Cache_Controller__Syms* __restrict vlSymsp = static_cast<VI_Cache_Controller__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VI_Cache_Controller::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VI_Cache_Controller::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VI_Cache_Controller__Syms* __restrict vlSymsp = static_cast<VI_Cache_Controller__Syms*>(userp);
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VI_Cache_Controller::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VI_Cache_Controller__Syms* __restrict vlSymsp = static_cast<VI_Cache_Controller__Syms*>(userp);
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+21,"clk", false,-1);
        tracep->declBit(c+22,"resetn", false,-1);
        tracep->declBit(c+23,"CPU_valid", false,-1);
        tracep->declBit(c+24,"CPU_instr", false,-1);
        tracep->declBit(c+25,"CPU_ready", false,-1);
        tracep->declBus(c+26,"CPU_addr", false,-1, 31,0);
        tracep->declBus(c+27,"CPU_wdata", false,-1, 31,0);
        tracep->declBus(c+28,"CPU_wstrb", false,-1, 3,0);
        tracep->declBus(c+29,"CPU_rdata", false,-1, 31,0);
        tracep->declBit(c+30,"EMEM_valid", false,-1);
        tracep->declBit(c+31,"EMEM_ready", false,-1);
        tracep->declBus(c+32,"EMEM_addr", false,-1, 31,0);
        tracep->declBus(c+33,"EMEM_wdata", false,-1, 31,0);
        tracep->declBus(c+34,"EMEM_wstrb", false,-1, 3,0);
        tracep->declBus(c+35,"EMEM_rdata", false,-1, 31,0);
        tracep->declBus(c+36,"EMEM_burst_len", false,-1, 7,0);
        tracep->declBit(c+37,"EMEM_burst_en", false,-1);
        tracep->declBit(c+38,"BRAM0_wen", false,-1);
        tracep->declBus(c+39,"BRAM0_wstrb", false,-1, 7,0);
        tracep->declBus(c+40,"BRAM0_waddr", false,-1, 8,0);
        tracep->declArray(c+41,"BRAM0_din", false,-1, 71,0);
        tracep->declBit(c+44,"BRAM0_ren", false,-1);
        tracep->declBus(c+45,"BRAM0_raddr", false,-1, 8,0);
        tracep->declArray(c+46,"BRAM0_dout", false,-1, 71,0);
        tracep->declBit(c+49,"BRAM1_wen", false,-1);
        tracep->declBus(c+50,"BRAM1_wstrb", false,-1, 7,0);
        tracep->declBus(c+51,"BRAM1_waddr", false,-1, 8,0);
        tracep->declArray(c+52,"BRAM1_din", false,-1, 71,0);
        tracep->declBit(c+55,"BRAM1_ren", false,-1);
        tracep->declBus(c+56,"BRAM1_raddr", false,-1, 8,0);
        tracep->declArray(c+57,"BRAM1_dout", false,-1, 71,0);
        tracep->declBit(c+60,"BRAM2_wen", false,-1);
        tracep->declBus(c+61,"BRAM2_wstrb", false,-1, 7,0);
        tracep->declBus(c+62,"BRAM2_waddr", false,-1, 8,0);
        tracep->declArray(c+63,"BRAM2_din", false,-1, 71,0);
        tracep->declBit(c+66,"BRAM2_ren", false,-1);
        tracep->declBus(c+67,"BRAM2_raddr", false,-1, 8,0);
        tracep->declArray(c+68,"BRAM2_dout", false,-1, 71,0);
        tracep->declBit(c+71,"BRAM3_wen", false,-1);
        tracep->declBus(c+72,"BRAM3_wstrb", false,-1, 7,0);
        tracep->declBus(c+73,"BRAM3_waddr", false,-1, 8,0);
        tracep->declArray(c+74,"BRAM3_din", false,-1, 71,0);
        tracep->declBit(c+77,"BRAM3_ren", false,-1);
        tracep->declBus(c+78,"BRAM3_raddr", false,-1, 8,0);
        tracep->declArray(c+79,"BRAM3_dout", false,-1, 71,0);
        tracep->declBit(c+21,"I_Cache_Controller clk", false,-1);
        tracep->declBit(c+22,"I_Cache_Controller resetn", false,-1);
        tracep->declBit(c+23,"I_Cache_Controller CPU_valid", false,-1);
        tracep->declBit(c+24,"I_Cache_Controller CPU_instr", false,-1);
        tracep->declBit(c+25,"I_Cache_Controller CPU_ready", false,-1);
        tracep->declBus(c+26,"I_Cache_Controller CPU_addr", false,-1, 31,0);
        tracep->declBus(c+27,"I_Cache_Controller CPU_wdata", false,-1, 31,0);
        tracep->declBus(c+28,"I_Cache_Controller CPU_wstrb", false,-1, 3,0);
        tracep->declBus(c+29,"I_Cache_Controller CPU_rdata", false,-1, 31,0);
        tracep->declBit(c+30,"I_Cache_Controller EMEM_valid", false,-1);
        tracep->declBit(c+31,"I_Cache_Controller EMEM_ready", false,-1);
        tracep->declBus(c+32,"I_Cache_Controller EMEM_addr", false,-1, 31,0);
        tracep->declBus(c+33,"I_Cache_Controller EMEM_wdata", false,-1, 31,0);
        tracep->declBus(c+34,"I_Cache_Controller EMEM_wstrb", false,-1, 3,0);
        tracep->declBus(c+35,"I_Cache_Controller EMEM_rdata", false,-1, 31,0);
        tracep->declBus(c+36,"I_Cache_Controller EMEM_burst_len", false,-1, 7,0);
        tracep->declBit(c+37,"I_Cache_Controller EMEM_burst_en", false,-1);
        tracep->declBit(c+38,"I_Cache_Controller BRAM0_wen", false,-1);
        tracep->declBus(c+39,"I_Cache_Controller BRAM0_wstrb", false,-1, 7,0);
        tracep->declBus(c+40,"I_Cache_Controller BRAM0_waddr", false,-1, 8,0);
        tracep->declArray(c+41,"I_Cache_Controller BRAM0_din", false,-1, 71,0);
        tracep->declBit(c+44,"I_Cache_Controller BRAM0_ren", false,-1);
        tracep->declBus(c+45,"I_Cache_Controller BRAM0_raddr", false,-1, 8,0);
        tracep->declArray(c+46,"I_Cache_Controller BRAM0_dout", false,-1, 71,0);
        tracep->declBit(c+49,"I_Cache_Controller BRAM1_wen", false,-1);
        tracep->declBus(c+50,"I_Cache_Controller BRAM1_wstrb", false,-1, 7,0);
        tracep->declBus(c+51,"I_Cache_Controller BRAM1_waddr", false,-1, 8,0);
        tracep->declArray(c+52,"I_Cache_Controller BRAM1_din", false,-1, 71,0);
        tracep->declBit(c+55,"I_Cache_Controller BRAM1_ren", false,-1);
        tracep->declBus(c+56,"I_Cache_Controller BRAM1_raddr", false,-1, 8,0);
        tracep->declArray(c+57,"I_Cache_Controller BRAM1_dout", false,-1, 71,0);
        tracep->declBit(c+60,"I_Cache_Controller BRAM2_wen", false,-1);
        tracep->declBus(c+61,"I_Cache_Controller BRAM2_wstrb", false,-1, 7,0);
        tracep->declBus(c+62,"I_Cache_Controller BRAM2_waddr", false,-1, 8,0);
        tracep->declArray(c+63,"I_Cache_Controller BRAM2_din", false,-1, 71,0);
        tracep->declBit(c+66,"I_Cache_Controller BRAM2_ren", false,-1);
        tracep->declBus(c+67,"I_Cache_Controller BRAM2_raddr", false,-1, 8,0);
        tracep->declArray(c+68,"I_Cache_Controller BRAM2_dout", false,-1, 71,0);
        tracep->declBit(c+71,"I_Cache_Controller BRAM3_wen", false,-1);
        tracep->declBus(c+72,"I_Cache_Controller BRAM3_wstrb", false,-1, 7,0);
        tracep->declBus(c+73,"I_Cache_Controller BRAM3_waddr", false,-1, 8,0);
        tracep->declArray(c+74,"I_Cache_Controller BRAM3_din", false,-1, 71,0);
        tracep->declBit(c+77,"I_Cache_Controller BRAM3_ren", false,-1);
        tracep->declBus(c+78,"I_Cache_Controller BRAM3_raddr", false,-1, 8,0);
        tracep->declArray(c+79,"I_Cache_Controller BRAM3_dout", false,-1, 71,0);
        tracep->declBus(c+1,"I_Cache_Controller main_state", false,-1, 3,0);
        tracep->declBus(c+9,"I_Cache_Controller main_next", false,-1, 3,0);
        tracep->declBus(c+82,"I_Cache_Controller IDLE", false,-1, 31,0);
        tracep->declBus(c+83,"I_Cache_Controller CACHE_SEARCH", false,-1, 31,0);
        tracep->declBus(c+84,"I_Cache_Controller DATA_REQ", false,-1, 31,0);
        tracep->declBus(c+85,"I_Cache_Controller EMEM_READ", false,-1, 31,0);
        tracep->declBus(c+86,"I_Cache_Controller EMEM_WRITE", false,-1, 31,0);
        tracep->declBus(c+87,"I_Cache_Controller CACHE_MISS", false,-1, 31,0);
        tracep->declBus(c+88,"I_Cache_Controller CACHE_WRITE", false,-1, 31,0);
        tracep->declBit(c+10,"I_Cache_Controller cpu_tag_save", false,-1);
        tracep->declBus(c+2,"I_Cache_Controller cpu_I_tag", false,-1, 14,0);
        tracep->declBus(c+3,"I_Cache_Controller burst_counter", false,-1, 3,0);
        tracep->declBit(c+11,"I_Cache_Controller burst_counter_reset", false,-1);
        tracep->declBit(c+12,"I_Cache_Controller burst_counter_plus", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+4+i*1,"I_Cache_Controller word_buffer", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+13+i*1,"I_Cache_Controller word_buffer_wdata", true,(i+0), 31,0);}}
        tracep->declBit(c+17,"I_Cache_Controller word_buffer_wen_0", false,-1);
        tracep->declBit(c+18,"I_Cache_Controller word_buffer_wen_1", false,-1);
        tracep->declBit(c+19,"I_Cache_Controller word_buffer_wen_2", false,-1);
        tracep->declBit(c+20,"I_Cache_Controller word_buffer_wen_3", false,-1);
        tracep->declBit(c+8,"I_Cache_Controller random_bit", false,-1);
    }
}

void VI_Cache_Controller::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VI_Cache_Controller::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VI_Cache_Controller__Syms* __restrict vlSymsp = static_cast<VI_Cache_Controller__Syms*>(userp);
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VI_Cache_Controller::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VI_Cache_Controller__Syms* __restrict vlSymsp = static_cast<VI_Cache_Controller__Syms*>(userp);
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->I_Cache_Controller__DOT__main_state),4);
        tracep->fullSData(oldp+2,(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag),15);
        tracep->fullCData(oldp+3,(vlTOPp->I_Cache_Controller__DOT__burst_counter),4);
        tracep->fullIData(oldp+4,(vlTOPp->I_Cache_Controller__DOT__word_buffer[0]),32);
        tracep->fullIData(oldp+5,(vlTOPp->I_Cache_Controller__DOT__word_buffer[1]),32);
        tracep->fullIData(oldp+6,(vlTOPp->I_Cache_Controller__DOT__word_buffer[2]),32);
        tracep->fullIData(oldp+7,(vlTOPp->I_Cache_Controller__DOT__word_buffer[3]),32);
        tracep->fullBit(oldp+8,(vlTOPp->I_Cache_Controller__DOT__random_bit));
        tracep->fullCData(oldp+9,(vlTOPp->I_Cache_Controller__DOT__main_next),4);
        tracep->fullBit(oldp+10,(vlTOPp->I_Cache_Controller__DOT__cpu_tag_save));
        tracep->fullBit(oldp+11,(vlTOPp->I_Cache_Controller__DOT__burst_counter_reset));
        tracep->fullBit(oldp+12,(vlTOPp->I_Cache_Controller__DOT__burst_counter_plus));
        tracep->fullIData(oldp+13,(vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[0]),32);
        tracep->fullIData(oldp+14,(vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[1]),32);
        tracep->fullIData(oldp+15,(vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[2]),32);
        tracep->fullIData(oldp+16,(vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[3]),32);
        tracep->fullBit(oldp+17,(vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_0));
        tracep->fullBit(oldp+18,(vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_1));
        tracep->fullBit(oldp+19,(vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_2));
        tracep->fullBit(oldp+20,(vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_3));
        tracep->fullBit(oldp+21,(vlTOPp->clk));
        tracep->fullBit(oldp+22,(vlTOPp->resetn));
        tracep->fullBit(oldp+23,(vlTOPp->CPU_valid));
        tracep->fullBit(oldp+24,(vlTOPp->CPU_instr));
        tracep->fullBit(oldp+25,(vlTOPp->CPU_ready));
        tracep->fullIData(oldp+26,(vlTOPp->CPU_addr),32);
        tracep->fullIData(oldp+27,(vlTOPp->CPU_wdata),32);
        tracep->fullCData(oldp+28,(vlTOPp->CPU_wstrb),4);
        tracep->fullIData(oldp+29,(vlTOPp->CPU_rdata),32);
        tracep->fullBit(oldp+30,(vlTOPp->EMEM_valid));
        tracep->fullBit(oldp+31,(vlTOPp->EMEM_ready));
        tracep->fullIData(oldp+32,(vlTOPp->EMEM_addr),32);
        tracep->fullIData(oldp+33,(vlTOPp->EMEM_wdata),32);
        tracep->fullCData(oldp+34,(vlTOPp->EMEM_wstrb),4);
        tracep->fullIData(oldp+35,(vlTOPp->EMEM_rdata),32);
        tracep->fullCData(oldp+36,(vlTOPp->EMEM_burst_len),8);
        tracep->fullBit(oldp+37,(vlTOPp->EMEM_burst_en));
        tracep->fullBit(oldp+38,(vlTOPp->BRAM0_wen));
        tracep->fullCData(oldp+39,(vlTOPp->BRAM0_wstrb),8);
        tracep->fullSData(oldp+40,(vlTOPp->BRAM0_waddr),9);
        tracep->fullWData(oldp+41,(vlTOPp->BRAM0_din),72);
        tracep->fullBit(oldp+44,(vlTOPp->BRAM0_ren));
        tracep->fullSData(oldp+45,(vlTOPp->BRAM0_raddr),9);
        tracep->fullWData(oldp+46,(vlTOPp->BRAM0_dout),72);
        tracep->fullBit(oldp+49,(vlTOPp->BRAM1_wen));
        tracep->fullCData(oldp+50,(vlTOPp->BRAM1_wstrb),8);
        tracep->fullSData(oldp+51,(vlTOPp->BRAM1_waddr),9);
        tracep->fullWData(oldp+52,(vlTOPp->BRAM1_din),72);
        tracep->fullBit(oldp+55,(vlTOPp->BRAM1_ren));
        tracep->fullSData(oldp+56,(vlTOPp->BRAM1_raddr),9);
        tracep->fullWData(oldp+57,(vlTOPp->BRAM1_dout),72);
        tracep->fullBit(oldp+60,(vlTOPp->BRAM2_wen));
        tracep->fullCData(oldp+61,(vlTOPp->BRAM2_wstrb),8);
        tracep->fullSData(oldp+62,(vlTOPp->BRAM2_waddr),9);
        tracep->fullWData(oldp+63,(vlTOPp->BRAM2_din),72);
        tracep->fullBit(oldp+66,(vlTOPp->BRAM2_ren));
        tracep->fullSData(oldp+67,(vlTOPp->BRAM2_raddr),9);
        tracep->fullWData(oldp+68,(vlTOPp->BRAM2_dout),72);
        tracep->fullBit(oldp+71,(vlTOPp->BRAM3_wen));
        tracep->fullCData(oldp+72,(vlTOPp->BRAM3_wstrb),8);
        tracep->fullSData(oldp+73,(vlTOPp->BRAM3_waddr),9);
        tracep->fullWData(oldp+74,(vlTOPp->BRAM3_din),72);
        tracep->fullBit(oldp+77,(vlTOPp->BRAM3_ren));
        tracep->fullSData(oldp+78,(vlTOPp->BRAM3_raddr),9);
        tracep->fullWData(oldp+79,(vlTOPp->BRAM3_dout),72);
        tracep->fullIData(oldp+82,(0U),32);
        tracep->fullIData(oldp+83,(1U),32);
        tracep->fullIData(oldp+84,(2U),32);
        tracep->fullIData(oldp+85,(3U),32);
        tracep->fullIData(oldp+86,(4U),32);
        tracep->fullIData(oldp+87,(5U),32);
        tracep->fullIData(oldp+88,(6U),32);
    }
}
