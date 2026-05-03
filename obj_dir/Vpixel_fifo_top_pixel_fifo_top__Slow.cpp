// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpixel_fifo_top.h for the primary calling header

#include "Vpixel_fifo_top_pixel_fifo_top.h"
#include "Vpixel_fifo_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vpixel_fifo_top_pixel_fifo_top) {
    VL_CELL(u_decomp_uni1, Vpixel_fifo_top_Decompresser);
    VL_CELL(u_decomp_uni2, Vpixel_fifo_top_Decompresser);
    VL_CELL(u_decomp_script, Vpixel_fifo_top_Decompresser);
    VL_CELL(u_decomp_status, Vpixel_fifo_top_Decompresser);
    VL_CELL(u_decomp_ch1, Vpixel_fifo_top_Decompresser);
    VL_CELL(u_decomp_ch2, Vpixel_fifo_top_Decompresser);
    VL_CELL(u_decomp_ch3, Vpixel_fifo_top_Decompresser);
    VL_CELL(u_decomp_ch4, Vpixel_fifo_top_Decompresser);
    VL_CELL(u_decomp_bg1, Vpixel_fifo_top_Decompresser);
    VL_CELL(u_decomp_bg2, Vpixel_fifo_top_Decompresser);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vpixel_fifo_top_pixel_fifo_top::__Vconfigure(Vpixel_fifo_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vpixel_fifo_top_pixel_fifo_top::~Vpixel_fifo_top_pixel_fifo_top() {
}

void Vpixel_fifo_top_pixel_fifo_top::_settle__TOP__pixel_fifo_top__1(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpixel_fifo_top_pixel_fifo_top::_settle__TOP__pixel_fifo_top__1\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                if (
                                                    (0x40U 
                                                     & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                                    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_inc_want = 1U;
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
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((0x20U 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_inc_want = 1U;
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
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_inc_want = 1U;
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
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_inc_want = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_inc_want = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((2U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_inc_want = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_inc_want = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                         >> 6U)))) {
                                                    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_inc_want = 1U;
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
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & (~ ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                           >> 1U)) 
                                       | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 2U)) | 
                                      ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 4U)) 
                                    | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 6U)) 
                                  | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     >> 7U))))) {
                        if ((0x100U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_inc_want = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_inc_want = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & (~ ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                           >> 1U)) 
                                       | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 2U)) | 
                                      ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 4U)) 
                                    | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                       >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 6U)) 
                                  | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     >> 7U))))) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 8U)))) {
                            if ((0x200U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_inc_want = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__uni2_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                vlSymsp->TOP__pixel_fifo_top.__PVT__uni2_comp_data 
                    = vlTOPp->BRAM7_dout_b;
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__uni1_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__uni1_comp_data 
                = vlTOPp->BRAM7_dout_b;
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__st_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            if ((2U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                if ((3U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                        vlSymsp->TOP__pixel_fifo_top.__PVT__st_comp_data 
                            = vlTOPp->BRAM7_dout_b;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__sc_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
            if ((2U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                if ((3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state))) {
                    vlSymsp->TOP__pixel_fifo_top.__PVT__sc_comp_data 
                        = vlTOPp->BRAM7_dout_b;
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__ch4_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            if ((2U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                if ((3U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                    if ((4U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                        vlSymsp->TOP__pixel_fifo_top.__PVT__ch4_comp_data 
                            = vlTOPp->BRAM8_dout_b;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__ch3_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            if ((2U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                if ((3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                    vlSymsp->TOP__pixel_fifo_top.__PVT__ch3_comp_data 
                        = vlTOPp->BRAM8_dout_b;
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__ch2_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
                vlSymsp->TOP__pixel_fifo_top.__PVT__ch2_comp_data 
                    = vlTOPp->BRAM8_dout_b;
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__ch1_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
        if ((1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state))) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__ch1_comp_data 
                = vlTOPp->BRAM8_dout_b;
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__bg2_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state))) {
                vlSymsp->TOP__pixel_fifo_top.__PVT__bg2_comp_data 
                    = vlTOPp->BRAM9_dout_b;
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__bg1_comp_data = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state))) {
        if ((1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state))) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__bg1_comp_data 
                = vlTOPp->BRAM9_dout_b;
        }
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM9_we_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.BRAM9_we_a = 1U;
                        } else {
                            if ((2U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.BRAM9_we_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM9_en_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.BRAM9_en_a = 1U;
                        } else {
                            if ((2U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.BRAM9_en_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM7_en_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlSymsp->TOP__pixel_fifo_top.BRAM7_en_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.BRAM7_en_a = 1U;
                        } else {
                            if ((0x200U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.BRAM7_en_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM7_we_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlSymsp->TOP__pixel_fifo_top.BRAM7_we_a = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.BRAM7_we_a = 1U;
                        } else {
                            if ((0x200U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.BRAM7_we_a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM8_en_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlSymsp->TOP__pixel_fifo_top.BRAM8_en_a = 1U;
                                } else {
                                    if ((8U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlSymsp->TOP__pixel_fifo_top.BRAM8_en_a = 1U;
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlSymsp->TOP__pixel_fifo_top.BRAM8_en_a = 1U;
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlSymsp->TOP__pixel_fifo_top.BRAM8_en_a = 1U;
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
    vlSymsp->TOP__pixel_fifo_top.BRAM8_we_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlSymsp->TOP__pixel_fifo_top.BRAM8_we_a = 1U;
                                } else {
                                    if ((8U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlSymsp->TOP__pixel_fifo_top.BRAM8_we_a = 1U;
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlSymsp->TOP__pixel_fifo_top.BRAM8_we_a = 1U;
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlSymsp->TOP__pixel_fifo_top.BRAM8_we_a = 1U;
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
    vlSymsp->TOP__pixel_fifo_top.BRAM9_addr_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.BRAM9_addr_a 
                                = (0xffU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_rear));
                        } else {
                            if ((2U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.BRAM9_addr_a 
                                    = (0x100U | (0xffU 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_rear)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM9_din_a = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.BRAM9_din_a 
                                = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)));
                        } else {
                            if ((2U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.BRAM9_din_a 
                                    = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                        << 0x20U) | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM7_din_a = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlSymsp->TOP__pixel_fifo_top.BRAM7_din_a 
                                                    = 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))
                                                      ? 
                                                     (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)))
                                                      : 
                                                     (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.BRAM7_din_a 
                                = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)));
                        } else {
                            if ((0x200U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.BRAM7_din_a 
                                    = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                        << 0x20U) | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM8_din_a = 0ULL;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlSymsp->TOP__pixel_fifo_top.BRAM8_din_a 
                                        = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)));
                                } else {
                                    if ((8U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlSymsp->TOP__pixel_fifo_top.BRAM8_din_a 
                                            = (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)));
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlSymsp->TOP__pixel_fifo_top.BRAM8_din_a 
                                                = (
                                                   ((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)));
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlSymsp->TOP__pixel_fifo_top.BRAM8_din_a 
                                                    = 
                                                    (((QData)((IData)(vlTOPp->EMEM_rdata)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__tem_32_reg)));
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
    vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                    vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_a 
                                        = (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_rear));
                                } else {
                                    if ((8U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_a 
                                            = (0x1ffU 
                                               & ((IData)(0x80U) 
                                                  + 
                                                  (0x7fU 
                                                   & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_rear))));
                                    } else {
                                        if ((0x10U 
                                             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_a 
                                                = (0x1ffU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0x7fU 
                                                       & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_rear))));
                                        } else {
                                            if ((0x20U 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_a 
                                                    = 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        + 
                                                        (0x7fU 
                                                         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_rear))));
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
    vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_a = 0U;
    if ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
        if ((1U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
            if ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__main_state))) {
                if (((IData)(vlTOPp->EMEM_ready) & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__emem_r_counter))) {
                    if ((1U & ((((((((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                     | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                        >> 1U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                   | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                      >> 3U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                 | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                    >> 5U)) | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                               | ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                  >> 7U)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer) 
                                                     >> 5U)))) {
                                                vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_a 
                                                    = 
                                                    (0x1ffU 
                                                     & ((0x40U 
                                                         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))
                                                         ? 
                                                        ((IData)(0x100U) 
                                                         + 
                                                         (0x7fU 
                                                          & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_rear)))
                                                         : 
                                                        ((IData)(0x180U) 
                                                         + 
                                                         (0x7fU 
                                                          & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_rear)))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x100U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                            vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_a 
                                = (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_rear));
                        } else {
                            if ((0x200U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__should_read_layer))) {
                                vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_a 
                                    = (0x1ffU & ((IData)(0x80U) 
                                                 + 
                                                 (0x7fU 
                                                  & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_rear))));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_r_master 
        = ((0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)) 
           | (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_r_master 
        = ((2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)) 
           | (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_script.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_status.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_script.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state_next = 3U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_status.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state_next = 4U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM7_read_state_next = 2U;
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM7_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_script.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_status.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM7_en_b = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_script.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_b = 
            (0x1ffU & ((IData)(0x100U) + (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_status.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_b = 
            (0x1ffU & ((IData)(0x180U) + (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_b = 
            (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM7_addr_b = 
            (0x1ffU & ((IData)(0x80U) + (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_front))));
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch3.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch4.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state_next = 2U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch3.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state_next = 3U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch4.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM8_read_state_next = 4U;
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM8_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch3.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch4.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM8_en_b = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_b = 
            (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_b = 
            (0x1ffU & ((IData)(0x80U) + (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch3.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_b = 
            (0x1ffU & ((IData)(0x100U) + (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch4.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__clk_counter)))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM8_addr_b = 
            (0x1ffU & ((IData)(0x180U) + (0x7fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_front))));
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer = 0U;
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__urgent_req 
        = ((((0x40U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_count)) 
             & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg1.__PVT__Compressed_FIFO_ena)) 
            << 9U) | ((((0x40U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_count)) 
                        & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg2.__PVT__Compressed_FIFO_ena)) 
                       << 8U) | ((((0x20U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_count)) 
                                   & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch1.__PVT__Compressed_FIFO_ena)) 
                                  << 7U) | ((((0x20U 
                                               >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_count)) 
                                              & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch2.__PVT__Compressed_FIFO_ena)) 
                                             << 6U) 
                                            | ((((0x20U 
                                                  >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_count)) 
                                                 & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch3.__PVT__Compressed_FIFO_ena)) 
                                                << 5U) 
                                               | ((((0x20U 
                                                     >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_count)) 
                                                    & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch4.__PVT__Compressed_FIFO_ena)) 
                                                   << 4U) 
                                                  | ((((0x20U 
                                                        >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_count)) 
                                                       & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_script.__PVT__Compressed_FIFO_ena)) 
                                                      << 3U) 
                                                     | ((((0x20U 
                                                           >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_count)) 
                                                          & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_status.__PVT__Compressed_FIFO_ena)) 
                                                         << 2U) 
                                                        | ((((0x20U 
                                                              >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_count)) 
                                                             & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni1.__PVT__Compressed_FIFO_ena)) 
                                                            << 1U) 
                                                           | ((0x20U 
                                                               >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_count)) 
                                                              & (IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni2.__PVT__Compressed_FIFO_ena)))))))))));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode 
        = (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__urgent_req));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x3feU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | ((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg1.__PVT__Compressed_FIFO_ena) 
              & (0xf0U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_count))));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x3fdU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg2.__PVT__Compressed_FIFO_ena) 
               & (0xf0U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_count))) 
              << 1U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x3fbU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch1.__PVT__Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char1_fifo_count))) 
              << 2U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x3f7U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch2.__PVT__Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char2_fifo_count))) 
              << 3U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x3efU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch3.__PVT__Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char3_fifo_count))) 
              << 4U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x3dfU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_ch4.__PVT__Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__char4_fifo_count))) 
              << 5U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x3bfU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_script.__PVT__Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__script_fifo_count))) 
              << 6U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x37fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_status.__PVT__Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__status_fifo_count))) 
              << 7U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x2ffU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni1.__PVT__Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni1_fifo_count))) 
              << 8U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req 
        = ((0x1ffU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_uni2.__PVT__Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__uni2_fifo_count))) 
              << 9U));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req 
        = ((0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__urgent_req))
            ? (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__basic_req)
            : (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__urgent_req));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x3feU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (1U & ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                     ? ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                        & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent)))
                     : ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                        & (~ (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic))))));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x3fdU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (2U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                          >> 1U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 1U))) : (
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 1U) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 1U)))) 
                    << 1U)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x3fbU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (4U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                          >> 2U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 2U))) : (
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 2U) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 2U)))) 
                    << 2U)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x3f7U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (8U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                          >> 3U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 3U))) : (
                                                   ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 3U) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 3U)))) 
                    << 3U)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x3efU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (0x10U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                             >> 4U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 4U))) : 
                        (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                          >> 4U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 4U)))) << 4U)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x3dfU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (0x20U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                             >> 5U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 5U))) : 
                        (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                          >> 5U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 5U)))) << 5U)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x3bfU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (0x40U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                             >> 6U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 6U))) : 
                        (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                          >> 6U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 6U)))) << 6U)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x37fU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (0x80U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                             >> 7U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 7U))) : 
                        (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                          >> 7U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 7U)))) << 7U)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x2ffU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (0x100U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                          ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                              >> 8U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                           >> 8U)))
                          : (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                              >> 8U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                           >> 8U)))) 
                        << 8U)));
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req 
        = ((0x1ffU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)) 
           | (0x200U & (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__is_urgent_mode)
                          ? (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                              >> 9U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_urgent) 
                                           >> 9U)))
                          : (((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req) 
                              >> 9U) & (~ ((IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__last_read_basic) 
                                           >> 9U)))) 
                        << 9U)));
    if ((1U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
            = (1U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
    } else {
        if ((2U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                = (2U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
        } else {
            if ((4U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                    = (4U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
            } else {
                if ((8U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
                    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                        = (8U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
                } else {
                    if ((0x10U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
                        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                            = (0x10U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
                    } else {
                        if ((0x20U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
                            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                                = (0x20U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
                        } else {
                            if ((0x40U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
                                vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                                    = (0x40U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
                            } else {
                                if ((0x80U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
                                    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                                        = (0x80U | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
                                } else {
                                    if ((0x100U & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
                                        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                                            = (0x100U 
                                               | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
                                    } else {
                                        if ((0x200U 
                                             & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req))) {
                                            vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer 
                                                = (0x200U 
                                                   | (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__next_should_read_layer));
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
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__round_end 
        = ((0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__valid_req)) 
           & (0U == (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__masked_req)));
}

void Vpixel_fifo_top_pixel_fifo_top::_settle__TOP__pixel_fifo_top__2(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpixel_fifo_top_pixel_fifo_top::_settle__TOP__pixel_fifo_top__2\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_dec_want = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__BRAM9_read_state_next = 2U;
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM9_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM9_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM9_en_b = 1U;
    }
    vlSymsp->TOP__pixel_fifo_top.BRAM9_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg1.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM9_addr_b = 
            (0xffU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__pixel_fifo_top__u_decomp_bg2.__PVT__Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlSymsp->TOP__pixel_fifo_top.BRAM9_addr_b = 
            (0x1ffU & ((IData)(0x100U) + (0xffU & (IData)(vlSymsp->TOP__pixel_fifo_top.__PVT__u_compressed_fifo__DOT__back2_fifo_front))));
    }
}

void Vpixel_fifo_top_pixel_fifo_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpixel_fifo_top_pixel_fifo_top::_ctor_var_reset\n"); );
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
    uni1_decomp_ena = VL_RAND_RESET_I(1);
    uni1_decomp_dequeue = VL_RAND_RESET_I(1);
    uni1_decomp_r_master = VL_RAND_RESET_I(1);
    uni1_decomp_data = VL_RAND_RESET_Q(64);
    uni1_decomp_empty = VL_RAND_RESET_I(1);
    uni2_decomp_ena = VL_RAND_RESET_I(1);
    uni2_decomp_dequeue = VL_RAND_RESET_I(1);
    uni2_decomp_r_master = VL_RAND_RESET_I(1);
    uni2_decomp_data = VL_RAND_RESET_Q(64);
    uni2_decomp_empty = VL_RAND_RESET_I(1);
    sc_decomp_ena = VL_RAND_RESET_I(1);
    sc_decomp_dequeue = VL_RAND_RESET_I(1);
    sc_decomp_r_master = VL_RAND_RESET_I(1);
    sc_decomp_data = VL_RAND_RESET_Q(64);
    sc_decomp_empty = VL_RAND_RESET_I(1);
    st_decomp_ena = VL_RAND_RESET_I(1);
    st_decomp_dequeue = VL_RAND_RESET_I(1);
    st_decomp_r_master = VL_RAND_RESET_I(1);
    st_decomp_data = VL_RAND_RESET_Q(64);
    st_decomp_empty = VL_RAND_RESET_I(1);
    ch1_decomp_ena = VL_RAND_RESET_I(1);
    ch1_decomp_dequeue = VL_RAND_RESET_I(1);
    ch1_decomp_r_master = VL_RAND_RESET_I(1);
    ch1_decomp_data = VL_RAND_RESET_Q(64);
    ch1_decomp_empty = VL_RAND_RESET_I(1);
    ch2_decomp_ena = VL_RAND_RESET_I(1);
    ch2_decomp_dequeue = VL_RAND_RESET_I(1);
    ch2_decomp_r_master = VL_RAND_RESET_I(1);
    ch2_decomp_data = VL_RAND_RESET_Q(64);
    ch2_decomp_empty = VL_RAND_RESET_I(1);
    ch3_decomp_ena = VL_RAND_RESET_I(1);
    ch3_decomp_dequeue = VL_RAND_RESET_I(1);
    ch3_decomp_r_master = VL_RAND_RESET_I(1);
    ch3_decomp_data = VL_RAND_RESET_Q(64);
    ch3_decomp_empty = VL_RAND_RESET_I(1);
    ch4_decomp_ena = VL_RAND_RESET_I(1);
    ch4_decomp_dequeue = VL_RAND_RESET_I(1);
    ch4_decomp_r_master = VL_RAND_RESET_I(1);
    ch4_decomp_data = VL_RAND_RESET_Q(64);
    ch4_decomp_empty = VL_RAND_RESET_I(1);
    bg1_decomp_ena = VL_RAND_RESET_I(1);
    bg1_decomp_dequeue = VL_RAND_RESET_I(1);
    bg1_decomp_r_master = VL_RAND_RESET_I(1);
    bg1_decomp_data = VL_RAND_RESET_Q(64);
    bg1_decomp_empty = VL_RAND_RESET_I(1);
    bg2_decomp_ena = VL_RAND_RESET_I(1);
    bg2_decomp_dequeue = VL_RAND_RESET_I(1);
    bg2_decomp_r_master = VL_RAND_RESET_I(1);
    bg2_decomp_data = VL_RAND_RESET_Q(64);
    bg2_decomp_empty = VL_RAND_RESET_I(1);
    __PVT__bg1_comp_data = VL_RAND_RESET_Q(64);
    __PVT__bg2_comp_data = VL_RAND_RESET_Q(64);
    __PVT__ch1_comp_data = VL_RAND_RESET_Q(64);
    __PVT__ch2_comp_data = VL_RAND_RESET_Q(64);
    __PVT__ch3_comp_data = VL_RAND_RESET_Q(64);
    __PVT__ch4_comp_data = VL_RAND_RESET_Q(64);
    __PVT__uni1_comp_data = VL_RAND_RESET_Q(64);
    __PVT__uni2_comp_data = VL_RAND_RESET_Q(64);
    __PVT__sc_comp_data = VL_RAND_RESET_Q(64);
    __PVT__st_comp_data = VL_RAND_RESET_Q(64);
    __PVT__u_compressed_fifo__DOT__uni1_fifo_count = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__uni1_fifo_front = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__uni1_fifo_rear = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__uni2_fifo_count = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__uni2_fifo_front = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__uni2_fifo_rear = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__script_fifo_count = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__script_fifo_front = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__script_fifo_rear = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__status_fifo_count = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__status_fifo_front = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__status_fifo_rear = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__char1_fifo_count = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__char1_fifo_front = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__char1_fifo_rear = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__char2_fifo_count = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__char2_fifo_front = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__char2_fifo_rear = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__char3_fifo_count = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__char3_fifo_front = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__char3_fifo_rear = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__char4_fifo_count = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__char4_fifo_front = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__char4_fifo_rear = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__back1_fifo_count = VL_RAND_RESET_I(9);
    __PVT__u_compressed_fifo__DOT__back1_fifo_front = VL_RAND_RESET_I(9);
    __PVT__u_compressed_fifo__DOT__back1_fifo_rear = VL_RAND_RESET_I(9);
    __PVT__u_compressed_fifo__DOT__back2_fifo_count = VL_RAND_RESET_I(9);
    __PVT__u_compressed_fifo__DOT__back2_fifo_front = VL_RAND_RESET_I(9);
    __PVT__u_compressed_fifo__DOT__back2_fifo_rear = VL_RAND_RESET_I(9);
    __PVT__u_compressed_fifo__DOT__back1_fifo_inc_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__back1_fifo_dec_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__back2_fifo_inc_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__back2_fifo_dec_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__char1_fifo_inc_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__char1_fifo_dec_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__char2_fifo_inc_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__char2_fifo_dec_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__char3_fifo_inc_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__char3_fifo_dec_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__char4_fifo_inc_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__char4_fifo_dec_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__script_fifo_inc_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__script_fifo_dec_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__status_fifo_inc_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__status_fifo_dec_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__uni1_fifo_inc_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__uni1_fifo_dec_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__uni2_fifo_inc_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__uni2_fifo_dec_want = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__clk_counter = VL_RAND_RESET_I(2);
    __PVT__u_compressed_fifo__DOT__back1_fifo_r_master = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__back2_fifo_r_master = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__main_state = VL_RAND_RESET_I(4);
    __PVT__u_compressed_fifo__DOT__BRAM7_read_state = VL_RAND_RESET_I(3);
    __PVT__u_compressed_fifo__DOT__BRAM7_read_state_next = VL_RAND_RESET_I(3);
    __PVT__u_compressed_fifo__DOT__BRAM8_read_state = VL_RAND_RESET_I(3);
    __PVT__u_compressed_fifo__DOT__BRAM8_read_state_next = VL_RAND_RESET_I(3);
    __PVT__u_compressed_fifo__DOT__BRAM9_read_state = VL_RAND_RESET_I(3);
    __PVT__u_compressed_fifo__DOT__BRAM9_read_state_next = VL_RAND_RESET_I(3);
    __PVT__u_compressed_fifo__DOT__uni1_next_ad = VL_RAND_RESET_I(32);
    __PVT__u_compressed_fifo__DOT__uni2_next_ad = VL_RAND_RESET_I(32);
    __PVT__u_compressed_fifo__DOT__script_next_ad = VL_RAND_RESET_I(32);
    __PVT__u_compressed_fifo__DOT__status_next_ad = VL_RAND_RESET_I(32);
    __PVT__u_compressed_fifo__DOT__char1_next_ad = VL_RAND_RESET_I(32);
    __PVT__u_compressed_fifo__DOT__char2_next_ad = VL_RAND_RESET_I(32);
    __PVT__u_compressed_fifo__DOT__char3_next_ad = VL_RAND_RESET_I(32);
    __PVT__u_compressed_fifo__DOT__char4_next_ad = VL_RAND_RESET_I(32);
    __PVT__u_compressed_fifo__DOT__back1_next_ad = VL_RAND_RESET_I(32);
    __PVT__u_compressed_fifo__DOT__back2_next_ad = VL_RAND_RESET_I(32);
    __PVT__u_compressed_fifo__DOT__next_should_read_layer = VL_RAND_RESET_I(10);
    __PVT__u_compressed_fifo__DOT__last_read_basic = VL_RAND_RESET_I(10);
    __PVT__u_compressed_fifo__DOT__last_read_urgent = VL_RAND_RESET_I(10);
    __PVT__u_compressed_fifo__DOT__valid_req = VL_RAND_RESET_I(10);
    __PVT__u_compressed_fifo__DOT__urgent_req = VL_RAND_RESET_I(10);
    __PVT__u_compressed_fifo__DOT__basic_req = VL_RAND_RESET_I(10);
    __PVT__u_compressed_fifo__DOT__masked_req = VL_RAND_RESET_I(10);
    __PVT__u_compressed_fifo__DOT__round_end = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__is_urgent_mode = VL_RAND_RESET_I(1);
    __PVT__u_compressed_fifo__DOT__should_read_layer = VL_RAND_RESET_I(10);
    __PVT__u_compressed_fifo__DOT__emem_r_counter = VL_RAND_RESET_I(8);
    __PVT__u_compressed_fifo__DOT__tem_32_reg = VL_RAND_RESET_I(32);
}
