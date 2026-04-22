// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCompressed_Data_FIFO.h for the primary calling header

#include "VCompressed_Data_FIFO.h"
#include "VCompressed_Data_FIFO__Syms.h"

//==========

VL_CTOR_IMP(VCompressed_Data_FIFO) {
    VCompressed_Data_FIFO__Syms* __restrict vlSymsp = __VlSymsp = new VCompressed_Data_FIFO__Syms(this, name());
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCompressed_Data_FIFO::__Vconfigure(VCompressed_Data_FIFO__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VCompressed_Data_FIFO::~VCompressed_Data_FIFO() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VCompressed_Data_FIFO::_settle__TOP__2(VCompressed_Data_FIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCompressed_Data_FIFO::_settle__TOP__2\n"); );
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Character_Layer1_r_master = (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter));
    vlTOPp->Character_Layer2_r_master = (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter));
    vlTOPp->Character_Layer3_r_master = (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter));
    vlTOPp->Character_Layer4_r_master = (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter));
    vlTOPp->Script_Layer_r_master = (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter));
    vlTOPp->Status_Layer_r_master = (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter));
    vlTOPp->Universal_Layer1_r_master = (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter));
    vlTOPp->Universal_Layer2_r_master = (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter));
    vlTOPp->Background_Layer1_count = vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count;
    vlTOPp->Background_Layer2_count = vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count;
    vlTOPp->Character_Layer1_count = vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count;
    vlTOPp->Character_Layer2_count = vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count;
    vlTOPp->Character_Layer3_count = vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count;
    vlTOPp->Character_Layer4_count = vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count;
    vlTOPp->Script_Layer_count = vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count;
    vlTOPp->Status_Layer_count = vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count;
    vlTOPp->Universal_Layer1_count = vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count;
    vlTOPp->Universal_Layer2_count = vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count;
    vlTOPp->Universal_Layer2_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
                vlTOPp->Universal_Layer2_data = vlTOPp->BRAM7_dout_b;
            }
        }
    }
    vlTOPp->Universal_Layer1_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
        if ((1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
            vlTOPp->Universal_Layer1_data = vlTOPp->BRAM7_dout_b;
        }
    }
    vlTOPp->Status_Layer_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
            if ((2U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
                if ((3U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
                    if ((4U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
                        vlTOPp->Status_Layer_data = vlTOPp->BRAM7_dout_b;
                    }
                }
            }
        }
    }
    vlTOPp->Script_Layer_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
            if ((2U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
                if ((3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state))) {
                    vlTOPp->Script_Layer_data = vlTOPp->BRAM7_dout_b;
                }
            }
        }
    }
    vlTOPp->Character_Layer4_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
            if ((2U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
                if ((3U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
                    if ((4U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
                        vlTOPp->Character_Layer4_data 
                            = vlTOPp->BRAM8_dout_b;
                    }
                }
            }
        }
    }
    vlTOPp->Character_Layer3_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
            if ((2U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
                if ((3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
                    vlTOPp->Character_Layer3_data = vlTOPp->BRAM8_dout_b;
                }
            }
        }
    }
    vlTOPp->Character_Layer2_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
                vlTOPp->Character_Layer2_data = vlTOPp->BRAM8_dout_b;
            }
        }
    }
    vlTOPp->Character_Layer1_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
        if ((1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state))) {
            vlTOPp->Character_Layer1_data = vlTOPp->BRAM8_dout_b;
        }
    }
    vlTOPp->Background_Layer2_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state))) {
                vlTOPp->Background_Layer2_data = vlTOPp->BRAM9_dout_b;
            }
        }
    }
    vlTOPp->Background_Layer1_data = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state))) {
        if ((1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state))) {
            vlTOPp->Background_Layer1_data = vlTOPp->BRAM9_dout_b;
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Character_Layer4_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Character_Layer3_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Character_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Character_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Script_Layer_dequeue) & (0U 
                                                   != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Status_Layer_dequeue) & (0U 
                                                   != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Universal_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Universal_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_dec_want = 1U;
    }
    vlTOPp->BRAM9_we_a = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_we_a = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_we_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM9_en_a = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_en_a = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_en_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                if (
                                                    (0x40U 
                                                     & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                                    vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_inc_want = 1U;
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
    vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                                vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_inc_want = 1U;
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
    vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                            vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_inc_want = 1U;
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
    vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                        vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_inc_want = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                    vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_inc_want = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((2U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_inc_want = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_inc_want = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                         >> 6U)))) {
                                                    vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_inc_want = 1U;
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
    vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & (~ ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                           >> 1U)) 
                                       | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 2U)) | 
                                      ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                       >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 4U)) 
                                    | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                       >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 6U)) 
                                  | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     >> 7U))))) {
                        if ((0x100U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_inc_want = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & (~ ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                           >> 1U)) 
                                       | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 2U)) | 
                                      ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                       >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 4U)) 
                                    | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                       >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 6U)) 
                                  | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     >> 7U))))) {
                        if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 8U)))) {
                            if ((0x200U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_inc_want = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM7_en_a = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_en_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_en_a = 1U;
                        } else {
                            if ((0x200U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_en_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM7_we_a = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_we_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_we_a = 1U;
                        } else {
                            if ((0x200U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_we_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM8_en_a = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_en_a = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_en_a = 1U;
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_en_a = 1U;
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
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
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_we_a = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_we_a = 1U;
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_we_a = 1U;
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
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
    vlTOPp->BRAM9_addr_a = 0U;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_addr_a = 
                                (0xffU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_rear));
                        } else {
                            if ((2U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_addr_a 
                                    = (0x100U | (0xffU 
                                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_rear)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM9_din_a = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_din_a = (
                                                   ((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)));
                        } else {
                            if ((2U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_din_a 
                                    = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM7_din_a = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_din_a 
                                                    = 
                                                    ((0x40U 
                                                      & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))
                                                      ? 
                                                     (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)))
                                                      : 
                                                     (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_din_a = (
                                                   ((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)));
                        } else {
                            if ((0x200U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_din_a 
                                    = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM8_din_a = 0ULL;
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_din_a 
                                        = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)));
                                } else {
                                    if ((8U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_din_a 
                                            = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)));
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_din_a 
                                                = (
                                                   ((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)));
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                                vlTOPp->BRAM8_din_a 
                                                    = 
                                                    (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlTOPp->Compressed_Data_FIFO__DOT__tem_32_reg)));
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
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_addr_a 
                                        = (0x7fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_rear));
                                } else {
                                    if ((8U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_addr_a 
                                            = (0x1ffU 
                                               & ((IData)(0x80U) 
                                                  + 
                                                  (0x7fU 
                                                   & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_rear))));
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_addr_a 
                                                = (0x1ffU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0x7fU 
                                                       & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_rear))));
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                                vlTOPp->BRAM8_addr_a 
                                                    = 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        + 
                                                        (0x7fU 
                                                         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_rear))));
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
    if ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_addr_a 
                                                    = 
                                                    (0x1ffU 
                                                     & ((0x40U 
                                                         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))
                                                         ? 
                                                        ((IData)(0x100U) 
                                                         + 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_rear)))
                                                         : 
                                                        ((IData)(0x180U) 
                                                         + 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_rear)))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_addr_a = 
                                (0x7fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_rear));
                        } else {
                            if ((0x200U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_addr_a 
                                    = (0x1ffU & ((IData)(0x80U) 
                                                 + 
                                                 (0x7fU 
                                                  & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_rear))));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state_next = 0U;
    if ((((IData)(vlTOPp->Character_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state_next = 1U;
    }
    if ((((IData)(vlTOPp->Character_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state_next = 2U;
    }
    if ((((IData)(vlTOPp->Character_Layer3_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state_next = 3U;
    }
    if ((((IData)(vlTOPp->Character_Layer4_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM8_read_state_next = 4U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state_next = 0U;
    if ((((IData)(vlTOPp->Script_Layer_dequeue) & (0U 
                                                   != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state_next = 3U;
    }
    if ((((IData)(vlTOPp->Status_Layer_dequeue) & (0U 
                                                   != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state_next = 4U;
    }
    if ((((IData)(vlTOPp->Universal_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state_next = 1U;
    }
    if ((((IData)(vlTOPp->Universal_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM7_read_state_next = 2U;
    }
    vlTOPp->BRAM8_en_b = 0U;
    if ((((IData)(vlTOPp->Character_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlTOPp->Character_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlTOPp->Character_Layer3_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlTOPp->Character_Layer4_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    vlTOPp->BRAM7_en_b = 0U;
    if ((((IData)(vlTOPp->Script_Layer_dequeue) & (0U 
                                                   != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlTOPp->Status_Layer_dequeue) & (0U 
                                                   != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlTOPp->Universal_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlTOPp->Universal_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    vlTOPp->BRAM8_addr_b = 0U;
    if ((((IData)(vlTOPp->Character_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM8_addr_b = (0x7fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_front));
    }
    if ((((IData)(vlTOPp->Character_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x80U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_front))));
    }
    if ((((IData)(vlTOPp->Character_Layer3_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_front))));
    }
    if ((((IData)(vlTOPp->Character_Layer4_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x180U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_front))));
    }
    vlTOPp->BRAM7_addr_b = 0U;
    if ((((IData)(vlTOPp->Script_Layer_dequeue) & (0U 
                                                   != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_front))));
    }
    if ((((IData)(vlTOPp->Status_Layer_dequeue) & (0U 
                                                   != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x180U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_front))));
    }
    if ((((IData)(vlTOPp->Universal_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM7_addr_b = (0x7fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_front));
    }
    if ((((IData)(vlTOPp->Universal_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x80U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_front))));
    }
    vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer = 0U;
    vlTOPp->Compressed_Data_FIFO__DOT__urgent_req = 
        ((((0x40U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count)) 
           & (IData)(vlTOPp->Background_Layer1_ena)) 
          << 9U) | ((((0x40U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count)) 
                      & (IData)(vlTOPp->Background_Layer2_ena)) 
                     << 8U) | ((((0x20U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count)) 
                                 & (IData)(vlTOPp->Character_Layer1_ena)) 
                                << 7U) | ((((0x20U 
                                             >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count)) 
                                            & (IData)(vlTOPp->Character_Layer2_ena)) 
                                           << 6U) | 
                                          ((((0x20U 
                                              >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count)) 
                                             & (IData)(vlTOPp->Character_Layer3_ena)) 
                                            << 5U) 
                                           | ((((0x20U 
                                                 >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count)) 
                                                & (IData)(vlTOPp->Character_Layer4_ena)) 
                                               << 4U) 
                                              | ((((0x20U 
                                                    >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count)) 
                                                   & (IData)(vlTOPp->Script_Layer_ena)) 
                                                  << 3U) 
                                                 | ((((0x20U 
                                                       >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count)) 
                                                      & (IData)(vlTOPp->Status_Layer_ena)) 
                                                     << 2U) 
                                                    | ((((0x20U 
                                                          >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count)) 
                                                         & (IData)(vlTOPp->Universal_Layer1_ena)) 
                                                        << 1U) 
                                                       | ((0x20U 
                                                           >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count)) 
                                                          & (IData)(vlTOPp->Universal_Layer2_ena)))))))))));
    vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode 
        = (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__urgent_req));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x3feU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | ((IData)(vlTOPp->Background_Layer1_ena) 
            & (0xf0U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count))));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x3fdU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Background_Layer2_ena) 
             & (0xf0U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count))) 
            << 1U));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x3fbU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Character_Layer1_ena) 
             & (0x70U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char1_fifo_count))) 
            << 2U));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x3f7U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Character_Layer2_ena) 
             & (0x70U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char2_fifo_count))) 
            << 3U));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x3efU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Character_Layer3_ena) 
             & (0x70U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char3_fifo_count))) 
            << 4U));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x3dfU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Character_Layer4_ena) 
             & (0x70U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__char4_fifo_count))) 
            << 5U));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x3bfU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Script_Layer_ena) & (0x70U 
                                                  >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__script_fifo_count))) 
            << 6U));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x37fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Status_Layer_ena) & (0x70U 
                                                  >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__status_fifo_count))) 
            << 7U));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x2ffU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Universal_Layer1_ena) 
             & (0x70U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni1_fifo_count))) 
            << 8U));
    vlTOPp->Compressed_Data_FIFO__DOT__basic_req = 
        ((0x1ffU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)) 
         | (((IData)(vlTOPp->Universal_Layer2_ena) 
             & (0x70U >= (IData)(vlTOPp->Compressed_Data_FIFO__DOT__uni2_fifo_count))) 
            << 9U));
    vlTOPp->Compressed_Data_FIFO__DOT__valid_req = 
        ((0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__urgent_req))
          ? (IData)(vlTOPp->Compressed_Data_FIFO__DOT__basic_req)
          : (IData)(vlTOPp->Compressed_Data_FIFO__DOT__urgent_req));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x3feU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (1U & ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                   ? ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                      & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent)))
                   : ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                      & (~ (IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic))))));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x3fdU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (2U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                    ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                        >> 1U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                     >> 1U))) : (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                                                  >> 1U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                                     >> 1U)))) 
                  << 1U)));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x3fbU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (4U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                    ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                        >> 2U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                     >> 2U))) : (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                                                  >> 2U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                                     >> 2U)))) 
                  << 2U)));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x3f7U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (8U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                    ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                        >> 3U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                     >> 3U))) : (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                                                  >> 3U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                                     >> 3U)))) 
                  << 3U)));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x3efU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (0x10U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                       ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                           >> 4U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                        >> 4U))) : 
                      (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                        >> 4U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                     >> 4U)))) << 4U)));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x3dfU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (0x20U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                       ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                           >> 5U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                        >> 5U))) : 
                      (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                        >> 5U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                     >> 5U)))) << 5U)));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x3bfU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (0x40U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                       ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                           >> 6U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                        >> 6U))) : 
                      (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                        >> 6U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                     >> 6U)))) << 6U)));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x37fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (0x80U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                       ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                           >> 7U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                        >> 7U))) : 
                      (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                        >> 7U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                     >> 7U)))) << 7U)));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x2ffU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (0x100U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                        ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                            >> 8U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                         >> 8U))) : 
                       (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                         >> 8U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                      >> 8U)))) << 8U)));
    vlTOPp->Compressed_Data_FIFO__DOT__masked_req = 
        ((0x1ffU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)) 
         | (0x200U & (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__is_urgent_mode)
                        ? (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                            >> 9U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_urgent) 
                                         >> 9U))) : 
                       (((IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req) 
                         >> 9U) & (~ ((IData)(vlTOPp->Compressed_Data_FIFO__DOT__last_read_basic) 
                                      >> 9U)))) << 9U)));
    if ((1U & ((((((((IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req) 
                     | (2U == (3U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))) 
                    | (4U == (7U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))) 
                   | (8U == (0xfU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))) 
                  | (0x10U == (0x1fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))) 
                 | (0x20U == (0x3fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))) 
                | (0x40U == (0x7fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))) 
               | (0x80U == (0xffU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))))) {
        vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer 
            = ((1U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req))
                ? (1U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))
                : ((2U == (3U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))
                    ? (2U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))
                    : ((4U == (7U & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))
                        ? (4U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))
                        : ((8U == (0xfU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))
                            ? (8U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))
                            : ((0x10U == (0x1fU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))
                                ? (0x10U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))
                                : ((0x20U == (0x3fU 
                                              & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))
                                    ? (0x20U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))
                                    : ((0x40U == (0x7fU 
                                                  & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))
                                        ? (0x40U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer))
                                        : (0x80U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer)))))))));
    } else {
        if ((0x100U == (0x1ffU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)))) {
            vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer 
                = (0x100U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer));
        } else {
            if ((0x200U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req))) {
                vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer 
                    = (0x200U | (IData)(vlTOPp->Compressed_Data_FIFO__DOT__next_should_read_layer));
            }
        }
    }
    vlTOPp->Compressed_Data_FIFO__DOT__round_end = 
        ((0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__valid_req)) 
         & (0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__masked_req)));
    vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_r_master 
        = ((0U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)) 
           | (1U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)));
    vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_r_master 
        = ((2U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)) 
           | (3U == (IData)(vlTOPp->Compressed_Data_FIFO__DOT__clk_counter)));
    vlTOPp->Background_Layer1_r_master = vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_r_master;
    vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Background_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_r_master))) {
        vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_dec_want = 1U;
    }
    vlTOPp->Background_Layer2_r_master = vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_r_master;
    vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_dec_want = 0U;
    if ((((IData)(vlTOPp->Background_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_r_master))) {
        vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_dec_want = 1U;
    }
    vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state_next = 0U;
    if ((((IData)(vlTOPp->Background_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_r_master))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state_next = 1U;
    }
    if ((((IData)(vlTOPp->Background_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_r_master))) {
        vlTOPp->Compressed_Data_FIFO__DOT__BRAM9_read_state_next = 2U;
    }
    vlTOPp->BRAM9_en_b = 0U;
    if ((((IData)(vlTOPp->Background_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_r_master))) {
        vlTOPp->BRAM9_en_b = 1U;
    }
    if ((((IData)(vlTOPp->Background_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_r_master))) {
        vlTOPp->BRAM9_en_b = 1U;
    }
    vlTOPp->BRAM9_addr_b = 0U;
    if ((((IData)(vlTOPp->Background_Layer1_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_r_master))) {
        vlTOPp->BRAM9_addr_b = (0xffU & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back1_fifo_front));
    }
    if ((((IData)(vlTOPp->Background_Layer2_dequeue) 
          & (0U != (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_r_master))) {
        vlTOPp->BRAM9_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0xffU 
                                             & (IData)(vlTOPp->Compressed_Data_FIFO__DOT__back2_fifo_front))));
    }
}

void VCompressed_Data_FIFO::_eval_initial(VCompressed_Data_FIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCompressed_Data_FIFO::_eval_initial\n"); );
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__resetn = vlTOPp->resetn;
}

void VCompressed_Data_FIFO::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCompressed_Data_FIFO::final\n"); );
    // Variables
    VCompressed_Data_FIFO__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCompressed_Data_FIFO::_eval_settle(VCompressed_Data_FIFO__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCompressed_Data_FIFO::_eval_settle\n"); );
    VCompressed_Data_FIFO* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VCompressed_Data_FIFO::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCompressed_Data_FIFO::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    resetn = VL_RAND_RESET_I(1);
    PPU_start = VL_RAND_RESET_I(1);
    Universal_Layer1_Address = VL_RAND_RESET_I(32);
    Universal_Layer2_Address = VL_RAND_RESET_I(32);
    Script_Layer_Address = VL_RAND_RESET_I(32);
    Status_Layer_Address = VL_RAND_RESET_I(32);
    Character_Layer1_Address = VL_RAND_RESET_I(32);
    Character_Layer2_Address = VL_RAND_RESET_I(32);
    Character_Layer3_Address = VL_RAND_RESET_I(32);
    Character_Layer4_Address = VL_RAND_RESET_I(32);
    Background_Layer1_Address = VL_RAND_RESET_I(32);
    Background_Layer2_Address = VL_RAND_RESET_I(32);
    EMEM_valid = VL_RAND_RESET_I(1);
    EMEM_ready = VL_RAND_RESET_I(1);
    EMEM_addr = VL_RAND_RESET_I(32);
    EMEM_wdata = VL_RAND_RESET_I(32);
    EMEM_wstrb = VL_RAND_RESET_I(4);
    EMEM_rdata = VL_RAND_RESET_I(32);
    EMEM_burst_len = VL_RAND_RESET_I(8);
    EMEM_burst_en = VL_RAND_RESET_I(1);
    BRAM7_en_a = VL_RAND_RESET_I(1);
    BRAM7_we_a = VL_RAND_RESET_I(1);
    BRAM7_addr_a = VL_RAND_RESET_I(9);
    BRAM7_din_a = VL_RAND_RESET_Q(64);
    BRAM7_en_b = VL_RAND_RESET_I(1);
    BRAM7_addr_b = VL_RAND_RESET_I(9);
    BRAM7_dout_b = VL_RAND_RESET_Q(64);
    BRAM8_en_a = VL_RAND_RESET_I(1);
    BRAM8_we_a = VL_RAND_RESET_I(1);
    BRAM8_addr_a = VL_RAND_RESET_I(9);
    BRAM8_din_a = VL_RAND_RESET_Q(64);
    BRAM8_en_b = VL_RAND_RESET_I(1);
    BRAM8_addr_b = VL_RAND_RESET_I(9);
    BRAM8_dout_b = VL_RAND_RESET_Q(64);
    BRAM9_en_a = VL_RAND_RESET_I(1);
    BRAM9_we_a = VL_RAND_RESET_I(1);
    BRAM9_addr_a = VL_RAND_RESET_I(9);
    BRAM9_din_a = VL_RAND_RESET_Q(64);
    BRAM9_en_b = VL_RAND_RESET_I(1);
    BRAM9_addr_b = VL_RAND_RESET_I(9);
    BRAM9_dout_b = VL_RAND_RESET_Q(64);
    Background_Layer1_ena = VL_RAND_RESET_I(1);
    Background_Layer1_dequeue = VL_RAND_RESET_I(1);
    Background_Layer1_r_master = VL_RAND_RESET_I(1);
    Background_Layer1_data = VL_RAND_RESET_Q(64);
    Background_Layer1_count = VL_RAND_RESET_I(9);
    Background_Layer2_ena = VL_RAND_RESET_I(1);
    Background_Layer2_dequeue = VL_RAND_RESET_I(1);
    Background_Layer2_r_master = VL_RAND_RESET_I(1);
    Background_Layer2_data = VL_RAND_RESET_Q(64);
    Background_Layer2_count = VL_RAND_RESET_I(9);
    Character_Layer1_ena = VL_RAND_RESET_I(1);
    Character_Layer1_dequeue = VL_RAND_RESET_I(1);
    Character_Layer1_r_master = VL_RAND_RESET_I(1);
    Character_Layer1_data = VL_RAND_RESET_Q(64);
    Character_Layer1_count = VL_RAND_RESET_I(8);
    Character_Layer2_ena = VL_RAND_RESET_I(1);
    Character_Layer2_dequeue = VL_RAND_RESET_I(1);
    Character_Layer2_r_master = VL_RAND_RESET_I(1);
    Character_Layer2_data = VL_RAND_RESET_Q(64);
    Character_Layer2_count = VL_RAND_RESET_I(8);
    Character_Layer3_ena = VL_RAND_RESET_I(1);
    Character_Layer3_dequeue = VL_RAND_RESET_I(1);
    Character_Layer3_r_master = VL_RAND_RESET_I(1);
    Character_Layer3_data = VL_RAND_RESET_Q(64);
    Character_Layer3_count = VL_RAND_RESET_I(8);
    Character_Layer4_ena = VL_RAND_RESET_I(1);
    Character_Layer4_dequeue = VL_RAND_RESET_I(1);
    Character_Layer4_r_master = VL_RAND_RESET_I(1);
    Character_Layer4_data = VL_RAND_RESET_Q(64);
    Character_Layer4_count = VL_RAND_RESET_I(8);
    Script_Layer_ena = VL_RAND_RESET_I(1);
    Script_Layer_dequeue = VL_RAND_RESET_I(1);
    Script_Layer_r_master = VL_RAND_RESET_I(1);
    Script_Layer_data = VL_RAND_RESET_Q(64);
    Script_Layer_count = VL_RAND_RESET_I(8);
    Status_Layer_ena = VL_RAND_RESET_I(1);
    Status_Layer_dequeue = VL_RAND_RESET_I(1);
    Status_Layer_r_master = VL_RAND_RESET_I(1);
    Status_Layer_data = VL_RAND_RESET_Q(64);
    Status_Layer_count = VL_RAND_RESET_I(8);
    Universal_Layer1_ena = VL_RAND_RESET_I(1);
    Universal_Layer1_dequeue = VL_RAND_RESET_I(1);
    Universal_Layer1_r_master = VL_RAND_RESET_I(1);
    Universal_Layer1_data = VL_RAND_RESET_Q(64);
    Universal_Layer1_count = VL_RAND_RESET_I(8);
    Universal_Layer2_ena = VL_RAND_RESET_I(1);
    Universal_Layer2_dequeue = VL_RAND_RESET_I(1);
    Universal_Layer2_r_master = VL_RAND_RESET_I(1);
    Universal_Layer2_data = VL_RAND_RESET_Q(64);
    Universal_Layer2_count = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__uni1_fifo_count = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__uni1_fifo_front = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__uni1_fifo_rear = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__uni2_fifo_count = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__uni2_fifo_front = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__uni2_fifo_rear = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__script_fifo_count = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__script_fifo_front = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__script_fifo_rear = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__status_fifo_count = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__status_fifo_front = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__status_fifo_rear = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__char1_fifo_count = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__char1_fifo_front = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__char1_fifo_rear = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__char2_fifo_count = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__char2_fifo_front = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__char2_fifo_rear = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__char3_fifo_count = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__char3_fifo_front = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__char3_fifo_rear = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__char4_fifo_count = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__char4_fifo_front = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__char4_fifo_rear = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__back1_fifo_count = VL_RAND_RESET_I(9);
    Compressed_Data_FIFO__DOT__back1_fifo_front = VL_RAND_RESET_I(9);
    Compressed_Data_FIFO__DOT__back1_fifo_rear = VL_RAND_RESET_I(9);
    Compressed_Data_FIFO__DOT__back2_fifo_count = VL_RAND_RESET_I(9);
    Compressed_Data_FIFO__DOT__back2_fifo_front = VL_RAND_RESET_I(9);
    Compressed_Data_FIFO__DOT__back2_fifo_rear = VL_RAND_RESET_I(9);
    Compressed_Data_FIFO__DOT__back1_fifo_inc_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__back1_fifo_dec_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__back2_fifo_inc_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__back2_fifo_dec_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__char1_fifo_inc_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__char1_fifo_dec_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__char2_fifo_inc_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__char2_fifo_dec_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__char3_fifo_inc_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__char3_fifo_dec_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__char4_fifo_inc_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__char4_fifo_dec_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__script_fifo_inc_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__script_fifo_dec_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__status_fifo_inc_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__status_fifo_dec_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__uni1_fifo_inc_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__uni1_fifo_dec_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__uni2_fifo_inc_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__uni2_fifo_dec_want = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__clk_counter = VL_RAND_RESET_I(2);
    Compressed_Data_FIFO__DOT__back1_fifo_r_master = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__back2_fifo_r_master = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__main_state = VL_RAND_RESET_I(4);
    Compressed_Data_FIFO__DOT__BRAM7_read_state = VL_RAND_RESET_I(3);
    Compressed_Data_FIFO__DOT__BRAM7_read_state_next = VL_RAND_RESET_I(3);
    Compressed_Data_FIFO__DOT__BRAM8_read_state = VL_RAND_RESET_I(3);
    Compressed_Data_FIFO__DOT__BRAM8_read_state_next = VL_RAND_RESET_I(3);
    Compressed_Data_FIFO__DOT__BRAM9_read_state = VL_RAND_RESET_I(3);
    Compressed_Data_FIFO__DOT__BRAM9_read_state_next = VL_RAND_RESET_I(3);
    Compressed_Data_FIFO__DOT__uni1_next_ad = VL_RAND_RESET_I(32);
    Compressed_Data_FIFO__DOT__uni2_next_ad = VL_RAND_RESET_I(32);
    Compressed_Data_FIFO__DOT__script_next_ad = VL_RAND_RESET_I(32);
    Compressed_Data_FIFO__DOT__status_next_ad = VL_RAND_RESET_I(32);
    Compressed_Data_FIFO__DOT__char1_next_ad = VL_RAND_RESET_I(32);
    Compressed_Data_FIFO__DOT__char2_next_ad = VL_RAND_RESET_I(32);
    Compressed_Data_FIFO__DOT__char3_next_ad = VL_RAND_RESET_I(32);
    Compressed_Data_FIFO__DOT__char4_next_ad = VL_RAND_RESET_I(32);
    Compressed_Data_FIFO__DOT__back1_next_ad = VL_RAND_RESET_I(32);
    Compressed_Data_FIFO__DOT__back2_next_ad = VL_RAND_RESET_I(32);
    Compressed_Data_FIFO__DOT__next_should_read_layer = VL_RAND_RESET_I(10);
    Compressed_Data_FIFO__DOT__last_read_basic = VL_RAND_RESET_I(10);
    Compressed_Data_FIFO__DOT__last_read_urgent = VL_RAND_RESET_I(10);
    Compressed_Data_FIFO__DOT__valid_req = VL_RAND_RESET_I(10);
    Compressed_Data_FIFO__DOT__urgent_req = VL_RAND_RESET_I(10);
    Compressed_Data_FIFO__DOT__basic_req = VL_RAND_RESET_I(10);
    Compressed_Data_FIFO__DOT__masked_req = VL_RAND_RESET_I(10);
    Compressed_Data_FIFO__DOT__round_end = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__is_urgent_mode = VL_RAND_RESET_I(1);
    Compressed_Data_FIFO__DOT__should_read_layer = VL_RAND_RESET_I(10);
    Compressed_Data_FIFO__DOT__emem_r_counter = VL_RAND_RESET_I(8);
    Compressed_Data_FIFO__DOT__tem_32_reg = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
