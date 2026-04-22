// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCompressed_Data_FIFO__Syms.h"


//======================

void VCompressed_Data_FIFO::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VCompressed_Data_FIFO::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCompressed_Data_FIFO__Syms* __restrict vlSymsp = static_cast<VCompressed_Data_FIFO__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VCompressed_Data_FIFO::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VCompressed_Data_FIFO::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VCompressed_Data_FIFO__Syms* __restrict vlSymsp = static_cast<VCompressed_Data_FIFO__Syms*>(userp);
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VCompressed_Data_FIFO::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VCompressed_Data_FIFO__Syms* __restrict vlSymsp = static_cast<VCompressed_Data_FIFO__Syms*>(userp);
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+87,"clk", false,-1);
        tracep->declBit(c+88,"resetn", false,-1);
        tracep->declBit(c+89,"PPU_start", false,-1);
        tracep->declBus(c+90,"Universal_Layer1_Address", false,-1, 31,0);
        tracep->declBus(c+91,"Universal_Layer2_Address", false,-1, 31,0);
        tracep->declBus(c+92,"Script_Layer_Address", false,-1, 31,0);
        tracep->declBus(c+93,"Status_Layer_Address", false,-1, 31,0);
        tracep->declBus(c+94,"Character_Layer1_Address", false,-1, 31,0);
        tracep->declBus(c+95,"Character_Layer2_Address", false,-1, 31,0);
        tracep->declBus(c+96,"Character_Layer3_Address", false,-1, 31,0);
        tracep->declBus(c+97,"Character_Layer4_Address", false,-1, 31,0);
        tracep->declBus(c+98,"Background_Layer1_Address", false,-1, 31,0);
        tracep->declBus(c+99,"Background_Layer2_Address", false,-1, 31,0);
        tracep->declBit(c+100,"EMEM_valid", false,-1);
        tracep->declBit(c+101,"EMEM_ready", false,-1);
        tracep->declBus(c+102,"EMEM_addr", false,-1, 31,0);
        tracep->declBus(c+103,"EMEM_wdata", false,-1, 31,0);
        tracep->declBus(c+104,"EMEM_wstrb", false,-1, 3,0);
        tracep->declBus(c+105,"EMEM_rdata", false,-1, 31,0);
        tracep->declBus(c+106,"EMEM_burst_len", false,-1, 7,0);
        tracep->declBit(c+107,"EMEM_burst_en", false,-1);
        tracep->declBit(c+108,"BRAM7_en_a", false,-1);
        tracep->declBus(c+109,"BRAM7_we_a", false,-1, 0,0);
        tracep->declBus(c+110,"BRAM7_addr_a", false,-1, 8,0);
        tracep->declQuad(c+111,"BRAM7_din_a", false,-1, 63,0);
        tracep->declBit(c+113,"BRAM7_en_b", false,-1);
        tracep->declBus(c+114,"BRAM7_addr_b", false,-1, 8,0);
        tracep->declQuad(c+115,"BRAM7_dout_b", false,-1, 63,0);
        tracep->declBit(c+117,"BRAM8_en_a", false,-1);
        tracep->declBus(c+118,"BRAM8_we_a", false,-1, 0,0);
        tracep->declBus(c+119,"BRAM8_addr_a", false,-1, 8,0);
        tracep->declQuad(c+120,"BRAM8_din_a", false,-1, 63,0);
        tracep->declBit(c+122,"BRAM8_en_b", false,-1);
        tracep->declBus(c+123,"BRAM8_addr_b", false,-1, 8,0);
        tracep->declQuad(c+124,"BRAM8_dout_b", false,-1, 63,0);
        tracep->declBit(c+126,"BRAM9_en_a", false,-1);
        tracep->declBus(c+127,"BRAM9_we_a", false,-1, 0,0);
        tracep->declBus(c+128,"BRAM9_addr_a", false,-1, 8,0);
        tracep->declQuad(c+129,"BRAM9_din_a", false,-1, 63,0);
        tracep->declBit(c+131,"BRAM9_en_b", false,-1);
        tracep->declBus(c+132,"BRAM9_addr_b", false,-1, 8,0);
        tracep->declQuad(c+133,"BRAM9_dout_b", false,-1, 63,0);
        tracep->declBit(c+135,"Background_Layer1_ena", false,-1);
        tracep->declBit(c+136,"Background_Layer1_dequeue", false,-1);
        tracep->declBit(c+137,"Background_Layer1_r_master", false,-1);
        tracep->declQuad(c+138,"Background_Layer1_data", false,-1, 63,0);
        tracep->declBus(c+140,"Background_Layer1_count", false,-1, 8,0);
        tracep->declBit(c+141,"Background_Layer2_ena", false,-1);
        tracep->declBit(c+142,"Background_Layer2_dequeue", false,-1);
        tracep->declBit(c+143,"Background_Layer2_r_master", false,-1);
        tracep->declQuad(c+144,"Background_Layer2_data", false,-1, 63,0);
        tracep->declBus(c+146,"Background_Layer2_count", false,-1, 8,0);
        tracep->declBit(c+147,"Character_Layer1_ena", false,-1);
        tracep->declBit(c+148,"Character_Layer1_dequeue", false,-1);
        tracep->declBit(c+149,"Character_Layer1_r_master", false,-1);
        tracep->declQuad(c+150,"Character_Layer1_data", false,-1, 63,0);
        tracep->declBus(c+152,"Character_Layer1_count", false,-1, 7,0);
        tracep->declBit(c+153,"Character_Layer2_ena", false,-1);
        tracep->declBit(c+154,"Character_Layer2_dequeue", false,-1);
        tracep->declBit(c+155,"Character_Layer2_r_master", false,-1);
        tracep->declQuad(c+156,"Character_Layer2_data", false,-1, 63,0);
        tracep->declBus(c+158,"Character_Layer2_count", false,-1, 7,0);
        tracep->declBit(c+159,"Character_Layer3_ena", false,-1);
        tracep->declBit(c+160,"Character_Layer3_dequeue", false,-1);
        tracep->declBit(c+161,"Character_Layer3_r_master", false,-1);
        tracep->declQuad(c+162,"Character_Layer3_data", false,-1, 63,0);
        tracep->declBus(c+164,"Character_Layer3_count", false,-1, 7,0);
        tracep->declBit(c+165,"Character_Layer4_ena", false,-1);
        tracep->declBit(c+166,"Character_Layer4_dequeue", false,-1);
        tracep->declBit(c+167,"Character_Layer4_r_master", false,-1);
        tracep->declQuad(c+168,"Character_Layer4_data", false,-1, 63,0);
        tracep->declBus(c+170,"Character_Layer4_count", false,-1, 7,0);
        tracep->declBit(c+171,"Script_Layer_ena", false,-1);
        tracep->declBit(c+172,"Script_Layer_dequeue", false,-1);
        tracep->declBit(c+173,"Script_Layer_r_master", false,-1);
        tracep->declQuad(c+174,"Script_Layer_data", false,-1, 63,0);
        tracep->declBus(c+176,"Script_Layer_count", false,-1, 7,0);
        tracep->declBit(c+177,"Status_Layer_ena", false,-1);
        tracep->declBit(c+178,"Status_Layer_dequeue", false,-1);
        tracep->declBit(c+179,"Status_Layer_r_master", false,-1);
        tracep->declQuad(c+180,"Status_Layer_data", false,-1, 63,0);
        tracep->declBus(c+182,"Status_Layer_count", false,-1, 7,0);
        tracep->declBit(c+183,"Universal_Layer1_ena", false,-1);
        tracep->declBit(c+184,"Universal_Layer1_dequeue", false,-1);
        tracep->declBit(c+185,"Universal_Layer1_r_master", false,-1);
        tracep->declQuad(c+186,"Universal_Layer1_data", false,-1, 63,0);
        tracep->declBus(c+188,"Universal_Layer1_count", false,-1, 7,0);
        tracep->declBit(c+189,"Universal_Layer2_ena", false,-1);
        tracep->declBit(c+190,"Universal_Layer2_dequeue", false,-1);
        tracep->declBit(c+191,"Universal_Layer2_r_master", false,-1);
        tracep->declQuad(c+192,"Universal_Layer2_data", false,-1, 63,0);
        tracep->declBus(c+194,"Universal_Layer2_count", false,-1, 7,0);
        tracep->declBit(c+87,"Compressed_Data_FIFO clk", false,-1);
        tracep->declBit(c+88,"Compressed_Data_FIFO resetn", false,-1);
        tracep->declBit(c+89,"Compressed_Data_FIFO PPU_start", false,-1);
        tracep->declBus(c+90,"Compressed_Data_FIFO Universal_Layer1_Address", false,-1, 31,0);
        tracep->declBus(c+91,"Compressed_Data_FIFO Universal_Layer2_Address", false,-1, 31,0);
        tracep->declBus(c+92,"Compressed_Data_FIFO Script_Layer_Address", false,-1, 31,0);
        tracep->declBus(c+93,"Compressed_Data_FIFO Status_Layer_Address", false,-1, 31,0);
        tracep->declBus(c+94,"Compressed_Data_FIFO Character_Layer1_Address", false,-1, 31,0);
        tracep->declBus(c+95,"Compressed_Data_FIFO Character_Layer2_Address", false,-1, 31,0);
        tracep->declBus(c+96,"Compressed_Data_FIFO Character_Layer3_Address", false,-1, 31,0);
        tracep->declBus(c+97,"Compressed_Data_FIFO Character_Layer4_Address", false,-1, 31,0);
        tracep->declBus(c+98,"Compressed_Data_FIFO Background_Layer1_Address", false,-1, 31,0);
        tracep->declBus(c+99,"Compressed_Data_FIFO Background_Layer2_Address", false,-1, 31,0);
        tracep->declBit(c+100,"Compressed_Data_FIFO EMEM_valid", false,-1);
        tracep->declBit(c+101,"Compressed_Data_FIFO EMEM_ready", false,-1);
        tracep->declBus(c+102,"Compressed_Data_FIFO EMEM_addr", false,-1, 31,0);
        tracep->declBus(c+103,"Compressed_Data_FIFO EMEM_wdata", false,-1, 31,0);
        tracep->declBus(c+104,"Compressed_Data_FIFO EMEM_wstrb", false,-1, 3,0);
        tracep->declBus(c+105,"Compressed_Data_FIFO EMEM_rdata", false,-1, 31,0);
        tracep->declBus(c+106,"Compressed_Data_FIFO EMEM_burst_len", false,-1, 7,0);
        tracep->declBit(c+107,"Compressed_Data_FIFO EMEM_burst_en", false,-1);
        tracep->declBit(c+108,"Compressed_Data_FIFO BRAM7_en_a", false,-1);
        tracep->declBus(c+109,"Compressed_Data_FIFO BRAM7_we_a", false,-1, 0,0);
        tracep->declBus(c+110,"Compressed_Data_FIFO BRAM7_addr_a", false,-1, 8,0);
        tracep->declQuad(c+111,"Compressed_Data_FIFO BRAM7_din_a", false,-1, 63,0);
        tracep->declBit(c+113,"Compressed_Data_FIFO BRAM7_en_b", false,-1);
        tracep->declBus(c+114,"Compressed_Data_FIFO BRAM7_addr_b", false,-1, 8,0);
        tracep->declQuad(c+115,"Compressed_Data_FIFO BRAM7_dout_b", false,-1, 63,0);
        tracep->declBit(c+117,"Compressed_Data_FIFO BRAM8_en_a", false,-1);
        tracep->declBus(c+118,"Compressed_Data_FIFO BRAM8_we_a", false,-1, 0,0);
        tracep->declBus(c+119,"Compressed_Data_FIFO BRAM8_addr_a", false,-1, 8,0);
        tracep->declQuad(c+120,"Compressed_Data_FIFO BRAM8_din_a", false,-1, 63,0);
        tracep->declBit(c+122,"Compressed_Data_FIFO BRAM8_en_b", false,-1);
        tracep->declBus(c+123,"Compressed_Data_FIFO BRAM8_addr_b", false,-1, 8,0);
        tracep->declQuad(c+124,"Compressed_Data_FIFO BRAM8_dout_b", false,-1, 63,0);
        tracep->declBit(c+126,"Compressed_Data_FIFO BRAM9_en_a", false,-1);
        tracep->declBus(c+127,"Compressed_Data_FIFO BRAM9_we_a", false,-1, 0,0);
        tracep->declBus(c+128,"Compressed_Data_FIFO BRAM9_addr_a", false,-1, 8,0);
        tracep->declQuad(c+129,"Compressed_Data_FIFO BRAM9_din_a", false,-1, 63,0);
        tracep->declBit(c+131,"Compressed_Data_FIFO BRAM9_en_b", false,-1);
        tracep->declBus(c+132,"Compressed_Data_FIFO BRAM9_addr_b", false,-1, 8,0);
        tracep->declQuad(c+133,"Compressed_Data_FIFO BRAM9_dout_b", false,-1, 63,0);
        tracep->declBit(c+135,"Compressed_Data_FIFO Background_Layer1_ena", false,-1);
        tracep->declBit(c+136,"Compressed_Data_FIFO Background_Layer1_dequeue", false,-1);
        tracep->declBit(c+137,"Compressed_Data_FIFO Background_Layer1_r_master", false,-1);
        tracep->declQuad(c+138,"Compressed_Data_FIFO Background_Layer1_data", false,-1, 63,0);
        tracep->declBus(c+140,"Compressed_Data_FIFO Background_Layer1_count", false,-1, 8,0);
        tracep->declBit(c+141,"Compressed_Data_FIFO Background_Layer2_ena", false,-1);
        tracep->declBit(c+142,"Compressed_Data_FIFO Background_Layer2_dequeue", false,-1);
        tracep->declBit(c+143,"Compressed_Data_FIFO Background_Layer2_r_master", false,-1);
        tracep->declQuad(c+144,"Compressed_Data_FIFO Background_Layer2_data", false,-1, 63,0);
        tracep->declBus(c+146,"Compressed_Data_FIFO Background_Layer2_count", false,-1, 8,0);
        tracep->declBit(c+147,"Compressed_Data_FIFO Character_Layer1_ena", false,-1);
        tracep->declBit(c+148,"Compressed_Data_FIFO Character_Layer1_dequeue", false,-1);
        tracep->declBit(c+149,"Compressed_Data_FIFO Character_Layer1_r_master", false,-1);
        tracep->declQuad(c+150,"Compressed_Data_FIFO Character_Layer1_data", false,-1, 63,0);
        tracep->declBus(c+152,"Compressed_Data_FIFO Character_Layer1_count", false,-1, 7,0);
        tracep->declBit(c+153,"Compressed_Data_FIFO Character_Layer2_ena", false,-1);
        tracep->declBit(c+154,"Compressed_Data_FIFO Character_Layer2_dequeue", false,-1);
        tracep->declBit(c+155,"Compressed_Data_FIFO Character_Layer2_r_master", false,-1);
        tracep->declQuad(c+156,"Compressed_Data_FIFO Character_Layer2_data", false,-1, 63,0);
        tracep->declBus(c+158,"Compressed_Data_FIFO Character_Layer2_count", false,-1, 7,0);
        tracep->declBit(c+159,"Compressed_Data_FIFO Character_Layer3_ena", false,-1);
        tracep->declBit(c+160,"Compressed_Data_FIFO Character_Layer3_dequeue", false,-1);
        tracep->declBit(c+161,"Compressed_Data_FIFO Character_Layer3_r_master", false,-1);
        tracep->declQuad(c+162,"Compressed_Data_FIFO Character_Layer3_data", false,-1, 63,0);
        tracep->declBus(c+164,"Compressed_Data_FIFO Character_Layer3_count", false,-1, 7,0);
        tracep->declBit(c+165,"Compressed_Data_FIFO Character_Layer4_ena", false,-1);
        tracep->declBit(c+166,"Compressed_Data_FIFO Character_Layer4_dequeue", false,-1);
        tracep->declBit(c+167,"Compressed_Data_FIFO Character_Layer4_r_master", false,-1);
        tracep->declQuad(c+168,"Compressed_Data_FIFO Character_Layer4_data", false,-1, 63,0);
        tracep->declBus(c+170,"Compressed_Data_FIFO Character_Layer4_count", false,-1, 7,0);
        tracep->declBit(c+171,"Compressed_Data_FIFO Script_Layer_ena", false,-1);
        tracep->declBit(c+172,"Compressed_Data_FIFO Script_Layer_dequeue", false,-1);
        tracep->declBit(c+173,"Compressed_Data_FIFO Script_Layer_r_master", false,-1);
        tracep->declQuad(c+174,"Compressed_Data_FIFO Script_Layer_data", false,-1, 63,0);
        tracep->declBus(c+176,"Compressed_Data_FIFO Script_Layer_count", false,-1, 7,0);
        tracep->declBit(c+177,"Compressed_Data_FIFO Status_Layer_ena", false,-1);
        tracep->declBit(c+178,"Compressed_Data_FIFO Status_Layer_dequeue", false,-1);
        tracep->declBit(c+179,"Compressed_Data_FIFO Status_Layer_r_master", false,-1);
        tracep->declQuad(c+180,"Compressed_Data_FIFO Status_Layer_data", false,-1, 63,0);
        tracep->declBus(c+182,"Compressed_Data_FIFO Status_Layer_count", false,-1, 7,0);
        tracep->declBit(c+183,"Compressed_Data_FIFO Universal_Layer1_ena", false,-1);
        tracep->declBit(c+184,"Compressed_Data_FIFO Universal_Layer1_dequeue", false,-1);
        tracep->declBit(c+185,"Compressed_Data_FIFO Universal_Layer1_r_master", false,-1);
        tracep->declQuad(c+186,"Compressed_Data_FIFO Universal_Layer1_data", false,-1, 63,0);
        tracep->declBus(c+188,"Compressed_Data_FIFO Universal_Layer1_count", false,-1, 7,0);
        tracep->declBit(c+189,"Compressed_Data_FIFO Universal_Layer2_ena", false,-1);
        tracep->declBit(c+190,"Compressed_Data_FIFO Universal_Layer2_dequeue", false,-1);
        tracep->declBit(c+191,"Compressed_Data_FIFO Universal_Layer2_r_master", false,-1);
        tracep->declQuad(c+192,"Compressed_Data_FIFO Universal_Layer2_data", false,-1, 63,0);
        tracep->declBus(c+194,"Compressed_Data_FIFO Universal_Layer2_count", false,-1, 7,0);
        tracep->declBit(c+195,"Compressed_Data_FIFO uni1_fifo_urgent", false,-1);
        tracep->declBus(c+1,"Compressed_Data_FIFO uni1_fifo_count", false,-1, 7,0);
        tracep->declBus(c+2,"Compressed_Data_FIFO uni1_fifo_front", false,-1, 7,0);
        tracep->declBus(c+3,"Compressed_Data_FIFO uni1_fifo_rear", false,-1, 7,0);
        tracep->declBit(c+196,"Compressed_Data_FIFO uni2_fifo_urgent", false,-1);
        tracep->declBus(c+4,"Compressed_Data_FIFO uni2_fifo_count", false,-1, 7,0);
        tracep->declBus(c+5,"Compressed_Data_FIFO uni2_fifo_front", false,-1, 7,0);
        tracep->declBus(c+6,"Compressed_Data_FIFO uni2_fifo_rear", false,-1, 7,0);
        tracep->declBit(c+197,"Compressed_Data_FIFO script_fifo_urgent", false,-1);
        tracep->declBus(c+7,"Compressed_Data_FIFO script_fifo_count", false,-1, 7,0);
        tracep->declBus(c+8,"Compressed_Data_FIFO script_fifo_front", false,-1, 7,0);
        tracep->declBus(c+9,"Compressed_Data_FIFO script_fifo_rear", false,-1, 7,0);
        tracep->declBit(c+198,"Compressed_Data_FIFO status_fifo_urgent", false,-1);
        tracep->declBus(c+10,"Compressed_Data_FIFO status_fifo_count", false,-1, 7,0);
        tracep->declBus(c+11,"Compressed_Data_FIFO status_fifo_front", false,-1, 7,0);
        tracep->declBus(c+12,"Compressed_Data_FIFO status_fifo_rear", false,-1, 7,0);
        tracep->declBit(c+199,"Compressed_Data_FIFO char1_fifo_urgent", false,-1);
        tracep->declBus(c+13,"Compressed_Data_FIFO char1_fifo_count", false,-1, 7,0);
        tracep->declBus(c+14,"Compressed_Data_FIFO char1_fifo_front", false,-1, 7,0);
        tracep->declBus(c+15,"Compressed_Data_FIFO char1_fifo_rear", false,-1, 7,0);
        tracep->declBit(c+200,"Compressed_Data_FIFO char2_fifo_urgent", false,-1);
        tracep->declBus(c+16,"Compressed_Data_FIFO char2_fifo_count", false,-1, 7,0);
        tracep->declBus(c+17,"Compressed_Data_FIFO char2_fifo_front", false,-1, 7,0);
        tracep->declBus(c+18,"Compressed_Data_FIFO char2_fifo_rear", false,-1, 7,0);
        tracep->declBit(c+201,"Compressed_Data_FIFO char3_fifo_urgent", false,-1);
        tracep->declBus(c+19,"Compressed_Data_FIFO char3_fifo_count", false,-1, 7,0);
        tracep->declBus(c+20,"Compressed_Data_FIFO char3_fifo_front", false,-1, 7,0);
        tracep->declBus(c+21,"Compressed_Data_FIFO char3_fifo_rear", false,-1, 7,0);
        tracep->declBit(c+202,"Compressed_Data_FIFO char4_fifo_urgent", false,-1);
        tracep->declBus(c+22,"Compressed_Data_FIFO char4_fifo_count", false,-1, 7,0);
        tracep->declBus(c+23,"Compressed_Data_FIFO char4_fifo_front", false,-1, 7,0);
        tracep->declBus(c+24,"Compressed_Data_FIFO char4_fifo_rear", false,-1, 7,0);
        tracep->declBit(c+203,"Compressed_Data_FIFO back1_fifo_urgent", false,-1);
        tracep->declBus(c+25,"Compressed_Data_FIFO back1_fifo_count", false,-1, 8,0);
        tracep->declBus(c+26,"Compressed_Data_FIFO back1_fifo_front", false,-1, 8,0);
        tracep->declBus(c+27,"Compressed_Data_FIFO back1_fifo_rear", false,-1, 8,0);
        tracep->declBit(c+204,"Compressed_Data_FIFO back2_fifo_urgent", false,-1);
        tracep->declBus(c+28,"Compressed_Data_FIFO back2_fifo_count", false,-1, 8,0);
        tracep->declBus(c+29,"Compressed_Data_FIFO back2_fifo_front", false,-1, 8,0);
        tracep->declBus(c+30,"Compressed_Data_FIFO back2_fifo_rear", false,-1, 8,0);
        tracep->declBit(c+57,"Compressed_Data_FIFO back1_fifo_inc_want", false,-1);
        tracep->declBit(c+58,"Compressed_Data_FIFO back1_fifo_dec_want", false,-1);
        tracep->declBit(c+59,"Compressed_Data_FIFO back2_fifo_inc_want", false,-1);
        tracep->declBit(c+60,"Compressed_Data_FIFO back2_fifo_dec_want", false,-1);
        tracep->declBit(c+61,"Compressed_Data_FIFO char1_fifo_inc_want", false,-1);
        tracep->declBit(c+62,"Compressed_Data_FIFO char1_fifo_dec_want", false,-1);
        tracep->declBit(c+63,"Compressed_Data_FIFO char2_fifo_inc_want", false,-1);
        tracep->declBit(c+64,"Compressed_Data_FIFO char2_fifo_dec_want", false,-1);
        tracep->declBit(c+65,"Compressed_Data_FIFO char3_fifo_inc_want", false,-1);
        tracep->declBit(c+66,"Compressed_Data_FIFO char3_fifo_dec_want", false,-1);
        tracep->declBit(c+67,"Compressed_Data_FIFO char4_fifo_inc_want", false,-1);
        tracep->declBit(c+68,"Compressed_Data_FIFO char4_fifo_dec_want", false,-1);
        tracep->declBit(c+69,"Compressed_Data_FIFO script_fifo_inc_want", false,-1);
        tracep->declBit(c+70,"Compressed_Data_FIFO script_fifo_dec_want", false,-1);
        tracep->declBit(c+71,"Compressed_Data_FIFO status_fifo_inc_want", false,-1);
        tracep->declBit(c+72,"Compressed_Data_FIFO status_fifo_dec_want", false,-1);
        tracep->declBit(c+73,"Compressed_Data_FIFO uni1_fifo_inc_want", false,-1);
        tracep->declBit(c+74,"Compressed_Data_FIFO uni1_fifo_dec_want", false,-1);
        tracep->declBit(c+75,"Compressed_Data_FIFO uni2_fifo_inc_want", false,-1);
        tracep->declBit(c+76,"Compressed_Data_FIFO uni2_fifo_dec_want", false,-1);
        tracep->declBus(c+31,"Compressed_Data_FIFO clk_counter", false,-1, 1,0);
        tracep->declBit(c+32,"Compressed_Data_FIFO uni1_fifo_r_master", false,-1);
        tracep->declBit(c+33,"Compressed_Data_FIFO uni2_fifo_r_master", false,-1);
        tracep->declBit(c+34,"Compressed_Data_FIFO script_fifo_r_master", false,-1);
        tracep->declBit(c+35,"Compressed_Data_FIFO status_fifo_r_master", false,-1);
        tracep->declBit(c+32,"Compressed_Data_FIFO char1_fifo_r_master", false,-1);
        tracep->declBit(c+33,"Compressed_Data_FIFO char2_fifo_r_master", false,-1);
        tracep->declBit(c+34,"Compressed_Data_FIFO char3_fifo_r_master", false,-1);
        tracep->declBit(c+35,"Compressed_Data_FIFO char4_fifo_r_master", false,-1);
        tracep->declBit(c+36,"Compressed_Data_FIFO back1_fifo_r_master", false,-1);
        tracep->declBit(c+37,"Compressed_Data_FIFO back2_fifo_r_master", false,-1);
        tracep->declBus(c+38,"Compressed_Data_FIFO main_state", false,-1, 3,0);
        tracep->declBus(c+39,"Compressed_Data_FIFO BRAM7_read_state", false,-1, 2,0);
        tracep->declBus(c+77,"Compressed_Data_FIFO BRAM7_read_state_next", false,-1, 2,0);
        tracep->declBus(c+40,"Compressed_Data_FIFO BRAM8_read_state", false,-1, 2,0);
        tracep->declBus(c+78,"Compressed_Data_FIFO BRAM8_read_state_next", false,-1, 2,0);
        tracep->declBus(c+41,"Compressed_Data_FIFO BRAM9_read_state", false,-1, 2,0);
        tracep->declBus(c+79,"Compressed_Data_FIFO BRAM9_read_state_next", false,-1, 2,0);
        tracep->declBus(c+205,"Compressed_Data_FIFO IDLE", false,-1, 31,0);
        tracep->declBus(c+206,"Compressed_Data_FIFO START", false,-1, 31,0);
        tracep->declBus(c+207,"Compressed_Data_FIFO EMEM_READ", false,-1, 31,0);
        tracep->declBus(c+42,"Compressed_Data_FIFO uni1_next_ad", false,-1, 31,0);
        tracep->declBus(c+43,"Compressed_Data_FIFO uni2_next_ad", false,-1, 31,0);
        tracep->declBus(c+44,"Compressed_Data_FIFO script_next_ad", false,-1, 31,0);
        tracep->declBus(c+45,"Compressed_Data_FIFO status_next_ad", false,-1, 31,0);
        tracep->declBus(c+46,"Compressed_Data_FIFO char1_next_ad", false,-1, 31,0);
        tracep->declBus(c+47,"Compressed_Data_FIFO char2_next_ad", false,-1, 31,0);
        tracep->declBus(c+48,"Compressed_Data_FIFO char3_next_ad", false,-1, 31,0);
        tracep->declBus(c+49,"Compressed_Data_FIFO char4_next_ad", false,-1, 31,0);
        tracep->declBus(c+50,"Compressed_Data_FIFO back1_next_ad", false,-1, 31,0);
        tracep->declBus(c+51,"Compressed_Data_FIFO back2_next_ad", false,-1, 31,0);
        tracep->declBus(c+80,"Compressed_Data_FIFO next_should_read_layer", false,-1, 9,0);
        tracep->declBus(c+52,"Compressed_Data_FIFO last_read_basic", false,-1, 9,0);
        tracep->declBus(c+53,"Compressed_Data_FIFO last_read_urgent", false,-1, 9,0);
        tracep->declBus(c+81,"Compressed_Data_FIFO valid_req", false,-1, 9,0);
        tracep->declBus(c+82,"Compressed_Data_FIFO urgent_req", false,-1, 9,0);
        tracep->declBus(c+83,"Compressed_Data_FIFO basic_req", false,-1, 9,0);
        tracep->declBus(c+84,"Compressed_Data_FIFO masked_req", false,-1, 9,0);
        tracep->declBit(c+85,"Compressed_Data_FIFO round_end", false,-1);
        tracep->declBit(c+86,"Compressed_Data_FIFO is_urgent_mode", false,-1);
        tracep->declBus(c+54,"Compressed_Data_FIFO should_read_layer", false,-1, 9,0);
        tracep->declBus(c+55,"Compressed_Data_FIFO emem_r_counter", false,-1, 7,0);
        tracep->declBus(c+56,"Compressed_Data_FIFO tem_32_reg", false,-1, 31,0);
    }
}

void VCompressed_Data_FIFO::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VCompressed_Data_FIFO::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VCompressed_Data_FIFO__Syms* __restrict vlSymsp = static_cast<VCompressed_Data_FIFO__Syms*>(userp);
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VCompressed_Data_FIFO::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VCompressed_Data_FIFO__Syms* __restrict vlSymsp = static_cast<VCompressed_Data_FIFO__Syms*>(userp);
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count),8);
        tracep->fullCData(oldp+2,(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_front),8);
        tracep->fullCData(oldp+3,(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_rear),8);
        tracep->fullCData(oldp+4,(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count),8);
        tracep->fullCData(oldp+5,(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_front),8);
        tracep->fullCData(oldp+6,(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_rear),8);
        tracep->fullCData(oldp+7,(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count),8);
        tracep->fullCData(oldp+8,(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_front),8);
        tracep->fullCData(oldp+9,(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_rear),8);
        tracep->fullCData(oldp+10,(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count),8);
        tracep->fullCData(oldp+11,(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_front),8);
        tracep->fullCData(oldp+12,(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_rear),8);
        tracep->fullCData(oldp+13,(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count),8);
        tracep->fullCData(oldp+14,(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_front),8);
        tracep->fullCData(oldp+15,(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_rear),8);
        tracep->fullCData(oldp+16,(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count),8);
        tracep->fullCData(oldp+17,(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_front),8);
        tracep->fullCData(oldp+18,(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_rear),8);
        tracep->fullCData(oldp+19,(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count),8);
        tracep->fullCData(oldp+20,(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_front),8);
        tracep->fullCData(oldp+21,(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_rear),8);
        tracep->fullCData(oldp+22,(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count),8);
        tracep->fullCData(oldp+23,(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_front),8);
        tracep->fullCData(oldp+24,(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_rear),8);
        tracep->fullSData(oldp+25,(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count),9);
        tracep->fullSData(oldp+26,(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_front),9);
        tracep->fullSData(oldp+27,(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_rear),9);
        tracep->fullSData(oldp+28,(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count),9);
        tracep->fullSData(oldp+29,(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_front),9);
        tracep->fullSData(oldp+30,(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_rear),9);
        tracep->fullCData(oldp+31,(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter),2);
        tracep->fullBit(oldp+32,((0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter))));
        tracep->fullBit(oldp+33,((1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter))));
        tracep->fullBit(oldp+34,((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter))));
        tracep->fullBit(oldp+35,((3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter))));
        tracep->fullBit(oldp+36,(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_r_master));
        tracep->fullBit(oldp+37,(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_r_master));
        tracep->fullCData(oldp+38,(vlTOPp->Compressed_Data_FIFO__DOT__main_state),4);
        tracep->fullCData(oldp+39,(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state),3);
        tracep->fullCData(oldp+40,(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state),3);
        tracep->fullCData(oldp+41,(vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state),3);
        tracep->fullIData(oldp+42,(vlTOPp->Compressed_Data_FIFO__DOT__uni1_next_ad),32);
        tracep->fullIData(oldp+43,(vlTOPp->Compressed_Data_FIFO__DOT__uni2_next_ad),32);
        tracep->fullIData(oldp+44,(vlTOPp->Compressed_Data_FIFO__DOT__script_next_ad),32);
        tracep->fullIData(oldp+45,(vlTOPp->Compressed_Data_FIFO__DOT__status_next_ad),32);
        tracep->fullIData(oldp+46,(vlTOPp->Compressed_Data_FIFO__DOT__char1_next_ad),32);
        tracep->fullIData(oldp+47,(vlTOPp->Compressed_Data_FIFO__DOT__char2_next_ad),32);
        tracep->fullIData(oldp+48,(vlTOPp->Compressed_Data_FIFO__DOT__char3_next_ad),32);
        tracep->fullIData(oldp+49,(vlTOPp->Compressed_Data_FIFO__DOT__char4_next_ad),32);
        tracep->fullIData(oldp+50,(vlTOPp->Compressed_Data_FIFO__DOT__back1_next_ad),32);
        tracep->fullIData(oldp+51,(vlTOPp->Compressed_Data_FIFO__DOT__back2_next_ad),32);
        tracep->fullSData(oldp+52,(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic),10);
        tracep->fullSData(oldp+53,(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent),10);
        tracep->fullSData(oldp+54,(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer),10);
        tracep->fullCData(oldp+55,(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter),8);
        tracep->fullIData(oldp+56,(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg),32);
        tracep->fullBit(oldp+57,(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_inc_want));
        tracep->fullBit(oldp+58,(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_dec_want));
        tracep->fullBit(oldp+59,(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_inc_want));
        tracep->fullBit(oldp+60,(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_dec_want));
        tracep->fullBit(oldp+61,(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_inc_want));
        tracep->fullBit(oldp+62,(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_dec_want));
        tracep->fullBit(oldp+63,(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_inc_want));
        tracep->fullBit(oldp+64,(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_dec_want));
        tracep->fullBit(oldp+65,(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_inc_want));
        tracep->fullBit(oldp+66,(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_dec_want));
        tracep->fullBit(oldp+67,(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_inc_want));
        tracep->fullBit(oldp+68,(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_dec_want));
        tracep->fullBit(oldp+69,(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_inc_want));
        tracep->fullBit(oldp+70,(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_dec_want));
        tracep->fullBit(oldp+71,(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_inc_want));
        tracep->fullBit(oldp+72,(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_dec_want));
        tracep->fullBit(oldp+73,(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_inc_want));
        tracep->fullBit(oldp+74,(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_dec_want));
        tracep->fullBit(oldp+75,(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_inc_want));
        tracep->fullBit(oldp+76,(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_dec_want));
        tracep->fullCData(oldp+77,(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state_next),3);
        tracep->fullCData(oldp+78,(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state_next),3);
        tracep->fullCData(oldp+79,(vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state_next),3);
        tracep->fullSData(oldp+80,(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer),10);
        tracep->fullSData(oldp+81,(vlTOPp->Compressed_Data_FIFO__DOT__valid_req),10);
        tracep->fullSData(oldp+82,(vlTOPp->Compressed_Data_FIFO__DOT__urgent_req),10);
        tracep->fullSData(oldp+83,(vlTOPp->Compressed_Data_FIFO__DOT__basic_req),10);
        tracep->fullSData(oldp+84,(vlTOPp->Compressed_Data_FIFO__DOT__masked_req),10);
        tracep->fullBit(oldp+85,(vlTOPp->Compressed_Data_FIFO__DOT__round_end));
        tracep->fullBit(oldp+86,(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode));
        tracep->fullBit(oldp+87,(vlTOPp->clk));
        tracep->fullBit(oldp+88,(vlTOPp->resetn));
        tracep->fullBit(oldp+89,(vlTOPp->PPU_start));
        tracep->fullIData(oldp+90,(vlTOPp->Universal_Layer1_Address),32);
        tracep->fullIData(oldp+91,(vlTOPp->Universal_Layer2_Address),32);
        tracep->fullIData(oldp+92,(vlTOPp->Script_Layer_Address),32);
        tracep->fullIData(oldp+93,(vlTOPp->Status_Layer_Address),32);
        tracep->fullIData(oldp+94,(vlTOPp->Character_Layer1_Address),32);
        tracep->fullIData(oldp+95,(vlTOPp->Character_Layer2_Address),32);
        tracep->fullIData(oldp+96,(vlTOPp->Character_Layer3_Address),32);
        tracep->fullIData(oldp+97,(vlTOPp->Character_Layer4_Address),32);
        tracep->fullIData(oldp+98,(vlTOPp->Background_Layer1_Address),32);
        tracep->fullIData(oldp+99,(vlTOPp->Background_Layer2_Address),32);
        tracep->fullBit(oldp+100,(vlTOPp->EMEM_valid));
        tracep->fullBit(oldp+101,(vlTOPp->EMEM_ready));
        tracep->fullIData(oldp+102,(vlTOPp->EMEM_addr),32);
        tracep->fullIData(oldp+103,(vlTOPp->EMEM_wdata),32);
        tracep->fullCData(oldp+104,(vlTOPp->EMEM_wstrb),4);
        tracep->fullIData(oldp+105,(vlTOPp->EMEM_rdata),32);
        tracep->fullCData(oldp+106,(vlTOPp->EMEM_burst_len),8);
        tracep->fullBit(oldp+107,(vlTOPp->EMEM_burst_en));
        tracep->fullBit(oldp+108,(vlTOPp->BRAM7_en_a));
        tracep->fullBit(oldp+109,(vlTOPp->BRAM7_we_a));
        tracep->fullSData(oldp+110,(vlTOPp->BRAM7_addr_a),9);
        tracep->fullQData(oldp+111,(vlTOPp->BRAM7_din_a),64);
        tracep->fullBit(oldp+113,(vlTOPp->BRAM7_en_b));
        tracep->fullSData(oldp+114,(vlTOPp->BRAM7_addr_b),9);
        tracep->fullQData(oldp+115,(vlTOPp->BRAM7_dout_b),64);
        tracep->fullBit(oldp+117,(vlTOPp->BRAM8_en_a));
        tracep->fullBit(oldp+118,(vlTOPp->BRAM8_we_a));
        tracep->fullSData(oldp+119,(vlTOPp->BRAM8_addr_a),9);
        tracep->fullQData(oldp+120,(vlTOPp->BRAM8_din_a),64);
        tracep->fullBit(oldp+122,(vlTOPp->BRAM8_en_b));
        tracep->fullSData(oldp+123,(vlTOPp->BRAM8_addr_b),9);
        tracep->fullQData(oldp+124,(vlTOPp->BRAM8_dout_b),64);
        tracep->fullBit(oldp+126,(vlTOPp->BRAM9_en_a));
        tracep->fullBit(oldp+127,(vlTOPp->BRAM9_we_a));
        tracep->fullSData(oldp+128,(vlTOPp->BRAM9_addr_a),9);
        tracep->fullQData(oldp+129,(vlTOPp->BRAM9_din_a),64);
        tracep->fullBit(oldp+131,(vlTOPp->BRAM9_en_b));
        tracep->fullSData(oldp+132,(vlTOPp->BRAM9_addr_b),9);
        tracep->fullQData(oldp+133,(vlTOPp->BRAM9_dout_b),64);
        tracep->fullBit(oldp+135,(vlTOPp->Background_Layer1_ena));
        tracep->fullBit(oldp+136,(vlTOPp->Background_Layer1_dequeue));
        tracep->fullBit(oldp+137,(vlTOPp->Background_Layer1_r_master));
        tracep->fullQData(oldp+138,(vlTOPp->Background_Layer1_data),64);
        tracep->fullSData(oldp+140,(vlTOPp->Background_Layer1_count),9);
        tracep->fullBit(oldp+141,(vlTOPp->Background_Layer2_ena));
        tracep->fullBit(oldp+142,(vlTOPp->Background_Layer2_dequeue));
        tracep->fullBit(oldp+143,(vlTOPp->Background_Layer2_r_master));
        tracep->fullQData(oldp+144,(vlTOPp->Background_Layer2_data),64);
        tracep->fullSData(oldp+146,(vlTOPp->Background_Layer2_count),9);
        tracep->fullBit(oldp+147,(vlTOPp->Character_Layer1_ena));
        tracep->fullBit(oldp+148,(vlTOPp->Character_Layer1_dequeue));
        tracep->fullBit(oldp+149,(vlTOPp->Character_Layer1_r_master));
        tracep->fullQData(oldp+150,(vlTOPp->Character_Layer1_data),64);
        tracep->fullCData(oldp+152,(vlTOPp->Character_Layer1_count),8);
        tracep->fullBit(oldp+153,(vlTOPp->Character_Layer2_ena));
        tracep->fullBit(oldp+154,(vlTOPp->Character_Layer2_dequeue));
        tracep->fullBit(oldp+155,(vlTOPp->Character_Layer2_r_master));
        tracep->fullQData(oldp+156,(vlTOPp->Character_Layer2_data),64);
        tracep->fullCData(oldp+158,(vlTOPp->Character_Layer2_count),8);
        tracep->fullBit(oldp+159,(vlTOPp->Character_Layer3_ena));
        tracep->fullBit(oldp+160,(vlTOPp->Character_Layer3_dequeue));
        tracep->fullBit(oldp+161,(vlTOPp->Character_Layer3_r_master));
        tracep->fullQData(oldp+162,(vlTOPp->Character_Layer3_data),64);
        tracep->fullCData(oldp+164,(vlTOPp->Character_Layer3_count),8);
        tracep->fullBit(oldp+165,(vlTOPp->Character_Layer4_ena));
        tracep->fullBit(oldp+166,(vlTOPp->Character_Layer4_dequeue));
        tracep->fullBit(oldp+167,(vlTOPp->Character_Layer4_r_master));
        tracep->fullQData(oldp+168,(vlTOPp->Character_Layer4_data),64);
        tracep->fullCData(oldp+170,(vlTOPp->Character_Layer4_count),8);
        tracep->fullBit(oldp+171,(vlTOPp->Script_Layer_ena));
        tracep->fullBit(oldp+172,(vlTOPp->Script_Layer_dequeue));
        tracep->fullBit(oldp+173,(vlTOPp->Script_Layer_r_master));
        tracep->fullQData(oldp+174,(vlTOPp->Script_Layer_data),64);
        tracep->fullCData(oldp+176,(vlTOPp->Script_Layer_count),8);
        tracep->fullBit(oldp+177,(vlTOPp->Status_Layer_ena));
        tracep->fullBit(oldp+178,(vlTOPp->Status_Layer_dequeue));
        tracep->fullBit(oldp+179,(vlTOPp->Status_Layer_r_master));
        tracep->fullQData(oldp+180,(vlTOPp->Status_Layer_data),64);
        tracep->fullCData(oldp+182,(vlTOPp->Status_Layer_count),8);
        tracep->fullBit(oldp+183,(vlTOPp->Universal_Layer1_ena));
        tracep->fullBit(oldp+184,(vlTOPp->Universal_Layer1_dequeue));
        tracep->fullBit(oldp+185,(vlTOPp->Universal_Layer1_r_master));
        tracep->fullQData(oldp+186,(vlTOPp->Universal_Layer1_data),64);
        tracep->fullCData(oldp+188,(vlTOPp->Universal_Layer1_count),8);
        tracep->fullBit(oldp+189,(vlTOPp->Universal_Layer2_ena));
        tracep->fullBit(oldp+190,(vlTOPp->Universal_Layer2_dequeue));
        tracep->fullBit(oldp+191,(vlTOPp->Universal_Layer2_r_master));
        tracep->fullQData(oldp+192,(vlTOPp->Universal_Layer2_data),64);
        tracep->fullCData(oldp+194,(vlTOPp->Universal_Layer2_count),8);
        tracep->fullBit(oldp+195,(((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count)) 
                                   & (IData)(vlTOPp->Universal_Layer1_ena))));
        tracep->fullBit(oldp+196,(((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count)) 
                                   & (IData)(vlTOPp->Universal_Layer2_ena))));
        tracep->fullBit(oldp+197,(((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count)) 
                                   & (IData)(vlTOPp->Script_Layer_ena))));
        tracep->fullBit(oldp+198,(((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count)) 
                                   & (IData)(vlTOPp->Status_Layer_ena))));
        tracep->fullBit(oldp+199,(((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count)) 
                                   & (IData)(vlTOPp->Character_Layer1_ena))));
        tracep->fullBit(oldp+200,(((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count)) 
                                   & (IData)(vlTOPp->Character_Layer2_ena))));
        tracep->fullBit(oldp+201,(((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count)) 
                                   & (IData)(vlTOPp->Character_Layer3_ena))));
        tracep->fullBit(oldp+202,(((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count)) 
                                   & (IData)(vlTOPp->Character_Layer4_ena))));
        tracep->fullBit(oldp+203,(((0x40U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count)) 
                                   & (IData)(vlTOPp->Background_Layer1_ena))));
        tracep->fullBit(oldp+204,(((0x40U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count)) 
                                   & (IData)(vlTOPp->Background_Layer2_ena))));
        tracep->fullIData(oldp+205,(0U),32);
        tracep->fullIData(oldp+206,(1U),32);
        tracep->fullIData(oldp+207,(2U),32);
    }
}
