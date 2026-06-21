// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPPU_TOP.h for the primary calling header

#include "VPPU_TOP.h"
#include "VPPU_TOP__Syms.h"

//==========

VL_CTOR_IMP(VPPU_TOP) {
    VPPU_TOP__Syms* __restrict vlSymsp = __VlSymsp = new VPPU_TOP__Syms(this, name());
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__PPU_TOP__DOT__u_bg1, VPPU_TOP_Pixel_Reader);
    VL_CELL(__PVT__PPU_TOP__DOT__u_bg2, VPPU_TOP_Pixel_Reader);
    VL_CELL(__PVT__PPU_TOP__DOT__u_ch1, VPPU_TOP_Pixel_Reader);
    VL_CELL(__PVT__PPU_TOP__DOT__u_ch2, VPPU_TOP_Pixel_Reader);
    VL_CELL(__PVT__PPU_TOP__DOT__u_ch3, VPPU_TOP_Pixel_Reader);
    VL_CELL(__PVT__PPU_TOP__DOT__u_ch4, VPPU_TOP_Pixel_Reader);
    VL_CELL(__PVT__PPU_TOP__DOT__u_sc, VPPU_TOP_Pixel_Reader);
    VL_CELL(__PVT__PPU_TOP__DOT__u_st, VPPU_TOP_Pixel_Reader);
    VL_CELL(__PVT__PPU_TOP__DOT__u_un1, VPPU_TOP_Pixel_Reader);
    VL_CELL(__PVT__PPU_TOP__DOT__u_un2, VPPU_TOP_Pixel_Reader);
    VL_CELL(__PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1, VPPU_TOP_Decompresser);
    VL_CELL(__PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2, VPPU_TOP_Decompresser);
    VL_CELL(__PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script, VPPU_TOP_Decompresser);
    VL_CELL(__PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status, VPPU_TOP_Decompresser);
    VL_CELL(__PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1, VPPU_TOP_Decompresser);
    VL_CELL(__PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2, VPPU_TOP_Decompresser);
    VL_CELL(__PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3, VPPU_TOP_Decompresser);
    VL_CELL(__PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4, VPPU_TOP_Decompresser);
    VL_CELL(__PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1, VPPU_TOP_Decompresser);
    VL_CELL(__PVT__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2, VPPU_TOP_Decompresser);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VPPU_TOP::__Vconfigure(VPPU_TOP__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VPPU_TOP::~VPPU_TOP() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VPPU_TOP::_settle__TOP__1(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPPU_TOP::_settle__TOP__1\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[0U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[0U] = 1U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[0U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[0U] = 1U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[0U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[1U] 
        = vlTOPp->Background1_a;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[2U] 
        = vlTOPp->Background2_a;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[3U] 
        = vlTOPp->Character1_a;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[4U] 
        = vlTOPp->Character2_a;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[5U] 
        = vlTOPp->Character3_a;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[6U] 
        = vlTOPp->Character4_a;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[7U] 
        = vlTOPp->Script_a;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[8U] 
        = vlTOPp->Status_a;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[9U] 
        = vlTOPp->Universal1_a;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a[0xaU] 
        = vlTOPp->Universal2_a;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[1U] 
        = vlTOPp->Background1_z;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[2U] 
        = vlTOPp->Background2_z;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[3U] 
        = vlTOPp->Character1_z;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[4U] 
        = vlTOPp->Character2_z;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[5U] 
        = vlTOPp->Character3_z;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[6U] 
        = vlTOPp->Character4_z;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[7U] 
        = vlTOPp->Script_z;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[8U] 
        = vlTOPp->Status_z;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[9U] 
        = vlTOPp->Universal1_z;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z[0xaU] 
        = vlTOPp->Universal2_z;
    vlTOPp->PPU_TOP__DOT__Req_trans[0xbU] = 0U;
    vlTOPp->PPU_TOP__DOT__Req_trans[0xaU] = 0U;
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__uni1_comp_count 
        = vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count;
    vlTOPp->Final_pixel_valid = 0U;
    if (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe9_valid) 
         & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__is_new_pixel))) {
        vlTOPp->Final_pixel_valid = 1U;
    }
    vlTOPp->BRAM9_we_a = 0U;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_we_a = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_we_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM9_en_a = 0U;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_en_a = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_en_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                if (
                                                    (0x40U 
                                                     & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_inc_want = 1U;
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
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want = 1U;
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
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want = 1U;
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
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_inc_want = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((2U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                         >> 6U)))) {
                                                    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_inc_want = 1U;
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
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & (~ ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                           >> 1U)) 
                                       | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 2U)) | 
                                      ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 4U)) 
                                    | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 6U)) 
                                  | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     >> 7U))))) {
                        if ((0x100U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_inc_want = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & (~ ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                           >> 1U)) 
                                       | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 2U)) | 
                                      ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 4U)) 
                                    | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 6U)) 
                                  | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     >> 7U))))) {
                        if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 8U)))) {
                            if ((0x200U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_inc_want = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM7_en_a = 0U;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_en_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_en_a = 1U;
                        } else {
                            if ((0x200U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_en_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM7_we_a = 0U;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_we_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_we_a = 1U;
                        } else {
                            if ((0x200U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_we_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM8_en_a = 0U;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_en_a = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_en_a = 1U;
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_en_a = 1U;
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
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
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_we_a = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_we_a = 1U;
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_we_a = 1U;
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
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
    vlTOPp->Final_pixel_RGB = 0U;
    if (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe9_valid) 
         & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__is_new_pixel))) {
        vlTOPp->Final_pixel_RGB = ((0x3f000U & ((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe9_R) 
                                                << 8U)) 
                                   | ((0xfc0U & ((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe9_G) 
                                                 << 2U)) 
                                      | (0x3fU & ((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe9_B) 
                                                  >> 4U))));
    }
    vlTOPp->BRAM9_addr_a = 0U;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_addr_a = 
                                (0xffU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_rear));
                        } else {
                            if ((2U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_addr_a 
                                    = (0x100U | (0xffU 
                                                 & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_rear)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM9_din_a = 0ULL;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM9_din_a = (
                                                   ((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                        } else {
                            if ((2U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM9_din_a 
                                    = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM7_din_a = 0ULL;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_din_a 
                                                    = 
                                                    ((0x40U 
                                                      & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))
                                                      ? 
                                                     (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)))
                                                      : 
                                                     (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_din_a = (
                                                   ((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                        } else {
                            if ((0x200U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_din_a 
                                    = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM8_din_a = 0ULL;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_din_a 
                                        = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                                } else {
                                    if ((8U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_din_a 
                                            = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_din_a 
                                                = (
                                                   ((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)));
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlTOPp->BRAM8_din_a 
                                                    = 
                                                    (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg)));
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
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlTOPp->BRAM8_addr_a 
                                        = (0x7fU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_rear));
                                } else {
                                    if ((8U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlTOPp->BRAM8_addr_a 
                                            = (0x1ffU 
                                               & ((IData)(0x80U) 
                                                  + 
                                                  (0x7fU 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_rear))));
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlTOPp->BRAM8_addr_a 
                                                = (0x1ffU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0x7fU 
                                                       & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_rear))));
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlTOPp->BRAM8_addr_a 
                                                    = 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        + 
                                                        (0x7fU 
                                                         & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_rear))));
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
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlTOPp->BRAM7_addr_a 
                                                    = 
                                                    (0x1ffU 
                                                     & ((0x40U 
                                                         & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))
                                                         ? 
                                                        ((IData)(0x100U) 
                                                         + 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_rear)))
                                                         : 
                                                        ((IData)(0x180U) 
                                                         + 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_rear)))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlTOPp->BRAM7_addr_a = 
                                (0x7fU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_rear));
                        } else {
                            if ((0x200U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlTOPp->BRAM7_addr_a 
                                    = (0x1ffU & ((IData)(0x80U) 
                                                 + 
                                                 (0x7fU 
                                                  & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_rear))));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__uni2_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__uni2_comp_data 
                    = vlTOPp->BRAM7_dout_b;
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__uni1_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__uni1_comp_data 
                = vlTOPp->BRAM7_dout_b;
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__st_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            if ((2U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                if ((3U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                    if ((4U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__st_comp_data 
                            = vlTOPp->BRAM7_dout_b;
                    }
                }
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__sc_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            if ((2U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__sc_comp_data 
                        = vlTOPp->BRAM7_dout_b;
                }
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__ch4_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            if ((2U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                if ((3U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                    if ((4U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__ch4_comp_data 
                            = vlTOPp->BRAM8_dout_b;
                    }
                }
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__ch3_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            if ((2U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__ch3_comp_data 
                        = vlTOPp->BRAM8_dout_b;
                }
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__ch2_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__ch2_comp_data 
                    = vlTOPp->BRAM8_dout_b;
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__ch1_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__ch1_comp_data 
                = vlTOPp->BRAM8_dout_b;
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__bg2_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state))) {
        if ((1U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state))) {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state))) {
                vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__bg2_comp_data 
                    = vlTOPp->BRAM9_dout_b;
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__bg1_comp_data = 0ULL;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state))) {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state))) {
            vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__bg1_comp_data 
                = vlTOPp->BRAM9_dout_b;
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master 
        = ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
           | (1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master 
        = ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
           | (3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)));
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_x_next 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_x;
    if (((((((((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state)) 
               | (1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
              | (2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
             | (3U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
            | (4U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
           | (5U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
          | (6U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
         | (7U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state)))) {
        if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_x_next = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) {
                if (((((((((((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_valid) 
                             & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_valid)) 
                            & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_valid)) 
                           & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_valid)) 
                          & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_valid)) 
                         & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_valid)) 
                        & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_valid)) 
                       & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid)) 
                      & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid)) 
                     & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))) {
                    if (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid) 
                         & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe8_valid))) {
                        vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_x_next 
                            = (((0x137U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_x)) 
                                & (0xf0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_y)))
                                ? 0U : (((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_x)) 
                                         & (0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_y)))
                                         ? 1U : ((0x140U 
                                                  == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_x))
                                                  ? 1U
                                                  : 
                                                 (0x1ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_x))))));
                    }
                }
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_y_next 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_y;
    if (((((((((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state)) 
               | (1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
              | (2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
             | (3U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
            | (4U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
           | (5U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
          | (6U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
         | (7U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state)))) {
        if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_y_next = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) {
                if (((((((((((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_valid) 
                             & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_valid)) 
                            & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_valid)) 
                           & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_valid)) 
                          & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_valid)) 
                         & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_valid)) 
                        & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_valid)) 
                       & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid)) 
                      & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid)) 
                     & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))) {
                    if (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid) 
                         & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe8_valid))) {
                        vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_y_next 
                            = (((0x137U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_x)) 
                                & (0xf0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_y)))
                                ? 0U : (((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_x)) 
                                         & (0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_y)))
                                         ? 1U : (0x1ffU 
                                                 & ((0x140U 
                                                     == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_x))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_y))
                                                     : (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_y)))));
                    }
                }
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_next 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state;
    if (((((((((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state)) 
               | (1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
              | (2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
             | (3U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
            | (4U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
           | (5U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
          | (6U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
         | (7U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state)))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_next 
            = ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))
                ? ((IData)(vlTOPp->PPU_start) ? 1U : 0U)
                : ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))
                    ? (((((((((((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_valid) 
                                & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_valid)) 
                               & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_valid)) 
                              & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_valid)) 
                             & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_valid)) 
                            & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_valid)) 
                           & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_valid)) 
                          & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid)) 
                         & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid)) 
                        & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))
                        ? (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid) 
                            & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe8_valid))
                            ? (((0x137U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_x)) 
                                & (0xf0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_counter_y)))
                                ? 2U : 1U) : 1U) : 1U)
                    : ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))
                        ? (((((((((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_valid) 
                                  & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_valid)) 
                                 & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_valid)) 
                                & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_valid)) 
                               & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_valid)) 
                              & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid)) 
                             & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid)) 
                            & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))
                            ? 3U : 2U) : ((3U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))
                                           ? ((((((
                                                   ((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_valid) 
                                                    & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_valid)) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_valid)) 
                                                  & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_valid)) 
                                                 & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid)) 
                                                & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid)) 
                                               & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))
                                               ? 4U
                                               : 3U)
                                           : ((4U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))
                                               ? ((
                                                   (((((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_valid) 
                                                       & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_valid)) 
                                                      & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_valid)) 
                                                     & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid)) 
                                                    & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid)) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))
                                                   ? 5U
                                                   : 4U)
                                               : ((5U 
                                                   == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))
                                                   ? 
                                                  ((((((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_valid) 
                                                       & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_valid)) 
                                                      & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid)) 
                                                     & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid)) 
                                                    & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))
                                                    ? 6U
                                                    : 5U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))
                                                    ? 
                                                   (((((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_valid) 
                                                       & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid)) 
                                                      & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid)) 
                                                     & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))
                                                     ? 7U
                                                     : 6U)
                                                    : 
                                                   ((((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid) 
                                                      & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid)) 
                                                     & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))
                                                     ? 8U
                                                     : 7U))))))));
    } else {
        if ((8U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_next 
                = (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid) 
                    & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))
                    ? 9U : 8U);
        } else {
            if ((9U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state_next 
                    = ((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid)
                        ? 0U : 9U);
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_ready = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_ready = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_ready = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_ready = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_ready = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_ready = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_ready = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_ready = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_ready = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_ready = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipeline_move = 0U;
    if (((((((((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state)) 
               | (1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
              | (2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
             | (3U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
            | (4U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
           | (5U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
          | (6U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
         | (7U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state)))) {
        if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) {
            if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) {
                if (((((((((((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_valid) 
                             & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_valid)) 
                            & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_valid)) 
                           & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_valid)) 
                          & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_valid)) 
                         & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_valid)) 
                        & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_valid)) 
                       & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid)) 
                      & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid)) 
                     & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))) {
                    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipeline_move = 1U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) {
                    if (((((((((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_valid) 
                               & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_valid)) 
                              & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_valid)) 
                             & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_valid)) 
                            & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_valid)) 
                           & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid)) 
                          & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid)) 
                         & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))) {
                        vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipeline_move = 1U;
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) {
                        if ((((((((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_valid) 
                                  & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_valid)) 
                                 & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_valid)) 
                                & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_valid)) 
                               & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid)) 
                              & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid)) 
                             & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))) {
                            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipeline_move = 1U;
                        }
                    } else {
                        if ((4U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) {
                            if (((((((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_valid) 
                                     & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_valid)) 
                                    & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_valid)) 
                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid)) 
                                  & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid)) 
                                 & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))) {
                                vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipeline_move = 1U;
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) {
                                if ((((((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_valid) 
                                        & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_valid)) 
                                       & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid)) 
                                      & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid)) 
                                     & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))) {
                                    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipeline_move = 1U;
                                }
                            } else {
                                if ((6U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) {
                                    if (((((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_valid) 
                                           & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid)) 
                                          & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid)) 
                                         & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))) {
                                        vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipeline_move = 1U;
                                    }
                                } else {
                                    if ((((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid) 
                                          & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid)) 
                                         & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))) {
                                        vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipeline_move = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) {
            if (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid) 
                 & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipeline_move = 1U;
            }
        } else {
            if ((9U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) {
                if (vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid) {
                    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipeline_move = 1U;
                }
            }
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipeline_move) {
        if (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_valid) 
             & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_valid))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_ready = 1U;
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_ready = 1U;
        }
        if (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_valid) 
             & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe1_valid))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_ready = 1U;
        }
        if (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_valid) 
             & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe2_valid))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_ready = 1U;
        }
        if (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_valid) 
             & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe3_valid))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_ready = 1U;
        }
        if (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_valid) 
             & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe4_valid))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_ready = 1U;
        }
        if (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_valid) 
             & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe5_valid))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_ready = 1U;
        }
        if (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_valid) 
             & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe6_valid))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_ready = 1U;
        }
        if (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_valid) 
             & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe7_valid))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_ready = 1U;
        }
        if (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid) 
             & (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Pipe8_valid))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_ready = 1U;
        }
    }
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__all_fsm_reset = 0U;
    if ((1U & (~ ((((((((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state)) 
                        | (1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
                       | (2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
                      | (3U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
                     | (4U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
                    | (5U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
                   | (6U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) 
                  | (7U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state)))))) {
        if ((8U != (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) {
            if ((9U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__main_state))) {
                if (vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_valid) {
                    vlTOPp->PPU_TOP__DOT__u_proc__DOT__all_fsm_reset = 1U;
                }
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want = 1U;
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want = 1U;
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_dec_want = 1U;
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_dec_want = 1U;
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 3U;
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 4U;
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 2U;
    }
    vlTOPp->BRAM7_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    vlTOPp->BRAM7_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x180U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_addr_b = (0x7fU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x80U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_front))));
    }
    vlTOPp->BRAM10_en_a = ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_en_a) 
                             | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_en_a)) 
                            | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_en_a)) 
                           | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_en_a));
    vlTOPp->BRAM10_we_a = ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_we_a) 
                             | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_we_a)) 
                            | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_we_a)) 
                           | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_we_a));
    vlTOPp->BRAM10_addr_a = ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_addr_a) 
                               | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_addr_a)) 
                              | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_addr_a)) 
                             | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_addr_a));
    vlTOPp->BRAM10_din_a = (((vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_din_a 
                              | vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_din_a) 
                             | vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_din_a) 
                            | vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_din_a);
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want = 1U;
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want = 1U;
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want = 1U;
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want = 1U;
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 2U;
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 3U;
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 4U;
    }
    vlTOPp->BRAM8_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    vlTOPp->BRAM8_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_addr_b = (0x7fU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x80U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x180U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_front))));
    }
    vlTOPp->BRAM11_en_a = ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_en_a) 
                             | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_en_a)) 
                            | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_en_a)) 
                           | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_en_a));
    vlTOPp->BRAM11_we_a = ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_we_a) 
                             | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_we_a)) 
                            | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_we_a)) 
                           | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_we_a));
    vlTOPp->BRAM11_addr_a = ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_addr_a) 
                               | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_addr_a)) 
                              | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_addr_a)) 
                             | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_addr_a));
    vlTOPp->BRAM11_din_a = (((vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_din_a 
                              | vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_din_a) 
                             | vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_din_a) 
                            | vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_din_a);
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__All_Decompresser_is_IDLE 
        = ((((((((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Decompresser_is_IDLE) 
                   & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Decompresser_is_IDLE)) 
                  & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.Decompresser_is_IDLE)) 
                 & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.Decompresser_is_IDLE)) 
                & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Decompresser_is_IDLE)) 
               & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Decompresser_is_IDLE)) 
              & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Decompresser_is_IDLE)) 
             & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Decompresser_is_IDLE)) 
            & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Decompresser_is_IDLE)) 
           & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Decompresser_is_IDLE));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer = 0U;
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__urgent_req 
        = ((((0x20U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count)) 
             & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_ena)) 
            << 9U) | ((((0x20U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count)) 
                        & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_ena)) 
                       << 8U) | ((((0x20U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count)) 
                                   & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_ena)) 
                                  << 7U) | ((((0x20U 
                                               >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count)) 
                                              & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_ena)) 
                                             << 6U) 
                                            | ((((0x20U 
                                                  >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count)) 
                                                 & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_ena)) 
                                                << 5U) 
                                               | ((((0x20U 
                                                     >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count)) 
                                                    & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_ena)) 
                                                   << 4U) 
                                                  | ((((0x20U 
                                                        >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count)) 
                                                       & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_ena)) 
                                                      << 3U) 
                                                     | ((((0x20U 
                                                           >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count)) 
                                                          & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_ena)) 
                                                         << 2U) 
                                                        | ((((0x40U 
                                                              >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count)) 
                                                             & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_ena)) 
                                                            << 1U) 
                                                           | ((0x40U 
                                                               >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count)) 
                                                              & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_ena)))))))))));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode 
        = (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__urgent_req));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3feU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_ena) 
              & (0xf0U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3fdU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_ena) 
               & (0xf0U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
              << 1U));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3fbU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
              << 2U));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3f7U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
              << 3U));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3efU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
              << 4U));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3dfU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
              << 5U));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3bfU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
              << 6U));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x37fU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
              << 7U));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x2ffU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
              << 8U));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x1ffU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
              << 9U));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req 
        = ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__urgent_req))
            ? (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)
            : (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__urgent_req));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3feU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (1U & ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                     ? ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                        & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent)))
                     : ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                        & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic))))));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3fdU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (2U & (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 1U) & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 1U))) : (
                                                   ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 1U) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 1U)))) 
                    << 1U)));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3fbU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (4U & (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 2U) & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 2U))) : (
                                                   ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 2U) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 2U)))) 
                    << 2U)));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3f7U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (8U & (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 3U) & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 3U))) : (
                                                   ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 3U) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 3U)))) 
                    << 3U)));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3efU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x10U & (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                             >> 4U) & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 4U))) : 
                        (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 4U) & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 4U)))) << 4U)));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3dfU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x20U & (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                             >> 5U) & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 5U))) : 
                        (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 5U) & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 5U)))) << 5U)));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3bfU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x40U & (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                             >> 6U) & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 6U))) : 
                        (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 6U) & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 6U)))) << 6U)));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x37fU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x80U & (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                             >> 7U) & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 7U))) : 
                        (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 7U) & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 7U)))) << 7U)));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x2ffU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x100U & (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                          ? (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                              >> 8U) & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                           >> 8U)))
                          : (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                              >> 8U) & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                           >> 8U)))) 
                        << 8U)));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x1ffU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x200U & (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                          ? (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                              >> 9U) & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                           >> 9U)))
                          : (((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                              >> 9U) & (~ ((IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                           >> 9U)))) 
                        << 9U)));
    if ((1U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
            = (1U | (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
    } else {
        if ((2U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
            vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                = (2U | (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
        } else {
            if ((4U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                    = (4U | (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
            } else {
                if ((8U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                        = (8U | (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                } else {
                    if ((0x10U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                            = (0x10U | (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                    } else {
                        if ((0x20U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                            vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                = (0x20U | (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                        } else {
                            if ((0x40U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                                vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                    = (0x40U | (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                            } else {
                                if ((0x80U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                                    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                        = (0x80U | (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                                } else {
                                    if ((0x100U & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                                        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                            = (0x100U 
                                               | (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                                    } else {
                                        if ((0x200U 
                                             & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                                            vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                                = (0x200U 
                                                   | (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
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
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__round_end 
        = ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req)) 
           & (0U == (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)));
    vlTOPp->BRAM12_en_a = ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_en_a) 
                           | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_en_a));
    vlTOPp->BRAM12_we_a = ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_we_a) 
                           | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_we_a));
    vlTOPp->BRAM12_addr_a = ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_addr_a) 
                             | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_addr_a));
    vlTOPp->BRAM12_din_a = (vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_din_a 
                            | vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_din_a);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[0U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[1U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[2U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[3U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[4U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[5U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[6U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[7U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[8U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[9U] = 0U;
    if (((1U <= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
          [1U]) & (0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                   [1U]))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2 = 1U;
        if ((9U >= (0xfU & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                            [1U] - (IData)(1U))))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                            & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                                                               [1U] 
                                                               - (IData)(1U)))] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
          [2U]) & (0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                   [2U]))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2 = 2U;
        if ((9U >= (0xfU & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                            [2U] - (IData)(1U))))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                            & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                                                               [2U] 
                                                               - (IData)(1U)))] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
          [3U]) & (0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                   [3U]))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2 = 3U;
        if ((9U >= (0xfU & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                            [3U] - (IData)(1U))))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                            & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                                                               [3U] 
                                                               - (IData)(1U)))] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
          [4U]) & (0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                   [4U]))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2 = 4U;
        if ((9U >= (0xfU & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                            [4U] - (IData)(1U))))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                            & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                                                               [4U] 
                                                               - (IData)(1U)))] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
          [5U]) & (0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                   [5U]))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2 = 5U;
        if ((9U >= (0xfU & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                            [5U] - (IData)(1U))))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                            & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                                                               [5U] 
                                                               - (IData)(1U)))] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
          [6U]) & (0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                   [6U]))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2 = 6U;
        if ((9U >= (0xfU & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                            [6U] - (IData)(1U))))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                            & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                                                               [6U] 
                                                               - (IData)(1U)))] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
          [7U]) & (0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                   [7U]))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2 = 7U;
        if ((9U >= (0xfU & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                            [7U] - (IData)(1U))))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                            & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                                                               [7U] 
                                                               - (IData)(1U)))] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
          [8U]) & (0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                   [8U]))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2 = 8U;
        if ((9U >= (0xfU & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                            [8U] - (IData)(1U))))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                            & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                                                               [8U] 
                                                               - (IData)(1U)))] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
          [9U]) & (0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                   [9U]))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2 = 9U;
        if ((9U >= (0xfU & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                            [9U] - (IData)(1U))))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                            & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                                                               [9U] 
                                                               - (IData)(1U)))] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
          [0xaU]) & (0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                     [0xaU]))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2 = 0xaU;
        if ((9U >= (0xfU & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                            [0xaU] - (IData)(1U))))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                            & (vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_z
                                                               [0xaU] 
                                                               - (IData)(1U)))] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [0U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [0U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[0U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [1U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [1U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[1U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [2U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [2U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[2U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [3U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [3U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[3U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [4U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [4U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[4U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [5U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [5U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[5U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [6U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [6U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[6U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [7U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [7U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[7U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [8U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [8U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[8U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [9U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_a
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [9U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_a[9U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound6;
}

void VPPU_TOP::_settle__TOP__2(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPPU_TOP::_settle__TOP__2\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[1U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Pixel_is_trans;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[1U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Pixel_RGB;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[1U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Pixel_valid;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_hit 
        = (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_pixel) 
               == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_pixel))) 
           & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_hit1 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_hit2 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_hit3 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_hit4 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_is_zero 
        = ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_pixel)));
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[2U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Pixel_is_trans;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[2U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Pixel_RGB;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[2U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Pixel_valid;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_hit 
        = (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_pixel) 
               == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_pixel))) 
           & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_hit1 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_hit2 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_hit3 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_hit4 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_is_zero 
        = ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_pixel)));
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[3U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Pixel_is_trans;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[3U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Pixel_RGB;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[3U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Pixel_valid;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_hit 
        = (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_pixel) 
               == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_pixel))) 
           & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_hit1 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_hit2 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_hit3 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_hit4 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_is_zero 
        = ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_pixel)));
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[4U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Pixel_is_trans;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[4U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Pixel_RGB;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[4U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Pixel_valid;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_hit 
        = (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_pixel) 
               == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_pixel))) 
           & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_hit1 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_hit2 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_hit3 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_hit4 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_is_zero 
        = ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_pixel)));
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[5U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Pixel_is_trans;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[5U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Pixel_RGB;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[5U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Pixel_valid;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_hit 
        = (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_pixel) 
               == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_pixel))) 
           & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_hit1 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_hit2 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_hit3 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_hit4 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_is_zero 
        = ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_pixel)));
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[6U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Pixel_is_trans;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[6U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Pixel_RGB;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[6U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Pixel_valid;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_hit 
        = (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_pixel) 
               == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_pixel))) 
           & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_hit1 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_hit2 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_hit3 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_hit4 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_is_zero 
        = ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_pixel)));
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[7U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_sc.Pixel_is_trans;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[7U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_sc.Pixel_RGB;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[7U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_sc.Pixel_valid;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_hit 
        = (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_pixel) 
               == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_pixel))) 
           & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_hit1 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_hit2 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_hit3 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_hit4 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_is_zero 
        = ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_pixel)));
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[8U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_st.Pixel_is_trans;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[8U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_st.Pixel_RGB;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[8U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_st.Pixel_valid;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_hit 
        = (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_pixel) 
               == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_pixel))) 
           & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_hit1 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_hit2 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_hit3 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_hit4 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_is_zero 
        = ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_pixel)));
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[9U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_un1.Pixel_is_trans;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[9U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_un1.Pixel_RGB;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[9U] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_un1.Pixel_valid;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_hit 
        = (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_pixel) 
               == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_pixel))) 
           & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_hit1 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_hit2 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_hit3 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_hit4 = (
                                                   ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_ena) 
                                                    & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_pixel) 
                                                       == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_pixel))) 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_is_zero 
        = ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_pixel)));
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans[0xaU] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_un2.Pixel_is_trans;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB[0xaU] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_un2.Pixel_RGB;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid[0xaU] 
        = vlSymsp->TOP__PPU_TOP__DOT__u_un2.Pixel_valid;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_hit 
        = (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_ena) 
            & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_pixel) 
               == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_pixel))) 
           & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_hit1 = 
        (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_ena) 
          & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_pixel) 
             == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_pixel))) 
         & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_hit2 = 
        (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_ena) 
          & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_pixel) 
             == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_pixel))) 
         & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_hit3 = 
        (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_ena) 
          & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_pixel) 
             == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_pixel))) 
         & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_hit4 = 
        (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_ena) 
          & ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_pixel) 
             == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_pixel))) 
         & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_valid));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_is_zero 
        = ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_ena) 
           & (0U == (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_pixel)));
    vlTOPp->BRAM10_en_b = ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_en_b) 
                             | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_en_b)) 
                            | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_en_b)) 
                           | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_en_b));
    vlTOPp->BRAM10_addr_b = ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_addr_b) 
                               | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_addr_b)) 
                              | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_addr_b)) 
                             | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_addr_b));
    vlTOPp->BRAM11_en_b = ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_en_b) 
                             | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_en_b)) 
                            | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_en_b)) 
                           | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_en_b));
    vlTOPp->BRAM11_addr_b = ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_addr_b) 
                               | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_addr_b)) 
                              | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_addr_b)) 
                             | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_addr_b));
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want = 1U;
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want = 1U;
    }
    vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next = 2U;
    }
    vlTOPp->BRAM9_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlTOPp->BRAM9_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlTOPp->BRAM9_en_b = 1U;
    }
    vlTOPp->BRAM9_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlTOPp->BRAM9_addr_b = (0xffU & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlTOPp->BRAM9_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0xffU 
                                             & (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_front))));
    }
    vlTOPp->BRAM12_en_b = ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_en_b) 
                           | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_en_b));
    vlTOPp->BRAM12_addr_b = ((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_addr_b) 
                             | (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_addr_b));
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_trans = 0U;
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_trans = 1U;
    }
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_trans = 0U;
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_trans = 1U;
    }
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_trans = 0U;
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_trans = 1U;
    }
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_trans = 0U;
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_trans = 1U;
    }
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_trans = 0U;
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_trans = 1U;
    }
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_trans = 0U;
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_trans = 1U;
    }
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_trans = 0U;
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_trans = 1U;
    }
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_trans = 0U;
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_trans = 1U;
    }
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_trans = 0U;
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_trans = 1U;
    }
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [0U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [0U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[0U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [1U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [1U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[1U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [2U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [2U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[2U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [3U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [3U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[3U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [4U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [4U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[4U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [5U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [5U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[5U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [6U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [6U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[6U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [7U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [7U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[7U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [8U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [8U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[8U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [9U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_is_trans
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [9U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[9U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound4;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [0U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [0U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[0U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [1U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [1U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[1U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [2U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [2U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[2U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [3U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [3U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[3U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [4U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [4U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[4U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [5U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [5U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[5U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [6U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [6U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[6U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [7U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [7U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[7U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [8U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [8U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[8U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [9U]) ? vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_RGB
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [9U]] : 0U);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_RGB[9U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound3;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [0U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [0U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[0U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [1U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [1U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[1U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [2U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [2U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[2U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [3U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [3U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[3U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [4U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [4U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[4U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [5U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [5U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[5U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [6U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [6U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[6U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [7U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [7U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[7U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [8U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [8U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[8U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5 
        = ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
            [9U]) & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_valid
           [vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
           [9U]]);
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid[9U] 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound5;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_trans = 0U;
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_trans = 1U;
    }
    vlTOPp->LUT_addr_r1 = 0U;
    vlTOPp->LUT_addr_r2 = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_end = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_RGB = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_end = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_RGB = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_end = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_RGB = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_end = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_RGB = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_end = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_RGB = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_end = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_RGB = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_end = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_RGB = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_end = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_RGB = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_end = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_RGB = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_end = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_RGB = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req11_end = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req11_RGB = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req12_end = 0U;
    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req12_RGB = 0U;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_w_ena = 0U;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_w_ena = 0U;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_w_ena = 0U;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_w_ena = 0U;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_w_ena = 0U;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_w_ena = 0U;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_w_ena = 0U;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_w_ena = 0U;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_w_ena = 0U;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_w_ena = 0U;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req11_w_ena = 0U;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req12_w_ena = 0U;
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req = (
                                                   (0xffeU 
                                                    & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req)) 
                                                   | (((((((~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_is_zero)) 
                                                           & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_ena)) 
                                                          & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_hit1))) 
                                                         & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_hit2))) 
                                                        & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_hit3))) 
                                                       & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_hit4))) 
                                                      & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_hit))));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req = (
                                                   (0xffdU 
                                                    & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req)) 
                                                   | ((((((((~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_is_zero)) 
                                                            & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_ena)) 
                                                           & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_hit1))) 
                                                          & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_hit2))) 
                                                         & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_hit3))) 
                                                        & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_hit4))) 
                                                       & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_hit))) 
                                                      << 1U));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req = (
                                                   (0xffbU 
                                                    & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req)) 
                                                   | ((((((((~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_is_zero)) 
                                                            & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_ena)) 
                                                           & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_hit1))) 
                                                          & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_hit2))) 
                                                         & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_hit3))) 
                                                        & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_hit4))) 
                                                       & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_hit))) 
                                                      << 2U));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req = (
                                                   (0xff7U 
                                                    & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req)) 
                                                   | ((((((((~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_is_zero)) 
                                                            & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_ena)) 
                                                           & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_hit1))) 
                                                          & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_hit2))) 
                                                         & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_hit3))) 
                                                        & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_hit4))) 
                                                       & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_hit))) 
                                                      << 3U));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req = (
                                                   (0xfefU 
                                                    & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req)) 
                                                   | ((((((((~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_is_zero)) 
                                                            & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_ena)) 
                                                           & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_hit1))) 
                                                          & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_hit2))) 
                                                         & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_hit3))) 
                                                        & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_hit4))) 
                                                       & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_hit))) 
                                                      << 4U));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req = (
                                                   (0xfdfU 
                                                    & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req)) 
                                                   | ((((((((~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_is_zero)) 
                                                            & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_ena)) 
                                                           & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_hit1))) 
                                                          & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_hit2))) 
                                                         & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_hit3))) 
                                                        & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_hit4))) 
                                                       & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_hit))) 
                                                      << 5U));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req = (
                                                   (0xfbfU 
                                                    & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req)) 
                                                   | ((((((((~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_is_zero)) 
                                                            & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_ena)) 
                                                           & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_hit1))) 
                                                          & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_hit2))) 
                                                         & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_hit3))) 
                                                        & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_hit4))) 
                                                       & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_hit))) 
                                                      << 6U));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req = (
                                                   (0xf7fU 
                                                    & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req)) 
                                                   | ((((((((~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_is_zero)) 
                                                            & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_ena)) 
                                                           & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_hit1))) 
                                                          & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_hit2))) 
                                                         & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_hit3))) 
                                                        & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_hit4))) 
                                                       & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_hit))) 
                                                      << 7U));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req = (
                                                   (0xeffU 
                                                    & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req)) 
                                                   | ((((((((~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_is_zero)) 
                                                            & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_ena)) 
                                                           & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_hit1))) 
                                                          & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_hit2))) 
                                                         & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_hit3))) 
                                                        & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_hit4))) 
                                                       & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_hit))) 
                                                      << 8U));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req = (
                                                   (0xdffU 
                                                    & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req)) 
                                                   | ((((((((~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_is_zero)) 
                                                            & (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_ena)) 
                                                           & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_hit1))) 
                                                          & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_hit2))) 
                                                         & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_hit3))) 
                                                        & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_hit4))) 
                                                       & (~ (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_hit))) 
                                                      << 9U));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req = (0xbffU 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req));
    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req = (0x7ffU 
                                                   & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req));
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_1) {
        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_1) {
            if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_2))) {
                if ((8U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                    vlTOPp->LUT_addr_r1 = vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_pixel;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_end = 1U;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_RGB 
                        = vlTOPp->LUT_data_out1;
                    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_w_ena = 1U;
                } else {
                    if ((0x10U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->LUT_addr_r1 = vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_pixel;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_RGB 
                            = vlTOPp->LUT_data_out1;
                        vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_w_ena = 1U;
                    } else {
                        if ((0x20U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->LUT_addr_r1 = vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_pixel;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_RGB 
                                = vlTOPp->LUT_data_out1;
                            vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_w_ena = 1U;
                        }
                    }
                }
            } else {
                if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_2))) {
                    if ((0x10U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->LUT_addr_r1 = vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_pixel;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_RGB 
                            = vlTOPp->LUT_data_out1;
                        vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_w_ena = 1U;
                    } else {
                        if ((0x20U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->LUT_addr_r1 = vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_pixel;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_RGB 
                                = vlTOPp->LUT_data_out1;
                            vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_w_ena = 1U;
                        } else {
                            if ((8U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                                vlTOPp->LUT_addr_r1 
                                    = vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_pixel;
                                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_end = 1U;
                                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_RGB 
                                    = vlTOPp->LUT_data_out1;
                                vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_w_ena = 1U;
                            }
                        }
                    }
                } else {
                    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_2))) {
                        if ((0x20U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->LUT_addr_r1 = vlSymsp->TOP__PPU_TOP__DOT__u_ch4.Lookup_pixel;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_RGB 
                                = vlTOPp->LUT_data_out1;
                            vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_w_ena = 1U;
                        } else {
                            if ((8U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                                vlTOPp->LUT_addr_r1 
                                    = vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Lookup_pixel;
                                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_end = 1U;
                                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_RGB 
                                    = vlTOPp->LUT_data_out1;
                                vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_w_ena = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                                    vlTOPp->LUT_addr_r1 
                                        = vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Lookup_pixel;
                                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_end = 1U;
                                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_RGB 
                                        = vlTOPp->LUT_data_out1;
                                    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_w_ena = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_2))) {
            if ((1U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                vlTOPp->LUT_addr_r1 = vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_pixel;
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_end = 1U;
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_RGB 
                    = vlTOPp->LUT_data_out1;
                vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_w_ena = 1U;
            } else {
                if ((2U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                    vlTOPp->LUT_addr_r1 = vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_pixel;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_end = 1U;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_RGB 
                        = vlTOPp->LUT_data_out1;
                    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_w_ena = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->LUT_addr_r1 = vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_pixel;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_RGB 
                            = vlTOPp->LUT_data_out1;
                        vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_w_ena = 1U;
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_2))) {
                if ((2U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                    vlTOPp->LUT_addr_r1 = vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_pixel;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_end = 1U;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_RGB 
                        = vlTOPp->LUT_data_out1;
                    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_w_ena = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->LUT_addr_r1 = vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_pixel;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_RGB 
                            = vlTOPp->LUT_data_out1;
                        vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_w_ena = 1U;
                    } else {
                        if ((1U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->LUT_addr_r1 = vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_pixel;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_RGB 
                                = vlTOPp->LUT_data_out1;
                            vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_w_ena = 1U;
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_2))) {
                    if ((4U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->LUT_addr_r1 = vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Lookup_pixel;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_RGB 
                            = vlTOPp->LUT_data_out1;
                        vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_w_ena = 1U;
                    } else {
                        if ((1U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->LUT_addr_r1 = vlSymsp->TOP__PPU_TOP__DOT__u_bg1.Lookup_pixel;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_RGB 
                                = vlTOPp->LUT_data_out1;
                            vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_w_ena = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                                vlTOPp->LUT_addr_r1 
                                    = vlSymsp->TOP__PPU_TOP__DOT__u_bg2.Lookup_pixel;
                                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_end = 1U;
                                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_RGB 
                                    = vlTOPp->LUT_data_out1;
                                vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_w_ena = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_1) {
        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_1) {
            if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_2))) {
                if ((0x200U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                    vlTOPp->LUT_addr_r2 = vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_pixel;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_end = 1U;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_RGB 
                        = vlTOPp->LUT_data_out2;
                    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_w_ena = 1U;
                } else {
                    if ((0x400U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->LUT_addr_r2 = 0U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req11_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req11_RGB 
                            = vlTOPp->LUT_data_out2;
                        vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req11_w_ena = 1U;
                    } else {
                        if ((0x800U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->LUT_addr_r2 = 0U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req12_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req12_RGB 
                                = vlTOPp->LUT_data_out2;
                            vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req12_w_ena = 1U;
                        }
                    }
                }
            } else {
                if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_2))) {
                    if ((0x400U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->LUT_addr_r2 = 0U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req11_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req11_RGB 
                            = vlTOPp->LUT_data_out2;
                        vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req11_w_ena = 1U;
                    } else {
                        if ((0x800U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->LUT_addr_r2 = 0U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req12_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req12_RGB 
                                = vlTOPp->LUT_data_out2;
                            vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req12_w_ena = 1U;
                        } else {
                            if ((0x200U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                                vlTOPp->LUT_addr_r2 
                                    = vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_pixel;
                                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_end = 1U;
                                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_RGB 
                                    = vlTOPp->LUT_data_out2;
                                vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_w_ena = 1U;
                            }
                        }
                    }
                } else {
                    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_2))) {
                        if ((0x800U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->LUT_addr_r2 = 0U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req12_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req12_RGB 
                                = vlTOPp->LUT_data_out2;
                            vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req12_w_ena = 1U;
                        } else {
                            if ((0x200U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                                vlTOPp->LUT_addr_r2 
                                    = vlSymsp->TOP__PPU_TOP__DOT__u_un2.Lookup_pixel;
                                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_end = 1U;
                                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_RGB 
                                    = vlTOPp->LUT_data_out2;
                                vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_w_ena = 1U;
                            } else {
                                if ((0x400U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                                    vlTOPp->LUT_addr_r2 = 0U;
                                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req11_end = 1U;
                                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req11_RGB 
                                        = vlTOPp->LUT_data_out2;
                                    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req11_w_ena = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_2))) {
            if ((0x40U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                vlTOPp->LUT_addr_r2 = vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_pixel;
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_end = 1U;
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_RGB 
                    = vlTOPp->LUT_data_out2;
                vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_w_ena = 1U;
            } else {
                if ((0x80U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                    vlTOPp->LUT_addr_r2 = vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_pixel;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_end = 1U;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_RGB 
                        = vlTOPp->LUT_data_out2;
                    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_w_ena = 1U;
                } else {
                    if ((0x100U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->LUT_addr_r2 = vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_pixel;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_RGB 
                            = vlTOPp->LUT_data_out2;
                        vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_w_ena = 1U;
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_2))) {
                if ((0x80U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                    vlTOPp->LUT_addr_r2 = vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_pixel;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_end = 1U;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_RGB 
                        = vlTOPp->LUT_data_out2;
                    vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_w_ena = 1U;
                } else {
                    if ((0x100U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->LUT_addr_r2 = vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_pixel;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_RGB 
                            = vlTOPp->LUT_data_out2;
                        vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_w_ena = 1U;
                    } else {
                        if ((0x40U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->LUT_addr_r2 = vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_pixel;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_RGB 
                                = vlTOPp->LUT_data_out2;
                            vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_w_ena = 1U;
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__random_counter_0_2))) {
                    if ((0x100U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                        vlTOPp->LUT_addr_r2 = vlSymsp->TOP__PPU_TOP__DOT__u_un1.Lookup_pixel;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_RGB 
                            = vlTOPp->LUT_data_out2;
                        vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_w_ena = 1U;
                    } else {
                        if ((0x40U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                            vlTOPp->LUT_addr_r2 = vlSymsp->TOP__PPU_TOP__DOT__u_sc.Lookup_pixel;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_RGB 
                                = vlTOPp->LUT_data_out2;
                            vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_w_ena = 1U;
                        } else {
                            if ((0x80U & (IData)(vlTOPp->PPU_TOP__DOT__u_rgb__DOT__total_req))) {
                                vlTOPp->LUT_addr_r2 
                                    = vlSymsp->TOP__PPU_TOP__DOT__u_st.Lookup_pixel;
                                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_end = 1U;
                                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_RGB 
                                    = vlTOPp->LUT_data_out2;
                                vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_w_ena = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_end = 1U;
    } else {
        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_hit) {
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_end = 1U;
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_RGB 
                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_RGB;
        } else {
            if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_hit1) {
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_end = 1U;
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_RGB 
                    = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_hit2) {
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_end = 1U;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_RGB 
                        = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_hit3) {
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_RGB 
                            = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req1_hit4) {
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_RGB 
                                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_end = 1U;
    } else {
        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_hit) {
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_end = 1U;
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_RGB 
                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_RGB;
        } else {
            if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_hit1) {
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_end = 1U;
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_RGB 
                    = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_hit2) {
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_end = 1U;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_RGB 
                        = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_hit3) {
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_RGB 
                            = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req2_hit4) {
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_RGB 
                                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_end = 1U;
    } else {
        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_hit) {
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_end = 1U;
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_RGB 
                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_RGB;
        } else {
            if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_hit1) {
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_end = 1U;
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_RGB 
                    = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_hit2) {
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_end = 1U;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_RGB 
                        = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_hit3) {
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_RGB 
                            = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req3_hit4) {
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_RGB 
                                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_end = 1U;
    } else {
        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_hit) {
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_end = 1U;
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_RGB 
                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_RGB;
        } else {
            if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_hit1) {
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_end = 1U;
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_RGB 
                    = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_hit2) {
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_end = 1U;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_RGB 
                        = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_hit3) {
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_RGB 
                            = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req4_hit4) {
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_RGB 
                                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_end = 1U;
    } else {
        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_hit) {
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_end = 1U;
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_RGB 
                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_RGB;
        } else {
            if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_hit1) {
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_end = 1U;
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_RGB 
                    = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_hit2) {
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_end = 1U;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_RGB 
                        = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_hit3) {
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_RGB 
                            = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req5_hit4) {
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_RGB 
                                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_end = 1U;
    } else {
        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_hit) {
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_end = 1U;
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_RGB 
                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_RGB;
        } else {
            if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_hit1) {
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_end = 1U;
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_RGB 
                    = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_hit2) {
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_end = 1U;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_RGB 
                        = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_hit3) {
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_RGB 
                            = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req6_hit4) {
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_RGB 
                                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_end = 1U;
    } else {
        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_hit) {
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_end = 1U;
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_RGB 
                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_RGB;
        } else {
            if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_hit1) {
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_end = 1U;
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_RGB 
                    = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_hit2) {
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_end = 1U;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_RGB 
                        = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_hit3) {
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_RGB 
                            = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req7_hit4) {
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_RGB 
                                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_end = 1U;
    } else {
        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_hit) {
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_end = 1U;
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_RGB 
                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_RGB;
        } else {
            if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_hit1) {
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_end = 1U;
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_RGB 
                    = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_hit2) {
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_end = 1U;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_RGB 
                        = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_hit3) {
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_RGB 
                            = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req8_hit4) {
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_RGB 
                                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_end = 1U;
    } else {
        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_hit) {
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_end = 1U;
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_RGB 
                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_RGB;
        } else {
            if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_hit1) {
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_end = 1U;
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_RGB 
                    = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_hit2) {
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_end = 1U;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_RGB 
                        = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_hit3) {
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_RGB 
                            = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req9_hit4) {
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_RGB 
                                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_is_zero) {
        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_end = 1U;
    } else {
        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_hit) {
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_end = 1U;
            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_RGB 
                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_RGB;
        } else {
            if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_hit1) {
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_end = 1U;
                vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_RGB 
                    = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache1_RGB;
            } else {
                if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_hit2) {
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_end = 1U;
                    vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_RGB 
                        = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache2_RGB;
                } else {
                    if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_hit3) {
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_end = 1U;
                        vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_RGB 
                            = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache3_RGB;
                    } else {
                        if (vlTOPp->PPU_TOP__DOT__u_rgb__DOT__req10_hit4) {
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_end = 1U;
                            vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_RGB 
                                = vlTOPp->PPU_TOP__DOT__u_rgb__DOT__cache4_RGB;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__Req_trans[0U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_trans;
    vlTOPp->PPU_TOP__DOT__Req_trans[1U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_trans;
    vlTOPp->PPU_TOP__DOT__Req_trans[2U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_trans;
    vlTOPp->PPU_TOP__DOT__Req_trans[3U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_trans;
    vlTOPp->PPU_TOP__DOT__Req_trans[4U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_trans;
    vlTOPp->PPU_TOP__DOT__Req_trans[5U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_trans;
    vlTOPp->PPU_TOP__DOT__Req_trans[6U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_trans;
    vlTOPp->PPU_TOP__DOT__Req_trans[7U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_trans;
    vlTOPp->PPU_TOP__DOT__Req_trans[8U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_trans;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_state_next 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_state;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_state))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_state_next 
            = ((IData)(vlTOPp->PPU_start) ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_state_next 
                = (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                   [8U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_state_next 
                    = (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_ready) 
                        & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                        [8U]) ? 2U : (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_ready) 
                                       & (~ vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                                          [8U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_state_next 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_state;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_state))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_state_next 
            = ((IData)(vlTOPp->PPU_start) ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_state_next 
                = (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                   [2U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_state_next 
                    = (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_ready) 
                        & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                        [2U]) ? 2U : (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_ready) 
                                       & (~ vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                                          [2U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_state_next 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_state;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_state))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_state_next 
            = ((IData)(vlTOPp->PPU_start) ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_state_next 
                = (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                   [9U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_state_next 
                    = (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_ready) 
                        & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                        [9U]) ? 2U : (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_ready) 
                                       & (~ vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                                          [9U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_state_next 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_state;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_state))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_state_next 
            = ((IData)(vlTOPp->PPU_start) ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_state_next 
                = (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                   [6U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_state_next 
                    = (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_ready) 
                        & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                        [6U]) ? 2U : (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_ready) 
                                       & (~ vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                                          [6U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_state_next 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_state;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_state))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_state_next 
            = ((IData)(vlTOPp->PPU_start) ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_state_next 
                = (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                   [5U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_state_next 
                    = (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_ready) 
                        & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                        [5U]) ? 2U : (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_ready) 
                                       & (~ vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                                          [5U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_state_next 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_state;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_state))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_state_next 
            = ((IData)(vlTOPp->PPU_start) ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_state_next 
                = (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                   [4U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_state_next 
                    = (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_ready) 
                        & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                        [4U]) ? 2U : (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_ready) 
                                       & (~ vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                                          [4U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_state_next 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_state;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_state))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_state_next 
            = ((IData)(vlTOPp->PPU_start) ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_state_next 
                = (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                   [0U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_state_next 
                    = (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_ready) 
                        & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                        [0U]) ? 2U : (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_ready) 
                                       & (~ vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                                          [0U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_state_next 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_state;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_state))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_state_next 
            = ((IData)(vlTOPp->PPU_start) ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_state_next 
                = (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                   [3U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_state_next 
                    = (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_ready) 
                        & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                        [3U]) ? 2U : (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_ready) 
                                       & (~ vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                                          [3U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_state_next 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_state;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_state))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_state_next 
            = ((IData)(vlTOPp->PPU_start) ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_state_next 
                = (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                   [1U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_state_next 
                    = (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_ready) 
                        & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                        [1U]) ? 2U : (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_ready) 
                                       & (~ vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                                          [1U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_state_next 
        = vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_state;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_state))) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_state_next 
            = ((IData)(vlTOPp->PPU_start) ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_state_next 
                = (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                   [7U] ? 2U : 1U);
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_state_next 
                    = (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_ready) 
                        & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                        [7U]) ? 2U : (((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_ready) 
                                       & (~ vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                                          [7U])) ? 1U
                                       : 2U));
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[0U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[1U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[2U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[3U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[4U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[5U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[6U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[7U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[8U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[9U] = 0U;
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_state))) {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[0U] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                [0U];
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[0U] 
                    = ((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z1_ready) 
                       & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                       [0U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_state))) {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[1U] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                [1U];
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[1U] 
                    = ((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z2_ready) 
                       & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                       [1U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_state))) {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[2U] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                [2U];
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[2U] 
                    = ((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z3_ready) 
                       & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                       [2U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_state))) {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[3U] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                [3U];
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[3U] 
                    = ((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z4_ready) 
                       & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                       [3U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_state))) {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[4U] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                [4U];
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[4U] 
                    = ((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z5_ready) 
                       & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                       [4U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_state))) {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[5U] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                [5U];
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[5U] 
                    = ((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z6_ready) 
                       & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                       [5U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_state))) {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[6U] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                [6U];
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[6U] 
                    = ((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z7_ready) 
                       & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                       [6U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_state))) {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[7U] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                [7U];
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[7U] 
                    = ((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z8_ready) 
                       & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                       [7U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_state))) {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[8U] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                [8U];
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[8U] 
                    = ((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z9_ready) 
                       & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                       [8U]);
            }
        }
    }
    if ((0U != (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_state))) {
        if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_state))) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[9U] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                [9U];
        } else {
            if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_state))) {
                vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready[9U] 
                    = ((IData)(vlTOPp->PPU_TOP__DOT__u_proc__DOT__Z10_ready) 
                       & vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_valid
                       [9U]);
            }
        }
    }
    vlTOPp->PPU_TOP__DOT__Req_trans[9U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_trans;
    vlTOPp->PPU_TOP__DOT__Req_RGB[0U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_RGB;
    vlTOPp->PPU_TOP__DOT__Req_RGB[1U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_RGB;
    vlTOPp->PPU_TOP__DOT__Req_RGB[2U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_RGB;
    vlTOPp->PPU_TOP__DOT__Req_RGB[3U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_RGB;
    vlTOPp->PPU_TOP__DOT__Req_RGB[4U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_RGB;
    vlTOPp->PPU_TOP__DOT__Req_RGB[5U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_RGB;
    vlTOPp->PPU_TOP__DOT__Req_RGB[6U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_RGB;
    vlTOPp->PPU_TOP__DOT__Req_RGB[7U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_RGB;
    vlTOPp->PPU_TOP__DOT__Req_RGB[8U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_RGB;
    vlTOPp->PPU_TOP__DOT__Req_RGB[9U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_RGB;
    vlTOPp->PPU_TOP__DOT__Req_RGB[0xaU] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req11_RGB;
    vlTOPp->PPU_TOP__DOT__Req_RGB[0xbU] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req12_RGB;
    vlTOPp->PPU_TOP__DOT__Req_end[0U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req1_end;
    vlTOPp->PPU_TOP__DOT__Req_end[1U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req2_end;
    vlTOPp->PPU_TOP__DOT__Req_end[2U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req3_end;
    vlTOPp->PPU_TOP__DOT__Req_end[3U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req4_end;
    vlTOPp->PPU_TOP__DOT__Req_end[4U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req5_end;
    vlTOPp->PPU_TOP__DOT__Req_end[5U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req6_end;
    vlTOPp->PPU_TOP__DOT__Req_end[6U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req7_end;
    vlTOPp->PPU_TOP__DOT__Req_end[7U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req8_end;
    vlTOPp->PPU_TOP__DOT__Req_end[8U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req9_end;
    vlTOPp->PPU_TOP__DOT__Req_end[9U] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req10_end;
    vlTOPp->PPU_TOP__DOT__Req_end[0xaU] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req11_end;
    vlTOPp->PPU_TOP__DOT__Req_end[0xbU] = vlTOPp->PPU_TOP__DOT____Vcellout__u_rgb__Req12_end;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[0U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[1U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[2U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[3U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[4U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[5U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[6U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[7U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[8U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[9U] = 0U;
    vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[0xaU] = 0U;
    if (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready
        [0U]) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound7 = 1U;
        if ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
             [0U])) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[0U]] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound7;
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready
        [1U]) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound8 = 1U;
        if ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
             [1U])) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[1U]] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound8;
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready
        [2U]) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound9 = 1U;
        if ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
             [2U])) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[2U]] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound9;
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready
        [3U]) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound10 = 1U;
        if ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
             [3U])) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[3U]] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound10;
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready
        [4U]) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound11 = 1U;
        if ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
             [4U])) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[4U]] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound11;
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready
        [5U]) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound12 = 1U;
        if ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
             [5U])) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[5U]] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound12;
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready
        [6U]) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound13 = 1U;
        if ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
             [6U])) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[6U]] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound13;
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready
        [7U]) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound14 = 1U;
        if ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
             [7U])) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[7U]] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound14;
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready
        [8U]) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound15 = 1U;
        if ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
             [8U])) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[8U]] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound15;
        }
    }
    if (vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_input_ready
        [9U]) {
        vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound16 = 1U;
        if ((0xaU >= vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map
             [9U])) {
            vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready[vlTOPp->PPU_TOP__DOT__u_proc__DOT__z_index_map[9U]] 
                = vlTOPp->PPU_TOP__DOT__u_proc__DOT____Vlvbound16;
        }
    }
}

void VPPU_TOP::_eval_initial(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPPU_TOP::_eval_initial\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__resetn = vlTOPp->resetn;
}

void VPPU_TOP::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPPU_TOP::final\n"); );
    // Variables
    VPPU_TOP__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPPU_TOP::_eval_settle(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPPU_TOP::_eval_settle\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2__2(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script__3(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status__4(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1__5(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2__6(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3__7(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4__8(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1__9(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2__10(vlSymsp);
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_bg1._settle__TOP__PPU_TOP__DOT__u_bg1__1(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_bg2._settle__TOP__PPU_TOP__DOT__u_bg2__2(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_ch1._settle__TOP__PPU_TOP__DOT__u_ch1__3(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_ch2._settle__TOP__PPU_TOP__DOT__u_ch2__4(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_ch3._settle__TOP__PPU_TOP__DOT__u_ch3__5(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_ch4._settle__TOP__PPU_TOP__DOT__u_ch4__6(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_sc._settle__TOP__PPU_TOP__DOT__u_sc__7(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_st._settle__TOP__PPU_TOP__DOT__u_st__8(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_un1._settle__TOP__PPU_TOP__DOT__u_un1__9(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_un2._settle__TOP__PPU_TOP__DOT__u_un2__10(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2__11(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1__12(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status__13(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script__14(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4__15(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3__16(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2__17(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1__18(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2__19(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1._settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1__20(vlSymsp);
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_bg1._settle__TOP__PPU_TOP__DOT__u_bg1__11(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_bg2._settle__TOP__PPU_TOP__DOT__u_bg2__12(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_ch1._settle__TOP__PPU_TOP__DOT__u_ch1__13(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_ch2._settle__TOP__PPU_TOP__DOT__u_ch2__14(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_ch3._settle__TOP__PPU_TOP__DOT__u_ch3__15(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_ch4._settle__TOP__PPU_TOP__DOT__u_ch4__16(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_sc._settle__TOP__PPU_TOP__DOT__u_sc__17(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_st._settle__TOP__PPU_TOP__DOT__u_st__18(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_un1._settle__TOP__PPU_TOP__DOT__u_un1__19(vlSymsp);
    vlSymsp->TOP__PPU_TOP__DOT__u_un2._settle__TOP__PPU_TOP__DOT__u_un2__20(vlSymsp);
}

void VPPU_TOP::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPPU_TOP::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    resetn = VL_RAND_RESET_I(1);
    PPU_start = VL_RAND_RESET_I(1);
    CPU_LUT_Cache1_pixel = VL_RAND_RESET_I(8);
    CPU_LUT_Cache2_pixel = VL_RAND_RESET_I(8);
    CPU_LUT_Cache3_pixel = VL_RAND_RESET_I(8);
    CPU_LUT_Cache4_pixel = VL_RAND_RESET_I(8);
    Background_Layer1_Address = VL_RAND_RESET_I(32);
    Background_Layer2_Address = VL_RAND_RESET_I(32);
    Character_Layer1_Address = VL_RAND_RESET_I(32);
    Character_Layer2_Address = VL_RAND_RESET_I(32);
    Character_Layer3_Address = VL_RAND_RESET_I(32);
    Character_Layer4_Address = VL_RAND_RESET_I(32);
    Script_Layer_Address = VL_RAND_RESET_I(32);
    Status_Layer_Address = VL_RAND_RESET_I(32);
    Universal_Layer1_Address = VL_RAND_RESET_I(32);
    Universal_Layer2_Address = VL_RAND_RESET_I(32);
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
    BRAM10_en_a = VL_RAND_RESET_I(1);
    BRAM10_we_a = VL_RAND_RESET_I(1);
    BRAM10_addr_a = VL_RAND_RESET_I(9);
    BRAM10_din_a = VL_RAND_RESET_Q(64);
    BRAM10_en_b = VL_RAND_RESET_I(1);
    BRAM10_addr_b = VL_RAND_RESET_I(9);
    BRAM10_dout_b = VL_RAND_RESET_Q(64);
    BRAM11_en_a = VL_RAND_RESET_I(1);
    BRAM11_we_a = VL_RAND_RESET_I(1);
    BRAM11_addr_a = VL_RAND_RESET_I(9);
    BRAM11_din_a = VL_RAND_RESET_Q(64);
    BRAM11_en_b = VL_RAND_RESET_I(1);
    BRAM11_addr_b = VL_RAND_RESET_I(9);
    BRAM11_dout_b = VL_RAND_RESET_Q(64);
    BRAM12_en_a = VL_RAND_RESET_I(1);
    BRAM12_we_a = VL_RAND_RESET_I(1);
    BRAM12_addr_a = VL_RAND_RESET_I(9);
    BRAM12_din_a = VL_RAND_RESET_Q(64);
    BRAM12_en_b = VL_RAND_RESET_I(1);
    BRAM12_addr_b = VL_RAND_RESET_I(9);
    BRAM12_dout_b = VL_RAND_RESET_Q(64);
    LUT_we = VL_RAND_RESET_I(1);
    LUT_addr_w = VL_RAND_RESET_I(8);
    LUT_data_in = VL_RAND_RESET_I(18);
    LUT_addr_r1 = VL_RAND_RESET_I(8);
    LUT_data_out1 = VL_RAND_RESET_I(18);
    LUT_addr_r2 = VL_RAND_RESET_I(8);
    LUT_data_out2 = VL_RAND_RESET_I(18);
    Background1_WX = VL_RAND_RESET_I(16);
    Background1_WY = VL_RAND_RESET_I(16);
    Background1_SCX = VL_RAND_RESET_I(16);
    Background1_SCY = VL_RAND_RESET_I(16);
    Background1_a = VL_RAND_RESET_I(8);
    Background1_z = VL_RAND_RESET_I(8);
    Background2_WX = VL_RAND_RESET_I(16);
    Background2_WY = VL_RAND_RESET_I(16);
    Background2_SCX = VL_RAND_RESET_I(16);
    Background2_SCY = VL_RAND_RESET_I(16);
    Background2_a = VL_RAND_RESET_I(8);
    Background2_z = VL_RAND_RESET_I(8);
    Character1_WX = VL_RAND_RESET_I(16);
    Character1_WY = VL_RAND_RESET_I(16);
    Character1_SCX = VL_RAND_RESET_I(16);
    Character1_SCY = VL_RAND_RESET_I(16);
    Character1_a = VL_RAND_RESET_I(8);
    Character1_z = VL_RAND_RESET_I(8);
    Character2_WX = VL_RAND_RESET_I(16);
    Character2_WY = VL_RAND_RESET_I(16);
    Character2_SCX = VL_RAND_RESET_I(16);
    Character2_SCY = VL_RAND_RESET_I(16);
    Character2_a = VL_RAND_RESET_I(8);
    Character2_z = VL_RAND_RESET_I(8);
    Character3_WX = VL_RAND_RESET_I(16);
    Character3_WY = VL_RAND_RESET_I(16);
    Character3_SCX = VL_RAND_RESET_I(16);
    Character3_SCY = VL_RAND_RESET_I(16);
    Character3_a = VL_RAND_RESET_I(8);
    Character3_z = VL_RAND_RESET_I(8);
    Character4_WX = VL_RAND_RESET_I(16);
    Character4_WY = VL_RAND_RESET_I(16);
    Character4_SCX = VL_RAND_RESET_I(16);
    Character4_SCY = VL_RAND_RESET_I(16);
    Character4_a = VL_RAND_RESET_I(8);
    Character4_z = VL_RAND_RESET_I(8);
    Script_WX = VL_RAND_RESET_I(16);
    Script_WY = VL_RAND_RESET_I(16);
    Script_SCX = VL_RAND_RESET_I(16);
    Script_SCY = VL_RAND_RESET_I(16);
    Script_a = VL_RAND_RESET_I(8);
    Script_z = VL_RAND_RESET_I(8);
    Status_WX = VL_RAND_RESET_I(16);
    Status_WY = VL_RAND_RESET_I(16);
    Status_SCX = VL_RAND_RESET_I(16);
    Status_SCY = VL_RAND_RESET_I(16);
    Status_a = VL_RAND_RESET_I(8);
    Status_z = VL_RAND_RESET_I(8);
    Universal1_WX = VL_RAND_RESET_I(16);
    Universal1_WY = VL_RAND_RESET_I(16);
    Universal1_SCX = VL_RAND_RESET_I(16);
    Universal1_SCY = VL_RAND_RESET_I(16);
    Universal1_a = VL_RAND_RESET_I(8);
    Universal1_z = VL_RAND_RESET_I(8);
    Universal2_WX = VL_RAND_RESET_I(16);
    Universal2_WY = VL_RAND_RESET_I(16);
    Universal2_SCX = VL_RAND_RESET_I(16);
    Universal2_SCY = VL_RAND_RESET_I(16);
    Universal2_a = VL_RAND_RESET_I(8);
    Universal2_z = VL_RAND_RESET_I(8);
    Final_pixel_valid = VL_RAND_RESET_I(1);
    Final_pixel_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__Clk_Counter = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<12; ++__Vi0) {
            PPU_TOP__DOT__Req_RGB[__Vi0] = VL_RAND_RESET_I(18);
    }}
    { int __Vi0=0; for (; __Vi0<12; ++__Vi0) {
            PPU_TOP__DOT__Req_trans[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<12; ++__Vi0) {
            PPU_TOP__DOT__Req_end[__Vi0] = VL_RAND_RESET_I(1);
    }}
    PPU_TOP__DOT____Vcellout__u_rgb__Req12_end = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req12_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT____Vcellout__u_rgb__Req11_end = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req11_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT____Vcellout__u_rgb__Req10_end = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req10_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req10_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT____Vcellout__u_rgb__Req9_end = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req9_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req9_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT____Vcellout__u_rgb__Req8_end = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req8_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req8_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT____Vcellout__u_rgb__Req7_end = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req7_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req7_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT____Vcellout__u_rgb__Req6_end = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req6_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req6_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT____Vcellout__u_rgb__Req5_end = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req5_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req5_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT____Vcellout__u_rgb__Req4_end = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req4_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req4_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT____Vcellout__u_rgb__Req3_end = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req3_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req3_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT____Vcellout__u_rgb__Req2_end = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req2_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req2_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT____Vcellout__u_rgb__Req1_end = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req1_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT____Vcellout__u_rgb__Req1_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_pixel_fifo__DOT__All_Decompresser_is_IDLE = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__bg1_comp_data = VL_RAND_RESET_Q(64);
    PPU_TOP__DOT__u_pixel_fifo__DOT__bg2_comp_data = VL_RAND_RESET_Q(64);
    PPU_TOP__DOT__u_pixel_fifo__DOT__ch1_comp_data = VL_RAND_RESET_Q(64);
    PPU_TOP__DOT__u_pixel_fifo__DOT__ch2_comp_data = VL_RAND_RESET_Q(64);
    PPU_TOP__DOT__u_pixel_fifo__DOT__ch3_comp_data = VL_RAND_RESET_Q(64);
    PPU_TOP__DOT__u_pixel_fifo__DOT__ch4_comp_data = VL_RAND_RESET_Q(64);
    PPU_TOP__DOT__u_pixel_fifo__DOT__uni1_comp_data = VL_RAND_RESET_Q(64);
    PPU_TOP__DOT__u_pixel_fifo__DOT__uni1_comp_count = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__uni2_comp_data = VL_RAND_RESET_Q(64);
    PPU_TOP__DOT__u_pixel_fifo__DOT__sc_comp_data = VL_RAND_RESET_Q(64);
    PPU_TOP__DOT__u_pixel_fifo__DOT__st_comp_data = VL_RAND_RESET_Q(64);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_front = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_rear = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_front = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_rear = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_front = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_rear = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_front = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_rear = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_front = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_rear = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_front = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_rear = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_front = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_rear = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_front = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_rear = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count = VL_RAND_RESET_I(9);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_front = VL_RAND_RESET_I(9);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_rear = VL_RAND_RESET_I(9);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count = VL_RAND_RESET_I(9);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_front = VL_RAND_RESET_I(9);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_rear = VL_RAND_RESET_I(9);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_inc_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_inc_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_dec_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_inc_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_dec_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_inc_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_inc_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state = VL_RAND_RESET_I(4);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state = VL_RAND_RESET_I(3);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = VL_RAND_RESET_I(3);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state = VL_RAND_RESET_I(3);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = VL_RAND_RESET_I(3);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state = VL_RAND_RESET_I(3);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next = VL_RAND_RESET_I(3);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_next_ad = VL_RAND_RESET_I(32);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_next_ad = VL_RAND_RESET_I(32);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_next_ad = VL_RAND_RESET_I(32);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_next_ad = VL_RAND_RESET_I(32);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_next_ad = VL_RAND_RESET_I(32);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_next_ad = VL_RAND_RESET_I(32);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_next_ad = VL_RAND_RESET_I(32);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_next_ad = VL_RAND_RESET_I(32);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_next_ad = VL_RAND_RESET_I(32);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_next_ad = VL_RAND_RESET_I(32);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer = VL_RAND_RESET_I(10);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic = VL_RAND_RESET_I(10);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent = VL_RAND_RESET_I(10);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req = VL_RAND_RESET_I(10);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__urgent_req = VL_RAND_RESET_I(10);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req = VL_RAND_RESET_I(10);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req = VL_RAND_RESET_I(10);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__round_end = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer = VL_RAND_RESET_I(10);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg = VL_RAND_RESET_I(32);
    PPU_TOP__DOT__u_rgb__DOT__cache1_pixel = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_rgb__DOT__cache1_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_rgb__DOT__cache1_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__cache2_pixel = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_rgb__DOT__cache2_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_rgb__DOT__cache2_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__cache3_pixel = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_rgb__DOT__cache3_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_rgb__DOT__cache3_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__cache4_pixel = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_rgb__DOT__cache4_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_rgb__DOT__cache4_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_pixel = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_pixel = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_pixel = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_pixel = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_pixel = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_pixel = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_pixel = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_pixel = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_pixel = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_pixel = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req11_exclusive_pixel = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_rgb__DOT__req11_exclusive_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_rgb__DOT__req11_exclusive_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req12_exclusive_pixel = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_rgb__DOT__req12_exclusive_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_rgb__DOT__req12_exclusive_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req1_exclusive_hit = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req2_exclusive_hit = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req3_exclusive_hit = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req4_exclusive_hit = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req5_exclusive_hit = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req6_exclusive_hit = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req7_exclusive_hit = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req8_exclusive_hit = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req9_exclusive_hit = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req10_exclusive_hit = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req1_hit1 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req1_hit2 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req1_hit3 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req1_hit4 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req2_hit1 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req2_hit2 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req2_hit3 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req2_hit4 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req3_hit1 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req3_hit2 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req3_hit3 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req3_hit4 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req4_hit1 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req4_hit2 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req4_hit3 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req4_hit4 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req5_hit1 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req5_hit2 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req5_hit3 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req5_hit4 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req6_hit1 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req6_hit2 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req6_hit3 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req6_hit4 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req7_hit1 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req7_hit2 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req7_hit3 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req7_hit4 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req8_hit1 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req8_hit2 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req8_hit3 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req8_hit4 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req9_hit1 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req9_hit2 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req9_hit3 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req9_hit4 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req10_hit1 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req10_hit2 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req10_hit3 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req10_hit4 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req1_is_zero = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req2_is_zero = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req3_is_zero = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req4_is_zero = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req5_is_zero = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req6_is_zero = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req7_is_zero = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req8_is_zero = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req9_is_zero = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req10_is_zero = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__total_req = VL_RAND_RESET_I(12);
    PPU_TOP__DOT__u_rgb__DOT__random_counter_0_3 = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_rgb__DOT__random_counter_0_1 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__random_counter_0_2 = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_rgb__DOT__req1_w_ena = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req2_w_ena = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req3_w_ena = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req4_w_ena = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req5_w_ena = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req6_w_ena = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req7_w_ena = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req8_w_ena = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req9_w_ena = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req10_w_ena = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req11_w_ena = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_rgb__DOT__req12_w_ena = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__is_new_pixel = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z1_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_proc__DOT__Z1_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z1_a = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_proc__DOT__Z1_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z1_ready = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z2_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_proc__DOT__Z2_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z2_a = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_proc__DOT__Z2_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z2_ready = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z3_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_proc__DOT__Z3_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z3_a = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_proc__DOT__Z3_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z3_ready = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z4_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_proc__DOT__Z4_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z4_a = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_proc__DOT__Z4_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z4_ready = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z5_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_proc__DOT__Z5_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z5_a = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_proc__DOT__Z5_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z5_ready = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z6_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_proc__DOT__Z6_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z6_a = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_proc__DOT__Z6_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z6_ready = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z7_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_proc__DOT__Z7_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z7_a = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_proc__DOT__Z7_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z7_ready = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z8_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_proc__DOT__Z8_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z8_a = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_proc__DOT__Z8_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z8_ready = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z9_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_proc__DOT__Z9_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z9_a = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_proc__DOT__Z9_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z9_ready = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z10_RGB = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_proc__DOT__Z10_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z10_a = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_proc__DOT__Z10_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Z10_ready = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipeline_move = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe1_R = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe1_G = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe1_B = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe1_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe1_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe2_R = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe2_G = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe2_B = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe2_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe2_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe3_R = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe3_G = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe3_B = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe3_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe3_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe4_R = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe4_G = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe4_B = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe4_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe4_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe5_R = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe5_G = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe5_B = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe5_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe5_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe6_R = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe6_G = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe6_B = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe6_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe6_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe7_R = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe7_G = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe7_B = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe7_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe7_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe8_R = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe8_G = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe8_B = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe8_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe8_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe9_R = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe9_G = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe9_B = VL_RAND_RESET_I(15);
    PPU_TOP__DOT__u_proc__DOT__Pipe9_is_trans = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__Pipe9_valid = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT__all_fsm_reset = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<11; ++__Vi0) {
            PPU_TOP__DOT__u_proc__DOT__layer_RGB[__Vi0] = VL_RAND_RESET_I(18);
    }}
    { int __Vi0=0; for (; __Vi0<11; ++__Vi0) {
            PPU_TOP__DOT__u_proc__DOT__layer_is_trans[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<11; ++__Vi0) {
            PPU_TOP__DOT__u_proc__DOT__layer_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<11; ++__Vi0) {
            PPU_TOP__DOT__u_proc__DOT__layer_z[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<11; ++__Vi0) {
            PPU_TOP__DOT__u_proc__DOT__layer_a[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<11; ++__Vi0) {
            PPU_TOP__DOT__u_proc__DOT__layer_ready[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            PPU_TOP__DOT__u_proc__DOT__z_index_map[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            PPU_TOP__DOT__u_proc__DOT__z_input_RGB[__Vi0] = VL_RAND_RESET_I(18);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            PPU_TOP__DOT__u_proc__DOT__z_input_is_trans[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            PPU_TOP__DOT__u_proc__DOT__z_input_a[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            PPU_TOP__DOT__u_proc__DOT__z_input_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            PPU_TOP__DOT__u_proc__DOT__z_input_ready[__Vi0] = VL_RAND_RESET_I(1);
    }}
    PPU_TOP__DOT__u_proc__DOT__Z1_state = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z1_state_next = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z2_state = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z2_state_next = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z3_state = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z3_state_next = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z4_state = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z4_state_next = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z5_state = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z5_state_next = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z6_state = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z6_state_next = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z7_state = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z7_state_next = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z8_state = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z8_state_next = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z9_state = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z9_state_next = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z10_state = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__Z10_state_next = VL_RAND_RESET_I(2);
    PPU_TOP__DOT__u_proc__DOT__main_state = VL_RAND_RESET_I(4);
    PPU_TOP__DOT__u_proc__DOT__main_state_next = VL_RAND_RESET_I(4);
    PPU_TOP__DOT__u_proc__DOT__main_state_counter_x = VL_RAND_RESET_I(9);
    PPU_TOP__DOT__u_proc__DOT__main_state_counter_y = VL_RAND_RESET_I(9);
    PPU_TOP__DOT__u_proc__DOT__main_state_counter_x_next = VL_RAND_RESET_I(9);
    PPU_TOP__DOT__u_proc__DOT__main_state_counter_y_next = VL_RAND_RESET_I(9);
    PPU_TOP__DOT__u_proc__DOT____Vlvbound2 = VL_RAND_RESET_I(4);
    PPU_TOP__DOT__u_proc__DOT____Vlvbound3 = VL_RAND_RESET_I(18);
    PPU_TOP__DOT__u_proc__DOT____Vlvbound4 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT____Vlvbound5 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT____Vlvbound6 = VL_RAND_RESET_I(8);
    PPU_TOP__DOT__u_proc__DOT____Vlvbound7 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT____Vlvbound8 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT____Vlvbound9 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT____Vlvbound10 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT____Vlvbound11 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT____Vlvbound12 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT____Vlvbound13 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT____Vlvbound14 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT____Vlvbound15 = VL_RAND_RESET_I(1);
    PPU_TOP__DOT__u_proc__DOT____Vlvbound16 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<11; ++__Vi0) {
            __Vchglast__TOP__PPU_TOP__DOT__u_proc__DOT__layer_ready[__Vi0] = VL_RAND_RESET_I(1);
    }}
    __Vchglast__TOP__PPU_TOP__DOT__u_bg1__rgb_convert_end = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PPU_TOP__DOT__u_bg2__rgb_convert_end = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PPU_TOP__DOT__u_ch1__rgb_convert_end = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PPU_TOP__DOT__u_ch2__rgb_convert_end = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PPU_TOP__DOT__u_ch3__rgb_convert_end = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PPU_TOP__DOT__u_ch4__rgb_convert_end = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PPU_TOP__DOT__u_sc__rgb_convert_end = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PPU_TOP__DOT__u_st__rgb_convert_end = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PPU_TOP__DOT__u_un1__rgb_convert_end = VL_RAND_RESET_I(1);
    __Vchglast__TOP__PPU_TOP__DOT__u_un2__rgb_convert_end = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
