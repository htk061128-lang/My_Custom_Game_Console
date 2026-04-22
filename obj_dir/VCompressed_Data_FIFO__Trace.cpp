// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCompressed_Data_FIFO__Syms.h"


void VCompressed_Data_FIFO::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VCompressed_Data_FIFO__Syms* __restrict vlSymsp = static_cast<VCompressed_Data_FIFO__Syms*>(userp);
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VCompressed_Data_FIFO::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VCompressed_Data_FIFO__Syms* __restrict vlSymsp = static_cast<VCompressed_Data_FIFO__Syms*>(userp);
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count),8);
            tracep->chgCData(oldp+1,(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_front),8);
            tracep->chgCData(oldp+2,(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_rear),8);
            tracep->chgCData(oldp+3,(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count),8);
            tracep->chgCData(oldp+4,(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_front),8);
            tracep->chgCData(oldp+5,(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_rear),8);
            tracep->chgCData(oldp+6,(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count),8);
            tracep->chgCData(oldp+7,(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_front),8);
            tracep->chgCData(oldp+8,(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_rear),8);
            tracep->chgCData(oldp+9,(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count),8);
            tracep->chgCData(oldp+10,(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_front),8);
            tracep->chgCData(oldp+11,(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_rear),8);
            tracep->chgCData(oldp+12,(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count),8);
            tracep->chgCData(oldp+13,(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_front),8);
            tracep->chgCData(oldp+14,(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_rear),8);
            tracep->chgCData(oldp+15,(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count),8);
            tracep->chgCData(oldp+16,(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_front),8);
            tracep->chgCData(oldp+17,(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_rear),8);
            tracep->chgCData(oldp+18,(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count),8);
            tracep->chgCData(oldp+19,(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_front),8);
            tracep->chgCData(oldp+20,(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_rear),8);
            tracep->chgCData(oldp+21,(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count),8);
            tracep->chgCData(oldp+22,(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_front),8);
            tracep->chgCData(oldp+23,(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_rear),8);
            tracep->chgSData(oldp+24,(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count),9);
            tracep->chgSData(oldp+25,(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_front),9);
            tracep->chgSData(oldp+26,(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_rear),9);
            tracep->chgSData(oldp+27,(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count),9);
            tracep->chgSData(oldp+28,(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_front),9);
            tracep->chgSData(oldp+29,(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_rear),9);
            tracep->chgCData(oldp+30,(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter),2);
            tracep->chgBit(oldp+31,((0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter))));
            tracep->chgBit(oldp+32,((1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter))));
            tracep->chgBit(oldp+33,((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter))));
            tracep->chgBit(oldp+34,((3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter))));
            tracep->chgBit(oldp+35,(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_r_master));
            tracep->chgBit(oldp+36,(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_r_master));
            tracep->chgCData(oldp+37,(vlTOPp->Compressed_Data_FIFO__DOT__main_state),4);
            tracep->chgCData(oldp+38,(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state),3);
            tracep->chgCData(oldp+39,(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state),3);
            tracep->chgCData(oldp+40,(vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state),3);
            tracep->chgIData(oldp+41,(vlTOPp->Compressed_Data_FIFO__DOT__uni1_next_ad),32);
            tracep->chgIData(oldp+42,(vlTOPp->Compressed_Data_FIFO__DOT__uni2_next_ad),32);
            tracep->chgIData(oldp+43,(vlTOPp->Compressed_Data_FIFO__DOT__script_next_ad),32);
            tracep->chgIData(oldp+44,(vlTOPp->Compressed_Data_FIFO__DOT__status_next_ad),32);
            tracep->chgIData(oldp+45,(vlTOPp->Compressed_Data_FIFO__DOT__char1_next_ad),32);
            tracep->chgIData(oldp+46,(vlTOPp->Compressed_Data_FIFO__DOT__char2_next_ad),32);
            tracep->chgIData(oldp+47,(vlTOPp->Compressed_Data_FIFO__DOT__char3_next_ad),32);
            tracep->chgIData(oldp+48,(vlTOPp->Compressed_Data_FIFO__DOT__char4_next_ad),32);
            tracep->chgIData(oldp+49,(vlTOPp->Compressed_Data_FIFO__DOT__back1_next_ad),32);
            tracep->chgIData(oldp+50,(vlTOPp->Compressed_Data_FIFO__DOT__back2_next_ad),32);
            tracep->chgSData(oldp+51,(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic),10);
            tracep->chgSData(oldp+52,(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent),10);
            tracep->chgSData(oldp+53,(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer),10);
            tracep->chgCData(oldp+54,(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter),8);
            tracep->chgIData(oldp+55,(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+56,(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_inc_want));
            tracep->chgBit(oldp+57,(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_dec_want));
            tracep->chgBit(oldp+58,(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_inc_want));
            tracep->chgBit(oldp+59,(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_dec_want));
            tracep->chgBit(oldp+60,(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_inc_want));
            tracep->chgBit(oldp+61,(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_dec_want));
            tracep->chgBit(oldp+62,(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_inc_want));
            tracep->chgBit(oldp+63,(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_dec_want));
            tracep->chgBit(oldp+64,(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_inc_want));
            tracep->chgBit(oldp+65,(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_dec_want));
            tracep->chgBit(oldp+66,(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_inc_want));
            tracep->chgBit(oldp+67,(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_dec_want));
            tracep->chgBit(oldp+68,(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_inc_want));
            tracep->chgBit(oldp+69,(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_dec_want));
            tracep->chgBit(oldp+70,(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_inc_want));
            tracep->chgBit(oldp+71,(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_dec_want));
            tracep->chgBit(oldp+72,(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_inc_want));
            tracep->chgBit(oldp+73,(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_dec_want));
            tracep->chgBit(oldp+74,(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_inc_want));
            tracep->chgBit(oldp+75,(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_dec_want));
            tracep->chgCData(oldp+76,(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state_next),3);
            tracep->chgCData(oldp+77,(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state_next),3);
            tracep->chgCData(oldp+78,(vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state_next),3);
            tracep->chgSData(oldp+79,(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer),10);
            tracep->chgSData(oldp+80,(vlTOPp->Compressed_Data_FIFO__DOT__valid_req),10);
            tracep->chgSData(oldp+81,(vlTOPp->Compressed_Data_FIFO__DOT__urgent_req),10);
            tracep->chgSData(oldp+82,(vlTOPp->Compressed_Data_FIFO__DOT__basic_req),10);
            tracep->chgSData(oldp+83,(vlTOPp->Compressed_Data_FIFO__DOT__masked_req),10);
            tracep->chgBit(oldp+84,(vlTOPp->Compressed_Data_FIFO__DOT__round_end));
            tracep->chgBit(oldp+85,(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode));
        }
        tracep->chgBit(oldp+86,(vlTOPp->clk));
        tracep->chgBit(oldp+87,(vlTOPp->resetn));
        tracep->chgBit(oldp+88,(vlTOPp->PPU_start));
        tracep->chgIData(oldp+89,(vlTOPp->Universal_Layer1_Address),32);
        tracep->chgIData(oldp+90,(vlTOPp->Universal_Layer2_Address),32);
        tracep->chgIData(oldp+91,(vlTOPp->Script_Layer_Address),32);
        tracep->chgIData(oldp+92,(vlTOPp->Status_Layer_Address),32);
        tracep->chgIData(oldp+93,(vlTOPp->Character_Layer1_Address),32);
        tracep->chgIData(oldp+94,(vlTOPp->Character_Layer2_Address),32);
        tracep->chgIData(oldp+95,(vlTOPp->Character_Layer3_Address),32);
        tracep->chgIData(oldp+96,(vlTOPp->Character_Layer4_Address),32);
        tracep->chgIData(oldp+97,(vlTOPp->Background_Layer1_Address),32);
        tracep->chgIData(oldp+98,(vlTOPp->Background_Layer2_Address),32);
        tracep->chgBit(oldp+99,(vlTOPp->EMEM_valid));
        tracep->chgBit(oldp+100,(vlTOPp->EMEM_ready));
        tracep->chgIData(oldp+101,(vlTOPp->EMEM_addr),32);
        tracep->chgIData(oldp+102,(vlTOPp->EMEM_wdata),32);
        tracep->chgCData(oldp+103,(vlTOPp->EMEM_wstrb),4);
        tracep->chgIData(oldp+104,(vlTOPp->EMEM_rdata),32);
        tracep->chgCData(oldp+105,(vlTOPp->EMEM_burst_len),8);
        tracep->chgBit(oldp+106,(vlTOPp->EMEM_burst_en));
        tracep->chgBit(oldp+107,(vlTOPp->BRAM7_en_a));
        tracep->chgBit(oldp+108,(vlTOPp->BRAM7_we_a));
        tracep->chgSData(oldp+109,(vlTOPp->BRAM7_addr_a),9);
        tracep->chgQData(oldp+110,(vlTOPp->BRAM7_din_a),64);
        tracep->chgBit(oldp+112,(vlTOPp->BRAM7_en_b));
        tracep->chgSData(oldp+113,(vlTOPp->BRAM7_addr_b),9);
        tracep->chgQData(oldp+114,(vlTOPp->BRAM7_dout_b),64);
        tracep->chgBit(oldp+116,(vlTOPp->BRAM8_en_a));
        tracep->chgBit(oldp+117,(vlTOPp->BRAM8_we_a));
        tracep->chgSData(oldp+118,(vlTOPp->BRAM8_addr_a),9);
        tracep->chgQData(oldp+119,(vlTOPp->BRAM8_din_a),64);
        tracep->chgBit(oldp+121,(vlTOPp->BRAM8_en_b));
        tracep->chgSData(oldp+122,(vlTOPp->BRAM8_addr_b),9);
        tracep->chgQData(oldp+123,(vlTOPp->BRAM8_dout_b),64);
        tracep->chgBit(oldp+125,(vlTOPp->BRAM9_en_a));
        tracep->chgBit(oldp+126,(vlTOPp->BRAM9_we_a));
        tracep->chgSData(oldp+127,(vlTOPp->BRAM9_addr_a),9);
        tracep->chgQData(oldp+128,(vlTOPp->BRAM9_din_a),64);
        tracep->chgBit(oldp+130,(vlTOPp->BRAM9_en_b));
        tracep->chgSData(oldp+131,(vlTOPp->BRAM9_addr_b),9);
        tracep->chgQData(oldp+132,(vlTOPp->BRAM9_dout_b),64);
        tracep->chgBit(oldp+134,(vlTOPp->Background_Layer1_ena));
        tracep->chgBit(oldp+135,(vlTOPp->Background_Layer1_dequeue));
        tracep->chgBit(oldp+136,(vlTOPp->Background_Layer1_r_master));
        tracep->chgQData(oldp+137,(vlTOPp->Background_Layer1_data),64);
        tracep->chgSData(oldp+139,(vlTOPp->Background_Layer1_count),9);
        tracep->chgBit(oldp+140,(vlTOPp->Background_Layer2_ena));
        tracep->chgBit(oldp+141,(vlTOPp->Background_Layer2_dequeue));
        tracep->chgBit(oldp+142,(vlTOPp->Background_Layer2_r_master));
        tracep->chgQData(oldp+143,(vlTOPp->Background_Layer2_data),64);
        tracep->chgSData(oldp+145,(vlTOPp->Background_Layer2_count),9);
        tracep->chgBit(oldp+146,(vlTOPp->Character_Layer1_ena));
        tracep->chgBit(oldp+147,(vlTOPp->Character_Layer1_dequeue));
        tracep->chgBit(oldp+148,(vlTOPp->Character_Layer1_r_master));
        tracep->chgQData(oldp+149,(vlTOPp->Character_Layer1_data),64);
        tracep->chgCData(oldp+151,(vlTOPp->Character_Layer1_count),8);
        tracep->chgBit(oldp+152,(vlTOPp->Character_Layer2_ena));
        tracep->chgBit(oldp+153,(vlTOPp->Character_Layer2_dequeue));
        tracep->chgBit(oldp+154,(vlTOPp->Character_Layer2_r_master));
        tracep->chgQData(oldp+155,(vlTOPp->Character_Layer2_data),64);
        tracep->chgCData(oldp+157,(vlTOPp->Character_Layer2_count),8);
        tracep->chgBit(oldp+158,(vlTOPp->Character_Layer3_ena));
        tracep->chgBit(oldp+159,(vlTOPp->Character_Layer3_dequeue));
        tracep->chgBit(oldp+160,(vlTOPp->Character_Layer3_r_master));
        tracep->chgQData(oldp+161,(vlTOPp->Character_Layer3_data),64);
        tracep->chgCData(oldp+163,(vlTOPp->Character_Layer3_count),8);
        tracep->chgBit(oldp+164,(vlTOPp->Character_Layer4_ena));
        tracep->chgBit(oldp+165,(vlTOPp->Character_Layer4_dequeue));
        tracep->chgBit(oldp+166,(vlTOPp->Character_Layer4_r_master));
        tracep->chgQData(oldp+167,(vlTOPp->Character_Layer4_data),64);
        tracep->chgCData(oldp+169,(vlTOPp->Character_Layer4_count),8);
        tracep->chgBit(oldp+170,(vlTOPp->Script_Layer_ena));
        tracep->chgBit(oldp+171,(vlTOPp->Script_Layer_dequeue));
        tracep->chgBit(oldp+172,(vlTOPp->Script_Layer_r_master));
        tracep->chgQData(oldp+173,(vlTOPp->Script_Layer_data),64);
        tracep->chgCData(oldp+175,(vlTOPp->Script_Layer_count),8);
        tracep->chgBit(oldp+176,(vlTOPp->Status_Layer_ena));
        tracep->chgBit(oldp+177,(vlTOPp->Status_Layer_dequeue));
        tracep->chgBit(oldp+178,(vlTOPp->Status_Layer_r_master));
        tracep->chgQData(oldp+179,(vlTOPp->Status_Layer_data),64);
        tracep->chgCData(oldp+181,(vlTOPp->Status_Layer_count),8);
        tracep->chgBit(oldp+182,(vlTOPp->Universal_Layer1_ena));
        tracep->chgBit(oldp+183,(vlTOPp->Universal_Layer1_dequeue));
        tracep->chgBit(oldp+184,(vlTOPp->Universal_Layer1_r_master));
        tracep->chgQData(oldp+185,(vlTOPp->Universal_Layer1_data),64);
        tracep->chgCData(oldp+187,(vlTOPp->Universal_Layer1_count),8);
        tracep->chgBit(oldp+188,(vlTOPp->Universal_Layer2_ena));
        tracep->chgBit(oldp+189,(vlTOPp->Universal_Layer2_dequeue));
        tracep->chgBit(oldp+190,(vlTOPp->Universal_Layer2_r_master));
        tracep->chgQData(oldp+191,(vlTOPp->Universal_Layer2_data),64);
        tracep->chgCData(oldp+193,(vlTOPp->Universal_Layer2_count),8);
        tracep->chgBit(oldp+194,(((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count)) 
                                  & (IData)(vlTOPp->Universal_Layer1_ena))));
        tracep->chgBit(oldp+195,(((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count)) 
                                  & (IData)(vlTOPp->Universal_Layer2_ena))));
        tracep->chgBit(oldp+196,(((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count)) 
                                  & (IData)(vlTOPp->Script_Layer_ena))));
        tracep->chgBit(oldp+197,(((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count)) 
                                  & (IData)(vlTOPp->Status_Layer_ena))));
        tracep->chgBit(oldp+198,(((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count)) 
                                  & (IData)(vlTOPp->Character_Layer1_ena))));
        tracep->chgBit(oldp+199,(((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count)) 
                                  & (IData)(vlTOPp->Character_Layer2_ena))));
        tracep->chgBit(oldp+200,(((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count)) 
                                  & (IData)(vlTOPp->Character_Layer3_ena))));
        tracep->chgBit(oldp+201,(((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count)) 
                                  & (IData)(vlTOPp->Character_Layer4_ena))));
        tracep->chgBit(oldp+202,(((0x40U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count)) 
                                  & (IData)(vlTOPp->Background_Layer1_ena))));
        tracep->chgBit(oldp+203,(((0x40U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count)) 
                                  & (IData)(vlTOPp->Background_Layer2_ena))));
    }
}

void VCompressed_Data_FIFO::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VCompressed_Data_FIFO__Syms* __restrict vlSymsp = static_cast<VCompressed_Data_FIFO__Syms*>(userp);
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
