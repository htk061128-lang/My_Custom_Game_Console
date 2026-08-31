// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGame_Console_TOP.h for the primary calling header

#include "VGame_Console_TOP.h"
#include "VGame_Console_TOP__Syms.h"

//==========
WData/*127:0*/ VGame_Console_TOP::__Vtable1_Game_Console_TOP__DOT__u_cpu__DOT__dbg_ascii_state[256][4];

VL_CTOR_IMP(VGame_Console_TOP) {
    VGame_Console_TOP__Syms* __restrict vlSymsp = __VlSymsp = new VGame_Console_TOP__Syms(this, name());
    VGame_Console_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1, VGame_Console_TOP_Pixel_Reader);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2, VGame_Console_TOP_Pixel_Reader);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1, VGame_Console_TOP_Pixel_Reader);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2, VGame_Console_TOP_Pixel_Reader);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3, VGame_Console_TOP_Pixel_Reader);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4, VGame_Console_TOP_Pixel_Reader);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_sc, VGame_Console_TOP_Pixel_Reader);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_st, VGame_Console_TOP_Pixel_Reader);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_un1, VGame_Console_TOP_Pixel_Reader);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_un2, VGame_Console_TOP_Pixel_Reader);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1, VGame_Console_TOP_Decompresser);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2, VGame_Console_TOP_Decompresser);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script, VGame_Console_TOP_Decompresser);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status, VGame_Console_TOP_Decompresser);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1, VGame_Console_TOP_Decompresser);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2, VGame_Console_TOP_Decompresser);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3, VGame_Console_TOP_Decompresser);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4, VGame_Console_TOP_Decompresser);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1, VGame_Console_TOP_Decompresser);
    VL_CELL(__PVT__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2, VGame_Console_TOP_Decompresser);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VGame_Console_TOP::__Vconfigure(VGame_Console_TOP__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VGame_Console_TOP::~VGame_Console_TOP() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VGame_Console_TOP::_settle__TOP__1(VGame_Console_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGame_Console_TOP::_settle__TOP__1\n"); );
    VGame_Console_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[0U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[0U] = 1U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[0U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[0U] = 1U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[0U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[0xbU] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[0xaU] = 0U;
    vlTOPp->DDR3_PPU_valid = vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid;
    vlTOPp->DDR3_PPU_addr = vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr;
    vlTOPp->DDR3_PPU_wdata = vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata;
    vlTOPp->DDR3_PPU_wstrb = vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb;
    vlTOPp->DDR3_PPU_burst_len = vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len;
    vlTOPp->DDR3_PPU_burst_en = vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en;
    vlTOPp->BRAM1_wen = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit)))) {
                        vlTOPp->BRAM1_wen = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM0_wen = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit)))) {
                        vlTOPp->BRAM0_wen = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM0_wstrb = 0xffU;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit)))) {
                        vlTOPp->BRAM0_wstrb = 0xffU;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM1_wstrb = 0xffU;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit)))) {
                        vlTOPp->BRAM1_wstrb = 0xffU;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM2_wen = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                            vlTOPp->BRAM2_wen = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM2_wstrb = 0xffU;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                            vlTOPp->BRAM2_wstrb = 0xffU;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM3_wen = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                            vlTOPp->BRAM3_wen = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM3_wstrb = 0xffU;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                            vlTOPp->BRAM3_wstrb = 0xffU;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM3_din[0U] = 0U;
    vlTOPp->BRAM3_din[1U] = 0U;
    vlTOPp->BRAM3_din[2U] = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                            vlTOPp->BRAM3_din[0U] = 
                                (0x80U | ((0xffffff00U 
                                           & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                        [3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                         [2U])))) 
                                              << 8U)) 
                                          | (0x7fU 
                                             & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag) 
                                                >> 8U))));
                            vlTOPp->BRAM3_din[1U] = 
                                ((0xffU & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                     [3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                      [2U])))) 
                                           >> 0x18U)) 
                                 | (0xffffff00U & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                              [3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                               [2U]))) 
                                                            >> 0x20U)) 
                                                   << 8U)));
                            vlTOPp->BRAM3_din[2U] = 
                                (0xffU & ((IData)((
                                                   (((QData)((IData)(
                                                                     vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                     [3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                      [2U]))) 
                                                   >> 0x20U)) 
                                          >> 0x18U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM0_din[0U] = 0U;
    vlTOPp->BRAM0_din[1U] = 0U;
    vlTOPp->BRAM0_din[2U] = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit)))) {
                        vlTOPp->BRAM0_din[0U] = ((0xffffff00U 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                               [1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [0U])))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)));
                        vlTOPp->BRAM0_din[1U] = ((0xffU 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                               [1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [0U])))) 
                                                     >> 0x18U)) 
                                                 | (0xffffff00U 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [0U]))) 
                                                                >> 0x20U)) 
                                                       << 8U)));
                        vlTOPp->BRAM0_din[2U] = (0xffU 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                               [1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [0U]))) 
                                                             >> 0x20U)) 
                                                    >> 0x18U));
                    }
                }
            }
        }
    }
    vlTOPp->BRAM1_din[0U] = 0U;
    vlTOPp->BRAM1_din[1U] = 0U;
    vlTOPp->BRAM1_din[2U] = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit)))) {
                        vlTOPp->BRAM1_din[0U] = (0x80U 
                                                 | ((0xffffff00U 
                                                     & ((IData)(
                                                                (((QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [2U])))) 
                                                        << 8U)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag) 
                                                          >> 8U))));
                        vlTOPp->BRAM1_din[1U] = ((0xffU 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                               [3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [2U])))) 
                                                     >> 0x18U)) 
                                                 | (0xffffff00U 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [2U]))) 
                                                                >> 0x20U)) 
                                                       << 8U)));
                        vlTOPp->BRAM1_din[2U] = (0xffU 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                               [3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [2U]))) 
                                                             >> 0x20U)) 
                                                    >> 0x18U));
                    }
                }
            }
        }
    }
    vlTOPp->BRAM2_din[0U] = 0U;
    vlTOPp->BRAM2_din[1U] = 0U;
    vlTOPp->BRAM2_din[2U] = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                            vlTOPp->BRAM2_din[0U] = 
                                ((0xffffff00U & ((IData)(
                                                         (((QData)((IData)(
                                                                           vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                           [1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                            [0U])))) 
                                                 << 8U)) 
                                 | (0xffU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)));
                            vlTOPp->BRAM2_din[1U] = 
                                ((0xffU & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                     [1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                      [0U])))) 
                                           >> 0x18U)) 
                                 | (0xffffff00U & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                              [1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                               [0U]))) 
                                                            >> 0x20U)) 
                                                   << 8U)));
                            vlTOPp->BRAM2_din[2U] = 
                                (0xffU & ((IData)((
                                                   (((QData)((IData)(
                                                                     vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                     [1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                      [0U]))) 
                                                   >> 0x20U)) 
                                          >> 0x18U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM9_we_a = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_we_a = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_we_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM9_en_a = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_en_a = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_en_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                if (
                                                    (0x40U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_inc_want = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_inc_want = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                         >> 6U)))) {
                                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_inc_want = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & (~ ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                           >> 1U)) 
                                       | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 2U)) | 
                                      ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 4U)) 
                                    | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 6U)) 
                                  | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     >> 7U))))) {
                        if ((0x100U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_inc_want = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & (~ ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                           >> 1U)) 
                                       | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 2U)) | 
                                      ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 4U)) 
                                    | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 6U)) 
                                  | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     >> 7U))))) {
                        if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 8U)))) {
                            if ((0x200U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_inc_want = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM7_en_a = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_en_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_en_a = 1U;
                        } else {
                            if ((0x200U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_en_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM7_we_a = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_we_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_we_a = 1U;
                        } else {
                            if ((0x200U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_we_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM8_en_a = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_en_a = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_en_a = 1U;
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_en_a = 1U;
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlTOPp->BRAM8_en_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM8_we_a = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_we_a = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_we_a = 1U;
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_we_a = 1U;
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlTOPp->BRAM8_we_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_RGB = 0U;
    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_valid) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__is_new_pixel))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_RGB 
            = ((0x3f000U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_R) 
                            << 8U)) | ((0xfc0U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_G) 
                                                  << 2U)) 
                                       | (0x3fU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_B) 
                                                   >> 4U))));
    }
    vlTOPp->Game_Console_TOP__DOT__cache_hit = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if (((vlTOPp->BRAM1_dout[0U] >> 7U) & (
                                                   ((0x7f00U 
                                                     & (vlTOPp->BRAM1_dout[0U] 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlTOPp->BRAM0_dout[0U])) 
                                                   == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))) {
                vlTOPp->Game_Console_TOP__DOT__cache_hit = 1U;
            } else {
                if (((vlTOPp->BRAM3_dout[0U] >> 7U) 
                     & (((0x7f00U & (vlTOPp->BRAM3_dout[0U] 
                                     << 8U)) | (0xffU 
                                                & vlTOPp->BRAM2_dout[0U])) 
                        == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))) {
                    vlTOPp->Game_Console_TOP__DOT__cache_hit = 1U;
                }
            }
        }
    }
    vlTOPp->BRAM9_addr_a = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_addr_a = 
                                (0xffU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_rear));
                        } else {
                            if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_addr_a 
                                    = (0x100U | (0xffU 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_rear)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM9_din_a = 0ULL;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_din_a = (
                                                   ((QData)((IData)(vlTOPp->DDR3_PPU_rdata)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                        } else {
                            if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_din_a 
                                    = (((QData)((IData)(vlTOPp->DDR3_PPU_rdata)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM7_din_a = 0ULL;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_din_a 
                                                    = 
                                                    ((0x40U 
                                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))
                                                      ? 
                                                     (((QData)((IData)(vlTOPp->DDR3_PPU_rdata)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)))
                                                      : 
                                                     (((QData)((IData)(vlTOPp->DDR3_PPU_rdata)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_din_a = (
                                                   ((QData)((IData)(vlTOPp->DDR3_PPU_rdata)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                        } else {
                            if ((0x200U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_din_a 
                                    = (((QData)((IData)(vlTOPp->DDR3_PPU_rdata)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM8_din_a = 0ULL;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_din_a 
                                        = (((QData)((IData)(vlTOPp->DDR3_PPU_rdata)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                                } else {
                                    if ((8U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_din_a 
                                            = (((QData)((IData)(vlTOPp->DDR3_PPU_rdata)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_din_a 
                                                = (
                                                   ((QData)((IData)(vlTOPp->DDR3_PPU_rdata)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlTOPp->BRAM8_din_a 
                                                    = 
                                                    (((QData)((IData)(vlTOPp->DDR3_PPU_rdata)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM8_addr_a = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_addr_a 
                                        = (0x7fU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_rear));
                                } else {
                                    if ((8U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_addr_a 
                                            = (0x1ffU 
                                               & ((IData)(0x80U) 
                                                  + 
                                                  (0x7fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_rear))));
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_addr_a 
                                                = (0x1ffU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0x7fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_rear))));
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlTOPp->BRAM8_addr_a 
                                                    = 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        + 
                                                        (0x7fU 
                                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_rear))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM7_addr_a = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->DDR3_PPU_ready) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_addr_a 
                                                    = 
                                                    (0x1ffU 
                                                     & ((0x40U 
                                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))
                                                         ? 
                                                        ((IData)(0x100U) 
                                                         + 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_rear)))
                                                         : 
                                                        ((IData)(0x180U) 
                                                         + 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_rear)))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_addr_a = 
                                (0x7fU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_rear));
                        } else {
                            if ((0x200U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_addr_a 
                                    = (0x1ffU & ((IData)(0x80U) 
                                                 + 
                                                 (0x7fU 
                                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_rear))));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_mixed_pixel_valid = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_mixed_pixel_valid = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_mixed_pixel_RGB = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_mixed_pixel_RGB 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_line_end = 0U;
    if (((0x13fU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_x)) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_line_end = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__uni2_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__uni2_comp_data 
                    = vlTOPp->BRAM7_dout_b;
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__uni1_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__uni1_comp_data 
                = vlTOPp->BRAM7_dout_b;
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__st_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                if ((3U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                    if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__st_comp_data 
                            = vlTOPp->BRAM7_dout_b;
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__sc_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__sc_comp_data 
                        = vlTOPp->BRAM7_dout_b;
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__ch4_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                if ((3U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                    if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__ch4_comp_data 
                            = vlTOPp->BRAM8_dout_b;
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__ch3_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__ch3_comp_data 
                        = vlTOPp->BRAM8_dout_b;
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__ch2_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__ch2_comp_data 
                    = vlTOPp->BRAM8_dout_b;
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__ch1_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__ch1_comp_data 
                = vlTOPp->BRAM8_dout_b;
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__bg2_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state))) {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__bg2_comp_data 
                    = vlTOPp->BRAM9_dout_b;
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__bg1_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__bg1_comp_data 
                = vlTOPp->BRAM9_dout_b;
        }
    }
    vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_len = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                    vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_len = 3U;
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                    vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_len = 3U;
                } else {
                    if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                        vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_len = 3U;
                    } else {
                        if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                            vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_len = 3U;
                        } else {
                            if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                                vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_len = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_valid = 0U;
    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_valid) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__is_new_pixel))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_valid = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master 
        = ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
           | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master 
        = ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
           | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full 
        = ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg_valid) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg_valid)) 
                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg_valid)) 
               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg_valid)) 
              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg_valid)) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg_valid)) 
            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg_valid)) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_shift = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_inc = 0U;
    if ((((0x13fU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_x)) 
          & (0xefU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_y))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end = 1U;
    }
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state))) {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state_next = 0U;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state_next = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_shift = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_inc = 1U;
                } else {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state_next = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_inc = 0U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_shift = 0U;
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_index 
        = (0x1fU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                    - (((0x3ff0U & (((IData)(0x2493U) 
                                     * (0x3fffU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                   - (IData)(0x2c00U)))) 
                                    >> 0xeU)) + (0x3ff8U 
                                                 & (((IData)(0x2493U) 
                                                     * 
                                                     (0x3fffU 
                                                      & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                         - (IData)(0x2c00U)))) 
                                                    >> 0xfU))) 
                       + (0x3ffcU & (((IData)(0x2493U) 
                                      * (0x3fffU & 
                                         ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                          - (IData)(0x2c00U)))) 
                                     >> 0x10U)))));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_index 
        = (0x1fU & (((IData)(0xc31U) * (0x3fffU & (
                                                   ((IData)(0x2493U) 
                                                    * 
                                                    (0x3fffU 
                                                     & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                        - (IData)(0x2c00U)))) 
                                                   >> 0x12U))) 
                    >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_index 
        = (0x1fU & ((((IData)(0x2493U) * (0x3fffU & 
                                          ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                           - (IData)(0x2c00U)))) 
                     >> 0x12U) - (((0x1f0U & (((IData)(0xc31U) 
                                               * (0x3fffU 
                                                  & (((IData)(0x2493U) 
                                                      * 
                                                      (0x3fffU 
                                                       & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                          - (IData)(0x2c00U)))) 
                                                     >> 0x12U))) 
                                              >> 0xcU)) 
                                   + (0x7cU & (((IData)(0xc31U) 
                                                * (0x3fffU 
                                                   & (((IData)(0x2493U) 
                                                       * 
                                                       (0x3fffU 
                                                        & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                           - (IData)(0x2c00U)))) 
                                                      >> 0x12U))) 
                                               >> 0xeU))) 
                                  + (((IData)(0xc31U) 
                                      * (0x3fffU & 
                                         (((IData)(0x2493U) 
                                           * (0x3fffU 
                                              & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                 - (IData)(0x2c00U)))) 
                                          >> 0x12U))) 
                                     >> 0x10U))));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__is_korea_wire 
        = ((0xac00U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16)) 
           & (0xd7a3U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__is_ascii_wire 
        = ((0x20U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16)) 
           & (0x7eU >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__is_custom_wire 
        = ((0xe000U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16)) 
           & (0xe0abU >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16)));
    vlTOPp->BRAM0_waddr = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit)))) {
                        vlTOPp->BRAM0_waddr = (0x1ffU 
                                               & (vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr 
                                                  >> 4U));
                    }
                }
            }
        }
    }
    vlTOPp->BRAM1_waddr = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit)))) {
                        vlTOPp->BRAM1_waddr = (0x1ffU 
                                               & (vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr 
                                                  >> 4U));
                    }
                }
            }
        }
    }
    vlTOPp->BRAM2_waddr = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                            vlTOPp->BRAM2_waddr = (0x1ffU 
                                                   & (vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr 
                                                      >> 4U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM3_waddr = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                            vlTOPp->BRAM3_waddr = (0x1ffU 
                                                   & (vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr 
                                                      >> 4U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_opcode 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_opcode;
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_next) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_opcode 
            = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_opcode
                : ((3U == (3U & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_insn_opcode))
                    ? vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_insn_opcode
                    : (0xffffU & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_insn_opcode)));
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_rs1 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_rs1;
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_next) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_rs1 
            = (0x1fU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_pseudo_trigger_q)
                         ? (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_rs1)
                         : (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs1)));
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)))) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x_next = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                if (((((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid)) 
                            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid)) 
                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid)) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x_next 
                            = (((0x137U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x)) 
                                & (0xf0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y)))
                                ? 0U : (((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x)) 
                                         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y)))
                                         ? 1U : ((0x140U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x))
                                                  ? 1U
                                                  : 
                                                 (0x1ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x))))));
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)))) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y_next = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                if (((((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid)) 
                            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid)) 
                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid)) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y_next 
                            = (((0x137U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x)) 
                                & (0xf0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y)))
                                ? 0U : (((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x)) 
                                         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y)))
                                         ? 1U : (0x1ffU 
                                                 & ((0x140U 
                                                     == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y))
                                                     : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y)))));
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rd;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rdx;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs1;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs2;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
        = ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1))
            ? vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2
            : 0ULL);
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt = 0ULL;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd)) 
                   + (0xfU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx))) 
                  + (0xfU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2))) 
                 >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
                    + (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx)) 
                   + (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2)));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffffffff7ULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 3U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffffff0ULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | (IData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 4U))) + (0xfU 
                                                & (IData)(
                                                          (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 4U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 4U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 4U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 4U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 4U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffffffff7fULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 7U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffffffff0fULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 8U))) + (0xfU 
                                                & (IData)(
                                                          (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 8U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 8U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 8U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 8U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 8U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffffff7ffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0xbU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffff0ffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 8U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0xcU))) + (0xfU 
                                                  & (IData)(
                                                            (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                             >> 0xcU)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0xcU)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0xcU)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                  >> 0xcU))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0xcU))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffffff7fffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0xfU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffffff0fffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0xcU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x10U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x10U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x10U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x10U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x10U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x10U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffff7ffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x13U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffff0ffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x10U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x14U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x14U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x14U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x14U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x14U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x14U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffff7fffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x17U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffff0fffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x14U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x18U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x18U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x18U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x18U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x18U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x18U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffff7ffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x1bU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffff0ffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x18U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x1cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x1cU)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x1cU)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x1cU)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x1cU))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x1cU))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffff7fffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x1fU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffff0fffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x1cU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x20U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x20U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x20U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x20U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x20U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x20U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffff7ffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x23U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffff0ffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x20U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x24U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x24U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x24U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x24U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x24U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x24U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffff7fffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x27U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffff0fffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x24U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x28U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x28U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x28U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x28U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x28U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x28U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffff7ffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x2bU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffff0ffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x28U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x2cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x2cU)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x2cU)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x2cU)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x2cU))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x2cU))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffff7fffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x2fU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffff0fffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x2cU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x30U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x30U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x30U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x30U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x30U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x30U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfff7ffffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x33U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfff0ffffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x30U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x34U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x34U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x34U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x34U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x34U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x34U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xff7fffffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x37U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xff0fffffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x34U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x38U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x38U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x38U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x38U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x38U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x38U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xf7ffffffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x3bU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xf0ffffffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x38U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x3cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x3cU)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x3cU)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x3cU)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x3cU))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x3cU))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0x7fffffffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x3fU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x3cU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
        = (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
           << 1U);
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1 
        = (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1 
           >> 1U);
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2 
        = (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2 
           << 1U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bram_ad 
        = (0x3ffU & (((0x20U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16)) 
                      & (0x7eU >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16)))
                      ? ((IData)(0x130U) + ((0x3fcU 
                                             & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16) 
                                                 - (IData)(0x20U)) 
                                                << 2U)) 
                                            + (3U & 
                                               ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                >> 2U))))
                      : ((IData)(0x130U) + (3U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                  >> 2U)))));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__All_Decompresser_is_IDLE 
        = ((((((((((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_state)) 
                     & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_state))) 
                    & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompress_state))) 
                   & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_state)) 
                       & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_state))) 
                      & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompress_state)))) 
                  & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_state)) 
                      & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_state))) 
                     & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompress_state)))) 
                 & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_state)) 
                     & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_state))) 
                    & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompress_state)))) 
                & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_state)) 
                    & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_state))) 
                   & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompress_state)))) 
               & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_state)) 
                   & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_state))) 
                  & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompress_state)))) 
              & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_state)) 
                  & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_state))) 
                 & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompress_state)))) 
             & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_state)) 
                 & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_state))) 
                & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompress_state)))) 
            & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_state)) 
                & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_state))) 
               & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompress_state)))) 
           & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_state)) 
               & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_state))) 
              & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompress_state))));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[1U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0xcU] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[2U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0xeU] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[3U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x10U] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[4U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x12U] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[5U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x14U] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[6U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x16U] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[7U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x18U] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[8U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x1aU] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[9U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x1cU] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[0xaU] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x1eU] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set = 0U;
    if ((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
          | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
         | (9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set = 1U;
    } else {
        if (((((((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                 | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                | (0xbU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
               | (0xeU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
              | (0x10U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
             | ((0x13U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                | (0x14U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set = 2U;
        } else {
            if (((((((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                     | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                    | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                   | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                  | (0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                 | (0xfU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set = 3U;
            } else {
                if ((((((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                        | (0xcU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                       | (0xdU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                      | (0x11U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                     | (0x12U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set = 4U;
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bram_ad = 0U;
    if (((0xe000U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16)) 
         & (0xe053U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bram_ad 
            = (0x3ffU & ((IData)(0x2b0U) + ((0x3fcU 
                                             & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16) 
                                                << 2U)) 
                                            + (3U & 
                                               ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                >> 2U)))));
    } else {
        if (((0xe054U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16)) 
             & (0xe0abU >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16)))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bram_ad 
                = (0x3ffU & ((IData)(0x2a0U) + ((0x3fcU 
                                                 & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16) 
                                                     - (IData)(0x54U)) 
                                                    << 2U)) 
                                                + (3U 
                                                   & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                      >> 2U)))));
        }
    }
    vlTOPp->Game_Console_TOP__DOT__line_rgb[0U] = (0x1ffU 
                                                   & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0x1fU]);
    vlTOPp->Game_Console_TOP__DOT__line_rgb[1U] = (0x1ffU 
                                                   & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                      [0x1fU] 
                                                      >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_rgb[2U] = (0x1ffU 
                                                   & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0x20U]);
    vlTOPp->Game_Console_TOP__DOT__line_rgb[3U] = (0x1ffU 
                                                   & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                      [0x20U] 
                                                      >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_rgb[4U] = (0x1ffU 
                                                   & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0x21U]);
    vlTOPp->Game_Console_TOP__DOT__line_rgb[5U] = (0x1ffU 
                                                   & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                      [0x21U] 
                                                      >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_rgb[6U] = (0x1ffU 
                                                   & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0x22U]);
    vlTOPp->Game_Console_TOP__DOT__line_rgb[7U] = (0x1ffU 
                                                   & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                      [0x22U] 
                                                      >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_rgb[8U] = (0x1ffU 
                                                   & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0x23U]);
    vlTOPp->Game_Console_TOP__DOT__line_rgb[9U] = (0x1ffU 
                                                   & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                      [0x23U] 
                                                      >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_rgb[0xaU] = 
        (0x1ffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
         [0x24U]);
    vlTOPp->Game_Console_TOP__DOT__line_rgb[0xbU] = 
        (0x1ffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                   [0x24U] >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_rgb[0xcU] = 
        (0x1ffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
         [0x25U]);
    vlTOPp->Game_Console_TOP__DOT__line_rgb[0xdU] = 
        (0x1ffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                   [0x25U] >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_rgb[0xeU] = 
        (0x1ffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
         [0x26U]);
    vlTOPp->Game_Console_TOP__DOT__line_alpha[0U] = 
        (7U & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
         [0x27U]);
    vlTOPp->Game_Console_TOP__DOT__line_alpha[1U] = 
        (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
               [0x27U] >> 4U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[2U] = 
        (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
               [0x27U] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[3U] = 
        (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
               [0x27U] >> 0xcU));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[4U] = 
        (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
               [0x27U] >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[5U] = 
        (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
               [0x27U] >> 0x14U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[6U] = 
        (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
               [0x27U] >> 0x18U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[7U] = 
        (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
               [0x27U] >> 0x1cU));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[8U] = 
        (7U & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
         [0x28U]);
    vlTOPp->Game_Console_TOP__DOT__line_alpha[9U] = 
        (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
               [0x28U] >> 4U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[0xaU] 
        = (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                 [0x28U] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[0xbU] 
        = (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                 [0x28U] >> 0xcU));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[0xcU] 
        = (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                 [0x28U] >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[0xdU] 
        = (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                 [0x28U] >> 0x14U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[0xeU] 
        = (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                 [0x28U] >> 0x18U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_set = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_set 
            = (((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index)) 
                | (0xfU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index)))
                ? 1U : 2U);
    } else {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_set 
                = (((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index)) 
                    | (0xfU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index)))
                    ? 3U : 4U);
        }
    }
    vlTOPp->Game_Console_TOP__DOT__line_visible[0U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x1fU] >> 9U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[1U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x1fU] >> 0x19U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[2U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x20U] >> 9U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[3U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x20U] >> 0x19U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[4U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x21U] >> 9U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[5U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x21U] >> 0x19U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[6U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x22U] >> 9U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[7U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x22U] >> 0x19U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[8U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x23U] >> 9U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[9U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x23U] >> 0x19U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[0xaU] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x24U] >> 9U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[0xbU] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x24U] >> 0x19U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[0xcU] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x25U] >> 9U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[0xdU] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x25U] >> 0x19U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[0xeU] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x26U] >> 9U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index))) {
        if (((7U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
             | (0x14U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 1U;
        } else {
            if ((((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                  | (0xcU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                 | (0x12U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 2U;
            } else {
                if (((0xdU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                     | (0x11U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 3U;
                } else {
                    if (((((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                           | (0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                          | (0xbU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                         | (0x13U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 4U;
                    } else {
                        if ((((0xeU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                              | (0xfU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                             | (0x10U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 5U;
                        }
                    }
                }
            }
        }
    } else {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index))) {
            if (((7U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                 | (0x14U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 6U;
            } else {
                if ((((((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                        | (0xcU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                       | (0xdU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                      | (0x11U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                     | (0x12U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 7U;
                } else {
                    if ((((((((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                              | (0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                             | (0xbU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                            | (0xeU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                           | (0xfU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                          | (0x10U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                         | (0x13U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 8U;
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__PPU_start = (1U 
                                                & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                [0x29U]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[1U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0xcU]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[2U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0xeU]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[3U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0x10U]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[4U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0x12U]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[5U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0x14U]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[6U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0x16U]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[7U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0x18U]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[8U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0x1aU]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[9U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0x1cU]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[0xaU] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0x1eU]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                if (((((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid)) 
                            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid)) 
                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid)) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                    if (((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid) 
                               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                        if ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid) 
                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
                        }
                    } else {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                            if (((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid) 
                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                                if ((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid) 
                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
                                }
                            } else {
                                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                                    if (((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid) 
                                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
                                    }
                                } else {
                                    if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid) 
                                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
            if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
            }
        } else {
            if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
                }
            }
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move) {
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_ready = 1U;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_ready = 1U;
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_ready = 1U;
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_ready = 1U;
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_ready = 1U;
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_ready = 1U;
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_ready = 1U;
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_ready = 1U;
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_ready = 1U;
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_ready = 1U;
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__all_fsm_reset = 0U;
    if ((1U & (~ ((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)) 
                        | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
                       | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
                      | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
                     | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
                    | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
                   | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
                  | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)))))) {
        if ((8U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
            if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__all_fsm_reset = 1U;
                }
            }
        }
    }
    vlTOPp->BRAM2_ren = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
              & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))) {
            vlTOPp->BRAM2_ren = 1U;
        }
    }
    vlTOPp->BRAM3_ren = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
              & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))) {
            vlTOPp->BRAM3_ren = 1U;
        }
    }
    vlTOPp->BRAM0_ren = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
              & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))) {
            vlTOPp->BRAM0_ren = 1U;
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_tag_save = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
              & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))) {
            vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_tag_save = 1U;
        }
    }
    vlTOPp->BRAM1_ren = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
              & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))) {
            vlTOPp->BRAM1_ren = 1U;
        }
    }
    vlTOPp->BRAM3_raddr = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
              & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))) {
            vlTOPp->BRAM3_raddr = (0x1ffU & (vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr 
                                             >> 4U));
        }
    }
    vlTOPp->BRAM0_raddr = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
              & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))) {
            vlTOPp->BRAM0_raddr = (0x1ffU & (vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr 
                                             >> 4U));
        }
    }
    vlTOPp->BRAM1_raddr = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
              & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))) {
            vlTOPp->BRAM1_raddr = (0x1ffU & (vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr 
                                             >> 4U));
        }
    }
    vlTOPp->BRAM2_raddr = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
              & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))) {
            vlTOPp->BRAM2_raddr = (0x1ffU & (vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr 
                                             >> 4U));
        }
    }
    vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_en = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
                       & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))))) {
            if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
                  & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr)))) {
                vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_en = 0U;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) {
                    vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_en = 0U;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                    vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_en = 1U;
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                    vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_en = 1U;
                } else {
                    if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                        vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_en = 1U;
                    } else {
                        if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                            vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_en = 1U;
                        } else {
                            if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                                vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_en = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((6U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                        vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_en = 0U;
                    } else {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                            vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_en = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
                       & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))))) {
            if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
                  & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr)))) {
                vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata 
                    = vlTOPp->Game_Console_TOP__DOT__cpu_mem_wdata;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) {
                    vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata 
                        = vlTOPp->Game_Console_TOP__DOT__cpu_mem_wdata;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                    vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata 
                        = vlTOPp->Game_Console_TOP__DOT__cpu_mem_wdata;
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                    vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata 
                        = vlTOPp->Game_Console_TOP__DOT__cpu_mem_wdata;
                } else {
                    if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                        vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata 
                            = vlTOPp->Game_Console_TOP__DOT__cpu_mem_wdata;
                    } else {
                        if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                            vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata 
                                = vlTOPp->Game_Console_TOP__DOT__cpu_mem_wdata;
                        } else {
                            if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                                vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata 
                                    = vlTOPp->Game_Console_TOP__DOT__cpu_mem_wdata;
                            }
                        }
                    }
                }
            } else {
                if ((6U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                        vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata 
                            = vlTOPp->Game_Console_TOP__DOT__cpu_mem_wdata;
                    } else {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                            vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata 
                                = vlTOPp->Game_Console_TOP__DOT__cpu_mem_wdata;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb = 0xfU;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
                       & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))))) {
            if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
                  & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr)))) {
                vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb 
                    = vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) {
                    vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb 
                        = vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                    vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb = 0U;
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                    vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb = 0U;
                } else {
                    if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                        vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb = 0U;
                    } else {
                        if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                            vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb = 0U;
                        } else {
                            if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                                vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((6U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                        vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb 
                            = vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb;
                    } else {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                            vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb 
                                = vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__cache_emem_valid = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
                       & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))))) {
            if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
                  & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr)))) {
                vlTOPp->Game_Console_TOP__DOT__cache_emem_valid = 1U;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) {
                    vlTOPp->Game_Console_TOP__DOT__cache_emem_valid = 1U;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                    vlTOPp->Game_Console_TOP__DOT__cache_emem_valid = 1U;
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                    vlTOPp->Game_Console_TOP__DOT__cache_emem_valid = 1U;
                } else {
                    if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                        vlTOPp->Game_Console_TOP__DOT__cache_emem_valid = 1U;
                    } else {
                        if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                            vlTOPp->Game_Console_TOP__DOT__cache_emem_valid = 1U;
                        } else {
                            if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                                vlTOPp->Game_Console_TOP__DOT__cache_emem_valid = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((6U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                        vlTOPp->Game_Console_TOP__DOT__cache_emem_valid = 1U;
                    } else {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                            vlTOPp->Game_Console_TOP__DOT__cache_emem_valid = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__cache_emem_addr = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
                       & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))))) {
            if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
                  & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr)))) {
                vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                    = vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) {
                    vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                        = vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                    vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                        = (0xffffff0U & vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr);
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                    vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                        = (0xffffff0U & vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr);
                } else {
                    if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                        vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                            = (0xffffff0U & vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr);
                    } else {
                        if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                            vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                = (0xffffff0U & vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr);
                        } else {
                            if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                                vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                    = (0xffffff0U & vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr);
                            }
                        }
                    }
                }
            } else {
                if ((6U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                        vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                            = vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr;
                    } else {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                            vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                = vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->joypad_irq = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__joypad_irq_pending;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_int_ready 
        = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_ready) 
           | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_ready));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs1))
            ? ((0x23U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs1))
                ? vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs
               [vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs1]
                : 0U) : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_int_wr = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_ready) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_int_wr 
            = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_wr;
    } else {
        if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_ready) {
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_int_wr 
                = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_wr;
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_int_rd = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_ready) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_int_rd 
            = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_rd;
    } else {
        if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_ready) {
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_int_rd 
                = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_rd;
        }
    }
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_wordsize))) {
        vlTOPp->Game_Console_TOP__DOT__cpu_la_wdata 
            = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2;
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_wordsize))) {
            vlTOPp->Game_Console_TOP__DOT__cpu_la_wdata 
                = ((0xffff0000U & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2 
                                   << 0x10U)) | (0xffffU 
                                                 & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2));
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_wordsize))) {
                vlTOPp->Game_Console_TOP__DOT__cpu_la_wdata 
                    = ((0xff000000U & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2 
                                       << 0x18U)) | 
                       ((0xff0000U & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2 
                                      << 0x10U)) | 
                        ((0xff00U & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2 
                                     << 8U)) | (0xffU 
                                                & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2))));
            }
        }
    }
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_wordsize))) {
        vlTOPp->Game_Console_TOP__DOT__cpu_la_wstrb = 0xfU;
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_wordsize))) {
            vlTOPp->Game_Console_TOP__DOT__cpu_la_wstrb 
                = ((2U & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1)
                    ? 0xcU : 3U);
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_wordsize))) {
                vlTOPp->Game_Console_TOP__DOT__cpu_la_wstrb 
                    = (0xfU & ((IData)(1U) << (3U & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1)));
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__cpu_la_write = (
                                                   ((IData)(vlTOPp->resetn) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_state))))) 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_wdata));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_pc 
        = (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_store) 
            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_branch))
            ? (0xfffffffeU & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_out)
            : vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_next_pc);
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_write = 0U;
    if ((0x40U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpu_state))) {
        if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_branch) {
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_write = 1U;
        } else {
            if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_store) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_branch)))) {
                vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_write = 1U;
            } else {
                if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_state))) {
                    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_write = 1U;
                } else {
                    if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_state))) {
                        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_write = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->__Vtableidx1 = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpu_state;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_ascii_state[0U] 
        = vlTOPp->__Vtable1_Game_Console_TOP__DOT__u_cpu__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][0U];
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_ascii_state[1U] 
        = vlTOPp->__Vtable1_Game_Console_TOP__DOT__u_cpu__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][1U];
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_ascii_state[2U] 
        = vlTOPp->__Vtable1_Game_Console_TOP__DOT__u_cpu__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][2U];
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_ascii_state[3U] 
        = vlTOPp->__Vtable1_Game_Console_TOP__DOT__u_cpu__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][3U];
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__clear_prefetched_high_word 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__prefetched_high_word)))) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_branch) 
                | (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_state))) 
               | (~ (IData)(vlTOPp->resetn))))) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__clear_prefetched_high_word = 0U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_eq 
        = (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
           == vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2);
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_lts 
        = VL_LTS_III(1,32,32, vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1, vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2);
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_ltu 
        = (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
           < vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2);
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs2))
            ? vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs
           [vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs2]
            : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdcycle) 
           | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdcycleh) 
              | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdinstr) 
                 | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdinstrh))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_rs2 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_rs2;
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_next) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_rs2 
            = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_pseudo_trigger_q)
                ? (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_rs2)
                : (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs2));
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_rd 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_rd;
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_next) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_rd 
            = (0x1fU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_pseudo_trigger_q)
                         ? (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_rd)
                         : (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rd)));
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpu_state))) {
        if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_branch) {
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_wrdata 
                = (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_pc 
                   + ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_compr)
                       ? 2U : 4U));
        } else {
            if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_store) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_branch)))) {
                vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_wrdata 
                    = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_stalu)
                        ? vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out_q
                        : vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_out);
            } else {
                if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_state))) {
                    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_wrdata 
                        = (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_next_pc 
                           | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_compr));
                } else {
                    if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_state))) {
                        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_wrdata 
                            = (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_pending 
                               & (~ vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_mask));
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__start 
        = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_wait) 
           & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__pcpi_wait_q)));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_imm 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_imm;
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_next) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_imm 
            = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_imm
                : vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_imm);
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_any_mulh 
        = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
           | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu) 
              | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhu)));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_trap 
        = (1U & (~ (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lui) 
                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_auipc) 
                        | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_jal) 
                           | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_jalr) 
                              | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_beq) 
                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bne) 
                                    | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_blt) 
                                       | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bge) 
                                          | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bltu) 
                                             | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bgeu) 
                                                | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lb) 
                                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lh) 
                                                      | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lw) 
                                                         | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lbu) 
                                                            | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lhu) 
                                                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sb) 
                                                                  | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sh) 
                                                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sw) 
                                                                        | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_addi) 
                                                                           | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_slti) 
                                                                              | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sltiu) 
                                                                                | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_xori) 
                                                                                | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_ori) 
                                                                                | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_andi) 
                                                                                | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_slli) 
                                                                                | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_srli) 
                                                                                | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_srai) 
                                                                                | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_add) 
                                                                                | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sub) 
                                                                                | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sll) 
                                                                                | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_slt) 
                                                                                | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sltu)))))))))))))))))))))))))))))))) 
                    | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_xor) 
                       | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_srl) 
                          | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sra) 
                             | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_or) 
                                | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_and) 
                                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdcycle) 
                                      | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdcycleh) 
                                         | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdinstr) 
                                            | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdinstrh) 
                                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_fence) 
                                                  | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_getq) 
                                                     | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_setq) 
                                                        | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_retirq) 
                                                           | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_maskirq) 
                                                              | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_waitirq) 
                                                                 | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_timer)))))))))))))))))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0ULL;
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lui) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x6c7569ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_auipc) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x6175697063ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_jal) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x6a616cULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_jalr) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x6a616c72ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_beq) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x626571ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bne) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x626e65ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_blt) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x626c74ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bge) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x626765ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bltu) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x626c7475ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bgeu) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x62676575ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lb) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x6c62ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lh) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x6c68ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lw) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x6c77ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lbu) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x6c6275ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_lhu) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x6c6875ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sb) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x7362ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sh) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x7368ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sw) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x7377ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_addi) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x61646469ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_slti) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x736c7469ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sltiu) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x736c746975ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_xori) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x786f7269ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_ori) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x6f7269ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_andi) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x616e6469ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_slli) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x736c6c69ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_srli) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x73726c69ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_srai) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x73726169ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_add) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x616464ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sub) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x737562ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sll) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x736c6cULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_slt) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x736c74ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sltu) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x736c7475ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_xor) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x786f72ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_srl) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x73726cULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sra) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x737261ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_or) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x6f72ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_and) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x616e64ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdcycle) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x72646379636c65ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdcycleh) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdinstr) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x7264696e737472ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_rdinstrh) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_fence) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x66656e6365ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_getq) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x67657471ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_setq) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x73657471ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_retirq) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x726574697271ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_maskirq) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x6d61736b697271ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_waitirq) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x77616974697271ULL;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_timer) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr = 0x74696d6572ULL;
    }
    vlTOPp->Game_Console_TOP__DOT__cpu_la_read = ((IData)(vlTOPp->resetn) 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_state)))) 
                                                     & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rinst) 
                                                         | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_prefetch)) 
                                                        | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rdata))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__launch_next_insn 
        = (((0x40U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpu_state)) 
            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_trigger)) 
           & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_delay) 
               | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_active)) 
              | (~ (IData)((0U != (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_pending 
                                   & (~ vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_mask)))))));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 3U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 4U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 2U;
    }
    vlTOPp->BRAM7_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    vlTOPp->BRAM7_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x180U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_addr_b = (0x7fU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x80U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_front))));
    }
    vlTOPp->BRAM10_en_a = ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_en_a) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_en_a)) 
                            | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_en_a)) 
                           | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_en_a));
    vlTOPp->BRAM10_we_a = ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_we_a) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_we_a)) 
                            | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_we_a)) 
                           | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_we_a));
    vlTOPp->BRAM10_addr_a = ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_addr_a) 
                               | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_addr_a)) 
                              | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_addr_a)) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_addr_a));
    vlTOPp->BRAM10_din_a = (((vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_din_a 
                              | vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_din_a) 
                             | vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_din_a) 
                            | vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_din_a);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 2U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 3U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 4U;
    }
    vlTOPp->BRAM8_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    vlTOPp->BRAM8_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_addr_b = (0x7fU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x80U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x180U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_front))));
    }
    vlTOPp->BRAM11_en_a = ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_en_a) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_en_a)) 
                            | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_en_a)) 
                           | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_en_a));
    vlTOPp->BRAM11_we_a = ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_we_a) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_we_a)) 
                            | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_we_a)) 
                           | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_we_a));
    vlTOPp->BRAM11_addr_a = ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_addr_a) 
                               | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_addr_a)) 
                              | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_addr_a)) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_addr_a));
    vlTOPp->BRAM11_din_a = (((vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_din_a 
                              | vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_din_a) 
                             | vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_din_a) 
                            | vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_din_a);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__urgent_req 
        = ((((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count)) 
             & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_ena)) 
            << 9U) | ((((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count)) 
                        & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_ena)) 
                       << 8U) | ((((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count)) 
                                   & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_ena)) 
                                  << 7U) | ((((0x20U 
                                               >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count)) 
                                              & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_ena)) 
                                             << 6U) 
                                            | ((((0x20U 
                                                  >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count)) 
                                                 & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_ena)) 
                                                << 5U) 
                                               | ((((0x20U 
                                                     >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count)) 
                                                    & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_ena)) 
                                                   << 4U) 
                                                  | ((((0x20U 
                                                        >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count)) 
                                                       & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_ena)) 
                                                      << 3U) 
                                                     | ((((0x20U 
                                                           >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count)) 
                                                          & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_ena)) 
                                                         << 2U) 
                                                        | ((((0x40U 
                                                              >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count)) 
                                                             & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_ena)) 
                                                            << 1U) 
                                                           | ((0x40U 
                                                               >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count)) 
                                                              & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_ena)))))))))));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode 
        = (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__urgent_req));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3feU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_ena) 
              & (0xf0U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3fdU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_ena) 
               & (0xf0U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
              << 1U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3fbU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
              << 2U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3f7U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
              << 3U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3efU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
              << 4U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3dfU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
              << 5U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3bfU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
              << 6U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x37fU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
              << 7U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x2ffU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
              << 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x1ffU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
              << 9U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req 
        = ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__urgent_req))
            ? (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)
            : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__urgent_req));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3feU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (1U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                     ? ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                        & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent)))
                     : ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                        & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic))))));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3fdU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (2U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 1U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 1U))) : (
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 1U) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 1U)))) 
                    << 1U)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3fbU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (4U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 2U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 2U))) : (
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 2U) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 2U)))) 
                    << 2U)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3f7U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (8U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 3U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 3U))) : (
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 3U) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 3U)))) 
                    << 3U)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3efU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x10U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                             >> 4U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 4U))) : 
                        (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 4U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 4U)))) << 4U)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3dfU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x20U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                             >> 5U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 5U))) : 
                        (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 5U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 5U)))) << 5U)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3bfU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x40U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                             >> 6U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 6U))) : 
                        (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 6U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 6U)))) << 6U)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x37fU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x80U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                             >> 7U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 7U))) : 
                        (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 7U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 7U)))) << 7U)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x2ffU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x100U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                          ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                              >> 8U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                           >> 8U)))
                          : (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                              >> 8U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                           >> 8U)))) 
                        << 8U)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x1ffU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x200U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                          ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                              >> 9U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                           >> 9U)))
                          : (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                              >> 9U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                           >> 9U)))) 
                        << 9U)));
    if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
            = (1U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
    } else {
        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                = (2U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
        } else {
            if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                    = (4U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
            } else {
                if ((8U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                        = (8U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                } else {
                    if ((0x10U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                            = (0x10U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                    } else {
                        if ((0x20U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                = (0x20U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                        } else {
                            if ((0x40U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                    = (0x40U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                            } else {
                                if ((0x80U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                        = (0x80U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                                } else {
                                    if ((0x100U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                            = (0x100U 
                                               | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                                    } else {
                                        if ((0x200U 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                                = (0x200U 
                                                   | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__round_end 
        = ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req)) 
           & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)));
    vlTOPp->BRAM12_en_a = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_en_a) 
                           | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_en_a));
    vlTOPp->BRAM12_we_a = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_we_a) 
                           | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_we_a));
    vlTOPp->BRAM12_addr_a = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_addr_a) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_addr_a));
    vlTOPp->BRAM12_din_a = (vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_din_a 
                            | vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_din_a);
    vlTOPp->Final_pixel_valid = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_mixed_pixel_valid;
    vlTOPp->Final_pixel_RGB = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_mixed_pixel_RGB;
    vlTOPp->Font_Line_End = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_line_end;
    vlTOPp->DDR3_CPU_burst_len = vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_len;
    vlTOPp->Font_Frame_End = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_w_ena = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) 
                      & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line))) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_w_ena = 1U;
                } else {
                    if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_w_ena = 1U;
                    }
                }
            }
        } else {
            if ((0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_w_ena = 1U;
                    }
                }
            } else {
                if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_w_ena = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_shift = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((1U & (~ (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) 
                               & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line))) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                    if ((1U & (~ (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) 
                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line)) 
                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_valid) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_shift = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full)))) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_valid) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_shift = 1U;
                        }
                    }
                }
            } else {
                if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full)))) {
                            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_valid) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_shift = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state_next 
                = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                    ? 0U : (0xfU & ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) 
                                      & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line))) 
                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                                     ? ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea)
                                         ? 0xaU : 1U)
                                     : ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) 
                                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line)) 
                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                                         ? 9U : 1U))));
        } else {
            if ((0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state_next 
                    = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                        ? 0U : ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full)
                                 ? 1U : 0xaU));
            } else {
                if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state_next 
                        = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                            ? 0U : ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full)
                                     ? ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea)
                                         ? 0xaU : 1U)
                                     : 9U));
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) 
                      & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line))) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end 
                        = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea)
                            ? 0U : 1U);
                } else {
                    if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end = 0U;
                    }
                }
            }
        } else {
            if ((0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end = 1U;
                    }
                }
            } else {
                if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end 
                                = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea)
                                    ? 0U : 1U);
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_bram_ad = 0U;
    if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_bram_ad 
            = (0x3ffU & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index) 
                          << 3U) + (7U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                          >> 1U))));
    } else {
        if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_bram_ad 
                = (0x3ffU & ((IData)(0xe0U) + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index) 
                                                << 3U) 
                                               + (7U 
                                                  & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                     >> 1U)))));
        } else {
            if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_bram_ad 
                    = (0x3ffU & ((IData)(0x1c0U) + 
                                 (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index) 
                                   << 3U) + (7U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                   >> 1U)))));
            } else {
                if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_bram_ad 
                        = (0x3ffU & ((IData)(0x2a0U) 
                                     + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index) 
                                         << 3U) + (7U 
                                                   & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                      >> 1U)))));
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_bram_ad = 0U;
    if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_set))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_bram_ad 
            = (0x3ffU & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index) 
                          << 3U) + (7U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                          >> 1U))));
    } else {
        if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_set))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_bram_ad 
                = (0x3ffU & ((IData)(0xa8U) + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index) 
                                                << 3U) 
                                               + (7U 
                                                  & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                     >> 1U)))));
        } else {
            if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_set))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_bram_ad 
                    = (0x3ffU & ((IData)(0x150U) + 
                                 (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index) 
                                   << 3U) + (7U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                   >> 1U)))));
            } else {
                if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_set))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_bram_ad 
                        = (0x3ffU & ((IData)(0x1f8U) 
                                     + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index) 
                                         << 3U) + (7U 
                                                   & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                      >> 1U)))));
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix 
            = (1U & ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))
                      ? (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                             [0U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                            & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                  & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))))))
                      : ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))
                          ? (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                 [1U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                      & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))))))
                          : ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))
                              ? (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                     [2U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                    & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                          & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))))))
                              : ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))
                                  ? (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                         [3U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                        & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                              & (1U 
                                                 == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))))))
                                  : ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))
                                      ? (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                             [4U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                            & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                                  & (1U 
                                                     == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))))))
                                      : ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))
                                          ? (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                                 [5U] 
                                                 >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                                    & (1U 
                                                       == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))))))
                                          : ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))
                                              ? (~ 
                                                 ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                                   [6U] 
                                                   >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                                      & (1U 
                                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))))))
                                              : (~ 
                                                 ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                                   [7U] 
                                                   >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                                      & (1U 
                                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))))))))))))));
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix 
                = (1U & (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                             [8U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                            & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                  & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))));
        } else {
            if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix 
                    = (1U & (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                 [9U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                      & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))));
            } else {
                if ((0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix 
                        = (1U & (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                     [0xaU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                    & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                          & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))));
                } else {
                    if ((0xbU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix 
                            = (1U & (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                         [0xbU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                        & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                              & (1U 
                                                 == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))));
                    } else {
                        if ((0xcU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix 
                                = (1U & (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                             [0xcU] 
                                             >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                            & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                                  & (1U 
                                                     == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))));
                        } else {
                            if ((0xdU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix 
                                    = (1U & (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                                 [0xdU] 
                                                 >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                                    & (1U 
                                                       == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))));
                            } else {
                                if ((0xeU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix 
                                        = (1U & (~ 
                                                 ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                                   [0xeU] 
                                                   >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                                      & (1U 
                                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y)))) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
            if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                  [0U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                 & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                    = vlTOPp->Game_Console_TOP__DOT__line_alpha
                    [0U];
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                      [1U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                     & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                           & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                        = vlTOPp->Game_Console_TOP__DOT__line_alpha
                        [1U];
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                          [2U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                               & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                            = vlTOPp->Game_Console_TOP__DOT__line_alpha
                            [2U];
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                        if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                              [3U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                             & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                   & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                [3U];
                        }
                    } else {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                            if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                  [4U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                 & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                    = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [4U];
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                      [5U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                     & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                           & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                        = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                        [5U];
                                }
                            } else {
                                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                          [6U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                               & (1U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                            = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                            [6U];
                                    }
                                } else {
                                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                          [7U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                               & (1U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                            = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                            [7U];
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
            if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                  [8U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                 & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                    = vlTOPp->Game_Console_TOP__DOT__line_alpha
                    [8U];
            }
        } else {
            if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                      [9U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                     & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                           & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                        = vlTOPp->Game_Console_TOP__DOT__line_alpha
                        [9U];
                }
            } else {
                if ((0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                          [0xaU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                               & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                            = vlTOPp->Game_Console_TOP__DOT__line_alpha
                            [0xaU];
                    }
                } else {
                    if ((0xbU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                        if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                              [0xbU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                             & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                   & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                [0xbU];
                        }
                    } else {
                        if ((0xcU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                            if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                  [0xcU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                 & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                    = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [0xcU];
                            }
                        } else {
                            if ((0xdU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                      [0xdU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                     & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                           & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                        = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                        [0xdU];
                                }
                            } else {
                                if ((0xeU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                          [0xeU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                               & (1U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                            = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                            [0xeU];
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y)))) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
            if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                  [0U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                 & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                    = ((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [0U] << 9U)) | 
                       ((0x7000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [0U] << 6U)) | 
                        ((0xe00U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [0U] << 6U)) | 
                         ((0x1c0U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                     [0U] << 3U)) | 
                          ((0x38U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                     [0U] << 3U)) | 
                           (7U & vlTOPp->Game_Console_TOP__DOT__line_rgb
                            [0U]))))));
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                      [1U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                     & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                           & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                        = ((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                        [1U] << 9U)) 
                           | ((0x7000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [1U] << 6U)) 
                              | ((0xe00U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                            [1U] << 6U)) 
                                 | ((0x1c0U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [1U] 
                                               << 3U)) 
                                    | ((0x38U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                 [1U] 
                                                 << 3U)) 
                                       | (7U & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [1U]))))));
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                          [2U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                               & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                            = ((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                            [2U] << 9U)) 
                               | ((0x7000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                              [2U] 
                                              << 6U)) 
                                  | ((0xe00U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                [2U] 
                                                << 6U)) 
                                     | ((0x1c0U & (
                                                   vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                   [2U] 
                                                   << 3U)) 
                                        | ((0x38U & 
                                            (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                             [2U] << 3U)) 
                                           | (7U & 
                                              vlTOPp->Game_Console_TOP__DOT__line_rgb
                                              [2U]))))));
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                        if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                              [3U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                             & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                   & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                = ((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                [3U] 
                                                << 9U)) 
                                   | ((0x7000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [3U] 
                                                  << 6U)) 
                                      | ((0xe00U & 
                                          (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                           [3U] << 6U)) 
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
                                                  [3U]))))));
                        }
                    } else {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                            if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                  [4U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                 & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                    = ((0x38000U & 
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
                                                      [4U]))))));
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                      [5U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                     & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                           & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                        = ((0x38000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [5U] 
                                               << 9U)) 
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
                                                          [5U]))))));
                                }
                            } else {
                                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                          [6U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                               & (1U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                            = ((0x38000U 
                                                & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                   [6U] 
                                                   << 9U)) 
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
                                                              [6U]))))));
                                    }
                                } else {
                                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                          [7U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                               & (1U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                            = ((0x38000U 
                                                & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                   [7U] 
                                                   << 9U)) 
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
                                                              [7U]))))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
            if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                  [8U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                 & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                    = ((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [8U] << 9U)) | 
                       ((0x7000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [8U] << 6U)) | 
                        ((0xe00U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [8U] << 6U)) | 
                         ((0x1c0U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                     [8U] << 3U)) | 
                          ((0x38U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                     [8U] << 3U)) | 
                           (7U & vlTOPp->Game_Console_TOP__DOT__line_rgb
                            [8U]))))));
            }
        } else {
            if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                      [9U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                     & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                           & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                        = ((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                        [9U] << 9U)) 
                           | ((0x7000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [9U] << 6U)) 
                              | ((0xe00U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                            [9U] << 6U)) 
                                 | ((0x1c0U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [9U] 
                                               << 3U)) 
                                    | ((0x38U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                 [9U] 
                                                 << 3U)) 
                                       | (7U & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [9U]))))));
                }
            } else {
                if ((0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                          [0xaU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                               & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                            = ((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                            [0xaU] 
                                            << 9U)) 
                               | ((0x7000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                              [0xaU] 
                                              << 6U)) 
                                  | ((0xe00U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                [0xaU] 
                                                << 6U)) 
                                     | ((0x1c0U & (
                                                   vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                   [0xaU] 
                                                   << 3U)) 
                                        | ((0x38U & 
                                            (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                             [0xaU] 
                                             << 3U)) 
                                           | (7U & 
                                              vlTOPp->Game_Console_TOP__DOT__line_rgb
                                              [0xaU]))))));
                    }
                } else {
                    if ((0xbU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                        if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                              [0xbU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                             & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                   & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                = ((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                [0xbU] 
                                                << 9U)) 
                                   | ((0x7000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xbU] 
                                                  << 6U)) 
                                      | ((0xe00U & 
                                          (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                           [0xbU] << 6U)) 
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
                                                  [0xbU]))))));
                        }
                    } else {
                        if ((0xcU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                            if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                  [0xcU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                 & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                    = ((0x38000U & 
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
                                                      [0xcU]))))));
                            }
                        } else {
                            if ((0xdU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                      [0xdU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                     & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                           & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                        = ((0x38000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [0xdU] 
                                               << 9U)) 
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
                                                          [0xdU]))))));
                                }
                            } else {
                                if ((0xeU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                          [0xeU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                               & (1U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                            = ((0x38000U 
                                                & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                   [0xeU] 
                                                   << 9U)) 
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
                                                              [0xeU]))))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_bram_ad = 0U;
    if (((((((((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set)) 
               | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) 
              | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) 
             | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) 
            | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) 
           | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) 
          | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) 
         | (8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_bram_ad 
            = (0x3ffU & ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))
                          ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index) 
                              << 3U) + (7U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                              >> 1U)))
                          : ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))
                              ? ((IData)(0x98U) + (
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index) 
                                                    << 3U) 
                                                   + 
                                                   (7U 
                                                    & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                       >> 1U))))
                              : ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))
                                  ? ((IData)(0x130U) 
                                     + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index) 
                                         << 3U) + (7U 
                                                   & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                      >> 1U))))
                                  : ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))
                                      ? ((IData)(0x1c8U) 
                                         + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index) 
                                             << 3U) 
                                            + (7U & 
                                               ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                >> 1U))))
                                      : ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))
                                          ? ((IData)(0x260U) 
                                             + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index) 
                                                 << 3U) 
                                                + (7U 
                                                   & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                      >> 1U))))
                                          : ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))
                                              ? ((IData)(0x2f8U) 
                                                 + 
                                                 (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index) 
                                                   << 3U) 
                                                  + 
                                                  (7U 
                                                   & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                      >> 1U))))
                                              : ((7U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))
                                                  ? 
                                                 (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index) 
                                                   << 3U) 
                                                  + 
                                                  (7U 
                                                   & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                      >> 1U)))
                                                  : 
                                                 ((IData)(0x98U) 
                                                  + 
                                                  (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index) 
                                                    << 3U) 
                                                   + 
                                                   (7U 
                                                    & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                       >> 1U))))))))))));
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_next 
            = ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))
                ? ((IData)(vlTOPp->Game_Console_TOP__DOT__PPU_start)
                    ? 1U : 0U) : ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))
                                   ? (((((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid) 
                                               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid)) 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid)) 
                                            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))
                                       ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid) 
                                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid))
                                           ? (((0x137U 
                                                == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x)) 
                                               & (0xf0U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y)))
                                               ? 2U
                                               : 1U)
                                           : 1U) : 1U)
                                   : ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))
                                       ? (((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid) 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid)) 
                                                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                                               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))
                                           ? 3U : 2U)
                                       : ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))
                                           ? ((((((
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid) 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))
                                               ? 4U
                                               : 3U)
                                           : ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))
                                               ? ((
                                                   (((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid) 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))
                                                   ? 5U
                                                   : 4U)
                                               : ((5U 
                                                   == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))
                                                   ? 
                                                  ((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid) 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))
                                                    ? 6U
                                                    : 5U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))
                                                    ? 
                                                   (((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid) 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))
                                                     ? 7U
                                                     : 6U)
                                                    : 
                                                   ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid) 
                                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))
                                                     ? 8U
                                                     : 7U))))))));
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_next 
                = (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid) 
                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))
                    ? 9U : 8U);
        } else {
            if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_next 
                    = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid)
                        ? 0U : 9U);
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[0U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[1U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[2U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[3U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[4U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[5U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[6U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[7U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[8U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[9U] = 0U;
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [1U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [1U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 1U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [1U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [1U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [2U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [2U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 2U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [2U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [2U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [3U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [3U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 3U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [3U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [3U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [4U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [4U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 4U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [4U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [4U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [5U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [5U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 5U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [5U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [5U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [6U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [6U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 6U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [6U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [6U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [7U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [7U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 7U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [7U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [7U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [8U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [8U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 8U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [8U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [8U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [9U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [9U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 9U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [9U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [9U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [0xaU]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                     [0xaU]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 0xaU;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [0xaU] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [0xaU] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    vlTOPp->DDR3_CPU_burst_en = vlTOPp->Game_Console_TOP__DOT__cache_emem_burst_en;
    vlTOPp->DDR3_CPU_wdata = vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata;
    vlTOPp->BRAM4_din_b = vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata;
    vlTOPp->BRAM5_din_b = vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata;
    vlTOPp->BRAM6_din_b = vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata;
    vlTOPp->BRAM13_din_b = vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata;
    vlTOPp->BRAM14_din_b = vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata;
    vlTOPp->LUT_data_in = (0x3ffffU & vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata);
    vlTOPp->DDR3_CPU_addr = vlTOPp->Game_Console_TOP__DOT__cache_emem_addr;
    vlTOPp->BRAM4_addr_b = (0x3ffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                      >> 2U));
    vlTOPp->BRAM5_addr_b = (0x3ffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                      >> 2U));
    vlTOPp->BRAM6_addr_b = (0x3ffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                      >> 2U));
    vlTOPp->BRAM13_addr_b = (0x3ffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                       >> 2U));
    vlTOPp->BRAM14_addr_b = (0x3ffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                       >> 2U));
    vlTOPp->LUT_addr_w = (0xffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                   >> 2U));
    vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ppu_reg 
        = ((0xff0U == (0xffffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                  >> 0x10U))) & (0U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                                     >> 0xaU))));
    vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_lut 
        = ((0xff0U == (0xffffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                  >> 0x10U))) & (1U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                                     >> 0xaU))));
    vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_font_map 
        = ((0xff0U == (0xffffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                  >> 0x10U))) & (1U 
                                                 == 
                                                 (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                                     >> 0xcU))));
    vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram4 
        = ((0xff0U == (0xffffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                  >> 0x10U))) & (2U 
                                                 == 
                                                 (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                                     >> 0xcU))));
    vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram5 
        = ((0xff0U == (0xffffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                  >> 0x10U))) & (3U 
                                                 == 
                                                 (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                                     >> 0xcU))));
    vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram6 
        = ((0xff0U == (0xffffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                  >> 0x10U))) & (4U 
                                                 == 
                                                 (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                                     >> 0xcU))));
    vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram13 
        = ((0xff0U == (0xffffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                  >> 0x10U))) & (5U 
                                                 == 
                                                 (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                                     >> 0xcU))));
    vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ddr3 
        = ((0U == (0xfU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                           >> 0x1cU))) & (0xffU != 
                                          (0xffU & 
                                           (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                            >> 0x14U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out_0 = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_beq) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out_0 
            = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_eq;
    } else {
        if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bne) {
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out_0 
                = (1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_eq)));
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bge) {
                vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out_0 
                    = (1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_lts)));
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_bgeu) {
                    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out_0 
                        = (1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_ltu)));
                } else {
                    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_slti_blt_slt) {
                        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out_0 
                            = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_lts;
                    } else {
                        if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_sltiu_bltu_sltu) {
                            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out_0 
                                = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_ltu;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out 
            = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_sub)
                ? (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
                   - vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2)
                : (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
                   + vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2));
    } else {
        if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__is_compare) {
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out 
                = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out_0;
        } else {
            if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_xori) 
                 | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_xor))) {
                vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out 
                    = (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
                       ^ vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2);
            } else {
                if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_ori) 
                     | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_or))) {
                    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out 
                        = (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
                           | vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2);
                } else {
                    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_andi) 
                         | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_and))) {
                        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out 
                            = (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
                               & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2);
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_ascii_instr 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_ascii_instr;
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_next) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_ascii_instr 
            = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_ascii_instr
                : vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr);
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                    if ((3U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                    if ((0x20U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset = 1U;
                                        } else {
                                            if ((8U 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset = 1U;
                                            } else {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset = 1U;
                                                        }
                                                    }
                                                } else {
                                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset = 1U;
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state_next = 0U;
                } else {
                    if (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state_next = 1U;
                    } else {
                        if ((1U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end) 
                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid)) 
                                   | (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state_next 
                                = (((0x21U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)) 
                                    | (0x22U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)))
                                    ? 2U : 1U);
                        }
                    }
                }
            } else {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state_next 
                    = ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))
                        ? ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                            ? 0U : (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                                     ? 2U : 3U)) : 
                       ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))
                         ? ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                             ? 0U : (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                                      ? 3U : 4U)) : 
                        ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))
                          ? ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                              ? 0U : (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                                       ? 4U : ((0x20U 
                                                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                ? (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                    ? 1U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                     ? 1U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                        ? 1U
                                                        : 8U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                        ? 7U
                                                        : 5U))
                                                      : 1U)))
                                                : 1U)))
                          : ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))
                              ? ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                                  ? 0U : (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                                           ? 5U : 6U))
                              : ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))
                                  ? ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                                      ? 0U : (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                                               ? 6U
                                               : 2U))
                                  : ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                                      ? 0U : (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                                               ? 7U
                                               : 2U)))))));
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state_next 
                = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                    ? 0U : (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                             ? 8U : 1U));
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                    if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                        if ((1U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end) 
                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid)) 
                                   | (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next 
                                = (1U & (~ ((0x21U 
                                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)) 
                                            | (0x22U 
                                               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)))));
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                        if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next = 0U;
                        }
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                            if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next = 0U;
                            }
                        }
                    } else {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next = 1U;
                                }
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                    if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next = 1U;
                                    }
                                }
                            } else {
                                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                        if ((1U & (~ 
                                                   ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next = 0U;
                                        }
                                    }
                                } else {
                                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                        if ((1U & (~ 
                                                   ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next = 1U;
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line_next = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                    if ((3U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                    if ((0x20U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line_next = 1U;
                                        } else {
                                            if ((8U 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line_next 
                                                    = 
                                                    (1U 
                                                     & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x) 
                                                         >> 2U) 
                                                        | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x) 
                                                            >> 1U) 
                                                           | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))));
                                            } else {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line_next = 1U;
                                                        }
                                                    }
                                                } else {
                                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line_next = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line_next = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line_next = 1U;
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16_next = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                    if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                        if ((1U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end) 
                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid)) 
                                   | (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                            if ((1U & (~ ((0x21U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)) 
                                          | (0x22U 
                                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)))))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16_next 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15;
                            }
                        }
                    }
                }
            } else {
                if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                    if ((3U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16_next 
                                        = (0xfU & (
                                                   (0x20U 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                     ? 
                                                    ((0xfU 
                                                      == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                      ? 0U
                                                      : 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15)))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                       ? 
                                                      ((0xfU 
                                                        == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                        ? 0U
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                        ? 
                                                       ((0xfU 
                                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                         ? 0U
                                                         : 
                                                        ((IData)(1U) 
                                                         + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                         ? 
                                                        ((0xfU 
                                                          == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                          ? 0U
                                                          : 
                                                         ((IData)(1U) 
                                                          + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15)))
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                          ? 0U
                                                          : 
                                                         ((IData)(1U) 
                                                          + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                         ? 
                                                        ((0xfU 
                                                          == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                          ? 0U
                                                          : 
                                                         ((IData)(1U) 
                                                          + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15)))
                                                         : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                        : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                       : 
                                                      ((0xfU 
                                                        == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                        ? 0U
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))))))
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                     ? 0U
                                                     : 
                                                    ((IData)(1U) 
                                                     + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15)))));
                                }
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                    if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16_next 
                                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16_next 
                        = ((0xfU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                            ? 0U : (0xfU & ((IData)(1U) 
                                            + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))));
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x_next = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                    if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                        if ((1U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end) 
                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid)) 
                                   | (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                            if ((1U & (~ ((0x21U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)) 
                                          | (0x22U 
                                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)))))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x_next 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39;
                            }
                        }
                    }
                }
            } else {
                if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                    if ((3U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x_next 
                                        = ((0x20U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                            ? ((0x10U 
                                                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                ? 0U
                                                : (
                                                   (8U 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                       ? 0U
                                                       : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39))
                                                      : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39))
                                                     : 0U)))
                                            : 0U);
                                }
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                    if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x_next 
                                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x_next = 0U;
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y_next = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                    if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                        if ((1U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end) 
                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid)) 
                                   | (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                            if ((1U & (~ ((0x21U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)) 
                                          | (0x22U 
                                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)))))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y_next 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14;
                            }
                        }
                    }
                }
            } else {
                if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                    if ((3U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y_next 
                                        = (0x3fU & 
                                           ((0x20U 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                             ? ((0x10U 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                 ? 
                                                ((0xfU 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                  : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                   ? 
                                                  ((0xfU 
                                                    == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                    : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                    ? 
                                                   ((0xfU 
                                                     == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                     : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                     ? 
                                                    ((0xfU 
                                                      == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                      : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                      : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14)))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                     ? 
                                                    ((0xfU 
                                                      == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                      : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                     : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                    : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                    : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14)))))
                                             : ((0xfU 
                                                 == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                 : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))));
                                }
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                    if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y_next 
                                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y_next 
                        = (0x3fU & ((0xfU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                     ? ((IData)(1U) 
                                        + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                     : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14)));
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                    if ((3U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                    if ((0x20U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset = 1U;
                                        } else {
                                            if ((8U 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset = 1U;
                                            } else {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset = 1U;
                                                        }
                                                    }
                                                } else {
                                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset = 1U;
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                    if (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move = 0U;
                    } else {
                        if ((1U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end) 
                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid)) 
                                   | (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move = 1U;
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move 
                            = (1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))));
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move 
                                = (1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))));
                        }
                    } else {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move 
                                    = (1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))));
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move 
                                        = (1U & (~ 
                                                 ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))));
                                }
                            } else {
                                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move 
                                            = (1U & 
                                               (~ (
                                                   (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))));
                                    }
                                } else {
                                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move 
                                            = (1U & 
                                               (~ (
                                                   (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move 
                    = (1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))));
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [0U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [0U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[0U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [1U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [1U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[1U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [2U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [2U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[2U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [3U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [3U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[3U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [4U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [4U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[4U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [5U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [5U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[5U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [6U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [6U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[6U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [7U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [7U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[7U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [8U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [8U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[8U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [9U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [9U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[9U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->LUT_we = ((((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_lut)) 
                       & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb))) 
                      & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)));
    vlTOPp->BRAM14_wstrb_b = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_font_map)
                               ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                               : 0U);
    vlTOPp->BRAM14_en_b = (((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_font_map)) 
                           & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)));
    vlTOPp->BRAM4_wstrb_b = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram4)
                              ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                              : 0U);
    vlTOPp->BRAM4_en_b = (((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram4)) 
                          & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)));
    vlTOPp->BRAM5_wstrb_b = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram5)
                              ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                              : 0U);
    vlTOPp->BRAM5_en_b = (((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram5)) 
                          & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)));
    vlTOPp->BRAM6_wstrb_b = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram6)
                              ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                              : 0U);
    vlTOPp->BRAM6_en_b = (((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram6)) 
                          & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)));
    vlTOPp->BRAM13_wstrb_b = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram13)
                               ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                               : 0U);
    vlTOPp->BRAM13_en_b = (((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram13)) 
                           & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)));
    vlTOPp->DDR3_CPU_valid = ((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ddr3));
    vlTOPp->DDR3_CPU_wstrb = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ddr3)
                               ? (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb)
                               : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state))) {
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state_next 
            = (((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ddr3)))
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state_next = 0U;
        }
    }
    vlTOPp->Game_Console_TOP__DOT__dec_emem_rdata = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ddr3) {
        vlTOPp->Game_Console_TOP__DOT__dec_emem_rdata 
            = vlTOPp->DDR3_CPU_rdata;
    }
    if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state))) {
        if (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram4_r) {
            vlTOPp->Game_Console_TOP__DOT__dec_emem_rdata 
                = vlTOPp->BRAM4_dout_b;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram5_r) {
                vlTOPp->Game_Console_TOP__DOT__dec_emem_rdata 
                    = vlTOPp->BRAM5_dout_b;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram6_r) {
                    vlTOPp->Game_Console_TOP__DOT__dec_emem_rdata 
                        = vlTOPp->BRAM6_dout_b;
                } else {
                    if (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram13_r) {
                        vlTOPp->Game_Console_TOP__DOT__dec_emem_rdata 
                            = vlTOPp->BRAM13_dout_b;
                    } else {
                        if (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_font_map_r) {
                            vlTOPp->Game_Console_TOP__DOT__dec_emem_rdata 
                                = vlTOPp->BRAM14_dout_b;
                        } else {
                            if (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_ppu_reg_r) {
                                vlTOPp->Game_Console_TOP__DOT__dec_emem_rdata 
                                    = ((0x2aU == (0xffU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                                     >> 2U)))
                                        ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__joypad_irq_pending) 
                                            << 8U) 
                                           | (IData)(vlTOPp->joypad_state_in))
                                        : ((0x29U >= 
                                            (0xffU 
                                             & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                                >> 2U)))
                                            ? ((0x2aU 
                                                >= 
                                                (0x3fU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                                    >> 2U)))
                                                ? vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                               [(0x3fU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                                    >> 2U))]
                                                : 0U)
                                            : 0U));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__dec_emem_ready = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ddr3) {
        vlTOPp->Game_Console_TOP__DOT__dec_emem_ready 
            = vlTOPp->DDR3_CPU_ready;
    }
    if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state))) {
        vlTOPp->Game_Console_TOP__DOT__dec_emem_ready = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_map_read_ena 
        = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena 
        = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_valid) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move));
    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_3 = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                    if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                        if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                            if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                                if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                                    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_3 = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_2 = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                    if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                        if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                            if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_2 = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_1 = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                    if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                        if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                            vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_1 = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_0 = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                    if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_0 = 1U;
                    }
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                    if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_0 = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter_plus = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                    if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter_plus = 1U;
                    }
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                    if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter_plus = 1U;
                    }
                } else {
                    if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                        if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                            vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter_plus = 1U;
                        }
                    } else {
                        if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                            if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter_plus = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter_reset = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__dec_emem_ready)))) {
                        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter_reset = 1U;
                    }
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                    if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                        if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                            if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                                if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                                    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter_reset = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata[0U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata[1U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata[2U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata[3U] = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))))) {
                    if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata[0U] 
                            = vlTOPp->Game_Console_TOP__DOT__dec_emem_rdata;
                    }
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                    if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata[0U] 
                            = vlTOPp->Game_Console_TOP__DOT__dec_emem_rdata;
                    }
                } else {
                    if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                        if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                            vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata[1U] 
                                = vlTOPp->Game_Console_TOP__DOT__dec_emem_rdata;
                        }
                    } else {
                        if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                            if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata[2U] 
                                    = vlTOPp->Game_Console_TOP__DOT__dec_emem_rdata;
                            }
                        } else {
                            if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                                if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                                    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata[3U] 
                                        = vlTOPp->Game_Console_TOP__DOT__dec_emem_rdata;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next 
        = vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
              & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))) {
            vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next = 1U;
        } else {
            if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
                  & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr)))) {
                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next = 3U;
                if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next = 0U;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) {
                    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next = 4U;
                    if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next = 0U;
                    }
                } else {
                    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next = 0U;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next 
                = (((vlTOPp->BRAM1_dout[0U] >> 7U) 
                    & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                    << 8U)) | (0xffU 
                                               & vlTOPp->BRAM0_dout[0U])) 
                       == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))
                    ? 0U : (((vlTOPp->BRAM3_dout[0U] 
                              >> 7U) & (((0x7f00U & 
                                          (vlTOPp->BRAM3_dout[0U] 
                                           << 8U)) 
                                         | (0xffU & 
                                            vlTOPp->BRAM2_dout[0U])) 
                                        == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))
                             ? 0U : 5U));
        } else {
            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next = 5U;
                } else {
                    if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next = 5U;
                    } else {
                        if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                            vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next = 5U;
                        } else {
                            if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter))) {
                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next 
                                    = ((IData)(vlTOPp->Game_Console_TOP__DOT__dec_emem_ready)
                                        ? 6U : 5U);
                            }
                        }
                    }
                }
            } else {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next = 0U;
                } else {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next 
                            = ((IData)(vlTOPp->Game_Console_TOP__DOT__dec_emem_ready)
                                ? 0U : 3U);
                    } else {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                            vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next 
                                = ((IData)(vlTOPp->Game_Console_TOP__DOT__dec_emem_ready)
                                    ? 0U : 4U);
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__cache_cpu_ready = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
                       & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))))) {
            if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
                  & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr)))) {
                if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                    vlTOPp->Game_Console_TOP__DOT__cache_cpu_ready = 1U;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) {
                    if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                        vlTOPp->Game_Console_TOP__DOT__cache_cpu_ready = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if (((vlTOPp->BRAM1_dout[0U] >> 7U) & (
                                                   ((0x7f00U 
                                                     & (vlTOPp->BRAM1_dout[0U] 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlTOPp->BRAM0_dout[0U])) 
                                                   == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))) {
                vlTOPp->Game_Console_TOP__DOT__cache_cpu_ready = 1U;
            } else {
                if (((vlTOPp->BRAM3_dout[0U] >> 7U) 
                     & (((0x7f00U & (vlTOPp->BRAM3_dout[0U] 
                                     << 8U)) | (0xffU 
                                                & vlTOPp->BRAM2_dout[0U])) 
                        == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))) {
                    vlTOPp->Game_Console_TOP__DOT__cache_cpu_ready = 1U;
                }
            }
        } else {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                        vlTOPp->Game_Console_TOP__DOT__cache_cpu_ready 
                            = vlTOPp->Game_Console_TOP__DOT__dec_emem_ready;
                    } else {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                            vlTOPp->Game_Console_TOP__DOT__cache_cpu_ready 
                                = vlTOPp->Game_Console_TOP__DOT__dec_emem_ready;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__cache_cpu_rdata = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
                       & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))))) {
            if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
                  & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr)))) {
                if (vlTOPp->Game_Console_TOP__DOT__dec_emem_ready) {
                    vlTOPp->Game_Console_TOP__DOT__cache_cpu_rdata 
                        = vlTOPp->Game_Console_TOP__DOT__dec_emem_rdata;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if (((vlTOPp->BRAM1_dout[0U] >> 7U) & (
                                                   ((0x7f00U 
                                                     & (vlTOPp->BRAM1_dout[0U] 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlTOPp->BRAM0_dout[0U])) 
                                                   == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))) {
                vlTOPp->Game_Console_TOP__DOT__cache_cpu_rdata 
                    = ((8U & vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr)
                        ? ((4U & vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr)
                            ? ((vlTOPp->BRAM1_dout[2U] 
                                << 0x18U) | (vlTOPp->BRAM1_dout[1U] 
                                             >> 8U))
                            : ((vlTOPp->BRAM1_dout[1U] 
                                << 0x18U) | (vlTOPp->BRAM1_dout[0U] 
                                             >> 8U)))
                        : ((4U & vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr)
                            ? ((vlTOPp->BRAM0_dout[2U] 
                                << 0x18U) | (vlTOPp->BRAM0_dout[1U] 
                                             >> 8U))
                            : ((vlTOPp->BRAM0_dout[1U] 
                                << 0x18U) | (vlTOPp->BRAM0_dout[0U] 
                                             >> 8U))));
            } else {
                if (((vlTOPp->BRAM3_dout[0U] >> 7U) 
                     & (((0x7f00U & (vlTOPp->BRAM3_dout[0U] 
                                     << 8U)) | (0xffU 
                                                & vlTOPp->BRAM2_dout[0U])) 
                        == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)))) {
                    vlTOPp->Game_Console_TOP__DOT__cache_cpu_rdata 
                        = ((8U & vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr)
                            ? ((4U & vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr)
                                ? ((vlTOPp->BRAM3_dout[2U] 
                                    << 0x18U) | (vlTOPp->BRAM3_dout[1U] 
                                                 >> 8U))
                                : ((vlTOPp->BRAM3_dout[1U] 
                                    << 0x18U) | (vlTOPp->BRAM3_dout[0U] 
                                                 >> 8U)))
                            : ((4U & vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr)
                                ? ((vlTOPp->BRAM2_dout[2U] 
                                    << 0x18U) | (vlTOPp->BRAM2_dout[1U] 
                                                 >> 8U))
                                : ((vlTOPp->BRAM2_dout[1U] 
                                    << 0x18U) | (vlTOPp->BRAM2_dout[0U] 
                                                 >> 8U))));
                }
            }
        } else {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                        vlTOPp->Game_Console_TOP__DOT__cache_cpu_rdata 
                            = ((IData)(vlTOPp->Game_Console_TOP__DOT__dec_emem_ready)
                                ? vlTOPp->Game_Console_TOP__DOT__dec_emem_rdata
                                : 0U);
                    }
                }
            }
        }
    }
    vlTOPp->BRAM14_en_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_map_read_ena) {
        vlTOPp->BRAM14_en_a = 1U;
    }
    vlTOPp->BRAM14_wstrb_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_map_read_ena) {
        vlTOPp->BRAM14_wstrb_a = 0U;
    }
    vlTOPp->BRAM14_din_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_map_read_ena) {
        vlTOPp->BRAM14_din_a = 0U;
    }
    vlTOPp->BRAM14_addr_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_map_read_ena) {
        vlTOPp->BRAM14_addr_a = (0x3ffU & ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y) 
                                             << 4U) 
                                            + ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y) 
                                               << 2U)) 
                                           + (0x1fU 
                                              & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x) 
                                                 >> 1U))));
    }
    vlTOPp->BRAM13_en_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom)))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    vlTOPp->BRAM13_en_a = 1U;
                }
            }
        }
    }
    vlTOPp->BRAM13_wstrb_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom)))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    vlTOPp->BRAM13_wstrb_a = 0U;
                }
            }
        }
    }
    vlTOPp->BRAM13_din_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom)))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    vlTOPp->BRAM13_din_a = 0U;
                }
            }
        }
    }
    vlTOPp->BRAM6_din_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom) {
                if ((0xe053U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16))) {
                    vlTOPp->BRAM6_din_a = 0U;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    vlTOPp->BRAM6_din_a = 0U;
                }
            }
        }
    }
    vlTOPp->BRAM6_wstrb_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom) {
                if ((0xe053U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16))) {
                    vlTOPp->BRAM6_wstrb_a = 0U;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    vlTOPp->BRAM6_wstrb_a = 0U;
                }
            }
        }
    }
    vlTOPp->BRAM6_en_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom) {
                if ((0xe053U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16))) {
                    vlTOPp->BRAM6_en_a = 1U;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    vlTOPp->BRAM6_en_a = 1U;
                }
            }
        }
    }
    vlTOPp->BRAM4_din_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom)))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    if ((7U > (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) {
                        vlTOPp->BRAM4_din_a = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM4_wstrb_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom)))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    if ((7U > (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) {
                        vlTOPp->BRAM4_wstrb_a = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM4_en_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom)))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    if ((7U > (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) {
                        vlTOPp->BRAM4_en_a = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM13_addr_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom)))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    vlTOPp->BRAM13_addr_a = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_bram_ad;
                }
            }
        }
    }
    vlTOPp->BRAM5_din_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii) {
            vlTOPp->BRAM5_din_a = 0U;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom) {
                if ((0xe053U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16))) {
                    vlTOPp->BRAM5_din_a = 0U;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    if ((7U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) {
                        vlTOPp->BRAM5_din_a = 0U;
                    }
                } else {
                    vlTOPp->BRAM5_din_a = 0U;
                }
            }
        }
    }
    vlTOPp->BRAM5_wstrb_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii) {
            vlTOPp->BRAM5_wstrb_a = 0U;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom) {
                if ((0xe053U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16))) {
                    vlTOPp->BRAM5_wstrb_a = 0U;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    if ((7U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) {
                        vlTOPp->BRAM5_wstrb_a = 0U;
                    }
                } else {
                    vlTOPp->BRAM5_wstrb_a = 0U;
                }
            }
        }
    }
    vlTOPp->BRAM5_en_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii) {
            vlTOPp->BRAM5_en_a = 1U;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom) {
                if ((0xe053U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16))) {
                    vlTOPp->BRAM5_en_a = 1U;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    if ((7U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) {
                        vlTOPp->BRAM5_en_a = 1U;
                    }
                } else {
                    vlTOPp->BRAM5_en_a = 1U;
                }
            }
        }
    }
    vlTOPp->BRAM4_addr_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom)))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    if ((7U > (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) {
                        vlTOPp->BRAM4_addr_a = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_bram_ad;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM6_addr_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom) {
                if ((0xe053U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16))) {
                    vlTOPp->BRAM6_addr_a = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bram_ad;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    vlTOPp->BRAM6_addr_a = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_bram_ad;
                }
            }
        }
    }
    vlTOPp->BRAM5_addr_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii) {
            vlTOPp->BRAM5_addr_a = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bram_ad;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom) {
                if ((0xe053U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16))) {
                    vlTOPp->BRAM5_addr_a = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bram_ad;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    if ((7U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) {
                        vlTOPp->BRAM5_addr_a = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_bram_ad;
                    }
                } else {
                    vlTOPp->BRAM5_addr_a = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bram_ad;
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_xfer 
        = ((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__cache_cpu_ready));
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_wordsize))) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_word 
            = vlTOPp->Game_Console_TOP__DOT__cache_cpu_rdata;
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_wordsize))) {
            if ((2U & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1)) {
                if ((2U & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1)) {
                    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_word 
                        = (0xffffU & (vlTOPp->Game_Console_TOP__DOT__cache_cpu_rdata 
                                      >> 0x10U));
                }
            } else {
                vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_word 
                    = (0xffffU & vlTOPp->Game_Console_TOP__DOT__cache_cpu_rdata);
            }
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_wordsize))) {
                vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_word 
                    = ((2U & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1)
                        ? ((1U & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1)
                            ? (0xffU & (vlTOPp->Game_Console_TOP__DOT__cache_cpu_rdata 
                                        >> 0x18U)) : 
                           (0xffU & (vlTOPp->Game_Console_TOP__DOT__cache_cpu_rdata 
                                     >> 0x10U))) : 
                       ((1U & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1)
                         ? (0xffU & (vlTOPp->Game_Console_TOP__DOT__cache_cpu_rdata 
                                     >> 8U)) : (0xffU 
                                                & vlTOPp->Game_Console_TOP__DOT__cache_cpu_rdata)));
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_xfer)
            ? vlTOPp->Game_Console_TOP__DOT__cache_cpu_rdata
            : vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_q);
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_done 
        = ((IData)(vlTOPp->resetn) & ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_xfer) 
                                        & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_state))) 
                                       & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rinst) 
                                           | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rdata)) 
                                          | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_wdata))) 
                                      | ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_state)) 
                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rinst))));
}

void VGame_Console_TOP::_settle__TOP__2(VGame_Console_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGame_Console_TOP::_settle__TOP__2\n"); );
    VGame_Console_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[1U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Pixel_is_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[1U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Pixel_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[1U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Pixel_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_hit 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit1 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit2 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit3 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit4 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_is_zero 
        = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_pixel)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[2U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Pixel_is_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[2U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Pixel_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[2U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Pixel_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_hit 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit1 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit2 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit3 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit4 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_is_zero 
        = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_pixel)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[3U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Pixel_is_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[3U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Pixel_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[3U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Pixel_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_hit 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit1 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit2 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit3 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit4 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_is_zero 
        = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_pixel)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[4U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Pixel_is_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[4U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Pixel_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[4U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Pixel_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_hit 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit1 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit2 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit3 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit4 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_is_zero 
        = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_pixel)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[5U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Pixel_is_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[5U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Pixel_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[5U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Pixel_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_hit 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit1 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit2 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit3 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit4 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_is_zero 
        = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_pixel)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[6U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Pixel_is_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[6U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Pixel_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[6U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Pixel_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_hit 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit1 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit2 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit3 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit4 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_is_zero 
        = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_pixel)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[7U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Pixel_is_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[7U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Pixel_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[7U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Pixel_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_hit 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit1 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit2 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit3 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit4 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_is_zero 
        = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_pixel)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[8U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Pixel_is_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[8U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Pixel_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[8U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Pixel_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_hit 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit1 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit2 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit3 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit4 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_is_zero 
        = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_pixel)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[9U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Pixel_is_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[9U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Pixel_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[9U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Pixel_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_hit 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit1 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit2 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit3 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit4 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_is_zero 
        = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_pixel)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[0xaU] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Pixel_is_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[0xaU] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Pixel_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid[0xaU] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Pixel_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_hit 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit1 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit2 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit3 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit4 
        = (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_pixel) 
               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_pixel))) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_is_zero 
        = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_pixel)));
    vlTOPp->BRAM10_en_b = ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_en_b) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_en_b)) 
                            | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_en_b)) 
                           | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_en_b));
    vlTOPp->BRAM10_addr_b = ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_addr_b) 
                               | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_addr_b)) 
                              | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_addr_b)) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_addr_b));
    vlTOPp->BRAM11_en_b = ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_en_b) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_en_b)) 
                            | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_en_b)) 
                           | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_en_b));
    vlTOPp->BRAM11_addr_b = ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_addr_b) 
                               | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_addr_b)) 
                              | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_addr_b)) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_addr_b));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next = 2U;
    }
    vlTOPp->BRAM9_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlTOPp->BRAM9_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlTOPp->BRAM9_en_b = 1U;
    }
    vlTOPp->BRAM9_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlTOPp->BRAM9_addr_b = (0xffU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlTOPp->BRAM9_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0xffU 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_front))));
    }
    vlTOPp->BRAM12_en_b = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_en_b) 
                           | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_en_b));
    vlTOPp->BRAM12_addr_b = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_addr_b) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_addr_b));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_trans = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_trans = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_trans = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_trans = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_trans = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_trans = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_trans = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_trans = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_trans = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_trans = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_trans = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_trans = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_trans = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_trans = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_trans = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_trans = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_trans = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_trans = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [0U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [0U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[0U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [1U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [1U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[1U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [2U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [2U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[2U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [3U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [3U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[3U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [4U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [4U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[4U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [5U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [5U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[5U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [6U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [6U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[6U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [7U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [7U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[7U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [8U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [8U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[8U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [9U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [9U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans[9U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [0U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [0U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[0U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [1U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [1U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[1U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [2U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [2U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[2U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [3U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [3U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[3U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [4U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [4U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[4U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [5U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [5U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[5U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [6U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [6U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[6U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [7U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [7U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[7U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [8U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [8U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[8U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [9U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [9U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB[9U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [0U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [0U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[0U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [1U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [1U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[1U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [2U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [2U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[2U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [3U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [3U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[3U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [4U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [4U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[4U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [5U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [5U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[5U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [6U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [6U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[6U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [7U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [7U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[7U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [8U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [8U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[8U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [9U]) & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_valid
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [9U]]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid[9U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_trans = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_trans = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 = 0U;
    vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_end = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_RGB = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_end = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_RGB = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_end = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_RGB = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_end = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_RGB = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_end = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_RGB = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_end = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_RGB = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_end = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_RGB = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_end = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_RGB = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_end = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_RGB = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_end = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_RGB = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req11_end = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req11_RGB = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req12_end = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req12_RGB = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_w_ena = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_w_ena = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_w_ena = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_w_ena = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_w_ena = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_w_ena = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_w_ena = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_w_ena = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_w_ena = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_w_ena = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_w_ena = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_w_ena = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req 
        = ((0xffeU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req)) 
           | (((((((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_is_zero)) 
                   & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_ena)) 
                  & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit1))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit2))) 
                & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit3))) 
               & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit4))) 
              & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_hit))));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req 
        = ((0xffdU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req)) 
           | ((((((((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_is_zero)) 
                    & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_ena)) 
                   & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit1))) 
                  & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit2))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit3))) 
                & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit4))) 
               & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_hit))) 
              << 1U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req 
        = ((0xffbU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req)) 
           | ((((((((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_is_zero)) 
                    & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_ena)) 
                   & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit1))) 
                  & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit2))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit3))) 
                & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit4))) 
               & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_hit))) 
              << 2U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req 
        = ((0xff7U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req)) 
           | ((((((((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_is_zero)) 
                    & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_ena)) 
                   & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit1))) 
                  & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit2))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit3))) 
                & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit4))) 
               & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_hit))) 
              << 3U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req 
        = ((0xfefU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req)) 
           | ((((((((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_is_zero)) 
                    & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_ena)) 
                   & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit1))) 
                  & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit2))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit3))) 
                & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit4))) 
               & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_hit))) 
              << 4U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req 
        = ((0xfdfU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req)) 
           | ((((((((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_is_zero)) 
                    & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_ena)) 
                   & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit1))) 
                  & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit2))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit3))) 
                & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit4))) 
               & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_hit))) 
              << 5U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req 
        = ((0xfbfU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req)) 
           | ((((((((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_is_zero)) 
                    & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_ena)) 
                   & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit1))) 
                  & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit2))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit3))) 
                & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit4))) 
               & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_hit))) 
              << 6U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req 
        = ((0xf7fU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req)) 
           | ((((((((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_is_zero)) 
                    & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_ena)) 
                   & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit1))) 
                  & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit2))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit3))) 
                & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit4))) 
               & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_hit))) 
              << 7U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req 
        = ((0xeffU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req)) 
           | ((((((((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_is_zero)) 
                    & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_ena)) 
                   & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit1))) 
                  & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit2))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit3))) 
                & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit4))) 
               & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_hit))) 
              << 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req 
        = ((0xdffU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req)) 
           | ((((((((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_is_zero)) 
                    & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_ena)) 
                   & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit1))) 
                  & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit2))) 
                 & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit3))) 
                & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit4))) 
               & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_hit))) 
              << 9U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req 
        = (0xbffU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req 
        = (0x7ffU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req));
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_1) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_1) {
            if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_2))) {
                if ((8U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                    vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_pixel;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_end = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_RGB 
                        = vlTOPp->LUT_data_out1;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_w_ena = 1U;
                } else {
                    if ((0x10U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                            = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_pixel;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_RGB 
                            = vlTOPp->LUT_data_out1;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_w_ena = 1U;
                    } else {
                        if ((0x20U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                                = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_pixel;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_RGB 
                                = vlTOPp->LUT_data_out1;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_w_ena = 1U;
                        }
                    }
                }
            } else {
                if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_2))) {
                    if ((0x10U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                            = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_pixel;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_RGB 
                            = vlTOPp->LUT_data_out1;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_w_ena = 1U;
                    } else {
                        if ((0x20U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                                = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_pixel;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_RGB 
                                = vlTOPp->LUT_data_out1;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_w_ena = 1U;
                        } else {
                            if ((8U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                                vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                                    = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_pixel;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_end = 1U;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_RGB 
                                    = vlTOPp->LUT_data_out1;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_w_ena = 1U;
                            }
                        }
                    }
                } else {
                    if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_2))) {
                        if ((0x20U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                                = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_pixel;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_RGB 
                                = vlTOPp->LUT_data_out1;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_w_ena = 1U;
                        } else {
                            if ((8U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                                vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                                    = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_pixel;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_end = 1U;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_RGB 
                                    = vlTOPp->LUT_data_out1;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_w_ena = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                                    vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                                        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_pixel;
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_end = 1U;
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_RGB 
                                        = vlTOPp->LUT_data_out1;
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_w_ena = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_2))) {
            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                    = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_pixel;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_end = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_RGB 
                    = vlTOPp->LUT_data_out1;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_w_ena = 1U;
            } else {
                if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                    vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_pixel;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_end = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_RGB 
                        = vlTOPp->LUT_data_out1;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_w_ena = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                            = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_pixel;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_RGB 
                            = vlTOPp->LUT_data_out1;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_w_ena = 1U;
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_2))) {
                if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                    vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_pixel;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_end = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_RGB 
                        = vlTOPp->LUT_data_out1;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_w_ena = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                            = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_pixel;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_RGB 
                            = vlTOPp->LUT_data_out1;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_w_ena = 1U;
                    } else {
                        if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                                = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_pixel;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_RGB 
                                = vlTOPp->LUT_data_out1;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_w_ena = 1U;
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_2))) {
                    if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                            = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_pixel;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_RGB 
                            = vlTOPp->LUT_data_out1;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_w_ena = 1U;
                    } else {
                        if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                                = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_pixel;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_RGB 
                                = vlTOPp->LUT_data_out1;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_w_ena = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                                vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1 
                                    = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_pixel;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_end = 1U;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_RGB 
                                    = vlTOPp->LUT_data_out1;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_w_ena = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_1) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_1) {
            if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_2))) {
                if ((0x200U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                    vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 
                        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_pixel;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_end = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_RGB 
                        = vlTOPp->LUT_data_out2;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_w_ena = 1U;
                } else {
                    if ((0x400U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 = 0U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req11_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req11_RGB 
                            = vlTOPp->LUT_data_out2;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_w_ena = 1U;
                    } else {
                        if ((0x800U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 = 0U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req12_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req12_RGB 
                                = vlTOPp->LUT_data_out2;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_w_ena = 1U;
                        }
                    }
                }
            } else {
                if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_2))) {
                    if ((0x400U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 = 0U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req11_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req11_RGB 
                            = vlTOPp->LUT_data_out2;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_w_ena = 1U;
                    } else {
                        if ((0x800U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 = 0U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req12_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req12_RGB 
                                = vlTOPp->LUT_data_out2;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_w_ena = 1U;
                        } else {
                            if ((0x200U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                                vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 
                                    = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_pixel;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_end = 1U;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_RGB 
                                    = vlTOPp->LUT_data_out2;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_w_ena = 1U;
                            }
                        }
                    }
                } else {
                    if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_2))) {
                        if ((0x800U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 = 0U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req12_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req12_RGB 
                                = vlTOPp->LUT_data_out2;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_w_ena = 1U;
                        } else {
                            if ((0x200U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                                vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 
                                    = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_pixel;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_end = 1U;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_RGB 
                                    = vlTOPp->LUT_data_out2;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_w_ena = 1U;
                            } else {
                                if ((0x400U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                                    vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 = 0U;
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req11_end = 1U;
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req11_RGB 
                                        = vlTOPp->LUT_data_out2;
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_w_ena = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_2))) {
            if ((0x40U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 
                    = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_pixel;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_end = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_RGB 
                    = vlTOPp->LUT_data_out2;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_w_ena = 1U;
            } else {
                if ((0x80U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                    vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 
                        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_pixel;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_end = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_RGB 
                        = vlTOPp->LUT_data_out2;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_w_ena = 1U;
                } else {
                    if ((0x100U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 
                            = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_pixel;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_RGB 
                            = vlTOPp->LUT_data_out2;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_w_ena = 1U;
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_2))) {
                if ((0x80U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                    vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 
                        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_pixel;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_end = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_RGB 
                        = vlTOPp->LUT_data_out2;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_w_ena = 1U;
                } else {
                    if ((0x100U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 
                            = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_pixel;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_RGB 
                            = vlTOPp->LUT_data_out2;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_w_ena = 1U;
                    } else {
                        if ((0x40U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 
                                = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_pixel;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_RGB 
                                = vlTOPp->LUT_data_out2;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_w_ena = 1U;
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_2))) {
                    if ((0x100U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 
                            = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_pixel;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_RGB 
                            = vlTOPp->LUT_data_out2;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_w_ena = 1U;
                    } else {
                        if ((0x40U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 
                                = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_pixel;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_RGB 
                                = vlTOPp->LUT_data_out2;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_w_ena = 1U;
                        } else {
                            if ((0x80U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__total_req))) {
                                vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2 
                                    = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_pixel;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_end = 1U;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_RGB 
                                    = vlTOPp->LUT_data_out2;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_w_ena = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_end = 1U;
    } else {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_hit) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_end = 1U;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_RGB;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit1) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_end = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_RGB 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit2) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_end = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit3) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_hit4) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_RGB 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_end = 1U;
    } else {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_hit) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_end = 1U;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_RGB;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit1) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_end = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_RGB 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit2) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_end = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit3) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_hit4) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_RGB 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_end = 1U;
    } else {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_hit) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_end = 1U;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_RGB;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit1) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_end = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_RGB 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit2) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_end = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit3) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_hit4) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_RGB 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_end = 1U;
    } else {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_hit) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_end = 1U;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_RGB;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit1) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_end = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_RGB 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit2) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_end = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit3) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_hit4) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_RGB 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_end = 1U;
    } else {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_hit) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_end = 1U;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_RGB;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit1) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_end = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_RGB 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit2) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_end = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit3) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_hit4) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_RGB 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_end = 1U;
    } else {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_hit) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_end = 1U;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_RGB;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit1) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_end = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_RGB 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit2) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_end = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit3) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_hit4) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_RGB 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_end = 1U;
    } else {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_hit) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_end = 1U;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_RGB;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit1) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_end = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_RGB 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit2) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_end = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit3) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_hit4) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_RGB 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_end = 1U;
    } else {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_hit) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_end = 1U;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_RGB;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit1) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_end = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_RGB 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit2) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_end = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit3) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_hit4) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_RGB 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_end = 1U;
    } else {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_hit) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_end = 1U;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_RGB;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit1) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_end = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_RGB 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit2) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_end = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit3) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_hit4) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_RGB 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_is_zero) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_end = 1U;
    } else {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_hit) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_end = 1U;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_RGB;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit1) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_end = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_RGB 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit2) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_end = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit3) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_end = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_hit4) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_end = 1U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_RGB 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[0U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[1U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[2U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[3U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[4U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[5U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[6U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[7U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[8U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state_next 
            = ((IData)(vlTOPp->Game_Console_TOP__DOT__PPU_start)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state_next 
                = (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                   [8U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state_next 
                    = (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_ready) 
                        & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                        [8U]) ? 2U : (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_ready) 
                                       & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                          [8U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state_next 
            = ((IData)(vlTOPp->Game_Console_TOP__DOT__PPU_start)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state_next 
                = (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                   [2U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state_next 
                    = (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_ready) 
                        & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                        [2U]) ? 2U : (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_ready) 
                                       & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                          [2U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state_next 
            = ((IData)(vlTOPp->Game_Console_TOP__DOT__PPU_start)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state_next 
                = (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                   [9U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state_next 
                    = (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_ready) 
                        & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                        [9U]) ? 2U : (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_ready) 
                                       & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                          [9U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state_next 
            = ((IData)(vlTOPp->Game_Console_TOP__DOT__PPU_start)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state_next 
                = (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                   [6U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state_next 
                    = (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_ready) 
                        & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                        [6U]) ? 2U : (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_ready) 
                                       & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                          [6U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state_next 
            = ((IData)(vlTOPp->Game_Console_TOP__DOT__PPU_start)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state_next 
                = (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                   [5U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state_next 
                    = (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_ready) 
                        & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                        [5U]) ? 2U : (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_ready) 
                                       & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                          [5U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state_next 
            = ((IData)(vlTOPp->Game_Console_TOP__DOT__PPU_start)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state_next 
                = (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                   [4U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state_next 
                    = (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_ready) 
                        & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                        [4U]) ? 2U : (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_ready) 
                                       & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                          [4U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state_next 
            = ((IData)(vlTOPp->Game_Console_TOP__DOT__PPU_start)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state_next 
                = (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                   [0U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state_next 
                    = (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_ready) 
                        & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                        [0U]) ? 2U : (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_ready) 
                                       & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                          [0U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state_next 
            = ((IData)(vlTOPp->Game_Console_TOP__DOT__PPU_start)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state_next 
                = (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                   [3U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state_next 
                    = (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_ready) 
                        & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                        [3U]) ? 2U : (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_ready) 
                                       & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                          [3U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state_next 
            = ((IData)(vlTOPp->Game_Console_TOP__DOT__PPU_start)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state_next 
                = (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                   [1U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state_next 
                    = (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_ready) 
                        & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                        [1U]) ? 2U : (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_ready) 
                                       & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                          [1U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state_next 
            = ((IData)(vlTOPp->Game_Console_TOP__DOT__PPU_start)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state_next 
                = (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                   [7U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state_next 
                    = (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_ready) 
                        & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                        [7U]) ? 2U : (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_ready) 
                                       & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                          [7U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[0U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[1U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[2U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[3U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[4U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[5U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[6U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[7U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[8U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[9U] = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[0U] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                [0U];
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[0U] 
                    = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_ready) 
                       & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                       [0U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[1U] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                [1U];
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[1U] 
                    = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_ready) 
                       & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                       [1U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[2U] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                [2U];
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[2U] 
                    = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_ready) 
                       & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                       [2U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[3U] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                [3U];
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[3U] 
                    = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_ready) 
                       & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                       [3U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[4U] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                [4U];
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[4U] 
                    = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_ready) 
                       & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                       [4U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[5U] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                [5U];
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[5U] 
                    = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_ready) 
                       & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                       [5U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[6U] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                [6U];
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[6U] 
                    = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_ready) 
                       & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                       [6U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[7U] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                [7U];
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[7U] 
                    = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_ready) 
                       & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                       [7U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[8U] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                [8U];
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[8U] 
                    = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_ready) 
                       & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                       [8U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[9U] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                [9U];
        } else {
            if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready[9U] 
                    = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_ready) 
                       & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                       [9U]);
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_trans[9U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_trans;
    vlTOPp->LUT_addr_r1 = vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1;
    vlTOPp->LUT_addr_r2 = vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[0U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[1U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[2U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[3U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[4U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[5U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[6U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[7U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[8U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[9U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[0xaU] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req11_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_RGB[0xbU] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req12_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[0U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_end;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[1U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_end;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[2U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_end;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[3U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_end;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[4U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_end;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[5U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_end;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[6U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_end;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[7U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_end;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[8U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_end;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[9U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_end;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[0xaU] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req11_end;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Req_end[0xbU] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req12_end;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[0U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[1U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[2U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[3U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[4U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[5U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[6U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[7U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[8U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[9U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[0xaU] = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready
        [0U]) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound7 = 1U;
        if ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
             [0U])) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[0U]] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound7;
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready
        [1U]) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound8 = 1U;
        if ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
             [1U])) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[1U]] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound8;
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready
        [2U]) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound9 = 1U;
        if ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
             [2U])) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[2U]] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound9;
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready
        [3U]) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound10 = 1U;
        if ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
             [3U])) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[3U]] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound10;
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready
        [4U]) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound11 = 1U;
        if ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
             [4U])) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[4U]] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound11;
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready
        [5U]) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound12 = 1U;
        if ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
             [5U])) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[5U]] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound12;
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready
        [6U]) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound13 = 1U;
        if ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
             [6U])) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[6U]] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound13;
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready
        [7U]) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound14 = 1U;
        if ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
             [7U])) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[7U]] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound14;
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready
        [8U]) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound15 = 1U;
        if ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
             [8U])) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[8U]] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound15;
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_ready
        [9U]) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound16 = 1U;
        if ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
             [9U])) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready[vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[9U]] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound16;
        }
    }
}
