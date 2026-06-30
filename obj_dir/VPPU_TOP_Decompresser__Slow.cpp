// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPPU_TOP.h for the primary calling header

#include "VPPU_TOP_Decompresser.h"
#include "VPPU_TOP__Syms.h"

//==========

VL_CTOR_IMP(VPPU_TOP_Decompresser) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VPPU_TOP_Decompresser::__Vconfigure(VPPU_TOP__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VPPU_TOP_Decompresser::~VPPU_TOP_Decompresser() {
}

void VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1__1(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1__1\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->BRAM12_en_b = 0U;
    this->BRAM11_addr_b = 0U;
    this->BRAM11_en_b = 0U;
    this->BRAM12_addr_a = 0U;
    this->BRAM12_din_a = 0ULL;
    this->BRAM12_en_a = 0U;
    this->BRAM12_we_a = 0U;
    this->BRAM11_addr_a = 0U;
    this->BRAM11_din_a = 0ULL;
    this->BRAM11_en_a = 0U;
    this->BRAM11_we_a = 0U;
    this->BRAM12_addr_b = 0U;
    this->__PVT__fifo_rear_256_inc_ena = 0U;
    this->__PVT__fifo_front_256_inc_ena = 0U;
    this->Decompressed_FIFO_data = 0ULL;
    if ((0U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
        this->Decompressed_FIFO_data = 0ULL;
    } else {
        if ((1U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
            this->Decompressed_FIFO_data = vlTOPp->BRAM10_dout_b;
        } else {
            if ((2U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                this->Decompressed_FIFO_data = 0ULL;
            } else {
                if ((3U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                    this->Decompressed_FIFO_data = 0ULL;
                }
            }
        }
    }
    this->__PVT__fifo_full_128 = (((0x7fU & (IData)(this->__PVT__fifo_front_128)) 
                                   == (0x7fU & (IData)(this->__PVT__fifo_rear_128))) 
                                  & ((1U & ((IData)(this->__PVT__fifo_front_128) 
                                            >> 7U)) 
                                     != (1U & ((IData)(this->__PVT__fifo_rear_128) 
                                               >> 7U))));
    this->Decompressed_FIFO_r_master = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->__PVT__fifo_empty_128 = ((IData)(this->__PVT__fifo_front_128) 
                                   == (IData)(this->__PVT__fifo_rear_128));
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
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
             & (0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->__PVT__w_end_req = ((2U == (IData)(this->__PVT__decompress_state)) 
                              | (0U == (IData)(this->__PVT__decompress_state)));
    this->Compressed_FIFO_ena = 1U;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->Compressed_FIFO_ena = 0U;
    } else {
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
    this->Compressed_FIFO_dequeue = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
             & (0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
    this->__PVT__compressed_FIFO_r_req = (((1U == (IData)(this->__PVT__decompress_state)) 
                                           | (4U == (IData)(this->__PVT__decompress_state))) 
                                          | (3U == (IData)(this->__PVT__decompress_state)));
    this->__PVT__compressed_FIFO_reg_counter_inc_ena = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U != (IData)(this->__PVT__r_state))) {
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
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((IData)(this->__PVT__w_end_req)
                                          ? 2U : ((
                                                   (0U 
                                                    == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                                   & (((1U 
                                                        == (IData)(this->__PVT__r_state)) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
                                                      & (0U 
                                                         == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))))
                                                   ? 6U
                                                   : 1U));
        } else {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__r_state_next = 7U;
                if (this->__PVT__w_end_req) {
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
                        this->__PVT__r_state_next = 
                            ((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                              ? 7U : ((1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                       ? 7U : ((2U 
                                                == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                ? 7U
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                    ? 7U
                                                    : 
                                                   ((4U 
                                                     == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                     ? 7U
                                                     : 
                                                    ((5U 
                                                      == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                       ? 7U
                                                       : 
                                                      ((IData)(this->__PVT__compressed_FIFO_r_req)
                                                        ? 1U
                                                        : 7U))))))));
                    }
                    if (this->__PVT__w_end_req) {
                        this->__PVT__r_state_next = 2U;
                    }
                } else {
                    if ((2U == (IData)(this->__PVT__r_state))) {
                        this->__PVT__r_state_next = 0U;
                    }
                }
            }
        }
    }
    this->__PVT__r_8 = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U != (IData)(this->__PVT__r_state))) {
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
    this->__PVT__r_8_valid = ((IData)(this->__PVT__compressed_FIFO_r_req) 
                              & (7U == (IData)(this->__PVT__r_state)));
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
    this->__PVT__w_8_valid = ((((5U == (IData)(this->__PVT__decompress_state)) 
                                | (0xaU == (IData)(this->__PVT__decompress_state))) 
                               | (9U == (IData)(this->__PVT__decompress_state))) 
                              | (((4U == (IData)(this->__PVT__decompress_state)) 
                                  | (3U == (IData)(this->__PVT__decompress_state))) 
                                 & (IData)(this->__PVT__r_8_valid)));
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
    this->__PVT__decompressed_fifo_w_ena = (((((1U 
                                                == (IData)(this->__PVT__w_state)) 
                                               & (7U 
                                                  == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                                              & (IData)(this->__PVT__w_8_valid)) 
                                             | (8U 
                                                == (IData)(this->__PVT__w_state))) 
                                            | (0xbU 
                                               == (IData)(this->__PVT__w_state)));
    this->__PVT__fifo_rear_128_inc_ena = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->__PVT__fifo_rear_128_inc_ena = 1U;
        }
    }
    this->BRAM10_en_a = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_en_a = 1U;
        }
    }
    this->BRAM10_we_a = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_we_a = 1U;
        }
    }
    this->BRAM10_addr_a = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_addr_a = (0x7fU & (IData)(this->__PVT__fifo_rear_128));
        }
    }
    this->BRAM10_din_a = 0ULL;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_128))));
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
                } else {
                    if ((2U == (IData)(this->__PVT__w_state))) {
                        this->__PVT__w_state_next = 0U;
                    }
                }
            }
        }
    }
    this->__PVT__w_8_ready = ((((1U == (IData)(this->__PVT__w_state)) 
                                & (IData)(this->__PVT__w_8_valid)) 
                               & ((7U > (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                                  | ((7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                                     & (IData)(this->__PVT__decompressed_fifo_w_end)))) 
                              | ((8U == (IData)(this->__PVT__w_state)) 
                                 & (IData)(this->__PVT__decompressed_fifo_w_end)));
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

void VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1__12(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni1__12\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__compressed_fifo_r_data = 0ULL;
    if (this->__PVT__compressed_fifo_r_state) {
        if (this->__PVT__compressed_fifo_r_state) {
            this->__PVT__compressed_fifo_r_data = vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__uni1_comp_data;
        }
    } else {
        this->__PVT__compressed_fifo_r_data = 0ULL;
    }
    this->__PVT__fifo_front_128_inc_ena = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__fifo_front_128_inc_ena = 1U;
        }
    }
    this->__PVT__decompressed_fifo_r_state_next = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__decompressed_fifo_r_state_next = 1U;
        }
    }
    this->BRAM10_en_b = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM10_en_b = 1U;
        }
    }
    this->BRAM10_addr_b = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un1.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM10_addr_b = (0x7fU & (IData)(this->__PVT__fifo_front_128));
        }
    }
}

void VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2__2(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2__2\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->BRAM12_en_b = 0U;
    this->BRAM11_addr_b = 0U;
    this->BRAM11_en_b = 0U;
    this->BRAM12_addr_a = 0U;
    this->BRAM12_din_a = 0ULL;
    this->BRAM12_en_a = 0U;
    this->BRAM12_we_a = 0U;
    this->BRAM11_addr_a = 0U;
    this->BRAM11_din_a = 0ULL;
    this->BRAM11_en_a = 0U;
    this->BRAM11_we_a = 0U;
    this->BRAM12_addr_b = 0U;
    this->__PVT__fifo_rear_256_inc_ena = 0U;
    this->__PVT__fifo_front_256_inc_ena = 0U;
    this->Decompressed_FIFO_data = 0ULL;
    if ((0U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
        this->Decompressed_FIFO_data = 0ULL;
    } else {
        if ((1U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
            this->Decompressed_FIFO_data = vlTOPp->BRAM10_dout_b;
        } else {
            if ((2U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                this->Decompressed_FIFO_data = 0ULL;
            } else {
                if ((3U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                    this->Decompressed_FIFO_data = 0ULL;
                }
            }
        }
    }
    this->__PVT__fifo_full_128 = (((0x7fU & (IData)(this->__PVT__fifo_front_128)) 
                                   == (0x7fU & (IData)(this->__PVT__fifo_rear_128))) 
                                  & ((1U & ((IData)(this->__PVT__fifo_front_128) 
                                            >> 7U)) 
                                     != (1U & ((IData)(this->__PVT__fifo_rear_128) 
                                               >> 7U))));
    this->Decompressed_FIFO_r_master = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->__PVT__fifo_empty_128 = ((IData)(this->__PVT__fifo_front_128) 
                                   == (IData)(this->__PVT__fifo_rear_128));
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
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
             & (1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->__PVT__w_end_req = ((2U == (IData)(this->__PVT__decompress_state)) 
                              | (0U == (IData)(this->__PVT__decompress_state)));
    this->Compressed_FIFO_ena = 1U;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->Compressed_FIFO_ena = 0U;
    } else {
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
    this->Compressed_FIFO_dequeue = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
             & (1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
    this->__PVT__compressed_FIFO_r_req = (((1U == (IData)(this->__PVT__decompress_state)) 
                                           | (4U == (IData)(this->__PVT__decompress_state))) 
                                          | (3U == (IData)(this->__PVT__decompress_state)));
    this->__PVT__compressed_FIFO_reg_counter_inc_ena = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U != (IData)(this->__PVT__r_state))) {
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
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((IData)(this->__PVT__w_end_req)
                                          ? 2U : ((
                                                   (1U 
                                                    == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                                   & (((1U 
                                                        == (IData)(this->__PVT__r_state)) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
                                                      & (1U 
                                                         == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))))
                                                   ? 6U
                                                   : 1U));
        } else {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__r_state_next = 7U;
                if (this->__PVT__w_end_req) {
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
                        this->__PVT__r_state_next = 
                            ((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                              ? 7U : ((1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                       ? 7U : ((2U 
                                                == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                ? 7U
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                    ? 7U
                                                    : 
                                                   ((4U 
                                                     == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                     ? 7U
                                                     : 
                                                    ((5U 
                                                      == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                       ? 7U
                                                       : 
                                                      ((IData)(this->__PVT__compressed_FIFO_r_req)
                                                        ? 1U
                                                        : 7U))))))));
                    }
                    if (this->__PVT__w_end_req) {
                        this->__PVT__r_state_next = 2U;
                    }
                } else {
                    if ((2U == (IData)(this->__PVT__r_state))) {
                        this->__PVT__r_state_next = 0U;
                    }
                }
            }
        }
    }
    this->__PVT__r_8 = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U != (IData)(this->__PVT__r_state))) {
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
    this->__PVT__r_8_valid = ((IData)(this->__PVT__compressed_FIFO_r_req) 
                              & (7U == (IData)(this->__PVT__r_state)));
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
    this->__PVT__w_8_valid = ((((5U == (IData)(this->__PVT__decompress_state)) 
                                | (0xaU == (IData)(this->__PVT__decompress_state))) 
                               | (9U == (IData)(this->__PVT__decompress_state))) 
                              | (((4U == (IData)(this->__PVT__decompress_state)) 
                                  | (3U == (IData)(this->__PVT__decompress_state))) 
                                 & (IData)(this->__PVT__r_8_valid)));
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
    this->__PVT__decompressed_fifo_w_ena = (((((1U 
                                                == (IData)(this->__PVT__w_state)) 
                                               & (7U 
                                                  == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                                              & (IData)(this->__PVT__w_8_valid)) 
                                             | (8U 
                                                == (IData)(this->__PVT__w_state))) 
                                            | (0xbU 
                                               == (IData)(this->__PVT__w_state)));
    this->__PVT__fifo_rear_128_inc_ena = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->__PVT__fifo_rear_128_inc_ena = 1U;
        }
    }
    this->BRAM10_en_a = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_en_a = 1U;
        }
    }
    this->BRAM10_we_a = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_we_a = 1U;
        }
    }
    this->BRAM10_addr_a = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_addr_a = (0x1ffU & ((IData)(0x80U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_rear_128))));
        }
    }
    this->BRAM10_din_a = 0ULL;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_128))));
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
                } else {
                    if ((2U == (IData)(this->__PVT__w_state))) {
                        this->__PVT__w_state_next = 0U;
                    }
                }
            }
        }
    }
    this->__PVT__w_8_ready = ((((1U == (IData)(this->__PVT__w_state)) 
                                & (IData)(this->__PVT__w_8_valid)) 
                               & ((7U > (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                                  | ((7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                                     & (IData)(this->__PVT__decompressed_fifo_w_end)))) 
                              | ((8U == (IData)(this->__PVT__w_state)) 
                                 & (IData)(this->__PVT__decompressed_fifo_w_end)));
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

void VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2__11(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_uni2__11\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__compressed_fifo_r_data = 0ULL;
    if (this->__PVT__compressed_fifo_r_state) {
        if (this->__PVT__compressed_fifo_r_state) {
            this->__PVT__compressed_fifo_r_data = vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__uni2_comp_data;
        }
    } else {
        this->__PVT__compressed_fifo_r_data = 0ULL;
    }
    this->__PVT__fifo_front_128_inc_ena = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__fifo_front_128_inc_ena = 1U;
        }
    }
    this->__PVT__decompressed_fifo_r_state_next = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__decompressed_fifo_r_state_next = 1U;
        }
    }
    this->BRAM10_en_b = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM10_en_b = 1U;
        }
    }
    this->BRAM10_addr_b = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_un2.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM10_addr_b = (0x1ffU & ((IData)(0x80U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_front_128))));
        }
    }
}

void VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script__3(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script__3\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->BRAM12_en_b = 0U;
    this->BRAM11_addr_b = 0U;
    this->BRAM11_en_b = 0U;
    this->BRAM12_addr_a = 0U;
    this->BRAM12_din_a = 0ULL;
    this->BRAM12_en_a = 0U;
    this->BRAM12_we_a = 0U;
    this->BRAM11_addr_a = 0U;
    this->BRAM11_din_a = 0ULL;
    this->BRAM11_en_a = 0U;
    this->BRAM11_we_a = 0U;
    this->BRAM12_addr_b = 0U;
    this->__PVT__fifo_rear_256_inc_ena = 0U;
    this->__PVT__fifo_front_256_inc_ena = 0U;
    this->Decompressed_FIFO_data = 0ULL;
    if ((0U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
        this->Decompressed_FIFO_data = 0ULL;
    } else {
        if ((1U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
            this->Decompressed_FIFO_data = vlTOPp->BRAM10_dout_b;
        } else {
            if ((2U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                this->Decompressed_FIFO_data = 0ULL;
            } else {
                if ((3U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                    this->Decompressed_FIFO_data = 0ULL;
                }
            }
        }
    }
    this->__PVT__fifo_full_128 = (((0x7fU & (IData)(this->__PVT__fifo_front_128)) 
                                   == (0x7fU & (IData)(this->__PVT__fifo_rear_128))) 
                                  & ((1U & ((IData)(this->__PVT__fifo_front_128) 
                                            >> 7U)) 
                                     != (1U & ((IData)(this->__PVT__fifo_rear_128) 
                                               >> 7U))));
    this->Decompressed_FIFO_r_master = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->__PVT__fifo_empty_128 = ((IData)(this->__PVT__fifo_front_128) 
                                   == (IData)(this->__PVT__fifo_rear_128));
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
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
             & (2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->__PVT__w_end_req = ((2U == (IData)(this->__PVT__decompress_state)) 
                              | (0U == (IData)(this->__PVT__decompress_state)));
    this->Compressed_FIFO_ena = 1U;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->Compressed_FIFO_ena = 0U;
    } else {
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
    this->Compressed_FIFO_dequeue = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
             & (2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
    this->__PVT__compressed_FIFO_r_req = (((1U == (IData)(this->__PVT__decompress_state)) 
                                           | (4U == (IData)(this->__PVT__decompress_state))) 
                                          | (3U == (IData)(this->__PVT__decompress_state)));
    this->__PVT__compressed_FIFO_reg_counter_inc_ena = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U != (IData)(this->__PVT__r_state))) {
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
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((IData)(this->__PVT__w_end_req)
                                          ? 2U : ((
                                                   (2U 
                                                    == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                                   & (((1U 
                                                        == (IData)(this->__PVT__r_state)) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
                                                      & (2U 
                                                         == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))))
                                                   ? 6U
                                                   : 1U));
        } else {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__r_state_next = 7U;
                if (this->__PVT__w_end_req) {
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
                        this->__PVT__r_state_next = 
                            ((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                              ? 7U : ((1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                       ? 7U : ((2U 
                                                == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                ? 7U
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                    ? 7U
                                                    : 
                                                   ((4U 
                                                     == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                     ? 7U
                                                     : 
                                                    ((5U 
                                                      == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                       ? 7U
                                                       : 
                                                      ((IData)(this->__PVT__compressed_FIFO_r_req)
                                                        ? 1U
                                                        : 7U))))))));
                    }
                    if (this->__PVT__w_end_req) {
                        this->__PVT__r_state_next = 2U;
                    }
                } else {
                    if ((2U == (IData)(this->__PVT__r_state))) {
                        this->__PVT__r_state_next = 0U;
                    }
                }
            }
        }
    }
    this->__PVT__r_8 = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U != (IData)(this->__PVT__r_state))) {
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
    this->__PVT__r_8_valid = ((IData)(this->__PVT__compressed_FIFO_r_req) 
                              & (7U == (IData)(this->__PVT__r_state)));
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
    this->__PVT__w_8_valid = ((((5U == (IData)(this->__PVT__decompress_state)) 
                                | (0xaU == (IData)(this->__PVT__decompress_state))) 
                               | (9U == (IData)(this->__PVT__decompress_state))) 
                              | (((4U == (IData)(this->__PVT__decompress_state)) 
                                  | (3U == (IData)(this->__PVT__decompress_state))) 
                                 & (IData)(this->__PVT__r_8_valid)));
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
    this->__PVT__decompressed_fifo_w_ena = (((((1U 
                                                == (IData)(this->__PVT__w_state)) 
                                               & (7U 
                                                  == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                                              & (IData)(this->__PVT__w_8_valid)) 
                                             | (8U 
                                                == (IData)(this->__PVT__w_state))) 
                                            | (0xbU 
                                               == (IData)(this->__PVT__w_state)));
    this->__PVT__fifo_rear_128_inc_ena = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->__PVT__fifo_rear_128_inc_ena = 1U;
        }
    }
    this->BRAM10_en_a = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_en_a = 1U;
        }
    }
    this->BRAM10_we_a = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_we_a = 1U;
        }
    }
    this->BRAM10_addr_a = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_addr_a = (0x1ffU & ((IData)(0x100U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_rear_128))));
        }
    }
    this->BRAM10_din_a = 0ULL;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_128))));
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
                } else {
                    if ((2U == (IData)(this->__PVT__w_state))) {
                        this->__PVT__w_state_next = 0U;
                    }
                }
            }
        }
    }
    this->__PVT__w_8_ready = ((((1U == (IData)(this->__PVT__w_state)) 
                                & (IData)(this->__PVT__w_8_valid)) 
                               & ((7U > (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                                  | ((7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                                     & (IData)(this->__PVT__decompressed_fifo_w_end)))) 
                              | ((8U == (IData)(this->__PVT__w_state)) 
                                 & (IData)(this->__PVT__decompressed_fifo_w_end)));
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

void VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script__14(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script__14\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__compressed_fifo_r_data = 0ULL;
    if (this->__PVT__compressed_fifo_r_state) {
        if (this->__PVT__compressed_fifo_r_state) {
            this->__PVT__compressed_fifo_r_data = vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__sc_comp_data;
        }
    } else {
        this->__PVT__compressed_fifo_r_data = 0ULL;
    }
    this->__PVT__fifo_front_128_inc_ena = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__fifo_front_128_inc_ena = 1U;
        }
    }
    this->__PVT__decompressed_fifo_r_state_next = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__decompressed_fifo_r_state_next = 1U;
        }
    }
    this->BRAM10_en_b = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM10_en_b = 1U;
        }
    }
    this->BRAM10_addr_b = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_sc.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM10_addr_b = (0x1ffU & ((IData)(0x100U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_front_128))));
        }
    }
}

void VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status__4(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status__4\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->BRAM12_en_b = 0U;
    this->BRAM11_addr_b = 0U;
    this->BRAM11_en_b = 0U;
    this->BRAM12_addr_a = 0U;
    this->BRAM12_din_a = 0ULL;
    this->BRAM12_en_a = 0U;
    this->BRAM12_we_a = 0U;
    this->BRAM11_addr_a = 0U;
    this->BRAM11_din_a = 0ULL;
    this->BRAM11_en_a = 0U;
    this->BRAM11_we_a = 0U;
    this->BRAM12_addr_b = 0U;
    this->__PVT__fifo_rear_256_inc_ena = 0U;
    this->__PVT__fifo_front_256_inc_ena = 0U;
    this->Decompressed_FIFO_data = 0ULL;
    if ((0U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
        this->Decompressed_FIFO_data = 0ULL;
    } else {
        if ((1U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
            this->Decompressed_FIFO_data = vlTOPp->BRAM10_dout_b;
        } else {
            if ((2U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                this->Decompressed_FIFO_data = 0ULL;
            } else {
                if ((3U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                    this->Decompressed_FIFO_data = 0ULL;
                }
            }
        }
    }
    this->__PVT__fifo_full_128 = (((0x7fU & (IData)(this->__PVT__fifo_front_128)) 
                                   == (0x7fU & (IData)(this->__PVT__fifo_rear_128))) 
                                  & ((1U & ((IData)(this->__PVT__fifo_front_128) 
                                            >> 7U)) 
                                     != (1U & ((IData)(this->__PVT__fifo_rear_128) 
                                               >> 7U))));
    this->Decompressed_FIFO_r_master = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->__PVT__fifo_empty_128 = ((IData)(this->__PVT__fifo_front_128) 
                                   == (IData)(this->__PVT__fifo_rear_128));
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
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
             & (3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->__PVT__w_end_req = ((2U == (IData)(this->__PVT__decompress_state)) 
                              | (0U == (IData)(this->__PVT__decompress_state)));
    this->Compressed_FIFO_ena = 1U;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->Compressed_FIFO_ena = 0U;
    } else {
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
    this->Compressed_FIFO_dequeue = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
             & (3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
    this->__PVT__compressed_FIFO_r_req = (((1U == (IData)(this->__PVT__decompress_state)) 
                                           | (4U == (IData)(this->__PVT__decompress_state))) 
                                          | (3U == (IData)(this->__PVT__decompress_state)));
    this->__PVT__compressed_FIFO_reg_counter_inc_ena = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U != (IData)(this->__PVT__r_state))) {
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
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((IData)(this->__PVT__w_end_req)
                                          ? 2U : ((
                                                   (3U 
                                                    == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                                   & (((1U 
                                                        == (IData)(this->__PVT__r_state)) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
                                                      & (3U 
                                                         == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))))
                                                   ? 6U
                                                   : 1U));
        } else {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__r_state_next = 7U;
                if (this->__PVT__w_end_req) {
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
                        this->__PVT__r_state_next = 
                            ((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                              ? 7U : ((1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                       ? 7U : ((2U 
                                                == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                ? 7U
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                    ? 7U
                                                    : 
                                                   ((4U 
                                                     == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                     ? 7U
                                                     : 
                                                    ((5U 
                                                      == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                       ? 7U
                                                       : 
                                                      ((IData)(this->__PVT__compressed_FIFO_r_req)
                                                        ? 1U
                                                        : 7U))))))));
                    }
                    if (this->__PVT__w_end_req) {
                        this->__PVT__r_state_next = 2U;
                    }
                } else {
                    if ((2U == (IData)(this->__PVT__r_state))) {
                        this->__PVT__r_state_next = 0U;
                    }
                }
            }
        }
    }
    this->__PVT__r_8 = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U != (IData)(this->__PVT__r_state))) {
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
    this->__PVT__r_8_valid = ((IData)(this->__PVT__compressed_FIFO_r_req) 
                              & (7U == (IData)(this->__PVT__r_state)));
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
    this->__PVT__w_8_valid = ((((5U == (IData)(this->__PVT__decompress_state)) 
                                | (0xaU == (IData)(this->__PVT__decompress_state))) 
                               | (9U == (IData)(this->__PVT__decompress_state))) 
                              | (((4U == (IData)(this->__PVT__decompress_state)) 
                                  | (3U == (IData)(this->__PVT__decompress_state))) 
                                 & (IData)(this->__PVT__r_8_valid)));
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
    this->__PVT__decompressed_fifo_w_ena = (((((1U 
                                                == (IData)(this->__PVT__w_state)) 
                                               & (7U 
                                                  == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                                              & (IData)(this->__PVT__w_8_valid)) 
                                             | (8U 
                                                == (IData)(this->__PVT__w_state))) 
                                            | (0xbU 
                                               == (IData)(this->__PVT__w_state)));
    this->__PVT__fifo_rear_128_inc_ena = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->__PVT__fifo_rear_128_inc_ena = 1U;
        }
    }
    this->BRAM10_en_a = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_en_a = 1U;
        }
    }
    this->BRAM10_we_a = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_we_a = 1U;
        }
    }
    this->BRAM10_addr_a = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_addr_a = (0x1ffU & ((IData)(0x180U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_rear_128))));
        }
    }
    this->BRAM10_din_a = 0ULL;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_128))));
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
                } else {
                    if ((2U == (IData)(this->__PVT__w_state))) {
                        this->__PVT__w_state_next = 0U;
                    }
                }
            }
        }
    }
    this->__PVT__w_8_ready = ((((1U == (IData)(this->__PVT__w_state)) 
                                & (IData)(this->__PVT__w_8_valid)) 
                               & ((7U > (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                                  | ((7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                                     & (IData)(this->__PVT__decompressed_fifo_w_end)))) 
                              | ((8U == (IData)(this->__PVT__w_state)) 
                                 & (IData)(this->__PVT__decompressed_fifo_w_end)));
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

void VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status__13(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_status__13\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__compressed_fifo_r_data = 0ULL;
    if (this->__PVT__compressed_fifo_r_state) {
        if (this->__PVT__compressed_fifo_r_state) {
            this->__PVT__compressed_fifo_r_data = vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__st_comp_data;
        }
    } else {
        this->__PVT__compressed_fifo_r_data = 0ULL;
    }
    this->__PVT__fifo_front_128_inc_ena = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_st.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__fifo_front_128_inc_ena = 1U;
        }
    }
    this->__PVT__decompressed_fifo_r_state_next = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_st.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__decompressed_fifo_r_state_next = 1U;
        }
    }
    this->BRAM10_en_b = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_st.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM10_en_b = 1U;
        }
    }
    this->BRAM10_addr_b = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_st.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM10_addr_b = (0x1ffU & ((IData)(0x180U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_front_128))));
        }
    }
}

void VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1__5(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1__5\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->BRAM12_en_b = 0U;
    this->BRAM10_addr_b = 0U;
    this->BRAM10_en_b = 0U;
    this->BRAM12_addr_a = 0U;
    this->BRAM12_din_a = 0ULL;
    this->BRAM12_en_a = 0U;
    this->BRAM12_we_a = 0U;
    this->BRAM10_addr_a = 0U;
    this->BRAM10_din_a = 0ULL;
    this->BRAM10_en_a = 0U;
    this->BRAM10_we_a = 0U;
    this->BRAM12_addr_b = 0U;
    this->__PVT__fifo_rear_256_inc_ena = 0U;
    this->__PVT__fifo_front_256_inc_ena = 0U;
    this->Decompressed_FIFO_data = 0ULL;
    if ((0U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
        this->Decompressed_FIFO_data = 0ULL;
    } else {
        if ((1U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
            this->Decompressed_FIFO_data = 0ULL;
        } else {
            if ((2U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                this->Decompressed_FIFO_data = vlTOPp->BRAM11_dout_b;
            } else {
                if ((3U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                    this->Decompressed_FIFO_data = 0ULL;
                }
            }
        }
    }
    this->__PVT__fifo_full_128 = (((0x7fU & (IData)(this->__PVT__fifo_front_128)) 
                                   == (0x7fU & (IData)(this->__PVT__fifo_rear_128))) 
                                  & ((1U & ((IData)(this->__PVT__fifo_front_128) 
                                            >> 7U)) 
                                     != (1U & ((IData)(this->__PVT__fifo_rear_128) 
                                               >> 7U))));
    this->Decompressed_FIFO_r_master = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->__PVT__fifo_empty_128 = ((IData)(this->__PVT__fifo_front_128) 
                                   == (IData)(this->__PVT__fifo_rear_128));
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
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
             & (0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->__PVT__w_end_req = ((2U == (IData)(this->__PVT__decompress_state)) 
                              | (0U == (IData)(this->__PVT__decompress_state)));
    this->__PVT__r_end_req = ((2U == (IData)(this->__PVT__decompress_state)) 
                              | (0U == (IData)(this->__PVT__decompress_state)));
    this->Compressed_FIFO_ena = 1U;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->Compressed_FIFO_ena = 0U;
    } else {
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
    this->Compressed_FIFO_dequeue = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
             & (0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
    this->__PVT__compressed_FIFO_r_req = (((1U == (IData)(this->__PVT__decompress_state)) 
                                           | (4U == (IData)(this->__PVT__decompress_state))) 
                                          | (3U == (IData)(this->__PVT__decompress_state)));
    this->__PVT__compressed_FIFO_reg_counter_inc_ena = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U != (IData)(this->__PVT__r_state))) {
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
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((IData)(this->__PVT__r_end_req)
                                          ? 2U : ((
                                                   (0U 
                                                    == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                                   & (((1U 
                                                        == (IData)(this->__PVT__r_state)) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
                                                      & (0U 
                                                         == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))))
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
                        this->__PVT__r_state_next = 
                            ((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                              ? 7U : ((1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                       ? 7U : ((2U 
                                                == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                ? 7U
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                    ? 7U
                                                    : 
                                                   ((4U 
                                                     == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                     ? 7U
                                                     : 
                                                    ((5U 
                                                      == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                       ? 7U
                                                       : 
                                                      ((IData)(this->__PVT__compressed_FIFO_r_req)
                                                        ? 1U
                                                        : 7U))))))));
                    }
                    if (this->__PVT__r_end_req) {
                        this->__PVT__r_state_next = 2U;
                    }
                } else {
                    if ((2U == (IData)(this->__PVT__r_state))) {
                        this->__PVT__r_state_next = 0U;
                    }
                }
            }
        }
    }
    this->__PVT__r_8 = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U != (IData)(this->__PVT__r_state))) {
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
    this->__PVT__r_8_valid = ((IData)(this->__PVT__compressed_FIFO_r_req) 
                              & (7U == (IData)(this->__PVT__r_state)));
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
    this->__PVT__w_8_valid = ((((5U == (IData)(this->__PVT__decompress_state)) 
                                | (0xaU == (IData)(this->__PVT__decompress_state))) 
                               | (9U == (IData)(this->__PVT__decompress_state))) 
                              | (((4U == (IData)(this->__PVT__decompress_state)) 
                                  | (3U == (IData)(this->__PVT__decompress_state))) 
                                 & (IData)(this->__PVT__r_8_valid)));
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
    this->__PVT__decompressed_fifo_w_ena = (((((1U 
                                                == (IData)(this->__PVT__w_state)) 
                                               & (7U 
                                                  == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                                              & (IData)(this->__PVT__w_8_valid)) 
                                             | (8U 
                                                == (IData)(this->__PVT__w_state))) 
                                            | (0xbU 
                                               == (IData)(this->__PVT__w_state)));
    this->__PVT__fifo_rear_128_inc_ena = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->__PVT__fifo_rear_128_inc_ena = 1U;
        }
    }
    this->BRAM11_en_a = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_en_a = 1U;
        }
    }
    this->BRAM11_we_a = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_we_a = 1U;
        }
    }
    this->BRAM11_addr_a = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_addr_a = (0x7fU & (IData)(this->__PVT__fifo_rear_128));
        }
    }
    this->BRAM11_din_a = 0ULL;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_128))));
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
                } else {
                    if ((2U == (IData)(this->__PVT__w_state))) {
                        this->__PVT__w_state_next = 0U;
                    }
                }
            }
        }
    }
    this->__PVT__w_8_ready = ((((1U == (IData)(this->__PVT__w_state)) 
                                & (IData)(this->__PVT__w_8_valid)) 
                               & ((7U > (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                                  | ((7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                                     & (IData)(this->__PVT__decompressed_fifo_w_end)))) 
                              | ((8U == (IData)(this->__PVT__w_state)) 
                                 & (IData)(this->__PVT__decompressed_fifo_w_end)));
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

void VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1__18(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1__18\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__compressed_fifo_r_data = 0ULL;
    if (this->__PVT__compressed_fifo_r_state) {
        if (this->__PVT__compressed_fifo_r_state) {
            this->__PVT__compressed_fifo_r_data = vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__ch1_comp_data;
        }
    } else {
        this->__PVT__compressed_fifo_r_data = 0ULL;
    }
    this->__PVT__fifo_front_128_inc_ena = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__fifo_front_128_inc_ena = 1U;
        }
    }
    this->__PVT__decompressed_fifo_r_state_next = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__decompressed_fifo_r_state_next = 2U;
        }
    }
    this->BRAM11_en_b = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM11_en_b = 1U;
        }
    }
    this->BRAM11_addr_b = 0U;
    if ((0U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch1.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM11_addr_b = (0x7fU & (IData)(this->__PVT__fifo_front_128));
        }
    }
}

void VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2__6(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2__6\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->BRAM12_en_b = 0U;
    this->BRAM10_addr_b = 0U;
    this->BRAM10_en_b = 0U;
    this->BRAM12_addr_a = 0U;
    this->BRAM12_din_a = 0ULL;
    this->BRAM12_en_a = 0U;
    this->BRAM12_we_a = 0U;
    this->BRAM10_addr_a = 0U;
    this->BRAM10_din_a = 0ULL;
    this->BRAM10_en_a = 0U;
    this->BRAM10_we_a = 0U;
    this->BRAM12_addr_b = 0U;
    this->__PVT__fifo_rear_256_inc_ena = 0U;
    this->__PVT__fifo_front_256_inc_ena = 0U;
    this->Decompressed_FIFO_data = 0ULL;
    if ((0U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
        this->Decompressed_FIFO_data = 0ULL;
    } else {
        if ((1U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
            this->Decompressed_FIFO_data = 0ULL;
        } else {
            if ((2U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                this->Decompressed_FIFO_data = vlTOPp->BRAM11_dout_b;
            } else {
                if ((3U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                    this->Decompressed_FIFO_data = 0ULL;
                }
            }
        }
    }
    this->__PVT__fifo_full_128 = (((0x7fU & (IData)(this->__PVT__fifo_front_128)) 
                                   == (0x7fU & (IData)(this->__PVT__fifo_rear_128))) 
                                  & ((1U & ((IData)(this->__PVT__fifo_front_128) 
                                            >> 7U)) 
                                     != (1U & ((IData)(this->__PVT__fifo_rear_128) 
                                               >> 7U))));
    this->Decompressed_FIFO_r_master = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->__PVT__fifo_empty_128 = ((IData)(this->__PVT__fifo_front_128) 
                                   == (IData)(this->__PVT__fifo_rear_128));
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
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
             & (1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->__PVT__w_end_req = ((2U == (IData)(this->__PVT__decompress_state)) 
                              | (0U == (IData)(this->__PVT__decompress_state)));
    this->__PVT__r_end_req = ((2U == (IData)(this->__PVT__decompress_state)) 
                              | (0U == (IData)(this->__PVT__decompress_state)));
    this->Compressed_FIFO_ena = 1U;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->Compressed_FIFO_ena = 0U;
    } else {
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
    this->Compressed_FIFO_dequeue = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
             & (1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
    this->__PVT__compressed_FIFO_r_req = (((1U == (IData)(this->__PVT__decompress_state)) 
                                           | (4U == (IData)(this->__PVT__decompress_state))) 
                                          | (3U == (IData)(this->__PVT__decompress_state)));
    this->__PVT__compressed_FIFO_reg_counter_inc_ena = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U != (IData)(this->__PVT__r_state))) {
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
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((IData)(this->__PVT__r_end_req)
                                          ? 2U : ((
                                                   (1U 
                                                    == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                                   & (((1U 
                                                        == (IData)(this->__PVT__r_state)) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
                                                      & (1U 
                                                         == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))))
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
                        this->__PVT__r_state_next = 
                            ((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                              ? 7U : ((1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                       ? 7U : ((2U 
                                                == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                ? 7U
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                    ? 7U
                                                    : 
                                                   ((4U 
                                                     == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                     ? 7U
                                                     : 
                                                    ((5U 
                                                      == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                       ? 7U
                                                       : 
                                                      ((IData)(this->__PVT__compressed_FIFO_r_req)
                                                        ? 1U
                                                        : 7U))))))));
                    }
                    if (this->__PVT__r_end_req) {
                        this->__PVT__r_state_next = 2U;
                    }
                } else {
                    if ((2U == (IData)(this->__PVT__r_state))) {
                        this->__PVT__r_state_next = 0U;
                    }
                }
            }
        }
    }
    this->__PVT__r_8 = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U != (IData)(this->__PVT__r_state))) {
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
    this->__PVT__r_8_valid = ((IData)(this->__PVT__compressed_FIFO_r_req) 
                              & (7U == (IData)(this->__PVT__r_state)));
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
    this->__PVT__w_8_valid = ((((5U == (IData)(this->__PVT__decompress_state)) 
                                | (0xaU == (IData)(this->__PVT__decompress_state))) 
                               | (9U == (IData)(this->__PVT__decompress_state))) 
                              | (((4U == (IData)(this->__PVT__decompress_state)) 
                                  | (3U == (IData)(this->__PVT__decompress_state))) 
                                 & (IData)(this->__PVT__r_8_valid)));
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
    this->__PVT__decompressed_fifo_w_ena = (((((1U 
                                                == (IData)(this->__PVT__w_state)) 
                                               & (7U 
                                                  == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                                              & (IData)(this->__PVT__w_8_valid)) 
                                             | (8U 
                                                == (IData)(this->__PVT__w_state))) 
                                            | (0xbU 
                                               == (IData)(this->__PVT__w_state)));
    this->__PVT__fifo_rear_128_inc_ena = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->__PVT__fifo_rear_128_inc_ena = 1U;
        }
    }
    this->BRAM11_en_a = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_en_a = 1U;
        }
    }
    this->BRAM11_we_a = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_we_a = 1U;
        }
    }
    this->BRAM11_addr_a = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_addr_a = (0x1ffU & ((IData)(0x80U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_rear_128))));
        }
    }
    this->BRAM11_din_a = 0ULL;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_128))));
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
                } else {
                    if ((2U == (IData)(this->__PVT__w_state))) {
                        this->__PVT__w_state_next = 0U;
                    }
                }
            }
        }
    }
    this->__PVT__w_8_ready = ((((1U == (IData)(this->__PVT__w_state)) 
                                & (IData)(this->__PVT__w_8_valid)) 
                               & ((7U > (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                                  | ((7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                                     & (IData)(this->__PVT__decompressed_fifo_w_end)))) 
                              | ((8U == (IData)(this->__PVT__w_state)) 
                                 & (IData)(this->__PVT__decompressed_fifo_w_end)));
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

void VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2__17(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2__17\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__compressed_fifo_r_data = 0ULL;
    if (this->__PVT__compressed_fifo_r_state) {
        if (this->__PVT__compressed_fifo_r_state) {
            this->__PVT__compressed_fifo_r_data = vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__ch2_comp_data;
        }
    } else {
        this->__PVT__compressed_fifo_r_data = 0ULL;
    }
    this->__PVT__fifo_front_128_inc_ena = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__fifo_front_128_inc_ena = 1U;
        }
    }
    this->__PVT__decompressed_fifo_r_state_next = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__decompressed_fifo_r_state_next = 2U;
        }
    }
    this->BRAM11_en_b = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM11_en_b = 1U;
        }
    }
    this->BRAM11_addr_b = 0U;
    if ((1U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch2.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM11_addr_b = (0x1ffU & ((IData)(0x80U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_front_128))));
        }
    }
}

void VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3__7(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3__7\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->BRAM12_en_b = 0U;
    this->BRAM10_addr_b = 0U;
    this->BRAM10_en_b = 0U;
    this->BRAM12_addr_a = 0U;
    this->BRAM12_din_a = 0ULL;
    this->BRAM12_en_a = 0U;
    this->BRAM12_we_a = 0U;
    this->BRAM10_addr_a = 0U;
    this->BRAM10_din_a = 0ULL;
    this->BRAM10_en_a = 0U;
    this->BRAM10_we_a = 0U;
    this->BRAM12_addr_b = 0U;
    this->__PVT__fifo_rear_256_inc_ena = 0U;
    this->__PVT__fifo_front_256_inc_ena = 0U;
    this->Decompressed_FIFO_data = 0ULL;
    if ((0U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
        this->Decompressed_FIFO_data = 0ULL;
    } else {
        if ((1U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
            this->Decompressed_FIFO_data = 0ULL;
        } else {
            if ((2U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                this->Decompressed_FIFO_data = vlTOPp->BRAM11_dout_b;
            } else {
                if ((3U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                    this->Decompressed_FIFO_data = 0ULL;
                }
            }
        }
    }
    this->__PVT__fifo_full_128 = (((0x7fU & (IData)(this->__PVT__fifo_front_128)) 
                                   == (0x7fU & (IData)(this->__PVT__fifo_rear_128))) 
                                  & ((1U & ((IData)(this->__PVT__fifo_front_128) 
                                            >> 7U)) 
                                     != (1U & ((IData)(this->__PVT__fifo_rear_128) 
                                               >> 7U))));
    this->Decompressed_FIFO_r_master = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->__PVT__fifo_empty_128 = ((IData)(this->__PVT__fifo_front_128) 
                                   == (IData)(this->__PVT__fifo_rear_128));
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
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
             & (2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->__PVT__r_end_req = ((2U == (IData)(this->__PVT__decompress_state)) 
                              | (0U == (IData)(this->__PVT__decompress_state)));
    this->Compressed_FIFO_ena = 1U;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->Compressed_FIFO_ena = 0U;
    } else {
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
    this->Compressed_FIFO_dequeue = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
             & (2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
    this->__PVT__compressed_FIFO_r_req = (((1U == (IData)(this->__PVT__decompress_state)) 
                                           | (4U == (IData)(this->__PVT__decompress_state))) 
                                          | (3U == (IData)(this->__PVT__decompress_state)));
    this->__PVT__compressed_FIFO_reg_counter_inc_ena = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U != (IData)(this->__PVT__r_state))) {
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
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((IData)(this->__PVT__r_end_req)
                                          ? 2U : ((
                                                   (2U 
                                                    == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                                   & (((1U 
                                                        == (IData)(this->__PVT__r_state)) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
                                                      & (2U 
                                                         == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))))
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
                        this->__PVT__r_state_next = 
                            ((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                              ? 7U : ((1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                       ? 7U : ((2U 
                                                == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                ? 7U
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                    ? 7U
                                                    : 
                                                   ((4U 
                                                     == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                     ? 7U
                                                     : 
                                                    ((5U 
                                                      == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                       ? 7U
                                                       : 
                                                      ((IData)(this->__PVT__compressed_FIFO_r_req)
                                                        ? 1U
                                                        : 7U))))))));
                    }
                    if (this->__PVT__r_end_req) {
                        this->__PVT__r_state_next = 2U;
                    }
                } else {
                    if ((2U == (IData)(this->__PVT__r_state))) {
                        this->__PVT__r_state_next = 0U;
                    }
                }
            }
        }
    }
    this->__PVT__r_8 = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U != (IData)(this->__PVT__r_state))) {
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
    this->__PVT__r_8_valid = ((IData)(this->__PVT__compressed_FIFO_r_req) 
                              & (7U == (IData)(this->__PVT__r_state)));
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
    this->__PVT__w_8_valid = ((((5U == (IData)(this->__PVT__decompress_state)) 
                                | (0xaU == (IData)(this->__PVT__decompress_state))) 
                               | (9U == (IData)(this->__PVT__decompress_state))) 
                              | (((4U == (IData)(this->__PVT__decompress_state)) 
                                  | (3U == (IData)(this->__PVT__decompress_state))) 
                                 & (IData)(this->__PVT__r_8_valid)));
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
    this->__PVT__decompressed_fifo_w_ena = (((((1U 
                                                == (IData)(this->__PVT__w_state)) 
                                               & (7U 
                                                  == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                                              & (IData)(this->__PVT__w_8_valid)) 
                                             | (8U 
                                                == (IData)(this->__PVT__w_state))) 
                                            | (0xbU 
                                               == (IData)(this->__PVT__w_state)));
    this->__PVT__fifo_rear_128_inc_ena = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->__PVT__fifo_rear_128_inc_ena = 1U;
        }
    }
    this->BRAM11_en_a = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_en_a = 1U;
        }
    }
    this->BRAM11_we_a = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_we_a = 1U;
        }
    }
    this->BRAM11_addr_a = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_addr_a = (0x1ffU & ((IData)(0x100U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_rear_128))));
        }
    }
    this->BRAM11_din_a = 0ULL;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_128))));
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
            if (this->__PVT__r_end_req) {
                this->__PVT__w_state_next = 0xbU;
            }
        } else {
            if ((8U == (IData)(this->__PVT__w_state))) {
                this->__PVT__w_state_next = ((IData)(this->__PVT__decompressed_fifo_w_end)
                                              ? ((IData)(this->__PVT__r_end_req)
                                                  ? 2U
                                                  : 1U)
                                              : 8U);
            } else {
                if ((0xbU == (IData)(this->__PVT__w_state))) {
                    this->__PVT__w_state_next = ((IData)(this->__PVT__decompressed_fifo_w_end)
                                                  ? 2U
                                                  : 0xbU);
                } else {
                    if ((2U == (IData)(this->__PVT__w_state))) {
                        this->__PVT__w_state_next = 0U;
                    }
                }
            }
        }
    }
    this->__PVT__w_8_ready = ((((1U == (IData)(this->__PVT__w_state)) 
                                & (IData)(this->__PVT__w_8_valid)) 
                               & ((7U > (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                                  | ((7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                                     & (IData)(this->__PVT__decompressed_fifo_w_end)))) 
                              | ((8U == (IData)(this->__PVT__w_state)) 
                                 & (IData)(this->__PVT__decompressed_fifo_w_end)));
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

void VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3__16(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3__16\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__compressed_fifo_r_data = 0ULL;
    if (this->__PVT__compressed_fifo_r_state) {
        if (this->__PVT__compressed_fifo_r_state) {
            this->__PVT__compressed_fifo_r_data = vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__ch3_comp_data;
        }
    } else {
        this->__PVT__compressed_fifo_r_data = 0ULL;
    }
    this->__PVT__fifo_front_128_inc_ena = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__fifo_front_128_inc_ena = 1U;
        }
    }
    this->__PVT__decompressed_fifo_r_state_next = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__decompressed_fifo_r_state_next = 2U;
        }
    }
    this->BRAM11_en_b = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM11_en_b = 1U;
        }
    }
    this->BRAM11_addr_b = 0U;
    if ((2U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_ch3.Decomp_fifo_dequeue) 
             & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM11_addr_b = (0x1ffU & ((IData)(0x100U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_front_128))));
        }
    }
}

void VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4__8(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPPU_TOP_Decompresser::_settle__TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4__8\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->BRAM12_en_b = 0U;
    this->BRAM10_addr_b = 0U;
    this->BRAM10_en_b = 0U;
    this->BRAM12_addr_a = 0U;
    this->BRAM12_din_a = 0ULL;
    this->BRAM12_en_a = 0U;
    this->BRAM12_we_a = 0U;
    this->BRAM10_addr_a = 0U;
    this->BRAM10_din_a = 0ULL;
    this->BRAM10_en_a = 0U;
    this->BRAM10_we_a = 0U;
    this->BRAM12_addr_b = 0U;
    this->__PVT__fifo_rear_256_inc_ena = 0U;
    this->__PVT__fifo_front_256_inc_ena = 0U;
    this->Decompressed_FIFO_data = 0ULL;
    if ((0U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
        this->Decompressed_FIFO_data = 0ULL;
    } else {
        if ((1U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
            this->Decompressed_FIFO_data = 0ULL;
        } else {
            if ((2U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                this->Decompressed_FIFO_data = vlTOPp->BRAM11_dout_b;
            } else {
                if ((3U == (IData)(this->__PVT__decompressed_fifo_r_state))) {
                    this->Decompressed_FIFO_data = 0ULL;
                }
            }
        }
    }
    this->__PVT__fifo_full_128 = (((0x7fU & (IData)(this->__PVT__fifo_front_128)) 
                                   == (0x7fU & (IData)(this->__PVT__fifo_rear_128))) 
                                  & ((1U & ((IData)(this->__PVT__fifo_front_128) 
                                            >> 7U)) 
                                     != (1U & ((IData)(this->__PVT__fifo_rear_128) 
                                               >> 7U))));
    this->Decompressed_FIFO_r_master = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->__PVT__fifo_empty_128 = ((IData)(this->__PVT__fifo_front_128) 
                                   == (IData)(this->__PVT__fifo_rear_128));
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
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
             & (3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->__PVT__w_end_req = ((2U == (IData)(this->__PVT__decompress_state)) 
                              | (0U == (IData)(this->__PVT__decompress_state)));
    this->__PVT__r_end_req = ((2U == (IData)(this->__PVT__decompress_state)) 
                              | (0U == (IData)(this->__PVT__decompress_state)));
    this->Compressed_FIFO_ena = 1U;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->Compressed_FIFO_ena = 0U;
    } else {
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
    this->Compressed_FIFO_dequeue = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
             & (3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
    this->__PVT__compressed_FIFO_r_req = (((1U == (IData)(this->__PVT__decompress_state)) 
                                           | (4U == (IData)(this->__PVT__decompress_state))) 
                                          | (3U == (IData)(this->__PVT__decompress_state)));
    this->__PVT__compressed_FIFO_reg_counter_inc_ena = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U != (IData)(this->__PVT__r_state))) {
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
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((IData)(this->__PVT__r_end_req)
                                          ? 2U : ((
                                                   (3U 
                                                    == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                                   & (((1U 
                                                        == (IData)(this->__PVT__r_state)) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->PPU_TOP__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
                                                      & (3U 
                                                         == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))))
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
                        this->__PVT__r_state_next = 
                            ((0U == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                              ? 7U : ((1U == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                       ? 7U : ((2U 
                                                == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                ? 7U
                                                : (
                                                   (3U 
                                                    == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                    ? 7U
                                                    : 
                                                   ((4U 
                                                     == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                     ? 7U
                                                     : 
                                                    ((5U 
                                                      == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == (IData)(this->__PVT__compressed_FIFO_reg_counter))
                                                       ? 7U
                                                       : 
                                                      ((IData)(this->__PVT__compressed_FIFO_r_req)
                                                        ? 1U
                                                        : 7U))))))));
                    }
                    if (this->__PVT__r_end_req) {
                        this->__PVT__r_state_next = 2U;
                    }
                } else {
                    if ((2U == (IData)(this->__PVT__r_state))) {
                        this->__PVT__r_state_next = 0U;
                    }
                }
            }
        }
    }
    this->__PVT__r_8 = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U != (IData)(this->__PVT__r_state))) {
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
    this->__PVT__r_8_valid = ((IData)(this->__PVT__compressed_FIFO_r_req) 
                              & (7U == (IData)(this->__PVT__r_state)));
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
    this->__PVT__w_8_valid = ((((5U == (IData)(this->__PVT__decompress_state)) 
                                | (0xaU == (IData)(this->__PVT__decompress_state))) 
                               | (9U == (IData)(this->__PVT__decompress_state))) 
                              | (((4U == (IData)(this->__PVT__decompress_state)) 
                                  | (3U == (IData)(this->__PVT__decompress_state))) 
                                 & (IData)(this->__PVT__r_8_valid)));
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
    this->__PVT__decompressed_fifo_w_ena = (((((1U 
                                                == (IData)(this->__PVT__w_state)) 
                                               & (7U 
                                                  == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                                              & (IData)(this->__PVT__w_8_valid)) 
                                             | (8U 
                                                == (IData)(this->__PVT__w_state))) 
                                            | (0xbU 
                                               == (IData)(this->__PVT__w_state)));
    this->__PVT__fifo_rear_128_inc_ena = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->__PVT__fifo_rear_128_inc_ena = 1U;
        }
    }
    this->BRAM11_en_a = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_en_a = 1U;
        }
    }
    this->BRAM11_we_a = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_we_a = 1U;
        }
    }
    this->BRAM11_addr_a = 0U;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_addr_a = (0x1ffU & ((IData)(0x180U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_rear_128))));
        }
    }
    this->BRAM11_din_a = 0ULL;
    if ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((3U == (IData)(vlTOPp->PPU_TOP__DOT__Clk_Counter)) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_128))));
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
                } else {
                    if ((2U == (IData)(this->__PVT__w_state))) {
                        this->__PVT__w_state_next = 0U;
                    }
                }
            }
        }
    }
    this->__PVT__w_8_ready = ((((1U == (IData)(this->__PVT__w_state)) 
                                & (IData)(this->__PVT__w_8_valid)) 
                               & ((7U > (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                                  | ((7U == (IData)(this->__PVT__decompressed_FIFO_reg_counter)) 
                                     & (IData)(this->__PVT__decompressed_fifo_w_end)))) 
                              | ((8U == (IData)(this->__PVT__w_state)) 
                                 & (IData)(this->__PVT__decompressed_fifo_w_end)));
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
