// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPPU_TOP__Syms.h"


void VPPU_TOP::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VPPU_TOP__Syms* __restrict vlSymsp = static_cast<VPPU_TOP__Syms*>(userp);
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VPPU_TOP::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VPPU_TOP__Syms* __restrict vlSymsp = static_cast<VPPU_TOP__Syms*>(userp);
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_en_a));
            tracep->chgBit(oldp+1,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_we_a));
            tracep->chgSData(oldp+2,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_addr_a),9);
            tracep->chgQData(oldp+3,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_din_a),64);
            tracep->chgBit(oldp+5,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_en_b));
            tracep->chgSData(oldp+6,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM11_addr_b),9);
            tracep->chgBit(oldp+7,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_en_a));
            tracep->chgBit(oldp+8,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_we_a));
            tracep->chgSData(oldp+9,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_addr_a),9);
            tracep->chgQData(oldp+10,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_din_a),64);
            tracep->chgBit(oldp+12,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_en_b));
            tracep->chgSData(oldp+13,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM12_addr_b),9);
            tracep->chgBit(oldp+14,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_front_256_inc_ena));
            tracep->chgBit(oldp+15,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+16,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_en_a));
            tracep->chgBit(oldp+17,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_we_a));
            tracep->chgSData(oldp+18,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_addr_a),9);
            tracep->chgQData(oldp+19,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_din_a),64);
            tracep->chgBit(oldp+21,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_en_b));
            tracep->chgSData(oldp+22,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM11_addr_b),9);
            tracep->chgBit(oldp+23,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_en_a));
            tracep->chgBit(oldp+24,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_we_a));
            tracep->chgSData(oldp+25,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_addr_a),9);
            tracep->chgQData(oldp+26,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_din_a),64);
            tracep->chgBit(oldp+28,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_en_b));
            tracep->chgSData(oldp+29,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM12_addr_b),9);
            tracep->chgBit(oldp+30,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_front_256_inc_ena));
            tracep->chgBit(oldp+31,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+32,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_en_a));
            tracep->chgBit(oldp+33,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_we_a));
            tracep->chgSData(oldp+34,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_addr_a),9);
            tracep->chgQData(oldp+35,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_din_a),64);
            tracep->chgBit(oldp+37,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_en_b));
            tracep->chgSData(oldp+38,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM11_addr_b),9);
            tracep->chgBit(oldp+39,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_en_a));
            tracep->chgBit(oldp+40,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_we_a));
            tracep->chgSData(oldp+41,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_addr_a),9);
            tracep->chgQData(oldp+42,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_din_a),64);
            tracep->chgBit(oldp+44,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_en_b));
            tracep->chgSData(oldp+45,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM12_addr_b),9);
            tracep->chgBit(oldp+46,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_front_256_inc_ena));
            tracep->chgBit(oldp+47,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+48,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_en_a));
            tracep->chgBit(oldp+49,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_we_a));
            tracep->chgSData(oldp+50,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_addr_a),9);
            tracep->chgQData(oldp+51,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_din_a),64);
            tracep->chgBit(oldp+53,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_en_b));
            tracep->chgSData(oldp+54,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM11_addr_b),9);
            tracep->chgBit(oldp+55,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_en_a));
            tracep->chgBit(oldp+56,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_we_a));
            tracep->chgSData(oldp+57,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_addr_a),9);
            tracep->chgQData(oldp+58,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_din_a),64);
            tracep->chgBit(oldp+60,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_en_b));
            tracep->chgSData(oldp+61,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM12_addr_b),9);
            tracep->chgBit(oldp+62,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_front_256_inc_ena));
            tracep->chgBit(oldp+63,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+64,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_en_a));
            tracep->chgBit(oldp+65,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_we_a));
            tracep->chgSData(oldp+66,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_addr_a),9);
            tracep->chgQData(oldp+67,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_din_a),64);
            tracep->chgBit(oldp+69,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_en_b));
            tracep->chgSData(oldp+70,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM10_addr_b),9);
            tracep->chgBit(oldp+71,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_en_a));
            tracep->chgBit(oldp+72,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_we_a));
            tracep->chgSData(oldp+73,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_addr_a),9);
            tracep->chgQData(oldp+74,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_din_a),64);
            tracep->chgBit(oldp+76,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_en_b));
            tracep->chgSData(oldp+77,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM12_addr_b),9);
            tracep->chgBit(oldp+78,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_front_256_inc_ena));
            tracep->chgBit(oldp+79,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+80,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_en_a));
            tracep->chgBit(oldp+81,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_we_a));
            tracep->chgSData(oldp+82,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_addr_a),9);
            tracep->chgQData(oldp+83,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_din_a),64);
            tracep->chgBit(oldp+85,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_en_b));
            tracep->chgSData(oldp+86,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM10_addr_b),9);
            tracep->chgBit(oldp+87,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_en_a));
            tracep->chgBit(oldp+88,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_we_a));
            tracep->chgSData(oldp+89,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_addr_a),9);
            tracep->chgQData(oldp+90,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_din_a),64);
            tracep->chgBit(oldp+92,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_en_b));
            tracep->chgSData(oldp+93,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM12_addr_b),9);
            tracep->chgBit(oldp+94,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_front_256_inc_ena));
            tracep->chgBit(oldp+95,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+96,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_en_a));
            tracep->chgBit(oldp+97,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_we_a));
            tracep->chgSData(oldp+98,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_addr_a),9);
            tracep->chgQData(oldp+99,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_din_a),64);
            tracep->chgBit(oldp+101,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_en_b));
            tracep->chgSData(oldp+102,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM10_addr_b),9);
            tracep->chgBit(oldp+103,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_en_a));
            tracep->chgBit(oldp+104,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_we_a));
            tracep->chgSData(oldp+105,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_addr_a),9);
            tracep->chgQData(oldp+106,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_din_a),64);
            tracep->chgBit(oldp+108,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_en_b));
            tracep->chgSData(oldp+109,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM12_addr_b),9);
            tracep->chgBit(oldp+110,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_front_256_inc_ena));
            tracep->chgBit(oldp+111,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+112,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_en_a));
            tracep->chgBit(oldp+113,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_we_a));
            tracep->chgSData(oldp+114,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_addr_a),9);
            tracep->chgQData(oldp+115,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_din_a),64);
            tracep->chgBit(oldp+117,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_en_b));
            tracep->chgSData(oldp+118,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM10_addr_b),9);
            tracep->chgBit(oldp+119,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_en_a));
            tracep->chgBit(oldp+120,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_we_a));
            tracep->chgSData(oldp+121,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_addr_a),9);
            tracep->chgQData(oldp+122,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_din_a),64);
            tracep->chgBit(oldp+124,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_en_b));
            tracep->chgSData(oldp+125,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM12_addr_b),9);
            tracep->chgBit(oldp+126,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_front_256_inc_ena));
            tracep->chgBit(oldp+127,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+128,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_en_a));
            tracep->chgBit(oldp+129,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_we_a));
            tracep->chgSData(oldp+130,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_addr_a),9);
            tracep->chgQData(oldp+131,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_din_a),64);
            tracep->chgBit(oldp+133,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_en_b));
            tracep->chgSData(oldp+134,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM10_addr_b),9);
            tracep->chgBit(oldp+135,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_en_a));
            tracep->chgBit(oldp+136,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_we_a));
            tracep->chgSData(oldp+137,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_addr_a),9);
            tracep->chgQData(oldp+138,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_din_a),64);
            tracep->chgBit(oldp+140,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_en_b));
            tracep->chgSData(oldp+141,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM11_addr_b),9);
            tracep->chgBit(oldp+142,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_front_128_inc_ena));
            tracep->chgBit(oldp+143,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+144,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_en_a));
            tracep->chgBit(oldp+145,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_we_a));
            tracep->chgSData(oldp+146,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_addr_a),9);
            tracep->chgQData(oldp+147,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_din_a),64);
            tracep->chgBit(oldp+149,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_en_b));
            tracep->chgSData(oldp+150,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM10_addr_b),9);
            tracep->chgBit(oldp+151,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_en_a));
            tracep->chgBit(oldp+152,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_we_a));
            tracep->chgSData(oldp+153,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_addr_a),9);
            tracep->chgQData(oldp+154,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_din_a),64);
            tracep->chgBit(oldp+156,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_en_b));
            tracep->chgSData(oldp+157,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM11_addr_b),9);
            tracep->chgBit(oldp+158,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_front_128_inc_ena));
            tracep->chgBit(oldp+159,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_rear_128_inc_ena));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+160,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+162,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+164,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+166,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+168,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+170,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+172,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+174,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+176,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Decompressed_FIFO_data),64);
            tracep->chgQData(oldp+178,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Decompressed_FIFO_data),64);
            tracep->chgIData(oldp+180,(vlTOPp->PPU_TOP__DOT__Req_RGB[0]),18);
            tracep->chgIData(oldp+181,(vlTOPp->PPU_TOP__DOT__Req_RGB[1]),18);
            tracep->chgIData(oldp+182,(vlTOPp->PPU_TOP__DOT__Req_RGB[2]),18);
            tracep->chgIData(oldp+183,(vlTOPp->PPU_TOP__DOT__Req_RGB[3]),18);
            tracep->chgIData(oldp+184,(vlTOPp->PPU_TOP__DOT__Req_RGB[4]),18);
            tracep->chgIData(oldp+185,(vlTOPp->PPU_TOP__DOT__Req_RGB[5]),18);
            tracep->chgIData(oldp+186,(vlTOPp->PPU_TOP__DOT__Req_RGB[6]),18);
            tracep->chgIData(oldp+187,(vlTOPp->PPU_TOP__DOT__Req_RGB[7]),18);
            tracep->chgIData(oldp+188,(vlTOPp->PPU_TOP__DOT__Req_RGB[8]),18);
            tracep->chgIData(oldp+189,(vlTOPp->PPU_TOP__DOT__Req_RGB[9]),18);
            tracep->chgIData(oldp+190,(vlTOPp->PPU_TOP__DOT__Req_RGB[10]),18);
            tracep->chgIData(oldp+191,(vlTOPp->PPU_TOP__DOT__Req_RGB[11]),18);
            tracep->chgBit(oldp+192,(vlTOPp->PPU_TOP__DOT__Req_trans[0]));
            tracep->chgBit(oldp+193,(vlTOPp->PPU_TOP__DOT__Req_trans[1]));
            tracep->chgBit(oldp+194,(vlTOPp->PPU_TOP__DOT__Req_trans[2]));
            tracep->chgBit(oldp+195,(vlTOPp->PPU_TOP__DOT__Req_trans[3]));
            tracep->chgBit(oldp+196,(vlTOPp->PPU_TOP__DOT__Req_trans[4]));
            tracep->chgBit(oldp+197,(vlTOPp->PPU_TOP__DOT__Req_trans[5]));
            tracep->chgBit(oldp+198,(vlTOPp->PPU_TOP__DOT__Req_trans[6]));
            tracep->chgBit(oldp+199,(vlTOPp->PPU_TOP__DOT__Req_trans[7]));
            tracep->chgBit(oldp+200,(vlTOPp->PPU_TOP__DOT__Req_trans[8]));
            tracep->chgBit(oldp+201,(vlTOPp->PPU_TOP__DOT__Req_trans[9]));
            tracep->chgBit(oldp+202,(vlTOPp->PPU_TOP__DOT__Req_trans[10]));
            tracep->chgBit(oldp+203,(vlTOPp->PPU_TOP__DOT__Req_trans[11]));
            tracep->chgBit(oldp+204,(vlTOPp->PPU_TOP__DOT__Req_end[0]));
            tracep->chgBit(oldp+205,(vlTOPp->PPU_TOP__DOT__Req_end[1]));
            tracep->chgBit(oldp+206,(vlTOPp->PPU_TOP__DOT__Req_end[2]));
            tracep->chgBit(oldp+207,(vlTOPp->PPU_TOP__DOT__Req_end[3]));
            tracep->chgBit(oldp+208,(vlTOPp->PPU_TOP__DOT__Req_end[4]));
            tracep->chgBit(oldp+209,(vlTOPp->PPU_TOP__DOT__Req_end[5]));
            tracep->chgBit(oldp+210,(vlTOPp->PPU_TOP__DOT__Req_end[6]));
            tracep->chgBit(oldp+211,(vlTOPp->PPU_TOP__DOT__Req_end[7]));
            tracep->chgBit(oldp+212,(vlTOPp->PPU_TOP__DOT__Req_end[8]));
            tracep->chgBit(oldp+213,(vlTOPp->PPU_TOP__DOT__Req_end[9]));
            tracep->chgBit(oldp+214,(vlTOPp->PPU_TOP__DOT__Req_end[10]));
            tracep->chgBit(oldp+215,(vlTOPp->PPU_TOP__DOT__Req_end[11]));
            tracep->chgBit(oldp+216,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_ena));
            tracep->chgCData(oldp+217,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_pixel),8);
            tracep->chgBit(oldp+218,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_ena));
            tracep->chgCData(oldp+219,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_pixel),8);
            tracep->chgBit(oldp+220,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_ena));
            tracep->chgCData(oldp+221,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_pixel),8);
            tracep->chgBit(oldp+222,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_ena));
            tracep->chgCData(oldp+223,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_pixel),8);
            tracep->chgBit(oldp+224,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_ena));
            tracep->chgCData(oldp+225,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_pixel),8);
            tracep->chgBit(oldp+226,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_ena));
            tracep->chgCData(oldp+227,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_pixel),8);
            tracep->chgBit(oldp+228,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_ena));
            tracep->chgCData(oldp+229,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_pixel),8);
            tracep->chgBit(oldp+230,(vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_ena));
            tracep->chgCData(oldp+231,(vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_pixel),8);
            tracep->chgBit(oldp+232,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_ena));
            tracep->chgCData(oldp+233,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_pixel),8);
            tracep->chgBit(oldp+234,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_ena));
            tracep->chgCData(oldp+235,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_pixel),8);
            tracep->chgBit(oldp+236,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Pixel_valid));
            tracep->chgBit(oldp+237,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                                     [1U]));
            tracep->chgBit(oldp+238,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Pixel_valid));
            tracep->chgBit(oldp+239,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                                     [2U]));
            tracep->chgBit(oldp+240,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Pixel_valid));
            tracep->chgIData(oldp+241,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Pixel_RGB),18);
            tracep->chgBit(oldp+242,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Pixel_is_trans));
            tracep->chgBit(oldp+243,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                                     [3U]));
            tracep->chgBit(oldp+244,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Pixel_valid));
            tracep->chgIData(oldp+245,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Pixel_RGB),18);
            tracep->chgBit(oldp+246,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Pixel_is_trans));
            tracep->chgBit(oldp+247,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                                     [4U]));
            tracep->chgBit(oldp+248,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Pixel_valid));
            tracep->chgIData(oldp+249,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Pixel_RGB),18);
            tracep->chgBit(oldp+250,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Pixel_is_trans));
            tracep->chgBit(oldp+251,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                                     [5U]));
            tracep->chgBit(oldp+252,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Pixel_valid));
            tracep->chgIData(oldp+253,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Pixel_RGB),18);
            tracep->chgBit(oldp+254,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Pixel_is_trans));
            tracep->chgBit(oldp+255,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                                     [6U]));
            tracep->chgBit(oldp+256,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Pixel_valid));
            tracep->chgIData(oldp+257,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Pixel_RGB),18);
            tracep->chgBit(oldp+258,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Pixel_is_trans));
            tracep->chgBit(oldp+259,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                                     [7U]));
            tracep->chgBit(oldp+260,(vlSymsp->TOP__PPU_TOP__DOT__u_st.Pixel_valid));
            tracep->chgIData(oldp+261,(vlSymsp->TOP__PPU_TOP__DOT__u_st.Pixel_RGB),18);
            tracep->chgBit(oldp+262,(vlSymsp->TOP__PPU_TOP__DOT__u_st.Pixel_is_trans));
            tracep->chgBit(oldp+263,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                                     [8U]));
            tracep->chgBit(oldp+264,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Pixel_valid));
            tracep->chgIData(oldp+265,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Pixel_RGB),18);
            tracep->chgBit(oldp+266,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Pixel_is_trans));
            tracep->chgBit(oldp+267,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                                     [9U]));
            tracep->chgBit(oldp+268,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Pixel_valid));
            tracep->chgIData(oldp+269,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Pixel_RGB),18);
            tracep->chgBit(oldp+270,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Pixel_is_trans));
            tracep->chgBit(oldp+271,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                                     [0xaU]));
            tracep->chgQData(oldp+272,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__bg1_comp_data),64);
            tracep->chgQData(oldp+274,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__bg2_comp_data),64);
            tracep->chgQData(oldp+276,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__ch1_comp_data),64);
            tracep->chgQData(oldp+278,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__ch2_comp_data),64);
            tracep->chgQData(oldp+280,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__ch3_comp_data),64);
            tracep->chgQData(oldp+282,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__ch4_comp_data),64);
            tracep->chgQData(oldp+284,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__uni1_comp_data),64);
            tracep->chgQData(oldp+286,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__uni2_comp_data),64);
            tracep->chgQData(oldp+288,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__sc_comp_data),64);
            tracep->chgQData(oldp+290,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__st_comp_data),64);
            tracep->chgBit(oldp+292,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want));
            tracep->chgBit(oldp+293,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want));
            tracep->chgBit(oldp+294,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want));
            tracep->chgBit(oldp+295,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_inc_want));
            tracep->chgBit(oldp+296,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want));
            tracep->chgBit(oldp+297,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want));
            tracep->chgBit(oldp+298,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_inc_want));
            tracep->chgBit(oldp+299,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_inc_want));
            tracep->chgBit(oldp+300,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_inc_want));
            tracep->chgBit(oldp+301,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_inc_want));
            tracep->chgIData(oldp+302,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_RGB),18);
            tracep->chgBit(oldp+303,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_trans));
            tracep->chgBit(oldp+304,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_end));
            tracep->chgIData(oldp+305,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_RGB),18);
            tracep->chgBit(oldp+306,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_trans));
            tracep->chgBit(oldp+307,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_end));
            tracep->chgIData(oldp+308,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_RGB),18);
            tracep->chgBit(oldp+309,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_trans));
            tracep->chgBit(oldp+310,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_end));
            tracep->chgIData(oldp+311,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_RGB),18);
            tracep->chgBit(oldp+312,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_trans));
            tracep->chgBit(oldp+313,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_end));
            tracep->chgIData(oldp+314,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_RGB),18);
            tracep->chgBit(oldp+315,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_trans));
            tracep->chgBit(oldp+316,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_end));
            tracep->chgIData(oldp+317,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_RGB),18);
            tracep->chgBit(oldp+318,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_trans));
            tracep->chgBit(oldp+319,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_end));
            tracep->chgIData(oldp+320,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_RGB),18);
            tracep->chgBit(oldp+321,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_trans));
            tracep->chgBit(oldp+322,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_end));
            tracep->chgIData(oldp+323,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_RGB),18);
            tracep->chgBit(oldp+324,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_trans));
            tracep->chgBit(oldp+325,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_end));
            tracep->chgIData(oldp+326,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_RGB),18);
            tracep->chgBit(oldp+327,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_trans));
            tracep->chgBit(oldp+328,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_end));
            tracep->chgIData(oldp+329,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_RGB),18);
            tracep->chgBit(oldp+330,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_trans));
            tracep->chgBit(oldp+331,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_end));
            tracep->chgIData(oldp+332,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req11_RGB),18);
            tracep->chgBit(oldp+333,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req11_end));
            tracep->chgIData(oldp+334,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req12_RGB),18);
            tracep->chgBit(oldp+335,(vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req12_end));
            tracep->chgBit(oldp+336,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_hit));
            tracep->chgBit(oldp+337,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_hit));
            tracep->chgBit(oldp+338,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_hit));
            tracep->chgBit(oldp+339,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_hit));
            tracep->chgBit(oldp+340,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_hit));
            tracep->chgBit(oldp+341,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_hit));
            tracep->chgBit(oldp+342,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_hit));
            tracep->chgBit(oldp+343,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_hit));
            tracep->chgBit(oldp+344,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_hit));
            tracep->chgBit(oldp+345,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_hit));
            tracep->chgBit(oldp+346,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_hit1));
            tracep->chgBit(oldp+347,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_hit2));
            tracep->chgBit(oldp+348,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_hit3));
            tracep->chgBit(oldp+349,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_hit4));
            tracep->chgBit(oldp+350,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_hit1));
            tracep->chgBit(oldp+351,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_hit2));
            tracep->chgBit(oldp+352,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_hit3));
            tracep->chgBit(oldp+353,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_hit4));
            tracep->chgBit(oldp+354,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_hit1));
            tracep->chgBit(oldp+355,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_hit2));
            tracep->chgBit(oldp+356,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_hit3));
            tracep->chgBit(oldp+357,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_hit4));
            tracep->chgBit(oldp+358,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_hit1));
            tracep->chgBit(oldp+359,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_hit2));
            tracep->chgBit(oldp+360,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_hit3));
            tracep->chgBit(oldp+361,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_hit4));
            tracep->chgBit(oldp+362,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_hit1));
            tracep->chgBit(oldp+363,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_hit2));
            tracep->chgBit(oldp+364,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_hit3));
            tracep->chgBit(oldp+365,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_hit4));
            tracep->chgBit(oldp+366,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_hit1));
            tracep->chgBit(oldp+367,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_hit2));
            tracep->chgBit(oldp+368,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_hit3));
            tracep->chgBit(oldp+369,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_hit4));
            tracep->chgBit(oldp+370,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_hit1));
            tracep->chgBit(oldp+371,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_hit2));
            tracep->chgBit(oldp+372,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_hit3));
            tracep->chgBit(oldp+373,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_hit4));
            tracep->chgBit(oldp+374,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_hit1));
            tracep->chgBit(oldp+375,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_hit2));
            tracep->chgBit(oldp+376,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_hit3));
            tracep->chgBit(oldp+377,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_hit4));
            tracep->chgBit(oldp+378,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_hit1));
            tracep->chgBit(oldp+379,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_hit2));
            tracep->chgBit(oldp+380,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_hit3));
            tracep->chgBit(oldp+381,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_hit4));
            tracep->chgBit(oldp+382,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_hit1));
            tracep->chgBit(oldp+383,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_hit2));
            tracep->chgBit(oldp+384,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_hit3));
            tracep->chgBit(oldp+385,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_hit4));
            tracep->chgBit(oldp+386,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_is_zero));
            tracep->chgBit(oldp+387,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_is_zero));
            tracep->chgBit(oldp+388,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_is_zero));
            tracep->chgBit(oldp+389,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_is_zero));
            tracep->chgBit(oldp+390,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_is_zero));
            tracep->chgBit(oldp+391,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_is_zero));
            tracep->chgBit(oldp+392,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_is_zero));
            tracep->chgBit(oldp+393,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_is_zero));
            tracep->chgBit(oldp+394,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_is_zero));
            tracep->chgBit(oldp+395,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_is_zero));
            tracep->chgSData(oldp+396,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req),12);
            tracep->chgBit(oldp+397,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_w_ena));
            tracep->chgBit(oldp+398,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_w_ena));
            tracep->chgBit(oldp+399,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_w_ena));
            tracep->chgBit(oldp+400,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_w_ena));
            tracep->chgBit(oldp+401,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_w_ena));
            tracep->chgBit(oldp+402,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_w_ena));
            tracep->chgBit(oldp+403,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_w_ena));
            tracep->chgBit(oldp+404,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_w_ena));
            tracep->chgBit(oldp+405,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_w_ena));
            tracep->chgBit(oldp+406,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_w_ena));
            tracep->chgBit(oldp+407,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req11_w_ena));
            tracep->chgBit(oldp+408,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req12_w_ena));
            tracep->chgBit(oldp+409,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[0]));
            tracep->chgBit(oldp+410,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[1]));
            tracep->chgBit(oldp+411,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[2]));
            tracep->chgBit(oldp+412,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[3]));
            tracep->chgBit(oldp+413,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[4]));
            tracep->chgBit(oldp+414,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[5]));
            tracep->chgBit(oldp+415,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[6]));
            tracep->chgBit(oldp+416,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[7]));
            tracep->chgBit(oldp+417,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[8]));
            tracep->chgBit(oldp+418,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[9]));
            tracep->chgBit(oldp+419,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[10]));
            tracep->chgCData(oldp+420,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[0]),8);
            tracep->chgCData(oldp+421,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[1]),8);
            tracep->chgCData(oldp+422,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[2]),8);
            tracep->chgCData(oldp+423,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[3]),8);
            tracep->chgCData(oldp+424,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[4]),8);
            tracep->chgCData(oldp+425,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[5]),8);
            tracep->chgCData(oldp+426,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[6]),8);
            tracep->chgCData(oldp+427,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[7]),8);
            tracep->chgCData(oldp+428,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[8]),8);
            tracep->chgCData(oldp+429,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[9]),8);
            tracep->chgCData(oldp+430,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[10]),8);
            tracep->chgCData(oldp+431,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[0]),8);
            tracep->chgCData(oldp+432,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[1]),8);
            tracep->chgCData(oldp+433,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[2]),8);
            tracep->chgCData(oldp+434,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[3]),8);
            tracep->chgCData(oldp+435,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[4]),8);
            tracep->chgCData(oldp+436,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[5]),8);
            tracep->chgCData(oldp+437,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[6]),8);
            tracep->chgCData(oldp+438,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[7]),8);
            tracep->chgCData(oldp+439,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[8]),8);
            tracep->chgCData(oldp+440,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[9]),8);
            tracep->chgCData(oldp+441,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[10]),8);
            tracep->chgBit(oldp+442,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[0]));
            tracep->chgBit(oldp+443,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[1]));
            tracep->chgBit(oldp+444,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[2]));
            tracep->chgBit(oldp+445,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[3]));
            tracep->chgBit(oldp+446,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[4]));
            tracep->chgBit(oldp+447,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[5]));
            tracep->chgBit(oldp+448,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[6]));
            tracep->chgBit(oldp+449,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[7]));
            tracep->chgBit(oldp+450,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[8]));
            tracep->chgBit(oldp+451,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[9]));
            tracep->chgBit(oldp+452,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[10]));
            tracep->chgCData(oldp+453,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[0]),4);
            tracep->chgCData(oldp+454,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[1]),4);
            tracep->chgCData(oldp+455,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[2]),4);
            tracep->chgCData(oldp+456,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[3]),4);
            tracep->chgCData(oldp+457,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[4]),4);
            tracep->chgCData(oldp+458,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[5]),4);
            tracep->chgCData(oldp+459,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[6]),4);
            tracep->chgCData(oldp+460,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[7]),4);
            tracep->chgCData(oldp+461,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[8]),4);
            tracep->chgCData(oldp+462,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[9]),4);
            tracep->chgIData(oldp+463,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[0]),18);
            tracep->chgIData(oldp+464,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[1]),18);
            tracep->chgIData(oldp+465,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[2]),18);
            tracep->chgIData(oldp+466,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[3]),18);
            tracep->chgIData(oldp+467,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[4]),18);
            tracep->chgIData(oldp+468,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[5]),18);
            tracep->chgIData(oldp+469,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[6]),18);
            tracep->chgIData(oldp+470,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[7]),18);
            tracep->chgIData(oldp+471,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[8]),18);
            tracep->chgIData(oldp+472,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[9]),18);
            tracep->chgBit(oldp+473,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[0]));
            tracep->chgBit(oldp+474,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[1]));
            tracep->chgBit(oldp+475,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[2]));
            tracep->chgBit(oldp+476,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[3]));
            tracep->chgBit(oldp+477,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[4]));
            tracep->chgBit(oldp+478,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[5]));
            tracep->chgBit(oldp+479,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[6]));
            tracep->chgBit(oldp+480,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[7]));
            tracep->chgBit(oldp+481,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[8]));
            tracep->chgBit(oldp+482,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[9]));
            tracep->chgCData(oldp+483,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[0]),8);
            tracep->chgCData(oldp+484,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[1]),8);
            tracep->chgCData(oldp+485,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[2]),8);
            tracep->chgCData(oldp+486,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[3]),8);
            tracep->chgCData(oldp+487,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[4]),8);
            tracep->chgCData(oldp+488,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[5]),8);
            tracep->chgCData(oldp+489,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[6]),8);
            tracep->chgCData(oldp+490,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[7]),8);
            tracep->chgCData(oldp+491,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[8]),8);
            tracep->chgCData(oldp+492,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[9]),8);
            tracep->chgBit(oldp+493,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[0]));
            tracep->chgBit(oldp+494,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[1]));
            tracep->chgBit(oldp+495,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[2]));
            tracep->chgBit(oldp+496,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[3]));
            tracep->chgBit(oldp+497,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[4]));
            tracep->chgBit(oldp+498,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[5]));
            tracep->chgBit(oldp+499,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[6]));
            tracep->chgBit(oldp+500,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[7]));
            tracep->chgBit(oldp+501,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[8]));
            tracep->chgBit(oldp+502,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[9]));
            tracep->chgBit(oldp+503,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[0]));
            tracep->chgBit(oldp+504,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[1]));
            tracep->chgBit(oldp+505,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[2]));
            tracep->chgBit(oldp+506,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[3]));
            tracep->chgBit(oldp+507,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[4]));
            tracep->chgBit(oldp+508,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[5]));
            tracep->chgBit(oldp+509,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[6]));
            tracep->chgBit(oldp+510,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[7]));
            tracep->chgBit(oldp+511,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[8]));
            tracep->chgBit(oldp+512,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[9]));
            tracep->chgCData(oldp+513,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_state_next),2);
            tracep->chgCData(oldp+514,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_state_next),2);
            tracep->chgCData(oldp+515,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_state_next),2);
            tracep->chgCData(oldp+516,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_state_next),2);
            tracep->chgCData(oldp+517,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_state_next),2);
            tracep->chgCData(oldp+518,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_state_next),2);
            tracep->chgCData(oldp+519,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_state_next),2);
            tracep->chgCData(oldp+520,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_state_next),2);
            tracep->chgCData(oldp+521,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_state_next),2);
            tracep->chgCData(oldp+522,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_state_next),2);
            tracep->chgCData(oldp+523,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_next),4);
            tracep->chgBit(oldp+524,(vlTOPp->PPU_TOP__DOT__u_font__DOT__do_not_need_mix));
            tracep->chgCData(oldp+525,(vlTOPp->PPU_TOP__DOT__u_font__DOT__organized_alpha_0_4),3);
            tracep->chgIData(oldp+526,(vlTOPp->PPU_TOP__DOT__u_font__DOT__organized_RGB),18);
            tracep->chgBit(oldp+527,(vlTOPp->PPU_TOP__DOT__Req_end
                                     [0U]));
            tracep->chgIData(oldp+528,(vlTOPp->PPU_TOP__DOT__Req_RGB
                                       [0U]),18);
            tracep->chgBit(oldp+529,(vlTOPp->PPU_TOP__DOT__Req_trans
                                     [0U]));
            tracep->chgBit(oldp+530,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+531,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+532,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__main_state_next),4);
            tracep->chgCData(oldp+533,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+534,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+535,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+536,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+537,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+538,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+539,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+540,(vlTOPp->PPU_TOP__DOT__Req_end
                                     [1U]));
            tracep->chgIData(oldp+541,(vlTOPp->PPU_TOP__DOT__Req_RGB
                                       [1U]),18);
            tracep->chgBit(oldp+542,(vlTOPp->PPU_TOP__DOT__Req_trans
                                     [1U]));
            tracep->chgBit(oldp+543,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+544,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+545,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__main_state_next),4);
            tracep->chgCData(oldp+546,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+547,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+548,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+549,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+550,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+551,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+552,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+553,(vlTOPp->PPU_TOP__DOT__Req_end
                                     [2U]));
            tracep->chgIData(oldp+554,(vlTOPp->PPU_TOP__DOT__Req_RGB
                                       [2U]),18);
            tracep->chgBit(oldp+555,(vlTOPp->PPU_TOP__DOT__Req_trans
                                     [2U]));
            tracep->chgBit(oldp+556,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+557,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+558,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__main_state_next),4);
            tracep->chgCData(oldp+559,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+560,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+561,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+562,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+563,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+564,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+565,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+566,(vlTOPp->PPU_TOP__DOT__Req_end
                                     [3U]));
            tracep->chgIData(oldp+567,(vlTOPp->PPU_TOP__DOT__Req_RGB
                                       [3U]),18);
            tracep->chgBit(oldp+568,(vlTOPp->PPU_TOP__DOT__Req_trans
                                     [3U]));
            tracep->chgBit(oldp+569,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+570,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+571,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__main_state_next),4);
            tracep->chgCData(oldp+572,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+573,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+574,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+575,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+576,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+577,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+578,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+579,(vlTOPp->PPU_TOP__DOT__Req_end
                                     [4U]));
            tracep->chgIData(oldp+580,(vlTOPp->PPU_TOP__DOT__Req_RGB
                                       [4U]),18);
            tracep->chgBit(oldp+581,(vlTOPp->PPU_TOP__DOT__Req_trans
                                     [4U]));
            tracep->chgBit(oldp+582,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+583,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+584,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__main_state_next),4);
            tracep->chgCData(oldp+585,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+586,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+587,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+588,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+589,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+590,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+591,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+592,(vlTOPp->PPU_TOP__DOT__Req_end
                                     [5U]));
            tracep->chgIData(oldp+593,(vlTOPp->PPU_TOP__DOT__Req_RGB
                                       [5U]),18);
            tracep->chgBit(oldp+594,(vlTOPp->PPU_TOP__DOT__Req_trans
                                     [5U]));
            tracep->chgBit(oldp+595,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+596,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+597,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__main_state_next),4);
            tracep->chgCData(oldp+598,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+599,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+600,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+601,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+602,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+603,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+604,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+605,(vlTOPp->PPU_TOP__DOT__Req_end
                                     [6U]));
            tracep->chgIData(oldp+606,(vlTOPp->PPU_TOP__DOT__Req_RGB
                                       [6U]),18);
            tracep->chgBit(oldp+607,(vlTOPp->PPU_TOP__DOT__Req_trans
                                     [6U]));
            tracep->chgBit(oldp+608,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+609,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+610,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__main_state_next),4);
            tracep->chgCData(oldp+611,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+612,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+613,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+614,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+615,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+616,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+617,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+618,(vlTOPp->PPU_TOP__DOT__Req_end
                                     [7U]));
            tracep->chgIData(oldp+619,(vlTOPp->PPU_TOP__DOT__Req_RGB
                                       [7U]),18);
            tracep->chgBit(oldp+620,(vlTOPp->PPU_TOP__DOT__Req_trans
                                     [7U]));
            tracep->chgBit(oldp+621,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+622,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+623,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__main_state_next),4);
            tracep->chgCData(oldp+624,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+625,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+626,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+627,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+628,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+629,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+630,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+631,(vlTOPp->PPU_TOP__DOT__Req_end
                                     [8U]));
            tracep->chgIData(oldp+632,(vlTOPp->PPU_TOP__DOT__Req_RGB
                                       [8U]),18);
            tracep->chgBit(oldp+633,(vlTOPp->PPU_TOP__DOT__Req_trans
                                     [8U]));
            tracep->chgBit(oldp+634,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+635,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+636,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__main_state_next),4);
            tracep->chgCData(oldp+637,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+638,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+639,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+640,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+641,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+642,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+643,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__rgb_convert_end));
            tracep->chgBit(oldp+644,(vlTOPp->PPU_TOP__DOT__Req_end
                                     [9U]));
            tracep->chgIData(oldp+645,(vlTOPp->PPU_TOP__DOT__Req_RGB
                                       [9U]),18);
            tracep->chgBit(oldp+646,(vlTOPp->PPU_TOP__DOT__Req_trans
                                     [9U]));
            tracep->chgBit(oldp+647,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__RGB_reg_w_ena));
            tracep->chgBit(oldp+648,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__RGB_reg_ready));
            tracep->chgCData(oldp+649,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__main_state_next),4);
            tracep->chgCData(oldp+650,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__fifo_r_state_next),4);
            tracep->chgCData(oldp+651,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__fifo_r_state_counter_next),4);
            tracep->chgCData(oldp+652,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__valid_pixel_check),8);
            tracep->chgCData(oldp+653,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__rgb_r_state_next),4);
            tracep->chgCData(oldp+654,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__rgb_r_state_counter_next),4);
            tracep->chgBit(oldp+655,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__rgb_convert_req));
            tracep->chgBit(oldp+656,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__rgb_convert_end));
            tracep->chgQData(oldp+657,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_fifo_r_data),64);
            tracep->chgCData(oldp+659,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_state_next),4);
            tracep->chgCData(oldp+660,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_state_next),4);
            tracep->chgCData(oldp+661,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompress_state_next),4);
            tracep->chgBit(oldp+662,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgBit(oldp+663,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+664,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_fifo_r_data),64);
            tracep->chgCData(oldp+666,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_state_next),4);
            tracep->chgCData(oldp+667,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_state_next),4);
            tracep->chgCData(oldp+668,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompress_state_next),4);
            tracep->chgBit(oldp+669,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgBit(oldp+670,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+671,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_fifo_r_data),64);
            tracep->chgCData(oldp+673,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_state_next),4);
            tracep->chgCData(oldp+674,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_state_next),4);
            tracep->chgCData(oldp+675,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompress_state_next),4);
            tracep->chgBit(oldp+676,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgBit(oldp+677,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+678,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_fifo_r_data),64);
            tracep->chgCData(oldp+680,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_state_next),4);
            tracep->chgCData(oldp+681,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_state_next),4);
            tracep->chgCData(oldp+682,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompress_state_next),4);
            tracep->chgBit(oldp+683,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgBit(oldp+684,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+685,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_fifo_r_data),64);
            tracep->chgCData(oldp+687,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_state_next),4);
            tracep->chgCData(oldp+688,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_state_next),4);
            tracep->chgCData(oldp+689,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompress_state_next),4);
            tracep->chgBit(oldp+690,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgBit(oldp+691,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+692,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_fifo_r_data),64);
            tracep->chgCData(oldp+694,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_state_next),4);
            tracep->chgCData(oldp+695,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_state_next),4);
            tracep->chgCData(oldp+696,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompress_state_next),4);
            tracep->chgBit(oldp+697,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgBit(oldp+698,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+699,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_fifo_r_data),64);
            tracep->chgCData(oldp+701,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_state_next),4);
            tracep->chgCData(oldp+702,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_state_next),4);
            tracep->chgCData(oldp+703,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompress_state_next),4);
            tracep->chgBit(oldp+704,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgBit(oldp+705,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+706,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_fifo_r_data),64);
            tracep->chgCData(oldp+708,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_state_next),4);
            tracep->chgCData(oldp+709,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_state_next),4);
            tracep->chgCData(oldp+710,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompress_state_next),4);
            tracep->chgBit(oldp+711,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgBit(oldp+712,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+713,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_fifo_r_data),64);
            tracep->chgCData(oldp+715,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_state_next),4);
            tracep->chgCData(oldp+716,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_state_next),4);
            tracep->chgCData(oldp+717,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompress_state_next),4);
            tracep->chgBit(oldp+718,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgBit(oldp+719,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_FIFO_reg_counter_reset));
            tracep->chgQData(oldp+720,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_fifo_r_data),64);
            tracep->chgCData(oldp+722,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_state_next),4);
            tracep->chgCData(oldp+723,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_state_next),4);
            tracep->chgCData(oldp+724,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompress_state_next),4);
            tracep->chgBit(oldp+725,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_reg_counter_reset));
            tracep->chgBit(oldp+726,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_FIFO_reg_counter_reset));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgIData(oldp+727,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[0]),18);
            tracep->chgIData(oldp+728,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[1]),18);
            tracep->chgIData(oldp+729,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[2]),18);
            tracep->chgIData(oldp+730,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[3]),18);
            tracep->chgIData(oldp+731,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[4]),18);
            tracep->chgIData(oldp+732,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[5]),18);
            tracep->chgIData(oldp+733,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[6]),18);
            tracep->chgIData(oldp+734,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[7]),18);
            tracep->chgIData(oldp+735,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[8]),18);
            tracep->chgIData(oldp+736,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[9]),18);
            tracep->chgIData(oldp+737,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[10]),18);
            tracep->chgBit(oldp+738,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[0]));
            tracep->chgBit(oldp+739,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[1]));
            tracep->chgBit(oldp+740,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[2]));
            tracep->chgBit(oldp+741,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[3]));
            tracep->chgBit(oldp+742,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[4]));
            tracep->chgBit(oldp+743,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[5]));
            tracep->chgBit(oldp+744,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[6]));
            tracep->chgBit(oldp+745,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[7]));
            tracep->chgBit(oldp+746,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[8]));
            tracep->chgBit(oldp+747,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[9]));
            tracep->chgBit(oldp+748,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[10]));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+749,(vlTOPp->PPU_TOP__DOT__Clk_Counter),2);
            tracep->chgBit(oldp+750,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+751,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_empty_128));
            tracep->chgBit(oldp+752,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+753,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+754,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_empty_128));
            tracep->chgBit(oldp+755,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+756,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+757,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_empty_128));
            tracep->chgBit(oldp+758,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+759,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+760,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_empty_128));
            tracep->chgBit(oldp+761,(vlSymsp->TOP__PPU_TOP__DOT__u_st.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+762,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+763,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_empty_128));
            tracep->chgBit(oldp+764,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+765,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+766,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_empty_128));
            tracep->chgBit(oldp+767,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+768,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+769,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_empty_128));
            tracep->chgBit(oldp+770,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+771,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+772,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_empty_128));
            tracep->chgBit(oldp+773,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+774,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+775,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_empty_256));
            tracep->chgBit(oldp+776,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Decomp_fifo_dequeue));
            tracep->chgBit(oldp+777,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Decompressed_FIFO_r_master));
            tracep->chgBit(oldp+778,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_empty_256));
            tracep->chgBit(oldp+779,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Decomp_fifo_dequeue));
            tracep->chgIData(oldp+780,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Pixel_RGB),18);
            tracep->chgBit(oldp+781,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Pixel_is_trans));
            tracep->chgIData(oldp+782,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Pixel_RGB),18);
            tracep->chgBit(oldp+783,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Pixel_is_trans));
            tracep->chgIData(oldp+784,(vlTOPp->PPU_TOP__DOT__proc_final_pixel_RGB),18);
            tracep->chgBit(oldp+785,(vlTOPp->PPU_TOP__DOT__proc_final_pixel_valid));
            tracep->chgIData(oldp+786,(vlTOPp->PPU_TOP__DOT__font_mixed_pixel_RGB),18);
            tracep->chgBit(oldp+787,(vlTOPp->PPU_TOP__DOT__font_mixed_pixel_valid));
            tracep->chgBit(oldp+788,(vlTOPp->PPU_TOP__DOT__font_line_end));
            tracep->chgBit(oldp+789,(vlTOPp->PPU_TOP__DOT__font_frame_end));
            tracep->chgBit(oldp+790,((((0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompress_state)))));
            tracep->chgBit(oldp+791,((((0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompress_state)))));
            tracep->chgBit(oldp+792,((((0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompress_state)))));
            tracep->chgBit(oldp+793,((((0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompress_state)))));
            tracep->chgBit(oldp+794,((((0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompress_state)))));
            tracep->chgBit(oldp+795,((((0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompress_state)))));
            tracep->chgBit(oldp+796,((((0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompress_state)))));
            tracep->chgBit(oldp+797,((((0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompress_state)))));
            tracep->chgBit(oldp+798,((((0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompress_state)))));
            tracep->chgBit(oldp+799,((((0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_state)) 
                                       & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_state))) 
                                      & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompress_state)))));
            tracep->chgBit(oldp+800,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__All_Decompresser_is_IDLE));
            tracep->chgBit(oldp+801,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_ena));
            tracep->chgBit(oldp+802,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_dequeue));
            tracep->chgBit(oldp+803,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master));
            tracep->chgSData(oldp+804,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count),9);
            tracep->chgBit(oldp+805,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_ena));
            tracep->chgBit(oldp+806,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_dequeue));
            tracep->chgBit(oldp+807,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master));
            tracep->chgSData(oldp+808,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count),9);
            tracep->chgBit(oldp+809,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_ena));
            tracep->chgBit(oldp+810,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_dequeue));
            tracep->chgBit(oldp+811,((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))));
            tracep->chgCData(oldp+812,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count),8);
            tracep->chgBit(oldp+813,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_ena));
            tracep->chgBit(oldp+814,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_dequeue));
            tracep->chgBit(oldp+815,((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))));
            tracep->chgCData(oldp+816,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count),8);
            tracep->chgBit(oldp+817,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_ena));
            tracep->chgBit(oldp+818,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_dequeue));
            tracep->chgBit(oldp+819,((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))));
            tracep->chgCData(oldp+820,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count),8);
            tracep->chgBit(oldp+821,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_ena));
            tracep->chgBit(oldp+822,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_dequeue));
            tracep->chgBit(oldp+823,((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))));
            tracep->chgCData(oldp+824,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count),8);
            tracep->chgBit(oldp+825,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_ena));
            tracep->chgBit(oldp+826,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_dequeue));
            tracep->chgCData(oldp+827,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count),8);
            tracep->chgBit(oldp+828,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_ena));
            tracep->chgBit(oldp+829,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_dequeue));
            tracep->chgCData(oldp+830,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count),8);
            tracep->chgBit(oldp+831,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_ena));
            tracep->chgBit(oldp+832,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_dequeue));
            tracep->chgCData(oldp+833,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count),8);
            tracep->chgBit(oldp+834,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_ena));
            tracep->chgBit(oldp+835,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_dequeue));
            tracep->chgCData(oldp+836,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count),8);
            tracep->chgBit(oldp+837,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_en_a));
            tracep->chgBit(oldp+838,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_we_a));
            tracep->chgBit(oldp+839,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_en_b));
            tracep->chgSData(oldp+840,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_addr_a),9);
            tracep->chgSData(oldp+841,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_addr_b),9);
            tracep->chgQData(oldp+842,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_din_a),64);
            tracep->chgBit(oldp+844,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_en_a));
            tracep->chgBit(oldp+845,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_we_a));
            tracep->chgBit(oldp+846,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_en_b));
            tracep->chgSData(oldp+847,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_addr_a),9);
            tracep->chgSData(oldp+848,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_addr_b),9);
            tracep->chgQData(oldp+849,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_din_a),64);
            tracep->chgBit(oldp+851,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_en_a));
            tracep->chgBit(oldp+852,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_we_a));
            tracep->chgBit(oldp+853,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_en_b));
            tracep->chgSData(oldp+854,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_addr_a),9);
            tracep->chgSData(oldp+855,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_addr_b),9);
            tracep->chgQData(oldp+856,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_din_a),64);
            tracep->chgBit(oldp+858,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_en_a));
            tracep->chgBit(oldp+859,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_we_a));
            tracep->chgBit(oldp+860,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_en_b));
            tracep->chgSData(oldp+861,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_addr_a),9);
            tracep->chgSData(oldp+862,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_addr_b),9);
            tracep->chgQData(oldp+863,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_din_a),64);
            tracep->chgBit(oldp+865,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_en_a));
            tracep->chgBit(oldp+866,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_we_a));
            tracep->chgBit(oldp+867,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_en_b));
            tracep->chgSData(oldp+868,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_addr_a),9);
            tracep->chgSData(oldp+869,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_addr_b),9);
            tracep->chgQData(oldp+870,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_din_a),64);
            tracep->chgBit(oldp+872,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_en_a));
            tracep->chgBit(oldp+873,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_we_a));
            tracep->chgBit(oldp+874,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_en_b));
            tracep->chgSData(oldp+875,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_addr_a),9);
            tracep->chgSData(oldp+876,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_addr_b),9);
            tracep->chgQData(oldp+877,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_din_a),64);
            tracep->chgBit(oldp+879,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_en_a));
            tracep->chgBit(oldp+880,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_we_a));
            tracep->chgBit(oldp+881,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_en_b));
            tracep->chgSData(oldp+882,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_addr_a),9);
            tracep->chgSData(oldp+883,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_addr_b),9);
            tracep->chgQData(oldp+884,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_din_a),64);
            tracep->chgBit(oldp+886,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_en_a));
            tracep->chgBit(oldp+887,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_we_a));
            tracep->chgBit(oldp+888,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_en_b));
            tracep->chgSData(oldp+889,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_addr_a),9);
            tracep->chgSData(oldp+890,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_addr_b),9);
            tracep->chgQData(oldp+891,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_din_a),64);
            tracep->chgBit(oldp+893,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_en_a));
            tracep->chgBit(oldp+894,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_we_a));
            tracep->chgBit(oldp+895,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_en_b));
            tracep->chgSData(oldp+896,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_addr_a),9);
            tracep->chgSData(oldp+897,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_addr_b),9);
            tracep->chgQData(oldp+898,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_din_a),64);
            tracep->chgBit(oldp+900,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_en_a));
            tracep->chgBit(oldp+901,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_we_a));
            tracep->chgBit(oldp+902,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_en_b));
            tracep->chgSData(oldp+903,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_addr_a),9);
            tracep->chgSData(oldp+904,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_addr_b),9);
            tracep->chgQData(oldp+905,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_din_a),64);
            tracep->chgBit(oldp+907,(((0x20U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_ena))));
            tracep->chgCData(oldp+908,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_front),8);
            tracep->chgCData(oldp+909,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_rear),8);
            tracep->chgBit(oldp+910,(((0x20U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_ena))));
            tracep->chgCData(oldp+911,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_front),8);
            tracep->chgCData(oldp+912,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_rear),8);
            tracep->chgBit(oldp+913,(((0x20U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_ena))));
            tracep->chgCData(oldp+914,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_front),8);
            tracep->chgCData(oldp+915,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_rear),8);
            tracep->chgBit(oldp+916,(((0x20U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_ena))));
            tracep->chgCData(oldp+917,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_front),8);
            tracep->chgCData(oldp+918,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_rear),8);
            tracep->chgBit(oldp+919,(((0x20U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_ena))));
            tracep->chgCData(oldp+920,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_front),8);
            tracep->chgCData(oldp+921,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_rear),8);
            tracep->chgBit(oldp+922,(((0x20U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_ena))));
            tracep->chgCData(oldp+923,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_front),8);
            tracep->chgCData(oldp+924,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_rear),8);
            tracep->chgBit(oldp+925,(((0x20U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_ena))));
            tracep->chgCData(oldp+926,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_front),8);
            tracep->chgCData(oldp+927,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_rear),8);
            tracep->chgBit(oldp+928,(((0x20U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_ena))));
            tracep->chgCData(oldp+929,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_front),8);
            tracep->chgCData(oldp+930,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_rear),8);
            tracep->chgBit(oldp+931,(((0x40U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_ena))));
            tracep->chgSData(oldp+932,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_front),9);
            tracep->chgSData(oldp+933,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_rear),9);
            tracep->chgBit(oldp+934,(((0x40U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count)) 
                                      & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_ena))));
            tracep->chgSData(oldp+935,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_front),9);
            tracep->chgSData(oldp+936,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_rear),9);
            tracep->chgBit(oldp+937,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want));
            tracep->chgBit(oldp+938,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want));
            tracep->chgBit(oldp+939,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want));
            tracep->chgBit(oldp+940,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want));
            tracep->chgBit(oldp+941,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want));
            tracep->chgBit(oldp+942,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want));
            tracep->chgBit(oldp+943,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_dec_want));
            tracep->chgBit(oldp+944,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_dec_want));
            tracep->chgBit(oldp+945,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want));
            tracep->chgBit(oldp+946,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want));
            tracep->chgCData(oldp+947,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state),4);
            tracep->chgCData(oldp+948,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state),3);
            tracep->chgCData(oldp+949,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next),3);
            tracep->chgCData(oldp+950,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state),3);
            tracep->chgCData(oldp+951,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next),3);
            tracep->chgCData(oldp+952,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state),3);
            tracep->chgCData(oldp+953,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next),3);
            tracep->chgIData(oldp+954,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_next_ad),32);
            tracep->chgIData(oldp+955,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_next_ad),32);
            tracep->chgIData(oldp+956,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_next_ad),32);
            tracep->chgIData(oldp+957,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_next_ad),32);
            tracep->chgIData(oldp+958,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_next_ad),32);
            tracep->chgIData(oldp+959,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_next_ad),32);
            tracep->chgIData(oldp+960,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_next_ad),32);
            tracep->chgIData(oldp+961,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_next_ad),32);
            tracep->chgIData(oldp+962,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_next_ad),32);
            tracep->chgIData(oldp+963,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_next_ad),32);
            tracep->chgSData(oldp+964,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer),10);
            tracep->chgSData(oldp+965,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic),10);
            tracep->chgSData(oldp+966,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent),10);
            tracep->chgSData(oldp+967,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req),10);
            tracep->chgSData(oldp+968,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__urgent_req),10);
            tracep->chgSData(oldp+969,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req),10);
            tracep->chgSData(oldp+970,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req),10);
            tracep->chgBit(oldp+971,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__round_end));
            tracep->chgBit(oldp+972,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode));
            tracep->chgSData(oldp+973,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer),10);
            tracep->chgCData(oldp+974,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter),8);
            tracep->chgIData(oldp+975,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg),32);
            tracep->chgCData(oldp+976,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_pixel),8);
            tracep->chgIData(oldp+977,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_RGB),18);
            tracep->chgBit(oldp+978,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_valid));
            tracep->chgCData(oldp+979,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_pixel),8);
            tracep->chgIData(oldp+980,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_RGB),18);
            tracep->chgBit(oldp+981,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_valid));
            tracep->chgCData(oldp+982,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_pixel),8);
            tracep->chgIData(oldp+983,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_RGB),18);
            tracep->chgBit(oldp+984,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_valid));
            tracep->chgCData(oldp+985,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_pixel),8);
            tracep->chgIData(oldp+986,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_RGB),18);
            tracep->chgBit(oldp+987,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_valid));
            tracep->chgCData(oldp+988,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_pixel),8);
            tracep->chgIData(oldp+989,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_RGB),18);
            tracep->chgBit(oldp+990,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_valid));
            tracep->chgCData(oldp+991,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_pixel),8);
            tracep->chgIData(oldp+992,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_RGB),18);
            tracep->chgBit(oldp+993,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_valid));
            tracep->chgCData(oldp+994,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_pixel),8);
            tracep->chgIData(oldp+995,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_RGB),18);
            tracep->chgBit(oldp+996,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_valid));
            tracep->chgCData(oldp+997,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_pixel),8);
            tracep->chgIData(oldp+998,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_RGB),18);
            tracep->chgBit(oldp+999,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_valid));
            tracep->chgCData(oldp+1000,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_pixel),8);
            tracep->chgIData(oldp+1001,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_RGB),18);
            tracep->chgBit(oldp+1002,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_valid));
            tracep->chgCData(oldp+1003,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_pixel),8);
            tracep->chgIData(oldp+1004,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_RGB),18);
            tracep->chgBit(oldp+1005,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_valid));
            tracep->chgCData(oldp+1006,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_pixel),8);
            tracep->chgIData(oldp+1007,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_RGB),18);
            tracep->chgBit(oldp+1008,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_valid));
            tracep->chgCData(oldp+1009,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_pixel),8);
            tracep->chgIData(oldp+1010,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_RGB),18);
            tracep->chgBit(oldp+1011,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_valid));
            tracep->chgCData(oldp+1012,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_pixel),8);
            tracep->chgIData(oldp+1013,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_RGB),18);
            tracep->chgBit(oldp+1014,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_valid));
            tracep->chgCData(oldp+1015,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_pixel),8);
            tracep->chgIData(oldp+1016,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_RGB),18);
            tracep->chgBit(oldp+1017,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_valid));
            tracep->chgCData(oldp+1018,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req11_exclusive_pixel),8);
            tracep->chgIData(oldp+1019,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req11_exclusive_RGB),18);
            tracep->chgBit(oldp+1020,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req11_exclusive_valid));
            tracep->chgCData(oldp+1021,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req12_exclusive_pixel),8);
            tracep->chgIData(oldp+1022,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req12_exclusive_RGB),18);
            tracep->chgBit(oldp+1023,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req12_exclusive_valid));
            tracep->chgCData(oldp+1024,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_3),2);
            tracep->chgBit(oldp+1025,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_1));
            tracep->chgCData(oldp+1026,(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_2),2);
            tracep->chgBit(oldp+1027,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__is_new_pixel));
            tracep->chgIData(oldp+1028,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_RGB),18);
            tracep->chgBit(oldp+1029,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_is_trans));
            tracep->chgCData(oldp+1030,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_a),8);
            tracep->chgBit(oldp+1031,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_valid));
            tracep->chgBit(oldp+1032,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_ready));
            tracep->chgIData(oldp+1033,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_RGB),18);
            tracep->chgBit(oldp+1034,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_is_trans));
            tracep->chgCData(oldp+1035,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_a),8);
            tracep->chgBit(oldp+1036,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_valid));
            tracep->chgBit(oldp+1037,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_ready));
            tracep->chgIData(oldp+1038,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_RGB),18);
            tracep->chgBit(oldp+1039,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_is_trans));
            tracep->chgCData(oldp+1040,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_a),8);
            tracep->chgBit(oldp+1041,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_valid));
            tracep->chgBit(oldp+1042,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_ready));
            tracep->chgIData(oldp+1043,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_RGB),18);
            tracep->chgBit(oldp+1044,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_is_trans));
            tracep->chgCData(oldp+1045,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_a),8);
            tracep->chgBit(oldp+1046,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_valid));
            tracep->chgBit(oldp+1047,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_ready));
            tracep->chgIData(oldp+1048,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_RGB),18);
            tracep->chgBit(oldp+1049,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_is_trans));
            tracep->chgCData(oldp+1050,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_a),8);
            tracep->chgBit(oldp+1051,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_valid));
            tracep->chgBit(oldp+1052,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_ready));
            tracep->chgIData(oldp+1053,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_RGB),18);
            tracep->chgBit(oldp+1054,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_is_trans));
            tracep->chgCData(oldp+1055,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_a),8);
            tracep->chgBit(oldp+1056,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_valid));
            tracep->chgBit(oldp+1057,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_ready));
            tracep->chgIData(oldp+1058,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_RGB),18);
            tracep->chgBit(oldp+1059,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_is_trans));
            tracep->chgCData(oldp+1060,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_a),8);
            tracep->chgBit(oldp+1061,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_valid));
            tracep->chgBit(oldp+1062,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_ready));
            tracep->chgIData(oldp+1063,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_RGB),18);
            tracep->chgBit(oldp+1064,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_is_trans));
            tracep->chgCData(oldp+1065,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_a),8);
            tracep->chgBit(oldp+1066,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid));
            tracep->chgBit(oldp+1067,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_ready));
            tracep->chgIData(oldp+1068,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_RGB),18);
            tracep->chgBit(oldp+1069,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_is_trans));
            tracep->chgCData(oldp+1070,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_a),8);
            tracep->chgBit(oldp+1071,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid));
            tracep->chgBit(oldp+1072,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_ready));
            tracep->chgIData(oldp+1073,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_RGB),18);
            tracep->chgBit(oldp+1074,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_is_trans));
            tracep->chgCData(oldp+1075,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_a),8);
            tracep->chgBit(oldp+1076,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid));
            tracep->chgBit(oldp+1077,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_ready));
            tracep->chgBit(oldp+1078,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipeline_move));
            tracep->chgSData(oldp+1079,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe1_R),15);
            tracep->chgSData(oldp+1080,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe1_G),15);
            tracep->chgSData(oldp+1081,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe1_B),15);
            tracep->chgBit(oldp+1082,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe1_is_trans));
            tracep->chgBit(oldp+1083,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe1_valid));
            tracep->chgSData(oldp+1084,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe2_R),15);
            tracep->chgSData(oldp+1085,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe2_G),15);
            tracep->chgSData(oldp+1086,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe2_B),15);
            tracep->chgBit(oldp+1087,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe2_is_trans));
            tracep->chgBit(oldp+1088,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe2_valid));
            tracep->chgSData(oldp+1089,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe3_R),15);
            tracep->chgSData(oldp+1090,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe3_G),15);
            tracep->chgSData(oldp+1091,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe3_B),15);
            tracep->chgBit(oldp+1092,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe3_is_trans));
            tracep->chgBit(oldp+1093,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe3_valid));
            tracep->chgSData(oldp+1094,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe4_R),15);
            tracep->chgSData(oldp+1095,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe4_G),15);
            tracep->chgSData(oldp+1096,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe4_B),15);
            tracep->chgBit(oldp+1097,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe4_is_trans));
            tracep->chgBit(oldp+1098,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe4_valid));
            tracep->chgSData(oldp+1099,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe5_R),15);
            tracep->chgSData(oldp+1100,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe5_G),15);
            tracep->chgSData(oldp+1101,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe5_B),15);
            tracep->chgBit(oldp+1102,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe5_is_trans));
            tracep->chgBit(oldp+1103,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe5_valid));
            tracep->chgSData(oldp+1104,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe6_R),15);
            tracep->chgSData(oldp+1105,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe6_G),15);
            tracep->chgSData(oldp+1106,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe6_B),15);
            tracep->chgBit(oldp+1107,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe6_is_trans));
            tracep->chgBit(oldp+1108,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe6_valid));
            tracep->chgSData(oldp+1109,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe7_R),15);
            tracep->chgSData(oldp+1110,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe7_G),15);
            tracep->chgSData(oldp+1111,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe7_B),15);
            tracep->chgBit(oldp+1112,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe7_is_trans));
            tracep->chgBit(oldp+1113,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe7_valid));
            tracep->chgSData(oldp+1114,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe8_R),15);
            tracep->chgSData(oldp+1115,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe8_G),15);
            tracep->chgSData(oldp+1116,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe8_B),15);
            tracep->chgBit(oldp+1117,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe8_is_trans));
            tracep->chgBit(oldp+1118,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe8_valid));
            tracep->chgSData(oldp+1119,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe9_R),15);
            tracep->chgSData(oldp+1120,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe9_G),15);
            tracep->chgSData(oldp+1121,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe9_B),15);
            tracep->chgBit(oldp+1122,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe9_is_trans));
            tracep->chgBit(oldp+1123,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe9_valid));
            tracep->chgBit(oldp+1124,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__all_fsm_reset));
            tracep->chgCData(oldp+1125,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_state),2);
            tracep->chgCData(oldp+1126,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_state),2);
            tracep->chgCData(oldp+1127,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_state),2);
            tracep->chgCData(oldp+1128,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_state),2);
            tracep->chgCData(oldp+1129,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_state),2);
            tracep->chgCData(oldp+1130,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_state),2);
            tracep->chgCData(oldp+1131,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_state),2);
            tracep->chgCData(oldp+1132,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_state),2);
            tracep->chgCData(oldp+1133,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_state),2);
            tracep->chgCData(oldp+1134,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_state),2);
            tracep->chgCData(oldp+1135,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state),4);
            tracep->chgSData(oldp+1136,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_x),9);
            tracep->chgSData(oldp+1137,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_y),9);
            tracep->chgSData(oldp+1138,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_x_next),9);
            tracep->chgSData(oldp+1139,(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_y_next),9);
            tracep->chgSData(oldp+1140,(vlTOPp->PPU_TOP__DOT__u_font__DOT__fontmap_skid_data),16);
            tracep->chgBit(oldp+1141,(vlTOPp->PPU_TOP__DOT__u_font__DOT__fontmap_skid_valid));
            tracep->chgSData(oldp+1142,(vlTOPp->PPU_TOP__DOT__u_font__DOT__korea_bitmap_skid_data),16);
            tracep->chgBit(oldp+1143,(vlTOPp->PPU_TOP__DOT__u_font__DOT__korea_bitmap_skid_valid));
            tracep->chgCData(oldp+1144,(vlTOPp->PPU_TOP__DOT__u_font__DOT__ascii_bitmap_skid_data),8);
            tracep->chgBit(oldp+1145,(vlTOPp->PPU_TOP__DOT__u_font__DOT__ascii_bitmap_skid_valid));
            tracep->chgCData(oldp+1146,(vlTOPp->PPU_TOP__DOT__u_font__DOT__custom_tile_bitmap_skid_data),8);
            tracep->chgBit(oldp+1147,(vlTOPp->PPU_TOP__DOT__u_font__DOT__custom_tile_bitmap_skid_valid));
            tracep->chgCData(oldp+1148,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pixel_state),4);
            tracep->chgCData(oldp+1149,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pixel_state_next),4);
            tracep->chgCData(oldp+1150,(vlTOPp->PPU_TOP__DOT__u_font__DOT__output_state),4);
            tracep->chgCData(oldp+1151,(vlTOPp->PPU_TOP__DOT__u_font__DOT__output_state_next),4);
            tracep->chgCData(oldp+1152,(vlTOPp->PPU_TOP__DOT__u_font__DOT__font_state),4);
            tracep->chgCData(oldp+1153,(vlTOPp->PPU_TOP__DOT__u_font__DOT__font_state_next),4);
            tracep->chgCData(oldp+1154,(vlTOPp->PPU_TOP__DOT__u_font__DOT__counter_0_39),6);
            tracep->chgCData(oldp+1155,(vlTOPp->PPU_TOP__DOT__u_font__DOT__counter_0_15),4);
            tracep->chgCData(oldp+1156,(vlTOPp->PPU_TOP__DOT__u_font__DOT__counter_0_14),6);
            tracep->chgCData(oldp+1157,(vlTOPp->PPU_TOP__DOT__u_font__DOT__counter_font_x),6);
            tracep->chgBit(oldp+1158,(vlTOPp->PPU_TOP__DOT__u_font__DOT__counter_0_39_reset));
            tracep->chgBit(oldp+1159,(vlTOPp->PPU_TOP__DOT__u_font__DOT__counter_font_x_reset));
            tracep->chgBit(oldp+1160,(vlTOPp->PPU_TOP__DOT__u_font__DOT__counter_font_x_reset_reg));
            tracep->chgBit(oldp+1161,(vlTOPp->PPU_TOP__DOT__u_font__DOT__counter_font_x_reset_reg_reg));
            tracep->chgIData(oldp+1162,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_1_reg),18);
            tracep->chgBit(oldp+1163,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_1_reg_valid));
            tracep->chgIData(oldp+1164,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_2_reg),18);
            tracep->chgBit(oldp+1165,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_2_reg_valid));
            tracep->chgIData(oldp+1166,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_3_reg),18);
            tracep->chgBit(oldp+1167,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_3_reg_valid));
            tracep->chgIData(oldp+1168,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_4_reg),18);
            tracep->chgBit(oldp+1169,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_4_reg_valid));
            tracep->chgIData(oldp+1170,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_5_reg),18);
            tracep->chgBit(oldp+1171,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_5_reg_valid));
            tracep->chgIData(oldp+1172,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_6_reg),18);
            tracep->chgBit(oldp+1173,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_6_reg_valid));
            tracep->chgIData(oldp+1174,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_7_reg),18);
            tracep->chgBit(oldp+1175,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_7_reg_valid));
            tracep->chgIData(oldp+1176,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_8_reg),18);
            tracep->chgBit(oldp+1177,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_8_reg_valid));
            tracep->chgIData(oldp+1178,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_1),18);
            tracep->chgBit(oldp+1179,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_1_valid));
            tracep->chgIData(oldp+1180,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_2),18);
            tracep->chgBit(oldp+1181,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_2_valid));
            tracep->chgIData(oldp+1182,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_3),18);
            tracep->chgBit(oldp+1183,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_3_valid));
            tracep->chgIData(oldp+1184,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_4),18);
            tracep->chgBit(oldp+1185,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_4_valid));
            tracep->chgIData(oldp+1186,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_5),18);
            tracep->chgBit(oldp+1187,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_5_valid));
            tracep->chgIData(oldp+1188,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_6),18);
            tracep->chgBit(oldp+1189,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_6_valid));
            tracep->chgIData(oldp+1190,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_7),18);
            tracep->chgBit(oldp+1191,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_7_valid));
            tracep->chgIData(oldp+1192,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_8),18);
            tracep->chgBit(oldp+1193,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_8_valid));
            tracep->chgBit(oldp+1194,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_shift));
            tracep->chgSData(oldp+1195,(vlTOPp->PPU_TOP__DOT__u_font__DOT__output_pixel_x),9);
            tracep->chgSData(oldp+1196,(vlTOPp->PPU_TOP__DOT__u_font__DOT__output_pixel_y),9);
            tracep->chgBit(oldp+1197,(vlTOPp->PPU_TOP__DOT__u_font__DOT__output_pixel_inc));
            tracep->chgBit(oldp+1198,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_reg_shift));
            tracep->chgBit(oldp+1199,(vlTOPp->PPU_TOP__DOT__u_font__DOT__RGB_reg_all_full));
            tracep->chgBit(oldp+1200,(vlTOPp->PPU_TOP__DOT__u_font__DOT__font_mix_end));
            tracep->chgBit(oldp+1201,(vlTOPp->PPU_TOP__DOT__u_font__DOT__mixed_RGB_w_ena));
            tracep->chgBit(oldp+1202,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipeline_move));
            tracep->chgBit(oldp+1203,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe1_valid_next));
            tracep->chgCData(oldp+1204,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe1_counter_16_next),4);
            tracep->chgCData(oldp+1205,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe1_font_x_next),6);
            tracep->chgCData(oldp+1206,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe1_font_y_next),6);
            tracep->chgBit(oldp+1207,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe1_next_line_next));
            tracep->chgBit(oldp+1208,(vlTOPp->PPU_TOP__DOT__u_font__DOT__bram_font_read_ena));
            tracep->chgBit(oldp+1209,(vlTOPp->PPU_TOP__DOT__u_font__DOT__bram_font_read_ena_reg));
            tracep->chgBit(oldp+1210,(vlTOPp->PPU_TOP__DOT__u_font__DOT__bram_map_read_ena));
            tracep->chgBit(oldp+1211,(vlTOPp->PPU_TOP__DOT__u_font__DOT__bram_map_read_ena_reg));
            tracep->chgBit(oldp+1212,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe1_valid));
            tracep->chgCData(oldp+1213,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe1_counter_16),4);
            tracep->chgCData(oldp+1214,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe1_font_x),6);
            tracep->chgCData(oldp+1215,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe1_font_y),6);
            tracep->chgBit(oldp+1216,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe1_next_line));
            tracep->chgBit(oldp+1217,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe2_valid));
            tracep->chgCData(oldp+1218,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe2_mask),4);
            tracep->chgCData(oldp+1219,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe2_font_x),6);
            tracep->chgCData(oldp+1220,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe2_font_y),6);
            tracep->chgCData(oldp+1221,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe2_counter_16),4);
            tracep->chgBit(oldp+1222,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe2_next_line));
            tracep->chgBit(oldp+1223,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_valid));
            tracep->chgSData(oldp+1224,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_UTF16),16);
            tracep->chgCData(oldp+1225,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_font_x),6);
            tracep->chgCData(oldp+1226,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_font_y),6);
            tracep->chgCData(oldp+1227,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_counter_16),4);
            tracep->chgBit(oldp+1228,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_next_line));
            tracep->chgBit(oldp+1229,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe4_valid));
            tracep->chgSData(oldp+1230,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe4_UTF16),16);
            tracep->chgBit(oldp+1231,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe4_is_korea));
            tracep->chgBit(oldp+1232,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe4_is_ascii));
            tracep->chgBit(oldp+1233,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe4_is_custom));
            tracep->chgCData(oldp+1234,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe4_jung_sung_index),5);
            tracep->chgCData(oldp+1235,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe4_chong_sung_index),5);
            tracep->chgCData(oldp+1236,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe4_cho_sung_index),5);
            tracep->chgCData(oldp+1237,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe4_font_x),6);
            tracep->chgCData(oldp+1238,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe4_font_y),6);
            tracep->chgCData(oldp+1239,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe4_counter_16),4);
            tracep->chgBit(oldp+1240,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe4_next_line));
            tracep->chgBit(oldp+1241,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe5_valid));
            tracep->chgCData(oldp+1242,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe5_mask),4);
            tracep->chgBit(oldp+1243,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe5_cho_sung_what_bram));
            tracep->chgBit(oldp+1244,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe5_custom_what_bram));
            tracep->chgBit(oldp+1245,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe5_is_korea));
            tracep->chgBit(oldp+1246,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe5_is_ascii));
            tracep->chgBit(oldp+1247,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe5_is_custom));
            tracep->chgCData(oldp+1248,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe5_font_x),6);
            tracep->chgCData(oldp+1249,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe5_font_y),6);
            tracep->chgCData(oldp+1250,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe5_counter_16),4);
            tracep->chgBit(oldp+1251,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe5_next_line));
            tracep->chgBit(oldp+1252,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe6_valid));
            tracep->chgBit(oldp+1253,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe6_is_korea));
            tracep->chgBit(oldp+1254,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe6_is_ascii));
            tracep->chgBit(oldp+1255,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe6_is_custom));
            tracep->chgSData(oldp+1256,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe6_korea_font_bitmap),16);
            tracep->chgCData(oldp+1257,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe6_ascii_font_bitmap),8);
            tracep->chgCData(oldp+1258,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe6_custom_tile_bitmap),8);
            tracep->chgCData(oldp+1259,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe6_font_x),6);
            tracep->chgCData(oldp+1260,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe6_font_y),6);
            tracep->chgCData(oldp+1261,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe6_counter_16),4);
            tracep->chgBit(oldp+1262,(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe6_next_line));
            tracep->chgCData(oldp+1263,(vlTOPp->PPU_TOP__DOT__u_font__DOT__cho_sung_set),4);
            tracep->chgCData(oldp+1264,(vlTOPp->PPU_TOP__DOT__u_font__DOT__jung_sung_set),4);
            tracep->chgCData(oldp+1265,(vlTOPp->PPU_TOP__DOT__u_font__DOT__chong_sung_set),4);
            tracep->chgSData(oldp+1266,(vlTOPp->PPU_TOP__DOT__u_font__DOT__cho_sung_bram_ad),10);
            tracep->chgSData(oldp+1267,(vlTOPp->PPU_TOP__DOT__u_font__DOT__jung_sung_bram_ad),10);
            tracep->chgSData(oldp+1268,(vlTOPp->PPU_TOP__DOT__u_font__DOT__chong_sung_bram_ad),10);
            tracep->chgSData(oldp+1269,(vlTOPp->PPU_TOP__DOT__u_font__DOT__ascii_bram_ad),10);
            tracep->chgSData(oldp+1270,(vlTOPp->PPU_TOP__DOT__u_font__DOT__custom_tile_bram_ad),10);
            tracep->chgSData(oldp+1271,((0x3fffU & 
                                         ((IData)(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_UTF16) 
                                          - (IData)(0x2c00U)))),14);
            tracep->chgSData(oldp+1272,((0x3fffU & 
                                         (((IData)(0x2493U) 
                                           * (0x3fffU 
                                              & ((IData)(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_UTF16) 
                                                 - (IData)(0x2c00U)))) 
                                          >> 0x12U))),14);
            tracep->chgCData(oldp+1273,((0x1fU & ((IData)(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_UTF16) 
                                                  - 
                                                  (((0x3ff0U 
                                                     & (((IData)(0x2493U) 
                                                         * 
                                                         (0x3fffU 
                                                          & ((IData)(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_UTF16) 
                                                             - (IData)(0x2c00U)))) 
                                                        >> 0xeU)) 
                                                    + 
                                                    (0x3ff8U 
                                                     & (((IData)(0x2493U) 
                                                         * 
                                                         (0x3fffU 
                                                          & ((IData)(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_UTF16) 
                                                             - (IData)(0x2c00U)))) 
                                                        >> 0xfU))) 
                                                   + 
                                                   (0x3ffcU 
                                                    & (((IData)(0x2493U) 
                                                        * 
                                                        (0x3fffU 
                                                         & ((IData)(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_UTF16) 
                                                            - (IData)(0x2c00U)))) 
                                                       >> 0x10U)))))),5);
            tracep->chgCData(oldp+1274,((0x1fU & (((IData)(0xc31U) 
                                                   * 
                                                   (0x3fffU 
                                                    & (((IData)(0x2493U) 
                                                        * 
                                                        (0x3fffU 
                                                         & ((IData)(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_UTF16) 
                                                            - (IData)(0x2c00U)))) 
                                                       >> 0x12U))) 
                                                  >> 0x10U))),5);
            tracep->chgCData(oldp+1275,((0x1fU & ((
                                                   ((IData)(0x2493U) 
                                                    * 
                                                    (0x3fffU 
                                                     & ((IData)(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_UTF16) 
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
                                                               & ((IData)(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_UTF16) 
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
                                                               & ((IData)(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_UTF16) 
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
                                                           & ((IData)(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_UTF16) 
                                                              - (IData)(0x2c00U)))) 
                                                         >> 0x12U))) 
                                                    >> 0x10U))))),5);
            tracep->chgBit(oldp+1276,(vlTOPp->PPU_TOP__DOT__u_font__DOT__is_korea_wire));
            tracep->chgBit(oldp+1277,(((0x20U <= (IData)(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_UTF16)) 
                                       & (0x7eU >= (IData)(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_UTF16)))));
            tracep->chgBit(oldp+1278,(((0xe000U <= (IData)(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_UTF16)) 
                                       & (0xe0abU >= (IData)(vlTOPp->PPU_TOP__DOT__u_font__DOT__pipe3_UTF16)))));
            tracep->chgQData(oldp+1279,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1281,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1282,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1283,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1284,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1285,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1286,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__main_state),4);
            tracep->chgCData(oldp+1287,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1288,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1289,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1290,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1291,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1292,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1293,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1294,(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.__PVT__rgb_r_state_counter),4);
            tracep->chgQData(oldp+1295,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1297,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1298,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1299,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1300,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1301,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1302,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__main_state),4);
            tracep->chgCData(oldp+1303,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1304,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1305,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1306,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1307,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1308,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1309,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1310,(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.__PVT__rgb_r_state_counter),4);
            tracep->chgQData(oldp+1311,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1313,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1314,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1315,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1316,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1317,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1318,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__main_state),4);
            tracep->chgCData(oldp+1319,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1320,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1321,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1322,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1323,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1324,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1325,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1326,(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.__PVT__rgb_r_state_counter),4);
            tracep->chgQData(oldp+1327,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1329,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1330,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1331,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1332,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1333,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1334,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__main_state),4);
            tracep->chgCData(oldp+1335,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1336,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1337,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1338,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1339,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1340,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1341,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1342,(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.__PVT__rgb_r_state_counter),4);
            tracep->chgQData(oldp+1343,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1345,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1346,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1347,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1348,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1349,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1350,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__main_state),4);
            tracep->chgCData(oldp+1351,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1352,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1353,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1354,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1355,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1356,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1357,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1358,(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.__PVT__rgb_r_state_counter),4);
            tracep->chgQData(oldp+1359,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1361,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1362,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1363,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1364,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1365,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1366,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__main_state),4);
            tracep->chgCData(oldp+1367,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1368,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1369,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1370,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1371,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1372,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1373,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1374,(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.__PVT__rgb_r_state_counter),4);
            tracep->chgQData(oldp+1375,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1377,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1378,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1379,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1380,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1381,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1382,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__main_state),4);
            tracep->chgCData(oldp+1383,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1384,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1385,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1386,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1387,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1388,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1389,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1390,(vlSymsp->TOP__PPU_TOP__DOT__u_sc.__PVT__rgb_r_state_counter),4);
            tracep->chgQData(oldp+1391,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1393,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1394,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1395,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1396,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1397,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1398,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__main_state),4);
            tracep->chgCData(oldp+1399,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1400,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1401,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1402,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1403,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1404,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1405,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1406,(vlSymsp->TOP__PPU_TOP__DOT__u_st.__PVT__rgb_r_state_counter),4);
            tracep->chgQData(oldp+1407,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1409,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1410,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1411,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1412,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1413,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1414,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__main_state),4);
            tracep->chgCData(oldp+1415,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1416,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1417,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1418,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1419,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1420,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1421,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1422,(vlSymsp->TOP__PPU_TOP__DOT__u_un1.__PVT__rgb_r_state_counter),4);
            tracep->chgQData(oldp+1423,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__decomp_pixel_reg),64);
            tracep->chgIData(oldp+1425,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__RGB_reg),18);
            tracep->chgBit(oldp+1426,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__RGB_reg_trans));
            tracep->chgBit(oldp+1427,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__RGB_reg_valid));
            tracep->chgSData(oldp+1428,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__personal_counter_x),9);
            tracep->chgSData(oldp+1429,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__personal_counter_y),9);
            tracep->chgCData(oldp+1430,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__main_state),4);
            tracep->chgCData(oldp+1431,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__main_state_counter),4);
            tracep->chgCData(oldp+1432,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__main_state_counter_next),4);
            tracep->chgCData(oldp+1433,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__fifo_r_state),4);
            tracep->chgCData(oldp+1434,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__fifo_r_state_counter),4);
            tracep->chgCData(oldp+1435,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__read_pixel_x),6);
            tracep->chgSData(oldp+1436,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__read_pixel_y),9);
            tracep->chgCData(oldp+1437,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__rgb_r_state),4);
            tracep->chgCData(oldp+1438,(vlSymsp->TOP__PPU_TOP__DOT__u_un2.__PVT__rgb_r_state_counter),4);
            tracep->chgSData(oldp+1439,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count),9);
            tracep->chgBit(oldp+1440,(((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                       & (((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
                                          & (0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))))));
            tracep->chgBit(oldp+1441,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1442,((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_state))));
            tracep->chgBit(oldp+1443,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1444,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1445,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1446,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1448,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1449,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1450,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_front_256),9);
            tracep->chgSData(oldp+1451,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_rear_256),9);
            tracep->chgCData(oldp+1452,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_front_128),8);
            tracep->chgBit(oldp+1453,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_front_128_inc_ena));
            tracep->chgCData(oldp+1454,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_rear_128),8);
            tracep->chgBit(oldp+1455,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+1456,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__fifo_full_128));
            tracep->chgCData(oldp+1457,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_state),4);
            tracep->chgCData(oldp+1458,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_state),4);
            tracep->chgCData(oldp+1459,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompress_state),4);
            tracep->chgQData(oldp+1460,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1462,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1463,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1464,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgQData(oldp+1465,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1467,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1468,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1469,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgCData(oldp+1470,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_8),8);
            tracep->chgBit(oldp+1471,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_8_valid));
            tracep->chgCData(oldp+1472,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1473,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1474,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1475,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1476,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1477,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1478,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1479,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1480,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1481,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1482,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1483,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_end_req));
            tracep->chgCData(oldp+1484,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_8),8);
            tracep->chgBit(oldp+1485,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_8_valid));
            tracep->chgBit(oldp+1486,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_8_ready));
            tracep->chgSData(oldp+1487,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count),9);
            tracep->chgBit(oldp+1488,(((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                       & (((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
                                          & (1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))))));
            tracep->chgBit(oldp+1489,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1490,((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_state))));
            tracep->chgBit(oldp+1491,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1492,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1493,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1494,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1496,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1497,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1498,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_front_256),9);
            tracep->chgSData(oldp+1499,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_rear_256),9);
            tracep->chgCData(oldp+1500,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_front_128),8);
            tracep->chgBit(oldp+1501,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_front_128_inc_ena));
            tracep->chgCData(oldp+1502,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_rear_128),8);
            tracep->chgBit(oldp+1503,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+1504,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_full_128));
            tracep->chgCData(oldp+1505,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_state),4);
            tracep->chgCData(oldp+1506,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_state),4);
            tracep->chgCData(oldp+1507,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompress_state),4);
            tracep->chgQData(oldp+1508,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1510,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1511,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1512,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgQData(oldp+1513,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1515,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1516,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1517,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgCData(oldp+1518,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_8),8);
            tracep->chgBit(oldp+1519,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_8_valid));
            tracep->chgCData(oldp+1520,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1521,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1522,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1523,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1524,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1525,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1526,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1527,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1528,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1529,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1530,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1531,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_end_req));
            tracep->chgCData(oldp+1532,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_8),8);
            tracep->chgBit(oldp+1533,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_8_valid));
            tracep->chgBit(oldp+1534,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_8_ready));
            tracep->chgSData(oldp+1535,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count),9);
            tracep->chgBit(oldp+1536,(((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                       & (((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
                                          & (2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))))));
            tracep->chgBit(oldp+1537,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1538,((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_state))));
            tracep->chgBit(oldp+1539,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1540,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1541,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1542,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1544,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1545,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1546,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_front_256),9);
            tracep->chgSData(oldp+1547,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_rear_256),9);
            tracep->chgCData(oldp+1548,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_front_128),8);
            tracep->chgBit(oldp+1549,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_front_128_inc_ena));
            tracep->chgCData(oldp+1550,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_rear_128),8);
            tracep->chgBit(oldp+1551,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+1552,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_full_128));
            tracep->chgCData(oldp+1553,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_state),4);
            tracep->chgCData(oldp+1554,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_state),4);
            tracep->chgCData(oldp+1555,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompress_state),4);
            tracep->chgQData(oldp+1556,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1558,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1559,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1560,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgQData(oldp+1561,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1563,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1564,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1565,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgCData(oldp+1566,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_8),8);
            tracep->chgBit(oldp+1567,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_8_valid));
            tracep->chgCData(oldp+1568,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1569,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1570,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1571,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1572,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1573,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1574,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1575,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1576,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1577,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1578,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1579,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_end_req));
            tracep->chgCData(oldp+1580,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_8),8);
            tracep->chgBit(oldp+1581,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_8_valid));
            tracep->chgBit(oldp+1582,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_8_ready));
            tracep->chgSData(oldp+1583,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count),9);
            tracep->chgBit(oldp+1584,(((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                       & (((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
                                          & (3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))))));
            tracep->chgBit(oldp+1585,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1586,((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_state))));
            tracep->chgBit(oldp+1587,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1588,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1589,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1590,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1592,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1593,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1594,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_front_256),9);
            tracep->chgSData(oldp+1595,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_rear_256),9);
            tracep->chgCData(oldp+1596,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_front_128),8);
            tracep->chgBit(oldp+1597,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_front_128_inc_ena));
            tracep->chgCData(oldp+1598,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_rear_128),8);
            tracep->chgBit(oldp+1599,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+1600,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__fifo_full_128));
            tracep->chgCData(oldp+1601,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_state),4);
            tracep->chgCData(oldp+1602,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_state),4);
            tracep->chgCData(oldp+1603,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompress_state),4);
            tracep->chgQData(oldp+1604,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1606,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1607,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1608,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgQData(oldp+1609,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1611,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1612,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1613,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgCData(oldp+1614,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_8),8);
            tracep->chgBit(oldp+1615,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_8_valid));
            tracep->chgCData(oldp+1616,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1617,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1618,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1619,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1620,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1621,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1622,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1623,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1624,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1625,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1626,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1627,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_end_req));
            tracep->chgCData(oldp+1628,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_8),8);
            tracep->chgBit(oldp+1629,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_8_valid));
            tracep->chgBit(oldp+1630,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_8_ready));
            tracep->chgSData(oldp+1631,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count),9);
            tracep->chgBit(oldp+1632,(((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                       & (((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
                                          & (0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))))));
            tracep->chgBit(oldp+1633,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1634,((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_state))));
            tracep->chgBit(oldp+1635,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1636,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1637,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1638,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1640,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1641,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1642,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_front_256),9);
            tracep->chgSData(oldp+1643,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_rear_256),9);
            tracep->chgCData(oldp+1644,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_front_128),8);
            tracep->chgBit(oldp+1645,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_front_128_inc_ena));
            tracep->chgCData(oldp+1646,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_rear_128),8);
            tracep->chgBit(oldp+1647,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+1648,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_full_128));
            tracep->chgCData(oldp+1649,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_state),4);
            tracep->chgCData(oldp+1650,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_state),4);
            tracep->chgCData(oldp+1651,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompress_state),4);
            tracep->chgQData(oldp+1652,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1654,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1655,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1656,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgQData(oldp+1657,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1659,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1660,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1661,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgCData(oldp+1662,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_8),8);
            tracep->chgBit(oldp+1663,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_8_valid));
            tracep->chgCData(oldp+1664,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1665,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1666,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1667,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1668,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1669,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1670,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1671,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1672,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1673,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1674,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1675,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_end_req));
            tracep->chgCData(oldp+1676,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_8),8);
            tracep->chgBit(oldp+1677,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_8_valid));
            tracep->chgBit(oldp+1678,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_8_ready));
            tracep->chgBit(oldp+1679,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_end_req));
            tracep->chgSData(oldp+1680,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count),9);
            tracep->chgBit(oldp+1681,(((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                       & (((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
                                          & (1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))))));
            tracep->chgBit(oldp+1682,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1683,((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_state))));
            tracep->chgBit(oldp+1684,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1685,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1686,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1687,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1689,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1690,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1691,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_front_256),9);
            tracep->chgSData(oldp+1692,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_rear_256),9);
            tracep->chgCData(oldp+1693,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_front_128),8);
            tracep->chgBit(oldp+1694,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_front_128_inc_ena));
            tracep->chgCData(oldp+1695,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_rear_128),8);
            tracep->chgBit(oldp+1696,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+1697,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_full_128));
            tracep->chgCData(oldp+1698,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_state),4);
            tracep->chgCData(oldp+1699,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_state),4);
            tracep->chgCData(oldp+1700,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompress_state),4);
            tracep->chgQData(oldp+1701,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1703,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1704,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1705,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgQData(oldp+1706,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1708,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1709,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1710,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgCData(oldp+1711,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_8),8);
            tracep->chgBit(oldp+1712,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_8_valid));
            tracep->chgCData(oldp+1713,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1714,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1715,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1716,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1717,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1718,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1719,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1720,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1721,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1722,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1723,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1724,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_end_req));
            tracep->chgCData(oldp+1725,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_8),8);
            tracep->chgBit(oldp+1726,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_8_valid));
            tracep->chgBit(oldp+1727,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_8_ready));
            tracep->chgBit(oldp+1728,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_end_req));
            tracep->chgSData(oldp+1729,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count),9);
            tracep->chgBit(oldp+1730,(((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                       & (((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
                                          & (2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))))));
            tracep->chgBit(oldp+1731,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1732,((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_state))));
            tracep->chgBit(oldp+1733,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1734,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1735,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1736,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1738,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1739,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1740,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_front_256),9);
            tracep->chgSData(oldp+1741,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_rear_256),9);
            tracep->chgCData(oldp+1742,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_front_128),8);
            tracep->chgBit(oldp+1743,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_front_128_inc_ena));
            tracep->chgCData(oldp+1744,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_rear_128),8);
            tracep->chgBit(oldp+1745,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+1746,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_full_128));
            tracep->chgCData(oldp+1747,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_state),4);
            tracep->chgCData(oldp+1748,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_state),4);
            tracep->chgCData(oldp+1749,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompress_state),4);
            tracep->chgQData(oldp+1750,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1752,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1753,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1754,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgQData(oldp+1755,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1757,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1758,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1759,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgCData(oldp+1760,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_8),8);
            tracep->chgBit(oldp+1761,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_8_valid));
            tracep->chgCData(oldp+1762,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1763,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1764,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1765,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1766,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1767,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1768,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1769,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1770,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1771,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1772,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1773,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_end_req));
            tracep->chgCData(oldp+1774,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_8),8);
            tracep->chgBit(oldp+1775,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_8_valid));
            tracep->chgBit(oldp+1776,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_8_ready));
            tracep->chgSData(oldp+1777,(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count),9);
            tracep->chgBit(oldp+1778,(((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                       & (((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
                                          & (3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))))));
            tracep->chgBit(oldp+1779,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1780,((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_state))));
            tracep->chgBit(oldp+1781,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1782,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1783,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1784,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1786,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1787,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1788,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_front_256),9);
            tracep->chgSData(oldp+1789,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_rear_256),9);
            tracep->chgCData(oldp+1790,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_front_128),8);
            tracep->chgBit(oldp+1791,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_front_128_inc_ena));
            tracep->chgCData(oldp+1792,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_rear_128),8);
            tracep->chgBit(oldp+1793,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_rear_128_inc_ena));
            tracep->chgBit(oldp+1794,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_full_128));
            tracep->chgCData(oldp+1795,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_state),4);
            tracep->chgCData(oldp+1796,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_state),4);
            tracep->chgCData(oldp+1797,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompress_state),4);
            tracep->chgQData(oldp+1798,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1800,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1801,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1802,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgQData(oldp+1803,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1805,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1806,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1807,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgCData(oldp+1808,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_8),8);
            tracep->chgBit(oldp+1809,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_8_valid));
            tracep->chgCData(oldp+1810,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1811,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1812,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1813,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1814,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1815,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1816,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1817,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1818,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1819,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1820,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1821,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_end_req));
            tracep->chgCData(oldp+1822,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_8),8);
            tracep->chgBit(oldp+1823,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_8_valid));
            tracep->chgBit(oldp+1824,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_8_ready));
            tracep->chgBit(oldp+1825,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_end_req));
            tracep->chgBit(oldp+1826,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__tdm_match));
            tracep->chgBit(oldp+1827,(((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__tdm_match) 
                                       & (((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
                                          & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master)))));
            tracep->chgBit(oldp+1828,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1829,((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_state))));
            tracep->chgBit(oldp+1830,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1831,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1832,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1833,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1835,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1836,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1837,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_front_256),9);
            tracep->chgBit(oldp+1838,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_front_256_inc_ena));
            tracep->chgSData(oldp+1839,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_rear_256),9);
            tracep->chgBit(oldp+1840,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+1841,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_full_256));
            tracep->chgCData(oldp+1842,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_front_128),8);
            tracep->chgCData(oldp+1843,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_rear_128),8);
            tracep->chgCData(oldp+1844,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_state),4);
            tracep->chgCData(oldp+1845,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_state),4);
            tracep->chgCData(oldp+1846,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompress_state),4);
            tracep->chgQData(oldp+1847,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1849,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1850,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1851,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgQData(oldp+1852,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1854,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1855,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1856,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgCData(oldp+1857,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_8),8);
            tracep->chgBit(oldp+1858,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_8_valid));
            tracep->chgCData(oldp+1859,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1860,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1861,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1862,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1863,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1864,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1865,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1866,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1867,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1868,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1869,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1870,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_end_req));
            tracep->chgCData(oldp+1871,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_8),8);
            tracep->chgBit(oldp+1872,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_8_valid));
            tracep->chgBit(oldp+1873,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_8_ready));
            tracep->chgBit(oldp+1874,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__tdm_match));
            tracep->chgBit(oldp+1875,(((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__tdm_match) 
                                       & (((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_state)) 
                                           & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
                                          & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master)))));
            tracep->chgBit(oldp+1876,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_fifo_w_end));
            tracep->chgBit(oldp+1877,((1U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_state))));
            tracep->chgBit(oldp+1878,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_fifo_r_state));
            tracep->chgBit(oldp+1879,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_fifo_r_state_next));
            tracep->chgBit(oldp+1880,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_fifo_w_ena));
            tracep->chgQData(oldp+1881,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_fifo_w_data),64);
            tracep->chgCData(oldp+1883,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_fifo_r_state),2);
            tracep->chgCData(oldp+1884,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_fifo_r_state_next),2);
            tracep->chgSData(oldp+1885,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_front_256),9);
            tracep->chgBit(oldp+1886,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_front_256_inc_ena));
            tracep->chgSData(oldp+1887,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_rear_256),9);
            tracep->chgBit(oldp+1888,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_rear_256_inc_ena));
            tracep->chgBit(oldp+1889,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_full_256));
            tracep->chgCData(oldp+1890,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_front_128),8);
            tracep->chgCData(oldp+1891,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_rear_128),8);
            tracep->chgCData(oldp+1892,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_state),4);
            tracep->chgCData(oldp+1893,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_state),4);
            tracep->chgCData(oldp+1894,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompress_state),4);
            tracep->chgQData(oldp+1895,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_reg_64),64);
            tracep->chgBit(oldp+1897,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_reg_64_w_ena));
            tracep->chgCData(oldp+1898,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1899,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_reg_counter_inc_ena));
            tracep->chgQData(oldp+1900,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_FIFO_reg_64),64);
            tracep->chgCData(oldp+1902,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_FIFO_reg_counter),3);
            tracep->chgBit(oldp+1903,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_FIFO_reg_counter_inc_ena));
            tracep->chgCData(oldp+1904,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompressed_FIFO_reg_wstrb),8);
            tracep->chgCData(oldp+1905,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_8),8);
            tracep->chgBit(oldp+1906,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_8_valid));
            tracep->chgCData(oldp+1907,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_8_reg),8);
            tracep->chgBit(oldp+1908,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_8_reg_w_ena));
            tracep->chgCData(oldp+1909,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__repeat_counter),7);
            tracep->chgBit(oldp+1910,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__repeat_counter_w_ena));
            tracep->chgBit(oldp+1911,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__repeat_counter_dec_ena));
            tracep->chgCData(oldp+1912,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__unrepeat_counter),7);
            tracep->chgBit(oldp+1913,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__unrepeat_counter_w_ena));
            tracep->chgBit(oldp+1914,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__unrepeat_counter_dec_ena));
            tracep->chgCData(oldp+1915,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__pixel_reg),8);
            tracep->chgBit(oldp+1916,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__pixel_reg_w_ena));
            tracep->chgBit(oldp+1917,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__compressed_FIFO_r_req));
            tracep->chgBit(oldp+1918,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_end_req));
            tracep->chgCData(oldp+1919,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_8),8);
            tracep->chgBit(oldp+1920,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_8_valid));
            tracep->chgBit(oldp+1921,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_8_ready));
            tracep->chgBit(oldp+1922,(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_end_req));
        }
        tracep->chgBit(oldp+1923,(vlTOPp->clk));
        tracep->chgBit(oldp+1924,(vlTOPp->resetn));
        tracep->chgBit(oldp+1925,(vlTOPp->PPU_start));
        tracep->chgCData(oldp+1926,(vlTOPp->CPU_LUT_Cache1_pixel),8);
        tracep->chgCData(oldp+1927,(vlTOPp->CPU_LUT_Cache2_pixel),8);
        tracep->chgCData(oldp+1928,(vlTOPp->CPU_LUT_Cache3_pixel),8);
        tracep->chgCData(oldp+1929,(vlTOPp->CPU_LUT_Cache4_pixel),8);
        tracep->chgIData(oldp+1930,(vlTOPp->Background_Layer1_Address),32);
        tracep->chgIData(oldp+1931,(vlTOPp->Background_Layer2_Address),32);
        tracep->chgIData(oldp+1932,(vlTOPp->Character_Layer1_Address),32);
        tracep->chgIData(oldp+1933,(vlTOPp->Character_Layer2_Address),32);
        tracep->chgIData(oldp+1934,(vlTOPp->Character_Layer3_Address),32);
        tracep->chgIData(oldp+1935,(vlTOPp->Character_Layer4_Address),32);
        tracep->chgIData(oldp+1936,(vlTOPp->Script_Layer_Address),32);
        tracep->chgIData(oldp+1937,(vlTOPp->Status_Layer_Address),32);
        tracep->chgIData(oldp+1938,(vlTOPp->Universal_Layer1_Address),32);
        tracep->chgIData(oldp+1939,(vlTOPp->Universal_Layer2_Address),32);
        tracep->chgBit(oldp+1940,(vlTOPp->EMEM_valid));
        tracep->chgBit(oldp+1941,(vlTOPp->EMEM_ready));
        tracep->chgIData(oldp+1942,(vlTOPp->EMEM_addr),32);
        tracep->chgIData(oldp+1943,(vlTOPp->EMEM_wdata),32);
        tracep->chgCData(oldp+1944,(vlTOPp->EMEM_wstrb),4);
        tracep->chgIData(oldp+1945,(vlTOPp->EMEM_rdata),32);
        tracep->chgCData(oldp+1946,(vlTOPp->EMEM_burst_len),8);
        tracep->chgBit(oldp+1947,(vlTOPp->EMEM_burst_en));
        tracep->chgBit(oldp+1948,(vlTOPp->BRAM7_en_a));
        tracep->chgBit(oldp+1949,(vlTOPp->BRAM7_we_a));
        tracep->chgSData(oldp+1950,(vlTOPp->BRAM7_addr_a),9);
        tracep->chgQData(oldp+1951,(vlTOPp->BRAM7_din_a),64);
        tracep->chgBit(oldp+1953,(vlTOPp->BRAM7_en_b));
        tracep->chgSData(oldp+1954,(vlTOPp->BRAM7_addr_b),9);
        tracep->chgQData(oldp+1955,(vlTOPp->BRAM7_dout_b),64);
        tracep->chgBit(oldp+1957,(vlTOPp->BRAM8_en_a));
        tracep->chgBit(oldp+1958,(vlTOPp->BRAM8_we_a));
        tracep->chgSData(oldp+1959,(vlTOPp->BRAM8_addr_a),9);
        tracep->chgQData(oldp+1960,(vlTOPp->BRAM8_din_a),64);
        tracep->chgBit(oldp+1962,(vlTOPp->BRAM8_en_b));
        tracep->chgSData(oldp+1963,(vlTOPp->BRAM8_addr_b),9);
        tracep->chgQData(oldp+1964,(vlTOPp->BRAM8_dout_b),64);
        tracep->chgBit(oldp+1966,(vlTOPp->BRAM9_en_a));
        tracep->chgBit(oldp+1967,(vlTOPp->BRAM9_we_a));
        tracep->chgSData(oldp+1968,(vlTOPp->BRAM9_addr_a),9);
        tracep->chgQData(oldp+1969,(vlTOPp->BRAM9_din_a),64);
        tracep->chgBit(oldp+1971,(vlTOPp->BRAM9_en_b));
        tracep->chgSData(oldp+1972,(vlTOPp->BRAM9_addr_b),9);
        tracep->chgQData(oldp+1973,(vlTOPp->BRAM9_dout_b),64);
        tracep->chgBit(oldp+1975,(vlTOPp->BRAM10_en_a));
        tracep->chgBit(oldp+1976,(vlTOPp->BRAM10_we_a));
        tracep->chgSData(oldp+1977,(vlTOPp->BRAM10_addr_a),9);
        tracep->chgQData(oldp+1978,(vlTOPp->BRAM10_din_a),64);
        tracep->chgBit(oldp+1980,(vlTOPp->BRAM10_en_b));
        tracep->chgSData(oldp+1981,(vlTOPp->BRAM10_addr_b),9);
        tracep->chgQData(oldp+1982,(vlTOPp->BRAM10_dout_b),64);
        tracep->chgBit(oldp+1984,(vlTOPp->BRAM11_en_a));
        tracep->chgBit(oldp+1985,(vlTOPp->BRAM11_we_a));
        tracep->chgSData(oldp+1986,(vlTOPp->BRAM11_addr_a),9);
        tracep->chgQData(oldp+1987,(vlTOPp->BRAM11_din_a),64);
        tracep->chgBit(oldp+1989,(vlTOPp->BRAM11_en_b));
        tracep->chgSData(oldp+1990,(vlTOPp->BRAM11_addr_b),9);
        tracep->chgQData(oldp+1991,(vlTOPp->BRAM11_dout_b),64);
        tracep->chgBit(oldp+1993,(vlTOPp->BRAM12_en_a));
        tracep->chgBit(oldp+1994,(vlTOPp->BRAM12_we_a));
        tracep->chgSData(oldp+1995,(vlTOPp->BRAM12_addr_a),9);
        tracep->chgQData(oldp+1996,(vlTOPp->BRAM12_din_a),64);
        tracep->chgBit(oldp+1998,(vlTOPp->BRAM12_en_b));
        tracep->chgSData(oldp+1999,(vlTOPp->BRAM12_addr_b),9);
        tracep->chgQData(oldp+2000,(vlTOPp->BRAM12_dout_b),64);
        tracep->chgBit(oldp+2002,(vlTOPp->LUT_we));
        tracep->chgCData(oldp+2003,(vlTOPp->LUT_addr_w),8);
        tracep->chgIData(oldp+2004,(vlTOPp->LUT_data_in),18);
        tracep->chgCData(oldp+2005,(vlTOPp->LUT_addr_r1),8);
        tracep->chgIData(oldp+2006,(vlTOPp->LUT_data_out1),18);
        tracep->chgCData(oldp+2007,(vlTOPp->LUT_addr_r2),8);
        tracep->chgIData(oldp+2008,(vlTOPp->LUT_data_out2),18);
        tracep->chgSData(oldp+2009,(vlTOPp->Background1_WX),16);
        tracep->chgSData(oldp+2010,(vlTOPp->Background1_WY),16);
        tracep->chgSData(oldp+2011,(vlTOPp->Background1_SCX),16);
        tracep->chgSData(oldp+2012,(vlTOPp->Background1_SCY),16);
        tracep->chgCData(oldp+2013,(vlTOPp->Background1_a),8);
        tracep->chgCData(oldp+2014,(vlTOPp->Background1_z),8);
        tracep->chgSData(oldp+2015,(vlTOPp->Background2_WX),16);
        tracep->chgSData(oldp+2016,(vlTOPp->Background2_WY),16);
        tracep->chgSData(oldp+2017,(vlTOPp->Background2_SCX),16);
        tracep->chgSData(oldp+2018,(vlTOPp->Background2_SCY),16);
        tracep->chgCData(oldp+2019,(vlTOPp->Background2_a),8);
        tracep->chgCData(oldp+2020,(vlTOPp->Background2_z),8);
        tracep->chgSData(oldp+2021,(vlTOPp->Character1_WX),16);
        tracep->chgSData(oldp+2022,(vlTOPp->Character1_WY),16);
        tracep->chgSData(oldp+2023,(vlTOPp->Character1_SCX),16);
        tracep->chgSData(oldp+2024,(vlTOPp->Character1_SCY),16);
        tracep->chgCData(oldp+2025,(vlTOPp->Character1_a),8);
        tracep->chgCData(oldp+2026,(vlTOPp->Character1_z),8);
        tracep->chgSData(oldp+2027,(vlTOPp->Character2_WX),16);
        tracep->chgSData(oldp+2028,(vlTOPp->Character2_WY),16);
        tracep->chgSData(oldp+2029,(vlTOPp->Character2_SCX),16);
        tracep->chgSData(oldp+2030,(vlTOPp->Character2_SCY),16);
        tracep->chgCData(oldp+2031,(vlTOPp->Character2_a),8);
        tracep->chgCData(oldp+2032,(vlTOPp->Character2_z),8);
        tracep->chgSData(oldp+2033,(vlTOPp->Character3_WX),16);
        tracep->chgSData(oldp+2034,(vlTOPp->Character3_WY),16);
        tracep->chgSData(oldp+2035,(vlTOPp->Character3_SCX),16);
        tracep->chgSData(oldp+2036,(vlTOPp->Character3_SCY),16);
        tracep->chgCData(oldp+2037,(vlTOPp->Character3_a),8);
        tracep->chgCData(oldp+2038,(vlTOPp->Character3_z),8);
        tracep->chgSData(oldp+2039,(vlTOPp->Character4_WX),16);
        tracep->chgSData(oldp+2040,(vlTOPp->Character4_WY),16);
        tracep->chgSData(oldp+2041,(vlTOPp->Character4_SCX),16);
        tracep->chgSData(oldp+2042,(vlTOPp->Character4_SCY),16);
        tracep->chgCData(oldp+2043,(vlTOPp->Character4_a),8);
        tracep->chgCData(oldp+2044,(vlTOPp->Character4_z),8);
        tracep->chgSData(oldp+2045,(vlTOPp->Script_WX),16);
        tracep->chgSData(oldp+2046,(vlTOPp->Script_WY),16);
        tracep->chgSData(oldp+2047,(vlTOPp->Script_SCX),16);
        tracep->chgSData(oldp+2048,(vlTOPp->Script_SCY),16);
        tracep->chgCData(oldp+2049,(vlTOPp->Script_a),8);
        tracep->chgCData(oldp+2050,(vlTOPp->Script_z),8);
        tracep->chgSData(oldp+2051,(vlTOPp->Status_WX),16);
        tracep->chgSData(oldp+2052,(vlTOPp->Status_WY),16);
        tracep->chgSData(oldp+2053,(vlTOPp->Status_SCX),16);
        tracep->chgSData(oldp+2054,(vlTOPp->Status_SCY),16);
        tracep->chgCData(oldp+2055,(vlTOPp->Status_a),8);
        tracep->chgCData(oldp+2056,(vlTOPp->Status_z),8);
        tracep->chgSData(oldp+2057,(vlTOPp->Universal1_WX),16);
        tracep->chgSData(oldp+2058,(vlTOPp->Universal1_WY),16);
        tracep->chgSData(oldp+2059,(vlTOPp->Universal1_SCX),16);
        tracep->chgSData(oldp+2060,(vlTOPp->Universal1_SCY),16);
        tracep->chgCData(oldp+2061,(vlTOPp->Universal1_a),8);
        tracep->chgCData(oldp+2062,(vlTOPp->Universal1_z),8);
        tracep->chgSData(oldp+2063,(vlTOPp->Universal2_WX),16);
        tracep->chgSData(oldp+2064,(vlTOPp->Universal2_WY),16);
        tracep->chgSData(oldp+2065,(vlTOPp->Universal2_SCX),16);
        tracep->chgSData(oldp+2066,(vlTOPp->Universal2_SCY),16);
        tracep->chgCData(oldp+2067,(vlTOPp->Universal2_a),8);
        tracep->chgCData(oldp+2068,(vlTOPp->Universal2_z),8);
        tracep->chgCData(oldp+2069,(vlTOPp->Line0_visible_number),8);
        tracep->chgCData(oldp+2070,(vlTOPp->Line1_visible_number),8);
        tracep->chgCData(oldp+2071,(vlTOPp->Line2_visible_number),8);
        tracep->chgCData(oldp+2072,(vlTOPp->Line3_visible_number),8);
        tracep->chgCData(oldp+2073,(vlTOPp->Line4_visible_number),8);
        tracep->chgCData(oldp+2074,(vlTOPp->Line5_visible_number),8);
        tracep->chgCData(oldp+2075,(vlTOPp->Line6_visible_number),8);
        tracep->chgCData(oldp+2076,(vlTOPp->Line7_visible_number),8);
        tracep->chgCData(oldp+2077,(vlTOPp->Line8_visible_number),8);
        tracep->chgCData(oldp+2078,(vlTOPp->Line9_visible_number),8);
        tracep->chgCData(oldp+2079,(vlTOPp->Line10_visible_number),8);
        tracep->chgCData(oldp+2080,(vlTOPp->Line11_visible_number),8);
        tracep->chgCData(oldp+2081,(vlTOPp->Line12_visible_number),8);
        tracep->chgCData(oldp+2082,(vlTOPp->Line13_visible_number),8);
        tracep->chgCData(oldp+2083,(vlTOPp->Line14_visible_number),8);
        tracep->chgSData(oldp+2084,(vlTOPp->Line0_font_RGB_9bit),9);
        tracep->chgSData(oldp+2085,(vlTOPp->Line1_font_RGB_9bit),9);
        tracep->chgSData(oldp+2086,(vlTOPp->Line2_font_RGB_9bit),9);
        tracep->chgSData(oldp+2087,(vlTOPp->Line3_font_RGB_9bit),9);
        tracep->chgSData(oldp+2088,(vlTOPp->Line4_font_RGB_9bit),9);
        tracep->chgSData(oldp+2089,(vlTOPp->Line5_font_RGB_9bit),9);
        tracep->chgSData(oldp+2090,(vlTOPp->Line6_font_RGB_9bit),9);
        tracep->chgSData(oldp+2091,(vlTOPp->Line7_font_RGB_9bit),9);
        tracep->chgSData(oldp+2092,(vlTOPp->Line8_font_RGB_9bit),9);
        tracep->chgSData(oldp+2093,(vlTOPp->Line9_font_RGB_9bit),9);
        tracep->chgSData(oldp+2094,(vlTOPp->Line10_font_RGB_9bit),9);
        tracep->chgSData(oldp+2095,(vlTOPp->Line11_font_RGB_9bit),9);
        tracep->chgSData(oldp+2096,(vlTOPp->Line12_font_RGB_9bit),9);
        tracep->chgSData(oldp+2097,(vlTOPp->Line13_font_RGB_9bit),9);
        tracep->chgSData(oldp+2098,(vlTOPp->Line14_font_RGB_9bit),9);
        tracep->chgCData(oldp+2099,(vlTOPp->Line0_a),3);
        tracep->chgCData(oldp+2100,(vlTOPp->Line1_a),3);
        tracep->chgCData(oldp+2101,(vlTOPp->Line2_a),3);
        tracep->chgCData(oldp+2102,(vlTOPp->Line3_a),3);
        tracep->chgCData(oldp+2103,(vlTOPp->Line4_a),3);
        tracep->chgCData(oldp+2104,(vlTOPp->Line5_a),3);
        tracep->chgCData(oldp+2105,(vlTOPp->Line6_a),3);
        tracep->chgCData(oldp+2106,(vlTOPp->Line7_a),3);
        tracep->chgCData(oldp+2107,(vlTOPp->Line8_a),3);
        tracep->chgCData(oldp+2108,(vlTOPp->Line9_a),3);
        tracep->chgCData(oldp+2109,(vlTOPp->Line10_a),3);
        tracep->chgCData(oldp+2110,(vlTOPp->Line11_a),3);
        tracep->chgCData(oldp+2111,(vlTOPp->Line12_a),3);
        tracep->chgCData(oldp+2112,(vlTOPp->Line13_a),3);
        tracep->chgCData(oldp+2113,(vlTOPp->Line14_a),3);
        tracep->chgBit(oldp+2114,(vlTOPp->Final_pixel_valid));
        tracep->chgIData(oldp+2115,(vlTOPp->Final_pixel_RGB),18);
        tracep->chgBit(oldp+2116,(vlTOPp->Font_Line_End));
        tracep->chgBit(oldp+2117,(vlTOPp->Font_Frame_End));
        tracep->chgBit(oldp+2118,(vlTOPp->BRAM4_en_a));
        tracep->chgCData(oldp+2119,(vlTOPp->BRAM4_wstrb_a),4);
        tracep->chgSData(oldp+2120,(vlTOPp->BRAM4_addr_a),10);
        tracep->chgIData(oldp+2121,(vlTOPp->BRAM4_din_a),32);
        tracep->chgIData(oldp+2122,(vlTOPp->BRAM4_dout_a),32);
        tracep->chgBit(oldp+2123,(vlTOPp->BRAM4_en_b));
        tracep->chgCData(oldp+2124,(vlTOPp->BRAM4_wstrb_b),4);
        tracep->chgSData(oldp+2125,(vlTOPp->BRAM4_addr_b),10);
        tracep->chgIData(oldp+2126,(vlTOPp->BRAM4_din_b),32);
        tracep->chgIData(oldp+2127,(vlTOPp->BRAM4_dout_b),32);
        tracep->chgBit(oldp+2128,(vlTOPp->BRAM5_en_a));
        tracep->chgCData(oldp+2129,(vlTOPp->BRAM5_wstrb_a),4);
        tracep->chgSData(oldp+2130,(vlTOPp->BRAM5_addr_a),10);
        tracep->chgIData(oldp+2131,(vlTOPp->BRAM5_din_a),32);
        tracep->chgIData(oldp+2132,(vlTOPp->BRAM5_dout_a),32);
        tracep->chgBit(oldp+2133,(vlTOPp->BRAM5_en_b));
        tracep->chgCData(oldp+2134,(vlTOPp->BRAM5_wstrb_b),4);
        tracep->chgSData(oldp+2135,(vlTOPp->BRAM5_addr_b),10);
        tracep->chgIData(oldp+2136,(vlTOPp->BRAM5_din_b),32);
        tracep->chgIData(oldp+2137,(vlTOPp->BRAM5_dout_b),32);
        tracep->chgBit(oldp+2138,(vlTOPp->BRAM6_en_a));
        tracep->chgCData(oldp+2139,(vlTOPp->BRAM6_wstrb_a),4);
        tracep->chgSData(oldp+2140,(vlTOPp->BRAM6_addr_a),10);
        tracep->chgIData(oldp+2141,(vlTOPp->BRAM6_din_a),32);
        tracep->chgIData(oldp+2142,(vlTOPp->BRAM6_dout_a),32);
        tracep->chgBit(oldp+2143,(vlTOPp->BRAM6_en_b));
        tracep->chgCData(oldp+2144,(vlTOPp->BRAM6_wstrb_b),4);
        tracep->chgSData(oldp+2145,(vlTOPp->BRAM6_addr_b),10);
        tracep->chgIData(oldp+2146,(vlTOPp->BRAM6_din_b),32);
        tracep->chgIData(oldp+2147,(vlTOPp->BRAM6_dout_b),32);
        tracep->chgBit(oldp+2148,(vlTOPp->BRAM13_en_a));
        tracep->chgCData(oldp+2149,(vlTOPp->BRAM13_wstrb_a),4);
        tracep->chgSData(oldp+2150,(vlTOPp->BRAM13_addr_a),10);
        tracep->chgIData(oldp+2151,(vlTOPp->BRAM13_din_a),32);
        tracep->chgIData(oldp+2152,(vlTOPp->BRAM13_dout_a),32);
        tracep->chgBit(oldp+2153,(vlTOPp->BRAM13_en_b));
        tracep->chgCData(oldp+2154,(vlTOPp->BRAM13_wstrb_b),4);
        tracep->chgSData(oldp+2155,(vlTOPp->BRAM13_addr_b),10);
        tracep->chgIData(oldp+2156,(vlTOPp->BRAM13_din_b),32);
        tracep->chgIData(oldp+2157,(vlTOPp->BRAM13_dout_b),32);
        tracep->chgBit(oldp+2158,(vlTOPp->BRAM14_en_a));
        tracep->chgCData(oldp+2159,(vlTOPp->BRAM14_wstrb_a),4);
        tracep->chgSData(oldp+2160,(vlTOPp->BRAM14_addr_a),10);
        tracep->chgIData(oldp+2161,(vlTOPp->BRAM14_din_a),32);
        tracep->chgIData(oldp+2162,(vlTOPp->BRAM14_dout_a),32);
        tracep->chgBit(oldp+2163,(vlTOPp->BRAM14_en_b));
        tracep->chgCData(oldp+2164,(vlTOPp->BRAM14_wstrb_b),4);
        tracep->chgSData(oldp+2165,(vlTOPp->BRAM14_addr_b),10);
        tracep->chgIData(oldp+2166,(vlTOPp->BRAM14_din_b),32);
        tracep->chgIData(oldp+2167,(vlTOPp->BRAM14_dout_b),32);
        tracep->chgIData(oldp+2168,(((0x38000U & ((IData)(vlTOPp->Line0_font_RGB_9bit) 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         ((IData)(vlTOPp->Line0_font_RGB_9bit) 
                                          << 6U)) | 
                                        ((0xe00U & 
                                          ((IData)(vlTOPp->Line0_font_RGB_9bit) 
                                           << 6U)) 
                                         | ((0x1c0U 
                                             & ((IData)(vlTOPp->Line0_font_RGB_9bit) 
                                                << 3U)) 
                                            | ((0x38U 
                                                & ((IData)(vlTOPp->Line0_font_RGB_9bit) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(vlTOPp->Line0_font_RGB_9bit)))))))),18);
        tracep->chgIData(oldp+2169,(((0x38000U & ((IData)(vlTOPp->Line1_font_RGB_9bit) 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         ((IData)(vlTOPp->Line1_font_RGB_9bit) 
                                          << 6U)) | 
                                        ((0xe00U & 
                                          ((IData)(vlTOPp->Line1_font_RGB_9bit) 
                                           << 6U)) 
                                         | ((0x1c0U 
                                             & ((IData)(vlTOPp->Line1_font_RGB_9bit) 
                                                << 3U)) 
                                            | ((0x38U 
                                                & ((IData)(vlTOPp->Line1_font_RGB_9bit) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(vlTOPp->Line1_font_RGB_9bit)))))))),18);
        tracep->chgIData(oldp+2170,(((0x38000U & ((IData)(vlTOPp->Line2_font_RGB_9bit) 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         ((IData)(vlTOPp->Line2_font_RGB_9bit) 
                                          << 6U)) | 
                                        ((0xe00U & 
                                          ((IData)(vlTOPp->Line2_font_RGB_9bit) 
                                           << 6U)) 
                                         | ((0x1c0U 
                                             & ((IData)(vlTOPp->Line2_font_RGB_9bit) 
                                                << 3U)) 
                                            | ((0x38U 
                                                & ((IData)(vlTOPp->Line2_font_RGB_9bit) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(vlTOPp->Line2_font_RGB_9bit)))))))),18);
        tracep->chgIData(oldp+2171,(((0x38000U & ((IData)(vlTOPp->Line3_font_RGB_9bit) 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         ((IData)(vlTOPp->Line3_font_RGB_9bit) 
                                          << 6U)) | 
                                        ((0xe00U & 
                                          ((IData)(vlTOPp->Line3_font_RGB_9bit) 
                                           << 6U)) 
                                         | ((0x1c0U 
                                             & ((IData)(vlTOPp->Line3_font_RGB_9bit) 
                                                << 3U)) 
                                            | ((0x38U 
                                                & ((IData)(vlTOPp->Line3_font_RGB_9bit) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(vlTOPp->Line3_font_RGB_9bit)))))))),18);
        tracep->chgIData(oldp+2172,(((0x38000U & ((IData)(vlTOPp->Line4_font_RGB_9bit) 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         ((IData)(vlTOPp->Line4_font_RGB_9bit) 
                                          << 6U)) | 
                                        ((0xe00U & 
                                          ((IData)(vlTOPp->Line4_font_RGB_9bit) 
                                           << 6U)) 
                                         | ((0x1c0U 
                                             & ((IData)(vlTOPp->Line4_font_RGB_9bit) 
                                                << 3U)) 
                                            | ((0x38U 
                                                & ((IData)(vlTOPp->Line4_font_RGB_9bit) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(vlTOPp->Line4_font_RGB_9bit)))))))),18);
        tracep->chgIData(oldp+2173,(((0x38000U & ((IData)(vlTOPp->Line5_font_RGB_9bit) 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         ((IData)(vlTOPp->Line5_font_RGB_9bit) 
                                          << 6U)) | 
                                        ((0xe00U & 
                                          ((IData)(vlTOPp->Line5_font_RGB_9bit) 
                                           << 6U)) 
                                         | ((0x1c0U 
                                             & ((IData)(vlTOPp->Line5_font_RGB_9bit) 
                                                << 3U)) 
                                            | ((0x38U 
                                                & ((IData)(vlTOPp->Line5_font_RGB_9bit) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(vlTOPp->Line5_font_RGB_9bit)))))))),18);
        tracep->chgIData(oldp+2174,(((0x38000U & ((IData)(vlTOPp->Line6_font_RGB_9bit) 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         ((IData)(vlTOPp->Line6_font_RGB_9bit) 
                                          << 6U)) | 
                                        ((0xe00U & 
                                          ((IData)(vlTOPp->Line6_font_RGB_9bit) 
                                           << 6U)) 
                                         | ((0x1c0U 
                                             & ((IData)(vlTOPp->Line6_font_RGB_9bit) 
                                                << 3U)) 
                                            | ((0x38U 
                                                & ((IData)(vlTOPp->Line6_font_RGB_9bit) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(vlTOPp->Line6_font_RGB_9bit)))))))),18);
        tracep->chgIData(oldp+2175,(((0x38000U & ((IData)(vlTOPp->Line7_font_RGB_9bit) 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         ((IData)(vlTOPp->Line7_font_RGB_9bit) 
                                          << 6U)) | 
                                        ((0xe00U & 
                                          ((IData)(vlTOPp->Line7_font_RGB_9bit) 
                                           << 6U)) 
                                         | ((0x1c0U 
                                             & ((IData)(vlTOPp->Line7_font_RGB_9bit) 
                                                << 3U)) 
                                            | ((0x38U 
                                                & ((IData)(vlTOPp->Line7_font_RGB_9bit) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(vlTOPp->Line7_font_RGB_9bit)))))))),18);
        tracep->chgIData(oldp+2176,(((0x38000U & ((IData)(vlTOPp->Line8_font_RGB_9bit) 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         ((IData)(vlTOPp->Line8_font_RGB_9bit) 
                                          << 6U)) | 
                                        ((0xe00U & 
                                          ((IData)(vlTOPp->Line8_font_RGB_9bit) 
                                           << 6U)) 
                                         | ((0x1c0U 
                                             & ((IData)(vlTOPp->Line8_font_RGB_9bit) 
                                                << 3U)) 
                                            | ((0x38U 
                                                & ((IData)(vlTOPp->Line8_font_RGB_9bit) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(vlTOPp->Line8_font_RGB_9bit)))))))),18);
        tracep->chgIData(oldp+2177,(((0x38000U & ((IData)(vlTOPp->Line9_font_RGB_9bit) 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         ((IData)(vlTOPp->Line9_font_RGB_9bit) 
                                          << 6U)) | 
                                        ((0xe00U & 
                                          ((IData)(vlTOPp->Line9_font_RGB_9bit) 
                                           << 6U)) 
                                         | ((0x1c0U 
                                             & ((IData)(vlTOPp->Line9_font_RGB_9bit) 
                                                << 3U)) 
                                            | ((0x38U 
                                                & ((IData)(vlTOPp->Line9_font_RGB_9bit) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(vlTOPp->Line9_font_RGB_9bit)))))))),18);
        tracep->chgIData(oldp+2178,(((0x38000U & ((IData)(vlTOPp->Line10_font_RGB_9bit) 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         ((IData)(vlTOPp->Line10_font_RGB_9bit) 
                                          << 6U)) | 
                                        ((0xe00U & 
                                          ((IData)(vlTOPp->Line10_font_RGB_9bit) 
                                           << 6U)) 
                                         | ((0x1c0U 
                                             & ((IData)(vlTOPp->Line10_font_RGB_9bit) 
                                                << 3U)) 
                                            | ((0x38U 
                                                & ((IData)(vlTOPp->Line10_font_RGB_9bit) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(vlTOPp->Line10_font_RGB_9bit)))))))),18);
        tracep->chgIData(oldp+2179,(((0x38000U & ((IData)(vlTOPp->Line11_font_RGB_9bit) 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         ((IData)(vlTOPp->Line11_font_RGB_9bit) 
                                          << 6U)) | 
                                        ((0xe00U & 
                                          ((IData)(vlTOPp->Line11_font_RGB_9bit) 
                                           << 6U)) 
                                         | ((0x1c0U 
                                             & ((IData)(vlTOPp->Line11_font_RGB_9bit) 
                                                << 3U)) 
                                            | ((0x38U 
                                                & ((IData)(vlTOPp->Line11_font_RGB_9bit) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(vlTOPp->Line11_font_RGB_9bit)))))))),18);
        tracep->chgIData(oldp+2180,(((0x38000U & ((IData)(vlTOPp->Line12_font_RGB_9bit) 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         ((IData)(vlTOPp->Line12_font_RGB_9bit) 
                                          << 6U)) | 
                                        ((0xe00U & 
                                          ((IData)(vlTOPp->Line12_font_RGB_9bit) 
                                           << 6U)) 
                                         | ((0x1c0U 
                                             & ((IData)(vlTOPp->Line12_font_RGB_9bit) 
                                                << 3U)) 
                                            | ((0x38U 
                                                & ((IData)(vlTOPp->Line12_font_RGB_9bit) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(vlTOPp->Line12_font_RGB_9bit)))))))),18);
        tracep->chgIData(oldp+2181,(((0x38000U & ((IData)(vlTOPp->Line13_font_RGB_9bit) 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         ((IData)(vlTOPp->Line13_font_RGB_9bit) 
                                          << 6U)) | 
                                        ((0xe00U & 
                                          ((IData)(vlTOPp->Line13_font_RGB_9bit) 
                                           << 6U)) 
                                         | ((0x1c0U 
                                             & ((IData)(vlTOPp->Line13_font_RGB_9bit) 
                                                << 3U)) 
                                            | ((0x38U 
                                                & ((IData)(vlTOPp->Line13_font_RGB_9bit) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(vlTOPp->Line13_font_RGB_9bit)))))))),18);
        tracep->chgIData(oldp+2182,(((0x38000U & ((IData)(vlTOPp->Line14_font_RGB_9bit) 
                                                  << 9U)) 
                                     | ((0x7000U & 
                                         ((IData)(vlTOPp->Line14_font_RGB_9bit) 
                                          << 6U)) | 
                                        ((0xe00U & 
                                          ((IData)(vlTOPp->Line14_font_RGB_9bit) 
                                           << 6U)) 
                                         | ((0x1c0U 
                                             & ((IData)(vlTOPp->Line14_font_RGB_9bit) 
                                                << 3U)) 
                                            | ((0x38U 
                                                & ((IData)(vlTOPp->Line14_font_RGB_9bit) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(vlTOPp->Line14_font_RGB_9bit)))))))),18);
        tracep->chgBit(oldp+2183,((0U != (IData)(vlTOPp->Background1_z))));
        tracep->chgBit(oldp+2184,((0U != (IData)(vlTOPp->Background2_z))));
        tracep->chgBit(oldp+2185,((0U != (IData)(vlTOPp->Character1_z))));
        tracep->chgBit(oldp+2186,((0U != (IData)(vlTOPp->Character2_z))));
        tracep->chgBit(oldp+2187,((0U != (IData)(vlTOPp->Character3_z))));
        tracep->chgBit(oldp+2188,((0U != (IData)(vlTOPp->Character4_z))));
        tracep->chgBit(oldp+2189,((0U != (IData)(vlTOPp->Script_z))));
        tracep->chgBit(oldp+2190,((0U != (IData)(vlTOPp->Status_z))));
        tracep->chgBit(oldp+2191,((0U != (IData)(vlTOPp->Universal1_z))));
        tracep->chgBit(oldp+2192,((0U != (IData)(vlTOPp->Universal2_z))));
    }
}

void VPPU_TOP::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VPPU_TOP__Syms* __restrict vlSymsp = static_cast<VPPU_TOP__Syms*>(userp);
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
