// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpixel_fifo_top.h for the primary calling header

#include "Vpixel_fifo_top_Decompresser.h"
#include "Vpixel_fifo_top__Syms.h"

void Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_bg1__11(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_bg1__11\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if (this->__PVT__tdm_match) {
        if ((((IData)(this->__PVT__compressed_fifo_r_ena) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((IData)(this->__PVT__r_end_req)
                                          ? 2U : (((IData)(this->__PVT__tdm_match) 
                                                   & (((IData)(this->__PVT__compressed_fifo_r_ena) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
                                                      & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_r_master)))
                                                   ? 6U
                                                   : 1U));
        } else {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__r_state_next = 7U;
                if (this->__PVT__r_end_req) {
                    this->__PVT__r_state_next = 2U;
                }
            } else {
                if ((7U == (IData)(this->__PVT__r_state))) {
                    if (((((((((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter)) 
                               | (1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                              | (2U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                             | (3U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                            | (4U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                           | (5U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                          | (6U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                         | (7U == (IData)(this->__PVT__compressed_FIFO_reg_counter)))) {
                        if ((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                            this->__PVT__r_state_next = 7U;
                            if (this->__PVT__r_end_req) {
                                this->__PVT__r_state_next = 2U;
                            }
                        } else {
                            if ((1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                this->__PVT__r_state_next = 7U;
                                if (this->__PVT__r_end_req) {
                                    this->__PVT__r_state_next = 2U;
                                }
                            } else {
                                if ((2U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                    this->__PVT__r_state_next = 7U;
                                    if (this->__PVT__r_end_req) {
                                        this->__PVT__r_state_next = 2U;
                                    }
                                } else {
                                    if ((3U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                        this->__PVT__r_state_next = 7U;
                                        if (this->__PVT__r_end_req) {
                                            this->__PVT__r_state_next = 2U;
                                        }
                                    } else {
                                        if ((4U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                            this->__PVT__r_state_next = 7U;
                                            if (this->__PVT__r_end_req) {
                                                this->__PVT__r_state_next = 2U;
                                            }
                                        } else {
                                            if ((5U 
                                                 == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                                this->__PVT__r_state_next = 7U;
                                                if (this->__PVT__r_end_req) {
                                                    this->__PVT__r_state_next = 2U;
                                                }
                                            } else {
                                                if (
                                                    (6U 
                                                     == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                                    this->__PVT__r_state_next = 7U;
                                                    if (this->__PVT__r_end_req) {
                                                        this->__PVT__r_state_next = 2U;
                                                    }
                                                } else {
                                                    this->__PVT__r_state_next = 1U;
                                                    if (this->__PVT__r_end_req) {
                                                        this->__PVT__r_state_next = 2U;
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
                    if ((2U == (IData)(this->__PVT__r_state))) {
                        if (vlTOPp->PPU_start) {
                            if (vlTOPp->PPU_start) {
                                this->__PVT__r_state_next = 2U;
                            }
                        } else {
                            this->__PVT__r_state_next = 0U;
                        }
                    }
                }
            }
        }
    }
    this->Compressed_FIFO_dequeue = 0U;
    if (this->__PVT__tdm_match) {
        if ((((IData)(this->__PVT__compressed_fifo_r_ena) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
    this->__PVT__compressed_fifo_r_data = 0ULL;
    if (this->__PVT__compressed_fifo_r_state) {
        if (this->__PVT__compressed_fifo_r_state) {
            this->__PVT__compressed_fifo_r_data = vlTOPp->pixel_fifo_top__DOT__bg1_comp_data;
        }
    } else {
        this->__PVT__compressed_fifo_r_data = 0ULL;
    }
    this->__PVT__r_8 = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U == (IData)(this->__PVT__r_state))) {
                if (this->__PVT__compressed_FIFO_r_req) {
                    this->__PVT__r_8 = (0xffU & (IData)(this->__PVT__compressed_fifo_r_data));
                }
            } else {
                if ((7U == (IData)(this->__PVT__r_state))) {
                    if (((((((((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter)) 
                               | (1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                              | (2U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                             | (3U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                            | (4U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                           | (5U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                          | (6U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                         | (7U == (IData)(this->__PVT__compressed_FIFO_reg_counter)))) {
                        if ((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                            if (this->__PVT__compressed_FIFO_r_req) {
                                this->__PVT__r_8 = 
                                    (0xffU & (IData)(this->__PVT__compressed_FIFO_reg_64));
                            }
                        } else {
                            if ((1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                if (this->__PVT__compressed_FIFO_r_req) {
                                    this->__PVT__r_8 
                                        = (0xffU & (IData)(
                                                           (this->__PVT__compressed_FIFO_reg_64 
                                                            >> 8U)));
                                }
                            } else {
                                if ((2U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                    if (this->__PVT__compressed_FIFO_r_req) {
                                        this->__PVT__r_8 
                                            = (0xffU 
                                               & (IData)(
                                                         (this->__PVT__compressed_FIFO_reg_64 
                                                          >> 0x10U)));
                                    }
                                } else {
                                    if ((3U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                        if (this->__PVT__compressed_FIFO_r_req) {
                                            this->__PVT__r_8 
                                                = (0xffU 
                                                   & (IData)(
                                                             (this->__PVT__compressed_FIFO_reg_64 
                                                              >> 0x18U)));
                                        }
                                    } else {
                                        if ((4U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                            if (this->__PVT__compressed_FIFO_r_req) {
                                                this->__PVT__r_8 
                                                    = 
                                                    (0xffU 
                                                     & (IData)(
                                                               (this->__PVT__compressed_FIFO_reg_64 
                                                                >> 0x20U)));
                                            }
                                        } else {
                                            if ((5U 
                                                 == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                                if (this->__PVT__compressed_FIFO_r_req) {
                                                    this->__PVT__r_8 
                                                        = 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (this->__PVT__compressed_FIFO_reg_64 
                                                                    >> 0x28U)));
                                                }
                                            } else {
                                                if (
                                                    (6U 
                                                     == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                                    if (this->__PVT__compressed_FIFO_r_req) {
                                                        this->__PVT__r_8 
                                                            = 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (this->__PVT__compressed_FIFO_reg_64 
                                                                        >> 0x30U)));
                                                    }
                                                } else {
                                                    if (this->__PVT__compressed_FIFO_r_req) {
                                                        this->__PVT__r_8 
                                                            = 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (this->__PVT__compressed_FIFO_reg_64 
                                                                        >> 0x38U)));
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
    }
    this->__PVT__unrepeat_counter_w_ena = 0U;
    if (((((((((0U == (IData)(this->__PVT__decompress_state)) 
               | (1U == (IData)(this->__PVT__decompress_state))) 
              | (4U == (IData)(this->__PVT__decompress_state))) 
             | (9U == (IData)(this->__PVT__decompress_state))) 
            | (3U == (IData)(this->__PVT__decompress_state))) 
           | (0xaU == (IData)(this->__PVT__decompress_state))) 
          | (5U == (IData)(this->__PVT__decompress_state))) 
         | (2U == (IData)(this->__PVT__decompress_state)))) {
        if ((0U != (IData)(this->__PVT__decompress_state))) {
            if ((1U == (IData)(this->__PVT__decompress_state))) {
                if ((1U & (~ ((IData)(this->__PVT__r_8_valid) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if (this->__PVT__r_8_valid) {
                        if ((1U & (~ ((IData)(this->__PVT__r_8) 
                                      >> 7U)))) {
                            this->__PVT__unrepeat_counter_w_ena = 1U;
                        }
                    }
                }
            }
        }
    }
    this->__PVT__repeat_counter_w_ena = 0U;
    if (((((((((0U == (IData)(this->__PVT__decompress_state)) 
               | (1U == (IData)(this->__PVT__decompress_state))) 
              | (4U == (IData)(this->__PVT__decompress_state))) 
             | (9U == (IData)(this->__PVT__decompress_state))) 
            | (3U == (IData)(this->__PVT__decompress_state))) 
           | (0xaU == (IData)(this->__PVT__decompress_state))) 
          | (5U == (IData)(this->__PVT__decompress_state))) 
         | (2U == (IData)(this->__PVT__decompress_state)))) {
        if ((0U != (IData)(this->__PVT__decompress_state))) {
            if ((1U == (IData)(this->__PVT__decompress_state))) {
                if ((1U & (~ ((IData)(this->__PVT__r_8_valid) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if (this->__PVT__r_8_valid) {
                        if ((0x80U & (IData)(this->__PVT__r_8))) {
                            if ((0x80U & (IData)(this->__PVT__r_8))) {
                                this->__PVT__repeat_counter_w_ena = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    this->__PVT__w_8 = 0U;
    if (((((((((0U == (IData)(this->__PVT__decompress_state)) 
               | (1U == (IData)(this->__PVT__decompress_state))) 
              | (4U == (IData)(this->__PVT__decompress_state))) 
             | (9U == (IData)(this->__PVT__decompress_state))) 
            | (3U == (IData)(this->__PVT__decompress_state))) 
           | (0xaU == (IData)(this->__PVT__decompress_state))) 
          | (5U == (IData)(this->__PVT__decompress_state))) 
         | (2U == (IData)(this->__PVT__decompress_state)))) {
        if ((0U != (IData)(this->__PVT__decompress_state))) {
            if ((1U != (IData)(this->__PVT__decompress_state))) {
                if ((4U == (IData)(this->__PVT__decompress_state))) {
                    if (this->__PVT__r_8_valid) {
                        this->__PVT__w_8 = this->__PVT__r_8;
                    }
                } else {
                    if ((9U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__w_8 = this->__PVT__r_8_reg;
                    } else {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if (this->__PVT__r_8_valid) {
                                this->__PVT__w_8 = this->__PVT__r_8;
                            }
                        } else {
                            if ((0xaU == (IData)(this->__PVT__decompress_state))) {
                                this->__PVT__w_8 = this->__PVT__r_8_reg;
                            } else {
                                if ((5U == (IData)(this->__PVT__decompress_state))) {
                                    this->__PVT__w_8 
                                        = this->__PVT__pixel_reg;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    this->__PVT__decompress_state_next = this->__PVT__decompress_state;
    if (((((((((0U == (IData)(this->__PVT__decompress_state)) 
               | (1U == (IData)(this->__PVT__decompress_state))) 
              | (4U == (IData)(this->__PVT__decompress_state))) 
             | (9U == (IData)(this->__PVT__decompress_state))) 
            | (3U == (IData)(this->__PVT__decompress_state))) 
           | (0xaU == (IData)(this->__PVT__decompress_state))) 
          | (5U == (IData)(this->__PVT__decompress_state))) 
         | (2U == (IData)(this->__PVT__decompress_state)))) {
        if ((0U == (IData)(this->__PVT__decompress_state))) {
            this->__PVT__decompress_state_next = ((IData)(vlTOPp->PPU_start)
                                                   ? 1U
                                                   : 0U);
        } else {
            if ((1U == (IData)(this->__PVT__decompress_state))) {
                if (((IData)(this->__PVT__r_8_valid) 
                     & (0U == (0x7fU & (IData)(this->__PVT__r_8))))) {
                    this->__PVT__decompress_state_next = 2U;
                } else {
                    if (this->__PVT__r_8_valid) {
                        if ((0x80U & (IData)(this->__PVT__r_8))) {
                            if ((0x80U & (IData)(this->__PVT__r_8))) {
                                this->__PVT__decompress_state_next = 3U;
                            }
                        } else {
                            this->__PVT__decompress_state_next = 4U;
                        }
                    } else {
                        this->__PVT__decompress_state_next = 1U;
                    }
                }
            } else {
                if ((4U == (IData)(this->__PVT__decompress_state))) {
                    this->__PVT__decompress_state_next 
                        = ((IData)(this->__PVT__r_8_valid)
                            ? ((IData)(this->__PVT__w_8_ready)
                                ? ((1U == (IData)(this->__PVT__unrepeat_counter))
                                    ? 1U : 4U) : 9U)
                            : 4U);
                } else {
                    if ((9U == (IData)(this->__PVT__decompress_state))) {
                        if (this->__PVT__w_8_ready) {
                            if ((1U == (IData)(this->__PVT__unrepeat_counter))) {
                                this->__PVT__decompress_state_next = 1U;
                            } else {
                                if ((1U < (IData)(this->__PVT__unrepeat_counter))) {
                                    this->__PVT__decompress_state_next = 4U;
                                }
                            }
                        } else {
                            this->__PVT__decompress_state_next = 9U;
                        }
                    } else {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if (this->__PVT__r_8_valid) {
                                if (this->__PVT__w_8_ready) {
                                    if ((1U == (IData)(this->__PVT__repeat_counter))) {
                                        this->__PVT__decompress_state_next = 1U;
                                    } else {
                                        if ((1U < (IData)(this->__PVT__repeat_counter))) {
                                            this->__PVT__decompress_state_next = 5U;
                                        }
                                    }
                                } else {
                                    this->__PVT__decompress_state_next = 0xaU;
                                }
                            } else {
                                this->__PVT__decompress_state_next = 3U;
                            }
                        } else {
                            if ((0xaU == (IData)(this->__PVT__decompress_state))) {
                                if (this->__PVT__w_8_ready) {
                                    if ((1U == (IData)(this->__PVT__repeat_counter))) {
                                        this->__PVT__decompress_state_next = 1U;
                                    } else {
                                        if ((1U < (IData)(this->__PVT__repeat_counter))) {
                                            this->__PVT__decompress_state_next = 5U;
                                        }
                                    }
                                } else {
                                    this->__PVT__decompress_state_next = 0xaU;
                                }
                            } else {
                                if ((5U == (IData)(this->__PVT__decompress_state))) {
                                    if (this->__PVT__w_8_ready) {
                                        if ((1U == (IData)(this->__PVT__repeat_counter))) {
                                            this->__PVT__decompress_state_next = 1U;
                                        } else {
                                            if ((1U 
                                                 < (IData)(this->__PVT__repeat_counter))) {
                                                this->__PVT__decompress_state_next = 5U;
                                            }
                                        }
                                    } else {
                                        this->__PVT__decompress_state_next = 5U;
                                    }
                                } else {
                                    if (vlTOPp->PPU_start) {
                                        if (vlTOPp->PPU_start) {
                                            this->__PVT__decompress_state_next = 2U;
                                        }
                                    } else {
                                        this->__PVT__decompress_state_next = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    this->__PVT__decompressed_fifo_w_data = 0ULL;
    if ((0U != (IData)(this->__PVT__w_state))) {
        if ((1U == (IData)(this->__PVT__w_state))) {
            if (((((((((0U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                       | (1U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                      | (2U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                     | (3U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                    | (4U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                   | (5U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                  | (6U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                 | (7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)))) {
                if ((0U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                    if ((1U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                        if ((2U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                            if ((3U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                if ((4U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                    if ((5U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                        if ((6U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                            if (this->__PVT__w_8_valid) {
                                                this->__PVT__decompressed_fifo_w_data 
                                                    = 
                                                    (((QData)((IData)(this->__PVT__w_8)) 
                                                      << 0x38U) 
                                                     | (0xffffffffffffffULL 
                                                        & this->__PVT__decompressed_FIFO_reg_64));
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
            if ((8U == (IData)(this->__PVT__w_state))) {
                this->__PVT__decompressed_fifo_w_data 
                    = this->__PVT__decompressed_FIFO_reg_64;
            } else {
                if ((0xbU == (IData)(this->__PVT__w_state))) {
                    if (((((((((0U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                               | (1U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                              | (2U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                             | (3U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                            | (4U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                           | (5U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                          | (6U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                         | (7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)))) {
                        this->__PVT__decompressed_fifo_w_data 
                            = ((0U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                ? 0ULL : ((1U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(this->__PVT__decompressed_FIFO_reg_64))))
                                           : ((2U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                               ? (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(this->__PVT__decompressed_FIFO_reg_64))))
                                               : ((3U 
                                                   == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                                   ? (QData)((IData)(
                                                                     (0xffffffU 
                                                                      & (IData)(this->__PVT__decompressed_FIFO_reg_64))))
                                                   : 
                                                  ((4U 
                                                    == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                                    ? (QData)((IData)(this->__PVT__decompressed_FIFO_reg_64))
                                                    : 
                                                   ((5U 
                                                     == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                                     ? 
                                                    (0xffffffffffULL 
                                                     & this->__PVT__decompressed_FIFO_reg_64)
                                                     : 
                                                    ((6U 
                                                      == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                                      ? 
                                                     (0xffffffffffffULL 
                                                      & this->__PVT__decompressed_FIFO_reg_64)
                                                      : 
                                                     (0xffffffffffffffULL 
                                                      & this->__PVT__decompressed_FIFO_reg_64))))))));
                    }
                }
            }
        }
    }
    this->BRAM12_din_a = 0ULL;
    if (this->__PVT__tdm_match) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_256)))) {
            this->BRAM12_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
}

void Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_bg2__10(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_bg2__10\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->BRAM11_addr_b = 0U;
    this->BRAM11_en_b = 0U;
    this->BRAM10_addr_b = 0U;
    this->BRAM10_en_b = 0U;
    this->BRAM11_addr_a = 0U;
    this->BRAM11_din_a = 0ULL;
    this->BRAM11_en_a = 0U;
    this->BRAM11_we_a = 0U;
    this->BRAM10_addr_a = 0U;
    this->BRAM10_din_a = 0ULL;
    this->BRAM10_en_a = 0U;
    this->BRAM10_we_a = 0U;
    this->__PVT__fifo_rear_128_inc_ena = 0U;
    this->__PVT__fifo_front_128_inc_ena = 0U;
    this->Decompressed_FIFO_r_master = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->Decompressed_FIFO_data = 0ULL;
    if ((0U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
        this->Decompressed_FIFO_data = 0ULL;
    } else {
        if ((1U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
            this->Decompressed_FIFO_data = 0ULL;
        } else {
            if ((2U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                this->Decompressed_FIFO_data = 0ULL;
            } else {
                if ((3U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                    this->Decompressed_FIFO_data = vlTOPp->BRAM12_dout_b;
                }
            }
        }
    }
    this->__PVT__fifo_empty_256 = ((IData)(this->__PVT__fifo_front_256) 
                                   == (IData)(this->__PVT__fifo_rear_256));
    this->__PVT__fifo_full_256 = (((0xffU & (IData)(this->__PVT__fifo_front_256)) 
                                   == (0xffU & (IData)(this->__PVT__fifo_rear_256))) 
                                  & ((1U & ((IData)(this->__PVT__fifo_front_256) 
                                            >> 8U)) 
                                     != (1U & ((IData)(this->__PVT__fifo_rear_256) 
                                               >> 8U))));
    this->__PVT__tdm_match = ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                              | (3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)));
    this->__PVT__compressed_FIFO_reg_64_w_ena = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__compressed_FIFO_reg_64_w_ena = 1U;
            }
        }
    }
    this->__PVT__compressed_FIFO_reg_counter_reset = 0U;
    if ((0U == (IData)(this->__PVT__r_state))) {
        if (vlTOPp->PPU_start) {
            this->__PVT__compressed_FIFO_reg_counter_reset = 1U;
        }
    }
    if ((0U != (IData)(this->__PVT__w_state))) {
        if ((1U != (IData)(this->__PVT__w_state))) {
            if ((8U != (IData)(this->__PVT__w_state))) {
                if ((0xbU != (IData)(this->__PVT__w_state))) {
                    if ((2U == (IData)(this->__PVT__w_state))) {
                        if (vlTOPp->PPU_start) {
                            if (vlTOPp->PPU_start) {
                                this->__PVT__r_state_next = 2U;
                            }
                        } else {
                            this->__PVT__r_state_next = 0U;
                        }
                    }
                }
            }
        }
    }
    this->__PVT__w_end_req = 0U;
    if (((((((((0U == (IData)(this->__PVT__decompress_state)) 
               | (1U == (IData)(this->__PVT__decompress_state))) 
              | (4U == (IData)(this->__PVT__decompress_state))) 
             | (9U == (IData)(this->__PVT__decompress_state))) 
            | (3U == (IData)(this->__PVT__decompress_state))) 
           | (0xaU == (IData)(this->__PVT__decompress_state))) 
          | (5U == (IData)(this->__PVT__decompress_state))) 
         | (2U == (IData)(this->__PVT__decompress_state)))) {
        if ((0U != (IData)(this->__PVT__decompress_state))) {
            if ((1U != (IData)(this->__PVT__decompress_state))) {
                if ((4U != (IData)(this->__PVT__decompress_state))) {
                    if ((9U != (IData)(this->__PVT__decompress_state))) {
                        if ((3U != (IData)(this->__PVT__decompress_state))) {
                            if ((0xaU != (IData)(this->__PVT__decompress_state))) {
                                if ((5U != (IData)(this->__PVT__decompress_state))) {
                                    this->__PVT__w_end_req = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    this->__PVT__r_end_req = 0U;
    if (((((((((0U == (IData)(this->__PVT__decompress_state)) 
               | (1U == (IData)(this->__PVT__decompress_state))) 
              | (4U == (IData)(this->__PVT__decompress_state))) 
             | (9U == (IData)(this->__PVT__decompress_state))) 
            | (3U == (IData)(this->__PVT__decompress_state))) 
           | (0xaU == (IData)(this->__PVT__decompress_state))) 
          | (5U == (IData)(this->__PVT__decompress_state))) 
         | (2U == (IData)(this->__PVT__decompress_state)))) {
        if ((0U != (IData)(this->__PVT__decompress_state))) {
            if ((1U != (IData)(this->__PVT__decompress_state))) {
                if ((4U != (IData)(this->__PVT__decompress_state))) {
                    if ((9U != (IData)(this->__PVT__decompress_state))) {
                        if ((3U != (IData)(this->__PVT__decompress_state))) {
                            if ((0xaU != (IData)(this->__PVT__decompress_state))) {
                                if ((5U != (IData)(this->__PVT__decompress_state))) {
                                    this->__PVT__r_end_req = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    this->Compressed_FIFO_ena = 1U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U != (IData)(this->__PVT__r_state))) {
                if ((7U != (IData)(this->__PVT__r_state))) {
                    if ((2U == (IData)(this->__PVT__r_state))) {
                        this->Compressed_FIFO_ena = 0U;
                    }
                }
            }
        }
    }
    this->__PVT__compressed_fifo_r_ena = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__compressed_fifo_r_ena = 1U;
        }
    }
    this->__PVT__compressed_FIFO_r_req = 0U;
    if (((((((((0U == (IData)(this->__PVT__decompress_state)) 
               | (1U == (IData)(this->__PVT__decompress_state))) 
              | (4U == (IData)(this->__PVT__decompress_state))) 
             | (9U == (IData)(this->__PVT__decompress_state))) 
            | (3U == (IData)(this->__PVT__decompress_state))) 
           | (0xaU == (IData)(this->__PVT__decompress_state))) 
          | (5U == (IData)(this->__PVT__decompress_state))) 
         | (2U == (IData)(this->__PVT__decompress_state)))) {
        if ((0U != (IData)(this->__PVT__decompress_state))) {
            if ((1U == (IData)(this->__PVT__decompress_state))) {
                this->__PVT__compressed_FIFO_r_req = 1U;
            } else {
                if ((4U == (IData)(this->__PVT__decompress_state))) {
                    this->__PVT__compressed_FIFO_r_req = 1U;
                } else {
                    if ((9U != (IData)(this->__PVT__decompress_state))) {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            this->__PVT__compressed_FIFO_r_req = 1U;
                        }
                    }
                }
            }
        }
    }
    this->__PVT__fifo_front_256_inc_ena = 0U;
    if (this->__PVT__tdm_match) {
        if (((IData)(vlTOPp->bg2_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_256)))) {
            this->__PVT__fifo_front_256_inc_ena = 1U;
        }
    }
    this->__PVT__decompressed_fifo_r_state_next = 0U;
    if (this->__PVT__tdm_match) {
        if (((IData)(vlTOPp->bg2_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_256)))) {
            this->__PVT__decompressed_fifo_r_state_next = 3U;
        }
    }
    this->BRAM12_en_b = 0U;
    if (this->__PVT__tdm_match) {
        if (((IData)(vlTOPp->bg2_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_256)))) {
            this->BRAM12_en_b = 1U;
        }
    }
    this->BRAM12_addr_b = 0U;
    if (this->__PVT__tdm_match) {
        if (((IData)(vlTOPp->bg2_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_256)))) {
            this->BRAM12_addr_b = (0x1ffU & ((IData)(0x100U) 
                                             + (0xffU 
                                                & (IData)(this->__PVT__fifo_front_256))));
        }
    }
    this->__PVT__compressed_FIFO_reg_counter_inc_ena = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U == (IData)(this->__PVT__r_state))) {
                if (this->__PVT__compressed_FIFO_r_req) {
                    this->__PVT__compressed_FIFO_reg_counter_inc_ena = 1U;
                }
            } else {
                if ((7U == (IData)(this->__PVT__r_state))) {
                    if (((((((((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter)) 
                               | (1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                              | (2U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                             | (3U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                            | (4U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                           | (5U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                          | (6U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                         | (7U == (IData)(this->__PVT__compressed_FIFO_reg_counter)))) {
                        if ((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                            if (this->__PVT__compressed_FIFO_r_req) {
                                this->__PVT__compressed_FIFO_reg_counter_inc_ena = 1U;
                            }
                        } else {
                            if ((1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                if (this->__PVT__compressed_FIFO_r_req) {
                                    this->__PVT__compressed_FIFO_reg_counter_inc_ena = 1U;
                                }
                            } else {
                                if ((2U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                    if (this->__PVT__compressed_FIFO_r_req) {
                                        this->__PVT__compressed_FIFO_reg_counter_inc_ena = 1U;
                                    }
                                } else {
                                    if ((3U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                        if (this->__PVT__compressed_FIFO_r_req) {
                                            this->__PVT__compressed_FIFO_reg_counter_inc_ena = 1U;
                                        }
                                    } else {
                                        if ((4U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                            if (this->__PVT__compressed_FIFO_r_req) {
                                                this->__PVT__compressed_FIFO_reg_counter_inc_ena = 1U;
                                            }
                                        } else {
                                            if ((5U 
                                                 == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                                if (this->__PVT__compressed_FIFO_r_req) {
                                                    this->__PVT__compressed_FIFO_reg_counter_inc_ena = 1U;
                                                }
                                            } else {
                                                if (
                                                    (6U 
                                                     == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                                    if (this->__PVT__compressed_FIFO_r_req) {
                                                        this->__PVT__compressed_FIFO_reg_counter_inc_ena = 1U;
                                                    }
                                                } else {
                                                    if (this->__PVT__compressed_FIFO_r_req) {
                                                        this->__PVT__compressed_FIFO_reg_counter_inc_ena = 1U;
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
    }
    this->__PVT__r_8_valid = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U == (IData)(this->__PVT__r_state))) {
                if (this->__PVT__compressed_FIFO_r_req) {
                    this->__PVT__r_8_valid = 1U;
                }
            } else {
                if ((7U == (IData)(this->__PVT__r_state))) {
                    if (((((((((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter)) 
                               | (1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                              | (2U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                             | (3U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                            | (4U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                           | (5U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                          | (6U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                         | (7U == (IData)(this->__PVT__compressed_FIFO_reg_counter)))) {
                        if ((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                            if (this->__PVT__compressed_FIFO_r_req) {
                                this->__PVT__r_8_valid = 1U;
                            }
                        } else {
                            if ((1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                if (this->__PVT__compressed_FIFO_r_req) {
                                    this->__PVT__r_8_valid = 1U;
                                }
                            } else {
                                if ((2U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                    if (this->__PVT__compressed_FIFO_r_req) {
                                        this->__PVT__r_8_valid = 1U;
                                    }
                                } else {
                                    if ((3U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                        if (this->__PVT__compressed_FIFO_r_req) {
                                            this->__PVT__r_8_valid = 1U;
                                        }
                                    } else {
                                        if ((4U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                            if (this->__PVT__compressed_FIFO_r_req) {
                                                this->__PVT__r_8_valid = 1U;
                                            }
                                        } else {
                                            if ((5U 
                                                 == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                                if (this->__PVT__compressed_FIFO_r_req) {
                                                    this->__PVT__r_8_valid = 1U;
                                                }
                                            } else {
                                                if (
                                                    (6U 
                                                     == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                                    if (this->__PVT__compressed_FIFO_r_req) {
                                                        this->__PVT__r_8_valid = 1U;
                                                    }
                                                } else {
                                                    if (this->__PVT__compressed_FIFO_r_req) {
                                                        this->__PVT__r_8_valid = 1U;
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
    }
    this->__PVT__pixel_reg_w_ena = 0U;
    if (((((((((0U == (IData)(this->__PVT__decompress_state)) 
               | (1U == (IData)(this->__PVT__decompress_state))) 
              | (4U == (IData)(this->__PVT__decompress_state))) 
             | (9U == (IData)(this->__PVT__decompress_state))) 
            | (3U == (IData)(this->__PVT__decompress_state))) 
           | (0xaU == (IData)(this->__PVT__decompress_state))) 
          | (5U == (IData)(this->__PVT__decompress_state))) 
         | (2U == (IData)(this->__PVT__decompress_state)))) {
        if ((0U != (IData)(this->__PVT__decompress_state))) {
            if ((1U != (IData)(this->__PVT__decompress_state))) {
                if ((4U != (IData)(this->__PVT__decompress_state))) {
                    if ((9U != (IData)(this->__PVT__decompress_state))) {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if (this->__PVT__r_8_valid) {
                                this->__PVT__pixel_reg_w_ena = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    this->__PVT__r_8_reg_w_ena = 0U;
    if (((((((((0U == (IData)(this->__PVT__decompress_state)) 
               | (1U == (IData)(this->__PVT__decompress_state))) 
              | (4U == (IData)(this->__PVT__decompress_state))) 
             | (9U == (IData)(this->__PVT__decompress_state))) 
            | (3U == (IData)(this->__PVT__decompress_state))) 
           | (0xaU == (IData)(this->__PVT__decompress_state))) 
          | (5U == (IData)(this->__PVT__decompress_state))) 
         | (2U == (IData)(this->__PVT__decompress_state)))) {
        if ((0U != (IData)(this->__PVT__decompress_state))) {
            if ((1U != (IData)(this->__PVT__decompress_state))) {
                if ((4U == (IData)(this->__PVT__decompress_state))) {
                    if (this->__PVT__r_8_valid) {
                        this->__PVT__r_8_reg_w_ena = 1U;
                    }
                } else {
                    if ((9U != (IData)(this->__PVT__decompress_state))) {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if (this->__PVT__r_8_valid) {
                                this->__PVT__r_8_reg_w_ena = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    this->__PVT__w_8_valid = 0U;
    if (((((((((0U == (IData)(this->__PVT__decompress_state)) 
               | (1U == (IData)(this->__PVT__decompress_state))) 
              | (4U == (IData)(this->__PVT__decompress_state))) 
             | (9U == (IData)(this->__PVT__decompress_state))) 
            | (3U == (IData)(this->__PVT__decompress_state))) 
           | (0xaU == (IData)(this->__PVT__decompress_state))) 
          | (5U == (IData)(this->__PVT__decompress_state))) 
         | (2U == (IData)(this->__PVT__decompress_state)))) {
        if ((0U != (IData)(this->__PVT__decompress_state))) {
            if ((1U != (IData)(this->__PVT__decompress_state))) {
                if ((4U == (IData)(this->__PVT__decompress_state))) {
                    if (this->__PVT__r_8_valid) {
                        this->__PVT__w_8_valid = 1U;
                    }
                } else {
                    if ((9U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__w_8_valid = 1U;
                    } else {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if (this->__PVT__r_8_valid) {
                                this->__PVT__w_8_valid = 1U;
                            }
                        } else {
                            if ((0xaU == (IData)(this->__PVT__decompress_state))) {
                                this->__PVT__w_8_valid = 1U;
                            } else {
                                if ((5U == (IData)(this->__PVT__decompress_state))) {
                                    this->__PVT__w_8_valid = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    this->__PVT__decompressed_FIFO_reg_counter_inc_ena = 0U;
    if ((0U != (IData)(this->__PVT__w_state))) {
        if ((1U == (IData)(this->__PVT__w_state))) {
            if (((((((((0U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                       | (1U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                      | (2U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                     | (3U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                    | (4U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                   | (5U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                  | (6U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                 | (7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)))) {
                if ((0U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                    if (this->__PVT__w_8_valid) {
                        this->__PVT__decompressed_FIFO_reg_counter_inc_ena = 1U;
                    }
                } else {
                    if ((1U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                        if (this->__PVT__w_8_valid) {
                            this->__PVT__decompressed_FIFO_reg_counter_inc_ena = 1U;
                        }
                    } else {
                        if ((2U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                            if (this->__PVT__w_8_valid) {
                                this->__PVT__decompressed_FIFO_reg_counter_inc_ena = 1U;
                            }
                        } else {
                            if ((3U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                if (this->__PVT__w_8_valid) {
                                    this->__PVT__decompressed_FIFO_reg_counter_inc_ena = 1U;
                                }
                            } else {
                                if ((4U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                    if (this->__PVT__w_8_valid) {
                                        this->__PVT__decompressed_FIFO_reg_counter_inc_ena = 1U;
                                    }
                                } else {
                                    if ((5U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                        if (this->__PVT__w_8_valid) {
                                            this->__PVT__decompressed_FIFO_reg_counter_inc_ena = 1U;
                                        }
                                    } else {
                                        if ((6U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                            if (this->__PVT__w_8_valid) {
                                                this->__PVT__decompressed_FIFO_reg_counter_inc_ena = 1U;
                                            }
                                        } else {
                                            if (this->__PVT__w_8_valid) {
                                                this->__PVT__decompressed_FIFO_reg_counter_inc_ena = 1U;
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
    this->__PVT__decompressed_FIFO_reg_wstrb = 0U;
    if ((0U != (IData)(this->__PVT__w_state))) {
        if ((1U == (IData)(this->__PVT__w_state))) {
            if (((((((((0U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                       | (1U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                      | (2U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                     | (3U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                    | (4U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                   | (5U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                  | (6U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                 | (7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)))) {
                if ((0U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                    if (this->__PVT__w_8_valid) {
                        this->__PVT__decompressed_FIFO_reg_wstrb = 1U;
                    }
                } else {
                    if ((1U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                        if (this->__PVT__w_8_valid) {
                            this->__PVT__decompressed_FIFO_reg_wstrb = 2U;
                        }
                    } else {
                        if ((2U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                            if (this->__PVT__w_8_valid) {
                                this->__PVT__decompressed_FIFO_reg_wstrb = 4U;
                            }
                        } else {
                            if ((3U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                if (this->__PVT__w_8_valid) {
                                    this->__PVT__decompressed_FIFO_reg_wstrb = 8U;
                                }
                            } else {
                                if ((4U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                    if (this->__PVT__w_8_valid) {
                                        this->__PVT__decompressed_FIFO_reg_wstrb = 0x10U;
                                    }
                                } else {
                                    if ((5U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                        if (this->__PVT__w_8_valid) {
                                            this->__PVT__decompressed_FIFO_reg_wstrb = 0x20U;
                                        }
                                    } else {
                                        if ((6U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                            if (this->__PVT__w_8_valid) {
                                                this->__PVT__decompressed_FIFO_reg_wstrb = 0x40U;
                                            }
                                        } else {
                                            if (this->__PVT__w_8_valid) {
                                                this->__PVT__decompressed_FIFO_reg_wstrb = 0x80U;
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
    this->__PVT__decompressed_fifo_w_ena = 0U;
    if ((0U != (IData)(this->__PVT__w_state))) {
        if ((1U == (IData)(this->__PVT__w_state))) {
            if (((((((((0U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                       | (1U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                      | (2U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                     | (3U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                    | (4U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                   | (5U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                  | (6U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                 | (7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)))) {
                if ((0U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                    if ((1U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                        if ((2U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                            if ((3U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                if ((4U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                    if ((5U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                        if ((6U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                            if (this->__PVT__w_8_valid) {
                                                this->__PVT__decompressed_fifo_w_ena = 1U;
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
            if ((8U == (IData)(this->__PVT__w_state))) {
                this->__PVT__decompressed_fifo_w_ena = 1U;
            } else {
                if ((0xbU == (IData)(this->__PVT__w_state))) {
                    if (((((((((0U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                               | (1U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                              | (2U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                             | (3U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                            | (4U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                           | (5U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                          | (6U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                         | (7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)))) {
                        this->__PVT__decompressed_fifo_w_ena = 1U;
                    }
                }
            }
        }
    }
    this->__PVT__fifo_rear_256_inc_ena = 0U;
    if (this->__PVT__tdm_match) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_256)))) {
            this->__PVT__fifo_rear_256_inc_ena = 1U;
        }
    }
    this->BRAM12_en_a = 0U;
    if (this->__PVT__tdm_match) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_256)))) {
            this->BRAM12_en_a = 1U;
        }
    }
    this->BRAM12_we_a = 0U;
    if (this->__PVT__tdm_match) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_256)))) {
            this->BRAM12_we_a = 1U;
        }
    }
    this->BRAM12_addr_a = 0U;
    if (this->__PVT__tdm_match) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_256)))) {
            this->BRAM12_addr_a = (0x1ffU & ((IData)(0x100U) 
                                             + (0xffU 
                                                & (IData)(this->__PVT__fifo_rear_256))));
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((IData)(this->__PVT__tdm_match) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_256))));
    this->__PVT__decompressed_FIFO_reg_counter_reset = 0U;
    if ((0U == (IData)(this->__PVT__w_state))) {
        if (vlTOPp->PPU_start) {
            this->__PVT__decompressed_FIFO_reg_counter_reset = 1U;
        }
    } else {
        if ((1U != (IData)(this->__PVT__w_state))) {
            if ((8U == (IData)(this->__PVT__w_state))) {
                if (this->__PVT__decompressed_fifo_w_end) {
                    this->__PVT__decompressed_FIFO_reg_counter_reset = 1U;
                }
            }
        }
    }
    this->__PVT__w_state_next = this->__PVT__w_state;
    if ((0U == (IData)(this->__PVT__w_state))) {
        this->__PVT__w_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__w_state))) {
            if (((((((((0U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                       | (1U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                      | (2U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                     | (3U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                    | (4U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                   | (5U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                  | (6U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                 | (7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)))) {
                this->__PVT__w_state_next = ((0U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                              ? 1U : 
                                             ((1U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                               ? 1U
                                               : ((2U 
                                                   == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                                     ? 1U
                                                     : 
                                                    ((5U 
                                                      == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                                      ? 1U
                                                      : 
                                                     ((6U 
                                                       == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                                       ? 1U
                                                       : 
                                                      ((IData)(this->__PVT__w_8_valid)
                                                        ? 
                                                       ((IData)(this->__PVT__decompressed_fifo_w_end)
                                                         ? 1U
                                                         : 8U)
                                                        : 1U))))))));
            }
            if (this->__PVT__w_end_req) {
                this->__PVT__w_state_next = 0xbU;
            }
        } else {
            if ((8U == (IData)(this->__PVT__w_state))) {
                this->__PVT__w_state_next = ((IData)(this->__PVT__decompressed_fifo_w_end)
                                              ? ((IData)(this->__PVT__w_end_req)
                                                  ? 2U
                                                  : 1U)
                                              : 8U);
            } else {
                if ((0xbU == (IData)(this->__PVT__w_state))) {
                    this->__PVT__w_state_next = ((IData)(this->__PVT__decompressed_fifo_w_end)
                                                  ? 2U
                                                  : 0xbU);
                }
            }
        }
    }
    this->__PVT__w_8_ready = 0U;
    if ((0U != (IData)(this->__PVT__w_state))) {
        if ((1U == (IData)(this->__PVT__w_state))) {
            if (((((((((0U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                       | (1U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                      | (2U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                     | (3U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                    | (4U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                   | (5U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                  | (6U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                 | (7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)))) {
                if ((0U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                    if (this->__PVT__w_8_valid) {
                        this->__PVT__w_8_ready = 1U;
                    }
                } else {
                    if ((1U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                        if (this->__PVT__w_8_valid) {
                            this->__PVT__w_8_ready = 1U;
                        }
                    } else {
                        if ((2U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                            if (this->__PVT__w_8_valid) {
                                this->__PVT__w_8_ready = 1U;
                            }
                        } else {
                            if ((3U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                if (this->__PVT__w_8_valid) {
                                    this->__PVT__w_8_ready = 1U;
                                }
                            } else {
                                if ((4U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                    if (this->__PVT__w_8_valid) {
                                        this->__PVT__w_8_ready = 1U;
                                    }
                                } else {
                                    if ((5U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                        if (this->__PVT__w_8_valid) {
                                            this->__PVT__w_8_ready = 1U;
                                        }
                                    } else {
                                        if ((6U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                            if (this->__PVT__w_8_valid) {
                                                this->__PVT__w_8_ready = 1U;
                                            }
                                        } else {
                                            if (this->__PVT__w_8_valid) {
                                                if (this->__PVT__decompressed_fifo_w_end) {
                                                    this->__PVT__w_8_ready = 1U;
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
        } else {
            if ((8U == (IData)(this->__PVT__w_state))) {
                if (this->__PVT__decompressed_fifo_w_end) {
                    this->__PVT__w_8_ready = 1U;
                }
            }
        }
    }
    this->__PVT__repeat_counter_dec_ena = 0U;
    if (((((((((0U == (IData)(this->__PVT__decompress_state)) 
               | (1U == (IData)(this->__PVT__decompress_state))) 
              | (4U == (IData)(this->__PVT__decompress_state))) 
             | (9U == (IData)(this->__PVT__decompress_state))) 
            | (3U == (IData)(this->__PVT__decompress_state))) 
           | (0xaU == (IData)(this->__PVT__decompress_state))) 
          | (5U == (IData)(this->__PVT__decompress_state))) 
         | (2U == (IData)(this->__PVT__decompress_state)))) {
        if ((0U != (IData)(this->__PVT__decompress_state))) {
            if ((1U != (IData)(this->__PVT__decompress_state))) {
                if ((4U != (IData)(this->__PVT__decompress_state))) {
                    if ((9U != (IData)(this->__PVT__decompress_state))) {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if (this->__PVT__r_8_valid) {
                                if (this->__PVT__w_8_ready) {
                                    if ((1U == (IData)(this->__PVT__repeat_counter))) {
                                        this->__PVT__repeat_counter_dec_ena = 1U;
                                    } else {
                                        if ((1U < (IData)(this->__PVT__repeat_counter))) {
                                            this->__PVT__repeat_counter_dec_ena = 1U;
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0xaU == (IData)(this->__PVT__decompress_state))) {
                                if (this->__PVT__w_8_ready) {
                                    if ((1U == (IData)(this->__PVT__repeat_counter))) {
                                        this->__PVT__repeat_counter_dec_ena = 1U;
                                    } else {
                                        if ((1U < (IData)(this->__PVT__repeat_counter))) {
                                            this->__PVT__repeat_counter_dec_ena = 1U;
                                        }
                                    }
                                }
                            } else {
                                if ((5U == (IData)(this->__PVT__decompress_state))) {
                                    if (this->__PVT__w_8_ready) {
                                        if ((1U == (IData)(this->__PVT__repeat_counter))) {
                                            this->__PVT__repeat_counter_dec_ena = 1U;
                                        } else {
                                            if ((1U 
                                                 < (IData)(this->__PVT__repeat_counter))) {
                                                this->__PVT__repeat_counter_dec_ena = 1U;
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
    this->__PVT__unrepeat_counter_dec_ena = 0U;
    if (((((((((0U == (IData)(this->__PVT__decompress_state)) 
               | (1U == (IData)(this->__PVT__decompress_state))) 
              | (4U == (IData)(this->__PVT__decompress_state))) 
             | (9U == (IData)(this->__PVT__decompress_state))) 
            | (3U == (IData)(this->__PVT__decompress_state))) 
           | (0xaU == (IData)(this->__PVT__decompress_state))) 
          | (5U == (IData)(this->__PVT__decompress_state))) 
         | (2U == (IData)(this->__PVT__decompress_state)))) {
        if ((0U != (IData)(this->__PVT__decompress_state))) {
            if ((1U != (IData)(this->__PVT__decompress_state))) {
                if ((4U == (IData)(this->__PVT__decompress_state))) {
                    if (this->__PVT__r_8_valid) {
                        if (this->__PVT__w_8_ready) {
                            this->__PVT__unrepeat_counter_dec_ena = 1U;
                        }
                    }
                } else {
                    if ((9U == (IData)(this->__PVT__decompress_state))) {
                        if (this->__PVT__w_8_ready) {
                            if ((1U == (IData)(this->__PVT__unrepeat_counter))) {
                                this->__PVT__unrepeat_counter_dec_ena = 1U;
                            } else {
                                if ((1U < (IData)(this->__PVT__unrepeat_counter))) {
                                    this->__PVT__unrepeat_counter_dec_ena = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_bg2__12(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_bg2__12\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if (this->__PVT__tdm_match) {
        if ((((IData)(this->__PVT__compressed_fifo_r_ena) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((IData)(this->__PVT__r_end_req)
                                          ? 2U : (((IData)(this->__PVT__tdm_match) 
                                                   & (((IData)(this->__PVT__compressed_fifo_r_ena) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
                                                      & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_r_master)))
                                                   ? 6U
                                                   : 1U));
        } else {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__r_state_next = 7U;
                if (this->__PVT__r_end_req) {
                    this->__PVT__r_state_next = 2U;
                }
            } else {
                if ((7U == (IData)(this->__PVT__r_state))) {
                    if (((((((((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter)) 
                               | (1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                              | (2U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                             | (3U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                            | (4U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                           | (5U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                          | (6U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                         | (7U == (IData)(this->__PVT__compressed_FIFO_reg_counter)))) {
                        if ((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                            this->__PVT__r_state_next = 7U;
                            if (this->__PVT__r_end_req) {
                                this->__PVT__r_state_next = 2U;
                            }
                        } else {
                            if ((1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                this->__PVT__r_state_next = 7U;
                                if (this->__PVT__r_end_req) {
                                    this->__PVT__r_state_next = 2U;
                                }
                            } else {
                                if ((2U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                    this->__PVT__r_state_next = 7U;
                                    if (this->__PVT__r_end_req) {
                                        this->__PVT__r_state_next = 2U;
                                    }
                                } else {
                                    if ((3U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                        this->__PVT__r_state_next = 7U;
                                        if (this->__PVT__r_end_req) {
                                            this->__PVT__r_state_next = 2U;
                                        }
                                    } else {
                                        if ((4U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                            this->__PVT__r_state_next = 7U;
                                            if (this->__PVT__r_end_req) {
                                                this->__PVT__r_state_next = 2U;
                                            }
                                        } else {
                                            if ((5U 
                                                 == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                                this->__PVT__r_state_next = 7U;
                                                if (this->__PVT__r_end_req) {
                                                    this->__PVT__r_state_next = 2U;
                                                }
                                            } else {
                                                if (
                                                    (6U 
                                                     == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                                    this->__PVT__r_state_next = 7U;
                                                    if (this->__PVT__r_end_req) {
                                                        this->__PVT__r_state_next = 2U;
                                                    }
                                                } else {
                                                    this->__PVT__r_state_next = 1U;
                                                    if (this->__PVT__r_end_req) {
                                                        this->__PVT__r_state_next = 2U;
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
                    if ((2U == (IData)(this->__PVT__r_state))) {
                        if (vlTOPp->PPU_start) {
                            if (vlTOPp->PPU_start) {
                                this->__PVT__r_state_next = 2U;
                            }
                        } else {
                            this->__PVT__r_state_next = 0U;
                        }
                    }
                }
            }
        }
    }
    this->Compressed_FIFO_dequeue = 0U;
    if (this->__PVT__tdm_match) {
        if ((((IData)(this->__PVT__compressed_fifo_r_ena) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
    this->__PVT__compressed_fifo_r_data = 0ULL;
    if (this->__PVT__compressed_fifo_r_state) {
        if (this->__PVT__compressed_fifo_r_state) {
            this->__PVT__compressed_fifo_r_data = vlTOPp->pixel_fifo_top__DOT__bg2_comp_data;
        }
    } else {
        this->__PVT__compressed_fifo_r_data = 0ULL;
    }
    this->__PVT__r_8 = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U == (IData)(this->__PVT__r_state))) {
                if (this->__PVT__compressed_FIFO_r_req) {
                    this->__PVT__r_8 = (0xffU & (IData)(this->__PVT__compressed_fifo_r_data));
                }
            } else {
                if ((7U == (IData)(this->__PVT__r_state))) {
                    if (((((((((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter)) 
                               | (1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                              | (2U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                             | (3U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                            | (4U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                           | (5U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                          | (6U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) 
                         | (7U == (IData)(this->__PVT__compressed_FIFO_reg_counter)))) {
                        if ((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                            if (this->__PVT__compressed_FIFO_r_req) {
                                this->__PVT__r_8 = 
                                    (0xffU & (IData)(this->__PVT__compressed_FIFO_reg_64));
                            }
                        } else {
                            if ((1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                if (this->__PVT__compressed_FIFO_r_req) {
                                    this->__PVT__r_8 
                                        = (0xffU & (IData)(
                                                           (this->__PVT__compressed_FIFO_reg_64 
                                                            >> 8U)));
                                }
                            } else {
                                if ((2U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                    if (this->__PVT__compressed_FIFO_r_req) {
                                        this->__PVT__r_8 
                                            = (0xffU 
                                               & (IData)(
                                                         (this->__PVT__compressed_FIFO_reg_64 
                                                          >> 0x10U)));
                                    }
                                } else {
                                    if ((3U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                        if (this->__PVT__compressed_FIFO_r_req) {
                                            this->__PVT__r_8 
                                                = (0xffU 
                                                   & (IData)(
                                                             (this->__PVT__compressed_FIFO_reg_64 
                                                              >> 0x18U)));
                                        }
                                    } else {
                                        if ((4U == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                            if (this->__PVT__compressed_FIFO_r_req) {
                                                this->__PVT__r_8 
                                                    = 
                                                    (0xffU 
                                                     & (IData)(
                                                               (this->__PVT__compressed_FIFO_reg_64 
                                                                >> 0x20U)));
                                            }
                                        } else {
                                            if ((5U 
                                                 == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                                if (this->__PVT__compressed_FIFO_r_req) {
                                                    this->__PVT__r_8 
                                                        = 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (this->__PVT__compressed_FIFO_reg_64 
                                                                    >> 0x28U)));
                                                }
                                            } else {
                                                if (
                                                    (6U 
                                                     == (IData)(this->__PVT__compressed_FIFO_reg_counter))) {
                                                    if (this->__PVT__compressed_FIFO_r_req) {
                                                        this->__PVT__r_8 
                                                            = 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (this->__PVT__compressed_FIFO_reg_64 
                                                                        >> 0x30U)));
                                                    }
                                                } else {
                                                    if (this->__PVT__compressed_FIFO_r_req) {
                                                        this->__PVT__r_8 
                                                            = 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (this->__PVT__compressed_FIFO_reg_64 
                                                                        >> 0x38U)));
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
    }
    this->__PVT__unrepeat_counter_w_ena = 0U;
    if (((((((((0U == (IData)(this->__PVT__decompress_state)) 
               | (1U == (IData)(this->__PVT__decompress_state))) 
              | (4U == (IData)(this->__PVT__decompress_state))) 
             | (9U == (IData)(this->__PVT__decompress_state))) 
            | (3U == (IData)(this->__PVT__decompress_state))) 
           | (0xaU == (IData)(this->__PVT__decompress_state))) 
          | (5U == (IData)(this->__PVT__decompress_state))) 
         | (2U == (IData)(this->__PVT__decompress_state)))) {
        if ((0U != (IData)(this->__PVT__decompress_state))) {
            if ((1U == (IData)(this->__PVT__decompress_state))) {
                if ((1U & (~ ((IData)(this->__PVT__r_8_valid) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if (this->__PVT__r_8_valid) {
                        if ((1U & (~ ((IData)(this->__PVT__r_8) 
                                      >> 7U)))) {
                            this->__PVT__unrepeat_counter_w_ena = 1U;
                        }
                    }
                }
            }
        }
    }
    this->__PVT__repeat_counter_w_ena = 0U;
    if (((((((((0U == (IData)(this->__PVT__decompress_state)) 
               | (1U == (IData)(this->__PVT__decompress_state))) 
              | (4U == (IData)(this->__PVT__decompress_state))) 
             | (9U == (IData)(this->__PVT__decompress_state))) 
            | (3U == (IData)(this->__PVT__decompress_state))) 
           | (0xaU == (IData)(this->__PVT__decompress_state))) 
          | (5U == (IData)(this->__PVT__decompress_state))) 
         | (2U == (IData)(this->__PVT__decompress_state)))) {
        if ((0U != (IData)(this->__PVT__decompress_state))) {
            if ((1U == (IData)(this->__PVT__decompress_state))) {
                if ((1U & (~ ((IData)(this->__PVT__r_8_valid) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if (this->__PVT__r_8_valid) {
                        if ((0x80U & (IData)(this->__PVT__r_8))) {
                            if ((0x80U & (IData)(this->__PVT__r_8))) {
                                this->__PVT__repeat_counter_w_ena = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    this->__PVT__w_8 = 0U;
    if (((((((((0U == (IData)(this->__PVT__decompress_state)) 
               | (1U == (IData)(this->__PVT__decompress_state))) 
              | (4U == (IData)(this->__PVT__decompress_state))) 
             | (9U == (IData)(this->__PVT__decompress_state))) 
            | (3U == (IData)(this->__PVT__decompress_state))) 
           | (0xaU == (IData)(this->__PVT__decompress_state))) 
          | (5U == (IData)(this->__PVT__decompress_state))) 
         | (2U == (IData)(this->__PVT__decompress_state)))) {
        if ((0U != (IData)(this->__PVT__decompress_state))) {
            if ((1U != (IData)(this->__PVT__decompress_state))) {
                if ((4U == (IData)(this->__PVT__decompress_state))) {
                    if (this->__PVT__r_8_valid) {
                        this->__PVT__w_8 = this->__PVT__r_8;
                    }
                } else {
                    if ((9U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__w_8 = this->__PVT__r_8_reg;
                    } else {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if (this->__PVT__r_8_valid) {
                                this->__PVT__w_8 = this->__PVT__r_8;
                            }
                        } else {
                            if ((0xaU == (IData)(this->__PVT__decompress_state))) {
                                this->__PVT__w_8 = this->__PVT__r_8_reg;
                            } else {
                                if ((5U == (IData)(this->__PVT__decompress_state))) {
                                    this->__PVT__w_8 
                                        = this->__PVT__pixel_reg;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    this->__PVT__decompress_state_next = this->__PVT__decompress_state;
    if (((((((((0U == (IData)(this->__PVT__decompress_state)) 
               | (1U == (IData)(this->__PVT__decompress_state))) 
              | (4U == (IData)(this->__PVT__decompress_state))) 
             | (9U == (IData)(this->__PVT__decompress_state))) 
            | (3U == (IData)(this->__PVT__decompress_state))) 
           | (0xaU == (IData)(this->__PVT__decompress_state))) 
          | (5U == (IData)(this->__PVT__decompress_state))) 
         | (2U == (IData)(this->__PVT__decompress_state)))) {
        if ((0U == (IData)(this->__PVT__decompress_state))) {
            this->__PVT__decompress_state_next = ((IData)(vlTOPp->PPU_start)
                                                   ? 1U
                                                   : 0U);
        } else {
            if ((1U == (IData)(this->__PVT__decompress_state))) {
                if (((IData)(this->__PVT__r_8_valid) 
                     & (0U == (0x7fU & (IData)(this->__PVT__r_8))))) {
                    this->__PVT__decompress_state_next = 2U;
                } else {
                    if (this->__PVT__r_8_valid) {
                        if ((0x80U & (IData)(this->__PVT__r_8))) {
                            if ((0x80U & (IData)(this->__PVT__r_8))) {
                                this->__PVT__decompress_state_next = 3U;
                            }
                        } else {
                            this->__PVT__decompress_state_next = 4U;
                        }
                    } else {
                        this->__PVT__decompress_state_next = 1U;
                    }
                }
            } else {
                if ((4U == (IData)(this->__PVT__decompress_state))) {
                    this->__PVT__decompress_state_next 
                        = ((IData)(this->__PVT__r_8_valid)
                            ? ((IData)(this->__PVT__w_8_ready)
                                ? ((1U == (IData)(this->__PVT__unrepeat_counter))
                                    ? 1U : 4U) : 9U)
                            : 4U);
                } else {
                    if ((9U == (IData)(this->__PVT__decompress_state))) {
                        if (this->__PVT__w_8_ready) {
                            if ((1U == (IData)(this->__PVT__unrepeat_counter))) {
                                this->__PVT__decompress_state_next = 1U;
                            } else {
                                if ((1U < (IData)(this->__PVT__unrepeat_counter))) {
                                    this->__PVT__decompress_state_next = 4U;
                                }
                            }
                        } else {
                            this->__PVT__decompress_state_next = 9U;
                        }
                    } else {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if (this->__PVT__r_8_valid) {
                                if (this->__PVT__w_8_ready) {
                                    if ((1U == (IData)(this->__PVT__repeat_counter))) {
                                        this->__PVT__decompress_state_next = 1U;
                                    } else {
                                        if ((1U < (IData)(this->__PVT__repeat_counter))) {
                                            this->__PVT__decompress_state_next = 5U;
                                        }
                                    }
                                } else {
                                    this->__PVT__decompress_state_next = 0xaU;
                                }
                            } else {
                                this->__PVT__decompress_state_next = 3U;
                            }
                        } else {
                            if ((0xaU == (IData)(this->__PVT__decompress_state))) {
                                if (this->__PVT__w_8_ready) {
                                    if ((1U == (IData)(this->__PVT__repeat_counter))) {
                                        this->__PVT__decompress_state_next = 1U;
                                    } else {
                                        if ((1U < (IData)(this->__PVT__repeat_counter))) {
                                            this->__PVT__decompress_state_next = 5U;
                                        }
                                    }
                                } else {
                                    this->__PVT__decompress_state_next = 0xaU;
                                }
                            } else {
                                if ((5U == (IData)(this->__PVT__decompress_state))) {
                                    if (this->__PVT__w_8_ready) {
                                        if ((1U == (IData)(this->__PVT__repeat_counter))) {
                                            this->__PVT__decompress_state_next = 1U;
                                        } else {
                                            if ((1U 
                                                 < (IData)(this->__PVT__repeat_counter))) {
                                                this->__PVT__decompress_state_next = 5U;
                                            }
                                        }
                                    } else {
                                        this->__PVT__decompress_state_next = 5U;
                                    }
                                } else {
                                    if (vlTOPp->PPU_start) {
                                        if (vlTOPp->PPU_start) {
                                            this->__PVT__decompress_state_next = 2U;
                                        }
                                    } else {
                                        this->__PVT__decompress_state_next = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    this->__PVT__decompressed_fifo_w_data = 0ULL;
    if ((0U != (IData)(this->__PVT__w_state))) {
        if ((1U == (IData)(this->__PVT__w_state))) {
            if (((((((((0U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                       | (1U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                      | (2U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                     | (3U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                    | (4U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                   | (5U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                  | (6U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                 | (7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)))) {
                if ((0U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                    if ((1U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                        if ((2U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                            if ((3U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                if ((4U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                    if ((5U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                        if ((6U != (IData)(this->__PVT__decompressed_FIFO_reg_counter))) {
                                            if (this->__PVT__w_8_valid) {
                                                this->__PVT__decompressed_fifo_w_data 
                                                    = 
                                                    (((QData)((IData)(this->__PVT__w_8)) 
                                                      << 0x38U) 
                                                     | (0xffffffffffffffULL 
                                                        & this->__PVT__decompressed_FIFO_reg_64));
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
            if ((8U == (IData)(this->__PVT__w_state))) {
                this->__PVT__decompressed_fifo_w_data 
                    = this->__PVT__decompressed_FIFO_reg_64;
            } else {
                if ((0xbU == (IData)(this->__PVT__w_state))) {
                    if (((((((((0U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                               | (1U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                              | (2U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                             | (3U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                            | (4U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                           | (5U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                          | (6U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                         | (7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)))) {
                        this->__PVT__decompressed_fifo_w_data 
                            = ((0U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                ? 0ULL : ((1U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(this->__PVT__decompressed_FIFO_reg_64))))
                                           : ((2U == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                               ? (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(this->__PVT__decompressed_FIFO_reg_64))))
                                               : ((3U 
                                                   == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                                   ? (QData)((IData)(
                                                                     (0xffffffU 
                                                                      & (IData)(this->__PVT__decompressed_FIFO_reg_64))))
                                                   : 
                                                  ((4U 
                                                    == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                                    ? (QData)((IData)(this->__PVT__decompressed_FIFO_reg_64))
                                                    : 
                                                   ((5U 
                                                     == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                                     ? 
                                                    (0xffffffffffULL 
                                                     & this->__PVT__decompressed_FIFO_reg_64)
                                                     : 
                                                    ((6U 
                                                      == (IData)(this->__PVT__decompressed_FIFO_reg_counter))
                                                      ? 
                                                     (0xffffffffffffULL 
                                                      & this->__PVT__decompressed_FIFO_reg_64)
                                                      : 
                                                     (0xffffffffffffffULL 
                                                      & this->__PVT__decompressed_FIFO_reg_64))))))));
                    }
                }
            }
        }
    }
    this->BRAM12_din_a = 0ULL;
    if (this->__PVT__tdm_match) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_256)))) {
            this->BRAM12_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
}

void Vpixel_fifo_top_Decompresser::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    resetn = VL_RAND_RESET_I(1);
    Clk_Counter = VL_RAND_RESET_I(2);
    BRAM_number = VL_RAND_RESET_I(4);
    BRAM_base = VL_RAND_RESET_I(9);
    BRAM_size = VL_RAND_RESET_I(1);
    BRAM_rw_counter_bits = VL_RAND_RESET_I(4);
    PPU_start = VL_RAND_RESET_I(1);
    Compressed_FIFO_r_master = VL_RAND_RESET_I(1);
    Compressed_FIFO_data = VL_RAND_RESET_Q(64);
    Compressed_FIFO_count = VL_RAND_RESET_I(9);
    Compressed_FIFO_ena = VL_RAND_RESET_I(1);
    Compressed_FIFO_dequeue = VL_RAND_RESET_I(1);
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
    Decompressed_FIFO_ena = VL_RAND_RESET_I(1);
    Decompressed_FIFO_dequeue = VL_RAND_RESET_I(1);
    Decompressed_FIFO_r_master = VL_RAND_RESET_I(1);
    Decompressed_FIFO_data = VL_RAND_RESET_Q(64);
    Decompressed_FIFO_empty = VL_RAND_RESET_I(1);
    __PVT__tdm_match = VL_RAND_RESET_I(1);
    __PVT__decompressed_fifo_w_end = VL_RAND_RESET_I(1);
    __PVT__compressed_fifo_r_ena = VL_RAND_RESET_I(1);
    __PVT__compressed_fifo_r_data = VL_RAND_RESET_Q(64);
    __PVT__compressed_fifo_r_state = VL_RAND_RESET_I(1);
    __PVT__compressed_fifo_r_state_next = VL_RAND_RESET_I(1);
    __PVT__decompressed_fifo_w_ena = VL_RAND_RESET_I(1);
    __PVT__decompressed_fifo_w_data = VL_RAND_RESET_Q(64);
    __PVT__decompressed_fifo_r_state = VL_RAND_RESET_I(2);
    __PVT__decompressed_fifo_r_state_next = VL_RAND_RESET_I(2);
    __PVT__fifo_front_256 = VL_RAND_RESET_I(9);
    __PVT__fifo_front_256_inc_ena = VL_RAND_RESET_I(1);
    __PVT__fifo_rear_256 = VL_RAND_RESET_I(9);
    __PVT__fifo_rear_256_inc_ena = VL_RAND_RESET_I(1);
    __PVT__fifo_full_256 = VL_RAND_RESET_I(1);
    __PVT__fifo_empty_256 = VL_RAND_RESET_I(1);
    __PVT__fifo_front_128 = VL_RAND_RESET_I(8);
    __PVT__fifo_front_128_inc_ena = VL_RAND_RESET_I(1);
    __PVT__fifo_rear_128 = VL_RAND_RESET_I(8);
    __PVT__fifo_rear_128_inc_ena = VL_RAND_RESET_I(1);
    __PVT__fifo_full_128 = VL_RAND_RESET_I(1);
    __PVT__fifo_empty_128 = VL_RAND_RESET_I(1);
    __PVT__r_state = VL_RAND_RESET_I(4);
    __PVT__r_state_next = VL_RAND_RESET_I(4);
    __PVT__w_state = VL_RAND_RESET_I(4);
    __PVT__w_state_next = VL_RAND_RESET_I(4);
    __PVT__decompress_state = VL_RAND_RESET_I(4);
    __PVT__decompress_state_next = VL_RAND_RESET_I(4);
    __PVT__compressed_FIFO_reg_64 = VL_RAND_RESET_Q(64);
    __PVT__compressed_FIFO_reg_64_w_ena = VL_RAND_RESET_I(1);
    __PVT__compressed_FIFO_reg_counter = VL_RAND_RESET_I(3);
    __PVT__compressed_FIFO_reg_counter_inc_ena = VL_RAND_RESET_I(1);
    __PVT__compressed_FIFO_reg_counter_reset = VL_RAND_RESET_I(1);
    __PVT__decompressed_FIFO_reg_64 = VL_RAND_RESET_Q(64);
    __PVT__decompressed_FIFO_reg_counter = VL_RAND_RESET_I(3);
    __PVT__decompressed_FIFO_reg_counter_inc_ena = VL_RAND_RESET_I(1);
    __PVT__decompressed_FIFO_reg_wstrb = VL_RAND_RESET_I(8);
    __PVT__decompressed_FIFO_reg_counter_reset = VL_RAND_RESET_I(1);
    __PVT__r_8 = VL_RAND_RESET_I(8);
    __PVT__r_8_valid = VL_RAND_RESET_I(1);
    __PVT__r_8_reg = VL_RAND_RESET_I(8);
    __PVT__r_8_reg_w_ena = VL_RAND_RESET_I(1);
    __PVT__repeat_counter = VL_RAND_RESET_I(7);
    __PVT__repeat_counter_w_ena = VL_RAND_RESET_I(1);
    __PVT__repeat_counter_dec_ena = VL_RAND_RESET_I(1);
    __PVT__unrepeat_counter = VL_RAND_RESET_I(7);
    __PVT__unrepeat_counter_w_ena = VL_RAND_RESET_I(1);
    __PVT__unrepeat_counter_dec_ena = VL_RAND_RESET_I(1);
    __PVT__pixel_reg = VL_RAND_RESET_I(8);
    __PVT__pixel_reg_w_ena = VL_RAND_RESET_I(1);
    __PVT__compressed_FIFO_r_req = VL_RAND_RESET_I(1);
    __PVT__r_end_req = VL_RAND_RESET_I(1);
    __PVT__w_8 = VL_RAND_RESET_I(8);
    __PVT__w_8_valid = VL_RAND_RESET_I(1);
    __PVT__w_8_ready = VL_RAND_RESET_I(1);
    __PVT__w_end_req = VL_RAND_RESET_I(1);
    __Vdly__fifo_front_128 = VL_RAND_RESET_I(8);
    __Vdly__fifo_front_256 = VL_RAND_RESET_I(9);
    __Vdly__fifo_rear_128 = VL_RAND_RESET_I(8);
    __Vdly__fifo_rear_256 = VL_RAND_RESET_I(9);
    __Vdly__repeat_counter = VL_RAND_RESET_I(7);
    __Vdly__unrepeat_counter = VL_RAND_RESET_I(7);
    __Vdly__compressed_FIFO_reg_counter = VL_RAND_RESET_I(3);
    __Vdly__decompressed_FIFO_reg_64 = VL_RAND_RESET_Q(64);
    __Vdly__decompressed_FIFO_reg_counter = VL_RAND_RESET_I(3);
}
