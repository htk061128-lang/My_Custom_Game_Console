// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGame_Console_TOP__Syms.h"


void VGame_Console_TOP::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VGame_Console_TOP__Syms* __restrict vlSymsp = static_cast<VGame_Console_TOP__Syms*>(userp);
    VGame_Console_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VGame_Console_TOP::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VGame_Console_TOP__Syms* __restrict vlSymsp = static_cast<VGame_Console_TOP__Syms*>(userp);
    VGame_Console_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_en_a));
            tracep->chgBit(oldp+1,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_we_a));
            tracep->chgSData(oldp+2,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_addr_a),9);
            tracep->chgQData(oldp+3,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_din_a),64);
            tracep->chgBit(oldp+5,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_en_b));
            tracep->chgSData(oldp+6,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_addr_b),9);
            tracep->chgBit(oldp+7,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_en_a));
            tracep->chgBit(oldp+8,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_we_a));
            tracep->chgSData(oldp+9,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_addr_a),9);
            tracep->chgQData(oldp+10,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_din_a),64);
            tracep->chgBit(oldp+12,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_en_b));
            tracep->chgSData(oldp+13,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_addr_b),9);
            tracep->chgBit(oldp+14,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_front_256_inc_ena));
            tracep->chgBit(oldp+15,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+16,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_en_a));
            tracep->chgBit(oldp+17,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_we_a));
            tracep->chgSData(oldp+18,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_addr_a),9);
            tracep->chgQData(oldp+19,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_din_a),64);
            tracep->chgBit(oldp+21,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_en_b));
            tracep->chgSData(oldp+22,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_addr_b),9);
            tracep->chgBit(oldp+23,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_en_a));
            tracep->chgBit(oldp+24,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_we_a));
            tracep->chgSData(oldp+25,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_addr_a),9);
            tracep->chgQData(oldp+26,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_din_a),64);
            tracep->chgBit(oldp+28,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_en_b));
            tracep->chgSData(oldp+29,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_addr_b),9);
            tracep->chgBit(oldp+30,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_front_256_inc_ena));
            tracep->chgBit(oldp+31,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+32,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_en_a));
            tracep->chgBit(oldp+33,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_we_a));
            tracep->chgSData(oldp+34,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_addr_a),9);
            tracep->chgQData(oldp+35,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_din_a),64);
            tracep->chgBit(oldp+37,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_en_b));
            tracep->chgSData(oldp+38,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_addr_b),9);
            tracep->chgBit(oldp+39,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_en_a));
            tracep->chgBit(oldp+40,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_we_a));
            tracep->chgSData(oldp+41,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_addr_a),9);
            tracep->chgQData(oldp+42,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_din_a),64);
            tracep->chgBit(oldp+44,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_en_b));
            tracep->chgSData(oldp+45,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_addr_b),9);
            tracep->chgBit(oldp+46,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_front_256_inc_ena));
            tracep->chgBit(oldp+47,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+48,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_en_a));
            tracep->chgBit(oldp+49,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_we_a));
            tracep->chgSData(oldp+50,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_addr_a),9);
            tracep->chgQData(oldp+51,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_din_a),64);
            tracep->chgBit(oldp+53,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_en_b));
            tracep->chgSData(oldp+54,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_addr_b),9);
            tracep->chgBit(oldp+55,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_en_a));
            tracep->chgBit(oldp+56,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_we_a));
            tracep->chgSData(oldp+57,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_addr_a),9);
            tracep->chgQData(oldp+58,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_din_a),64);
            tracep->chgBit(oldp+60,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_en_b));
            tracep->chgSData(oldp+61,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_addr_b),9);
            tracep->chgBit(oldp+62,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_front_256_inc_ena));
            tracep->chgBit(oldp+63,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+64,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_en_a));
            tracep->chgBit(oldp+65,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_we_a));
            tracep->chgSData(oldp+66,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_addr_a),9);
            tracep->chgQData(oldp+67,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_din_a),64);
            tracep->chgBit(oldp+69,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_en_b));
            tracep->chgSData(oldp+70,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_addr_b),9);
            tracep->chgBit(oldp+71,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_en_a));
            tracep->chgBit(oldp+72,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_we_a));
            tracep->chgSData(oldp+73,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_addr_a),9);
            tracep->chgQData(oldp+74,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_din_a),64);
            tracep->chgBit(oldp+76,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_en_b));
            tracep->chgSData(oldp+77,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_addr_b),9);
            tracep->chgBit(oldp+78,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_front_256_inc_ena));
            tracep->chgBit(oldp+79,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+80,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_en_a));
            tracep->chgBit(oldp+81,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_we_a));
            tracep->chgSData(oldp+82,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_addr_a),9);
            tracep->chgQData(oldp+83,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_din_a),64);
            tracep->chgBit(oldp+85,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_en_b));
            tracep->chgSData(oldp+86,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_addr_b),9);
            tracep->chgBit(oldp+87,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_en_a));
            tracep->chgBit(oldp+88,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_we_a));
            tracep->chgSData(oldp+89,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_addr_a),9);
            tracep->chgQData(oldp+90,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_din_a),64);
            tracep->chgBit(oldp+92,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_en_b));
            tracep->chgSData(oldp+93,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_addr_b),9);
            tracep->chgBit(oldp+94,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_front_256_inc_ena));
            tracep->chgBit(oldp+95,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+96,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_en_a));
            tracep->chgBit(oldp+97,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_we_a));
            tracep->chgSData(oldp+98,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_addr_a),9);
            tracep->chgQData(oldp+99,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_din_a),64);
            tracep->chgBit(oldp+101,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_en_b));
            tracep->chgSData(oldp+102,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_addr_b),9);
            tracep->chgBit(oldp+103,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_en_a));
            tracep->chgBit(oldp+104,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_we_a));
            tracep->chgSData(oldp+105,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_addr_a),9);
            tracep->chgQData(oldp+106,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_din_a),64);
            tracep->chgBit(oldp+108,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_en_b));
            tracep->chgSData(oldp+109,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_addr_b),9);
            tracep->chgBit(oldp+110,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_front_256_inc_ena));
            tracep->chgBit(oldp+111,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+112,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_en_a));
            tracep->chgBit(oldp+113,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_we_a));
            tracep->chgSData(oldp+114,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_addr_a),9);
            tracep->chgQData(oldp+115,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_din_a),64);
            tracep->chgBit(oldp+117,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_en_b));
            tracep->chgSData(oldp+118,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_addr_b),9);
            tracep->chgBit(oldp+119,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_en_a));
            tracep->chgBit(oldp+120,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_we_a));
            tracep->chgSData(oldp+121,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_addr_a),9);
            tracep->chgQData(oldp+122,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_din_a),64);
            tracep->chgBit(oldp+124,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_en_b));
            tracep->chgSData(oldp+125,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_addr_b),9);
            tracep->chgBit(oldp+126,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_front_256_inc_ena));
            tracep->chgBit(oldp+127,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+128,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_en_a));
            tracep->chgBit(oldp+129,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_we_a));
            tracep->chgSData(oldp+130,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_addr_a),9);
            tracep->chgQData(oldp+131,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_din_a),64);
            tracep->chgBit(oldp+133,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_en_b));
            tracep->chgSData(oldp+134,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_addr_b),9);
            tracep->chgBit(oldp+135,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_en_a));
            tracep->chgBit(oldp+136,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_we_a));
            tracep->chgSData(oldp+137,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_addr_a),9);
            tracep->chgQData(oldp+138,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_din_a),64);
            tracep->chgBit(oldp+140,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_en_b));
            tracep->chgSData(oldp+141,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_addr_b),9);
            tracep->chgBit(oldp+142,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_front_128_inc_ena));
            tracep->chgBit(oldp+143,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+144,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_en_a));
            tracep->chgBit(oldp+145,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_we_a));
            tracep->chgSData(oldp+146,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_addr_a),9);
            tracep->chgQData(oldp+147,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_din_a),64);
            tracep->chgBit(oldp+149,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_en_b));
            tracep->chgSData(oldp+150,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_addr_b),9);
            tracep->chgBit(oldp+151,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_en_a));
            tracep->chgBit(oldp+152,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_we_a));
            tracep->chgSData(oldp+153,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_addr_a),9);
            tracep->chgQData(oldp+154,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_din_a),64);
            tracep->chgBit(oldp+156,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_en_b));
            tracep->chgSData(oldp+157,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_addr_b),9);
            tracep->chgBit(oldp+158,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_front_128_inc_ena));
            tracep->chgBit(oldp+159,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_rear_128_inc_ena));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+160,(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid));
            tracep->chgBit(oldp+161,(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr));
            tracep->chgIData(oldp+162,(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wdata),32);
            tracep->chgCData(oldp+163,(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb),4);
            tracep->chgBit(oldp+164,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__trace_valid));
            tracep->chgQData(oldp+165,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__trace_data),36);
            tracep->chgIData(oldp+167,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_insn_opcode),32);
            tracep->chgIData(oldp+168,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_opcode),32);
            tracep->chgIData(oldp+169,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_addr),32);
            tracep->chgBit(oldp+170,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_wr));
            tracep->chgIData(oldp+171,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_rd),32);
            tracep->chgBit(oldp+172,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_ready));
            tracep->chgBit(oldp+173,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_wr));
            tracep->chgIData(oldp+174,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_rd),32);
            tracep->chgBit(oldp+175,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_ready));
            tracep->chgCData(oldp+176,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_state),2);
            tracep->chgBit(oldp+177,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_la_secondword));
            tracep->chgBit(oldp+178,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_la_firstword_reg));
            tracep->chgBit(oldp+179,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__last_mem_valid));
            tracep->chgBit(oldp+180,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__prefetched_high_word));
            tracep->chgBit(oldp+181,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_fence));
            tracep->chgCData(oldp+182,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs1),6);
            tracep->chgBit(oldp+183,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_pseudo_trigger_q));
            tracep->chgCData(oldp+184,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_rs1),5);
            tracep->chgQData(oldp+185,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_ascii_instr),64);
            tracep->chgIData(oldp+187,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_imm),32);
            tracep->chgIData(oldp+188,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_opcode),32);
            tracep->chgCData(oldp+189,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_rs1),5);
            tracep->chgCData(oldp+190,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_rs2),5);
            tracep->chgCData(oldp+191,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_rd),5);
            tracep->chgBit(oldp+192,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_next));
            tracep->chgBit(oldp+193,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_valid_insn));
            tracep->chgQData(oldp+194,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_ascii_instr),64);
            tracep->chgIData(oldp+196,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_imm),32);
            tracep->chgIData(oldp+197,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_opcode),32);
            tracep->chgCData(oldp+198,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_rs1),5);
            tracep->chgCData(oldp+199,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_rs2),5);
            tracep->chgCData(oldp+200,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_rd),5);
            tracep->chgBit(oldp+201,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_trace));
            tracep->chgBit(oldp+202,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out_0_q));
            tracep->chgBit(oldp+203,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_wait));
            tracep->chgBit(oldp+204,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_wait_2));
            tracep->chgBit(oldp+205,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__clear_prefetched_high_word_q));
            tracep->chgBit(oldp+206,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q));
            tracep->chgQData(oldp+207,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs1),64);
            tracep->chgQData(oldp+209,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs2),64);
            tracep->chgQData(oldp+211,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rd),64);
            tracep->chgQData(oldp+213,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rdx),64);
            tracep->chgQData(oldp+215,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1),64);
            tracep->chgQData(oldp+217,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2),64);
            tracep->chgQData(oldp+219,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2),64);
            tracep->chgQData(oldp+221,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd),64);
            tracep->chgQData(oldp+223,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx),64);
            tracep->chgQData(oldp+225,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt),64);
            tracep->chgCData(oldp+227,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter),7);
            tracep->chgBit(oldp+228,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_waiting));
            tracep->chgBit(oldp+229,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish));
            tracep->chgBit(oldp+230,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__pcpi_wait_q));
            tracep->chgIData(oldp+231,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__dividend),32);
            tracep->chgQData(oldp+232,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__divisor),63);
            tracep->chgIData(oldp+234,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient),32);
            tracep->chgIData(oldp+235,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient_msk),32);
            tracep->chgBit(oldp+236,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__running));
            tracep->chgBit(oldp+237,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__outsign));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+238,(vlTOPp->Game_Console_TOP__DOT__PPU_start));
            tracep->chgBit(oldp+239,(vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid));
            tracep->chgIData(oldp+240,(vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr),32);
            tracep->chgIData(oldp+241,(vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata),32);
            tracep->chgCData(oldp+242,(vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb),4);
            tracep->chgCData(oldp+243,(vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len),8);
            tracep->chgBit(oldp+244,(vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en));
            tracep->chgIData(oldp+245,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0U]),32);
            tracep->chgIData(oldp+246,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [1U]),32);
            tracep->chgIData(oldp+247,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [2U]),32);
            tracep->chgIData(oldp+248,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [3U]),32);
            tracep->chgIData(oldp+249,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [4U]),32);
            tracep->chgIData(oldp+250,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [5U]),32);
            tracep->chgIData(oldp+251,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [6U]),32);
            tracep->chgIData(oldp+252,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [7U]),32);
            tracep->chgIData(oldp+253,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [8U]),32);
            tracep->chgIData(oldp+254,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [9U]),32);
            tracep->chgIData(oldp+255,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0xaU]),32);
            tracep->chgIData(oldp+256,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0xbU]),32);
            tracep->chgIData(oldp+257,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0xcU]),32);
            tracep->chgIData(oldp+258,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0xdU]),32);
            tracep->chgIData(oldp+259,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0xeU]),32);
            tracep->chgIData(oldp+260,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0xfU]),32);
            tracep->chgIData(oldp+261,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x10U]),32);
            tracep->chgIData(oldp+262,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x11U]),32);
            tracep->chgIData(oldp+263,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x12U]),32);
            tracep->chgIData(oldp+264,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x13U]),32);
            tracep->chgIData(oldp+265,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x14U]),32);
            tracep->chgIData(oldp+266,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x15U]),32);
            tracep->chgIData(oldp+267,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x16U]),32);
            tracep->chgIData(oldp+268,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x17U]),32);
            tracep->chgIData(oldp+269,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x18U]),32);
            tracep->chgIData(oldp+270,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x19U]),32);
            tracep->chgIData(oldp+271,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x1aU]),32);
            tracep->chgIData(oldp+272,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x1bU]),32);
            tracep->chgIData(oldp+273,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x1cU]),32);
            tracep->chgIData(oldp+274,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x1dU]),32);
            tracep->chgIData(oldp+275,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x1eU]),32);
            tracep->chgIData(oldp+276,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x1fU]),32);
            tracep->chgIData(oldp+277,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x20U]),32);
            tracep->chgIData(oldp+278,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x21U]),32);
            tracep->chgIData(oldp+279,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x22U]),32);
            tracep->chgIData(oldp+280,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x23U]),32);
            tracep->chgIData(oldp+281,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x24U]),32);
            tracep->chgIData(oldp+282,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x25U]),32);
            tracep->chgIData(oldp+283,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x26U]),32);
            tracep->chgIData(oldp+284,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x27U]),32);
            tracep->chgIData(oldp+285,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x28U]),32);
            tracep->chgCData(oldp+286,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0xaU])),8);
            tracep->chgCData(oldp+287,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                 [0xaU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+288,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                 [0xaU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+289,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                 [0xaU] 
                                                 >> 0x18U))),8);
            tracep->chgSData(oldp+290,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0xbU])),16);
            tracep->chgSData(oldp+291,((0xffffU & (
                                                   vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0xbU] 
                                                   >> 0x10U))),16);
            tracep->chgSData(oldp+292,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0xdU])),16);
            tracep->chgSData(oldp+293,((0xffffU & (
                                                   vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0xdU] 
                                                   >> 0x10U))),16);
            tracep->chgSData(oldp+294,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0xfU])),16);
            tracep->chgSData(oldp+295,((0xffffU & (
                                                   vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0xfU] 
                                                   >> 0x10U))),16);
            tracep->chgSData(oldp+296,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0x11U])),16);
            tracep->chgSData(oldp+297,((0xffffU & (
                                                   vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0x11U] 
                                                   >> 0x10U))),16);
            tracep->chgSData(oldp+298,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0x13U])),16);
            tracep->chgSData(oldp+299,((0xffffU & (
                                                   vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0x13U] 
                                                   >> 0x10U))),16);
            tracep->chgSData(oldp+300,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0x15U])),16);
            tracep->chgSData(oldp+301,((0xffffU & (
                                                   vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0x15U] 
                                                   >> 0x10U))),16);
            tracep->chgSData(oldp+302,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0x17U])),16);
            tracep->chgSData(oldp+303,((0xffffU & (
                                                   vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0x17U] 
                                                   >> 0x10U))),16);
            tracep->chgSData(oldp+304,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0x19U])),16);
            tracep->chgSData(oldp+305,((0xffffU & (
                                                   vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0x19U] 
                                                   >> 0x10U))),16);
            tracep->chgSData(oldp+306,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0x1bU])),16);
            tracep->chgSData(oldp+307,((0xffffU & (
                                                   vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0x1bU] 
                                                   >> 0x10U))),16);
            tracep->chgSData(oldp+308,((0xffffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0x1dU])),16);
            tracep->chgSData(oldp+309,((0xffffU & (
                                                   vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0x1dU] 
                                                   >> 0x10U))),16);
            tracep->chgCData(oldp+310,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                 [0xcU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+311,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0xcU])),8);
            tracep->chgCData(oldp+312,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                 [0xeU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+313,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0xeU])),8);
            tracep->chgCData(oldp+314,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                 [0x10U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+315,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0x10U])),8);
            tracep->chgCData(oldp+316,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                 [0x12U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+317,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0x12U])),8);
            tracep->chgCData(oldp+318,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                 [0x14U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+319,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0x14U])),8);
            tracep->chgCData(oldp+320,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                 [0x16U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+321,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0x16U])),8);
            tracep->chgCData(oldp+322,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                 [0x18U] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+323,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0x18U])),8);
            tracep->chgCData(oldp+324,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                 [0x1aU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+325,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0x1aU])),8);
            tracep->chgCData(oldp+326,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                 [0x1cU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+327,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0x1cU])),8);
            tracep->chgCData(oldp+328,((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                 [0x1eU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+329,((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                        [0x1eU])),8);
            tracep->chgCData(oldp+330,(vlTOPp->Game_Console_TOP__DOT__line_visible[0]),8);
            tracep->chgCData(oldp+331,(vlTOPp->Game_Console_TOP__DOT__line_visible[1]),8);
            tracep->chgCData(oldp+332,(vlTOPp->Game_Console_TOP__DOT__line_visible[2]),8);
            tracep->chgCData(oldp+333,(vlTOPp->Game_Console_TOP__DOT__line_visible[3]),8);
            tracep->chgCData(oldp+334,(vlTOPp->Game_Console_TOP__DOT__line_visible[4]),8);
            tracep->chgCData(oldp+335,(vlTOPp->Game_Console_TOP__DOT__line_visible[5]),8);
            tracep->chgCData(oldp+336,(vlTOPp->Game_Console_TOP__DOT__line_visible[6]),8);
            tracep->chgCData(oldp+337,(vlTOPp->Game_Console_TOP__DOT__line_visible[7]),8);
            tracep->chgCData(oldp+338,(vlTOPp->Game_Console_TOP__DOT__line_visible[8]),8);
            tracep->chgCData(oldp+339,(vlTOPp->Game_Console_TOP__DOT__line_visible[9]),8);
            tracep->chgCData(oldp+340,(vlTOPp->Game_Console_TOP__DOT__line_visible[10]),8);
            tracep->chgCData(oldp+341,(vlTOPp->Game_Console_TOP__DOT__line_visible[11]),8);
            tracep->chgCData(oldp+342,(vlTOPp->Game_Console_TOP__DOT__line_visible[12]),8);
            tracep->chgCData(oldp+343,(vlTOPp->Game_Console_TOP__DOT__line_visible[13]),8);
            tracep->chgCData(oldp+344,(vlTOPp->Game_Console_TOP__DOT__line_visible[14]),8);
            tracep->chgSData(oldp+345,(vlTOPp->Game_Console_TOP__DOT__line_rgb[0]),9);
            tracep->chgSData(oldp+346,(vlTOPp->Game_Console_TOP__DOT__line_rgb[1]),9);
            tracep->chgSData(oldp+347,(vlTOPp->Game_Console_TOP__DOT__line_rgb[2]),9);
            tracep->chgSData(oldp+348,(vlTOPp->Game_Console_TOP__DOT__line_rgb[3]),9);
            tracep->chgSData(oldp+349,(vlTOPp->Game_Console_TOP__DOT__line_rgb[4]),9);
            tracep->chgSData(oldp+350,(vlTOPp->Game_Console_TOP__DOT__line_rgb[5]),9);
            tracep->chgSData(oldp+351,(vlTOPp->Game_Console_TOP__DOT__line_rgb[6]),9);
            tracep->chgSData(oldp+352,(vlTOPp->Game_Console_TOP__DOT__line_rgb[7]),9);
            tracep->chgSData(oldp+353,(vlTOPp->Game_Console_TOP__DOT__line_rgb[8]),9);
            tracep->chgSData(oldp+354,(vlTOPp->Game_Console_TOP__DOT__line_rgb[9]),9);
            tracep->chgSData(oldp+355,(vlTOPp->Game_Console_TOP__DOT__line_rgb[10]),9);
            tracep->chgSData(oldp+356,(vlTOPp->Game_Console_TOP__DOT__line_rgb[11]),9);
            tracep->chgSData(oldp+357,(vlTOPp->Game_Console_TOP__DOT__line_rgb[12]),9);
            tracep->chgSData(oldp+358,(vlTOPp->Game_Console_TOP__DOT__line_rgb[13]),9);
            tracep->chgSData(oldp+359,(vlTOPp->Game_Console_TOP__DOT__line_rgb[14]),9);
            tracep->chgCData(oldp+360,(vlTOPp->Game_Console_TOP__DOT__line_alpha[0]),3);
            tracep->chgCData(oldp+361,(vlTOPp->Game_Console_TOP__DOT__line_alpha[1]),3);
            tracep->chgCData(oldp+362,(vlTOPp->Game_Console_TOP__DOT__line_alpha[2]),3);
            tracep->chgCData(oldp+363,(vlTOPp->Game_Console_TOP__DOT__line_alpha[3]),3);
            tracep->chgCData(oldp+364,(vlTOPp->Game_Console_TOP__DOT__line_alpha[4]),3);
            tracep->chgCData(oldp+365,(vlTOPp->Game_Console_TOP__DOT__line_alpha[5]),3);
            tracep->chgCData(oldp+366,(vlTOPp->Game_Console_TOP__DOT__line_alpha[6]),3);
            tracep->chgCData(oldp+367,(vlTOPp->Game_Console_TOP__DOT__line_alpha[7]),3);
            tracep->chgCData(oldp+368,(vlTOPp->Game_Console_TOP__DOT__line_alpha[8]),3);
            tracep->chgCData(oldp+369,(vlTOPp->Game_Console_TOP__DOT__line_alpha[9]),3);
            tracep->chgCData(oldp+370,(vlTOPp->Game_Console_TOP__DOT__line_alpha[10]),3);
            tracep->chgCData(oldp+371,(vlTOPp->Game_Console_TOP__DOT__line_alpha[11]),3);
            tracep->chgCData(oldp+372,(vlTOPp->Game_Console_TOP__DOT__line_alpha[12]),3);
            tracep->chgCData(oldp+373,(vlTOPp->Game_Console_TOP__DOT__line_alpha[13]),3);
            tracep->chgCData(oldp+374,(vlTOPp->Game_Console_TOP__DOT__line_alpha[14]),3);
            tracep->chgCData(oldp+375,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state),4);
            tracep->chgBit(oldp+376,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_tag_save));
            tracep->chgSData(oldp+377,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag),15);
            tracep->chgCData(oldp+378,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter),4);
            tracep->chgIData(oldp+379,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer[0]),32);
            tracep->chgIData(oldp+380,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer[1]),32);
            tracep->chgIData(oldp+381,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer[2]),32);
            tracep->chgIData(oldp+382,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer[3]),32);
            tracep->chgBit(oldp+383,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit));
            tracep->chgIData(oldp+384,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                       [0x29U]),32);
            tracep->chgCData(oldp+385,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state),4);
            tracep->chgBit(oldp+386,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram4_r));
            tracep->chgBit(oldp+387,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram4_w));
            tracep->chgBit(oldp+388,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram5_r));
            tracep->chgBit(oldp+389,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram5_w));
            tracep->chgBit(oldp+390,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram6_r));
            tracep->chgBit(oldp+391,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram6_w));
            tracep->chgBit(oldp+392,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram13_r));
            tracep->chgBit(oldp+393,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram13_w));
            tracep->chgBit(oldp+394,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_font_map_r));
            tracep->chgBit(oldp+395,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_font_map_w));
            tracep->chgBit(oldp+396,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_lut_w));
            tracep->chgBit(oldp+397,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_ppu_reg_r));
            tracep->chgBit(oldp+398,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_ppu_reg_w));
            tracep->chgBit(oldp+399,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__joypad_irq_pending));
            tracep->chgCData(oldp+400,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__joypad_state_latched),8);
            tracep->chgIData(oldp+401,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__i),32);
            tracep->chgCData(oldp+402,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                       [0U]),8);
            tracep->chgCData(oldp+403,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                       [1U]),8);
            tracep->chgCData(oldp+404,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                       [2U]),8);
            tracep->chgCData(oldp+405,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                       [3U]),8);
            tracep->chgCData(oldp+406,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                       [4U]),8);
            tracep->chgCData(oldp+407,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                       [5U]),8);
            tracep->chgCData(oldp+408,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                       [6U]),8);
            tracep->chgCData(oldp+409,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                       [7U]),8);
            tracep->chgCData(oldp+410,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                       [8U]),8);
            tracep->chgCData(oldp+411,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                       [9U]),8);
            tracep->chgCData(oldp+412,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                       [0xaU]),8);
            tracep->chgCData(oldp+413,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                       [0xbU]),8);
            tracep->chgCData(oldp+414,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                       [0xcU]),8);
            tracep->chgCData(oldp+415,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                       [0xdU]),8);
            tracep->chgCData(oldp+416,(vlTOPp->Game_Console_TOP__DOT__line_visible
                                       [0xeU]),8);
            tracep->chgSData(oldp+417,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                       [0U]),9);
            tracep->chgSData(oldp+418,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                       [1U]),9);
            tracep->chgSData(oldp+419,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                       [2U]),9);
            tracep->chgSData(oldp+420,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                       [3U]),9);
            tracep->chgSData(oldp+421,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                       [4U]),9);
            tracep->chgSData(oldp+422,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                       [5U]),9);
            tracep->chgSData(oldp+423,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                       [6U]),9);
            tracep->chgSData(oldp+424,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                       [7U]),9);
            tracep->chgSData(oldp+425,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                       [8U]),9);
            tracep->chgSData(oldp+426,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                       [9U]),9);
            tracep->chgSData(oldp+427,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                       [0xaU]),9);
            tracep->chgSData(oldp+428,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                       [0xbU]),9);
            tracep->chgSData(oldp+429,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                       [0xcU]),9);
            tracep->chgSData(oldp+430,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                       [0xdU]),9);
            tracep->chgSData(oldp+431,(vlTOPp->Game_Console_TOP__DOT__line_rgb
                                       [0xeU]),9);
            tracep->chgCData(oldp+432,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                       [0U]),3);
            tracep->chgCData(oldp+433,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                       [1U]),3);
            tracep->chgCData(oldp+434,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                       [2U]),3);
            tracep->chgCData(oldp+435,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                       [3U]),3);
            tracep->chgCData(oldp+436,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                       [4U]),3);
            tracep->chgCData(oldp+437,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                       [5U]),3);
            tracep->chgCData(oldp+438,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                       [6U]),3);
            tracep->chgCData(oldp+439,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                       [7U]),3);
            tracep->chgCData(oldp+440,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                       [8U]),3);
            tracep->chgCData(oldp+441,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                       [9U]),3);
            tracep->chgCData(oldp+442,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                       [0xaU]),3);
            tracep->chgCData(oldp+443,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                       [0xbU]),3);
            tracep->chgCData(oldp+444,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                       [0xcU]),3);
            tracep->chgCData(oldp+445,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                       [0xdU]),3);
            tracep->chgCData(oldp+446,(vlTOPp->Game_Console_TOP__DOT__line_alpha
                                       [0xeU]),3);
            tracep->chgCData(oldp+447,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter),2);
            tracep->chgBit(oldp+448,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+449,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_empty_128));
            tracep->chgBit(oldp+450,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+451,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+452,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_empty_128));
            tracep->chgBit(oldp+453,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+454,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+455,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_empty_128));
            tracep->chgBit(oldp+456,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+457,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+458,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_empty_128));
            tracep->chgBit(oldp+459,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+460,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+461,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_empty_128));
            tracep->chgBit(oldp+462,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+463,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+464,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_empty_128));
            tracep->chgBit(oldp+465,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+466,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+467,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_empty_128));
            tracep->chgBit(oldp+468,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+469,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+470,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_empty_128));
            tracep->chgBit(oldp+471,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+472,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+473,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_empty_256));
            tracep->chgBit(oldp+474,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+475,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+476,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_empty_256));
            tracep->chgBit(oldp+477,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Decomp_fifo_dequeue));
            tracep->chgIData(oldp+478,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Pixel_RGB),18);
            tracep->chgBit(oldp+479,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Pixel_is_trans));
            tracep->chgIData(oldp+480,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Pixel_RGB),18);
            tracep->chgBit(oldp+481,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Pixel_is_trans));
            tracep->chgIData(oldp+482,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Pixel_RGB),18);
            tracep->chgBit(oldp+483,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Pixel_is_trans));
            tracep->chgIData(oldp+484,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Pixel_RGB),18);
            tracep->chgBit(oldp+485,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Pixel_is_trans));
            tracep->chgIData(oldp+486,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Pixel_RGB),18);
            tracep->chgBit(oldp+487,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Pixel_is_trans));
            tracep->chgIData(oldp+488,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Pixel_RGB),18);
            tracep->chgBit(oldp+489,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Pixel_is_trans));
            tracep->chgIData(oldp+490,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Pixel_RGB),18);
            tracep->chgBit(oldp+491,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Pixel_is_trans));
            tracep->chgIData(oldp+492,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Pixel_RGB),18);
            tracep->chgBit(oldp+493,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Pixel_is_trans));
            tracep->chgIData(oldp+494,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Pixel_RGB),18);
            tracep->chgBit(oldp+495,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Pixel_is_trans));
            tracep->chgIData(oldp+496,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Pixel_RGB),18);
            tracep->chgBit(oldp+497,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Pixel_is_trans));
            tracep->chgIData(oldp+498,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_RGB),18);
            tracep->chgBit(oldp+499,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_valid));
            tracep->chgIData(oldp+500,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_mixed_pixel_RGB),18);
            tracep->chgBit(oldp+501,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_mixed_pixel_valid));
            tracep->chgBit(oldp+502,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_line_end));
            tracep->chgBit(oldp+503,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end));
            tracep->chgBit(oldp+504,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompress_state)))));
            tracep->chgBit(oldp+505,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompress_state)))));
            tracep->chgBit(oldp+506,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompress_state)))));
            tracep->chgBit(oldp+507,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompress_state)))));
            tracep->chgBit(oldp+508,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompress_state)))));
            tracep->chgBit(oldp+509,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompress_state)))));
            tracep->chgBit(oldp+510,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompress_state)))));
            tracep->chgBit(oldp+511,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompress_state)))));
            tracep->chgBit(oldp+512,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompress_state)))));
            tracep->chgBit(oldp+513,((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompress_state)))));
            tracep->chgBit(oldp+514,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__All_Decompresser_is_IDLE));
            tracep->chgBit(oldp+515,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_ena));
            tracep->chgBit(oldp+516,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_dequeue));
            tracep->chgBit(oldp+517,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master));
            tracep->chgSData(oldp+518,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count),9);
            tracep->chgBit(oldp+519,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_ena));
            tracep->chgBit(oldp+520,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_dequeue));
            tracep->chgBit(oldp+521,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master));
            tracep->chgSData(oldp+522,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count),9);
            tracep->chgBit(oldp+523,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_ena));
            tracep->chgBit(oldp+524,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_dequeue));
            tracep->chgBit(oldp+525,((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))));
            tracep->chgCData(oldp+526,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count),8);
            tracep->chgBit(oldp+527,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_ena));
            tracep->chgBit(oldp+528,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_dequeue));
            tracep->chgBit(oldp+529,((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))));
            tracep->chgCData(oldp+530,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count),8);
            tracep->chgBit(oldp+531,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_ena));
            tracep->chgBit(oldp+532,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_dequeue));
            tracep->chgBit(oldp+533,((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))));
            tracep->chgCData(oldp+534,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count),8);
            tracep->chgBit(oldp+535,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_ena));
            tracep->chgBit(oldp+536,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_dequeue));
            tracep->chgBit(oldp+537,((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))));
            tracep->chgCData(oldp+538,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count),8);
            tracep->chgBit(oldp+539,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_ena));
            tracep->chgBit(oldp+540,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_dequeue));
            tracep->chgCData(oldp+541,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count),8);
            tracep->chgBit(oldp+542,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_ena));
            tracep->chgBit(oldp+543,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_dequeue));
            tracep->chgCData(oldp+544,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count),8);
            tracep->chgBit(oldp+545,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_ena));
            tracep->chgBit(oldp+546,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_dequeue));
            tracep->chgCData(oldp+547,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count),8);
            tracep->chgBit(oldp+548,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_ena));
            tracep->chgBit(oldp+549,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_dequeue));
            tracep->chgCData(oldp+550,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count),8);
            tracep->chgBit(oldp+551,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_en_a));
            tracep->chgBit(oldp+552,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_we_a));
            tracep->chgBit(oldp+553,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_en_b));
            tracep->chgSData(oldp+554,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_addr_a),9);
            tracep->chgSData(oldp+555,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_addr_b),9);
            tracep->chgQData(oldp+556,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_din_a),64);
            tracep->chgBit(oldp+558,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_en_a));
            tracep->chgBit(oldp+559,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_we_a));
            tracep->chgBit(oldp+560,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_en_b));
            tracep->chgSData(oldp+561,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_addr_a),9);
            tracep->chgSData(oldp+562,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_addr_b),9);
            tracep->chgQData(oldp+563,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_din_a),64);
            tracep->chgBit(oldp+565,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_en_a));
            tracep->chgBit(oldp+566,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_we_a));
            tracep->chgBit(oldp+567,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_en_b));
            tracep->chgSData(oldp+568,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_addr_a),9);
            tracep->chgSData(oldp+569,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_addr_b),9);
            tracep->chgQData(oldp+570,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_din_a),64);
            tracep->chgBit(oldp+572,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_en_a));
            tracep->chgBit(oldp+573,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_we_a));
            tracep->chgBit(oldp+574,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_en_b));
            tracep->chgSData(oldp+575,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_addr_a),9);
            tracep->chgSData(oldp+576,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_addr_b),9);
            tracep->chgQData(oldp+577,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_din_a),64);
            tracep->chgBit(oldp+579,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_en_a));
            tracep->chgBit(oldp+580,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_we_a));
            tracep->chgBit(oldp+581,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_en_b));
            tracep->chgSData(oldp+582,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_addr_a),9);
            tracep->chgSData(oldp+583,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_addr_b),9);
            tracep->chgQData(oldp+584,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_din_a),64);
            tracep->chgBit(oldp+586,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_en_a));
            tracep->chgBit(oldp+587,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_we_a));
            tracep->chgBit(oldp+588,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_en_b));
            tracep->chgSData(oldp+589,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_addr_a),9);
            tracep->chgSData(oldp+590,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_addr_b),9);
            tracep->chgQData(oldp+591,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_din_a),64);
            tracep->chgBit(oldp+593,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_en_a));
            tracep->chgBit(oldp+594,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_we_a));
            tracep->chgBit(oldp+595,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_en_b));
            tracep->chgSData(oldp+596,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_addr_a),9);
            tracep->chgSData(oldp+597,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_addr_b),9);
            tracep->chgQData(oldp+598,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_din_a),64);
            tracep->chgBit(oldp+600,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_en_a));
            tracep->chgBit(oldp+601,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_we_a));
            tracep->chgBit(oldp+602,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_en_b));
            tracep->chgSData(oldp+603,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_addr_a),9);
            tracep->chgSData(oldp+604,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_addr_b),9);
            tracep->chgQData(oldp+605,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_din_a),64);
            tracep->chgBit(oldp+607,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_en_a));
            tracep->chgBit(oldp+608,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_we_a));
            tracep->chgBit(oldp+609,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_en_b));
            tracep->chgSData(oldp+610,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_addr_a),9);
            tracep->chgSData(oldp+611,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_addr_b),9);
            tracep->chgQData(oldp+612,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_din_a),64);
            tracep->chgBit(oldp+614,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_en_a));
            tracep->chgBit(oldp+615,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_we_a));
            tracep->chgBit(oldp+616,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_en_b));
            tracep->chgSData(oldp+617,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_addr_a),9);
            tracep->chgSData(oldp+618,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_addr_b),9);
            tracep->chgQData(oldp+619,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_din_a),64);
            tracep->chgBit(oldp+621,(((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_ena))));
            tracep->chgCData(oldp+622,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_front),8);
            tracep->chgCData(oldp+623,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_rear),8);
            tracep->chgBit(oldp+624,(((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_ena))));
            tracep->chgCData(oldp+625,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_front),8);
            tracep->chgCData(oldp+626,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_rear),8);
            tracep->chgBit(oldp+627,(((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_ena))));
            tracep->chgCData(oldp+628,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_front),8);
            tracep->chgCData(oldp+629,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_rear),8);
            tracep->chgBit(oldp+630,(((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_ena))));
            tracep->chgCData(oldp+631,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_front),8);
            tracep->chgCData(oldp+632,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_rear),8);
            tracep->chgBit(oldp+633,(((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_ena))));
            tracep->chgCData(oldp+634,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_front),8);
            tracep->chgCData(oldp+635,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_rear),8);
            tracep->chgBit(oldp+636,(((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_ena))));
            tracep->chgCData(oldp+637,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_front),8);
            tracep->chgCData(oldp+638,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_rear),8);
            tracep->chgBit(oldp+639,(((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_ena))));
            tracep->chgCData(oldp+640,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_front),8);
            tracep->chgCData(oldp+641,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_rear),8);
            tracep->chgBit(oldp+642,(((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_ena))));
            tracep->chgCData(oldp+643,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_front),8);
            tracep->chgCData(oldp+644,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_rear),8);
            tracep->chgBit(oldp+645,(((0x40U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_ena))));
            tracep->chgSData(oldp+646,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_front),9);
            tracep->chgSData(oldp+647,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_rear),9);
            tracep->chgBit(oldp+648,(((0x40U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_ena))));
            tracep->chgSData(oldp+649,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_front),9);
            tracep->chgSData(oldp+650,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_rear),9);
            tracep->chgBit(oldp+651,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want));
            tracep->chgBit(oldp+652,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want));
            tracep->chgBit(oldp+653,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want));
            tracep->chgBit(oldp+654,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want));
            tracep->chgBit(oldp+655,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want));
            tracep->chgBit(oldp+656,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want));
            tracep->chgBit(oldp+657,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_dec_want));
            tracep->chgBit(oldp+658,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_dec_want));
            tracep->chgBit(oldp+659,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want));
            tracep->chgBit(oldp+660,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want));
            tracep->chgCData(oldp+661,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state),4);
            tracep->chgCData(oldp+662,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state),3);
            tracep->chgCData(oldp+663,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next),3);
            tracep->chgCData(oldp+664,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state),3);
            tracep->chgCData(oldp+665,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next),3);
            tracep->chgCData(oldp+666,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state),3);
            tracep->chgCData(oldp+667,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next),3);
            tracep->chgIData(oldp+668,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_next_ad),32);
            tracep->chgIData(oldp+669,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_next_ad),32);
            tracep->chgIData(oldp+670,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_next_ad),32);
            tracep->chgIData(oldp+671,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_next_ad),32);
            tracep->chgIData(oldp+672,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_next_ad),32);
            tracep->chgIData(oldp+673,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_next_ad),32);
            tracep->chgIData(oldp+674,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_next_ad),32);
            tracep->chgIData(oldp+675,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_next_ad),32);
            tracep->chgIData(oldp+676,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_next_ad),32);
            tracep->chgIData(oldp+677,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_next_ad),32);
            tracep->chgSData(oldp+678,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer),10);
            tracep->chgSData(oldp+679,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic),10);
            tracep->chgSData(oldp+680,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent),10);
            tracep->chgSData(oldp+681,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req),10);
            tracep->chgSData(oldp+682,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__urgent_req),10);
            tracep->chgSData(oldp+683,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req),10);
            tracep->chgSData(oldp+684,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req),10);
            tracep->chgBit(oldp+685,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__round_end));
            tracep->chgBit(oldp+686,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode));
            tracep->chgSData(oldp+687,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer),10);
            tracep->chgCData(oldp+688,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter),8);
            tracep->chgIData(oldp+689,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg),32);
            tracep->chgCData(oldp+690,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_pixel),8);
            tracep->chgIData(oldp+691,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_RGB),18);
            tracep->chgBit(oldp+692,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_valid));
            tracep->chgCData(oldp+693,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_pixel),8);
            tracep->chgIData(oldp+694,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_RGB),18);
            tracep->chgBit(oldp+695,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_valid));
            tracep->chgCData(oldp+696,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_pixel),8);
            tracep->chgIData(oldp+697,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_RGB),18);
            tracep->chgBit(oldp+698,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_valid));
            tracep->chgCData(oldp+699,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_pixel),8);
            tracep->chgIData(oldp+700,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_RGB),18);
            tracep->chgBit(oldp+701,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_valid));
            tracep->chgCData(oldp+702,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_pixel),8);
            tracep->chgIData(oldp+703,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_RGB),18);
            tracep->chgBit(oldp+704,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_valid));
            tracep->chgCData(oldp+705,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_pixel),8);
            tracep->chgIData(oldp+706,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_RGB),18);
            tracep->chgBit(oldp+707,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_valid));
            tracep->chgCData(oldp+708,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_pixel),8);
            tracep->chgIData(oldp+709,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_RGB),18);
            tracep->chgBit(oldp+710,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_valid));
            tracep->chgCData(oldp+711,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_pixel),8);
            tracep->chgIData(oldp+712,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_RGB),18);
            tracep->chgBit(oldp+713,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_valid));
            tracep->chgCData(oldp+714,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_pixel),8);
            tracep->chgIData(oldp+715,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_RGB),18);
            tracep->chgBit(oldp+716,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_valid));
            tracep->chgCData(oldp+717,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_pixel),8);
            tracep->chgIData(oldp+718,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_RGB),18);
            tracep->chgBit(oldp+719,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_valid));
            tracep->chgCData(oldp+720,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_pixel),8);
            tracep->chgIData(oldp+721,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_RGB),18);
            tracep->chgBit(oldp+722,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_valid));
            tracep->chgCData(oldp+723,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_pixel),8);
            tracep->chgIData(oldp+724,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_RGB),18);
            tracep->chgBit(oldp+725,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_valid));
            tracep->chgCData(oldp+726,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_pixel),8);
            tracep->chgIData(oldp+727,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_RGB),18);
            tracep->chgBit(oldp+728,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_valid));
            tracep->chgCData(oldp+729,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_pixel),8);
            tracep->chgIData(oldp+730,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_RGB),18);
            tracep->chgBit(oldp+731,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_valid));
            tracep->chgCData(oldp+732,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_exclusive_pixel),8);
            tracep->chgIData(oldp+733,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_exclusive_RGB),18);
            tracep->chgBit(oldp+734,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_exclusive_valid));
            tracep->chgCData(oldp+735,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_exclusive_pixel),8);
            tracep->chgIData(oldp+736,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_exclusive_RGB),18);
            tracep->chgBit(oldp+737,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_exclusive_valid));
            tracep->chgCData(oldp+738,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_3),2);
            tracep->chgBit(oldp+739,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_1));
            tracep->chgCData(oldp+740,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_2),2);
            tracep->chgBit(oldp+741,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__is_new_pixel));
            tracep->chgIData(oldp+742,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB),18);
            tracep->chgBit(oldp+743,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_is_trans));
            tracep->chgCData(oldp+744,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_a),8);
            tracep->chgBit(oldp+745,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid));
            tracep->chgBit(oldp+746,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_ready));
            tracep->chgIData(oldp+747,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB),18);
            tracep->chgBit(oldp+748,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_is_trans));
            tracep->chgCData(oldp+749,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_a),8);
            tracep->chgBit(oldp+750,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid));
            tracep->chgBit(oldp+751,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_ready));
            tracep->chgIData(oldp+752,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB),18);
            tracep->chgBit(oldp+753,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_is_trans));
            tracep->chgCData(oldp+754,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_a),8);
            tracep->chgBit(oldp+755,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid));
            tracep->chgBit(oldp+756,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_ready));
            tracep->chgIData(oldp+757,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB),18);
            tracep->chgBit(oldp+758,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_is_trans));
            tracep->chgCData(oldp+759,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_a),8);
            tracep->chgBit(oldp+760,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid));
            tracep->chgBit(oldp+761,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_ready));
            tracep->chgIData(oldp+762,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB),18);
            tracep->chgBit(oldp+763,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_is_trans));
            tracep->chgCData(oldp+764,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_a),8);
            tracep->chgBit(oldp+765,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid));
            tracep->chgBit(oldp+766,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_ready));
            tracep->chgIData(oldp+767,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB),18);
            tracep->chgBit(oldp+768,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_is_trans));
            tracep->chgCData(oldp+769,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_a),8);
            tracep->chgBit(oldp+770,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid));
            tracep->chgBit(oldp+771,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_ready));
            tracep->chgIData(oldp+772,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB),18);
            tracep->chgBit(oldp+773,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_is_trans));
            tracep->chgCData(oldp+774,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_a),8);
            tracep->chgBit(oldp+775,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid));
            tracep->chgBit(oldp+776,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_ready));
            tracep->chgIData(oldp+777,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB),18);
            tracep->chgBit(oldp+778,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_is_trans));
            tracep->chgCData(oldp+779,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_a),8);
            tracep->chgBit(oldp+780,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid));
            tracep->chgBit(oldp+781,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_ready));
            tracep->chgIData(oldp+782,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB),18);
            tracep->chgBit(oldp+783,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_is_trans));
            tracep->chgCData(oldp+784,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_a),8);
            tracep->chgBit(oldp+785,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid));
            tracep->chgBit(oldp+786,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_ready));
            tracep->chgIData(oldp+787,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB),18);
            tracep->chgBit(oldp+788,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_is_trans));
            tracep->chgCData(oldp+789,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_a),8);
            tracep->chgBit(oldp+790,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid));
            tracep->chgBit(oldp+791,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_ready));
            tracep->chgBit(oldp+792,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move));
            tracep->chgSData(oldp+793,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_R),15);
            tracep->chgSData(oldp+794,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_G),15);
            tracep->chgSData(oldp+795,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_B),15);
            tracep->chgBit(oldp+796,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_is_trans));
            tracep->chgBit(oldp+797,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_valid));
            tracep->chgSData(oldp+798,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_R),15);
            tracep->chgSData(oldp+799,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_G),15);
            tracep->chgSData(oldp+800,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_B),15);
            tracep->chgBit(oldp+801,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_is_trans));
            tracep->chgBit(oldp+802,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_valid));
            tracep->chgSData(oldp+803,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_R),15);
            tracep->chgSData(oldp+804,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_G),15);
            tracep->chgSData(oldp+805,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_B),15);
            tracep->chgBit(oldp+806,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_is_trans));
            tracep->chgBit(oldp+807,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_valid));
            tracep->chgSData(oldp+808,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_R),15);
            tracep->chgSData(oldp+809,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_G),15);
            tracep->chgSData(oldp+810,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_B),15);
            tracep->chgBit(oldp+811,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_is_trans));
            tracep->chgBit(oldp+812,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_valid));
            tracep->chgSData(oldp+813,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_R),15);
            tracep->chgSData(oldp+814,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_G),15);
            tracep->chgSData(oldp+815,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_B),15);
            tracep->chgBit(oldp+816,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_is_trans));
            tracep->chgBit(oldp+817,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_valid));
            tracep->chgSData(oldp+818,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_R),15);
            tracep->chgSData(oldp+819,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_G),15);
            tracep->chgSData(oldp+820,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_B),15);
            tracep->chgBit(oldp+821,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_is_trans));
            tracep->chgBit(oldp+822,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_valid));
            tracep->chgSData(oldp+823,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_R),15);
            tracep->chgSData(oldp+824,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_G),15);
            tracep->chgSData(oldp+825,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_B),15);
            tracep->chgBit(oldp+826,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_is_trans));
            tracep->chgBit(oldp+827,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_valid));
            tracep->chgSData(oldp+828,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_R),15);
            tracep->chgSData(oldp+829,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_G),15);
            tracep->chgSData(oldp+830,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_B),15);
            tracep->chgBit(oldp+831,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_is_trans));
            tracep->chgBit(oldp+832,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid));
            tracep->chgSData(oldp+833,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_R),15);
            tracep->chgSData(oldp+834,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_G),15);
            tracep->chgSData(oldp+835,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_B),15);
            tracep->chgBit(oldp+836,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_is_trans));
            tracep->chgBit(oldp+837,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_valid));
            tracep->chgBit(oldp+838,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__all_fsm_reset));
            tracep->chgIData(oldp+839,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[0]),18);
            tracep->chgIData(oldp+840,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[1]),18);
            tracep->chgIData(oldp+841,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[2]),18);
            tracep->chgIData(oldp+842,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[3]),18);
            tracep->chgIData(oldp+843,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[4]),18);
            tracep->chgIData(oldp+844,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[5]),18);
            tracep->chgIData(oldp+845,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[6]),18);
            tracep->chgIData(oldp+846,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[7]),18);
            tracep->chgIData(oldp+847,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[8]),18);
            tracep->chgIData(oldp+848,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[9]),18);
            tracep->chgIData(oldp+849,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[10]),18);
            tracep->chgBit(oldp+850,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[0]));
            tracep->chgBit(oldp+851,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[1]));
            tracep->chgBit(oldp+852,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[2]));
            tracep->chgBit(oldp+853,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[3]));
            tracep->chgBit(oldp+854,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[4]));
            tracep->chgBit(oldp+855,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[5]));
            tracep->chgBit(oldp+856,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[6]));
            tracep->chgBit(oldp+857,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[7]));
            tracep->chgBit(oldp+858,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[8]));
            tracep->chgBit(oldp+859,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[9]));
            tracep->chgBit(oldp+860,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[10]));
            tracep->chgCData(oldp+861,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[0]),8);
            tracep->chgCData(oldp+862,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[1]),8);
            tracep->chgCData(oldp+863,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[2]),8);
            tracep->chgCData(oldp+864,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[3]),8);
            tracep->chgCData(oldp+865,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[4]),8);
            tracep->chgCData(oldp+866,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[5]),8);
            tracep->chgCData(oldp+867,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[6]),8);
            tracep->chgCData(oldp+868,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[7]),8);
            tracep->chgCData(oldp+869,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[8]),8);
            tracep->chgCData(oldp+870,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[9]),8);
            tracep->chgCData(oldp+871,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[10]),8);
            tracep->chgCData(oldp+872,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[0]),8);
            tracep->chgCData(oldp+873,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[1]),8);
            tracep->chgCData(oldp+874,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[2]),8);
            tracep->chgCData(oldp+875,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[3]),8);
            tracep->chgCData(oldp+876,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[4]),8);
            tracep->chgCData(oldp+877,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[5]),8);
            tracep->chgCData(oldp+878,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[6]),8);
            tracep->chgCData(oldp+879,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[7]),8);
            tracep->chgCData(oldp+880,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[8]),8);
            tracep->chgCData(oldp+881,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[9]),8);
            tracep->chgCData(oldp+882,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[10]),8);
            tracep->chgCData(oldp+883,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[0]),4);
            tracep->chgCData(oldp+884,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[1]),4);
            tracep->chgCData(oldp+885,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[2]),4);
            tracep->chgCData(oldp+886,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[3]),4);
            tracep->chgCData(oldp+887,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[4]),4);
            tracep->chgCData(oldp+888,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[5]),4);
            tracep->chgCData(oldp+889,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[6]),4);
            tracep->chgCData(oldp+890,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[7]),4);
            tracep->chgCData(oldp+891,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[8]),4);
            tracep->chgCData(oldp+892,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[9]),4);
            tracep->chgIData(oldp+893,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[0]),18);
            tracep->chgIData(oldp+894,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[1]),18);
            tracep->chgIData(oldp+895,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[2]),18);
            tracep->chgIData(oldp+896,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[3]),18);
            tracep->chgIData(oldp+897,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[4]),18);
            tracep->chgIData(oldp+898,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[5]),18);
            tracep->chgIData(oldp+899,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[6]),18);
            tracep->chgIData(oldp+900,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[7]),18);
            tracep->chgIData(oldp+901,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[8]),18);
            tracep->chgIData(oldp+902,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[9]),18);
            tracep->chgBit(oldp+903,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[0]));
            tracep->chgBit(oldp+904,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[1]));
            tracep->chgBit(oldp+905,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[2]));
            tracep->chgBit(oldp+906,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[3]));
            tracep->chgBit(oldp+907,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[4]));
            tracep->chgBit(oldp+908,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[5]));
            tracep->chgBit(oldp+909,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[6]));
            tracep->chgBit(oldp+910,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[7]));
            tracep->chgBit(oldp+911,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[8]));
            tracep->chgBit(oldp+912,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[9]));
            tracep->chgCData(oldp+913,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[0]),8);
            tracep->chgCData(oldp+914,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[1]),8);
            tracep->chgCData(oldp+915,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[2]),8);
            tracep->chgCData(oldp+916,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[3]),8);
            tracep->chgCData(oldp+917,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[4]),8);
            tracep->chgCData(oldp+918,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[5]),8);
            tracep->chgCData(oldp+919,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[6]),8);
            tracep->chgCData(oldp+920,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[7]),8);
            tracep->chgCData(oldp+921,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[8]),8);
            tracep->chgCData(oldp+922,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[9]),8);
            tracep->chgCData(oldp+923,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state),2);
            tracep->chgCData(oldp+924,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state),2);
            tracep->chgCData(oldp+925,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state),2);
            tracep->chgCData(oldp+926,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state),2);
            tracep->chgCData(oldp+927,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state),2);
            tracep->chgCData(oldp+928,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state),2);
            tracep->chgCData(oldp+929,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state),2);
            tracep->chgCData(oldp+930,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state),2);
            tracep->chgCData(oldp+931,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state),2);
            tracep->chgCData(oldp+932,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state),2);
            tracep->chgCData(oldp+933,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state),4);
            tracep->chgCData(oldp+934,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_next),4);
            tracep->chgSData(oldp+935,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x),9);
            tracep->chgSData(oldp+936,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y),9);
            tracep->chgSData(oldp+937,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x_next),9);
            tracep->chgSData(oldp+938,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y_next),9);
            tracep->chgIData(oldp+939,(((0x38000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [0U] << 9U)) 
                                        | ((0x7000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [0U] 
                                               << 6U)) 
                                           | ((0xe00U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0U] 
                                                  << 6U)) 
                                              | ((0x1c0U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [0U] 
                                                     << 3U)) 
                                                 | ((0x38U 
                                                     & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                        [0U] 
                                                        << 3U)) 
                                                    | (7U 
                                                       & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                       [0U]))))))),18);
            tracep->chgIData(oldp+940,(((0x38000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [1U] << 9U)) 
                                        | ((0x7000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [1U] 
                                               << 6U)) 
                                           | ((0xe00U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [1U] 
                                                  << 6U)) 
                                              | ((0x1c0U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [1U] 
                                                     << 3U)) 
                                                 | ((0x38U 
                                                     & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                        [1U] 
                                                        << 3U)) 
                                                    | (7U 
                                                       & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                       [1U]))))))),18);
            tracep->chgIData(oldp+941,(((0x38000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [2U] << 9U)) 
                                        | ((0x7000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [2U] 
                                               << 6U)) 
                                           | ((0xe00U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [2U] 
                                                  << 6U)) 
                                              | ((0x1c0U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [2U] 
                                                     << 3U)) 
                                                 | ((0x38U 
                                                     & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                        [2U] 
                                                        << 3U)) 
                                                    | (7U 
                                                       & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                       [2U]))))))),18);
            tracep->chgIData(oldp+942,(((0x38000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [3U] << 9U)) 
                                        | ((0x7000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [3U] 
                                               << 6U)) 
                                           | ((0xe00U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [3U] 
                                                  << 6U)) 
                                              | ((0x1c0U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [3U] 
                                                     << 3U)) 
                                                 | ((0x38U 
                                                     & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                        [3U] 
                                                        << 3U)) 
                                                    | (7U 
                                                       & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                       [3U]))))))),18);
            tracep->chgIData(oldp+943,(((0x38000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [4U] << 9U)) 
                                        | ((0x7000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [4U] 
                                               << 6U)) 
                                           | ((0xe00U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [4U] 
                                                  << 6U)) 
                                              | ((0x1c0U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [4U] 
                                                     << 3U)) 
                                                 | ((0x38U 
                                                     & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                        [4U] 
                                                        << 3U)) 
                                                    | (7U 
                                                       & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                       [4U]))))))),18);
            tracep->chgIData(oldp+944,(((0x38000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [5U] << 9U)) 
                                        | ((0x7000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [5U] 
                                               << 6U)) 
                                           | ((0xe00U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [5U] 
                                                  << 6U)) 
                                              | ((0x1c0U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [5U] 
                                                     << 3U)) 
                                                 | ((0x38U 
                                                     & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                        [5U] 
                                                        << 3U)) 
                                                    | (7U 
                                                       & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                       [5U]))))))),18);
            tracep->chgIData(oldp+945,(((0x38000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [6U] << 9U)) 
                                        | ((0x7000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [6U] 
                                               << 6U)) 
                                           | ((0xe00U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [6U] 
                                                  << 6U)) 
                                              | ((0x1c0U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [6U] 
                                                     << 3U)) 
                                                 | ((0x38U 
                                                     & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                        [6U] 
                                                        << 3U)) 
                                                    | (7U 
                                                       & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                       [6U]))))))),18);
            tracep->chgIData(oldp+946,(((0x38000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [7U] << 9U)) 
                                        | ((0x7000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [7U] 
                                               << 6U)) 
                                           | ((0xe00U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [7U] 
                                                  << 6U)) 
                                              | ((0x1c0U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [7U] 
                                                     << 3U)) 
                                                 | ((0x38U 
                                                     & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                        [7U] 
                                                        << 3U)) 
                                                    | (7U 
                                                       & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                       [7U]))))))),18);
            tracep->chgIData(oldp+947,(((0x38000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [8U] << 9U)) 
                                        | ((0x7000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [8U] 
                                               << 6U)) 
                                           | ((0xe00U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [8U] 
                                                  << 6U)) 
                                              | ((0x1c0U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [8U] 
                                                     << 3U)) 
                                                 | ((0x38U 
                                                     & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                        [8U] 
                                                        << 3U)) 
                                                    | (7U 
                                                       & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                       [8U]))))))),18);
            tracep->chgIData(oldp+948,(((0x38000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [9U] << 9U)) 
                                        | ((0x7000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [9U] 
                                               << 6U)) 
                                           | ((0xe00U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [9U] 
                                                  << 6U)) 
                                              | ((0x1c0U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [9U] 
                                                     << 3U)) 
                                                 | ((0x38U 
                                                     & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                        [9U] 
                                                        << 3U)) 
                                                    | (7U 
                                                       & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                       [9U]))))))),18);
            tracep->chgIData(oldp+949,(((0x38000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [0xaU] << 9U)) 
                                        | ((0x7000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [0xaU] 
                                               << 6U)) 
                                           | ((0xe00U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xaU] 
                                                  << 6U)) 
                                              | ((0x1c0U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [0xaU] 
                                                     << 3U)) 
                                                 | ((0x38U 
                                                     & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                        [0xaU] 
                                                        << 3U)) 
                                                    | (7U 
                                                       & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                       [0xaU]))))))),18);
            tracep->chgIData(oldp+950,(((0x38000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [0xbU] << 9U)) 
                                        | ((0x7000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [0xbU] 
                                               << 6U)) 
                                           | ((0xe00U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xbU] 
                                                  << 6U)) 
                                              | ((0x1c0U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [0xbU] 
                                                     << 3U)) 
                                                 | ((0x38U 
                                                     & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                        [0xbU] 
                                                        << 3U)) 
                                                    | (7U 
                                                       & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                       [0xbU]))))))),18);
            tracep->chgIData(oldp+951,(((0x38000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [0xcU] << 9U)) 
                                        | ((0x7000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [0xcU] 
                                               << 6U)) 
                                           | ((0xe00U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xcU] 
                                                  << 6U)) 
                                              | ((0x1c0U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [0xcU] 
                                                     << 3U)) 
                                                 | ((0x38U 
                                                     & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                        [0xcU] 
                                                        << 3U)) 
                                                    | (7U 
                                                       & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                       [0xcU]))))))),18);
            tracep->chgIData(oldp+952,(((0x38000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [0xdU] << 9U)) 
                                        | ((0x7000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [0xdU] 
                                               << 6U)) 
                                           | ((0xe00U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xdU] 
                                                  << 6U)) 
                                              | ((0x1c0U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [0xdU] 
                                                     << 3U)) 
                                                 | ((0x38U 
                                                     & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                        [0xdU] 
                                                        << 3U)) 
                                                    | (7U 
                                                       & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                       [0xdU]))))))),18);
            tracep->chgIData(oldp+953,(((0x38000U & 
                                         (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [0xeU] << 9U)) 
                                        | ((0x7000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [0xeU] 
                                               << 6U)) 
                                           | ((0xe00U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xeU] 
                                                  << 6U)) 
                                              | ((0x1c0U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [0xeU] 
                                                     << 3U)) 
                                                 | ((0x38U 
                                                     & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                        [0xeU] 
                                                        << 3U)) 
                                                    | (7U 
                                                       & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                       [0xeU]))))))),18);
            tracep->chgSData(oldp+954,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_data),16);
            tracep->chgBit(oldp+955,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_valid));
            tracep->chgSData(oldp+956,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_data),16);
            tracep->chgBit(oldp+957,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_valid));
            tracep->chgCData(oldp+958,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_data),8);
            tracep->chgBit(oldp+959,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_valid));
            tracep->chgCData(oldp+960,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data),8);
            tracep->chgBit(oldp+961,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_valid));
            tracep->chgCData(oldp+962,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state),4);
            tracep->chgCData(oldp+963,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state_next),4);
            tracep->chgCData(oldp+964,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state),4);
            tracep->chgCData(oldp+965,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state_next),4);
            tracep->chgCData(oldp+966,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state),4);
            tracep->chgCData(oldp+967,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state_next),4);
            tracep->chgCData(oldp+968,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39),6);
            tracep->chgCData(oldp+969,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15),4);
            tracep->chgCData(oldp+970,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14),6);
            tracep->chgCData(oldp+971,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x),6);
            tracep->chgBit(oldp+972,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset));
            tracep->chgBit(oldp+973,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset));
            tracep->chgBit(oldp+974,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset_reg));
            tracep->chgBit(oldp+975,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset_reg_reg));
            tracep->chgIData(oldp+976,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg),18);
            tracep->chgBit(oldp+977,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg_valid));
            tracep->chgIData(oldp+978,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg),18);
            tracep->chgBit(oldp+979,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg_valid));
            tracep->chgIData(oldp+980,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg),18);
            tracep->chgBit(oldp+981,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg_valid));
            tracep->chgIData(oldp+982,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg),18);
            tracep->chgBit(oldp+983,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg_valid));
            tracep->chgIData(oldp+984,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg),18);
            tracep->chgBit(oldp+985,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg_valid));
            tracep->chgIData(oldp+986,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg),18);
            tracep->chgBit(oldp+987,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg_valid));
            tracep->chgIData(oldp+988,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg),18);
            tracep->chgBit(oldp+989,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg_valid));
            tracep->chgIData(oldp+990,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg),18);
            tracep->chgBit(oldp+991,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg_valid));
            tracep->chgIData(oldp+992,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1),18);
            tracep->chgBit(oldp+993,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid));
            tracep->chgIData(oldp+994,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2),18);
            tracep->chgBit(oldp+995,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid));
            tracep->chgIData(oldp+996,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3),18);
            tracep->chgBit(oldp+997,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid));
            tracep->chgIData(oldp+998,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4),18);
            tracep->chgBit(oldp+999,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid));
            tracep->chgIData(oldp+1000,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5),18);
            tracep->chgBit(oldp+1001,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid));
            tracep->chgIData(oldp+1002,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6),18);
            tracep->chgBit(oldp+1003,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid));
            tracep->chgIData(oldp+1004,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7),18);
            tracep->chgBit(oldp+1005,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid));
            tracep->chgIData(oldp+1006,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8),18);
            tracep->chgBit(oldp+1007,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid));
            tracep->chgBit(oldp+1008,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_shift));
            tracep->chgSData(oldp+1009,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_x),9);
            tracep->chgSData(oldp+1010,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_y),9);
            tracep->chgBit(oldp+1011,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_inc));
            tracep->chgBit(oldp+1012,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_shift));
            tracep->chgBit(oldp+1013,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full));
            tracep->chgBit(oldp+1014,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end));
            tracep->chgBit(oldp+1015,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_w_ena));
            tracep->chgBit(oldp+1016,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move));
            tracep->chgBit(oldp+1017,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next));
            tracep->chgCData(oldp+1018,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16_next),4);
            tracep->chgCData(oldp+1019,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x_next),6);
            tracep->chgCData(oldp+1020,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y_next),6);
            tracep->chgBit(oldp+1021,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line_next));
            tracep->chgBit(oldp+1022,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena));
            tracep->chgBit(oldp+1023,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena_reg));
            tracep->chgBit(oldp+1024,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_map_read_ena));
            tracep->chgBit(oldp+1025,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_map_read_ena_reg));
            tracep->chgBit(oldp+1026,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid));
            tracep->chgCData(oldp+1027,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16),4);
            tracep->chgCData(oldp+1028,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x),6);
            tracep->chgCData(oldp+1029,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y),6);
            tracep->chgBit(oldp+1030,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line));
            tracep->chgBit(oldp+1031,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_valid));
            tracep->chgCData(oldp+1032,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_mask),4);
            tracep->chgCData(oldp+1033,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_font_x),6);
            tracep->chgCData(oldp+1034,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_font_y),6);
            tracep->chgCData(oldp+1035,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_counter_16),4);
            tracep->chgBit(oldp+1036,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_next_line));
            tracep->chgBit(oldp+1037,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_valid));
            tracep->chgSData(oldp+1038,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16),16);
            tracep->chgCData(oldp+1039,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_font_x),6);
            tracep->chgCData(oldp+1040,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_font_y),6);
            tracep->chgCData(oldp+1041,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_counter_16),4);
            tracep->chgBit(oldp+1042,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_next_line));
            tracep->chgBit(oldp+1043,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_valid));
            tracep->chgSData(oldp+1044,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16),16);
            tracep->chgBit(oldp+1045,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea));
            tracep->chgBit(oldp+1046,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii));
            tracep->chgBit(oldp+1047,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom));
            tracep->chgCData(oldp+1048,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index),5);
            tracep->chgCData(oldp+1049,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index),5);
            tracep->chgCData(oldp+1050,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index),5);
            tracep->chgCData(oldp+1051,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_font_x),6);
            tracep->chgCData(oldp+1052,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_font_y),6);
            tracep->chgCData(oldp+1053,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16),4);
            tracep->chgBit(oldp+1054,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_next_line));
            tracep->chgBit(oldp+1055,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_valid));
            tracep->chgCData(oldp+1056,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask),4);
            tracep->chgBit(oldp+1057,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_cho_sung_what_bram));
            tracep->chgBit(oldp+1058,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_custom_what_bram));
            tracep->chgBit(oldp+1059,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_korea));
            tracep->chgBit(oldp+1060,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_ascii));
            tracep->chgBit(oldp+1061,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_custom));
            tracep->chgCData(oldp+1062,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_font_x),6);
            tracep->chgCData(oldp+1063,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_font_y),6);
            tracep->chgCData(oldp+1064,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_counter_16),4);
            tracep->chgBit(oldp+1065,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_next_line));
            tracep->chgBit(oldp+1066,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid));
            tracep->chgBit(oldp+1067,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea));
            tracep->chgBit(oldp+1068,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_ascii));
            tracep->chgBit(oldp+1069,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_custom));
            tracep->chgSData(oldp+1070,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap),16);
            tracep->chgCData(oldp+1071,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_ascii_font_bitmap),8);
            tracep->chgCData(oldp+1072,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap),8);
            tracep->chgCData(oldp+1073,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x),6);
            tracep->chgCData(oldp+1074,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y),6);
            tracep->chgCData(oldp+1075,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_counter_16),4);
            tracep->chgBit(oldp+1076,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line));
            tracep->chgCData(oldp+1077,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set),4);
            tracep->chgCData(oldp+1078,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_set),4);
            tracep->chgCData(oldp+1079,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set),4);
            tracep->chgSData(oldp+1080,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_bram_ad),10);
            tracep->chgSData(oldp+1081,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_bram_ad),10);
            tracep->chgSData(oldp+1082,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_bram_ad),10);
            tracep->chgSData(oldp+1083,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bram_ad),10);
            tracep->chgSData(oldp+1084,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bram_ad),10);
            tracep->chgSData(oldp+1085,((0x3fffU & 
                                         ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                          - (IData)(0x2c00U)))),14);
            tracep->chgSData(oldp+1086,((0x3fffU & 
                                         (((IData)(0x2493U) 
                                           * (0x3fffU 
                                              & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                 - (IData)(0x2c00U)))) 
                                          >> 0x12U))),14);
            tracep->chgCData(oldp+1087,((0x1fU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                  - 
                                                  (((0x3ff0U 
                                                     & (((IData)(0x2493U) 
                                                         * 
                                                         (0x3fffU 
                                                          & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                             - (IData)(0x2c00U)))) 
                                                        >> 0xeU)) 
                                                    + 
                                                    (0x3ff8U 
                                                     & (((IData)(0x2493U) 
                                                         * 
                                                         (0x3fffU 
                                                          & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                             - (IData)(0x2c00U)))) 
                                                        >> 0xfU))) 
                                                   + 
                                                   (0x3ffcU 
                                                    & (((IData)(0x2493U) 
                                                        * 
                                                        (0x3fffU 
                                                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                            - (IData)(0x2c00U)))) 
                                                       >> 0x10U)))))),5);
            tracep->chgCData(oldp+1088,((0x1fU & (((IData)(0xc31U) 
                                                   * 
                                                   (0x3fffU 
                                                    & (((IData)(0x2493U) 
                                                        * 
                                                        (0x3fffU 
                                                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                            - (IData)(0x2c00U)))) 
                                                       >> 0x12U))) 
                                                  >> 0x10U))),5);
            tracep->chgCData(oldp+1089,((0x1fU & ((
                                                   ((IData)(0x2493U) 
                                                    * 
                                                    (0x3fffU 
                                                     & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                        - (IData)(0x2c00U)))) 
                                                   >> 0x12U) 
                                                  - 
                                                  (((0x1f0U 
                                                     & (((IData)(0xc31U) 
                                                         * 
                                                         (0x3fffU 
                                                          & (((IData)(0x2493U) 
                                                              * 
                                                              (0x3fffU 
                                                               & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                                  - (IData)(0x2c00U)))) 
                                                             >> 0x12U))) 
                                                        >> 0xcU)) 
                                                    + 
                                                    (0x7cU 
                                                     & (((IData)(0xc31U) 
                                                         * 
                                                         (0x3fffU 
                                                          & (((IData)(0x2493U) 
                                                              * 
                                                              (0x3fffU 
                                                               & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                                  - (IData)(0x2c00U)))) 
                                                             >> 0x12U))) 
                                                        >> 0xeU))) 
                                                   + 
                                                   (((IData)(0xc31U) 
                                                     * 
                                                     (0x3fffU 
                                                      & (((IData)(0x2493U) 
                                                          * 
                                                          (0x3fffU 
                                                           & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                              - (IData)(0x2c00U)))) 
                                                         >> 0x12U))) 
                                                    >> 0x10U))))),5);
            tracep->chgBit(oldp+1090,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__is_korea_wire));
            tracep->chgBit(oldp+1091,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__is_ascii_wire));
            tracep->chgBit(oldp+1092,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__is_custom_wire));
            tracep->chgBit(oldp+1093,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix));
            tracep->chgCData(oldp+1094,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4),3);
            tracep->chgIData(oldp+1095,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB),18);
            tracep->chgBit(oldp+1096,((0U != (0xffU 
                                              & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0xcU]))));
            tracep->chgQData(oldp+1097,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1099,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1100,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1101,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1102,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1103,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1104,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__main_state),4);
            tracep->chgCData(oldp+1105,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1106,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1107,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1108,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1109,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1110,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1111,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1112,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__rgb_r_state_counter),4);
            tracep->chgBit(oldp+1113,((0U != (0xffU 
                                              & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0xeU]))));
            tracep->chgQData(oldp+1114,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1116,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1117,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1118,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1119,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1120,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1121,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__main_state),4);
            tracep->chgCData(oldp+1122,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1123,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1124,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1125,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1126,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1127,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1128,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1129,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__rgb_r_state_counter),4);
            tracep->chgBit(oldp+1130,((0U != (0xffU 
                                              & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0x10U]))));
            tracep->chgQData(oldp+1131,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1133,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1134,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1135,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1136,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1137,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1138,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__main_state),4);
            tracep->chgCData(oldp+1139,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1140,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1141,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1142,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1143,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1144,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1145,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1146,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__rgb_r_state_counter),4);
            tracep->chgBit(oldp+1147,((0U != (0xffU 
                                              & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0x12U]))));
            tracep->chgQData(oldp+1148,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1150,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1151,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1152,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1153,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1154,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1155,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__main_state),4);
            tracep->chgCData(oldp+1156,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1157,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1158,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1159,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1160,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1161,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1162,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1163,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__rgb_r_state_counter),4);
            tracep->chgBit(oldp+1164,((0U != (0xffU 
                                              & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0x14U]))));
            tracep->chgQData(oldp+1165,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1167,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1168,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1169,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1170,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1171,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1172,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__main_state),4);
            tracep->chgCData(oldp+1173,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1174,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1175,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1176,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1177,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1178,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1179,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1180,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__rgb_r_state_counter),4);
            tracep->chgBit(oldp+1181,((0U != (0xffU 
                                              & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0x16U]))));
            tracep->chgQData(oldp+1182,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1184,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1185,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1186,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1187,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1188,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1189,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__main_state),4);
            tracep->chgCData(oldp+1190,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1191,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1192,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1193,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1194,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1195,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1196,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1197,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__rgb_r_state_counter),4);
            tracep->chgBit(oldp+1198,((0U != (0xffU 
                                              & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0x18U]))));
            tracep->chgQData(oldp+1199,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1201,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1202,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1203,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1204,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1205,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1206,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__main_state),4);
            tracep->chgCData(oldp+1207,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1208,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1209,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1210,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1211,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1212,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1213,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1214,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__rgb_r_state_counter),4);
            tracep->chgBit(oldp+1215,((0U != (0xffU 
                                              & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0x1aU]))));
            tracep->chgQData(oldp+1216,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1218,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1219,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1220,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1221,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1222,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1223,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__main_state),4);
            tracep->chgCData(oldp+1224,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1225,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1226,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1227,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1228,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1229,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1230,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1231,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__rgb_r_state_counter),4);
            tracep->chgBit(oldp+1232,((0U != (0xffU 
                                              & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0x1cU]))));
            tracep->chgQData(oldp+1233,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1235,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1236,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1237,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1238,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1239,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1240,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__main_state),4);
            tracep->chgCData(oldp+1241,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1242,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1243,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1244,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1245,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1246,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1247,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1248,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__rgb_r_state_counter),4);
            tracep->chgBit(oldp+1249,((0U != (0xffU 
                                              & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                              [0x1eU]))));
            tracep->chgQData(oldp+1250,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1252,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1253,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1254,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1255,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1256,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1257,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__main_state),4);
            tracep->chgCData(oldp+1258,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1259,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1260,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1261,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1262,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1263,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1264,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1265,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__rgb_r_state_counter),4);
            tracep->chgSData(oldp+1266,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count),9);
            tracep->chgBit(oldp+1267,(((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
                                       & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
                                          & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))))));
            tracep->chgBit(oldp+1268,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1269,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_state))));
            tracep->chgBit(oldp+1270,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1271,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1272,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1273,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1275,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1276,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1277,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_front_256),9);
            tracep->chgSData(oldp+1278,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_rear_256),9);
            tracep->chgCData(oldp+1279,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_front_128),8);
            tracep->chgBit(oldp+1280,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_front_128_inc_ena));
            tracep->chgCData(oldp+1281,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_rear_128),8);
            tracep->chgBit(oldp+1282,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+1283,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_full_128));
            tracep->chgCData(oldp+1284,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_state),4);
            tracep->chgCData(oldp+1285,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_state_next),4);
            tracep->chgCData(oldp+1286,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_state),4);
            tracep->chgCData(oldp+1287,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_state_next),4);
            tracep->chgCData(oldp+1288,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompress_state),4);
            tracep->chgCData(oldp+1289,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompress_state_next),4);
            tracep->chgQData(oldp+1290,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1292,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1293,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1294,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgBit(oldp+1295,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+1296,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1298,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1299,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1300,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgBit(oldp+1301,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgCData(oldp+1302,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_8),8);
            tracep->chgBit(oldp+1303,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_8_valid));
            tracep->chgCData(oldp+1304,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1305,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1306,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1307,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1308,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1309,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1310,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1311,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1312,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1313,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1314,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1315,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_end_req));
            tracep->chgCData(oldp+1316,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_8),8);
            tracep->chgBit(oldp+1317,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_8_valid));
            tracep->chgBit(oldp+1318,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_8_ready));
            tracep->chgSData(oldp+1319,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count),9);
            tracep->chgBit(oldp+1320,(((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
                                       & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
                                          & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))))));
            tracep->chgBit(oldp+1321,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1322,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_state))));
            tracep->chgBit(oldp+1323,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1324,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1325,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1326,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1328,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1329,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1330,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_front_256),9);
            tracep->chgSData(oldp+1331,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_rear_256),9);
            tracep->chgCData(oldp+1332,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_front_128),8);
            tracep->chgBit(oldp+1333,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_front_128_inc_ena));
            tracep->chgCData(oldp+1334,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_rear_128),8);
            tracep->chgBit(oldp+1335,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+1336,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_full_128));
            tracep->chgCData(oldp+1337,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_state),4);
            tracep->chgCData(oldp+1338,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_state_next),4);
            tracep->chgCData(oldp+1339,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_state),4);
            tracep->chgCData(oldp+1340,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_state_next),4);
            tracep->chgCData(oldp+1341,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompress_state),4);
            tracep->chgCData(oldp+1342,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompress_state_next),4);
            tracep->chgQData(oldp+1343,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1345,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1346,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1347,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgBit(oldp+1348,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+1349,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1351,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1352,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1353,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgBit(oldp+1354,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgCData(oldp+1355,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_8),8);
            tracep->chgBit(oldp+1356,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_8_valid));
            tracep->chgCData(oldp+1357,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1358,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1359,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1360,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1361,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1362,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1363,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1364,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1365,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1366,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1367,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1368,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_end_req));
            tracep->chgCData(oldp+1369,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_8),8);
            tracep->chgBit(oldp+1370,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_8_valid));
            tracep->chgBit(oldp+1371,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_8_ready));
            tracep->chgSData(oldp+1372,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count),9);
            tracep->chgBit(oldp+1373,(((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
                                       & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
                                          & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))))));
            tracep->chgBit(oldp+1374,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1375,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_state))));
            tracep->chgBit(oldp+1376,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1377,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1378,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1379,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1381,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1382,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1383,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_front_256),9);
            tracep->chgSData(oldp+1384,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_rear_256),9);
            tracep->chgCData(oldp+1385,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_front_128),8);
            tracep->chgBit(oldp+1386,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_front_128_inc_ena));
            tracep->chgCData(oldp+1387,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_rear_128),8);
            tracep->chgBit(oldp+1388,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+1389,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_full_128));
            tracep->chgCData(oldp+1390,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_state),4);
            tracep->chgCData(oldp+1391,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_state_next),4);
            tracep->chgCData(oldp+1392,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_state),4);
            tracep->chgCData(oldp+1393,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_state_next),4);
            tracep->chgCData(oldp+1394,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompress_state),4);
            tracep->chgCData(oldp+1395,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompress_state_next),4);
            tracep->chgQData(oldp+1396,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1398,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1399,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1400,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgBit(oldp+1401,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+1402,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1404,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1405,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1406,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgBit(oldp+1407,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgCData(oldp+1408,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_8),8);
            tracep->chgBit(oldp+1409,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_8_valid));
            tracep->chgCData(oldp+1410,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1411,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1412,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1413,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1414,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1415,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1416,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1417,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1418,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1419,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1420,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1421,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_end_req));
            tracep->chgCData(oldp+1422,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_8),8);
            tracep->chgBit(oldp+1423,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_8_valid));
            tracep->chgBit(oldp+1424,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_8_ready));
            tracep->chgSData(oldp+1425,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count),9);
            tracep->chgBit(oldp+1426,(((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
                                       & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
                                          & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))))));
            tracep->chgBit(oldp+1427,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1428,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_state))));
            tracep->chgBit(oldp+1429,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1430,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1431,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1432,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1434,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1435,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1436,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_front_256),9);
            tracep->chgSData(oldp+1437,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_rear_256),9);
            tracep->chgCData(oldp+1438,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_front_128),8);
            tracep->chgBit(oldp+1439,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_front_128_inc_ena));
            tracep->chgCData(oldp+1440,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_rear_128),8);
            tracep->chgBit(oldp+1441,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+1442,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_full_128));
            tracep->chgCData(oldp+1443,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_state),4);
            tracep->chgCData(oldp+1444,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_state_next),4);
            tracep->chgCData(oldp+1445,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_state),4);
            tracep->chgCData(oldp+1446,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_state_next),4);
            tracep->chgCData(oldp+1447,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompress_state),4);
            tracep->chgCData(oldp+1448,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompress_state_next),4);
            tracep->chgQData(oldp+1449,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1451,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1452,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1453,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgBit(oldp+1454,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+1455,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1457,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1458,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1459,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgBit(oldp+1460,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgCData(oldp+1461,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_8),8);
            tracep->chgBit(oldp+1462,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_8_valid));
            tracep->chgCData(oldp+1463,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1464,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1465,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1466,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1467,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1468,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1469,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1470,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1471,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1472,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1473,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1474,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_end_req));
            tracep->chgCData(oldp+1475,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_8),8);
            tracep->chgBit(oldp+1476,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_8_valid));
            tracep->chgBit(oldp+1477,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_8_ready));
            tracep->chgSData(oldp+1478,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count),9);
            tracep->chgBit(oldp+1479,(((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
                                       & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
                                          & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))))));
            tracep->chgBit(oldp+1480,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1481,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_state))));
            tracep->chgBit(oldp+1482,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1483,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1484,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1485,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1487,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1488,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1489,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_front_256),9);
            tracep->chgSData(oldp+1490,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_rear_256),9);
            tracep->chgCData(oldp+1491,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_front_128),8);
            tracep->chgBit(oldp+1492,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_front_128_inc_ena));
            tracep->chgCData(oldp+1493,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_rear_128),8);
            tracep->chgBit(oldp+1494,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+1495,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_full_128));
            tracep->chgCData(oldp+1496,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_state),4);
            tracep->chgCData(oldp+1497,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_state_next),4);
            tracep->chgCData(oldp+1498,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_state),4);
            tracep->chgCData(oldp+1499,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_state_next),4);
            tracep->chgCData(oldp+1500,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompress_state),4);
            tracep->chgCData(oldp+1501,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompress_state_next),4);
            tracep->chgQData(oldp+1502,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1504,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1505,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1506,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgBit(oldp+1507,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+1508,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1510,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1511,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1512,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgBit(oldp+1513,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgCData(oldp+1514,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_8),8);
            tracep->chgBit(oldp+1515,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_8_valid));
            tracep->chgCData(oldp+1516,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1517,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1518,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1519,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1520,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1521,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1522,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1523,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1524,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1525,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1526,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1527,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_end_req));
            tracep->chgCData(oldp+1528,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_8),8);
            tracep->chgBit(oldp+1529,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_8_valid));
            tracep->chgBit(oldp+1530,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_8_ready));
            tracep->chgSData(oldp+1531,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count),9);
            tracep->chgBit(oldp+1532,(((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
                                       & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
                                          & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))))));
            tracep->chgBit(oldp+1533,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1534,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_state))));
            tracep->chgBit(oldp+1535,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1536,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1537,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1538,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1540,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1541,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1542,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_front_256),9);
            tracep->chgSData(oldp+1543,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_rear_256),9);
            tracep->chgCData(oldp+1544,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_front_128),8);
            tracep->chgBit(oldp+1545,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_front_128_inc_ena));
            tracep->chgCData(oldp+1546,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_rear_128),8);
            tracep->chgBit(oldp+1547,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+1548,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_full_128));
            tracep->chgCData(oldp+1549,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_state),4);
            tracep->chgCData(oldp+1550,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_state_next),4);
            tracep->chgCData(oldp+1551,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_state),4);
            tracep->chgCData(oldp+1552,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_state_next),4);
            tracep->chgCData(oldp+1553,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompress_state),4);
            tracep->chgCData(oldp+1554,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompress_state_next),4);
            tracep->chgQData(oldp+1555,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1557,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1558,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1559,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgBit(oldp+1560,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+1561,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1563,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1564,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1565,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgBit(oldp+1566,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgCData(oldp+1567,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_8),8);
            tracep->chgBit(oldp+1568,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_8_valid));
            tracep->chgCData(oldp+1569,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1570,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1571,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1572,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1573,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1574,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1575,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1576,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1577,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1578,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1579,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1580,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_end_req));
            tracep->chgCData(oldp+1581,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_8),8);
            tracep->chgBit(oldp+1582,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_8_valid));
            tracep->chgBit(oldp+1583,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_8_ready));
            tracep->chgBit(oldp+1584,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_end_req));
            tracep->chgSData(oldp+1585,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count),9);
            tracep->chgBit(oldp+1586,(((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
                                       & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
                                          & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))))));
            tracep->chgBit(oldp+1587,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1588,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_state))));
            tracep->chgBit(oldp+1589,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1590,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1591,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1592,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1594,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1595,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1596,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_front_256),9);
            tracep->chgSData(oldp+1597,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_rear_256),9);
            tracep->chgCData(oldp+1598,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_front_128),8);
            tracep->chgBit(oldp+1599,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_front_128_inc_ena));
            tracep->chgCData(oldp+1600,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_rear_128),8);
            tracep->chgBit(oldp+1601,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+1602,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_full_128));
            tracep->chgCData(oldp+1603,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_state),4);
            tracep->chgCData(oldp+1604,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_state_next),4);
            tracep->chgCData(oldp+1605,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_state),4);
            tracep->chgCData(oldp+1606,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_state_next),4);
            tracep->chgCData(oldp+1607,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompress_state),4);
            tracep->chgCData(oldp+1608,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompress_state_next),4);
            tracep->chgQData(oldp+1609,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1611,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1612,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1613,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgBit(oldp+1614,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+1615,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1617,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1618,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1619,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgBit(oldp+1620,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgCData(oldp+1621,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_8),8);
            tracep->chgBit(oldp+1622,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_8_valid));
            tracep->chgCData(oldp+1623,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1624,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1625,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1626,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1627,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1628,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1629,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1630,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1631,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1632,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1633,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1634,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_end_req));
            tracep->chgCData(oldp+1635,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_8),8);
            tracep->chgBit(oldp+1636,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_8_valid));
            tracep->chgBit(oldp+1637,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_8_ready));
            tracep->chgBit(oldp+1638,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_end_req));
            tracep->chgSData(oldp+1639,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count),9);
            tracep->chgBit(oldp+1640,(((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
                                       & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
                                          & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter))))));
            tracep->chgBit(oldp+1641,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1642,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_state))));
            tracep->chgBit(oldp+1643,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1644,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1645,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1646,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1648,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1649,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1650,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_front_256),9);
            tracep->chgSData(oldp+1651,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_rear_256),9);
            tracep->chgCData(oldp+1652,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_front_128),8);
            tracep->chgBit(oldp+1653,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_front_128_inc_ena));
            tracep->chgCData(oldp+1654,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_rear_128),8);
            tracep->chgBit(oldp+1655,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+1656,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_full_128));
            tracep->chgCData(oldp+1657,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_state),4);
            tracep->chgCData(oldp+1658,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_state_next),4);
            tracep->chgCData(oldp+1659,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_state),4);
            tracep->chgCData(oldp+1660,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_state_next),4);
            tracep->chgCData(oldp+1661,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompress_state),4);
            tracep->chgCData(oldp+1662,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompress_state_next),4);
            tracep->chgQData(oldp+1663,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1665,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1666,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1667,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgBit(oldp+1668,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+1669,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1671,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1672,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1673,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgBit(oldp+1674,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgCData(oldp+1675,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_8),8);
            tracep->chgBit(oldp+1676,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_8_valid));
            tracep->chgCData(oldp+1677,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1678,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1679,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1680,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1681,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1682,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1683,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1684,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1685,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1686,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1687,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1688,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_end_req));
            tracep->chgCData(oldp+1689,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_8),8);
            tracep->chgBit(oldp+1690,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_8_valid));
            tracep->chgBit(oldp+1691,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_8_ready));
            tracep->chgBit(oldp+1692,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__tdm_match));
            tracep->chgBit(oldp+1693,(((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__tdm_match) 
                                       & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
                                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master)))));
            tracep->chgBit(oldp+1694,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1695,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_state))));
            tracep->chgBit(oldp+1696,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1697,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1698,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1699,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1701,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1702,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1703,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_front_256),9);
            tracep->chgBit(oldp+1704,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_front_256_inc_ena));
            tracep->chgSData(oldp+1705,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_rear_256),9);
            tracep->chgBit(oldp+1706,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+1707,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_full_256));
            tracep->chgCData(oldp+1708,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_front_128),8);
            tracep->chgCData(oldp+1709,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_rear_128),8);
            tracep->chgCData(oldp+1710,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_state),4);
            tracep->chgCData(oldp+1711,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_state_next),4);
            tracep->chgCData(oldp+1712,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_state),4);
            tracep->chgCData(oldp+1713,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_state_next),4);
            tracep->chgCData(oldp+1714,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompress_state),4);
            tracep->chgCData(oldp+1715,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompress_state_next),4);
            tracep->chgQData(oldp+1716,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1718,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1719,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1720,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgBit(oldp+1721,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+1722,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1724,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1725,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1726,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgBit(oldp+1727,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgCData(oldp+1728,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_8),8);
            tracep->chgBit(oldp+1729,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_8_valid));
            tracep->chgCData(oldp+1730,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1731,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1732,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1733,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1734,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1735,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1736,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1737,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1738,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1739,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1740,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1741,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_end_req));
            tracep->chgCData(oldp+1742,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_8),8);
            tracep->chgBit(oldp+1743,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_8_valid));
            tracep->chgBit(oldp+1744,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_8_ready));
            tracep->chgBit(oldp+1745,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__tdm_match));
            tracep->chgBit(oldp+1746,(((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__tdm_match) 
                                       & (((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
                                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master)))));
            tracep->chgBit(oldp+1747,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1748,((1U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_state))));
            tracep->chgBit(oldp+1749,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1750,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1751,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1752,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1754,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1755,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1756,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_front_256),9);
            tracep->chgBit(oldp+1757,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_front_256_inc_ena));
            tracep->chgSData(oldp+1758,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_rear_256),9);
            tracep->chgBit(oldp+1759,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+1760,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_full_256));
            tracep->chgCData(oldp+1761,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_front_128),8);
            tracep->chgCData(oldp+1762,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_rear_128),8);
            tracep->chgCData(oldp+1763,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_state),4);
            tracep->chgCData(oldp+1764,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_state_next),4);
            tracep->chgCData(oldp+1765,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_state),4);
            tracep->chgCData(oldp+1766,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_state_next),4);
            tracep->chgCData(oldp+1767,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompress_state),4);
            tracep->chgCData(oldp+1768,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompress_state_next),4);
            tracep->chgQData(oldp+1769,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1771,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1772,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1773,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgBit(oldp+1774,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+1775,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1777,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1778,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1779,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgBit(oldp+1780,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgCData(oldp+1781,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_8),8);
            tracep->chgBit(oldp+1782,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_8_valid));
            tracep->chgCData(oldp+1783,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1784,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1785,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1786,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1787,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1788,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1789,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1790,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1791,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1792,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1793,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1794,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_end_req));
            tracep->chgCData(oldp+1795,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_8),8);
            tracep->chgBit(oldp+1796,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_8_valid));
            tracep->chgBit(oldp+1797,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_8_ready));
            tracep->chgBit(oldp+1798,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_end_req));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [2U] | vlTOPp->__Vm_traceActivity
                         [4U]))) {
            tracep->chgBit(oldp+1799,(((((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_lut)) 
                                        & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb))) 
                                       & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)))));
            tracep->chgBit(oldp+1800,((((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram4)) 
                                       & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)))));
            tracep->chgBit(oldp+1801,((((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram5)) 
                                       & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)))));
            tracep->chgBit(oldp+1802,((((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram6)) 
                                       & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)))));
            tracep->chgBit(oldp+1803,((((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram13)) 
                                       & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)))));
            tracep->chgBit(oldp+1804,((((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_font_map)) 
                                       & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+1805,(vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr),32);
            tracep->chgIData(oldp+1806,((((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_prefetch) 
                                          | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rinst))
                                          ? (0xfffffffcU 
                                             & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_pc)
                                          : (0xfffffffcU 
                                             & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1))),32);
            tracep->chgIData(oldp+1807,(vlTOPp->Game_Console_TOP__DOT__cpu_la_wdata),32);
            tracep->chgCData(oldp+1808,(vlTOPp->Game_Console_TOP__DOT__cpu_la_wstrb),4);
            tracep->chgBit(oldp+1809,(vlTOPp->Game_Console_TOP__DOT__cpu_trap));
            tracep->chgBit(oldp+1810,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_valid));
            tracep->chgIData(oldp+1811,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn),32);
            tracep->chgIData(oldp+1812,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1),32);
            tracep->chgIData(oldp+1813,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2),32);
            tracep->chgIData(oldp+1814,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__eoi),32);
            tracep->chgQData(oldp+1815,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__count_cycle),64);
            tracep->chgQData(oldp+1817,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__count_instr),64);
            tracep->chgIData(oldp+1819,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_pc),32);
            tracep->chgIData(oldp+1820,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_next_pc),32);
            tracep->chgIData(oldp+1821,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_out),32);
            tracep->chgCData(oldp+1822,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_sh),5);
            tracep->chgIData(oldp+1823,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_pc),32);
            tracep->chgBit(oldp+1824,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_delay));
            tracep->chgBit(oldp+1825,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_active));
            tracep->chgIData(oldp+1826,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_mask),32);
            tracep->chgIData(oldp+1827,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_pending),32);
            tracep->chgIData(oldp+1828,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__timer),32);
            tracep->chgBit(oldp+1829,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_wait));
            tracep->chgBit(oldp+1830,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_wait));
            tracep->chgBit(oldp+1831,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_int_wr));
            tracep->chgIData(oldp+1832,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_int_rd),32);
            tracep->chgBit(oldp+1833,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_wait) 
                                       | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_wait))));
            tracep->chgBit(oldp+1834,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_int_ready));
            tracep->chgCData(oldp+1835,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_wordsize),2);
            tracep->chgIData(oldp+1836,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_q),32);
            tracep->chgBit(oldp+1837,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_prefetch));
            tracep->chgBit(oldp+1838,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rinst));
            tracep->chgBit(oldp+1839,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rdata));
            tracep->chgBit(oldp+1840,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_wdata));
            tracep->chgBit(oldp+1841,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_prefetch) 
                                       | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rinst) 
                                          | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rdata) 
                                             | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_wdata))))));
            tracep->chgBit(oldp+1842,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lui));
            tracep->chgBit(oldp+1843,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_auipc));
            tracep->chgBit(oldp+1844,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_jal));
            tracep->chgBit(oldp+1845,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_jalr));
            tracep->chgBit(oldp+1846,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_beq));
            tracep->chgBit(oldp+1847,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bne));
            tracep->chgBit(oldp+1848,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_blt));
            tracep->chgBit(oldp+1849,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bge));
            tracep->chgBit(oldp+1850,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bltu));
            tracep->chgBit(oldp+1851,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bgeu));
            tracep->chgBit(oldp+1852,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lb));
            tracep->chgBit(oldp+1853,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lh));
            tracep->chgBit(oldp+1854,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lw));
            tracep->chgBit(oldp+1855,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lbu));
            tracep->chgBit(oldp+1856,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lhu));
            tracep->chgBit(oldp+1857,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sb));
            tracep->chgBit(oldp+1858,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sh));
            tracep->chgBit(oldp+1859,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sw));
            tracep->chgBit(oldp+1860,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_addi));
            tracep->chgBit(oldp+1861,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_slti));
            tracep->chgBit(oldp+1862,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sltiu));
            tracep->chgBit(oldp+1863,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_xori));
            tracep->chgBit(oldp+1864,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_ori));
            tracep->chgBit(oldp+1865,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_andi));
            tracep->chgBit(oldp+1866,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_slli));
            tracep->chgBit(oldp+1867,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_srli));
            tracep->chgBit(oldp+1868,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_srai));
            tracep->chgBit(oldp+1869,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_add));
            tracep->chgBit(oldp+1870,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sub));
            tracep->chgBit(oldp+1871,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sll));
            tracep->chgBit(oldp+1872,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_slt));
            tracep->chgBit(oldp+1873,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sltu));
            tracep->chgBit(oldp+1874,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_xor));
            tracep->chgBit(oldp+1875,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_srl));
            tracep->chgBit(oldp+1876,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sra));
            tracep->chgBit(oldp+1877,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_or));
            tracep->chgBit(oldp+1878,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_and));
            tracep->chgBit(oldp+1879,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdcycle));
            tracep->chgBit(oldp+1880,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdcycleh));
            tracep->chgBit(oldp+1881,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdinstr));
            tracep->chgBit(oldp+1882,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdinstrh));
            tracep->chgBit(oldp+1883,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_ecall_ebreak));
            tracep->chgBit(oldp+1884,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_getq));
            tracep->chgBit(oldp+1885,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_setq));
            tracep->chgBit(oldp+1886,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_retirq));
            tracep->chgBit(oldp+1887,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_maskirq));
            tracep->chgBit(oldp+1888,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_waitirq));
            tracep->chgBit(oldp+1889,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_timer));
            tracep->chgBit(oldp+1890,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_trap));
            tracep->chgCData(oldp+1891,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rd),6);
            tracep->chgCData(oldp+1892,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs2),5);
            tracep->chgIData(oldp+1893,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_imm),32);
            tracep->chgIData(oldp+1894,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_imm_j),32);
            tracep->chgBit(oldp+1895,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_trigger));
            tracep->chgBit(oldp+1896,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_trigger_q));
            tracep->chgBit(oldp+1897,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_pseudo_trigger));
            tracep->chgBit(oldp+1898,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__compressed_instr));
            tracep->chgBit(oldp+1899,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_lui_auipc_jal));
            tracep->chgBit(oldp+1900,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_lb_lh_lw_lbu_lhu));
            tracep->chgBit(oldp+1901,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_slli_srli_srai));
            tracep->chgBit(oldp+1902,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
            tracep->chgBit(oldp+1903,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_sb_sh_sw));
            tracep->chgBit(oldp+1904,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_sll_srl_sra));
            tracep->chgBit(oldp+1905,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
            tracep->chgBit(oldp+1906,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_slti_blt_slt));
            tracep->chgBit(oldp+1907,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_sltiu_bltu_sltu));
            tracep->chgBit(oldp+1908,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu));
            tracep->chgBit(oldp+1909,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_lbu_lhu_lw));
            tracep->chgBit(oldp+1910,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_alu_reg_imm));
            tracep->chgBit(oldp+1911,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_alu_reg_reg));
            tracep->chgBit(oldp+1912,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_compare));
            tracep->chgBit(oldp+1913,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
            tracep->chgQData(oldp+1914,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr),64);
            tracep->chgQData(oldp+1916,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_ascii_instr),64);
            tracep->chgIData(oldp+1918,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_imm),32);
            tracep->chgCData(oldp+1919,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_rs2),5);
            tracep->chgCData(oldp+1920,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_rd),5);
            tracep->chgIData(oldp+1921,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_rs1val),32);
            tracep->chgIData(oldp+1922,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_rs2val),32);
            tracep->chgBit(oldp+1923,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_rs1val_valid));
            tracep->chgBit(oldp+1924,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_rs2val_valid));
            tracep->chgBit(oldp+1925,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__launch_next_insn));
            tracep->chgCData(oldp+1926,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpu_state),8);
            tracep->chgCData(oldp+1927,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_state),2);
            tracep->chgWData(oldp+1928,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_ascii_state),128);
            tracep->chgBit(oldp+1932,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__set_mem_do_rinst));
            tracep->chgBit(oldp+1933,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__set_mem_do_rdata));
            tracep->chgBit(oldp+1934,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__set_mem_do_wdata));
            tracep->chgBit(oldp+1935,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_store));
            tracep->chgBit(oldp+1936,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_stalu));
            tracep->chgBit(oldp+1937,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_branch));
            tracep->chgBit(oldp+1938,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_compr));
            tracep->chgBit(oldp+1939,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_is_lu));
            tracep->chgBit(oldp+1940,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_is_lh));
            tracep->chgBit(oldp+1941,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_is_lb));
            tracep->chgCData(oldp+1942,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_rd),6);
            tracep->chgIData(oldp+1943,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__current_pc),32);
            tracep->chgCData(oldp+1944,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_timeout_counter),4);
            tracep->chgBit(oldp+1945,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_timeout));
            tracep->chgIData(oldp+1946,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_irq_pending),32);
            tracep->chgBit(oldp+1947,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__do_waitirq));
            tracep->chgIData(oldp+1948,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out),32);
            tracep->chgIData(oldp+1949,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out_q),32);
            tracep->chgBit(oldp+1950,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out_0));
            tracep->chgIData(oldp+1951,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sub)
                                          ? (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
                                             - vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2)
                                          : (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
                                             + vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2))),32);
            tracep->chgIData(oldp+1952,((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
                                         << (0x1fU 
                                             & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2))),32);
            tracep->chgIData(oldp+1953,((IData)((0x1ffffffffULL 
                                                 & VL_SHIFTRS_QQI(33,33,5, 
                                                                  (((QData)((IData)(
                                                                                (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sra) 
                                                                                | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_srai)) 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
                                                                                >> 0x1fU)))) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1))), 
                                                                  (0x1fU 
                                                                   & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2))))),32);
            tracep->chgBit(oldp+1954,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_eq));
            tracep->chgBit(oldp+1955,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_ltu));
            tracep->chgBit(oldp+1956,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_lts));
            tracep->chgBit(oldp+1957,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_write));
            tracep->chgIData(oldp+1958,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_wrdata),32);
            tracep->chgIData(oldp+1959,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_rs1),32);
            tracep->chgIData(oldp+1960,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_rs2),32);
            tracep->chgBit(oldp+1961,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mul));
            tracep->chgBit(oldp+1962,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh));
            tracep->chgBit(oldp+1963,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu));
            tracep->chgBit(oldp+1964,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu));
            tracep->chgBit(oldp+1965,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mul) 
                                       | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
                                          | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu) 
                                             | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu))))));
            tracep->chgBit(oldp+1966,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_any_mulh));
            tracep->chgBit(oldp+1967,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
                                       | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu))));
            tracep->chgBit(oldp+1968,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_div));
            tracep->chgBit(oldp+1969,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_divu));
            tracep->chgBit(oldp+1970,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_rem));
            tracep->chgBit(oldp+1971,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_remu));
            tracep->chgBit(oldp+1972,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_div) 
                                       | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_divu) 
                                          | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_rem) 
                                             | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_remu))))));
            tracep->chgBit(oldp+1973,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__start));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+1974,(vlTOPp->Game_Console_TOP__DOT__cache_cpu_ready));
            tracep->chgIData(oldp+1975,(vlTOPp->Game_Console_TOP__DOT__cache_cpu_rdata),32);
            tracep->chgBit(oldp+1976,(vlTOPp->Game_Console_TOP__DOT__cpu_la_read));
            tracep->chgBit(oldp+1977,(vlTOPp->Game_Console_TOP__DOT__cpu_la_write));
            tracep->chgBit(oldp+1978,(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid));
            tracep->chgBit(oldp+1979,(vlTOPp->Game_Console_TOP__DOT__dec_emem_ready));
            tracep->chgIData(oldp+1980,(vlTOPp->Game_Console_TOP__DOT__cache_emem_addr),32);
            tracep->chgIData(oldp+1981,(vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata),32);
            tracep->chgIData(oldp+1982,(vlTOPp->Game_Console_TOP__DOT__dec_emem_rdata),32);
            tracep->chgCData(oldp+1983,(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb),4);
            tracep->chgCData(oldp+1984,(vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_len),8);
            tracep->chgBit(oldp+1985,(vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_en));
            tracep->chgBit(oldp+1986,(vlTOPp->Game_Console_TOP__DOT__cache_hit));
            tracep->chgCData(oldp+1987,((0xffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                                  >> 2U))),8);
            tracep->chgIData(oldp+1988,((0x3ffffU & vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata)),18);
            tracep->chgCData(oldp+1989,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram4)
                                          ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                                          : 0U)),4);
            tracep->chgCData(oldp+1990,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram5)
                                          ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                                          : 0U)),4);
            tracep->chgCData(oldp+1991,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram6)
                                          ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                                          : 0U)),4);
            tracep->chgCData(oldp+1992,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram13)
                                          ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                                          : 0U)),4);
            tracep->chgCData(oldp+1993,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_font_map)
                                          ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                                          : 0U)),4);
            tracep->chgSData(oldp+1994,((0x3ffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                                   >> 2U))),10);
            tracep->chgBit(oldp+1995,(((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ddr3))));
            tracep->chgCData(oldp+1996,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ddr3)
                                          ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                                          : 0U)),4);
            tracep->chgCData(oldp+1997,(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1),8);
            tracep->chgCData(oldp+1998,(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2),8);
            tracep->chgIData(oldp+1999,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_word),32);
            tracep->chgBit(oldp+2000,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_xfer));
            tracep->chgBit(oldp+2001,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__clear_prefetched_high_word));
            tracep->chgIData(oldp+2002,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_latched_noshuffle),32);
            tracep->chgBit(oldp+2003,(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_done));
            tracep->chgCData(oldp+2004,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next),4);
            tracep->chgBit(oldp+2005,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter_reset));
            tracep->chgBit(oldp+2006,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter_plus));
            tracep->chgIData(oldp+2007,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata[0]),32);
            tracep->chgIData(oldp+2008,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata[1]),32);
            tracep->chgIData(oldp+2009,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata[2]),32);
            tracep->chgIData(oldp+2010,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata[3]),32);
            tracep->chgBit(oldp+2011,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_0));
            tracep->chgBit(oldp+2012,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_1));
            tracep->chgBit(oldp+2013,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_2));
            tracep->chgBit(oldp+2014,(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_3));
            tracep->chgBit(oldp+2015,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ddr3));
            tracep->chgBit(oldp+2016,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ppu_reg));
            tracep->chgBit(oldp+2017,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_lut));
            tracep->chgBit(oldp+2018,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_font_map));
            tracep->chgBit(oldp+2019,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram4));
            tracep->chgBit(oldp+2020,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram5));
            tracep->chgBit(oldp+2021,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram6));
            tracep->chgBit(oldp+2022,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram13));
            tracep->chgCData(oldp+2023,(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state_next),4);
            tracep->chgQData(oldp+2024,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+2026,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+2028,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+2030,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+2032,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+2034,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+2036,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+2038,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+2040,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+2042,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Decompressed_FIFO_data),64);
            tracep->chgIData(oldp+2044,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[0]),18);
            tracep->chgIData(oldp+2045,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[1]),18);
            tracep->chgIData(oldp+2046,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[2]),18);
            tracep->chgIData(oldp+2047,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[3]),18);
            tracep->chgIData(oldp+2048,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[4]),18);
            tracep->chgIData(oldp+2049,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[5]),18);
            tracep->chgIData(oldp+2050,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[6]),18);
            tracep->chgIData(oldp+2051,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[7]),18);
            tracep->chgIData(oldp+2052,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[8]),18);
            tracep->chgIData(oldp+2053,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[9]),18);
            tracep->chgIData(oldp+2054,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[10]),18);
            tracep->chgIData(oldp+2055,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[11]),18);
            tracep->chgBit(oldp+2056,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[0]));
            tracep->chgBit(oldp+2057,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[1]));
            tracep->chgBit(oldp+2058,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[2]));
            tracep->chgBit(oldp+2059,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[3]));
            tracep->chgBit(oldp+2060,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[4]));
            tracep->chgBit(oldp+2061,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[5]));
            tracep->chgBit(oldp+2062,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[6]));
            tracep->chgBit(oldp+2063,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[7]));
            tracep->chgBit(oldp+2064,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[8]));
            tracep->chgBit(oldp+2065,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[9]));
            tracep->chgBit(oldp+2066,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[10]));
            tracep->chgBit(oldp+2067,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[11]));
            tracep->chgBit(oldp+2068,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[0]));
            tracep->chgBit(oldp+2069,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[1]));
            tracep->chgBit(oldp+2070,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[2]));
            tracep->chgBit(oldp+2071,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[3]));
            tracep->chgBit(oldp+2072,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[4]));
            tracep->chgBit(oldp+2073,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[5]));
            tracep->chgBit(oldp+2074,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[6]));
            tracep->chgBit(oldp+2075,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[7]));
            tracep->chgBit(oldp+2076,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[8]));
            tracep->chgBit(oldp+2077,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[9]));
            tracep->chgBit(oldp+2078,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[10]));
            tracep->chgBit(oldp+2079,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[11]));
            tracep->chgBit(oldp+2080,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_ena));
            tracep->chgCData(oldp+2081,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_pixel),8);
            tracep->chgBit(oldp+2082,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_ena));
            tracep->chgCData(oldp+2083,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_pixel),8);
            tracep->chgBit(oldp+2084,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_ena));
            tracep->chgCData(oldp+2085,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_pixel),8);
            tracep->chgBit(oldp+2086,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_ena));
            tracep->chgCData(oldp+2087,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_pixel),8);
            tracep->chgBit(oldp+2088,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_ena));
            tracep->chgCData(oldp+2089,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_pixel),8);
            tracep->chgBit(oldp+2090,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_ena));
            tracep->chgCData(oldp+2091,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_pixel),8);
            tracep->chgBit(oldp+2092,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_ena));
            tracep->chgCData(oldp+2093,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_pixel),8);
            tracep->chgBit(oldp+2094,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_ena));
            tracep->chgCData(oldp+2095,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_pixel),8);
            tracep->chgBit(oldp+2096,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_ena));
            tracep->chgCData(oldp+2097,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_pixel),8);
            tracep->chgBit(oldp+2098,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_ena));
            tracep->chgCData(oldp+2099,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_pixel),8);
            tracep->chgBit(oldp+2100,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Pixel_valid));
            tracep->chgBit(oldp+2101,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                      [1U]));
            tracep->chgBit(oldp+2102,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Pixel_valid));
            tracep->chgBit(oldp+2103,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                      [2U]));
            tracep->chgBit(oldp+2104,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Pixel_valid));
            tracep->chgBit(oldp+2105,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                      [3U]));
            tracep->chgBit(oldp+2106,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Pixel_valid));
            tracep->chgBit(oldp+2107,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                      [4U]));
            tracep->chgBit(oldp+2108,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Pixel_valid));
            tracep->chgBit(oldp+2109,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                      [5U]));
            tracep->chgBit(oldp+2110,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Pixel_valid));
            tracep->chgBit(oldp+2111,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                      [6U]));
            tracep->chgBit(oldp+2112,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Pixel_valid));
            tracep->chgBit(oldp+2113,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                      [7U]));
            tracep->chgBit(oldp+2114,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Pixel_valid));
            tracep->chgBit(oldp+2115,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                      [8U]));
            tracep->chgBit(oldp+2116,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Pixel_valid));
            tracep->chgBit(oldp+2117,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                      [9U]));
            tracep->chgBit(oldp+2118,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Pixel_valid));
            tracep->chgBit(oldp+2119,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                      [0xaU]));
            tracep->chgQData(oldp+2120,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__bg1_comp_data),64);
            tracep->chgQData(oldp+2122,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__bg2_comp_data),64);
            tracep->chgQData(oldp+2124,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__ch1_comp_data),64);
            tracep->chgQData(oldp+2126,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__ch2_comp_data),64);
            tracep->chgQData(oldp+2128,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__ch3_comp_data),64);
            tracep->chgQData(oldp+2130,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__ch4_comp_data),64);
            tracep->chgQData(oldp+2132,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__uni1_comp_data),64);
            tracep->chgQData(oldp+2134,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__uni2_comp_data),64);
            tracep->chgQData(oldp+2136,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__sc_comp_data),64);
            tracep->chgQData(oldp+2138,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__st_comp_data),64);
            tracep->chgBit(oldp+2140,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want));
            tracep->chgBit(oldp+2141,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want));
            tracep->chgBit(oldp+2142,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want));
            tracep->chgBit(oldp+2143,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_inc_want));
            tracep->chgBit(oldp+2144,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want));
            tracep->chgBit(oldp+2145,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want));
            tracep->chgBit(oldp+2146,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_inc_want));
            tracep->chgBit(oldp+2147,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_inc_want));
            tracep->chgBit(oldp+2148,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_inc_want));
            tracep->chgBit(oldp+2149,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_inc_want));
            tracep->chgIData(oldp+2150,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_RGB),18);
            tracep->chgBit(oldp+2151,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_trans));
            tracep->chgBit(oldp+2152,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_end));
            tracep->chgIData(oldp+2153,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_RGB),18);
            tracep->chgBit(oldp+2154,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_trans));
            tracep->chgBit(oldp+2155,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_end));
            tracep->chgIData(oldp+2156,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_RGB),18);
            tracep->chgBit(oldp+2157,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_trans));
            tracep->chgBit(oldp+2158,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_end));
            tracep->chgIData(oldp+2159,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_RGB),18);
            tracep->chgBit(oldp+2160,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_trans));
            tracep->chgBit(oldp+2161,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_end));
            tracep->chgIData(oldp+2162,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_RGB),18);
            tracep->chgBit(oldp+2163,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_trans));
            tracep->chgBit(oldp+2164,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_end));
            tracep->chgIData(oldp+2165,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_RGB),18);
            tracep->chgBit(oldp+2166,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_trans));
            tracep->chgBit(oldp+2167,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_end));
            tracep->chgIData(oldp+2168,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_RGB),18);
            tracep->chgBit(oldp+2169,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_trans));
            tracep->chgBit(oldp+2170,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_end));
            tracep->chgIData(oldp+2171,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_RGB),18);
            tracep->chgBit(oldp+2172,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_trans));
            tracep->chgBit(oldp+2173,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_end));
            tracep->chgIData(oldp+2174,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_RGB),18);
            tracep->chgBit(oldp+2175,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_trans));
            tracep->chgBit(oldp+2176,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_end));
            tracep->chgIData(oldp+2177,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_RGB),18);
            tracep->chgBit(oldp+2178,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_trans));
            tracep->chgBit(oldp+2179,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_end));
            tracep->chgIData(oldp+2180,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req11_RGB),18);
            tracep->chgBit(oldp+2181,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req11_end));
            tracep->chgIData(oldp+2182,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req12_RGB),18);
            tracep->chgBit(oldp+2183,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req12_end));
            tracep->chgBit(oldp+2184,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_hit));
            tracep->chgBit(oldp+2185,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_hit));
            tracep->chgBit(oldp+2186,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_hit));
            tracep->chgBit(oldp+2187,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_hit));
            tracep->chgBit(oldp+2188,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_hit));
            tracep->chgBit(oldp+2189,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_hit));
            tracep->chgBit(oldp+2190,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_hit));
            tracep->chgBit(oldp+2191,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_hit));
            tracep->chgBit(oldp+2192,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_hit));
            tracep->chgBit(oldp+2193,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_hit));
            tracep->chgBit(oldp+2194,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit1));
            tracep->chgBit(oldp+2195,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit2));
            tracep->chgBit(oldp+2196,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit3));
            tracep->chgBit(oldp+2197,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit4));
            tracep->chgBit(oldp+2198,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit1));
            tracep->chgBit(oldp+2199,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit2));
            tracep->chgBit(oldp+2200,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit3));
            tracep->chgBit(oldp+2201,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit4));
            tracep->chgBit(oldp+2202,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit1));
            tracep->chgBit(oldp+2203,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit2));
            tracep->chgBit(oldp+2204,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit3));
            tracep->chgBit(oldp+2205,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit4));
            tracep->chgBit(oldp+2206,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit1));
            tracep->chgBit(oldp+2207,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit2));
            tracep->chgBit(oldp+2208,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit3));
            tracep->chgBit(oldp+2209,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit4));
            tracep->chgBit(oldp+2210,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit1));
            tracep->chgBit(oldp+2211,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit2));
            tracep->chgBit(oldp+2212,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit3));
            tracep->chgBit(oldp+2213,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit4));
            tracep->chgBit(oldp+2214,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit1));
            tracep->chgBit(oldp+2215,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit2));
            tracep->chgBit(oldp+2216,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit3));
            tracep->chgBit(oldp+2217,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit4));
            tracep->chgBit(oldp+2218,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit1));
            tracep->chgBit(oldp+2219,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit2));
            tracep->chgBit(oldp+2220,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit3));
            tracep->chgBit(oldp+2221,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit4));
            tracep->chgBit(oldp+2222,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit1));
            tracep->chgBit(oldp+2223,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit2));
            tracep->chgBit(oldp+2224,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit3));
            tracep->chgBit(oldp+2225,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit4));
            tracep->chgBit(oldp+2226,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit1));
            tracep->chgBit(oldp+2227,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit2));
            tracep->chgBit(oldp+2228,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit3));
            tracep->chgBit(oldp+2229,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit4));
            tracep->chgBit(oldp+2230,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit1));
            tracep->chgBit(oldp+2231,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit2));
            tracep->chgBit(oldp+2232,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit3));
            tracep->chgBit(oldp+2233,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit4));
            tracep->chgBit(oldp+2234,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_is_zero));
            tracep->chgBit(oldp+2235,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_is_zero));
            tracep->chgBit(oldp+2236,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_is_zero));
            tracep->chgBit(oldp+2237,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_is_zero));
            tracep->chgBit(oldp+2238,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_is_zero));
            tracep->chgBit(oldp+2239,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_is_zero));
            tracep->chgBit(oldp+2240,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_is_zero));
            tracep->chgBit(oldp+2241,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_is_zero));
            tracep->chgBit(oldp+2242,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_is_zero));
            tracep->chgBit(oldp+2243,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_is_zero));
            tracep->chgSData(oldp+2244,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req),12);
            tracep->chgBit(oldp+2245,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_w_ena));
            tracep->chgBit(oldp+2246,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_w_ena));
            tracep->chgBit(oldp+2247,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_w_ena));
            tracep->chgBit(oldp+2248,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_w_ena));
            tracep->chgBit(oldp+2249,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_w_ena));
            tracep->chgBit(oldp+2250,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_w_ena));
            tracep->chgBit(oldp+2251,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_w_ena));
            tracep->chgBit(oldp+2252,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_w_ena));
            tracep->chgBit(oldp+2253,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_w_ena));
            tracep->chgBit(oldp+2254,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_w_ena));
            tracep->chgBit(oldp+2255,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_w_ena));
            tracep->chgBit(oldp+2256,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_w_ena));
            tracep->chgBit(oldp+2257,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[0]));
            tracep->chgBit(oldp+2258,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[1]));
            tracep->chgBit(oldp+2259,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[2]));
            tracep->chgBit(oldp+2260,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[3]));
            tracep->chgBit(oldp+2261,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[4]));
            tracep->chgBit(oldp+2262,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[5]));
            tracep->chgBit(oldp+2263,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[6]));
            tracep->chgBit(oldp+2264,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[7]));
            tracep->chgBit(oldp+2265,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[8]));
            tracep->chgBit(oldp+2266,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[9]));
            tracep->chgBit(oldp+2267,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[10]));
            tracep->chgBit(oldp+2268,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[0]));
            tracep->chgBit(oldp+2269,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[1]));
            tracep->chgBit(oldp+2270,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[2]));
            tracep->chgBit(oldp+2271,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[3]));
            tracep->chgBit(oldp+2272,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[4]));
            tracep->chgBit(oldp+2273,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[5]));
            tracep->chgBit(oldp+2274,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[6]));
            tracep->chgBit(oldp+2275,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[7]));
            tracep->chgBit(oldp+2276,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[8]));
            tracep->chgBit(oldp+2277,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[9]));
            tracep->chgBit(oldp+2278,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[10]));
            tracep->chgBit(oldp+2279,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[0]));
            tracep->chgBit(oldp+2280,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[1]));
            tracep->chgBit(oldp+2281,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[2]));
            tracep->chgBit(oldp+2282,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[3]));
            tracep->chgBit(oldp+2283,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[4]));
            tracep->chgBit(oldp+2284,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[5]));
            tracep->chgBit(oldp+2285,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[6]));
            tracep->chgBit(oldp+2286,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[7]));
            tracep->chgBit(oldp+2287,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[8]));
            tracep->chgBit(oldp+2288,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[9]));
            tracep->chgBit(oldp+2289,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[0]));
            tracep->chgBit(oldp+2290,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[1]));
            tracep->chgBit(oldp+2291,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[2]));
            tracep->chgBit(oldp+2292,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[3]));
            tracep->chgBit(oldp+2293,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[4]));
            tracep->chgBit(oldp+2294,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[5]));
            tracep->chgBit(oldp+2295,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[6]));
            tracep->chgBit(oldp+2296,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[7]));
            tracep->chgBit(oldp+2297,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[8]));
            tracep->chgBit(oldp+2298,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[9]));
            tracep->chgCData(oldp+2299,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state_next),2);
            tracep->chgCData(oldp+2300,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state_next),2);
            tracep->chgCData(oldp+2301,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state_next),2);
            tracep->chgCData(oldp+2302,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state_next),2);
            tracep->chgCData(oldp+2303,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state_next),2);
            tracep->chgCData(oldp+2304,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state_next),2);
            tracep->chgCData(oldp+2305,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state_next),2);
            tracep->chgCData(oldp+2306,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state_next),2);
            tracep->chgCData(oldp+2307,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state_next),2);
            tracep->chgCData(oldp+2308,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state_next),2);
            tracep->chgBit(oldp+2309,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                      [0U]));
            tracep->chgIData(oldp+2310,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                        [0U]),18);
            tracep->chgBit(oldp+2311,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                      [0U]));
            tracep->chgBit(oldp+2312,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+2313,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+2314,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__main_state_next),4);
            tracep->chgCData(oldp+2315,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+2316,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+2317,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+2318,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+2319,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+2320,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+2321,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+2322,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                      [1U]));
            tracep->chgIData(oldp+2323,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                        [1U]),18);
            tracep->chgBit(oldp+2324,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                      [1U]));
            tracep->chgBit(oldp+2325,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+2326,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+2327,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__main_state_next),4);
            tracep->chgCData(oldp+2328,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+2329,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+2330,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+2331,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+2332,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+2333,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+2334,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+2335,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                      [2U]));
            tracep->chgIData(oldp+2336,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                        [2U]),18);
            tracep->chgBit(oldp+2337,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                      [2U]));
            tracep->chgBit(oldp+2338,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+2339,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+2340,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__main_state_next),4);
            tracep->chgCData(oldp+2341,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+2342,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+2343,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+2344,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+2345,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+2346,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+2347,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+2348,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                      [3U]));
            tracep->chgIData(oldp+2349,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                        [3U]),18);
            tracep->chgBit(oldp+2350,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                      [3U]));
            tracep->chgBit(oldp+2351,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+2352,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+2353,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__main_state_next),4);
            tracep->chgCData(oldp+2354,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+2355,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+2356,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+2357,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+2358,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+2359,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+2360,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+2361,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                      [4U]));
            tracep->chgIData(oldp+2362,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                        [4U]),18);
            tracep->chgBit(oldp+2363,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                      [4U]));
            tracep->chgBit(oldp+2364,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+2365,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+2366,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__main_state_next),4);
            tracep->chgCData(oldp+2367,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+2368,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+2369,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+2370,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+2371,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+2372,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+2373,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+2374,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                      [5U]));
            tracep->chgIData(oldp+2375,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                        [5U]),18);
            tracep->chgBit(oldp+2376,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                      [5U]));
            tracep->chgBit(oldp+2377,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+2378,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+2379,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__main_state_next),4);
            tracep->chgCData(oldp+2380,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+2381,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+2382,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+2383,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+2384,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+2385,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+2386,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+2387,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                      [6U]));
            tracep->chgIData(oldp+2388,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                        [6U]),18);
            tracep->chgBit(oldp+2389,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                      [6U]));
            tracep->chgBit(oldp+2390,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+2391,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+2392,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__main_state_next),4);
            tracep->chgCData(oldp+2393,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+2394,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+2395,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+2396,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+2397,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+2398,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+2399,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+2400,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                      [7U]));
            tracep->chgIData(oldp+2401,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                        [7U]),18);
            tracep->chgBit(oldp+2402,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                      [7U]));
            tracep->chgBit(oldp+2403,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+2404,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+2405,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__main_state_next),4);
            tracep->chgCData(oldp+2406,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+2407,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+2408,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+2409,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+2410,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+2411,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+2412,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+2413,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                      [8U]));
            tracep->chgIData(oldp+2414,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                        [8U]),18);
            tracep->chgBit(oldp+2415,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                      [8U]));
            tracep->chgBit(oldp+2416,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+2417,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+2418,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__main_state_next),4);
            tracep->chgCData(oldp+2419,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+2420,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+2421,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+2422,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+2423,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+2424,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+2425,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+2426,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end
                                      [9U]));
            tracep->chgIData(oldp+2427,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB
                                        [9U]),18);
            tracep->chgBit(oldp+2428,(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans
                                      [9U]));
            tracep->chgBit(oldp+2429,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+2430,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+2431,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__main_state_next),4);
            tracep->chgCData(oldp+2432,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+2433,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+2434,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+2435,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+2436,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+2437,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+2438,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.__PVT__rgb_convert_end));
            tracep->chgQData(oldp+2439,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_fifo_r_data),64);
            tracep->chgQData(oldp+2441,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_fifo_r_data),64);
            tracep->chgQData(oldp+2443,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_fifo_r_data),64);
            tracep->chgQData(oldp+2445,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_fifo_r_data),64);
            tracep->chgQData(oldp+2447,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_fifo_r_data),64);
            tracep->chgQData(oldp+2449,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_fifo_r_data),64);
            tracep->chgQData(oldp+2451,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_fifo_r_data),64);
            tracep->chgQData(oldp+2453,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_fifo_r_data),64);
            tracep->chgQData(oldp+2455,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_fifo_r_data),64);
            tracep->chgQData(oldp+2457,(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_fifo_r_data),64);
        }
        tracep->chgBit(oldp+2459,(vlTOPp->clk));
        tracep->chgBit(oldp+2460,(vlTOPp->resetn));
        tracep->chgCData(oldp+2461,(vlTOPp->joypad_state_in),8);
        tracep->chgBit(oldp+2462,(vlTOPp->joypad_irq));
        tracep->chgBit(oldp+2463,(vlTOPp->DDR3_CPU_valid));
        tracep->chgBit(oldp+2464,(vlTOPp->DDR3_CPU_ready));
        tracep->chgIData(oldp+2465,(vlTOPp->DDR3_CPU_addr),32);
        tracep->chgIData(oldp+2466,(vlTOPp->DDR3_CPU_wdata),32);
        tracep->chgCData(oldp+2467,(vlTOPp->DDR3_CPU_wstrb),4);
        tracep->chgIData(oldp+2468,(vlTOPp->DDR3_CPU_rdata),32);
        tracep->chgCData(oldp+2469,(vlTOPp->DDR3_CPU_burst_len),8);
        tracep->chgBit(oldp+2470,(vlTOPp->DDR3_CPU_burst_en));
        tracep->chgBit(oldp+2471,(vlTOPp->DDR3_PPU_valid));
        tracep->chgBit(oldp+2472,(vlTOPp->DDR3_PPU_ready));
        tracep->chgIData(oldp+2473,(vlTOPp->DDR3_PPU_addr),32);
        tracep->chgIData(oldp+2474,(vlTOPp->DDR3_PPU_wdata),32);
        tracep->chgCData(oldp+2475,(vlTOPp->DDR3_PPU_wstrb),4);
        tracep->chgIData(oldp+2476,(vlTOPp->DDR3_PPU_rdata),32);
        tracep->chgCData(oldp+2477,(vlTOPp->DDR3_PPU_burst_len),8);
        tracep->chgBit(oldp+2478,(vlTOPp->DDR3_PPU_burst_en));
        tracep->chgBit(oldp+2479,(vlTOPp->BRAM0_wen));
        tracep->chgCData(oldp+2480,(vlTOPp->BRAM0_wstrb),8);
        tracep->chgSData(oldp+2481,(vlTOPp->BRAM0_waddr),9);
        tracep->chgWData(oldp+2482,(vlTOPp->BRAM0_din),72);
        tracep->chgWData(oldp+2485,(vlTOPp->BRAM0_dout),72);
        tracep->chgBit(oldp+2488,(vlTOPp->BRAM0_ren));
        tracep->chgSData(oldp+2489,(vlTOPp->BRAM0_raddr),9);
        tracep->chgBit(oldp+2490,(vlTOPp->BRAM1_wen));
        tracep->chgCData(oldp+2491,(vlTOPp->BRAM1_wstrb),8);
        tracep->chgSData(oldp+2492,(vlTOPp->BRAM1_waddr),9);
        tracep->chgWData(oldp+2493,(vlTOPp->BRAM1_din),72);
        tracep->chgWData(oldp+2496,(vlTOPp->BRAM1_dout),72);
        tracep->chgBit(oldp+2499,(vlTOPp->BRAM1_ren));
        tracep->chgSData(oldp+2500,(vlTOPp->BRAM1_raddr),9);
        tracep->chgBit(oldp+2501,(vlTOPp->BRAM2_wen));
        tracep->chgCData(oldp+2502,(vlTOPp->BRAM2_wstrb),8);
        tracep->chgSData(oldp+2503,(vlTOPp->BRAM2_waddr),9);
        tracep->chgWData(oldp+2504,(vlTOPp->BRAM2_din),72);
        tracep->chgWData(oldp+2507,(vlTOPp->BRAM2_dout),72);
        tracep->chgBit(oldp+2510,(vlTOPp->BRAM2_ren));
        tracep->chgSData(oldp+2511,(vlTOPp->BRAM2_raddr),9);
        tracep->chgBit(oldp+2512,(vlTOPp->BRAM3_wen));
        tracep->chgCData(oldp+2513,(vlTOPp->BRAM3_wstrb),8);
        tracep->chgSData(oldp+2514,(vlTOPp->BRAM3_waddr),9);
        tracep->chgWData(oldp+2515,(vlTOPp->BRAM3_din),72);
        tracep->chgWData(oldp+2518,(vlTOPp->BRAM3_dout),72);
        tracep->chgBit(oldp+2521,(vlTOPp->BRAM3_ren));
        tracep->chgSData(oldp+2522,(vlTOPp->BRAM3_raddr),9);
        tracep->chgBit(oldp+2523,(vlTOPp->BRAM4_en_a));
        tracep->chgCData(oldp+2524,(vlTOPp->BRAM4_wstrb_a),4);
        tracep->chgSData(oldp+2525,(vlTOPp->BRAM4_addr_a),10);
        tracep->chgIData(oldp+2526,(vlTOPp->BRAM4_din_a),32);
        tracep->chgIData(oldp+2527,(vlTOPp->BRAM4_dout_a),32);
        tracep->chgBit(oldp+2528,(vlTOPp->BRAM4_en_b));
        tracep->chgCData(oldp+2529,(vlTOPp->BRAM4_wstrb_b),4);
        tracep->chgSData(oldp+2530,(vlTOPp->BRAM4_addr_b),10);
        tracep->chgIData(oldp+2531,(vlTOPp->BRAM4_din_b),32);
        tracep->chgIData(oldp+2532,(vlTOPp->BRAM4_dout_b),32);
        tracep->chgBit(oldp+2533,(vlTOPp->BRAM5_en_a));
        tracep->chgCData(oldp+2534,(vlTOPp->BRAM5_wstrb_a),4);
        tracep->chgSData(oldp+2535,(vlTOPp->BRAM5_addr_a),10);
        tracep->chgIData(oldp+2536,(vlTOPp->BRAM5_din_a),32);
        tracep->chgIData(oldp+2537,(vlTOPp->BRAM5_dout_a),32);
        tracep->chgBit(oldp+2538,(vlTOPp->BRAM5_en_b));
        tracep->chgCData(oldp+2539,(vlTOPp->BRAM5_wstrb_b),4);
        tracep->chgSData(oldp+2540,(vlTOPp->BRAM5_addr_b),10);
        tracep->chgIData(oldp+2541,(vlTOPp->BRAM5_din_b),32);
        tracep->chgIData(oldp+2542,(vlTOPp->BRAM5_dout_b),32);
        tracep->chgBit(oldp+2543,(vlTOPp->BRAM6_en_a));
        tracep->chgCData(oldp+2544,(vlTOPp->BRAM6_wstrb_a),4);
        tracep->chgSData(oldp+2545,(vlTOPp->BRAM6_addr_a),10);
        tracep->chgIData(oldp+2546,(vlTOPp->BRAM6_din_a),32);
        tracep->chgIData(oldp+2547,(vlTOPp->BRAM6_dout_a),32);
        tracep->chgBit(oldp+2548,(vlTOPp->BRAM6_en_b));
        tracep->chgCData(oldp+2549,(vlTOPp->BRAM6_wstrb_b),4);
        tracep->chgSData(oldp+2550,(vlTOPp->BRAM6_addr_b),10);
        tracep->chgIData(oldp+2551,(vlTOPp->BRAM6_din_b),32);
        tracep->chgIData(oldp+2552,(vlTOPp->BRAM6_dout_b),32);
        tracep->chgBit(oldp+2553,(vlTOPp->BRAM13_en_a));
        tracep->chgCData(oldp+2554,(vlTOPp->BRAM13_wstrb_a),4);
        tracep->chgSData(oldp+2555,(vlTOPp->BRAM13_addr_a),10);
        tracep->chgIData(oldp+2556,(vlTOPp->BRAM13_din_a),32);
        tracep->chgIData(oldp+2557,(vlTOPp->BRAM13_dout_a),32);
        tracep->chgBit(oldp+2558,(vlTOPp->BRAM13_en_b));
        tracep->chgCData(oldp+2559,(vlTOPp->BRAM13_wstrb_b),4);
        tracep->chgSData(oldp+2560,(vlTOPp->BRAM13_addr_b),10);
        tracep->chgIData(oldp+2561,(vlTOPp->BRAM13_din_b),32);
        tracep->chgIData(oldp+2562,(vlTOPp->BRAM13_dout_b),32);
        tracep->chgBit(oldp+2563,(vlTOPp->BRAM14_en_a));
        tracep->chgCData(oldp+2564,(vlTOPp->BRAM14_wstrb_a),4);
        tracep->chgSData(oldp+2565,(vlTOPp->BRAM14_addr_a),10);
        tracep->chgIData(oldp+2566,(vlTOPp->BRAM14_din_a),32);
        tracep->chgIData(oldp+2567,(vlTOPp->BRAM14_dout_a),32);
        tracep->chgBit(oldp+2568,(vlTOPp->BRAM14_en_b));
        tracep->chgCData(oldp+2569,(vlTOPp->BRAM14_wstrb_b),4);
        tracep->chgSData(oldp+2570,(vlTOPp->BRAM14_addr_b),10);
        tracep->chgIData(oldp+2571,(vlTOPp->BRAM14_din_b),32);
        tracep->chgIData(oldp+2572,(vlTOPp->BRAM14_dout_b),32);
        tracep->chgBit(oldp+2573,(vlTOPp->BRAM7_en_a));
        tracep->chgBit(oldp+2574,(vlTOPp->BRAM7_we_a));
        tracep->chgSData(oldp+2575,(vlTOPp->BRAM7_addr_a),9);
        tracep->chgQData(oldp+2576,(vlTOPp->BRAM7_din_a),64);
        tracep->chgBit(oldp+2578,(vlTOPp->BRAM7_en_b));
        tracep->chgSData(oldp+2579,(vlTOPp->BRAM7_addr_b),9);
        tracep->chgQData(oldp+2580,(vlTOPp->BRAM7_dout_b),64);
        tracep->chgBit(oldp+2582,(vlTOPp->BRAM8_en_a));
        tracep->chgBit(oldp+2583,(vlTOPp->BRAM8_we_a));
        tracep->chgSData(oldp+2584,(vlTOPp->BRAM8_addr_a),9);
        tracep->chgQData(oldp+2585,(vlTOPp->BRAM8_din_a),64);
        tracep->chgBit(oldp+2587,(vlTOPp->BRAM8_en_b));
        tracep->chgSData(oldp+2588,(vlTOPp->BRAM8_addr_b),9);
        tracep->chgQData(oldp+2589,(vlTOPp->BRAM8_dout_b),64);
        tracep->chgBit(oldp+2591,(vlTOPp->BRAM9_en_a));
        tracep->chgBit(oldp+2592,(vlTOPp->BRAM9_we_a));
        tracep->chgSData(oldp+2593,(vlTOPp->BRAM9_addr_a),9);
        tracep->chgQData(oldp+2594,(vlTOPp->BRAM9_din_a),64);
        tracep->chgBit(oldp+2596,(vlTOPp->BRAM9_en_b));
        tracep->chgSData(oldp+2597,(vlTOPp->BRAM9_addr_b),9);
        tracep->chgQData(oldp+2598,(vlTOPp->BRAM9_dout_b),64);
        tracep->chgBit(oldp+2600,(vlTOPp->BRAM10_en_a));
        tracep->chgBit(oldp+2601,(vlTOPp->BRAM10_we_a));
        tracep->chgSData(oldp+2602,(vlTOPp->BRAM10_addr_a),9);
        tracep->chgQData(oldp+2603,(vlTOPp->BRAM10_din_a),64);
        tracep->chgBit(oldp+2605,(vlTOPp->BRAM10_en_b));
        tracep->chgSData(oldp+2606,(vlTOPp->BRAM10_addr_b),9);
        tracep->chgQData(oldp+2607,(vlTOPp->BRAM10_dout_b),64);
        tracep->chgBit(oldp+2609,(vlTOPp->BRAM11_en_a));
        tracep->chgBit(oldp+2610,(vlTOPp->BRAM11_we_a));
        tracep->chgSData(oldp+2611,(vlTOPp->BRAM11_addr_a),9);
        tracep->chgQData(oldp+2612,(vlTOPp->BRAM11_din_a),64);
        tracep->chgBit(oldp+2614,(vlTOPp->BRAM11_en_b));
        tracep->chgSData(oldp+2615,(vlTOPp->BRAM11_addr_b),9);
        tracep->chgQData(oldp+2616,(vlTOPp->BRAM11_dout_b),64);
        tracep->chgBit(oldp+2618,(vlTOPp->BRAM12_en_a));
        tracep->chgBit(oldp+2619,(vlTOPp->BRAM12_we_a));
        tracep->chgSData(oldp+2620,(vlTOPp->BRAM12_addr_a),9);
        tracep->chgQData(oldp+2621,(vlTOPp->BRAM12_din_a),64);
        tracep->chgBit(oldp+2623,(vlTOPp->BRAM12_en_b));
        tracep->chgSData(oldp+2624,(vlTOPp->BRAM12_addr_b),9);
        tracep->chgQData(oldp+2625,(vlTOPp->BRAM12_dout_b),64);
        tracep->chgBit(oldp+2627,(vlTOPp->LUT_we));
        tracep->chgCData(oldp+2628,(vlTOPp->LUT_addr_w),8);
        tracep->chgIData(oldp+2629,(vlTOPp->LUT_data_in),18);
        tracep->chgCData(oldp+2630,(vlTOPp->LUT_addr_r1),8);
        tracep->chgIData(oldp+2631,(vlTOPp->LUT_data_out1),18);
        tracep->chgCData(oldp+2632,(vlTOPp->LUT_addr_r2),8);
        tracep->chgIData(oldp+2633,(vlTOPp->LUT_data_out2),18);
        tracep->chgBit(oldp+2634,(vlTOPp->Final_pixel_valid));
        tracep->chgIData(oldp+2635,(vlTOPp->Final_pixel_RGB),18);
        tracep->chgBit(oldp+2636,(vlTOPp->Font_Line_End));
        tracep->chgBit(oldp+2637,(vlTOPp->Font_Frame_End));
        tracep->chgIData(oldp+2638,(vlTOPp->joypad_irq),32);
        tracep->chgBit(oldp+2639,(((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_wait) 
                                   & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q)))));
    }
}

void VGame_Console_TOP::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VGame_Console_TOP__Syms* __restrict vlSymsp = static_cast<VGame_Console_TOP__Syms*>(userp);
    VGame_Console_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
    }
}
