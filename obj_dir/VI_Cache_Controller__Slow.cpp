// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VI_Cache_Controller.h for the primary calling header

#include "VI_Cache_Controller.h"
#include "VI_Cache_Controller__Syms.h"

//==========

VL_CTOR_IMP(VI_Cache_Controller) {
    VI_Cache_Controller__Syms* __restrict vlSymsp = __VlSymsp = new VI_Cache_Controller__Syms(this, name());
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VI_Cache_Controller::__Vconfigure(VI_Cache_Controller__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VI_Cache_Controller::~VI_Cache_Controller() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VI_Cache_Controller::_settle__TOP__2(VI_Cache_Controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI_Cache_Controller::_settle__TOP__2\n"); );
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BRAM0_wstrb = 0xffU;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->I_Cache_Controller__DOT__random_bit)))) {
                        vlTOPp->BRAM0_wstrb = 0xffU;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM0_wen = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->I_Cache_Controller__DOT__random_bit)))) {
                        vlTOPp->BRAM0_wen = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM1_wen = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->I_Cache_Controller__DOT__random_bit)))) {
                        vlTOPp->BRAM1_wen = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM1_wstrb = 0xffU;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->I_Cache_Controller__DOT__random_bit)))) {
                        vlTOPp->BRAM1_wstrb = 0xffU;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM2_wen = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                        if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                            vlTOPp->BRAM2_wen = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM2_wstrb = 0xffU;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                        if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                            vlTOPp->BRAM2_wstrb = 0xffU;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM3_wen = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                        if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                            vlTOPp->BRAM3_wen = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM3_wstrb = 0xffU;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                        if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                            vlTOPp->BRAM3_wstrb = 0xffU;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_3 = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        if ((2U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                if (vlTOPp->EMEM_ready) {
                                    vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_3 = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_2 = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            if (vlTOPp->EMEM_ready) {
                                vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_2 = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_1 = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        if (vlTOPp->EMEM_ready) {
                            vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_1 = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM0_waddr = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->I_Cache_Controller__DOT__random_bit)))) {
                        vlTOPp->BRAM0_waddr = (0x1ffU 
                                               & (vlTOPp->CPU_addr 
                                                  >> 4U));
                    }
                }
            }
        }
    }
    vlTOPp->BRAM3_waddr = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                        if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                            vlTOPp->BRAM3_waddr = (0x1ffU 
                                                   & (vlTOPp->CPU_addr 
                                                      >> 4U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM1_waddr = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->I_Cache_Controller__DOT__random_bit)))) {
                        vlTOPp->BRAM1_waddr = (0x1ffU 
                                               & (vlTOPp->CPU_addr 
                                                  >> 4U));
                    }
                }
            }
        }
    }
    vlTOPp->BRAM2_waddr = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                        if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                            vlTOPp->BRAM2_waddr = (0x1ffU 
                                                   & (vlTOPp->CPU_addr 
                                                      >> 4U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM1_din[0U] = 0U;
    vlTOPp->BRAM1_din[1U] = 0U;
    vlTOPp->BRAM1_din[2U] = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->I_Cache_Controller__DOT__random_bit)))) {
                        vlTOPp->BRAM1_din[0U] = (0x80U 
                                                 | ((0xffffff00U 
                                                     & ((IData)(
                                                                (((QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [2U])))) 
                                                        << 8U)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag) 
                                                          >> 8U))));
                        vlTOPp->BRAM1_din[1U] = ((0xffU 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                               [3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [2U])))) 
                                                     >> 0x18U)) 
                                                 | (0xffffff00U 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [2U]))) 
                                                                >> 0x20U)) 
                                                       << 8U)));
                        vlTOPp->BRAM1_din[2U] = (0xffU 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                               [3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [2U]))) 
                                                             >> 0x20U)) 
                                                    >> 0x18U));
                    }
                }
            }
        }
    }
    vlTOPp->BRAM0_din[0U] = 0U;
    vlTOPp->BRAM0_din[1U] = 0U;
    vlTOPp->BRAM0_din[2U] = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->I_Cache_Controller__DOT__random_bit)))) {
                        vlTOPp->BRAM0_din[0U] = ((0xffffff00U 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                               [1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [0U])))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)));
                        vlTOPp->BRAM0_din[1U] = ((0xffU 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                               [1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [0U])))) 
                                                     >> 0x18U)) 
                                                 | (0xffffff00U 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [0U]))) 
                                                                >> 0x20U)) 
                                                       << 8U)));
                        vlTOPp->BRAM0_din[2U] = (0xffU 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                               [1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                                [0U]))) 
                                                             >> 0x20U)) 
                                                    >> 0x18U));
                    }
                }
            }
        }
    }
    vlTOPp->I_Cache_Controller__DOT__cpu_tag_save = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->I_Cache_Controller__DOT__cpu_tag_save = 1U;
        }
    }
    vlTOPp->BRAM3_ren = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->BRAM3_ren = 1U;
        }
    }
    vlTOPp->BRAM3_din[0U] = 0U;
    vlTOPp->BRAM3_din[1U] = 0U;
    vlTOPp->BRAM3_din[2U] = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                        if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                            vlTOPp->BRAM3_din[0U] = 
                                (0x80U | ((0xffffff00U 
                                           & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                        [3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                         [2U])))) 
                                              << 8U)) 
                                          | (0x7fU 
                                             & ((IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag) 
                                                >> 8U))));
                            vlTOPp->BRAM3_din[1U] = 
                                ((0xffU & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                     [3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                      [2U])))) 
                                           >> 0x18U)) 
                                 | (0xffffff00U & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                              [3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                               [2U]))) 
                                                            >> 0x20U)) 
                                                   << 8U)));
                            vlTOPp->BRAM3_din[2U] = 
                                (0xffU & ((IData)((
                                                   (((QData)((IData)(
                                                                     vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                     [3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                      [2U]))) 
                                                   >> 0x20U)) 
                                          >> 0x18U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM0_ren = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->BRAM0_ren = 1U;
        }
    }
    vlTOPp->BRAM1_ren = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->BRAM1_ren = 1U;
        }
    }
    vlTOPp->BRAM2_din[0U] = 0U;
    vlTOPp->BRAM2_din[1U] = 0U;
    vlTOPp->BRAM2_din[2U] = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                        if (vlTOPp->I_Cache_Controller__DOT__random_bit) {
                            vlTOPp->BRAM2_din[0U] = 
                                ((0xffffff00U & ((IData)(
                                                         (((QData)((IData)(
                                                                           vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                           [1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                            [0U])))) 
                                                 << 8U)) 
                                 | (0xffU & (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)));
                            vlTOPp->BRAM2_din[1U] = 
                                ((0xffU & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                     [1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                      [0U])))) 
                                           >> 0x18U)) 
                                 | (0xffffff00U & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                              [1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                               [0U]))) 
                                                            >> 0x20U)) 
                                                   << 8U)));
                            vlTOPp->BRAM2_din[2U] = 
                                (0xffU & ((IData)((
                                                   (((QData)((IData)(
                                                                     vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                     [1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->I_Cache_Controller__DOT__word_buffer
                                                                      [0U]))) 
                                                   >> 0x20U)) 
                                          >> 0x18U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM2_ren = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->BRAM2_ren = 1U;
        }
    }
    vlTOPp->BRAM0_raddr = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->BRAM0_raddr = (0x1ffU & (vlTOPp->CPU_addr 
                                             >> 4U));
        }
    }
    vlTOPp->BRAM3_raddr = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->BRAM3_raddr = (0x1ffU & (vlTOPp->CPU_addr 
                                             >> 4U));
        }
    }
    vlTOPp->BRAM1_raddr = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->BRAM1_raddr = (0x1ffU & (vlTOPp->CPU_addr 
                                             >> 4U));
        }
    }
    vlTOPp->BRAM2_raddr = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->BRAM2_raddr = (0x1ffU & (vlTOPp->CPU_addr 
                                             >> 4U));
        }
    }
    vlTOPp->cache_hit = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if (((vlTOPp->BRAM1_dout[0U] >> 7U) & (
                                                   ((0x7f00U 
                                                     & (vlTOPp->BRAM1_dout[0U] 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlTOPp->BRAM0_dout[0U])) 
                                                   == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))) {
                vlTOPp->cache_hit = 1U;
            } else {
                if (((vlTOPp->BRAM3_dout[0U] >> 7U) 
                     & (((0x7f00U & (vlTOPp->BRAM3_dout[0U] 
                                     << 8U)) | (0xffU 
                                                & vlTOPp->BRAM2_dout[0U])) 
                        == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))) {
                    vlTOPp->cache_hit = 1U;
                }
            }
        }
    }
    vlTOPp->EMEM_burst_len = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    vlTOPp->EMEM_burst_len = 3U;
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    vlTOPp->EMEM_burst_len = 3U;
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        vlTOPp->EMEM_burst_len = 3U;
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            vlTOPp->EMEM_burst_len = 3U;
                        } else {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                vlTOPp->EMEM_burst_len = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_0 = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    if (vlTOPp->EMEM_ready) {
                        vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_0 = 1U;
                    }
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    if (vlTOPp->EMEM_ready) {
                        vlTOPp->I_Cache_Controller__DOT__word_buffer_wen_0 = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->I_Cache_Controller__DOT__burst_counter_plus = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    if (vlTOPp->EMEM_ready) {
                        vlTOPp->I_Cache_Controller__DOT__burst_counter_plus = 1U;
                    }
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    if (vlTOPp->EMEM_ready) {
                        vlTOPp->I_Cache_Controller__DOT__burst_counter_plus = 1U;
                    }
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        if (vlTOPp->EMEM_ready) {
                            vlTOPp->I_Cache_Controller__DOT__burst_counter_plus = 1U;
                        }
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            if (vlTOPp->EMEM_ready) {
                                vlTOPp->I_Cache_Controller__DOT__burst_counter_plus = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->I_Cache_Controller__DOT__burst_counter_reset = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    if ((1U & (~ (IData)(vlTOPp->EMEM_ready)))) {
                        vlTOPp->I_Cache_Controller__DOT__burst_counter_reset = 1U;
                    }
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    if ((1U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        if ((2U != (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                if (vlTOPp->EMEM_ready) {
                                    vlTOPp->I_Cache_Controller__DOT__burst_counter_reset = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[0U] = 0U;
    vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[1U] = 0U;
    vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[2U] = 0U;
    vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[3U] = 0U;
    if ((0U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    if (vlTOPp->EMEM_ready) {
                        vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[0U] 
                            = vlTOPp->EMEM_rdata;
                    }
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    if (vlTOPp->EMEM_ready) {
                        vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[0U] 
                            = vlTOPp->EMEM_rdata;
                    }
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        if (vlTOPp->EMEM_ready) {
                            vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[1U] 
                                = vlTOPp->EMEM_rdata;
                        }
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            if (vlTOPp->EMEM_ready) {
                                vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[2U] 
                                    = vlTOPp->EMEM_rdata;
                            }
                        } else {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                if (vlTOPp->EMEM_ready) {
                                    vlTOPp->I_Cache_Controller__DOT__word_buffer_wdata[3U] 
                                        = vlTOPp->EMEM_rdata;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->EMEM_wstrb = 0xfU;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->CPU_valid) & 
                       (0U == (IData)(vlTOPp->CPU_wstrb))) 
                      & (IData)(vlTOPp->CPU_instr))))) {
            if ((((IData)(vlTOPp->CPU_valid) & (0U 
                                                == (IData)(vlTOPp->CPU_wstrb))) 
                 & (~ (IData)(vlTOPp->CPU_instr)))) {
                vlTOPp->EMEM_wstrb = vlTOPp->CPU_wstrb;
            } else {
                if (vlTOPp->CPU_valid) {
                    vlTOPp->EMEM_wstrb = vlTOPp->CPU_wstrb;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    vlTOPp->EMEM_wstrb = 0U;
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    vlTOPp->EMEM_wstrb = 0U;
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        vlTOPp->EMEM_wstrb = 0U;
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            vlTOPp->EMEM_wstrb = 0U;
                        } else {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                vlTOPp->EMEM_wstrb = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((6U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                        vlTOPp->EMEM_wstrb = vlTOPp->CPU_wstrb;
                    } else {
                        if ((4U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                            vlTOPp->EMEM_wstrb = vlTOPp->CPU_wstrb;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->EMEM_burst_en = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->CPU_valid) & 
                       (0U == (IData)(vlTOPp->CPU_wstrb))) 
                      & (IData)(vlTOPp->CPU_instr))))) {
            if ((((IData)(vlTOPp->CPU_valid) & (0U 
                                                == (IData)(vlTOPp->CPU_wstrb))) 
                 & (~ (IData)(vlTOPp->CPU_instr)))) {
                vlTOPp->EMEM_burst_en = 0U;
            } else {
                if (vlTOPp->CPU_valid) {
                    vlTOPp->EMEM_burst_en = 0U;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    vlTOPp->EMEM_burst_en = 1U;
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    vlTOPp->EMEM_burst_en = 1U;
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        vlTOPp->EMEM_burst_en = 1U;
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            vlTOPp->EMEM_burst_en = 1U;
                        } else {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                vlTOPp->EMEM_burst_en = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((6U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                        vlTOPp->EMEM_burst_en = 0U;
                    } else {
                        if ((4U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                            vlTOPp->EMEM_burst_en = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->EMEM_valid = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->CPU_valid) & 
                       (0U == (IData)(vlTOPp->CPU_wstrb))) 
                      & (IData)(vlTOPp->CPU_instr))))) {
            if ((((IData)(vlTOPp->CPU_valid) & (0U 
                                                == (IData)(vlTOPp->CPU_wstrb))) 
                 & (~ (IData)(vlTOPp->CPU_instr)))) {
                vlTOPp->EMEM_valid = 1U;
            } else {
                if (vlTOPp->CPU_valid) {
                    vlTOPp->EMEM_valid = 1U;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    vlTOPp->EMEM_valid = 1U;
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    vlTOPp->EMEM_valid = 1U;
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        vlTOPp->EMEM_valid = 1U;
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            vlTOPp->EMEM_valid = 1U;
                        } else {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                vlTOPp->EMEM_valid = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((6U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                        vlTOPp->EMEM_valid = 1U;
                    } else {
                        if ((4U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                            vlTOPp->EMEM_valid = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->CPU_ready = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->CPU_valid) & 
                       (0U == (IData)(vlTOPp->CPU_wstrb))) 
                      & (IData)(vlTOPp->CPU_instr))))) {
            if ((((IData)(vlTOPp->CPU_valid) & (0U 
                                                == (IData)(vlTOPp->CPU_wstrb))) 
                 & (~ (IData)(vlTOPp->CPU_instr)))) {
                if (vlTOPp->EMEM_ready) {
                    vlTOPp->CPU_ready = 1U;
                }
            } else {
                if (vlTOPp->CPU_valid) {
                    if (vlTOPp->EMEM_ready) {
                        vlTOPp->CPU_ready = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if (((vlTOPp->BRAM1_dout[0U] >> 7U) & (
                                                   ((0x7f00U 
                                                     & (vlTOPp->BRAM1_dout[0U] 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlTOPp->BRAM0_dout[0U])) 
                                                   == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))) {
                vlTOPp->CPU_ready = 1U;
            } else {
                if (((vlTOPp->BRAM3_dout[0U] >> 7U) 
                     & (((0x7f00U & (vlTOPp->BRAM3_dout[0U] 
                                     << 8U)) | (0xffU 
                                                & vlTOPp->BRAM2_dout[0U])) 
                        == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))) {
                    vlTOPp->CPU_ready = 1U;
                }
            }
        } else {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                        vlTOPp->CPU_ready = vlTOPp->EMEM_ready;
                    } else {
                        if ((4U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                            vlTOPp->CPU_ready = vlTOPp->EMEM_ready;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->EMEM_wdata = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->CPU_valid) & 
                       (0U == (IData)(vlTOPp->CPU_wstrb))) 
                      & (IData)(vlTOPp->CPU_instr))))) {
            if ((((IData)(vlTOPp->CPU_valid) & (0U 
                                                == (IData)(vlTOPp->CPU_wstrb))) 
                 & (~ (IData)(vlTOPp->CPU_instr)))) {
                vlTOPp->EMEM_wdata = vlTOPp->CPU_wdata;
            } else {
                if (vlTOPp->CPU_valid) {
                    vlTOPp->EMEM_wdata = vlTOPp->CPU_wdata;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    vlTOPp->EMEM_wdata = vlTOPp->CPU_wdata;
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    vlTOPp->EMEM_wdata = vlTOPp->CPU_wdata;
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        vlTOPp->EMEM_wdata = vlTOPp->CPU_wdata;
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            vlTOPp->EMEM_wdata = vlTOPp->CPU_wdata;
                        } else {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                vlTOPp->EMEM_wdata 
                                    = vlTOPp->CPU_wdata;
                            }
                        }
                    }
                }
            } else {
                if ((6U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                        vlTOPp->EMEM_wdata = vlTOPp->CPU_wdata;
                    } else {
                        if ((4U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                            vlTOPp->EMEM_wdata = vlTOPp->CPU_wdata;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->EMEM_addr = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->CPU_valid) & 
                       (0U == (IData)(vlTOPp->CPU_wstrb))) 
                      & (IData)(vlTOPp->CPU_instr))))) {
            if ((((IData)(vlTOPp->CPU_valid) & (0U 
                                                == (IData)(vlTOPp->CPU_wstrb))) 
                 & (~ (IData)(vlTOPp->CPU_instr)))) {
                vlTOPp->EMEM_addr = vlTOPp->CPU_addr;
            } else {
                if (vlTOPp->CPU_valid) {
                    vlTOPp->EMEM_addr = vlTOPp->CPU_addr;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if ((1U & (~ ((vlTOPp->BRAM1_dout[0U] >> 7U) 
                          & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                          << 8U)) | 
                              (0xffU & vlTOPp->BRAM0_dout[0U])) 
                             == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                if ((1U & (~ ((vlTOPp->BRAM3_dout[0U] 
                               >> 7U) & (((0x7f00U 
                                           & (vlTOPp->BRAM3_dout[0U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->BRAM2_dout[0U])) 
                                         == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))))) {
                    vlTOPp->EMEM_addr = (0xffffff0U 
                                         & vlTOPp->CPU_addr);
                }
            }
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    vlTOPp->EMEM_addr = (0xffffff0U 
                                         & vlTOPp->CPU_addr);
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        vlTOPp->EMEM_addr = (0xffffff0U 
                                             & vlTOPp->CPU_addr);
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            vlTOPp->EMEM_addr = (0xffffff0U 
                                                 & vlTOPp->CPU_addr);
                        } else {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                vlTOPp->EMEM_addr = 
                                    (0xffffff0U & vlTOPp->CPU_addr);
                            }
                        }
                    }
                }
            } else {
                if ((6U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                        vlTOPp->EMEM_addr = vlTOPp->CPU_addr;
                    } else {
                        if ((4U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                            vlTOPp->EMEM_addr = vlTOPp->CPU_addr;
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((((IData)(vlTOPp->CPU_valid) & (0U == (IData)(vlTOPp->CPU_wstrb))) 
             & (IData)(vlTOPp->CPU_instr))) {
            vlTOPp->I_Cache_Controller__DOT__main_next = 1U;
        } else {
            if ((((IData)(vlTOPp->CPU_valid) & (0U 
                                                == (IData)(vlTOPp->CPU_wstrb))) 
                 & (~ (IData)(vlTOPp->CPU_instr)))) {
                vlTOPp->I_Cache_Controller__DOT__main_next = 3U;
                if (vlTOPp->EMEM_ready) {
                    vlTOPp->I_Cache_Controller__DOT__main_next = 0U;
                }
            } else {
                if (vlTOPp->CPU_valid) {
                    vlTOPp->I_Cache_Controller__DOT__main_next = 4U;
                    if (vlTOPp->EMEM_ready) {
                        vlTOPp->I_Cache_Controller__DOT__main_next = 0U;
                    }
                } else {
                    vlTOPp->I_Cache_Controller__DOT__main_next = 0U;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            vlTOPp->I_Cache_Controller__DOT__main_next 
                = (((vlTOPp->BRAM1_dout[0U] >> 7U) 
                    & (((0x7f00U & (vlTOPp->BRAM1_dout[0U] 
                                    << 8U)) | (0xffU 
                                               & vlTOPp->BRAM0_dout[0U])) 
                       == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))
                    ? 0U : (((vlTOPp->BRAM3_dout[0U] 
                              >> 7U) & (((0x7f00U & 
                                          (vlTOPp->BRAM3_dout[0U] 
                                           << 8U)) 
                                         | (0xffU & 
                                            vlTOPp->BRAM2_dout[0U])) 
                                        == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))
                             ? 0U : 5U));
        } else {
            if ((5U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                    vlTOPp->I_Cache_Controller__DOT__main_next = 5U;
                } else {
                    if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                        vlTOPp->I_Cache_Controller__DOT__main_next = 5U;
                    } else {
                        if ((2U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                            vlTOPp->I_Cache_Controller__DOT__main_next = 5U;
                        } else {
                            if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__burst_counter))) {
                                vlTOPp->I_Cache_Controller__DOT__main_next 
                                    = ((IData)(vlTOPp->EMEM_ready)
                                        ? 6U : 5U);
                            }
                        }
                    }
                }
            } else {
                if ((6U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    vlTOPp->I_Cache_Controller__DOT__main_next = 0U;
                } else {
                    if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                        vlTOPp->I_Cache_Controller__DOT__main_next 
                            = ((IData)(vlTOPp->EMEM_ready)
                                ? 0U : 3U);
                    } else {
                        if ((4U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                            vlTOPp->I_Cache_Controller__DOT__main_next 
                                = ((IData)(vlTOPp->EMEM_ready)
                                    ? 0U : 4U);
                        }
                    }
                }
            }
        }
    }
    vlTOPp->CPU_rdata = 0U;
    if ((0U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
        if ((1U & (~ (((IData)(vlTOPp->CPU_valid) & 
                       (0U == (IData)(vlTOPp->CPU_wstrb))) 
                      & (IData)(vlTOPp->CPU_instr))))) {
            if ((((IData)(vlTOPp->CPU_valid) & (0U 
                                                == (IData)(vlTOPp->CPU_wstrb))) 
                 & (~ (IData)(vlTOPp->CPU_instr)))) {
                if (vlTOPp->EMEM_ready) {
                    vlTOPp->CPU_rdata = vlTOPp->EMEM_rdata;
                }
            }
        }
    } else {
        if ((1U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
            if (((vlTOPp->BRAM1_dout[0U] >> 7U) & (
                                                   ((0x7f00U 
                                                     & (vlTOPp->BRAM1_dout[0U] 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlTOPp->BRAM0_dout[0U])) 
                                                   == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))) {
                vlTOPp->CPU_rdata = ((8U & vlTOPp->CPU_addr)
                                      ? ((4U & vlTOPp->CPU_addr)
                                          ? ((vlTOPp->BRAM1_dout[2U] 
                                              << 0x18U) 
                                             | (vlTOPp->BRAM1_dout[1U] 
                                                >> 8U))
                                          : ((vlTOPp->BRAM1_dout[1U] 
                                              << 0x18U) 
                                             | (vlTOPp->BRAM1_dout[0U] 
                                                >> 8U)))
                                      : ((4U & vlTOPp->CPU_addr)
                                          ? ((vlTOPp->BRAM0_dout[2U] 
                                              << 0x18U) 
                                             | (vlTOPp->BRAM0_dout[1U] 
                                                >> 8U))
                                          : ((vlTOPp->BRAM0_dout[1U] 
                                              << 0x18U) 
                                             | (vlTOPp->BRAM0_dout[0U] 
                                                >> 8U))));
            } else {
                if (((vlTOPp->BRAM3_dout[0U] >> 7U) 
                     & (((0x7f00U & (vlTOPp->BRAM3_dout[0U] 
                                     << 8U)) | (0xffU 
                                                & vlTOPp->BRAM2_dout[0U])) 
                        == (IData)(vlTOPp->I_Cache_Controller__DOT__cpu_I_tag)))) {
                    vlTOPp->CPU_rdata = ((8U & vlTOPp->CPU_addr)
                                          ? ((4U & vlTOPp->CPU_addr)
                                              ? ((vlTOPp->BRAM3_dout[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->BRAM3_dout[1U] 
                                                    >> 8U))
                                              : ((vlTOPp->BRAM3_dout[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->BRAM3_dout[0U] 
                                                    >> 8U)))
                                          : ((4U & vlTOPp->CPU_addr)
                                              ? ((vlTOPp->BRAM2_dout[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->BRAM2_dout[1U] 
                                                    >> 8U))
                                              : ((vlTOPp->BRAM2_dout[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->BRAM2_dout[0U] 
                                                    >> 8U))));
                }
            }
        } else {
            if ((5U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                if ((6U != (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                    if ((3U == (IData)(vlTOPp->I_Cache_Controller__DOT__main_state))) {
                        vlTOPp->CPU_rdata = ((IData)(vlTOPp->EMEM_ready)
                                              ? vlTOPp->EMEM_rdata
                                              : 0U);
                    }
                }
            }
        }
    }
}

void VI_Cache_Controller::_eval_initial(VI_Cache_Controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI_Cache_Controller::_eval_initial\n"); );
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__resetn = vlTOPp->resetn;
}

void VI_Cache_Controller::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI_Cache_Controller::final\n"); );
    // Variables
    VI_Cache_Controller__Syms* __restrict vlSymsp = this->__VlSymsp;
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VI_Cache_Controller::_eval_settle(VI_Cache_Controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI_Cache_Controller::_eval_settle\n"); );
    VI_Cache_Controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VI_Cache_Controller::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VI_Cache_Controller::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    resetn = VL_RAND_RESET_I(1);
    CPU_valid = VL_RAND_RESET_I(1);
    CPU_instr = VL_RAND_RESET_I(1);
    CPU_ready = VL_RAND_RESET_I(1);
    CPU_addr = VL_RAND_RESET_I(32);
    CPU_wdata = VL_RAND_RESET_I(32);
    CPU_wstrb = VL_RAND_RESET_I(4);
    CPU_rdata = VL_RAND_RESET_I(32);
    EMEM_valid = VL_RAND_RESET_I(1);
    EMEM_ready = VL_RAND_RESET_I(1);
    EMEM_addr = VL_RAND_RESET_I(32);
    EMEM_wdata = VL_RAND_RESET_I(32);
    EMEM_wstrb = VL_RAND_RESET_I(4);
    EMEM_rdata = VL_RAND_RESET_I(32);
    EMEM_burst_len = VL_RAND_RESET_I(8);
    EMEM_burst_en = VL_RAND_RESET_I(1);
    BRAM0_wen = VL_RAND_RESET_I(1);
    BRAM0_wstrb = VL_RAND_RESET_I(8);
    BRAM0_waddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(72, BRAM0_din);
    BRAM0_ren = VL_RAND_RESET_I(1);
    BRAM0_raddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(72, BRAM0_dout);
    BRAM1_wen = VL_RAND_RESET_I(1);
    BRAM1_wstrb = VL_RAND_RESET_I(8);
    BRAM1_waddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(72, BRAM1_din);
    BRAM1_ren = VL_RAND_RESET_I(1);
    BRAM1_raddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(72, BRAM1_dout);
    BRAM2_wen = VL_RAND_RESET_I(1);
    BRAM2_wstrb = VL_RAND_RESET_I(8);
    BRAM2_waddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(72, BRAM2_din);
    BRAM2_ren = VL_RAND_RESET_I(1);
    BRAM2_raddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(72, BRAM2_dout);
    BRAM3_wen = VL_RAND_RESET_I(1);
    BRAM3_wstrb = VL_RAND_RESET_I(8);
    BRAM3_waddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(72, BRAM3_din);
    BRAM3_ren = VL_RAND_RESET_I(1);
    BRAM3_raddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(72, BRAM3_dout);
    cache_hit = VL_RAND_RESET_I(1);
    I_Cache_Controller__DOT__main_state = VL_RAND_RESET_I(4);
    I_Cache_Controller__DOT__main_next = VL_RAND_RESET_I(4);
    I_Cache_Controller__DOT__cpu_tag_save = VL_RAND_RESET_I(1);
    I_Cache_Controller__DOT__cpu_I_tag = VL_RAND_RESET_I(15);
    I_Cache_Controller__DOT__burst_counter = VL_RAND_RESET_I(4);
    I_Cache_Controller__DOT__burst_counter_reset = VL_RAND_RESET_I(1);
    I_Cache_Controller__DOT__burst_counter_plus = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            I_Cache_Controller__DOT__word_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            I_Cache_Controller__DOT__word_buffer_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }}
    I_Cache_Controller__DOT__word_buffer_wen_0 = VL_RAND_RESET_I(1);
    I_Cache_Controller__DOT__word_buffer_wen_1 = VL_RAND_RESET_I(1);
    I_Cache_Controller__DOT__word_buffer_wen_2 = VL_RAND_RESET_I(1);
    I_Cache_Controller__DOT__word_buffer_wen_3 = VL_RAND_RESET_I(1);
    I_Cache_Controller__DOT__random_bit = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
