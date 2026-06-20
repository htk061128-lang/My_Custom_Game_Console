// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPPU_TOP.h for the primary calling header

#include "VPPU_TOP_Pixel_Reader.h"
#include "VPPU_TOP__Syms.h"

//==========

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_settle__TOP__PPU_TOP__DOT__u_bg1__11(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_settle__TOP__PPU_TOP__DOT__u_bg1__11\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__RGB_reg_w_ena = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            if (vlTOPp->PPU_TOP__DOT__Req_end
                                [0U]) {
                                this->__PVT__RGB_reg_w_ena = 1U;
                            }
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    if (vlTOPp->PPU_TOP__DOT__Req_end
                                        [0U]) {
                                        this->__PVT__RGB_reg_w_ena = 1U;
                                    }
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            if (vlTOPp->PPU_TOP__DOT__Req_end
                                                [0U]) {
                                                this->__PVT__RGB_reg_w_ena = 1U;
                                            }
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    if (
                                                        vlTOPp->PPU_TOP__DOT__Req_end
                                                        [0U]) {
                                                        this->__PVT__RGB_reg_w_ena = 1U;
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
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                if (vlTOPp->PPU_TOP__DOT__Req_end
                                    [0U]) {
                                    this->__PVT__RGB_reg_w_ena = 1U;
                                }
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        if (vlTOPp->PPU_TOP__DOT__Req_end
                                            [0U]) {
                                            this->__PVT__RGB_reg_w_ena = 1U;
                                        }
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                if (
                                                    vlTOPp->PPU_TOP__DOT__Req_end
                                                    [0U]) {
                                                    this->__PVT__RGB_reg_w_ena = 1U;
                                                }
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        if (
                                                            vlTOPp->PPU_TOP__DOT__Req_end
                                                            [0U]) {
                                                            this->__PVT__RGB_reg_w_ena = 1U;
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
    }
    this->__PVT__rgb_r_state_counter_next = this->__PVT__rgb_r_state_counter;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    this->__PVT__rgb_r_state_counter_next 
                        = ((0U == (IData)(this->__PVT__rgb_r_state_counter))
                            ? ((1U & (IData)(this->__PVT__valid_pixel_check))
                                ? (vlTOPp->PPU_TOP__DOT__Req_end
                                   [0U] ? 1U : 0U) : 
                               ((2U & (IData)(this->__PVT__valid_pixel_check))
                                 ? 2U : ((4U & (IData)(this->__PVT__valid_pixel_check))
                                          ? 4U : ((8U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 6U
                                                   : 8U))))
                            : ((1U == (IData)(this->__PVT__rgb_r_state_counter))
                                ? ((IData)(this->__PVT__RGB_reg_ready)
                                    ? 2U : 1U) : ((2U 
                                                   == (IData)(this->__PVT__rgb_r_state_counter))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(this->__PVT__valid_pixel_check))
                                                    ? 
                                                   (vlTOPp->PPU_TOP__DOT__Req_end
                                                    [0U]
                                                     ? 3U
                                                     : 2U)
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((IData)(this->__PVT__RGB_reg_ready)
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((4U 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(this->__PVT__valid_pixel_check))
                                                      ? 
                                                     (vlTOPp->PPU_TOP__DOT__Req_end
                                                      [0U]
                                                       ? 5U
                                                       : 4U)
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == (IData)(this->__PVT__rgb_r_state_counter))
                                                      ? 
                                                     ((IData)(this->__PVT__RGB_reg_ready)
                                                       ? 6U
                                                       : 5U)
                                                      : 
                                                     ((6U 
                                                       == (IData)(this->__PVT__rgb_r_state_counter))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(this->__PVT__valid_pixel_check))
                                                        ? 
                                                       (vlTOPp->PPU_TOP__DOT__Req_end
                                                        [0U]
                                                         ? 7U
                                                         : 6U)
                                                        : 0U)
                                                       : 
                                                      ((IData)(this->__PVT__RGB_reg_ready)
                                                        ? 8U
                                                        : 7U))))))));
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__rgb_r_state_counter_next 
                                    = (vlTOPp->PPU_TOP__DOT__Req_end
                                       [0U] ? 9U : 8U);
                            } else {
                                if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->__PVT__rgb_r_state_counter_next = 0xaU;
                                } else {
                                    if ((0x40U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->__PVT__rgb_r_state_counter_next = 0xcU;
                                    } else {
                                        if ((0x80U 
                                             & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->__PVT__rgb_r_state_counter_next = 0xeU;
                                        }
                                    }
                                }
                            }
                        } else {
                            this->__PVT__rgb_r_state_counter_next 
                                = ((9U == (IData)(this->__PVT__rgb_r_state_counter))
                                    ? ((IData)(this->__PVT__RGB_reg_ready)
                                        ? 0xaU : 9U)
                                    : ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))
                                        ? ((0x20U & (IData)(this->__PVT__valid_pixel_check))
                                            ? (vlTOPp->PPU_TOP__DOT__Req_end
                                               [0U]
                                                ? 0xbU
                                                : 0xaU)
                                            : 0U) : 
                                       ((0xbU == (IData)(this->__PVT__rgb_r_state_counter))
                                         ? ((IData)(this->__PVT__RGB_reg_ready)
                                             ? 0xcU
                                             : 0xbU)
                                         : ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))
                                             ? ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))
                                                 ? 
                                                (vlTOPp->PPU_TOP__DOT__Req_end
                                                 [0U]
                                                  ? 0xdU
                                                  : 0xcU)
                                                 : 0U)
                                             : ((0xdU 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))
                                                 ? 
                                                ((IData)(this->__PVT__RGB_reg_ready)
                                                  ? 0xeU
                                                  : 0xdU)
                                                 : 
                                                ((0xeU 
                                                  == (IData)(this->__PVT__rgb_r_state_counter))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 
                                                  (vlTOPp->PPU_TOP__DOT__Req_end
                                                   [0U]
                                                    ? 0xfU
                                                    : 0xeU)
                                                   : 0U)
                                                  : 
                                                 ((IData)(this->__PVT__RGB_reg_ready)
                                                   ? 0U
                                                   : 0xfU)))))));
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_sequent__TOP__PPU_TOP__DOT__u_bg1__21(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_sequent__TOP__PPU_TOP__DOT__u_bg1__21\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__personal_counter_y = this->__PVT__personal_counter_y;
    this->__Vdly__personal_counter_x = this->__PVT__personal_counter_x;
    this->__Vdly__main_state = this->__PVT__main_state;
    this->__Vdly__main_state_counter = this->__PVT__main_state_counter;
    this->__Vdly__rgb_r_state = this->__PVT__rgb_r_state;
    this->__Vdly__read_pixel_y = this->__PVT__read_pixel_y;
    this->__Vdly__read_pixel_x = this->__PVT__read_pixel_x;
    this->__Vdly__fifo_r_state_counter = this->__PVT__fifo_r_state_counter;
    this->__Vdly__fifo_r_state = this->__PVT__fifo_r_state;
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[0U]))) {
            this->__PVT__RGB_reg_trans = 0U;
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[0U])) {
                this->__PVT__RGB_reg_trans = 1U;
            }
        }
    } else {
        this->__PVT__RGB_reg_trans = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[0U]))) {
            this->__PVT__RGB_reg = vlTOPp->PPU_TOP__DOT__Req_RGB
                [0U];
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[0U])) {
                this->__PVT__RGB_reg = 0U;
            }
        }
    } else {
        this->__PVT__RGB_reg = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[0U]))) {
            this->__PVT__RGB_reg_valid = 1U;
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[0U])) {
                this->__PVT__RGB_reg_valid = 1U;
            }
        }
        if (this->__PVT__RGB_reg_ready) {
            this->__PVT__RGB_reg_valid = 0U;
        }
    } else {
        this->__PVT__RGB_reg_valid = 0U;
    }
    if (vlTOPp->resetn) {
        this->__Vdly__main_state_counter = this->__PVT__main_state_counter_next;
        this->__Vdly__main_state = this->__PVT__main_state_next;
        if ((0U == (IData)(this->__PVT__main_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Background1_z)))) {
                this->__Vdly__main_state_counter = 0U;
                this->__Vdly__personal_counter_x = 0U;
                this->__Vdly__personal_counter_y = 0U;
                this->__Vdly__main_state = 1U;
            } else {
                this->__Vdly__main_state = 0U;
            }
        } else {
            if ((1U == (IData)(this->__PVT__main_state))) {
                if ((0U == (IData)(this->__PVT__main_state_counter))) {
                    if (((IData)(this->Pixel_valid) 
                         & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                         [1U])) {
                        if (((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                             & (0xefU == (IData)(this->__PVT__personal_counter_y)))) {
                            this->__Vdly__main_state = 0U;
                            this->__Vdly__personal_counter_x = 0U;
                            this->__Vdly__personal_counter_y = 0U;
                        } else {
                            if ((0x13fU == (IData)(this->__PVT__personal_counter_x))) {
                                this->__Vdly__personal_counter_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_y)));
                                this->__Vdly__personal_counter_x = 0U;
                            } else {
                                this->__Vdly__personal_counter_x 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_x)));
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(this->__PVT__main_state))) {
                    if (((IData)(this->Pixel_valid) 
                         & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                         [1U])) {
                        if (((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                             & (0xefU == (IData)(this->__PVT__personal_counter_y)))) {
                            this->__Vdly__main_state = 0U;
                            this->__Vdly__personal_counter_x = 0U;
                            this->__Vdly__personal_counter_y = 0U;
                        } else {
                            if ((0x13fU == (IData)(this->__PVT__personal_counter_x))) {
                                this->__Vdly__personal_counter_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_y)));
                                this->__Vdly__personal_counter_x = 0U;
                            } else {
                                this->__Vdly__personal_counter_x 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_x)));
                            }
                        }
                    }
                }
            }
        }
    } else {
        this->__Vdly__main_state = 0U;
        this->__Vdly__main_state_counter = 0U;
        this->__Vdly__personal_counter_x = 0U;
        this->__Vdly__personal_counter_y = 0U;
    }
    if (vlTOPp->resetn) {
        this->__Vdly__fifo_r_state = this->__PVT__fifo_r_state_next;
        this->__Vdly__fifo_r_state_counter = this->__PVT__fifo_r_state_counter_next;
        this->__PVT__rgb_r_state_counter = this->__PVT__rgb_r_state_counter_next;
        this->__Vdly__rgb_r_state = this->__PVT__rgb_r_state_next;
        if ((0U == (IData)(this->__PVT__fifo_r_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Background1_z)))) {
                this->__Vdly__fifo_r_state = 1U;
                this->__Vdly__read_pixel_x = 0x3fU;
                this->__Vdly__read_pixel_y = 0x1ffU;
                this->__Vdly__fifo_r_state_counter = 0U;
            } else {
                this->__Vdly__fifo_r_state = 0U;
            }
        } else {
            if ((1U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U != (IData)(this->__PVT__fifo_r_state_counter))) {
                    if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((0x31U == (IData)(this->__PVT__read_pixel_x))) {
                            this->__Vdly__read_pixel_y 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(this->__PVT__read_pixel_y)));
                            this->__Vdly__read_pixel_x = 0U;
                        } else {
                            if (((0x3fU == (IData)(this->__PVT__read_pixel_x)) 
                                 & (0x1ffU == (IData)(this->__PVT__read_pixel_y)))) {
                                this->__Vdly__read_pixel_x = 0U;
                                this->__Vdly__read_pixel_y = 0U;
                            } else {
                                this->__Vdly__read_pixel_x 
                                    = (0x3fU & ((IData)(1U) 
                                                + (IData)(this->__PVT__read_pixel_x)));
                            }
                        }
                        this->__PVT__decomp_pixel_reg 
                            = vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Decompressed_FIFO_data;
                    }
                }
            } else {
                if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                    if ((0U != (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            this->__PVT__decomp_pixel_reg 
                                = vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Decompressed_FIFO_data;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(this->__PVT__rgb_r_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Background1_z)))) {
                this->__Vdly__rgb_r_state = 3U;
                this->__PVT__rgb_r_state_counter = 0U;
            } else {
                this->__Vdly__rgb_r_state = 0U;
            }
        } else {
            if ((3U == (IData)(this->__PVT__rgb_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state))) {
                    this->__Vdly__rgb_r_state = 0U;
                    this->__PVT__rgb_r_state_counter = 0U;
                } else {
                    if (this->__PVT__rgb_convert_req) {
                        this->__Vdly__rgb_r_state = 4U;
                        this->__PVT__rgb_r_state_counter = 0U;
                    } else {
                        this->__Vdly__rgb_r_state = 3U;
                    }
                }
            }
        }
    } else {
        this->__Vdly__rgb_r_state = 0U;
        this->__Vdly__fifo_r_state_counter = 0U;
        this->__PVT__decomp_pixel_reg = 0ULL;
        this->__Vdly__fifo_r_state = 0U;
        this->__PVT__rgb_r_state_counter = 0U;
        this->__Vdly__read_pixel_x = 0x3fU;
        this->__Vdly__read_pixel_y = 0x1ffU;
    }
    this->__PVT__personal_counter_x = this->__Vdly__personal_counter_x;
    this->__PVT__personal_counter_y = this->__Vdly__personal_counter_y;
    this->__PVT__main_state_counter = this->__Vdly__main_state_counter;
    this->__PVT__main_state = this->__Vdly__main_state;
    this->__PVT__rgb_r_state = this->__Vdly__rgb_r_state;
    this->__PVT__read_pixel_x = this->__Vdly__read_pixel_x;
    this->__PVT__read_pixel_y = this->__Vdly__read_pixel_y;
    this->__PVT__fifo_r_state = this->__Vdly__fifo_r_state;
    this->__PVT__fifo_r_state_counter = this->__Vdly__fifo_r_state_counter;
    this->__PVT__main_state_counter_next = this->__PVT__main_state_counter;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                this->__PVT__main_state_counter_next = 0U;
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                this->__PVT__main_state_counter_next = 0U;
            }
        }
    }
    this->Pixel_is_trans = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->Pixel_is_trans = this->__PVT__RGB_reg_trans;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                this->Pixel_is_trans = 1U;
            }
        }
    }
    this->Pixel_RGB = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->Pixel_RGB = ((IData)(this->__PVT__RGB_reg_trans)
                                        ? 0U : this->__PVT__RGB_reg);
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                this->Pixel_RGB = 0U;
            }
        }
    }
    this->Decomp_fifo_dequeue = 0U;
    if ((0U != (IData)(this->__PVT__fifo_r_state))) {
        if ((1U == (IData)(this->__PVT__fifo_r_state))) {
            if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Decompressed_FIFO_r_master) 
                     & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_empty_256)))) {
                    this->Decomp_fifo_dequeue = 1U;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Decompressed_FIFO_r_master) 
                         & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_empty_256)))) {
                        this->Decomp_fifo_dequeue = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_combo__TOP__PPU_TOP__DOT__u_bg1__31(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_combo__TOP__PPU_TOP__DOT__u_bg1__31\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__RGB_reg_ready = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->__PVT__RGB_reg_ready = vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                        [1U];
                }
            }
        }
    }
    this->__PVT__main_state_next = this->__PVT__main_state;
    this->Pixel_valid = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->__PVT__main_state_next = 
                        (((((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                            & (0xefU == (IData)(this->__PVT__personal_counter_y))) 
                           & (IData)(this->Pixel_valid)) 
                          & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                          [1U]) ? 0U : 1U);
                    this->Pixel_valid = 1U;
                } else {
                    this->__PVT__main_state_next = 1U;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                this->__PVT__main_state_next = ((((
                                                   (0x13fU 
                                                    == (IData)(this->__PVT__personal_counter_x)) 
                                                   & (0xefU 
                                                      == (IData)(this->__PVT__personal_counter_y))) 
                                                  & (IData)(this->Pixel_valid)) 
                                                 & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                                                 [1U])
                                                 ? 0U
                                                 : 2U);
                this->Pixel_valid = 1U;
            }
        }
    }
    this->__PVT__fifo_r_state_counter_next = this->__PVT__fifo_r_state_counter;
    this->__PVT__fifo_r_state_next = this->__PVT__fifo_r_state;
    this->__PVT__valid_pixel_check = 0U;
    this->__PVT__rgb_convert_req = 0U;
    if ((((IData)(this->__PVT__read_pixel_y) >= (0x1ffU 
                                                 & (IData)(vlTOPp->Background1_SCY))) 
         & ((IData)(this->__PVT__read_pixel_y) <= ((IData)(0xefU) 
                                                   + 
                                                   (0x1ffU 
                                                    & (IData)(vlTOPp->Background1_SCY)))))) {
        this->__PVT__valid_pixel_check = ((0xfeU & (IData)(this->__PVT__valid_pixel_check)) 
                                          | ((((IData)(this->__PVT__read_pixel_x) 
                                               << 3U) 
                                              >= (0x1ffU 
                                                  & (IData)(vlTOPp->Background1_SCX))) 
                                             & (((IData)(this->__PVT__read_pixel_x) 
                                                 << 3U) 
                                                <= 
                                                ((IData)(0x13fU) 
                                                 + 
                                                 (0x1ffU 
                                                  & (IData)(vlTOPp->Background1_SCX))))));
        this->__PVT__valid_pixel_check = ((0xfdU & (IData)(this->__PVT__valid_pixel_check)) 
                                          | ((((1U 
                                                | ((IData)(this->__PVT__read_pixel_x) 
                                                   << 3U)) 
                                               >= (0x1ffU 
                                                   & (IData)(vlTOPp->Background1_SCX))) 
                                              & ((1U 
                                                  | ((IData)(this->__PVT__read_pixel_x) 
                                                     << 3U)) 
                                                 <= 
                                                 ((IData)(0x13fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->Background1_SCX))))) 
                                             << 1U));
        this->__PVT__valid_pixel_check = ((0xfbU & (IData)(this->__PVT__valid_pixel_check)) 
                                          | ((((2U 
                                                | ((IData)(this->__PVT__read_pixel_x) 
                                                   << 3U)) 
                                               >= (0x1ffU 
                                                   & (IData)(vlTOPp->Background1_SCX))) 
                                              & ((2U 
                                                  | ((IData)(this->__PVT__read_pixel_x) 
                                                     << 3U)) 
                                                 <= 
                                                 ((IData)(0x13fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->Background1_SCX))))) 
                                             << 2U));
        this->__PVT__valid_pixel_check = ((0xf7U & (IData)(this->__PVT__valid_pixel_check)) 
                                          | ((((3U 
                                                | ((IData)(this->__PVT__read_pixel_x) 
                                                   << 3U)) 
                                               >= (0x1ffU 
                                                   & (IData)(vlTOPp->Background1_SCX))) 
                                              & ((3U 
                                                  | ((IData)(this->__PVT__read_pixel_x) 
                                                     << 3U)) 
                                                 <= 
                                                 ((IData)(0x13fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->Background1_SCX))))) 
                                             << 3U));
        this->__PVT__valid_pixel_check = ((0xefU & (IData)(this->__PVT__valid_pixel_check)) 
                                          | ((((4U 
                                                | ((IData)(this->__PVT__read_pixel_x) 
                                                   << 3U)) 
                                               >= (0x1ffU 
                                                   & (IData)(vlTOPp->Background1_SCX))) 
                                              & ((4U 
                                                  | ((IData)(this->__PVT__read_pixel_x) 
                                                     << 3U)) 
                                                 <= 
                                                 ((IData)(0x13fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->Background1_SCX))))) 
                                             << 4U));
        this->__PVT__valid_pixel_check = ((0xdfU & (IData)(this->__PVT__valid_pixel_check)) 
                                          | ((((5U 
                                                | ((IData)(this->__PVT__read_pixel_x) 
                                                   << 3U)) 
                                               >= (0x1ffU 
                                                   & (IData)(vlTOPp->Background1_SCX))) 
                                              & ((5U 
                                                  | ((IData)(this->__PVT__read_pixel_x) 
                                                     << 3U)) 
                                                 <= 
                                                 ((IData)(0x13fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->Background1_SCX))))) 
                                             << 5U));
        this->__PVT__valid_pixel_check = ((0xbfU & (IData)(this->__PVT__valid_pixel_check)) 
                                          | ((((6U 
                                                | ((IData)(this->__PVT__read_pixel_x) 
                                                   << 3U)) 
                                               >= (0x1ffU 
                                                   & (IData)(vlTOPp->Background1_SCX))) 
                                              & ((6U 
                                                  | ((IData)(this->__PVT__read_pixel_x) 
                                                     << 3U)) 
                                                 <= 
                                                 ((IData)(0x13fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->Background1_SCX))))) 
                                             << 6U));
        this->__PVT__valid_pixel_check = ((0x7fU & (IData)(this->__PVT__valid_pixel_check)) 
                                          | ((((7U 
                                                | ((IData)(this->__PVT__read_pixel_x) 
                                                   << 3U)) 
                                               >= (0x1ffU 
                                                   & (IData)(vlTOPp->Background1_SCX))) 
                                              & ((7U 
                                                  | ((IData)(this->__PVT__read_pixel_x) 
                                                     << 3U)) 
                                                 <= 
                                                 ((IData)(0x13fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->Background1_SCX))))) 
                                             << 7U));
    } else {
        this->__PVT__valid_pixel_check = 0U;
    }
    if ((0U == (IData)(this->__PVT__fifo_r_state))) {
        this->__PVT__fifo_r_state_counter_next = 0U;
    } else {
        if ((1U == (IData)(this->__PVT__fifo_r_state))) {
            if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Decompressed_FIFO_r_master) 
                     & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_empty_256)))) {
                    this->__PVT__fifo_r_state_counter_next = 1U;
                    this->__PVT__fifo_r_state_next = 1U;
                } else {
                    this->__PVT__fifo_r_state_counter_next = 0U;
                    this->__PVT__fifo_r_state_next = 1U;
                }
            } else {
                if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    this->__PVT__fifo_r_state_counter_next = 2U;
                    this->__PVT__fifo_r_state_next = 1U;
                } else {
                    if ((2U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((0U == (IData)(this->__PVT__valid_pixel_check))) {
                            this->__PVT__fifo_r_state_counter_next = 0U;
                            this->__PVT__fifo_r_state_next = 1U;
                        } else {
                            this->__PVT__rgb_convert_req = 1U;
                            this->__PVT__fifo_r_state_counter_next = 3U;
                            this->__PVT__fifo_r_state_next = 1U;
                        }
                    } else {
                        if ((3U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            this->__PVT__rgb_convert_req = 1U;
                            if (this->__PVT__rgb_convert_end) {
                                if (((0x31U == (IData)(this->__PVT__read_pixel_x)) 
                                     & (0x13fU == (IData)(this->__PVT__read_pixel_y)))) {
                                    this->__PVT__fifo_r_state_counter_next = 0U;
                                    this->__PVT__fifo_r_state_next = 0U;
                                } else {
                                    this->__PVT__fifo_r_state_counter_next = 0U;
                                    this->__PVT__fifo_r_state_next = 1U;
                                }
                            } else {
                                this->__PVT__fifo_r_state_counter_next = 3U;
                                this->__PVT__fifo_r_state_next = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Decompressed_FIFO_r_master) 
                         & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__fifo_empty_256)))) {
                        this->__PVT__fifo_r_state_counter_next = 1U;
                        this->__PVT__fifo_r_state_next = 2U;
                    } else {
                        this->__PVT__fifo_r_state_counter_next = 0U;
                        this->__PVT__fifo_r_state_next = 2U;
                    }
                } else {
                    if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        this->__PVT__fifo_r_state_counter_next = 2U;
                        this->__PVT__fifo_r_state_next = 2U;
                    } else {
                        if ((2U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            if ((0U == (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__fifo_r_state_counter_next = 0U;
                                this->__PVT__fifo_r_state_next = 2U;
                            } else {
                                this->__PVT__rgb_convert_req = 1U;
                                this->__PVT__fifo_r_state_counter_next = 3U;
                                this->__PVT__fifo_r_state_next = 2U;
                            }
                        } else {
                            if ((3U == (IData)(this->__PVT__fifo_r_state_counter))) {
                                this->__PVT__rgb_convert_req = 1U;
                                if (this->__PVT__rgb_convert_end) {
                                    this->__PVT__fifo_r_state_counter_next = 0U;
                                    this->__PVT__fifo_r_state_next = 2U;
                                } else {
                                    this->__PVT__fifo_r_state_counter_next = 3U;
                                    this->__PVT__fifo_r_state_next = 2U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    this->__PVT__rgb_convert_end = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U != (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((1U & (~ ((IData)(this->__PVT__valid_pixel_check) 
                                              >> 1U)))) {
                                    this->__PVT__rgb_convert_end = 1U;
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((1U & (~ 
                                                   ((IData)(this->__PVT__valid_pixel_check) 
                                                    >> 2U)))) {
                                            this->__PVT__rgb_convert_end = 1U;
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(this->__PVT__valid_pixel_check) 
                                                         >> 3U)))) {
                                                    this->__PVT__rgb_convert_end = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((1U & (~ ((IData)(this->__PVT__valid_pixel_check) 
                                                  >> 5U)))) {
                                        this->__PVT__rgb_convert_end = 1U;
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(this->__PVT__valid_pixel_check) 
                                                     >> 6U)))) {
                                                this->__PVT__rgb_convert_end = 1U;
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(this->__PVT__valid_pixel_check) 
                                                             >> 7U)))) {
                                                        this->__PVT__rgb_convert_end = 1U;
                                                    }
                                                } else {
                                                    if (this->__PVT__RGB_reg_ready) {
                                                        this->__PVT__rgb_convert_end = 1U;
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
    this->__PVT__rgb_r_state_next = this->__PVT__rgb_r_state;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    this->__PVT__rgb_r_state_next = 
                        ((0U == (IData)(this->__PVT__rgb_r_state_counter))
                          ? 4U : ((1U == (IData)(this->__PVT__rgb_r_state_counter))
                                   ? 4U : ((2U == (IData)(this->__PVT__rgb_r_state_counter))
                                            ? ((2U 
                                                & (IData)(this->__PVT__valid_pixel_check))
                                                ? 4U
                                                : 3U)
                                            : ((3U 
                                                == (IData)(this->__PVT__rgb_r_state_counter))
                                                ? 4U
                                                : (
                                                   (4U 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(this->__PVT__valid_pixel_check))
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))
                                                     ? 4U
                                                     : 
                                                    ((6U 
                                                      == (IData)(this->__PVT__rgb_r_state_counter))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(this->__PVT__valid_pixel_check))
                                                       ? 4U
                                                       : 3U)
                                                      : 4U)))))));
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__rgb_r_state_next = 4U;
                            } else {
                                if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->__PVT__rgb_r_state_next = 4U;
                                } else {
                                    if ((0x40U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->__PVT__rgb_r_state_next = 4U;
                                    } else {
                                        if ((0x80U 
                                             & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->__PVT__rgb_r_state_next = 4U;
                                        }
                                    }
                                }
                            }
                        } else {
                            this->__PVT__rgb_r_state_next 
                                = ((9U == (IData)(this->__PVT__rgb_r_state_counter))
                                    ? 4U : ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))
                                             ? ((0x20U 
                                                 & (IData)(this->__PVT__valid_pixel_check))
                                                 ? 4U
                                                 : 3U)
                                             : ((0xbU 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))
                                                 ? 4U
                                                 : 
                                                ((0xcU 
                                                  == (IData)(this->__PVT__rgb_r_state_counter))
                                                  ? 
                                                 ((0x40U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 4U
                                                   : 3U)
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(this->__PVT__rgb_r_state_counter))
                                                   ? 4U
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(this->__PVT__valid_pixel_check))
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((IData)(this->__PVT__RGB_reg_ready)
                                                     ? 3U
                                                     : 4U)))))));
                        }
                    }
                }
            }
        }
    }
    this->Lookup_ena = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            this->Lookup_ena = 1U;
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->Lookup_ena = 1U;
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->Lookup_ena = 1U;
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    this->Lookup_ena = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->Lookup_ena = 1U;
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->Lookup_ena = 1U;
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                this->Lookup_ena = 1U;
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        this->Lookup_ena = 1U;
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
    this->Lookup_pixel = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            this->Lookup_pixel = (0xffU 
                                                  & (IData)(this->__PVT__decomp_pixel_reg));
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->Lookup_pixel 
                                        = (0xffU & (IData)(
                                                           (this->__PVT__decomp_pixel_reg 
                                                            >> 8U)));
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->Lookup_pixel 
                                                = (0xffU 
                                                   & (IData)(
                                                             (this->__PVT__decomp_pixel_reg 
                                                              >> 0x10U)));
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    this->Lookup_pixel 
                                                        = 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (this->__PVT__decomp_pixel_reg 
                                                                    >> 0x18U)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->Lookup_pixel 
                                    = (0xffU & (IData)(
                                                       (this->__PVT__decomp_pixel_reg 
                                                        >> 0x20U)));
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->Lookup_pixel 
                                            = (0xffU 
                                               & (IData)(
                                                         (this->__PVT__decomp_pixel_reg 
                                                          >> 0x28U)));
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                this->Lookup_pixel 
                                                    = 
                                                    (0xffU 
                                                     & (IData)(
                                                               (this->__PVT__decomp_pixel_reg 
                                                                >> 0x30U)));
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        this->Lookup_pixel 
                                                            = 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (this->__PVT__decomp_pixel_reg 
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
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_settle__TOP__PPU_TOP__DOT__u_bg2__12(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_settle__TOP__PPU_TOP__DOT__u_bg2__12\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__RGB_reg_w_ena = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            if (vlTOPp->PPU_TOP__DOT__Req_end
                                [1U]) {
                                this->__PVT__RGB_reg_w_ena = 1U;
                            }
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    if (vlTOPp->PPU_TOP__DOT__Req_end
                                        [1U]) {
                                        this->__PVT__RGB_reg_w_ena = 1U;
                                    }
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            if (vlTOPp->PPU_TOP__DOT__Req_end
                                                [1U]) {
                                                this->__PVT__RGB_reg_w_ena = 1U;
                                            }
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    if (
                                                        vlTOPp->PPU_TOP__DOT__Req_end
                                                        [1U]) {
                                                        this->__PVT__RGB_reg_w_ena = 1U;
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
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                if (vlTOPp->PPU_TOP__DOT__Req_end
                                    [1U]) {
                                    this->__PVT__RGB_reg_w_ena = 1U;
                                }
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        if (vlTOPp->PPU_TOP__DOT__Req_end
                                            [1U]) {
                                            this->__PVT__RGB_reg_w_ena = 1U;
                                        }
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                if (
                                                    vlTOPp->PPU_TOP__DOT__Req_end
                                                    [1U]) {
                                                    this->__PVT__RGB_reg_w_ena = 1U;
                                                }
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        if (
                                                            vlTOPp->PPU_TOP__DOT__Req_end
                                                            [1U]) {
                                                            this->__PVT__RGB_reg_w_ena = 1U;
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
    }
    this->__PVT__rgb_r_state_counter_next = this->__PVT__rgb_r_state_counter;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    this->__PVT__rgb_r_state_counter_next 
                        = ((0U == (IData)(this->__PVT__rgb_r_state_counter))
                            ? ((1U & (IData)(this->__PVT__valid_pixel_check))
                                ? (vlTOPp->PPU_TOP__DOT__Req_end
                                   [1U] ? 1U : 0U) : 
                               ((2U & (IData)(this->__PVT__valid_pixel_check))
                                 ? 2U : ((4U & (IData)(this->__PVT__valid_pixel_check))
                                          ? 4U : ((8U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 6U
                                                   : 8U))))
                            : ((1U == (IData)(this->__PVT__rgb_r_state_counter))
                                ? ((IData)(this->__PVT__RGB_reg_ready)
                                    ? 2U : 1U) : ((2U 
                                                   == (IData)(this->__PVT__rgb_r_state_counter))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(this->__PVT__valid_pixel_check))
                                                    ? 
                                                   (vlTOPp->PPU_TOP__DOT__Req_end
                                                    [1U]
                                                     ? 3U
                                                     : 2U)
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((IData)(this->__PVT__RGB_reg_ready)
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((4U 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(this->__PVT__valid_pixel_check))
                                                      ? 
                                                     (vlTOPp->PPU_TOP__DOT__Req_end
                                                      [1U]
                                                       ? 5U
                                                       : 4U)
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == (IData)(this->__PVT__rgb_r_state_counter))
                                                      ? 
                                                     ((IData)(this->__PVT__RGB_reg_ready)
                                                       ? 6U
                                                       : 5U)
                                                      : 
                                                     ((6U 
                                                       == (IData)(this->__PVT__rgb_r_state_counter))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(this->__PVT__valid_pixel_check))
                                                        ? 
                                                       (vlTOPp->PPU_TOP__DOT__Req_end
                                                        [1U]
                                                         ? 7U
                                                         : 6U)
                                                        : 0U)
                                                       : 
                                                      ((IData)(this->__PVT__RGB_reg_ready)
                                                        ? 8U
                                                        : 7U))))))));
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__rgb_r_state_counter_next 
                                    = (vlTOPp->PPU_TOP__DOT__Req_end
                                       [1U] ? 9U : 8U);
                            } else {
                                if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->__PVT__rgb_r_state_counter_next = 0xaU;
                                } else {
                                    if ((0x40U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->__PVT__rgb_r_state_counter_next = 0xcU;
                                    } else {
                                        if ((0x80U 
                                             & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->__PVT__rgb_r_state_counter_next = 0xeU;
                                        }
                                    }
                                }
                            }
                        } else {
                            this->__PVT__rgb_r_state_counter_next 
                                = ((9U == (IData)(this->__PVT__rgb_r_state_counter))
                                    ? ((IData)(this->__PVT__RGB_reg_ready)
                                        ? 0xaU : 9U)
                                    : ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))
                                        ? ((0x20U & (IData)(this->__PVT__valid_pixel_check))
                                            ? (vlTOPp->PPU_TOP__DOT__Req_end
                                               [1U]
                                                ? 0xbU
                                                : 0xaU)
                                            : 0U) : 
                                       ((0xbU == (IData)(this->__PVT__rgb_r_state_counter))
                                         ? ((IData)(this->__PVT__RGB_reg_ready)
                                             ? 0xcU
                                             : 0xbU)
                                         : ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))
                                             ? ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))
                                                 ? 
                                                (vlTOPp->PPU_TOP__DOT__Req_end
                                                 [1U]
                                                  ? 0xdU
                                                  : 0xcU)
                                                 : 0U)
                                             : ((0xdU 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))
                                                 ? 
                                                ((IData)(this->__PVT__RGB_reg_ready)
                                                  ? 0xeU
                                                  : 0xdU)
                                                 : 
                                                ((0xeU 
                                                  == (IData)(this->__PVT__rgb_r_state_counter))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 
                                                  (vlTOPp->PPU_TOP__DOT__Req_end
                                                   [1U]
                                                    ? 0xfU
                                                    : 0xeU)
                                                   : 0U)
                                                  : 
                                                 ((IData)(this->__PVT__RGB_reg_ready)
                                                   ? 0U
                                                   : 0xfU)))))));
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_sequent__TOP__PPU_TOP__DOT__u_bg2__22(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_sequent__TOP__PPU_TOP__DOT__u_bg2__22\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__personal_counter_y = this->__PVT__personal_counter_y;
    this->__Vdly__personal_counter_x = this->__PVT__personal_counter_x;
    this->__Vdly__main_state = this->__PVT__main_state;
    this->__Vdly__main_state_counter = this->__PVT__main_state_counter;
    this->__Vdly__rgb_r_state = this->__PVT__rgb_r_state;
    this->__Vdly__read_pixel_y = this->__PVT__read_pixel_y;
    this->__Vdly__read_pixel_x = this->__PVT__read_pixel_x;
    this->__Vdly__fifo_r_state_counter = this->__PVT__fifo_r_state_counter;
    this->__Vdly__fifo_r_state = this->__PVT__fifo_r_state;
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[1U]))) {
            this->__PVT__RGB_reg_trans = 0U;
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[1U])) {
                this->__PVT__RGB_reg_trans = 1U;
            }
        }
    } else {
        this->__PVT__RGB_reg_trans = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[1U]))) {
            this->__PVT__RGB_reg = vlTOPp->PPU_TOP__DOT__Req_RGB
                [1U];
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[1U])) {
                this->__PVT__RGB_reg = 0U;
            }
        }
    } else {
        this->__PVT__RGB_reg = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[1U]))) {
            this->__PVT__RGB_reg_valid = 1U;
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[1U])) {
                this->__PVT__RGB_reg_valid = 1U;
            }
        }
        if (this->__PVT__RGB_reg_ready) {
            this->__PVT__RGB_reg_valid = 0U;
        }
    } else {
        this->__PVT__RGB_reg_valid = 0U;
    }
    if (vlTOPp->resetn) {
        this->__Vdly__main_state_counter = this->__PVT__main_state_counter_next;
        this->__Vdly__main_state = this->__PVT__main_state_next;
        if ((0U == (IData)(this->__PVT__main_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Background2_z)))) {
                this->__Vdly__main_state_counter = 0U;
                this->__Vdly__personal_counter_x = 0U;
                this->__Vdly__personal_counter_y = 0U;
                this->__Vdly__main_state = 1U;
            } else {
                this->__Vdly__main_state = 0U;
            }
        } else {
            if ((1U == (IData)(this->__PVT__main_state))) {
                if ((0U == (IData)(this->__PVT__main_state_counter))) {
                    if (((IData)(this->Pixel_valid) 
                         & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                         [2U])) {
                        if (((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                             & (0xefU == (IData)(this->__PVT__personal_counter_y)))) {
                            this->__Vdly__main_state = 0U;
                            this->__Vdly__personal_counter_x = 0U;
                            this->__Vdly__personal_counter_y = 0U;
                        } else {
                            if ((0x13fU == (IData)(this->__PVT__personal_counter_x))) {
                                this->__Vdly__personal_counter_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_y)));
                                this->__Vdly__personal_counter_x = 0U;
                            } else {
                                this->__Vdly__personal_counter_x 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_x)));
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(this->__PVT__main_state))) {
                    if (((IData)(this->Pixel_valid) 
                         & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                         [2U])) {
                        if (((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                             & (0xefU == (IData)(this->__PVT__personal_counter_y)))) {
                            this->__Vdly__main_state = 0U;
                            this->__Vdly__personal_counter_x = 0U;
                            this->__Vdly__personal_counter_y = 0U;
                        } else {
                            if ((0x13fU == (IData)(this->__PVT__personal_counter_x))) {
                                this->__Vdly__personal_counter_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_y)));
                                this->__Vdly__personal_counter_x = 0U;
                            } else {
                                this->__Vdly__personal_counter_x 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_x)));
                            }
                        }
                    }
                }
            }
        }
    } else {
        this->__Vdly__main_state = 0U;
        this->__Vdly__main_state_counter = 0U;
        this->__Vdly__personal_counter_x = 0U;
        this->__Vdly__personal_counter_y = 0U;
    }
    if (vlTOPp->resetn) {
        this->__Vdly__fifo_r_state = this->__PVT__fifo_r_state_next;
        this->__Vdly__fifo_r_state_counter = this->__PVT__fifo_r_state_counter_next;
        this->__PVT__rgb_r_state_counter = this->__PVT__rgb_r_state_counter_next;
        this->__Vdly__rgb_r_state = this->__PVT__rgb_r_state_next;
        if ((0U == (IData)(this->__PVT__fifo_r_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Background2_z)))) {
                this->__Vdly__fifo_r_state = 1U;
                this->__Vdly__read_pixel_x = 0x3fU;
                this->__Vdly__read_pixel_y = 0x1ffU;
                this->__Vdly__fifo_r_state_counter = 0U;
            } else {
                this->__Vdly__fifo_r_state = 0U;
            }
        } else {
            if ((1U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U != (IData)(this->__PVT__fifo_r_state_counter))) {
                    if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((0x31U == (IData)(this->__PVT__read_pixel_x))) {
                            this->__Vdly__read_pixel_y 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(this->__PVT__read_pixel_y)));
                            this->__Vdly__read_pixel_x = 0U;
                        } else {
                            if (((0x3fU == (IData)(this->__PVT__read_pixel_x)) 
                                 & (0x1ffU == (IData)(this->__PVT__read_pixel_y)))) {
                                this->__Vdly__read_pixel_x = 0U;
                                this->__Vdly__read_pixel_y = 0U;
                            } else {
                                this->__Vdly__read_pixel_x 
                                    = (0x3fU & ((IData)(1U) 
                                                + (IData)(this->__PVT__read_pixel_x)));
                            }
                        }
                        this->__PVT__decomp_pixel_reg 
                            = vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Decompressed_FIFO_data;
                    }
                }
            } else {
                if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                    if ((0U != (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            this->__PVT__decomp_pixel_reg 
                                = vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Decompressed_FIFO_data;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(this->__PVT__rgb_r_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Background2_z)))) {
                this->__Vdly__rgb_r_state = 3U;
                this->__PVT__rgb_r_state_counter = 0U;
            } else {
                this->__Vdly__rgb_r_state = 0U;
            }
        } else {
            if ((3U == (IData)(this->__PVT__rgb_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state))) {
                    this->__Vdly__rgb_r_state = 0U;
                    this->__PVT__rgb_r_state_counter = 0U;
                } else {
                    if (this->__PVT__rgb_convert_req) {
                        this->__Vdly__rgb_r_state = 4U;
                        this->__PVT__rgb_r_state_counter = 0U;
                    } else {
                        this->__Vdly__rgb_r_state = 3U;
                    }
                }
            }
        }
    } else {
        this->__Vdly__rgb_r_state = 0U;
        this->__Vdly__fifo_r_state_counter = 0U;
        this->__PVT__decomp_pixel_reg = 0ULL;
        this->__Vdly__fifo_r_state = 0U;
        this->__PVT__rgb_r_state_counter = 0U;
        this->__Vdly__read_pixel_x = 0x3fU;
        this->__Vdly__read_pixel_y = 0x1ffU;
    }
    this->__PVT__personal_counter_x = this->__Vdly__personal_counter_x;
    this->__PVT__personal_counter_y = this->__Vdly__personal_counter_y;
    this->__PVT__main_state_counter = this->__Vdly__main_state_counter;
    this->__PVT__main_state = this->__Vdly__main_state;
    this->__PVT__rgb_r_state = this->__Vdly__rgb_r_state;
    this->__PVT__read_pixel_x = this->__Vdly__read_pixel_x;
    this->__PVT__read_pixel_y = this->__Vdly__read_pixel_y;
    this->__PVT__fifo_r_state = this->__Vdly__fifo_r_state;
    this->__PVT__fifo_r_state_counter = this->__Vdly__fifo_r_state_counter;
    this->__PVT__main_state_counter_next = this->__PVT__main_state_counter;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                this->__PVT__main_state_counter_next = 0U;
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                this->__PVT__main_state_counter_next = 0U;
            }
        }
    }
    this->Pixel_is_trans = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->Pixel_is_trans = this->__PVT__RGB_reg_trans;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                this->Pixel_is_trans = 1U;
            }
        }
    }
    this->Pixel_RGB = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->Pixel_RGB = ((IData)(this->__PVT__RGB_reg_trans)
                                        ? 0U : this->__PVT__RGB_reg);
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                this->Pixel_RGB = 0U;
            }
        }
    }
    this->Decomp_fifo_dequeue = 0U;
    if ((0U != (IData)(this->__PVT__fifo_r_state))) {
        if ((1U == (IData)(this->__PVT__fifo_r_state))) {
            if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Decompressed_FIFO_r_master) 
                     & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_empty_256)))) {
                    this->Decomp_fifo_dequeue = 1U;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Decompressed_FIFO_r_master) 
                         & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_empty_256)))) {
                        this->Decomp_fifo_dequeue = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_combo__TOP__PPU_TOP__DOT__u_bg2__32(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_combo__TOP__PPU_TOP__DOT__u_bg2__32\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__RGB_reg_ready = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->__PVT__RGB_reg_ready = vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                        [2U];
                }
            }
        }
    }
    this->__PVT__main_state_next = this->__PVT__main_state;
    this->Pixel_valid = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->__PVT__main_state_next = 
                        (((((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                            & (0xefU == (IData)(this->__PVT__personal_counter_y))) 
                           & (IData)(this->Pixel_valid)) 
                          & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                          [2U]) ? 0U : 1U);
                    this->Pixel_valid = 1U;
                } else {
                    this->__PVT__main_state_next = 1U;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                this->__PVT__main_state_next = ((((
                                                   (0x13fU 
                                                    == (IData)(this->__PVT__personal_counter_x)) 
                                                   & (0xefU 
                                                      == (IData)(this->__PVT__personal_counter_y))) 
                                                  & (IData)(this->Pixel_valid)) 
                                                 & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                                                 [2U])
                                                 ? 0U
                                                 : 2U);
                this->Pixel_valid = 1U;
            }
        }
    }
    this->__PVT__fifo_r_state_counter_next = this->__PVT__fifo_r_state_counter;
    this->__PVT__fifo_r_state_next = this->__PVT__fifo_r_state;
    this->__PVT__valid_pixel_check = 0U;
    this->__PVT__rgb_convert_req = 0U;
    if ((((IData)(this->__PVT__read_pixel_y) >= (0x1ffU 
                                                 & (IData)(vlTOPp->Background2_SCY))) 
         & ((IData)(this->__PVT__read_pixel_y) <= ((IData)(0xefU) 
                                                   + 
                                                   (0x1ffU 
                                                    & (IData)(vlTOPp->Background2_SCY)))))) {
        this->__PVT__valid_pixel_check = ((0xfeU & (IData)(this->__PVT__valid_pixel_check)) 
                                          | ((((IData)(this->__PVT__read_pixel_x) 
                                               << 3U) 
                                              >= (0x1ffU 
                                                  & (IData)(vlTOPp->Background2_SCX))) 
                                             & (((IData)(this->__PVT__read_pixel_x) 
                                                 << 3U) 
                                                <= 
                                                ((IData)(0x13fU) 
                                                 + 
                                                 (0x1ffU 
                                                  & (IData)(vlTOPp->Background2_SCX))))));
        this->__PVT__valid_pixel_check = ((0xfdU & (IData)(this->__PVT__valid_pixel_check)) 
                                          | ((((1U 
                                                | ((IData)(this->__PVT__read_pixel_x) 
                                                   << 3U)) 
                                               >= (0x1ffU 
                                                   & (IData)(vlTOPp->Background2_SCX))) 
                                              & ((1U 
                                                  | ((IData)(this->__PVT__read_pixel_x) 
                                                     << 3U)) 
                                                 <= 
                                                 ((IData)(0x13fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->Background2_SCX))))) 
                                             << 1U));
        this->__PVT__valid_pixel_check = ((0xfbU & (IData)(this->__PVT__valid_pixel_check)) 
                                          | ((((2U 
                                                | ((IData)(this->__PVT__read_pixel_x) 
                                                   << 3U)) 
                                               >= (0x1ffU 
                                                   & (IData)(vlTOPp->Background2_SCX))) 
                                              & ((2U 
                                                  | ((IData)(this->__PVT__read_pixel_x) 
                                                     << 3U)) 
                                                 <= 
                                                 ((IData)(0x13fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->Background2_SCX))))) 
                                             << 2U));
        this->__PVT__valid_pixel_check = ((0xf7U & (IData)(this->__PVT__valid_pixel_check)) 
                                          | ((((3U 
                                                | ((IData)(this->__PVT__read_pixel_x) 
                                                   << 3U)) 
                                               >= (0x1ffU 
                                                   & (IData)(vlTOPp->Background2_SCX))) 
                                              & ((3U 
                                                  | ((IData)(this->__PVT__read_pixel_x) 
                                                     << 3U)) 
                                                 <= 
                                                 ((IData)(0x13fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->Background2_SCX))))) 
                                             << 3U));
        this->__PVT__valid_pixel_check = ((0xefU & (IData)(this->__PVT__valid_pixel_check)) 
                                          | ((((4U 
                                                | ((IData)(this->__PVT__read_pixel_x) 
                                                   << 3U)) 
                                               >= (0x1ffU 
                                                   & (IData)(vlTOPp->Background2_SCX))) 
                                              & ((4U 
                                                  | ((IData)(this->__PVT__read_pixel_x) 
                                                     << 3U)) 
                                                 <= 
                                                 ((IData)(0x13fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->Background2_SCX))))) 
                                             << 4U));
        this->__PVT__valid_pixel_check = ((0xdfU & (IData)(this->__PVT__valid_pixel_check)) 
                                          | ((((5U 
                                                | ((IData)(this->__PVT__read_pixel_x) 
                                                   << 3U)) 
                                               >= (0x1ffU 
                                                   & (IData)(vlTOPp->Background2_SCX))) 
                                              & ((5U 
                                                  | ((IData)(this->__PVT__read_pixel_x) 
                                                     << 3U)) 
                                                 <= 
                                                 ((IData)(0x13fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->Background2_SCX))))) 
                                             << 5U));
        this->__PVT__valid_pixel_check = ((0xbfU & (IData)(this->__PVT__valid_pixel_check)) 
                                          | ((((6U 
                                                | ((IData)(this->__PVT__read_pixel_x) 
                                                   << 3U)) 
                                               >= (0x1ffU 
                                                   & (IData)(vlTOPp->Background2_SCX))) 
                                              & ((6U 
                                                  | ((IData)(this->__PVT__read_pixel_x) 
                                                     << 3U)) 
                                                 <= 
                                                 ((IData)(0x13fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->Background2_SCX))))) 
                                             << 6U));
        this->__PVT__valid_pixel_check = ((0x7fU & (IData)(this->__PVT__valid_pixel_check)) 
                                          | ((((7U 
                                                | ((IData)(this->__PVT__read_pixel_x) 
                                                   << 3U)) 
                                               >= (0x1ffU 
                                                   & (IData)(vlTOPp->Background2_SCX))) 
                                              & ((7U 
                                                  | ((IData)(this->__PVT__read_pixel_x) 
                                                     << 3U)) 
                                                 <= 
                                                 ((IData)(0x13fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & (IData)(vlTOPp->Background2_SCX))))) 
                                             << 7U));
    } else {
        this->__PVT__valid_pixel_check = 0U;
    }
    if ((0U == (IData)(this->__PVT__fifo_r_state))) {
        this->__PVT__fifo_r_state_counter_next = 0U;
    } else {
        if ((1U == (IData)(this->__PVT__fifo_r_state))) {
            if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Decompressed_FIFO_r_master) 
                     & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_empty_256)))) {
                    this->__PVT__fifo_r_state_counter_next = 1U;
                    this->__PVT__fifo_r_state_next = 1U;
                } else {
                    this->__PVT__fifo_r_state_counter_next = 0U;
                    this->__PVT__fifo_r_state_next = 1U;
                }
            } else {
                if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    this->__PVT__fifo_r_state_counter_next = 2U;
                    this->__PVT__fifo_r_state_next = 1U;
                } else {
                    if ((2U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((0U == (IData)(this->__PVT__valid_pixel_check))) {
                            this->__PVT__fifo_r_state_counter_next = 0U;
                            this->__PVT__fifo_r_state_next = 1U;
                        } else {
                            this->__PVT__rgb_convert_req = 1U;
                            this->__PVT__fifo_r_state_counter_next = 3U;
                            this->__PVT__fifo_r_state_next = 1U;
                        }
                    } else {
                        if ((3U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            this->__PVT__rgb_convert_req = 1U;
                            if (this->__PVT__rgb_convert_end) {
                                if (((0x31U == (IData)(this->__PVT__read_pixel_x)) 
                                     & (0x13fU == (IData)(this->__PVT__read_pixel_y)))) {
                                    this->__PVT__fifo_r_state_counter_next = 0U;
                                    this->__PVT__fifo_r_state_next = 0U;
                                } else {
                                    this->__PVT__fifo_r_state_counter_next = 0U;
                                    this->__PVT__fifo_r_state_next = 1U;
                                }
                            } else {
                                this->__PVT__fifo_r_state_counter_next = 3U;
                                this->__PVT__fifo_r_state_next = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Decompressed_FIFO_r_master) 
                         & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__fifo_empty_256)))) {
                        this->__PVT__fifo_r_state_counter_next = 1U;
                        this->__PVT__fifo_r_state_next = 2U;
                    } else {
                        this->__PVT__fifo_r_state_counter_next = 0U;
                        this->__PVT__fifo_r_state_next = 2U;
                    }
                } else {
                    if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        this->__PVT__fifo_r_state_counter_next = 2U;
                        this->__PVT__fifo_r_state_next = 2U;
                    } else {
                        if ((2U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            if ((0U == (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__fifo_r_state_counter_next = 0U;
                                this->__PVT__fifo_r_state_next = 2U;
                            } else {
                                this->__PVT__rgb_convert_req = 1U;
                                this->__PVT__fifo_r_state_counter_next = 3U;
                                this->__PVT__fifo_r_state_next = 2U;
                            }
                        } else {
                            if ((3U == (IData)(this->__PVT__fifo_r_state_counter))) {
                                this->__PVT__rgb_convert_req = 1U;
                                if (this->__PVT__rgb_convert_end) {
                                    this->__PVT__fifo_r_state_counter_next = 0U;
                                    this->__PVT__fifo_r_state_next = 2U;
                                } else {
                                    this->__PVT__fifo_r_state_counter_next = 3U;
                                    this->__PVT__fifo_r_state_next = 2U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    this->__PVT__rgb_convert_end = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U != (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((1U & (~ ((IData)(this->__PVT__valid_pixel_check) 
                                              >> 1U)))) {
                                    this->__PVT__rgb_convert_end = 1U;
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((1U & (~ 
                                                   ((IData)(this->__PVT__valid_pixel_check) 
                                                    >> 2U)))) {
                                            this->__PVT__rgb_convert_end = 1U;
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(this->__PVT__valid_pixel_check) 
                                                         >> 3U)))) {
                                                    this->__PVT__rgb_convert_end = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((1U & (~ ((IData)(this->__PVT__valid_pixel_check) 
                                                  >> 5U)))) {
                                        this->__PVT__rgb_convert_end = 1U;
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(this->__PVT__valid_pixel_check) 
                                                     >> 6U)))) {
                                                this->__PVT__rgb_convert_end = 1U;
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(this->__PVT__valid_pixel_check) 
                                                             >> 7U)))) {
                                                        this->__PVT__rgb_convert_end = 1U;
                                                    }
                                                } else {
                                                    if (this->__PVT__RGB_reg_ready) {
                                                        this->__PVT__rgb_convert_end = 1U;
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
    this->__PVT__rgb_r_state_next = this->__PVT__rgb_r_state;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    this->__PVT__rgb_r_state_next = 
                        ((0U == (IData)(this->__PVT__rgb_r_state_counter))
                          ? 4U : ((1U == (IData)(this->__PVT__rgb_r_state_counter))
                                   ? 4U : ((2U == (IData)(this->__PVT__rgb_r_state_counter))
                                            ? ((2U 
                                                & (IData)(this->__PVT__valid_pixel_check))
                                                ? 4U
                                                : 3U)
                                            : ((3U 
                                                == (IData)(this->__PVT__rgb_r_state_counter))
                                                ? 4U
                                                : (
                                                   (4U 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(this->__PVT__valid_pixel_check))
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))
                                                     ? 4U
                                                     : 
                                                    ((6U 
                                                      == (IData)(this->__PVT__rgb_r_state_counter))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(this->__PVT__valid_pixel_check))
                                                       ? 4U
                                                       : 3U)
                                                      : 4U)))))));
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__rgb_r_state_next = 4U;
                            } else {
                                if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->__PVT__rgb_r_state_next = 4U;
                                } else {
                                    if ((0x40U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->__PVT__rgb_r_state_next = 4U;
                                    } else {
                                        if ((0x80U 
                                             & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->__PVT__rgb_r_state_next = 4U;
                                        }
                                    }
                                }
                            }
                        } else {
                            this->__PVT__rgb_r_state_next 
                                = ((9U == (IData)(this->__PVT__rgb_r_state_counter))
                                    ? 4U : ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))
                                             ? ((0x20U 
                                                 & (IData)(this->__PVT__valid_pixel_check))
                                                 ? 4U
                                                 : 3U)
                                             : ((0xbU 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))
                                                 ? 4U
                                                 : 
                                                ((0xcU 
                                                  == (IData)(this->__PVT__rgb_r_state_counter))
                                                  ? 
                                                 ((0x40U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 4U
                                                   : 3U)
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(this->__PVT__rgb_r_state_counter))
                                                   ? 4U
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(this->__PVT__valid_pixel_check))
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((IData)(this->__PVT__RGB_reg_ready)
                                                     ? 3U
                                                     : 4U)))))));
                        }
                    }
                }
            }
        }
    }
    this->Lookup_ena = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            this->Lookup_ena = 1U;
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->Lookup_ena = 1U;
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->Lookup_ena = 1U;
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    this->Lookup_ena = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->Lookup_ena = 1U;
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->Lookup_ena = 1U;
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                this->Lookup_ena = 1U;
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        this->Lookup_ena = 1U;
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
    this->Lookup_pixel = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            this->Lookup_pixel = (0xffU 
                                                  & (IData)(this->__PVT__decomp_pixel_reg));
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->Lookup_pixel 
                                        = (0xffU & (IData)(
                                                           (this->__PVT__decomp_pixel_reg 
                                                            >> 8U)));
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->Lookup_pixel 
                                                = (0xffU 
                                                   & (IData)(
                                                             (this->__PVT__decomp_pixel_reg 
                                                              >> 0x10U)));
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    this->Lookup_pixel 
                                                        = 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (this->__PVT__decomp_pixel_reg 
                                                                    >> 0x18U)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->Lookup_pixel 
                                    = (0xffU & (IData)(
                                                       (this->__PVT__decomp_pixel_reg 
                                                        >> 0x20U)));
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->Lookup_pixel 
                                            = (0xffU 
                                               & (IData)(
                                                         (this->__PVT__decomp_pixel_reg 
                                                          >> 0x28U)));
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                this->Lookup_pixel 
                                                    = 
                                                    (0xffU 
                                                     & (IData)(
                                                               (this->__PVT__decomp_pixel_reg 
                                                                >> 0x30U)));
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        this->Lookup_pixel 
                                                            = 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (this->__PVT__decomp_pixel_reg 
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
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_settle__TOP__PPU_TOP__DOT__u_ch1__13(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_settle__TOP__PPU_TOP__DOT__u_ch1__13\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__RGB_reg_w_ena = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            if (vlTOPp->PPU_TOP__DOT__Req_end
                                [2U]) {
                                this->__PVT__RGB_reg_w_ena = 1U;
                            }
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    if (vlTOPp->PPU_TOP__DOT__Req_end
                                        [2U]) {
                                        this->__PVT__RGB_reg_w_ena = 1U;
                                    }
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            if (vlTOPp->PPU_TOP__DOT__Req_end
                                                [2U]) {
                                                this->__PVT__RGB_reg_w_ena = 1U;
                                            }
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    if (
                                                        vlTOPp->PPU_TOP__DOT__Req_end
                                                        [2U]) {
                                                        this->__PVT__RGB_reg_w_ena = 1U;
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
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                if (vlTOPp->PPU_TOP__DOT__Req_end
                                    [2U]) {
                                    this->__PVT__RGB_reg_w_ena = 1U;
                                }
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        if (vlTOPp->PPU_TOP__DOT__Req_end
                                            [2U]) {
                                            this->__PVT__RGB_reg_w_ena = 1U;
                                        }
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                if (
                                                    vlTOPp->PPU_TOP__DOT__Req_end
                                                    [2U]) {
                                                    this->__PVT__RGB_reg_w_ena = 1U;
                                                }
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        if (
                                                            vlTOPp->PPU_TOP__DOT__Req_end
                                                            [2U]) {
                                                            this->__PVT__RGB_reg_w_ena = 1U;
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
    }
    this->__PVT__rgb_r_state_counter_next = this->__PVT__rgb_r_state_counter;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    this->__PVT__rgb_r_state_counter_next 
                        = ((0U == (IData)(this->__PVT__rgb_r_state_counter))
                            ? ((1U & (IData)(this->__PVT__valid_pixel_check))
                                ? (vlTOPp->PPU_TOP__DOT__Req_end
                                   [2U] ? 1U : 0U) : 
                               ((2U & (IData)(this->__PVT__valid_pixel_check))
                                 ? 2U : ((4U & (IData)(this->__PVT__valid_pixel_check))
                                          ? 4U : ((8U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 6U
                                                   : 8U))))
                            : ((1U == (IData)(this->__PVT__rgb_r_state_counter))
                                ? ((IData)(this->__PVT__RGB_reg_ready)
                                    ? 2U : 1U) : ((2U 
                                                   == (IData)(this->__PVT__rgb_r_state_counter))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(this->__PVT__valid_pixel_check))
                                                    ? 
                                                   (vlTOPp->PPU_TOP__DOT__Req_end
                                                    [2U]
                                                     ? 3U
                                                     : 2U)
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((IData)(this->__PVT__RGB_reg_ready)
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((4U 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(this->__PVT__valid_pixel_check))
                                                      ? 
                                                     (vlTOPp->PPU_TOP__DOT__Req_end
                                                      [2U]
                                                       ? 5U
                                                       : 4U)
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == (IData)(this->__PVT__rgb_r_state_counter))
                                                      ? 
                                                     ((IData)(this->__PVT__RGB_reg_ready)
                                                       ? 6U
                                                       : 5U)
                                                      : 
                                                     ((6U 
                                                       == (IData)(this->__PVT__rgb_r_state_counter))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(this->__PVT__valid_pixel_check))
                                                        ? 
                                                       (vlTOPp->PPU_TOP__DOT__Req_end
                                                        [2U]
                                                         ? 7U
                                                         : 6U)
                                                        : 0U)
                                                       : 
                                                      ((IData)(this->__PVT__RGB_reg_ready)
                                                        ? 8U
                                                        : 7U))))))));
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__rgb_r_state_counter_next 
                                    = (vlTOPp->PPU_TOP__DOT__Req_end
                                       [2U] ? 9U : 8U);
                            } else {
                                if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->__PVT__rgb_r_state_counter_next = 0xaU;
                                } else {
                                    if ((0x40U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->__PVT__rgb_r_state_counter_next = 0xcU;
                                    } else {
                                        if ((0x80U 
                                             & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->__PVT__rgb_r_state_counter_next = 0xeU;
                                        }
                                    }
                                }
                            }
                        } else {
                            this->__PVT__rgb_r_state_counter_next 
                                = ((9U == (IData)(this->__PVT__rgb_r_state_counter))
                                    ? ((IData)(this->__PVT__RGB_reg_ready)
                                        ? 0xaU : 9U)
                                    : ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))
                                        ? ((0x20U & (IData)(this->__PVT__valid_pixel_check))
                                            ? (vlTOPp->PPU_TOP__DOT__Req_end
                                               [2U]
                                                ? 0xbU
                                                : 0xaU)
                                            : 0U) : 
                                       ((0xbU == (IData)(this->__PVT__rgb_r_state_counter))
                                         ? ((IData)(this->__PVT__RGB_reg_ready)
                                             ? 0xcU
                                             : 0xbU)
                                         : ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))
                                             ? ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))
                                                 ? 
                                                (vlTOPp->PPU_TOP__DOT__Req_end
                                                 [2U]
                                                  ? 0xdU
                                                  : 0xcU)
                                                 : 0U)
                                             : ((0xdU 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))
                                                 ? 
                                                ((IData)(this->__PVT__RGB_reg_ready)
                                                  ? 0xeU
                                                  : 0xdU)
                                                 : 
                                                ((0xeU 
                                                  == (IData)(this->__PVT__rgb_r_state_counter))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 
                                                  (vlTOPp->PPU_TOP__DOT__Req_end
                                                   [2U]
                                                    ? 0xfU
                                                    : 0xeU)
                                                   : 0U)
                                                  : 
                                                 ((IData)(this->__PVT__RGB_reg_ready)
                                                   ? 0U
                                                   : 0xfU)))))));
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_sequent__TOP__PPU_TOP__DOT__u_ch1__23(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_sequent__TOP__PPU_TOP__DOT__u_ch1__23\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__personal_counter_y = this->__PVT__personal_counter_y;
    this->__Vdly__personal_counter_x = this->__PVT__personal_counter_x;
    this->__Vdly__main_state = this->__PVT__main_state;
    this->__Vdly__main_state_counter = this->__PVT__main_state_counter;
    this->__Vdly__rgb_r_state = this->__PVT__rgb_r_state;
    this->__Vdly__read_pixel_y = this->__PVT__read_pixel_y;
    this->__Vdly__read_pixel_x = this->__PVT__read_pixel_x;
    this->__Vdly__fifo_r_state_counter = this->__PVT__fifo_r_state_counter;
    this->__Vdly__fifo_r_state = this->__PVT__fifo_r_state;
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[2U]))) {
            this->__PVT__RGB_reg_trans = 0U;
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[2U])) {
                this->__PVT__RGB_reg_trans = 1U;
            }
        }
    } else {
        this->__PVT__RGB_reg_trans = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[2U]))) {
            this->__PVT__RGB_reg = vlTOPp->PPU_TOP__DOT__Req_RGB
                [2U];
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[2U])) {
                this->__PVT__RGB_reg = 0U;
            }
        }
    } else {
        this->__PVT__RGB_reg = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[2U]))) {
            this->__PVT__RGB_reg_valid = 1U;
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[2U])) {
                this->__PVT__RGB_reg_valid = 1U;
            }
        }
        if (this->__PVT__RGB_reg_ready) {
            this->__PVT__RGB_reg_valid = 0U;
        }
    } else {
        this->__PVT__RGB_reg_valid = 0U;
    }
    if (vlTOPp->resetn) {
        this->__Vdly__main_state_counter = this->__PVT__main_state_counter_next;
        this->__Vdly__main_state = this->__PVT__main_state_next;
        if ((0U == (IData)(this->__PVT__main_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Character1_z)))) {
                this->__Vdly__main_state_counter = 0U;
                this->__Vdly__personal_counter_x = 0U;
                this->__Vdly__personal_counter_y = 0U;
                this->__Vdly__main_state = 2U;
            } else {
                this->__Vdly__main_state = 0U;
            }
        } else {
            if ((1U == (IData)(this->__PVT__main_state))) {
                if ((0U == (IData)(this->__PVT__main_state_counter))) {
                    if (((IData)(this->Pixel_valid) 
                         & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                         [3U])) {
                        if (((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                             & (0xefU == (IData)(this->__PVT__personal_counter_y)))) {
                            this->__Vdly__main_state = 0U;
                            this->__Vdly__personal_counter_x = 0U;
                            this->__Vdly__personal_counter_y = 0U;
                        } else {
                            if ((0x13fU == (IData)(this->__PVT__personal_counter_x))) {
                                this->__Vdly__personal_counter_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_y)));
                                this->__Vdly__personal_counter_x = 0U;
                            } else {
                                this->__Vdly__personal_counter_x 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_x)));
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(this->__PVT__main_state))) {
                    if (((IData)(this->Pixel_valid) 
                         & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                         [3U])) {
                        if (((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                             & (0xefU == (IData)(this->__PVT__personal_counter_y)))) {
                            this->__Vdly__main_state = 0U;
                            this->__Vdly__personal_counter_x = 0U;
                            this->__Vdly__personal_counter_y = 0U;
                        } else {
                            if ((0x13fU == (IData)(this->__PVT__personal_counter_x))) {
                                this->__Vdly__personal_counter_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_y)));
                                this->__Vdly__personal_counter_x = 0U;
                            } else {
                                this->__Vdly__personal_counter_x 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_x)));
                            }
                        }
                    }
                }
            }
        }
    } else {
        this->__Vdly__main_state = 0U;
        this->__Vdly__main_state_counter = 0U;
        this->__Vdly__personal_counter_x = 0U;
        this->__Vdly__personal_counter_y = 0U;
    }
    if (vlTOPp->resetn) {
        this->__Vdly__fifo_r_state = this->__PVT__fifo_r_state_next;
        this->__Vdly__fifo_r_state_counter = this->__PVT__fifo_r_state_counter_next;
        this->__PVT__rgb_r_state_counter = this->__PVT__rgb_r_state_counter_next;
        this->__Vdly__rgb_r_state = this->__PVT__rgb_r_state_next;
        if ((0U == (IData)(this->__PVT__fifo_r_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Character1_z)))) {
                this->__Vdly__fifo_r_state = 2U;
                this->__Vdly__read_pixel_x = 0x3fU;
                this->__Vdly__read_pixel_y = 0x1ffU;
                this->__Vdly__fifo_r_state_counter = 0U;
            } else {
                this->__Vdly__fifo_r_state = 0U;
            }
        } else {
            if ((1U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U != (IData)(this->__PVT__fifo_r_state_counter))) {
                    if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((0x31U == (IData)(this->__PVT__read_pixel_x))) {
                            this->__Vdly__read_pixel_y 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(this->__PVT__read_pixel_y)));
                            this->__Vdly__read_pixel_x = 0U;
                        } else {
                            if (((0x3fU == (IData)(this->__PVT__read_pixel_x)) 
                                 & (0x1ffU == (IData)(this->__PVT__read_pixel_y)))) {
                                this->__Vdly__read_pixel_x = 0U;
                                this->__Vdly__read_pixel_y = 0U;
                            } else {
                                this->__Vdly__read_pixel_x 
                                    = (0x3fU & ((IData)(1U) 
                                                + (IData)(this->__PVT__read_pixel_x)));
                            }
                        }
                        this->__PVT__decomp_pixel_reg 
                            = vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Decompressed_FIFO_data;
                    }
                }
            } else {
                if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                    if ((0U != (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            if ((0x13U == (IData)(this->__PVT__read_pixel_x))) {
                                this->__Vdly__read_pixel_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__read_pixel_y)));
                                this->__Vdly__read_pixel_x = 0U;
                            } else {
                                if (((0x3fU == (IData)(this->__PVT__read_pixel_x)) 
                                     & (0x1ffU == (IData)(this->__PVT__read_pixel_y)))) {
                                    this->__Vdly__read_pixel_x = 0U;
                                    this->__Vdly__read_pixel_y = 0U;
                                } else {
                                    this->__Vdly__read_pixel_x 
                                        = (0x3fU & 
                                           ((IData)(1U) 
                                            + (IData)(this->__PVT__read_pixel_x)));
                                }
                            }
                            this->__PVT__decomp_pixel_reg 
                                = vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Decompressed_FIFO_data;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(this->__PVT__rgb_r_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Character1_z)))) {
                this->__Vdly__rgb_r_state = 3U;
                this->__PVT__rgb_r_state_counter = 0U;
            } else {
                this->__Vdly__rgb_r_state = 0U;
            }
        } else {
            if ((3U == (IData)(this->__PVT__rgb_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state))) {
                    this->__Vdly__rgb_r_state = 0U;
                    this->__PVT__rgb_r_state_counter = 0U;
                } else {
                    if (this->__PVT__rgb_convert_req) {
                        this->__Vdly__rgb_r_state = 4U;
                        this->__PVT__rgb_r_state_counter = 0U;
                    } else {
                        this->__Vdly__rgb_r_state = 3U;
                    }
                }
            }
        }
    } else {
        this->__Vdly__rgb_r_state = 0U;
        this->__Vdly__fifo_r_state_counter = 0U;
        this->__PVT__decomp_pixel_reg = 0ULL;
        this->__Vdly__fifo_r_state = 0U;
        this->__PVT__rgb_r_state_counter = 0U;
        this->__Vdly__read_pixel_x = 0x3fU;
        this->__Vdly__read_pixel_y = 0x1ffU;
    }
    this->__PVT__personal_counter_x = this->__Vdly__personal_counter_x;
    this->__PVT__personal_counter_y = this->__Vdly__personal_counter_y;
    this->__PVT__main_state_counter = this->__Vdly__main_state_counter;
    this->__PVT__main_state = this->__Vdly__main_state;
    this->__PVT__rgb_r_state = this->__Vdly__rgb_r_state;
    this->__PVT__read_pixel_x = this->__Vdly__read_pixel_x;
    this->__PVT__read_pixel_y = this->__Vdly__read_pixel_y;
    this->__PVT__fifo_r_state = this->__Vdly__fifo_r_state;
    this->__PVT__fifo_r_state_counter = this->__Vdly__fifo_r_state_counter;
    this->__PVT__main_state_counter_next = this->__PVT__main_state_counter;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                this->__PVT__main_state_counter_next = 0U;
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                this->__PVT__main_state_counter_next = 0U;
            }
        }
    }
    this->Decomp_fifo_dequeue = 0U;
    if ((0U != (IData)(this->__PVT__fifo_r_state))) {
        if ((1U == (IData)(this->__PVT__fifo_r_state))) {
            if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Decompressed_FIFO_r_master) 
                     & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_empty_128)))) {
                    this->Decomp_fifo_dequeue = 1U;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Decompressed_FIFO_r_master) 
                         & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_empty_128)))) {
                        this->Decomp_fifo_dequeue = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_combo__TOP__PPU_TOP__DOT__u_ch1__33(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_combo__TOP__PPU_TOP__DOT__u_ch1__33\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__RGB_reg_ready = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->__PVT__RGB_reg_ready = vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                        [3U];
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & (IData)(vlTOPp->Character1_WX))) 
                       & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                     (0xfffU & ((IData)(0x9fU) 
                                                + (IData)(vlTOPp->Character1_WX))))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (IData)(vlTOPp->Character1_WY)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (IData)(vlTOPp->Character1_WY)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->__PVT__RGB_reg_ready 
                            = vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                            [3U];
                    }
                }
            }
        }
    }
    this->Pixel_is_trans = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->Pixel_is_trans = this->__PVT__RGB_reg_trans;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & (IData)(vlTOPp->Character1_WX))) 
                       & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                     (0xfffU & ((IData)(0x9fU) 
                                                + (IData)(vlTOPp->Character1_WX))))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (IData)(vlTOPp->Character1_WY)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (IData)(vlTOPp->Character1_WY)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->Pixel_is_trans = this->__PVT__RGB_reg_trans;
                    }
                } else {
                    this->Pixel_is_trans = 1U;
                }
            }
        }
    }
    this->Pixel_RGB = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->Pixel_RGB = ((IData)(this->__PVT__RGB_reg_trans)
                                        ? 0U : this->__PVT__RGB_reg);
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & (IData)(vlTOPp->Character1_WX))) 
                       & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                     (0xfffU & ((IData)(0x9fU) 
                                                + (IData)(vlTOPp->Character1_WX))))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (IData)(vlTOPp->Character1_WY)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (IData)(vlTOPp->Character1_WY)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->Pixel_RGB = ((IData)(this->__PVT__RGB_reg_trans)
                                            ? 0U : this->__PVT__RGB_reg);
                    }
                } else {
                    this->Pixel_RGB = 0U;
                }
            }
        }
    }
    this->__PVT__main_state_next = this->__PVT__main_state;
    this->Pixel_valid = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->__PVT__main_state_next = 
                        (((((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                            & (0xefU == (IData)(this->__PVT__personal_counter_y))) 
                           & (IData)(this->Pixel_valid)) 
                          & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                          [3U]) ? 0U : 1U);
                    this->Pixel_valid = 1U;
                } else {
                    this->__PVT__main_state_next = 1U;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                this->__PVT__main_state_next = ((((
                                                   (0x13fU 
                                                    == (IData)(this->__PVT__personal_counter_x)) 
                                                   & (0xefU 
                                                      == (IData)(this->__PVT__personal_counter_y))) 
                                                  & (IData)(this->Pixel_valid)) 
                                                 & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                                                 [3U])
                                                 ? 0U
                                                 : 2U);
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & (IData)(vlTOPp->Character1_WX))) 
                       & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                     (0xfffU & ((IData)(0x9fU) 
                                                + (IData)(vlTOPp->Character1_WX))))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (IData)(vlTOPp->Character1_WY)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (IData)(vlTOPp->Character1_WY)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->Pixel_valid = 1U;
                    }
                } else {
                    this->Pixel_valid = 1U;
                }
            }
        }
    }
    this->__PVT__fifo_r_state_counter_next = this->__PVT__fifo_r_state_counter;
    this->__PVT__fifo_r_state_next = this->__PVT__fifo_r_state;
    this->__PVT__valid_pixel_check = 0U;
    this->__PVT__rgb_convert_req = 0U;
    this->__PVT__valid_pixel_check = ((0xfeU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | (((VL_LTES_III(1,32,32, 0U, 
                                                       (VL_EXTENDS_II(32,10, 
                                                                      (0x3ffU 
                                                                       & (IData)(vlTOPp->Character1_WY))) 
                                                        + 
                                                        VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                           & VL_GTES_III(1,32,32, 0xefU, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character1_WY))) 
                                                          + 
                                                          VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                          & VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character1_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       ((IData)(this->__PVT__read_pixel_x) 
                                                                        << 3U))))) 
                                         & VL_GTES_III(1,32,32, 0x13fU, 
                                                       (VL_EXTENDS_II(32,10, 
                                                                      (0x3ffU 
                                                                       & (IData)(vlTOPp->Character1_WX))) 
                                                        + 
                                                        VL_EXTENDS_II(32,9, 
                                                                      ((IData)(this->__PVT__read_pixel_x) 
                                                                       << 3U))))));
    this->__PVT__valid_pixel_check = ((0xfdU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character1_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character1_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character1_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (1U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character1_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (1U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 1U));
    this->__PVT__valid_pixel_check = ((0xfbU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character1_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character1_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character1_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (2U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character1_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (2U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 2U));
    this->__PVT__valid_pixel_check = ((0xf7U & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character1_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character1_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character1_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (3U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character1_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (3U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 3U));
    this->__PVT__valid_pixel_check = ((0xefU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character1_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character1_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character1_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (4U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character1_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (4U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 4U));
    this->__PVT__valid_pixel_check = ((0xdfU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character1_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character1_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character1_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (5U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character1_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (5U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 5U));
    this->__PVT__valid_pixel_check = ((0xbfU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character1_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character1_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character1_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (6U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character1_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (6U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 6U));
    this->__PVT__valid_pixel_check = ((0x7fU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character1_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character1_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character1_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (7U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character1_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (7U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 7U));
    if ((0U == (IData)(this->__PVT__fifo_r_state))) {
        this->__PVT__fifo_r_state_counter_next = 0U;
    } else {
        if ((1U == (IData)(this->__PVT__fifo_r_state))) {
            if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Decompressed_FIFO_r_master) 
                     & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_empty_128)))) {
                    this->__PVT__fifo_r_state_counter_next = 1U;
                    this->__PVT__fifo_r_state_next = 1U;
                } else {
                    this->__PVT__fifo_r_state_counter_next = 0U;
                    this->__PVT__fifo_r_state_next = 1U;
                }
            } else {
                if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    this->__PVT__fifo_r_state_counter_next = 2U;
                    this->__PVT__fifo_r_state_next = 1U;
                } else {
                    if ((2U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((0U == (IData)(this->__PVT__valid_pixel_check))) {
                            this->__PVT__fifo_r_state_counter_next = 0U;
                            this->__PVT__fifo_r_state_next = 1U;
                        } else {
                            this->__PVT__rgb_convert_req = 1U;
                            this->__PVT__fifo_r_state_counter_next = 3U;
                            this->__PVT__fifo_r_state_next = 1U;
                        }
                    } else {
                        if ((3U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            this->__PVT__rgb_convert_req = 1U;
                            if (this->__PVT__rgb_convert_end) {
                                if (((0x31U == (IData)(this->__PVT__read_pixel_x)) 
                                     & (0x13fU == (IData)(this->__PVT__read_pixel_y)))) {
                                    this->__PVT__fifo_r_state_counter_next = 0U;
                                    this->__PVT__fifo_r_state_next = 0U;
                                } else {
                                    this->__PVT__fifo_r_state_counter_next = 0U;
                                    this->__PVT__fifo_r_state_next = 1U;
                                }
                            } else {
                                this->__PVT__fifo_r_state_counter_next = 3U;
                                this->__PVT__fifo_r_state_next = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Decompressed_FIFO_r_master) 
                         & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__fifo_empty_128)))) {
                        this->__PVT__fifo_r_state_counter_next = 1U;
                        this->__PVT__fifo_r_state_next = 2U;
                    } else {
                        this->__PVT__fifo_r_state_counter_next = 0U;
                        this->__PVT__fifo_r_state_next = 2U;
                    }
                } else {
                    if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        this->__PVT__fifo_r_state_counter_next = 2U;
                        this->__PVT__fifo_r_state_next = 2U;
                    } else {
                        if ((2U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            if ((0U == (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__fifo_r_state_counter_next = 0U;
                                this->__PVT__fifo_r_state_next = 2U;
                            } else {
                                this->__PVT__rgb_convert_req = 1U;
                                this->__PVT__fifo_r_state_counter_next = 3U;
                                this->__PVT__fifo_r_state_next = 2U;
                            }
                        } else {
                            if ((3U == (IData)(this->__PVT__fifo_r_state_counter))) {
                                this->__PVT__rgb_convert_req = 1U;
                                if (this->__PVT__rgb_convert_end) {
                                    if (((0x13U == (IData)(this->__PVT__read_pixel_x)) 
                                         & (0xefU == (IData)(this->__PVT__read_pixel_y)))) {
                                        this->__PVT__fifo_r_state_counter_next = 0U;
                                        this->__PVT__fifo_r_state_next = 0U;
                                    } else {
                                        this->__PVT__fifo_r_state_counter_next = 0U;
                                        this->__PVT__fifo_r_state_next = 2U;
                                    }
                                } else {
                                    this->__PVT__fifo_r_state_counter_next = 3U;
                                    this->__PVT__fifo_r_state_next = 2U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    this->__PVT__rgb_convert_end = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U != (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((1U & (~ ((IData)(this->__PVT__valid_pixel_check) 
                                              >> 1U)))) {
                                    this->__PVT__rgb_convert_end = 1U;
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((1U & (~ 
                                                   ((IData)(this->__PVT__valid_pixel_check) 
                                                    >> 2U)))) {
                                            this->__PVT__rgb_convert_end = 1U;
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(this->__PVT__valid_pixel_check) 
                                                         >> 3U)))) {
                                                    this->__PVT__rgb_convert_end = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((1U & (~ ((IData)(this->__PVT__valid_pixel_check) 
                                                  >> 5U)))) {
                                        this->__PVT__rgb_convert_end = 1U;
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(this->__PVT__valid_pixel_check) 
                                                     >> 6U)))) {
                                                this->__PVT__rgb_convert_end = 1U;
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(this->__PVT__valid_pixel_check) 
                                                             >> 7U)))) {
                                                        this->__PVT__rgb_convert_end = 1U;
                                                    }
                                                } else {
                                                    if (this->__PVT__RGB_reg_ready) {
                                                        this->__PVT__rgb_convert_end = 1U;
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
    this->__PVT__rgb_r_state_next = this->__PVT__rgb_r_state;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    this->__PVT__rgb_r_state_next = 
                        ((0U == (IData)(this->__PVT__rgb_r_state_counter))
                          ? 4U : ((1U == (IData)(this->__PVT__rgb_r_state_counter))
                                   ? 4U : ((2U == (IData)(this->__PVT__rgb_r_state_counter))
                                            ? ((2U 
                                                & (IData)(this->__PVT__valid_pixel_check))
                                                ? 4U
                                                : 3U)
                                            : ((3U 
                                                == (IData)(this->__PVT__rgb_r_state_counter))
                                                ? 4U
                                                : (
                                                   (4U 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(this->__PVT__valid_pixel_check))
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))
                                                     ? 4U
                                                     : 
                                                    ((6U 
                                                      == (IData)(this->__PVT__rgb_r_state_counter))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(this->__PVT__valid_pixel_check))
                                                       ? 4U
                                                       : 3U)
                                                      : 4U)))))));
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__rgb_r_state_next = 4U;
                            } else {
                                if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->__PVT__rgb_r_state_next = 4U;
                                } else {
                                    if ((0x40U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->__PVT__rgb_r_state_next = 4U;
                                    } else {
                                        if ((0x80U 
                                             & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->__PVT__rgb_r_state_next = 4U;
                                        }
                                    }
                                }
                            }
                        } else {
                            this->__PVT__rgb_r_state_next 
                                = ((9U == (IData)(this->__PVT__rgb_r_state_counter))
                                    ? 4U : ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))
                                             ? ((0x20U 
                                                 & (IData)(this->__PVT__valid_pixel_check))
                                                 ? 4U
                                                 : 3U)
                                             : ((0xbU 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))
                                                 ? 4U
                                                 : 
                                                ((0xcU 
                                                  == (IData)(this->__PVT__rgb_r_state_counter))
                                                  ? 
                                                 ((0x40U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 4U
                                                   : 3U)
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(this->__PVT__rgb_r_state_counter))
                                                   ? 4U
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(this->__PVT__valid_pixel_check))
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((IData)(this->__PVT__RGB_reg_ready)
                                                     ? 3U
                                                     : 4U)))))));
                        }
                    }
                }
            }
        }
    }
    this->Lookup_ena = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            this->Lookup_ena = 1U;
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->Lookup_ena = 1U;
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->Lookup_ena = 1U;
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    this->Lookup_ena = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->Lookup_ena = 1U;
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->Lookup_ena = 1U;
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                this->Lookup_ena = 1U;
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        this->Lookup_ena = 1U;
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
    this->Lookup_pixel = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            this->Lookup_pixel = (0xffU 
                                                  & (IData)(this->__PVT__decomp_pixel_reg));
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->Lookup_pixel 
                                        = (0xffU & (IData)(
                                                           (this->__PVT__decomp_pixel_reg 
                                                            >> 8U)));
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->Lookup_pixel 
                                                = (0xffU 
                                                   & (IData)(
                                                             (this->__PVT__decomp_pixel_reg 
                                                              >> 0x10U)));
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    this->Lookup_pixel 
                                                        = 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (this->__PVT__decomp_pixel_reg 
                                                                    >> 0x18U)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->Lookup_pixel 
                                    = (0xffU & (IData)(
                                                       (this->__PVT__decomp_pixel_reg 
                                                        >> 0x20U)));
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->Lookup_pixel 
                                            = (0xffU 
                                               & (IData)(
                                                         (this->__PVT__decomp_pixel_reg 
                                                          >> 0x28U)));
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                this->Lookup_pixel 
                                                    = 
                                                    (0xffU 
                                                     & (IData)(
                                                               (this->__PVT__decomp_pixel_reg 
                                                                >> 0x30U)));
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        this->Lookup_pixel 
                                                            = 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (this->__PVT__decomp_pixel_reg 
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
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_settle__TOP__PPU_TOP__DOT__u_ch2__14(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_settle__TOP__PPU_TOP__DOT__u_ch2__14\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__RGB_reg_w_ena = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            if (vlTOPp->PPU_TOP__DOT__Req_end
                                [3U]) {
                                this->__PVT__RGB_reg_w_ena = 1U;
                            }
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    if (vlTOPp->PPU_TOP__DOT__Req_end
                                        [3U]) {
                                        this->__PVT__RGB_reg_w_ena = 1U;
                                    }
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            if (vlTOPp->PPU_TOP__DOT__Req_end
                                                [3U]) {
                                                this->__PVT__RGB_reg_w_ena = 1U;
                                            }
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    if (
                                                        vlTOPp->PPU_TOP__DOT__Req_end
                                                        [3U]) {
                                                        this->__PVT__RGB_reg_w_ena = 1U;
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
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                if (vlTOPp->PPU_TOP__DOT__Req_end
                                    [3U]) {
                                    this->__PVT__RGB_reg_w_ena = 1U;
                                }
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        if (vlTOPp->PPU_TOP__DOT__Req_end
                                            [3U]) {
                                            this->__PVT__RGB_reg_w_ena = 1U;
                                        }
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                if (
                                                    vlTOPp->PPU_TOP__DOT__Req_end
                                                    [3U]) {
                                                    this->__PVT__RGB_reg_w_ena = 1U;
                                                }
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        if (
                                                            vlTOPp->PPU_TOP__DOT__Req_end
                                                            [3U]) {
                                                            this->__PVT__RGB_reg_w_ena = 1U;
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
    }
    this->__PVT__rgb_r_state_counter_next = this->__PVT__rgb_r_state_counter;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    this->__PVT__rgb_r_state_counter_next 
                        = ((0U == (IData)(this->__PVT__rgb_r_state_counter))
                            ? ((1U & (IData)(this->__PVT__valid_pixel_check))
                                ? (vlTOPp->PPU_TOP__DOT__Req_end
                                   [3U] ? 1U : 0U) : 
                               ((2U & (IData)(this->__PVT__valid_pixel_check))
                                 ? 2U : ((4U & (IData)(this->__PVT__valid_pixel_check))
                                          ? 4U : ((8U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 6U
                                                   : 8U))))
                            : ((1U == (IData)(this->__PVT__rgb_r_state_counter))
                                ? ((IData)(this->__PVT__RGB_reg_ready)
                                    ? 2U : 1U) : ((2U 
                                                   == (IData)(this->__PVT__rgb_r_state_counter))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(this->__PVT__valid_pixel_check))
                                                    ? 
                                                   (vlTOPp->PPU_TOP__DOT__Req_end
                                                    [3U]
                                                     ? 3U
                                                     : 2U)
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((IData)(this->__PVT__RGB_reg_ready)
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((4U 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(this->__PVT__valid_pixel_check))
                                                      ? 
                                                     (vlTOPp->PPU_TOP__DOT__Req_end
                                                      [3U]
                                                       ? 5U
                                                       : 4U)
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == (IData)(this->__PVT__rgb_r_state_counter))
                                                      ? 
                                                     ((IData)(this->__PVT__RGB_reg_ready)
                                                       ? 6U
                                                       : 5U)
                                                      : 
                                                     ((6U 
                                                       == (IData)(this->__PVT__rgb_r_state_counter))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(this->__PVT__valid_pixel_check))
                                                        ? 
                                                       (vlTOPp->PPU_TOP__DOT__Req_end
                                                        [3U]
                                                         ? 7U
                                                         : 6U)
                                                        : 0U)
                                                       : 
                                                      ((IData)(this->__PVT__RGB_reg_ready)
                                                        ? 8U
                                                        : 7U))))))));
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__rgb_r_state_counter_next 
                                    = (vlTOPp->PPU_TOP__DOT__Req_end
                                       [3U] ? 9U : 8U);
                            } else {
                                if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->__PVT__rgb_r_state_counter_next = 0xaU;
                                } else {
                                    if ((0x40U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->__PVT__rgb_r_state_counter_next = 0xcU;
                                    } else {
                                        if ((0x80U 
                                             & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->__PVT__rgb_r_state_counter_next = 0xeU;
                                        }
                                    }
                                }
                            }
                        } else {
                            this->__PVT__rgb_r_state_counter_next 
                                = ((9U == (IData)(this->__PVT__rgb_r_state_counter))
                                    ? ((IData)(this->__PVT__RGB_reg_ready)
                                        ? 0xaU : 9U)
                                    : ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))
                                        ? ((0x20U & (IData)(this->__PVT__valid_pixel_check))
                                            ? (vlTOPp->PPU_TOP__DOT__Req_end
                                               [3U]
                                                ? 0xbU
                                                : 0xaU)
                                            : 0U) : 
                                       ((0xbU == (IData)(this->__PVT__rgb_r_state_counter))
                                         ? ((IData)(this->__PVT__RGB_reg_ready)
                                             ? 0xcU
                                             : 0xbU)
                                         : ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))
                                             ? ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))
                                                 ? 
                                                (vlTOPp->PPU_TOP__DOT__Req_end
                                                 [3U]
                                                  ? 0xdU
                                                  : 0xcU)
                                                 : 0U)
                                             : ((0xdU 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))
                                                 ? 
                                                ((IData)(this->__PVT__RGB_reg_ready)
                                                  ? 0xeU
                                                  : 0xdU)
                                                 : 
                                                ((0xeU 
                                                  == (IData)(this->__PVT__rgb_r_state_counter))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 
                                                  (vlTOPp->PPU_TOP__DOT__Req_end
                                                   [3U]
                                                    ? 0xfU
                                                    : 0xeU)
                                                   : 0U)
                                                  : 
                                                 ((IData)(this->__PVT__RGB_reg_ready)
                                                   ? 0U
                                                   : 0xfU)))))));
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_sequent__TOP__PPU_TOP__DOT__u_ch2__24(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_sequent__TOP__PPU_TOP__DOT__u_ch2__24\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__personal_counter_y = this->__PVT__personal_counter_y;
    this->__Vdly__personal_counter_x = this->__PVT__personal_counter_x;
    this->__Vdly__main_state = this->__PVT__main_state;
    this->__Vdly__main_state_counter = this->__PVT__main_state_counter;
    this->__Vdly__rgb_r_state = this->__PVT__rgb_r_state;
    this->__Vdly__read_pixel_y = this->__PVT__read_pixel_y;
    this->__Vdly__read_pixel_x = this->__PVT__read_pixel_x;
    this->__Vdly__fifo_r_state_counter = this->__PVT__fifo_r_state_counter;
    this->__Vdly__fifo_r_state = this->__PVT__fifo_r_state;
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[3U]))) {
            this->__PVT__RGB_reg_trans = 0U;
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[3U])) {
                this->__PVT__RGB_reg_trans = 1U;
            }
        }
    } else {
        this->__PVT__RGB_reg_trans = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[3U]))) {
            this->__PVT__RGB_reg = vlTOPp->PPU_TOP__DOT__Req_RGB
                [3U];
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[3U])) {
                this->__PVT__RGB_reg = 0U;
            }
        }
    } else {
        this->__PVT__RGB_reg = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[3U]))) {
            this->__PVT__RGB_reg_valid = 1U;
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[3U])) {
                this->__PVT__RGB_reg_valid = 1U;
            }
        }
        if (this->__PVT__RGB_reg_ready) {
            this->__PVT__RGB_reg_valid = 0U;
        }
    } else {
        this->__PVT__RGB_reg_valid = 0U;
    }
    if (vlTOPp->resetn) {
        this->__Vdly__main_state_counter = this->__PVT__main_state_counter_next;
        this->__Vdly__main_state = this->__PVT__main_state_next;
        if ((0U == (IData)(this->__PVT__main_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Character2_z)))) {
                this->__Vdly__main_state_counter = 0U;
                this->__Vdly__personal_counter_x = 0U;
                this->__Vdly__personal_counter_y = 0U;
                this->__Vdly__main_state = 2U;
            } else {
                this->__Vdly__main_state = 0U;
            }
        } else {
            if ((1U == (IData)(this->__PVT__main_state))) {
                if ((0U == (IData)(this->__PVT__main_state_counter))) {
                    if (((IData)(this->Pixel_valid) 
                         & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                         [4U])) {
                        if (((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                             & (0xefU == (IData)(this->__PVT__personal_counter_y)))) {
                            this->__Vdly__main_state = 0U;
                            this->__Vdly__personal_counter_x = 0U;
                            this->__Vdly__personal_counter_y = 0U;
                        } else {
                            if ((0x13fU == (IData)(this->__PVT__personal_counter_x))) {
                                this->__Vdly__personal_counter_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_y)));
                                this->__Vdly__personal_counter_x = 0U;
                            } else {
                                this->__Vdly__personal_counter_x 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_x)));
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(this->__PVT__main_state))) {
                    if (((IData)(this->Pixel_valid) 
                         & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                         [4U])) {
                        if (((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                             & (0xefU == (IData)(this->__PVT__personal_counter_y)))) {
                            this->__Vdly__main_state = 0U;
                            this->__Vdly__personal_counter_x = 0U;
                            this->__Vdly__personal_counter_y = 0U;
                        } else {
                            if ((0x13fU == (IData)(this->__PVT__personal_counter_x))) {
                                this->__Vdly__personal_counter_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_y)));
                                this->__Vdly__personal_counter_x = 0U;
                            } else {
                                this->__Vdly__personal_counter_x 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_x)));
                            }
                        }
                    }
                }
            }
        }
    } else {
        this->__Vdly__main_state = 0U;
        this->__Vdly__main_state_counter = 0U;
        this->__Vdly__personal_counter_x = 0U;
        this->__Vdly__personal_counter_y = 0U;
    }
    if (vlTOPp->resetn) {
        this->__Vdly__fifo_r_state = this->__PVT__fifo_r_state_next;
        this->__Vdly__fifo_r_state_counter = this->__PVT__fifo_r_state_counter_next;
        this->__PVT__rgb_r_state_counter = this->__PVT__rgb_r_state_counter_next;
        this->__Vdly__rgb_r_state = this->__PVT__rgb_r_state_next;
        if ((0U == (IData)(this->__PVT__fifo_r_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Character2_z)))) {
                this->__Vdly__fifo_r_state = 2U;
                this->__Vdly__read_pixel_x = 0x3fU;
                this->__Vdly__read_pixel_y = 0x1ffU;
                this->__Vdly__fifo_r_state_counter = 0U;
            } else {
                this->__Vdly__fifo_r_state = 0U;
            }
        } else {
            if ((1U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U != (IData)(this->__PVT__fifo_r_state_counter))) {
                    if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((0x31U == (IData)(this->__PVT__read_pixel_x))) {
                            this->__Vdly__read_pixel_y 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(this->__PVT__read_pixel_y)));
                            this->__Vdly__read_pixel_x = 0U;
                        } else {
                            if (((0x3fU == (IData)(this->__PVT__read_pixel_x)) 
                                 & (0x1ffU == (IData)(this->__PVT__read_pixel_y)))) {
                                this->__Vdly__read_pixel_x = 0U;
                                this->__Vdly__read_pixel_y = 0U;
                            } else {
                                this->__Vdly__read_pixel_x 
                                    = (0x3fU & ((IData)(1U) 
                                                + (IData)(this->__PVT__read_pixel_x)));
                            }
                        }
                        this->__PVT__decomp_pixel_reg 
                            = vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Decompressed_FIFO_data;
                    }
                }
            } else {
                if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                    if ((0U != (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            if ((0x13U == (IData)(this->__PVT__read_pixel_x))) {
                                this->__Vdly__read_pixel_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__read_pixel_y)));
                                this->__Vdly__read_pixel_x = 0U;
                            } else {
                                if (((0x3fU == (IData)(this->__PVT__read_pixel_x)) 
                                     & (0x1ffU == (IData)(this->__PVT__read_pixel_y)))) {
                                    this->__Vdly__read_pixel_x = 0U;
                                    this->__Vdly__read_pixel_y = 0U;
                                } else {
                                    this->__Vdly__read_pixel_x 
                                        = (0x3fU & 
                                           ((IData)(1U) 
                                            + (IData)(this->__PVT__read_pixel_x)));
                                }
                            }
                            this->__PVT__decomp_pixel_reg 
                                = vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Decompressed_FIFO_data;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(this->__PVT__rgb_r_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Character2_z)))) {
                this->__Vdly__rgb_r_state = 3U;
                this->__PVT__rgb_r_state_counter = 0U;
            } else {
                this->__Vdly__rgb_r_state = 0U;
            }
        } else {
            if ((3U == (IData)(this->__PVT__rgb_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state))) {
                    this->__Vdly__rgb_r_state = 0U;
                    this->__PVT__rgb_r_state_counter = 0U;
                } else {
                    if (this->__PVT__rgb_convert_req) {
                        this->__Vdly__rgb_r_state = 4U;
                        this->__PVT__rgb_r_state_counter = 0U;
                    } else {
                        this->__Vdly__rgb_r_state = 3U;
                    }
                }
            }
        }
    } else {
        this->__Vdly__rgb_r_state = 0U;
        this->__Vdly__fifo_r_state_counter = 0U;
        this->__PVT__decomp_pixel_reg = 0ULL;
        this->__Vdly__fifo_r_state = 0U;
        this->__PVT__rgb_r_state_counter = 0U;
        this->__Vdly__read_pixel_x = 0x3fU;
        this->__Vdly__read_pixel_y = 0x1ffU;
    }
    this->__PVT__personal_counter_x = this->__Vdly__personal_counter_x;
    this->__PVT__personal_counter_y = this->__Vdly__personal_counter_y;
    this->__PVT__main_state_counter = this->__Vdly__main_state_counter;
    this->__PVT__main_state = this->__Vdly__main_state;
    this->__PVT__rgb_r_state = this->__Vdly__rgb_r_state;
    this->__PVT__read_pixel_x = this->__Vdly__read_pixel_x;
    this->__PVT__read_pixel_y = this->__Vdly__read_pixel_y;
    this->__PVT__fifo_r_state = this->__Vdly__fifo_r_state;
    this->__PVT__fifo_r_state_counter = this->__Vdly__fifo_r_state_counter;
    this->__PVT__main_state_counter_next = this->__PVT__main_state_counter;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                this->__PVT__main_state_counter_next = 0U;
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                this->__PVT__main_state_counter_next = 0U;
            }
        }
    }
    this->Decomp_fifo_dequeue = 0U;
    if ((0U != (IData)(this->__PVT__fifo_r_state))) {
        if ((1U == (IData)(this->__PVT__fifo_r_state))) {
            if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Decompressed_FIFO_r_master) 
                     & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_empty_128)))) {
                    this->Decomp_fifo_dequeue = 1U;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Decompressed_FIFO_r_master) 
                         & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_empty_128)))) {
                        this->Decomp_fifo_dequeue = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_combo__TOP__PPU_TOP__DOT__u_ch2__34(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_combo__TOP__PPU_TOP__DOT__u_ch2__34\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__RGB_reg_ready = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->__PVT__RGB_reg_ready = vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                        [4U];
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & (IData)(vlTOPp->Character2_WX))) 
                       & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                     (0xfffU & ((IData)(0x9fU) 
                                                + (IData)(vlTOPp->Character2_WX))))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (IData)(vlTOPp->Character2_WY)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (IData)(vlTOPp->Character2_WY)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->__PVT__RGB_reg_ready 
                            = vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                            [4U];
                    }
                }
            }
        }
    }
    this->Pixel_is_trans = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->Pixel_is_trans = this->__PVT__RGB_reg_trans;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & (IData)(vlTOPp->Character2_WX))) 
                       & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                     (0xfffU & ((IData)(0x9fU) 
                                                + (IData)(vlTOPp->Character2_WX))))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (IData)(vlTOPp->Character2_WY)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (IData)(vlTOPp->Character2_WY)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->Pixel_is_trans = this->__PVT__RGB_reg_trans;
                    }
                } else {
                    this->Pixel_is_trans = 1U;
                }
            }
        }
    }
    this->Pixel_RGB = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->Pixel_RGB = ((IData)(this->__PVT__RGB_reg_trans)
                                        ? 0U : this->__PVT__RGB_reg);
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & (IData)(vlTOPp->Character2_WX))) 
                       & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                     (0xfffU & ((IData)(0x9fU) 
                                                + (IData)(vlTOPp->Character2_WX))))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (IData)(vlTOPp->Character2_WY)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (IData)(vlTOPp->Character2_WY)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->Pixel_RGB = ((IData)(this->__PVT__RGB_reg_trans)
                                            ? 0U : this->__PVT__RGB_reg);
                    }
                } else {
                    this->Pixel_RGB = 0U;
                }
            }
        }
    }
    this->__PVT__main_state_next = this->__PVT__main_state;
    this->Pixel_valid = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->__PVT__main_state_next = 
                        (((((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                            & (0xefU == (IData)(this->__PVT__personal_counter_y))) 
                           & (IData)(this->Pixel_valid)) 
                          & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                          [4U]) ? 0U : 1U);
                    this->Pixel_valid = 1U;
                } else {
                    this->__PVT__main_state_next = 1U;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                this->__PVT__main_state_next = ((((
                                                   (0x13fU 
                                                    == (IData)(this->__PVT__personal_counter_x)) 
                                                   & (0xefU 
                                                      == (IData)(this->__PVT__personal_counter_y))) 
                                                  & (IData)(this->Pixel_valid)) 
                                                 & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                                                 [4U])
                                                 ? 0U
                                                 : 2U);
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & (IData)(vlTOPp->Character2_WX))) 
                       & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                     (0xfffU & ((IData)(0x9fU) 
                                                + (IData)(vlTOPp->Character2_WX))))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (IData)(vlTOPp->Character2_WY)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (IData)(vlTOPp->Character2_WY)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->Pixel_valid = 1U;
                    }
                } else {
                    this->Pixel_valid = 1U;
                }
            }
        }
    }
    this->__PVT__fifo_r_state_counter_next = this->__PVT__fifo_r_state_counter;
    this->__PVT__fifo_r_state_next = this->__PVT__fifo_r_state;
    this->__PVT__valid_pixel_check = 0U;
    this->__PVT__rgb_convert_req = 0U;
    this->__PVT__valid_pixel_check = ((0xfeU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | (((VL_LTES_III(1,32,32, 0U, 
                                                       (VL_EXTENDS_II(32,10, 
                                                                      (0x3ffU 
                                                                       & (IData)(vlTOPp->Character2_WY))) 
                                                        + 
                                                        VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                           & VL_GTES_III(1,32,32, 0xefU, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character2_WY))) 
                                                          + 
                                                          VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                          & VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character2_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       ((IData)(this->__PVT__read_pixel_x) 
                                                                        << 3U))))) 
                                         & VL_GTES_III(1,32,32, 0x13fU, 
                                                       (VL_EXTENDS_II(32,10, 
                                                                      (0x3ffU 
                                                                       & (IData)(vlTOPp->Character2_WX))) 
                                                        + 
                                                        VL_EXTENDS_II(32,9, 
                                                                      ((IData)(this->__PVT__read_pixel_x) 
                                                                       << 3U))))));
    this->__PVT__valid_pixel_check = ((0xfdU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character2_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character2_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character2_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (1U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character2_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (1U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 1U));
    this->__PVT__valid_pixel_check = ((0xfbU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character2_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character2_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character2_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (2U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character2_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (2U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 2U));
    this->__PVT__valid_pixel_check = ((0xf7U & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character2_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character2_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character2_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (3U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character2_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (3U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 3U));
    this->__PVT__valid_pixel_check = ((0xefU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character2_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character2_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character2_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (4U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character2_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (4U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 4U));
    this->__PVT__valid_pixel_check = ((0xdfU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character2_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character2_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character2_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (5U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character2_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (5U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 5U));
    this->__PVT__valid_pixel_check = ((0xbfU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character2_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character2_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character2_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (6U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character2_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (6U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 6U));
    this->__PVT__valid_pixel_check = ((0x7fU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character2_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character2_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character2_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (7U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character2_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (7U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 7U));
    if ((0U == (IData)(this->__PVT__fifo_r_state))) {
        this->__PVT__fifo_r_state_counter_next = 0U;
    } else {
        if ((1U == (IData)(this->__PVT__fifo_r_state))) {
            if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Decompressed_FIFO_r_master) 
                     & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_empty_128)))) {
                    this->__PVT__fifo_r_state_counter_next = 1U;
                    this->__PVT__fifo_r_state_next = 1U;
                } else {
                    this->__PVT__fifo_r_state_counter_next = 0U;
                    this->__PVT__fifo_r_state_next = 1U;
                }
            } else {
                if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    this->__PVT__fifo_r_state_counter_next = 2U;
                    this->__PVT__fifo_r_state_next = 1U;
                } else {
                    if ((2U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((0U == (IData)(this->__PVT__valid_pixel_check))) {
                            this->__PVT__fifo_r_state_counter_next = 0U;
                            this->__PVT__fifo_r_state_next = 1U;
                        } else {
                            this->__PVT__rgb_convert_req = 1U;
                            this->__PVT__fifo_r_state_counter_next = 3U;
                            this->__PVT__fifo_r_state_next = 1U;
                        }
                    } else {
                        if ((3U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            this->__PVT__rgb_convert_req = 1U;
                            if (this->__PVT__rgb_convert_end) {
                                if (((0x31U == (IData)(this->__PVT__read_pixel_x)) 
                                     & (0x13fU == (IData)(this->__PVT__read_pixel_y)))) {
                                    this->__PVT__fifo_r_state_counter_next = 0U;
                                    this->__PVT__fifo_r_state_next = 0U;
                                } else {
                                    this->__PVT__fifo_r_state_counter_next = 0U;
                                    this->__PVT__fifo_r_state_next = 1U;
                                }
                            } else {
                                this->__PVT__fifo_r_state_counter_next = 3U;
                                this->__PVT__fifo_r_state_next = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Decompressed_FIFO_r_master) 
                         & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__fifo_empty_128)))) {
                        this->__PVT__fifo_r_state_counter_next = 1U;
                        this->__PVT__fifo_r_state_next = 2U;
                    } else {
                        this->__PVT__fifo_r_state_counter_next = 0U;
                        this->__PVT__fifo_r_state_next = 2U;
                    }
                } else {
                    if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        this->__PVT__fifo_r_state_counter_next = 2U;
                        this->__PVT__fifo_r_state_next = 2U;
                    } else {
                        if ((2U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            if ((0U == (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__fifo_r_state_counter_next = 0U;
                                this->__PVT__fifo_r_state_next = 2U;
                            } else {
                                this->__PVT__rgb_convert_req = 1U;
                                this->__PVT__fifo_r_state_counter_next = 3U;
                                this->__PVT__fifo_r_state_next = 2U;
                            }
                        } else {
                            if ((3U == (IData)(this->__PVT__fifo_r_state_counter))) {
                                this->__PVT__rgb_convert_req = 1U;
                                if (this->__PVT__rgb_convert_end) {
                                    if (((0x13U == (IData)(this->__PVT__read_pixel_x)) 
                                         & (0xefU == (IData)(this->__PVT__read_pixel_y)))) {
                                        this->__PVT__fifo_r_state_counter_next = 0U;
                                        this->__PVT__fifo_r_state_next = 0U;
                                    } else {
                                        this->__PVT__fifo_r_state_counter_next = 0U;
                                        this->__PVT__fifo_r_state_next = 2U;
                                    }
                                } else {
                                    this->__PVT__fifo_r_state_counter_next = 3U;
                                    this->__PVT__fifo_r_state_next = 2U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    this->__PVT__rgb_convert_end = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U != (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((1U & (~ ((IData)(this->__PVT__valid_pixel_check) 
                                              >> 1U)))) {
                                    this->__PVT__rgb_convert_end = 1U;
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((1U & (~ 
                                                   ((IData)(this->__PVT__valid_pixel_check) 
                                                    >> 2U)))) {
                                            this->__PVT__rgb_convert_end = 1U;
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(this->__PVT__valid_pixel_check) 
                                                         >> 3U)))) {
                                                    this->__PVT__rgb_convert_end = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((1U & (~ ((IData)(this->__PVT__valid_pixel_check) 
                                                  >> 5U)))) {
                                        this->__PVT__rgb_convert_end = 1U;
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(this->__PVT__valid_pixel_check) 
                                                     >> 6U)))) {
                                                this->__PVT__rgb_convert_end = 1U;
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(this->__PVT__valid_pixel_check) 
                                                             >> 7U)))) {
                                                        this->__PVT__rgb_convert_end = 1U;
                                                    }
                                                } else {
                                                    if (this->__PVT__RGB_reg_ready) {
                                                        this->__PVT__rgb_convert_end = 1U;
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
    this->__PVT__rgb_r_state_next = this->__PVT__rgb_r_state;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    this->__PVT__rgb_r_state_next = 
                        ((0U == (IData)(this->__PVT__rgb_r_state_counter))
                          ? 4U : ((1U == (IData)(this->__PVT__rgb_r_state_counter))
                                   ? 4U : ((2U == (IData)(this->__PVT__rgb_r_state_counter))
                                            ? ((2U 
                                                & (IData)(this->__PVT__valid_pixel_check))
                                                ? 4U
                                                : 3U)
                                            : ((3U 
                                                == (IData)(this->__PVT__rgb_r_state_counter))
                                                ? 4U
                                                : (
                                                   (4U 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(this->__PVT__valid_pixel_check))
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))
                                                     ? 4U
                                                     : 
                                                    ((6U 
                                                      == (IData)(this->__PVT__rgb_r_state_counter))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(this->__PVT__valid_pixel_check))
                                                       ? 4U
                                                       : 3U)
                                                      : 4U)))))));
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__rgb_r_state_next = 4U;
                            } else {
                                if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->__PVT__rgb_r_state_next = 4U;
                                } else {
                                    if ((0x40U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->__PVT__rgb_r_state_next = 4U;
                                    } else {
                                        if ((0x80U 
                                             & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->__PVT__rgb_r_state_next = 4U;
                                        }
                                    }
                                }
                            }
                        } else {
                            this->__PVT__rgb_r_state_next 
                                = ((9U == (IData)(this->__PVT__rgb_r_state_counter))
                                    ? 4U : ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))
                                             ? ((0x20U 
                                                 & (IData)(this->__PVT__valid_pixel_check))
                                                 ? 4U
                                                 : 3U)
                                             : ((0xbU 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))
                                                 ? 4U
                                                 : 
                                                ((0xcU 
                                                  == (IData)(this->__PVT__rgb_r_state_counter))
                                                  ? 
                                                 ((0x40U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 4U
                                                   : 3U)
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(this->__PVT__rgb_r_state_counter))
                                                   ? 4U
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(this->__PVT__valid_pixel_check))
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((IData)(this->__PVT__RGB_reg_ready)
                                                     ? 3U
                                                     : 4U)))))));
                        }
                    }
                }
            }
        }
    }
    this->Lookup_ena = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            this->Lookup_ena = 1U;
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->Lookup_ena = 1U;
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->Lookup_ena = 1U;
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    this->Lookup_ena = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->Lookup_ena = 1U;
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->Lookup_ena = 1U;
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                this->Lookup_ena = 1U;
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        this->Lookup_ena = 1U;
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
    this->Lookup_pixel = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            this->Lookup_pixel = (0xffU 
                                                  & (IData)(this->__PVT__decomp_pixel_reg));
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->Lookup_pixel 
                                        = (0xffU & (IData)(
                                                           (this->__PVT__decomp_pixel_reg 
                                                            >> 8U)));
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->Lookup_pixel 
                                                = (0xffU 
                                                   & (IData)(
                                                             (this->__PVT__decomp_pixel_reg 
                                                              >> 0x10U)));
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    this->Lookup_pixel 
                                                        = 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (this->__PVT__decomp_pixel_reg 
                                                                    >> 0x18U)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->Lookup_pixel 
                                    = (0xffU & (IData)(
                                                       (this->__PVT__decomp_pixel_reg 
                                                        >> 0x20U)));
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->Lookup_pixel 
                                            = (0xffU 
                                               & (IData)(
                                                         (this->__PVT__decomp_pixel_reg 
                                                          >> 0x28U)));
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                this->Lookup_pixel 
                                                    = 
                                                    (0xffU 
                                                     & (IData)(
                                                               (this->__PVT__decomp_pixel_reg 
                                                                >> 0x30U)));
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        this->Lookup_pixel 
                                                            = 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (this->__PVT__decomp_pixel_reg 
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
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_settle__TOP__PPU_TOP__DOT__u_ch3__15(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_settle__TOP__PPU_TOP__DOT__u_ch3__15\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__RGB_reg_w_ena = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            if (vlTOPp->PPU_TOP__DOT__Req_end
                                [4U]) {
                                this->__PVT__RGB_reg_w_ena = 1U;
                            }
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    if (vlTOPp->PPU_TOP__DOT__Req_end
                                        [4U]) {
                                        this->__PVT__RGB_reg_w_ena = 1U;
                                    }
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            if (vlTOPp->PPU_TOP__DOT__Req_end
                                                [4U]) {
                                                this->__PVT__RGB_reg_w_ena = 1U;
                                            }
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    if (
                                                        vlTOPp->PPU_TOP__DOT__Req_end
                                                        [4U]) {
                                                        this->__PVT__RGB_reg_w_ena = 1U;
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
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                if (vlTOPp->PPU_TOP__DOT__Req_end
                                    [4U]) {
                                    this->__PVT__RGB_reg_w_ena = 1U;
                                }
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        if (vlTOPp->PPU_TOP__DOT__Req_end
                                            [4U]) {
                                            this->__PVT__RGB_reg_w_ena = 1U;
                                        }
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                if (
                                                    vlTOPp->PPU_TOP__DOT__Req_end
                                                    [4U]) {
                                                    this->__PVT__RGB_reg_w_ena = 1U;
                                                }
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        if (
                                                            vlTOPp->PPU_TOP__DOT__Req_end
                                                            [4U]) {
                                                            this->__PVT__RGB_reg_w_ena = 1U;
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
    }
    this->__PVT__rgb_r_state_counter_next = this->__PVT__rgb_r_state_counter;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    this->__PVT__rgb_r_state_counter_next 
                        = ((0U == (IData)(this->__PVT__rgb_r_state_counter))
                            ? ((1U & (IData)(this->__PVT__valid_pixel_check))
                                ? (vlTOPp->PPU_TOP__DOT__Req_end
                                   [4U] ? 1U : 0U) : 
                               ((2U & (IData)(this->__PVT__valid_pixel_check))
                                 ? 2U : ((4U & (IData)(this->__PVT__valid_pixel_check))
                                          ? 4U : ((8U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 6U
                                                   : 8U))))
                            : ((1U == (IData)(this->__PVT__rgb_r_state_counter))
                                ? ((IData)(this->__PVT__RGB_reg_ready)
                                    ? 2U : 1U) : ((2U 
                                                   == (IData)(this->__PVT__rgb_r_state_counter))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(this->__PVT__valid_pixel_check))
                                                    ? 
                                                   (vlTOPp->PPU_TOP__DOT__Req_end
                                                    [4U]
                                                     ? 3U
                                                     : 2U)
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((IData)(this->__PVT__RGB_reg_ready)
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((4U 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(this->__PVT__valid_pixel_check))
                                                      ? 
                                                     (vlTOPp->PPU_TOP__DOT__Req_end
                                                      [4U]
                                                       ? 5U
                                                       : 4U)
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == (IData)(this->__PVT__rgb_r_state_counter))
                                                      ? 
                                                     ((IData)(this->__PVT__RGB_reg_ready)
                                                       ? 6U
                                                       : 5U)
                                                      : 
                                                     ((6U 
                                                       == (IData)(this->__PVT__rgb_r_state_counter))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(this->__PVT__valid_pixel_check))
                                                        ? 
                                                       (vlTOPp->PPU_TOP__DOT__Req_end
                                                        [4U]
                                                         ? 7U
                                                         : 6U)
                                                        : 0U)
                                                       : 
                                                      ((IData)(this->__PVT__RGB_reg_ready)
                                                        ? 8U
                                                        : 7U))))))));
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__rgb_r_state_counter_next 
                                    = (vlTOPp->PPU_TOP__DOT__Req_end
                                       [4U] ? 9U : 8U);
                            } else {
                                if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->__PVT__rgb_r_state_counter_next = 0xaU;
                                } else {
                                    if ((0x40U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->__PVT__rgb_r_state_counter_next = 0xcU;
                                    } else {
                                        if ((0x80U 
                                             & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->__PVT__rgb_r_state_counter_next = 0xeU;
                                        }
                                    }
                                }
                            }
                        } else {
                            this->__PVT__rgb_r_state_counter_next 
                                = ((9U == (IData)(this->__PVT__rgb_r_state_counter))
                                    ? ((IData)(this->__PVT__RGB_reg_ready)
                                        ? 0xaU : 9U)
                                    : ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))
                                        ? ((0x20U & (IData)(this->__PVT__valid_pixel_check))
                                            ? (vlTOPp->PPU_TOP__DOT__Req_end
                                               [4U]
                                                ? 0xbU
                                                : 0xaU)
                                            : 0U) : 
                                       ((0xbU == (IData)(this->__PVT__rgb_r_state_counter))
                                         ? ((IData)(this->__PVT__RGB_reg_ready)
                                             ? 0xcU
                                             : 0xbU)
                                         : ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))
                                             ? ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))
                                                 ? 
                                                (vlTOPp->PPU_TOP__DOT__Req_end
                                                 [4U]
                                                  ? 0xdU
                                                  : 0xcU)
                                                 : 0U)
                                             : ((0xdU 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))
                                                 ? 
                                                ((IData)(this->__PVT__RGB_reg_ready)
                                                  ? 0xeU
                                                  : 0xdU)
                                                 : 
                                                ((0xeU 
                                                  == (IData)(this->__PVT__rgb_r_state_counter))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 
                                                  (vlTOPp->PPU_TOP__DOT__Req_end
                                                   [4U]
                                                    ? 0xfU
                                                    : 0xeU)
                                                   : 0U)
                                                  : 
                                                 ((IData)(this->__PVT__RGB_reg_ready)
                                                   ? 0U
                                                   : 0xfU)))))));
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_sequent__TOP__PPU_TOP__DOT__u_ch3__25(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_sequent__TOP__PPU_TOP__DOT__u_ch3__25\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__personal_counter_y = this->__PVT__personal_counter_y;
    this->__Vdly__personal_counter_x = this->__PVT__personal_counter_x;
    this->__Vdly__main_state = this->__PVT__main_state;
    this->__Vdly__main_state_counter = this->__PVT__main_state_counter;
    this->__Vdly__rgb_r_state = this->__PVT__rgb_r_state;
    this->__Vdly__read_pixel_y = this->__PVT__read_pixel_y;
    this->__Vdly__read_pixel_x = this->__PVT__read_pixel_x;
    this->__Vdly__fifo_r_state_counter = this->__PVT__fifo_r_state_counter;
    this->__Vdly__fifo_r_state = this->__PVT__fifo_r_state;
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[4U]))) {
            this->__PVT__RGB_reg_trans = 0U;
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[4U])) {
                this->__PVT__RGB_reg_trans = 1U;
            }
        }
    } else {
        this->__PVT__RGB_reg_trans = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[4U]))) {
            this->__PVT__RGB_reg = vlTOPp->PPU_TOP__DOT__Req_RGB
                [4U];
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[4U])) {
                this->__PVT__RGB_reg = 0U;
            }
        }
    } else {
        this->__PVT__RGB_reg = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[4U]))) {
            this->__PVT__RGB_reg_valid = 1U;
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[4U])) {
                this->__PVT__RGB_reg_valid = 1U;
            }
        }
        if (this->__PVT__RGB_reg_ready) {
            this->__PVT__RGB_reg_valid = 0U;
        }
    } else {
        this->__PVT__RGB_reg_valid = 0U;
    }
    if (vlTOPp->resetn) {
        this->__Vdly__main_state_counter = this->__PVT__main_state_counter_next;
        this->__Vdly__main_state = this->__PVT__main_state_next;
        if ((0U == (IData)(this->__PVT__main_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Character3_z)))) {
                this->__Vdly__main_state_counter = 0U;
                this->__Vdly__personal_counter_x = 0U;
                this->__Vdly__personal_counter_y = 0U;
                this->__Vdly__main_state = 2U;
            } else {
                this->__Vdly__main_state = 0U;
            }
        } else {
            if ((1U == (IData)(this->__PVT__main_state))) {
                if ((0U == (IData)(this->__PVT__main_state_counter))) {
                    if (((IData)(this->Pixel_valid) 
                         & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                         [5U])) {
                        if (((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                             & (0xefU == (IData)(this->__PVT__personal_counter_y)))) {
                            this->__Vdly__main_state = 0U;
                            this->__Vdly__personal_counter_x = 0U;
                            this->__Vdly__personal_counter_y = 0U;
                        } else {
                            if ((0x13fU == (IData)(this->__PVT__personal_counter_x))) {
                                this->__Vdly__personal_counter_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_y)));
                                this->__Vdly__personal_counter_x = 0U;
                            } else {
                                this->__Vdly__personal_counter_x 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_x)));
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(this->__PVT__main_state))) {
                    if (((IData)(this->Pixel_valid) 
                         & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                         [5U])) {
                        if (((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                             & (0xefU == (IData)(this->__PVT__personal_counter_y)))) {
                            this->__Vdly__main_state = 0U;
                            this->__Vdly__personal_counter_x = 0U;
                            this->__Vdly__personal_counter_y = 0U;
                        } else {
                            if ((0x13fU == (IData)(this->__PVT__personal_counter_x))) {
                                this->__Vdly__personal_counter_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_y)));
                                this->__Vdly__personal_counter_x = 0U;
                            } else {
                                this->__Vdly__personal_counter_x 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_x)));
                            }
                        }
                    }
                }
            }
        }
    } else {
        this->__Vdly__main_state = 0U;
        this->__Vdly__main_state_counter = 0U;
        this->__Vdly__personal_counter_x = 0U;
        this->__Vdly__personal_counter_y = 0U;
    }
    if (vlTOPp->resetn) {
        this->__Vdly__fifo_r_state = this->__PVT__fifo_r_state_next;
        this->__Vdly__fifo_r_state_counter = this->__PVT__fifo_r_state_counter_next;
        this->__PVT__rgb_r_state_counter = this->__PVT__rgb_r_state_counter_next;
        this->__Vdly__rgb_r_state = this->__PVT__rgb_r_state_next;
        if ((0U == (IData)(this->__PVT__fifo_r_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Character3_z)))) {
                this->__Vdly__fifo_r_state = 2U;
                this->__Vdly__read_pixel_x = 0x3fU;
                this->__Vdly__read_pixel_y = 0x1ffU;
                this->__Vdly__fifo_r_state_counter = 0U;
            } else {
                this->__Vdly__fifo_r_state = 0U;
            }
        } else {
            if ((1U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U != (IData)(this->__PVT__fifo_r_state_counter))) {
                    if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((0x31U == (IData)(this->__PVT__read_pixel_x))) {
                            this->__Vdly__read_pixel_y 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(this->__PVT__read_pixel_y)));
                            this->__Vdly__read_pixel_x = 0U;
                        } else {
                            if (((0x3fU == (IData)(this->__PVT__read_pixel_x)) 
                                 & (0x1ffU == (IData)(this->__PVT__read_pixel_y)))) {
                                this->__Vdly__read_pixel_x = 0U;
                                this->__Vdly__read_pixel_y = 0U;
                            } else {
                                this->__Vdly__read_pixel_x 
                                    = (0x3fU & ((IData)(1U) 
                                                + (IData)(this->__PVT__read_pixel_x)));
                            }
                        }
                        this->__PVT__decomp_pixel_reg 
                            = vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Decompressed_FIFO_data;
                    }
                }
            } else {
                if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                    if ((0U != (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            if ((0x13U == (IData)(this->__PVT__read_pixel_x))) {
                                this->__Vdly__read_pixel_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__read_pixel_y)));
                                this->__Vdly__read_pixel_x = 0U;
                            } else {
                                if (((0x3fU == (IData)(this->__PVT__read_pixel_x)) 
                                     & (0x1ffU == (IData)(this->__PVT__read_pixel_y)))) {
                                    this->__Vdly__read_pixel_x = 0U;
                                    this->__Vdly__read_pixel_y = 0U;
                                } else {
                                    this->__Vdly__read_pixel_x 
                                        = (0x3fU & 
                                           ((IData)(1U) 
                                            + (IData)(this->__PVT__read_pixel_x)));
                                }
                            }
                            this->__PVT__decomp_pixel_reg 
                                = vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Decompressed_FIFO_data;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(this->__PVT__rgb_r_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Character3_z)))) {
                this->__Vdly__rgb_r_state = 3U;
                this->__PVT__rgb_r_state_counter = 0U;
            } else {
                this->__Vdly__rgb_r_state = 0U;
            }
        } else {
            if ((3U == (IData)(this->__PVT__rgb_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state))) {
                    this->__Vdly__rgb_r_state = 0U;
                    this->__PVT__rgb_r_state_counter = 0U;
                } else {
                    if (this->__PVT__rgb_convert_req) {
                        this->__Vdly__rgb_r_state = 4U;
                        this->__PVT__rgb_r_state_counter = 0U;
                    } else {
                        this->__Vdly__rgb_r_state = 3U;
                    }
                }
            }
        }
    } else {
        this->__Vdly__rgb_r_state = 0U;
        this->__Vdly__fifo_r_state_counter = 0U;
        this->__PVT__decomp_pixel_reg = 0ULL;
        this->__Vdly__fifo_r_state = 0U;
        this->__PVT__rgb_r_state_counter = 0U;
        this->__Vdly__read_pixel_x = 0x3fU;
        this->__Vdly__read_pixel_y = 0x1ffU;
    }
    this->__PVT__personal_counter_x = this->__Vdly__personal_counter_x;
    this->__PVT__personal_counter_y = this->__Vdly__personal_counter_y;
    this->__PVT__main_state_counter = this->__Vdly__main_state_counter;
    this->__PVT__main_state = this->__Vdly__main_state;
    this->__PVT__rgb_r_state = this->__Vdly__rgb_r_state;
    this->__PVT__read_pixel_x = this->__Vdly__read_pixel_x;
    this->__PVT__read_pixel_y = this->__Vdly__read_pixel_y;
    this->__PVT__fifo_r_state = this->__Vdly__fifo_r_state;
    this->__PVT__fifo_r_state_counter = this->__Vdly__fifo_r_state_counter;
    this->__PVT__main_state_counter_next = this->__PVT__main_state_counter;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                this->__PVT__main_state_counter_next = 0U;
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                this->__PVT__main_state_counter_next = 0U;
            }
        }
    }
    this->Decomp_fifo_dequeue = 0U;
    if ((0U != (IData)(this->__PVT__fifo_r_state))) {
        if ((1U == (IData)(this->__PVT__fifo_r_state))) {
            if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Decompressed_FIFO_r_master) 
                     & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_empty_128)))) {
                    this->Decomp_fifo_dequeue = 1U;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Decompressed_FIFO_r_master) 
                         & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_empty_128)))) {
                        this->Decomp_fifo_dequeue = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_combo__TOP__PPU_TOP__DOT__u_ch3__35(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_combo__TOP__PPU_TOP__DOT__u_ch3__35\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__RGB_reg_ready = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->__PVT__RGB_reg_ready = vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                        [5U];
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & (IData)(vlTOPp->Character3_WX))) 
                       & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                     (0xfffU & ((IData)(0x9fU) 
                                                + (IData)(vlTOPp->Character3_WX))))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (IData)(vlTOPp->Character3_WY)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (IData)(vlTOPp->Character3_WY)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->__PVT__RGB_reg_ready 
                            = vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                            [5U];
                    }
                }
            }
        }
    }
    this->Pixel_is_trans = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->Pixel_is_trans = this->__PVT__RGB_reg_trans;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & (IData)(vlTOPp->Character3_WX))) 
                       & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                     (0xfffU & ((IData)(0x9fU) 
                                                + (IData)(vlTOPp->Character3_WX))))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (IData)(vlTOPp->Character3_WY)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (IData)(vlTOPp->Character3_WY)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->Pixel_is_trans = this->__PVT__RGB_reg_trans;
                    }
                } else {
                    this->Pixel_is_trans = 1U;
                }
            }
        }
    }
    this->Pixel_RGB = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->Pixel_RGB = ((IData)(this->__PVT__RGB_reg_trans)
                                        ? 0U : this->__PVT__RGB_reg);
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & (IData)(vlTOPp->Character3_WX))) 
                       & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                     (0xfffU & ((IData)(0x9fU) 
                                                + (IData)(vlTOPp->Character3_WX))))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (IData)(vlTOPp->Character3_WY)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (IData)(vlTOPp->Character3_WY)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->Pixel_RGB = ((IData)(this->__PVT__RGB_reg_trans)
                                            ? 0U : this->__PVT__RGB_reg);
                    }
                } else {
                    this->Pixel_RGB = 0U;
                }
            }
        }
    }
    this->__PVT__main_state_next = this->__PVT__main_state;
    this->Pixel_valid = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->__PVT__main_state_next = 
                        (((((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                            & (0xefU == (IData)(this->__PVT__personal_counter_y))) 
                           & (IData)(this->Pixel_valid)) 
                          & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                          [5U]) ? 0U : 1U);
                    this->Pixel_valid = 1U;
                } else {
                    this->__PVT__main_state_next = 1U;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                this->__PVT__main_state_next = ((((
                                                   (0x13fU 
                                                    == (IData)(this->__PVT__personal_counter_x)) 
                                                   & (0xefU 
                                                      == (IData)(this->__PVT__personal_counter_y))) 
                                                  & (IData)(this->Pixel_valid)) 
                                                 & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                                                 [5U])
                                                 ? 0U
                                                 : 2U);
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & (IData)(vlTOPp->Character3_WX))) 
                       & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                     (0xfffU & ((IData)(0x9fU) 
                                                + (IData)(vlTOPp->Character3_WX))))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (IData)(vlTOPp->Character3_WY)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (IData)(vlTOPp->Character3_WY)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->Pixel_valid = 1U;
                    }
                } else {
                    this->Pixel_valid = 1U;
                }
            }
        }
    }
    this->__PVT__fifo_r_state_counter_next = this->__PVT__fifo_r_state_counter;
    this->__PVT__fifo_r_state_next = this->__PVT__fifo_r_state;
    this->__PVT__valid_pixel_check = 0U;
    this->__PVT__rgb_convert_req = 0U;
    this->__PVT__valid_pixel_check = ((0xfeU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | (((VL_LTES_III(1,32,32, 0U, 
                                                       (VL_EXTENDS_II(32,10, 
                                                                      (0x3ffU 
                                                                       & (IData)(vlTOPp->Character3_WY))) 
                                                        + 
                                                        VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                           & VL_GTES_III(1,32,32, 0xefU, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character3_WY))) 
                                                          + 
                                                          VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                          & VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character3_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       ((IData)(this->__PVT__read_pixel_x) 
                                                                        << 3U))))) 
                                         & VL_GTES_III(1,32,32, 0x13fU, 
                                                       (VL_EXTENDS_II(32,10, 
                                                                      (0x3ffU 
                                                                       & (IData)(vlTOPp->Character3_WX))) 
                                                        + 
                                                        VL_EXTENDS_II(32,9, 
                                                                      ((IData)(this->__PVT__read_pixel_x) 
                                                                       << 3U))))));
    this->__PVT__valid_pixel_check = ((0xfdU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character3_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character3_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character3_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (1U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character3_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (1U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 1U));
    this->__PVT__valid_pixel_check = ((0xfbU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character3_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character3_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character3_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (2U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character3_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (2U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 2U));
    this->__PVT__valid_pixel_check = ((0xf7U & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character3_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character3_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character3_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (3U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character3_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (3U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 3U));
    this->__PVT__valid_pixel_check = ((0xefU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character3_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character3_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character3_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (4U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character3_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (4U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 4U));
    this->__PVT__valid_pixel_check = ((0xdfU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character3_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character3_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character3_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (5U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character3_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (5U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 5U));
    this->__PVT__valid_pixel_check = ((0xbfU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character3_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character3_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character3_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (6U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character3_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (6U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 6U));
    this->__PVT__valid_pixel_check = ((0x7fU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character3_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character3_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character3_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (7U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character3_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (7U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 7U));
    if ((0U == (IData)(this->__PVT__fifo_r_state))) {
        this->__PVT__fifo_r_state_counter_next = 0U;
    } else {
        if ((1U == (IData)(this->__PVT__fifo_r_state))) {
            if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Decompressed_FIFO_r_master) 
                     & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_empty_128)))) {
                    this->__PVT__fifo_r_state_counter_next = 1U;
                    this->__PVT__fifo_r_state_next = 1U;
                } else {
                    this->__PVT__fifo_r_state_counter_next = 0U;
                    this->__PVT__fifo_r_state_next = 1U;
                }
            } else {
                if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    this->__PVT__fifo_r_state_counter_next = 2U;
                    this->__PVT__fifo_r_state_next = 1U;
                } else {
                    if ((2U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((0U == (IData)(this->__PVT__valid_pixel_check))) {
                            this->__PVT__fifo_r_state_counter_next = 0U;
                            this->__PVT__fifo_r_state_next = 1U;
                        } else {
                            this->__PVT__rgb_convert_req = 1U;
                            this->__PVT__fifo_r_state_counter_next = 3U;
                            this->__PVT__fifo_r_state_next = 1U;
                        }
                    } else {
                        if ((3U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            this->__PVT__rgb_convert_req = 1U;
                            if (this->__PVT__rgb_convert_end) {
                                if (((0x31U == (IData)(this->__PVT__read_pixel_x)) 
                                     & (0x13fU == (IData)(this->__PVT__read_pixel_y)))) {
                                    this->__PVT__fifo_r_state_counter_next = 0U;
                                    this->__PVT__fifo_r_state_next = 0U;
                                } else {
                                    this->__PVT__fifo_r_state_counter_next = 0U;
                                    this->__PVT__fifo_r_state_next = 1U;
                                }
                            } else {
                                this->__PVT__fifo_r_state_counter_next = 3U;
                                this->__PVT__fifo_r_state_next = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Decompressed_FIFO_r_master) 
                         & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__fifo_empty_128)))) {
                        this->__PVT__fifo_r_state_counter_next = 1U;
                        this->__PVT__fifo_r_state_next = 2U;
                    } else {
                        this->__PVT__fifo_r_state_counter_next = 0U;
                        this->__PVT__fifo_r_state_next = 2U;
                    }
                } else {
                    if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        this->__PVT__fifo_r_state_counter_next = 2U;
                        this->__PVT__fifo_r_state_next = 2U;
                    } else {
                        if ((2U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            if ((0U == (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__fifo_r_state_counter_next = 0U;
                                this->__PVT__fifo_r_state_next = 2U;
                            } else {
                                this->__PVT__rgb_convert_req = 1U;
                                this->__PVT__fifo_r_state_counter_next = 3U;
                                this->__PVT__fifo_r_state_next = 2U;
                            }
                        } else {
                            if ((3U == (IData)(this->__PVT__fifo_r_state_counter))) {
                                this->__PVT__rgb_convert_req = 1U;
                                if (this->__PVT__rgb_convert_end) {
                                    if (((0x13U == (IData)(this->__PVT__read_pixel_x)) 
                                         & (0xefU == (IData)(this->__PVT__read_pixel_y)))) {
                                        this->__PVT__fifo_r_state_counter_next = 0U;
                                        this->__PVT__fifo_r_state_next = 0U;
                                    } else {
                                        this->__PVT__fifo_r_state_counter_next = 0U;
                                        this->__PVT__fifo_r_state_next = 2U;
                                    }
                                } else {
                                    this->__PVT__fifo_r_state_counter_next = 3U;
                                    this->__PVT__fifo_r_state_next = 2U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    this->__PVT__rgb_convert_end = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U != (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((1U & (~ ((IData)(this->__PVT__valid_pixel_check) 
                                              >> 1U)))) {
                                    this->__PVT__rgb_convert_end = 1U;
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((1U & (~ 
                                                   ((IData)(this->__PVT__valid_pixel_check) 
                                                    >> 2U)))) {
                                            this->__PVT__rgb_convert_end = 1U;
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(this->__PVT__valid_pixel_check) 
                                                         >> 3U)))) {
                                                    this->__PVT__rgb_convert_end = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((1U & (~ ((IData)(this->__PVT__valid_pixel_check) 
                                                  >> 5U)))) {
                                        this->__PVT__rgb_convert_end = 1U;
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(this->__PVT__valid_pixel_check) 
                                                     >> 6U)))) {
                                                this->__PVT__rgb_convert_end = 1U;
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(this->__PVT__valid_pixel_check) 
                                                             >> 7U)))) {
                                                        this->__PVT__rgb_convert_end = 1U;
                                                    }
                                                } else {
                                                    if (this->__PVT__RGB_reg_ready) {
                                                        this->__PVT__rgb_convert_end = 1U;
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
    this->__PVT__rgb_r_state_next = this->__PVT__rgb_r_state;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    this->__PVT__rgb_r_state_next = 
                        ((0U == (IData)(this->__PVT__rgb_r_state_counter))
                          ? 4U : ((1U == (IData)(this->__PVT__rgb_r_state_counter))
                                   ? 4U : ((2U == (IData)(this->__PVT__rgb_r_state_counter))
                                            ? ((2U 
                                                & (IData)(this->__PVT__valid_pixel_check))
                                                ? 4U
                                                : 3U)
                                            : ((3U 
                                                == (IData)(this->__PVT__rgb_r_state_counter))
                                                ? 4U
                                                : (
                                                   (4U 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(this->__PVT__valid_pixel_check))
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))
                                                     ? 4U
                                                     : 
                                                    ((6U 
                                                      == (IData)(this->__PVT__rgb_r_state_counter))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(this->__PVT__valid_pixel_check))
                                                       ? 4U
                                                       : 3U)
                                                      : 4U)))))));
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__rgb_r_state_next = 4U;
                            } else {
                                if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->__PVT__rgb_r_state_next = 4U;
                                } else {
                                    if ((0x40U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->__PVT__rgb_r_state_next = 4U;
                                    } else {
                                        if ((0x80U 
                                             & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->__PVT__rgb_r_state_next = 4U;
                                        }
                                    }
                                }
                            }
                        } else {
                            this->__PVT__rgb_r_state_next 
                                = ((9U == (IData)(this->__PVT__rgb_r_state_counter))
                                    ? 4U : ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))
                                             ? ((0x20U 
                                                 & (IData)(this->__PVT__valid_pixel_check))
                                                 ? 4U
                                                 : 3U)
                                             : ((0xbU 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))
                                                 ? 4U
                                                 : 
                                                ((0xcU 
                                                  == (IData)(this->__PVT__rgb_r_state_counter))
                                                  ? 
                                                 ((0x40U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 4U
                                                   : 3U)
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(this->__PVT__rgb_r_state_counter))
                                                   ? 4U
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(this->__PVT__valid_pixel_check))
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((IData)(this->__PVT__RGB_reg_ready)
                                                     ? 3U
                                                     : 4U)))))));
                        }
                    }
                }
            }
        }
    }
    this->Lookup_ena = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            this->Lookup_ena = 1U;
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->Lookup_ena = 1U;
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->Lookup_ena = 1U;
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    this->Lookup_ena = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->Lookup_ena = 1U;
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->Lookup_ena = 1U;
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                this->Lookup_ena = 1U;
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        this->Lookup_ena = 1U;
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
    this->Lookup_pixel = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            this->Lookup_pixel = (0xffU 
                                                  & (IData)(this->__PVT__decomp_pixel_reg));
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->Lookup_pixel 
                                        = (0xffU & (IData)(
                                                           (this->__PVT__decomp_pixel_reg 
                                                            >> 8U)));
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->Lookup_pixel 
                                                = (0xffU 
                                                   & (IData)(
                                                             (this->__PVT__decomp_pixel_reg 
                                                              >> 0x10U)));
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    this->Lookup_pixel 
                                                        = 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (this->__PVT__decomp_pixel_reg 
                                                                    >> 0x18U)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->Lookup_pixel 
                                    = (0xffU & (IData)(
                                                       (this->__PVT__decomp_pixel_reg 
                                                        >> 0x20U)));
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->Lookup_pixel 
                                            = (0xffU 
                                               & (IData)(
                                                         (this->__PVT__decomp_pixel_reg 
                                                          >> 0x28U)));
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                this->Lookup_pixel 
                                                    = 
                                                    (0xffU 
                                                     & (IData)(
                                                               (this->__PVT__decomp_pixel_reg 
                                                                >> 0x30U)));
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        this->Lookup_pixel 
                                                            = 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (this->__PVT__decomp_pixel_reg 
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
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_settle__TOP__PPU_TOP__DOT__u_ch4__16(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_settle__TOP__PPU_TOP__DOT__u_ch4__16\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__RGB_reg_w_ena = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            if (vlTOPp->PPU_TOP__DOT__Req_end
                                [5U]) {
                                this->__PVT__RGB_reg_w_ena = 1U;
                            }
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    if (vlTOPp->PPU_TOP__DOT__Req_end
                                        [5U]) {
                                        this->__PVT__RGB_reg_w_ena = 1U;
                                    }
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            if (vlTOPp->PPU_TOP__DOT__Req_end
                                                [5U]) {
                                                this->__PVT__RGB_reg_w_ena = 1U;
                                            }
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    if (
                                                        vlTOPp->PPU_TOP__DOT__Req_end
                                                        [5U]) {
                                                        this->__PVT__RGB_reg_w_ena = 1U;
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
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                if (vlTOPp->PPU_TOP__DOT__Req_end
                                    [5U]) {
                                    this->__PVT__RGB_reg_w_ena = 1U;
                                }
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        if (vlTOPp->PPU_TOP__DOT__Req_end
                                            [5U]) {
                                            this->__PVT__RGB_reg_w_ena = 1U;
                                        }
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                if (
                                                    vlTOPp->PPU_TOP__DOT__Req_end
                                                    [5U]) {
                                                    this->__PVT__RGB_reg_w_ena = 1U;
                                                }
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        if (
                                                            vlTOPp->PPU_TOP__DOT__Req_end
                                                            [5U]) {
                                                            this->__PVT__RGB_reg_w_ena = 1U;
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
    }
    this->__PVT__rgb_r_state_counter_next = this->__PVT__rgb_r_state_counter;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    this->__PVT__rgb_r_state_counter_next 
                        = ((0U == (IData)(this->__PVT__rgb_r_state_counter))
                            ? ((1U & (IData)(this->__PVT__valid_pixel_check))
                                ? (vlTOPp->PPU_TOP__DOT__Req_end
                                   [5U] ? 1U : 0U) : 
                               ((2U & (IData)(this->__PVT__valid_pixel_check))
                                 ? 2U : ((4U & (IData)(this->__PVT__valid_pixel_check))
                                          ? 4U : ((8U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 6U
                                                   : 8U))))
                            : ((1U == (IData)(this->__PVT__rgb_r_state_counter))
                                ? ((IData)(this->__PVT__RGB_reg_ready)
                                    ? 2U : 1U) : ((2U 
                                                   == (IData)(this->__PVT__rgb_r_state_counter))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(this->__PVT__valid_pixel_check))
                                                    ? 
                                                   (vlTOPp->PPU_TOP__DOT__Req_end
                                                    [5U]
                                                     ? 3U
                                                     : 2U)
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((IData)(this->__PVT__RGB_reg_ready)
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((4U 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(this->__PVT__valid_pixel_check))
                                                      ? 
                                                     (vlTOPp->PPU_TOP__DOT__Req_end
                                                      [5U]
                                                       ? 5U
                                                       : 4U)
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == (IData)(this->__PVT__rgb_r_state_counter))
                                                      ? 
                                                     ((IData)(this->__PVT__RGB_reg_ready)
                                                       ? 6U
                                                       : 5U)
                                                      : 
                                                     ((6U 
                                                       == (IData)(this->__PVT__rgb_r_state_counter))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(this->__PVT__valid_pixel_check))
                                                        ? 
                                                       (vlTOPp->PPU_TOP__DOT__Req_end
                                                        [5U]
                                                         ? 7U
                                                         : 6U)
                                                        : 0U)
                                                       : 
                                                      ((IData)(this->__PVT__RGB_reg_ready)
                                                        ? 8U
                                                        : 7U))))))));
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__rgb_r_state_counter_next 
                                    = (vlTOPp->PPU_TOP__DOT__Req_end
                                       [5U] ? 9U : 8U);
                            } else {
                                if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->__PVT__rgb_r_state_counter_next = 0xaU;
                                } else {
                                    if ((0x40U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->__PVT__rgb_r_state_counter_next = 0xcU;
                                    } else {
                                        if ((0x80U 
                                             & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->__PVT__rgb_r_state_counter_next = 0xeU;
                                        }
                                    }
                                }
                            }
                        } else {
                            this->__PVT__rgb_r_state_counter_next 
                                = ((9U == (IData)(this->__PVT__rgb_r_state_counter))
                                    ? ((IData)(this->__PVT__RGB_reg_ready)
                                        ? 0xaU : 9U)
                                    : ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))
                                        ? ((0x20U & (IData)(this->__PVT__valid_pixel_check))
                                            ? (vlTOPp->PPU_TOP__DOT__Req_end
                                               [5U]
                                                ? 0xbU
                                                : 0xaU)
                                            : 0U) : 
                                       ((0xbU == (IData)(this->__PVT__rgb_r_state_counter))
                                         ? ((IData)(this->__PVT__RGB_reg_ready)
                                             ? 0xcU
                                             : 0xbU)
                                         : ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))
                                             ? ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))
                                                 ? 
                                                (vlTOPp->PPU_TOP__DOT__Req_end
                                                 [5U]
                                                  ? 0xdU
                                                  : 0xcU)
                                                 : 0U)
                                             : ((0xdU 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))
                                                 ? 
                                                ((IData)(this->__PVT__RGB_reg_ready)
                                                  ? 0xeU
                                                  : 0xdU)
                                                 : 
                                                ((0xeU 
                                                  == (IData)(this->__PVT__rgb_r_state_counter))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 
                                                  (vlTOPp->PPU_TOP__DOT__Req_end
                                                   [5U]
                                                    ? 0xfU
                                                    : 0xeU)
                                                   : 0U)
                                                  : 
                                                 ((IData)(this->__PVT__RGB_reg_ready)
                                                   ? 0U
                                                   : 0xfU)))))));
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_sequent__TOP__PPU_TOP__DOT__u_ch4__26(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_sequent__TOP__PPU_TOP__DOT__u_ch4__26\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__personal_counter_y = this->__PVT__personal_counter_y;
    this->__Vdly__personal_counter_x = this->__PVT__personal_counter_x;
    this->__Vdly__main_state = this->__PVT__main_state;
    this->__Vdly__main_state_counter = this->__PVT__main_state_counter;
    this->__Vdly__rgb_r_state = this->__PVT__rgb_r_state;
    this->__Vdly__read_pixel_y = this->__PVT__read_pixel_y;
    this->__Vdly__read_pixel_x = this->__PVT__read_pixel_x;
    this->__Vdly__fifo_r_state_counter = this->__PVT__fifo_r_state_counter;
    this->__Vdly__fifo_r_state = this->__PVT__fifo_r_state;
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[5U]))) {
            this->__PVT__RGB_reg_trans = 0U;
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[5U])) {
                this->__PVT__RGB_reg_trans = 1U;
            }
        }
    } else {
        this->__PVT__RGB_reg_trans = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[5U]))) {
            this->__PVT__RGB_reg = vlTOPp->PPU_TOP__DOT__Req_RGB
                [5U];
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[5U])) {
                this->__PVT__RGB_reg = 0U;
            }
        }
    } else {
        this->__PVT__RGB_reg = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[5U]))) {
            this->__PVT__RGB_reg_valid = 1U;
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[5U])) {
                this->__PVT__RGB_reg_valid = 1U;
            }
        }
        if (this->__PVT__RGB_reg_ready) {
            this->__PVT__RGB_reg_valid = 0U;
        }
    } else {
        this->__PVT__RGB_reg_valid = 0U;
    }
    if (vlTOPp->resetn) {
        this->__Vdly__main_state_counter = this->__PVT__main_state_counter_next;
        this->__Vdly__main_state = this->__PVT__main_state_next;
        if ((0U == (IData)(this->__PVT__main_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Character4_z)))) {
                this->__Vdly__main_state_counter = 0U;
                this->__Vdly__personal_counter_x = 0U;
                this->__Vdly__personal_counter_y = 0U;
                this->__Vdly__main_state = 2U;
            } else {
                this->__Vdly__main_state = 0U;
            }
        } else {
            if ((1U == (IData)(this->__PVT__main_state))) {
                if ((0U == (IData)(this->__PVT__main_state_counter))) {
                    if (((IData)(this->Pixel_valid) 
                         & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                         [6U])) {
                        if (((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                             & (0xefU == (IData)(this->__PVT__personal_counter_y)))) {
                            this->__Vdly__main_state = 0U;
                            this->__Vdly__personal_counter_x = 0U;
                            this->__Vdly__personal_counter_y = 0U;
                        } else {
                            if ((0x13fU == (IData)(this->__PVT__personal_counter_x))) {
                                this->__Vdly__personal_counter_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_y)));
                                this->__Vdly__personal_counter_x = 0U;
                            } else {
                                this->__Vdly__personal_counter_x 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_x)));
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(this->__PVT__main_state))) {
                    if (((IData)(this->Pixel_valid) 
                         & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                         [6U])) {
                        if (((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                             & (0xefU == (IData)(this->__PVT__personal_counter_y)))) {
                            this->__Vdly__main_state = 0U;
                            this->__Vdly__personal_counter_x = 0U;
                            this->__Vdly__personal_counter_y = 0U;
                        } else {
                            if ((0x13fU == (IData)(this->__PVT__personal_counter_x))) {
                                this->__Vdly__personal_counter_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_y)));
                                this->__Vdly__personal_counter_x = 0U;
                            } else {
                                this->__Vdly__personal_counter_x 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_x)));
                            }
                        }
                    }
                }
            }
        }
    } else {
        this->__Vdly__main_state = 0U;
        this->__Vdly__main_state_counter = 0U;
        this->__Vdly__personal_counter_x = 0U;
        this->__Vdly__personal_counter_y = 0U;
    }
    if (vlTOPp->resetn) {
        this->__Vdly__fifo_r_state = this->__PVT__fifo_r_state_next;
        this->__Vdly__fifo_r_state_counter = this->__PVT__fifo_r_state_counter_next;
        this->__PVT__rgb_r_state_counter = this->__PVT__rgb_r_state_counter_next;
        this->__Vdly__rgb_r_state = this->__PVT__rgb_r_state_next;
        if ((0U == (IData)(this->__PVT__fifo_r_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Character4_z)))) {
                this->__Vdly__fifo_r_state = 2U;
                this->__Vdly__read_pixel_x = 0x3fU;
                this->__Vdly__read_pixel_y = 0x1ffU;
                this->__Vdly__fifo_r_state_counter = 0U;
            } else {
                this->__Vdly__fifo_r_state = 0U;
            }
        } else {
            if ((1U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U != (IData)(this->__PVT__fifo_r_state_counter))) {
                    if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((0x31U == (IData)(this->__PVT__read_pixel_x))) {
                            this->__Vdly__read_pixel_y 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(this->__PVT__read_pixel_y)));
                            this->__Vdly__read_pixel_x = 0U;
                        } else {
                            if (((0x3fU == (IData)(this->__PVT__read_pixel_x)) 
                                 & (0x1ffU == (IData)(this->__PVT__read_pixel_y)))) {
                                this->__Vdly__read_pixel_x = 0U;
                                this->__Vdly__read_pixel_y = 0U;
                            } else {
                                this->__Vdly__read_pixel_x 
                                    = (0x3fU & ((IData)(1U) 
                                                + (IData)(this->__PVT__read_pixel_x)));
                            }
                        }
                        this->__PVT__decomp_pixel_reg 
                            = vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Decompressed_FIFO_data;
                    }
                }
            } else {
                if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                    if ((0U != (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            if ((0x13U == (IData)(this->__PVT__read_pixel_x))) {
                                this->__Vdly__read_pixel_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__read_pixel_y)));
                                this->__Vdly__read_pixel_x = 0U;
                            } else {
                                if (((0x3fU == (IData)(this->__PVT__read_pixel_x)) 
                                     & (0x1ffU == (IData)(this->__PVT__read_pixel_y)))) {
                                    this->__Vdly__read_pixel_x = 0U;
                                    this->__Vdly__read_pixel_y = 0U;
                                } else {
                                    this->__Vdly__read_pixel_x 
                                        = (0x3fU & 
                                           ((IData)(1U) 
                                            + (IData)(this->__PVT__read_pixel_x)));
                                }
                            }
                            this->__PVT__decomp_pixel_reg 
                                = vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Decompressed_FIFO_data;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(this->__PVT__rgb_r_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Character4_z)))) {
                this->__Vdly__rgb_r_state = 3U;
                this->__PVT__rgb_r_state_counter = 0U;
            } else {
                this->__Vdly__rgb_r_state = 0U;
            }
        } else {
            if ((3U == (IData)(this->__PVT__rgb_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state))) {
                    this->__Vdly__rgb_r_state = 0U;
                    this->__PVT__rgb_r_state_counter = 0U;
                } else {
                    if (this->__PVT__rgb_convert_req) {
                        this->__Vdly__rgb_r_state = 4U;
                        this->__PVT__rgb_r_state_counter = 0U;
                    } else {
                        this->__Vdly__rgb_r_state = 3U;
                    }
                }
            }
        }
    } else {
        this->__Vdly__rgb_r_state = 0U;
        this->__Vdly__fifo_r_state_counter = 0U;
        this->__PVT__decomp_pixel_reg = 0ULL;
        this->__Vdly__fifo_r_state = 0U;
        this->__PVT__rgb_r_state_counter = 0U;
        this->__Vdly__read_pixel_x = 0x3fU;
        this->__Vdly__read_pixel_y = 0x1ffU;
    }
    this->__PVT__personal_counter_x = this->__Vdly__personal_counter_x;
    this->__PVT__personal_counter_y = this->__Vdly__personal_counter_y;
    this->__PVT__main_state_counter = this->__Vdly__main_state_counter;
    this->__PVT__main_state = this->__Vdly__main_state;
    this->__PVT__rgb_r_state = this->__Vdly__rgb_r_state;
    this->__PVT__read_pixel_x = this->__Vdly__read_pixel_x;
    this->__PVT__read_pixel_y = this->__Vdly__read_pixel_y;
    this->__PVT__fifo_r_state = this->__Vdly__fifo_r_state;
    this->__PVT__fifo_r_state_counter = this->__Vdly__fifo_r_state_counter;
    this->__PVT__main_state_counter_next = this->__PVT__main_state_counter;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                this->__PVT__main_state_counter_next = 0U;
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                this->__PVT__main_state_counter_next = 0U;
            }
        }
    }
    this->Decomp_fifo_dequeue = 0U;
    if ((0U != (IData)(this->__PVT__fifo_r_state))) {
        if ((1U == (IData)(this->__PVT__fifo_r_state))) {
            if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Decompressed_FIFO_r_master) 
                     & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_empty_128)))) {
                    this->Decomp_fifo_dequeue = 1U;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Decompressed_FIFO_r_master) 
                         & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_empty_128)))) {
                        this->Decomp_fifo_dequeue = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_combo__TOP__PPU_TOP__DOT__u_ch4__36(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_combo__TOP__PPU_TOP__DOT__u_ch4__36\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__RGB_reg_ready = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->__PVT__RGB_reg_ready = vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                        [6U];
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & (IData)(vlTOPp->Character4_WX))) 
                       & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                     (0xfffU & ((IData)(0x9fU) 
                                                + (IData)(vlTOPp->Character4_WX))))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (IData)(vlTOPp->Character4_WY)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (IData)(vlTOPp->Character4_WY)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->__PVT__RGB_reg_ready 
                            = vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                            [6U];
                    }
                }
            }
        }
    }
    this->Pixel_is_trans = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->Pixel_is_trans = this->__PVT__RGB_reg_trans;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & (IData)(vlTOPp->Character4_WX))) 
                       & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                     (0xfffU & ((IData)(0x9fU) 
                                                + (IData)(vlTOPp->Character4_WX))))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (IData)(vlTOPp->Character4_WY)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (IData)(vlTOPp->Character4_WY)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->Pixel_is_trans = this->__PVT__RGB_reg_trans;
                    }
                } else {
                    this->Pixel_is_trans = 1U;
                }
            }
        }
    }
    this->Pixel_RGB = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->Pixel_RGB = ((IData)(this->__PVT__RGB_reg_trans)
                                        ? 0U : this->__PVT__RGB_reg);
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & (IData)(vlTOPp->Character4_WX))) 
                       & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                     (0xfffU & ((IData)(0x9fU) 
                                                + (IData)(vlTOPp->Character4_WX))))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (IData)(vlTOPp->Character4_WY)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (IData)(vlTOPp->Character4_WY)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->Pixel_RGB = ((IData)(this->__PVT__RGB_reg_trans)
                                            ? 0U : this->__PVT__RGB_reg);
                    }
                } else {
                    this->Pixel_RGB = 0U;
                }
            }
        }
    }
    this->__PVT__main_state_next = this->__PVT__main_state;
    this->Pixel_valid = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->__PVT__main_state_next = 
                        (((((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                            & (0xefU == (IData)(this->__PVT__personal_counter_y))) 
                           & (IData)(this->Pixel_valid)) 
                          & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                          [6U]) ? 0U : 1U);
                    this->Pixel_valid = 1U;
                } else {
                    this->__PVT__main_state_next = 1U;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                this->__PVT__main_state_next = ((((
                                                   (0x13fU 
                                                    == (IData)(this->__PVT__personal_counter_x)) 
                                                   & (0xefU 
                                                      == (IData)(this->__PVT__personal_counter_y))) 
                                                  & (IData)(this->Pixel_valid)) 
                                                 & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                                                 [6U])
                                                 ? 0U
                                                 : 2U);
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & (IData)(vlTOPp->Character4_WX))) 
                       & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                     (0xfffU & ((IData)(0x9fU) 
                                                + (IData)(vlTOPp->Character4_WX))))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (IData)(vlTOPp->Character4_WY)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (IData)(vlTOPp->Character4_WY)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->Pixel_valid = 1U;
                    }
                } else {
                    this->Pixel_valid = 1U;
                }
            }
        }
    }
    this->__PVT__fifo_r_state_counter_next = this->__PVT__fifo_r_state_counter;
    this->__PVT__fifo_r_state_next = this->__PVT__fifo_r_state;
    this->__PVT__valid_pixel_check = 0U;
    this->__PVT__rgb_convert_req = 0U;
    this->__PVT__valid_pixel_check = ((0xfeU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | (((VL_LTES_III(1,32,32, 0U, 
                                                       (VL_EXTENDS_II(32,10, 
                                                                      (0x3ffU 
                                                                       & (IData)(vlTOPp->Character4_WY))) 
                                                        + 
                                                        VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                           & VL_GTES_III(1,32,32, 0xefU, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character4_WY))) 
                                                          + 
                                                          VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                          & VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character4_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       ((IData)(this->__PVT__read_pixel_x) 
                                                                        << 3U))))) 
                                         & VL_GTES_III(1,32,32, 0x13fU, 
                                                       (VL_EXTENDS_II(32,10, 
                                                                      (0x3ffU 
                                                                       & (IData)(vlTOPp->Character4_WX))) 
                                                        + 
                                                        VL_EXTENDS_II(32,9, 
                                                                      ((IData)(this->__PVT__read_pixel_x) 
                                                                       << 3U))))));
    this->__PVT__valid_pixel_check = ((0xfdU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character4_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character4_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character4_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (1U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character4_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (1U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 1U));
    this->__PVT__valid_pixel_check = ((0xfbU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character4_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character4_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character4_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (2U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character4_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (2U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 2U));
    this->__PVT__valid_pixel_check = ((0xf7U & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character4_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character4_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character4_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (3U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character4_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (3U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 3U));
    this->__PVT__valid_pixel_check = ((0xefU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character4_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character4_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character4_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (4U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character4_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (4U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 4U));
    this->__PVT__valid_pixel_check = ((0xdfU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character4_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character4_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character4_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (5U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character4_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (5U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 5U));
    this->__PVT__valid_pixel_check = ((0xbfU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character4_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character4_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character4_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (6U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character4_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (6U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 6U));
    this->__PVT__valid_pixel_check = ((0x7fU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character4_WY))) 
                                                         + 
                                                         VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,10, 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->Character4_WY))) 
                                                           + 
                                                           VL_EXTENDS_II(32,10, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,10, 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->Character4_WX))) 
                                                          + 
                                                          VL_EXTENDS_II(32,9, 
                                                                        (7U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,10, 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->Character4_WX))) 
                                                         + 
                                                         VL_EXTENDS_II(32,9, 
                                                                       (7U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 7U));
    if ((0U == (IData)(this->__PVT__fifo_r_state))) {
        this->__PVT__fifo_r_state_counter_next = 0U;
    } else {
        if ((1U == (IData)(this->__PVT__fifo_r_state))) {
            if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Decompressed_FIFO_r_master) 
                     & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_empty_128)))) {
                    this->__PVT__fifo_r_state_counter_next = 1U;
                    this->__PVT__fifo_r_state_next = 1U;
                } else {
                    this->__PVT__fifo_r_state_counter_next = 0U;
                    this->__PVT__fifo_r_state_next = 1U;
                }
            } else {
                if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    this->__PVT__fifo_r_state_counter_next = 2U;
                    this->__PVT__fifo_r_state_next = 1U;
                } else {
                    if ((2U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((0U == (IData)(this->__PVT__valid_pixel_check))) {
                            this->__PVT__fifo_r_state_counter_next = 0U;
                            this->__PVT__fifo_r_state_next = 1U;
                        } else {
                            this->__PVT__rgb_convert_req = 1U;
                            this->__PVT__fifo_r_state_counter_next = 3U;
                            this->__PVT__fifo_r_state_next = 1U;
                        }
                    } else {
                        if ((3U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            this->__PVT__rgb_convert_req = 1U;
                            if (this->__PVT__rgb_convert_end) {
                                if (((0x31U == (IData)(this->__PVT__read_pixel_x)) 
                                     & (0x13fU == (IData)(this->__PVT__read_pixel_y)))) {
                                    this->__PVT__fifo_r_state_counter_next = 0U;
                                    this->__PVT__fifo_r_state_next = 0U;
                                } else {
                                    this->__PVT__fifo_r_state_counter_next = 0U;
                                    this->__PVT__fifo_r_state_next = 1U;
                                }
                            } else {
                                this->__PVT__fifo_r_state_counter_next = 3U;
                                this->__PVT__fifo_r_state_next = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Decompressed_FIFO_r_master) 
                         & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__fifo_empty_128)))) {
                        this->__PVT__fifo_r_state_counter_next = 1U;
                        this->__PVT__fifo_r_state_next = 2U;
                    } else {
                        this->__PVT__fifo_r_state_counter_next = 0U;
                        this->__PVT__fifo_r_state_next = 2U;
                    }
                } else {
                    if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        this->__PVT__fifo_r_state_counter_next = 2U;
                        this->__PVT__fifo_r_state_next = 2U;
                    } else {
                        if ((2U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            if ((0U == (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__fifo_r_state_counter_next = 0U;
                                this->__PVT__fifo_r_state_next = 2U;
                            } else {
                                this->__PVT__rgb_convert_req = 1U;
                                this->__PVT__fifo_r_state_counter_next = 3U;
                                this->__PVT__fifo_r_state_next = 2U;
                            }
                        } else {
                            if ((3U == (IData)(this->__PVT__fifo_r_state_counter))) {
                                this->__PVT__rgb_convert_req = 1U;
                                if (this->__PVT__rgb_convert_end) {
                                    if (((0x13U == (IData)(this->__PVT__read_pixel_x)) 
                                         & (0xefU == (IData)(this->__PVT__read_pixel_y)))) {
                                        this->__PVT__fifo_r_state_counter_next = 0U;
                                        this->__PVT__fifo_r_state_next = 0U;
                                    } else {
                                        this->__PVT__fifo_r_state_counter_next = 0U;
                                        this->__PVT__fifo_r_state_next = 2U;
                                    }
                                } else {
                                    this->__PVT__fifo_r_state_counter_next = 3U;
                                    this->__PVT__fifo_r_state_next = 2U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    this->__PVT__rgb_convert_end = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U != (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((1U & (~ ((IData)(this->__PVT__valid_pixel_check) 
                                              >> 1U)))) {
                                    this->__PVT__rgb_convert_end = 1U;
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((1U & (~ 
                                                   ((IData)(this->__PVT__valid_pixel_check) 
                                                    >> 2U)))) {
                                            this->__PVT__rgb_convert_end = 1U;
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(this->__PVT__valid_pixel_check) 
                                                         >> 3U)))) {
                                                    this->__PVT__rgb_convert_end = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((1U & (~ ((IData)(this->__PVT__valid_pixel_check) 
                                                  >> 5U)))) {
                                        this->__PVT__rgb_convert_end = 1U;
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(this->__PVT__valid_pixel_check) 
                                                     >> 6U)))) {
                                                this->__PVT__rgb_convert_end = 1U;
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(this->__PVT__valid_pixel_check) 
                                                             >> 7U)))) {
                                                        this->__PVT__rgb_convert_end = 1U;
                                                    }
                                                } else {
                                                    if (this->__PVT__RGB_reg_ready) {
                                                        this->__PVT__rgb_convert_end = 1U;
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
    this->__PVT__rgb_r_state_next = this->__PVT__rgb_r_state;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    this->__PVT__rgb_r_state_next = 
                        ((0U == (IData)(this->__PVT__rgb_r_state_counter))
                          ? 4U : ((1U == (IData)(this->__PVT__rgb_r_state_counter))
                                   ? 4U : ((2U == (IData)(this->__PVT__rgb_r_state_counter))
                                            ? ((2U 
                                                & (IData)(this->__PVT__valid_pixel_check))
                                                ? 4U
                                                : 3U)
                                            : ((3U 
                                                == (IData)(this->__PVT__rgb_r_state_counter))
                                                ? 4U
                                                : (
                                                   (4U 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(this->__PVT__valid_pixel_check))
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))
                                                     ? 4U
                                                     : 
                                                    ((6U 
                                                      == (IData)(this->__PVT__rgb_r_state_counter))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(this->__PVT__valid_pixel_check))
                                                       ? 4U
                                                       : 3U)
                                                      : 4U)))))));
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__rgb_r_state_next = 4U;
                            } else {
                                if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->__PVT__rgb_r_state_next = 4U;
                                } else {
                                    if ((0x40U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->__PVT__rgb_r_state_next = 4U;
                                    } else {
                                        if ((0x80U 
                                             & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->__PVT__rgb_r_state_next = 4U;
                                        }
                                    }
                                }
                            }
                        } else {
                            this->__PVT__rgb_r_state_next 
                                = ((9U == (IData)(this->__PVT__rgb_r_state_counter))
                                    ? 4U : ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))
                                             ? ((0x20U 
                                                 & (IData)(this->__PVT__valid_pixel_check))
                                                 ? 4U
                                                 : 3U)
                                             : ((0xbU 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))
                                                 ? 4U
                                                 : 
                                                ((0xcU 
                                                  == (IData)(this->__PVT__rgb_r_state_counter))
                                                  ? 
                                                 ((0x40U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 4U
                                                   : 3U)
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(this->__PVT__rgb_r_state_counter))
                                                   ? 4U
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(this->__PVT__valid_pixel_check))
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((IData)(this->__PVT__RGB_reg_ready)
                                                     ? 3U
                                                     : 4U)))))));
                        }
                    }
                }
            }
        }
    }
    this->Lookup_ena = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            this->Lookup_ena = 1U;
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->Lookup_ena = 1U;
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->Lookup_ena = 1U;
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    this->Lookup_ena = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->Lookup_ena = 1U;
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->Lookup_ena = 1U;
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                this->Lookup_ena = 1U;
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        this->Lookup_ena = 1U;
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
    this->Lookup_pixel = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            this->Lookup_pixel = (0xffU 
                                                  & (IData)(this->__PVT__decomp_pixel_reg));
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->Lookup_pixel 
                                        = (0xffU & (IData)(
                                                           (this->__PVT__decomp_pixel_reg 
                                                            >> 8U)));
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->Lookup_pixel 
                                                = (0xffU 
                                                   & (IData)(
                                                             (this->__PVT__decomp_pixel_reg 
                                                              >> 0x10U)));
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    this->Lookup_pixel 
                                                        = 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (this->__PVT__decomp_pixel_reg 
                                                                    >> 0x18U)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->Lookup_pixel 
                                    = (0xffU & (IData)(
                                                       (this->__PVT__decomp_pixel_reg 
                                                        >> 0x20U)));
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->Lookup_pixel 
                                            = (0xffU 
                                               & (IData)(
                                                         (this->__PVT__decomp_pixel_reg 
                                                          >> 0x28U)));
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                this->Lookup_pixel 
                                                    = 
                                                    (0xffU 
                                                     & (IData)(
                                                               (this->__PVT__decomp_pixel_reg 
                                                                >> 0x30U)));
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        this->Lookup_pixel 
                                                            = 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (this->__PVT__decomp_pixel_reg 
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
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_settle__TOP__PPU_TOP__DOT__u_sc__17(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_settle__TOP__PPU_TOP__DOT__u_sc__17\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__RGB_reg_w_ena = 0U;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    if ((0U == (IData)(this->__PVT__rgb_r_state_counter))) {
                        if ((1U & (IData)(this->__PVT__valid_pixel_check))) {
                            if (vlTOPp->PPU_TOP__DOT__Req_end
                                [6U]) {
                                this->__PVT__RGB_reg_w_ena = 1U;
                            }
                        }
                    } else {
                        if ((1U != (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((2U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((2U & (IData)(this->__PVT__valid_pixel_check))) {
                                    if (vlTOPp->PPU_TOP__DOT__Req_end
                                        [6U]) {
                                        this->__PVT__RGB_reg_w_ena = 1U;
                                    }
                                }
                            } else {
                                if ((3U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((4U == (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((4U & (IData)(this->__PVT__valid_pixel_check))) {
                                            if (vlTOPp->PPU_TOP__DOT__Req_end
                                                [6U]) {
                                                this->__PVT__RGB_reg_w_ena = 1U;
                                            }
                                        }
                                    } else {
                                        if ((5U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((6U 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (8U 
                                                     & (IData)(this->__PVT__valid_pixel_check))) {
                                                    if (
                                                        vlTOPp->PPU_TOP__DOT__Req_end
                                                        [6U]) {
                                                        this->__PVT__RGB_reg_w_ena = 1U;
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
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                if (vlTOPp->PPU_TOP__DOT__Req_end
                                    [6U]) {
                                    this->__PVT__RGB_reg_w_ena = 1U;
                                }
                            }
                        } else {
                            if ((9U != (IData)(this->__PVT__rgb_r_state_counter))) {
                                if ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                    if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                        if (vlTOPp->PPU_TOP__DOT__Req_end
                                            [6U]) {
                                            this->__PVT__RGB_reg_w_ena = 1U;
                                        }
                                    }
                                } else {
                                    if ((0xbU != (IData)(this->__PVT__rgb_r_state_counter))) {
                                        if ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))) {
                                            if ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))) {
                                                if (
                                                    vlTOPp->PPU_TOP__DOT__Req_end
                                                    [6U]) {
                                                    this->__PVT__RGB_reg_w_ena = 1U;
                                                }
                                            }
                                        } else {
                                            if ((0xdU 
                                                 != (IData)(this->__PVT__rgb_r_state_counter))) {
                                                if (
                                                    (0xeU 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))) {
                                                    if (
                                                        (0x80U 
                                                         & (IData)(this->__PVT__valid_pixel_check))) {
                                                        if (
                                                            vlTOPp->PPU_TOP__DOT__Req_end
                                                            [6U]) {
                                                            this->__PVT__RGB_reg_w_ena = 1U;
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
    }
    this->__PVT__rgb_r_state_counter_next = this->__PVT__rgb_r_state_counter;
    if ((0U != (IData)(this->__PVT__rgb_r_state))) {
        if ((3U != (IData)(this->__PVT__rgb_r_state))) {
            if ((4U == (IData)(this->__PVT__rgb_r_state))) {
                if (((((((((0U == (IData)(this->__PVT__rgb_r_state_counter)) 
                           | (1U == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (2U == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (3U == (IData)(this->__PVT__rgb_r_state_counter))) 
                        | (4U == (IData)(this->__PVT__rgb_r_state_counter))) 
                       | (5U == (IData)(this->__PVT__rgb_r_state_counter))) 
                      | (6U == (IData)(this->__PVT__rgb_r_state_counter))) 
                     | (7U == (IData)(this->__PVT__rgb_r_state_counter)))) {
                    this->__PVT__rgb_r_state_counter_next 
                        = ((0U == (IData)(this->__PVT__rgb_r_state_counter))
                            ? ((1U & (IData)(this->__PVT__valid_pixel_check))
                                ? (vlTOPp->PPU_TOP__DOT__Req_end
                                   [6U] ? 1U : 0U) : 
                               ((2U & (IData)(this->__PVT__valid_pixel_check))
                                 ? 2U : ((4U & (IData)(this->__PVT__valid_pixel_check))
                                          ? 4U : ((8U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 6U
                                                   : 8U))))
                            : ((1U == (IData)(this->__PVT__rgb_r_state_counter))
                                ? ((IData)(this->__PVT__RGB_reg_ready)
                                    ? 2U : 1U) : ((2U 
                                                   == (IData)(this->__PVT__rgb_r_state_counter))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(this->__PVT__valid_pixel_check))
                                                    ? 
                                                   (vlTOPp->PPU_TOP__DOT__Req_end
                                                    [6U]
                                                     ? 3U
                                                     : 2U)
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(this->__PVT__rgb_r_state_counter))
                                                    ? 
                                                   ((IData)(this->__PVT__RGB_reg_ready)
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((4U 
                                                     == (IData)(this->__PVT__rgb_r_state_counter))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(this->__PVT__valid_pixel_check))
                                                      ? 
                                                     (vlTOPp->PPU_TOP__DOT__Req_end
                                                      [6U]
                                                       ? 5U
                                                       : 4U)
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == (IData)(this->__PVT__rgb_r_state_counter))
                                                      ? 
                                                     ((IData)(this->__PVT__RGB_reg_ready)
                                                       ? 6U
                                                       : 5U)
                                                      : 
                                                     ((6U 
                                                       == (IData)(this->__PVT__rgb_r_state_counter))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(this->__PVT__valid_pixel_check))
                                                        ? 
                                                       (vlTOPp->PPU_TOP__DOT__Req_end
                                                        [6U]
                                                         ? 7U
                                                         : 6U)
                                                        : 0U)
                                                       : 
                                                      ((IData)(this->__PVT__RGB_reg_ready)
                                                        ? 8U
                                                        : 7U))))))));
                } else {
                    if (((((((((8U == (IData)(this->__PVT__rgb_r_state_counter)) 
                               | (9U == (IData)(this->__PVT__rgb_r_state_counter))) 
                              | (0xaU == (IData)(this->__PVT__rgb_r_state_counter))) 
                             | (0xbU == (IData)(this->__PVT__rgb_r_state_counter))) 
                            | (0xcU == (IData)(this->__PVT__rgb_r_state_counter))) 
                           | (0xdU == (IData)(this->__PVT__rgb_r_state_counter))) 
                          | (0xeU == (IData)(this->__PVT__rgb_r_state_counter))) 
                         | (0xfU == (IData)(this->__PVT__rgb_r_state_counter)))) {
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((0x10U & (IData)(this->__PVT__valid_pixel_check))) {
                                this->__PVT__rgb_r_state_counter_next 
                                    = (vlTOPp->PPU_TOP__DOT__Req_end
                                       [6U] ? 9U : 8U);
                            } else {
                                if ((0x20U & (IData)(this->__PVT__valid_pixel_check))) {
                                    this->__PVT__rgb_r_state_counter_next = 0xaU;
                                } else {
                                    if ((0x40U & (IData)(this->__PVT__valid_pixel_check))) {
                                        this->__PVT__rgb_r_state_counter_next = 0xcU;
                                    } else {
                                        if ((0x80U 
                                             & (IData)(this->__PVT__valid_pixel_check))) {
                                            this->__PVT__rgb_r_state_counter_next = 0xeU;
                                        }
                                    }
                                }
                            }
                        } else {
                            this->__PVT__rgb_r_state_counter_next 
                                = ((9U == (IData)(this->__PVT__rgb_r_state_counter))
                                    ? ((IData)(this->__PVT__RGB_reg_ready)
                                        ? 0xaU : 9U)
                                    : ((0xaU == (IData)(this->__PVT__rgb_r_state_counter))
                                        ? ((0x20U & (IData)(this->__PVT__valid_pixel_check))
                                            ? (vlTOPp->PPU_TOP__DOT__Req_end
                                               [6U]
                                                ? 0xbU
                                                : 0xaU)
                                            : 0U) : 
                                       ((0xbU == (IData)(this->__PVT__rgb_r_state_counter))
                                         ? ((IData)(this->__PVT__RGB_reg_ready)
                                             ? 0xcU
                                             : 0xbU)
                                         : ((0xcU == (IData)(this->__PVT__rgb_r_state_counter))
                                             ? ((0x40U 
                                                 & (IData)(this->__PVT__valid_pixel_check))
                                                 ? 
                                                (vlTOPp->PPU_TOP__DOT__Req_end
                                                 [6U]
                                                  ? 0xdU
                                                  : 0xcU)
                                                 : 0U)
                                             : ((0xdU 
                                                 == (IData)(this->__PVT__rgb_r_state_counter))
                                                 ? 
                                                ((IData)(this->__PVT__RGB_reg_ready)
                                                  ? 0xeU
                                                  : 0xdU)
                                                 : 
                                                ((0xeU 
                                                  == (IData)(this->__PVT__rgb_r_state_counter))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(this->__PVT__valid_pixel_check))
                                                   ? 
                                                  (vlTOPp->PPU_TOP__DOT__Req_end
                                                   [6U]
                                                    ? 0xfU
                                                    : 0xeU)
                                                   : 0U)
                                                  : 
                                                 ((IData)(this->__PVT__RGB_reg_ready)
                                                   ? 0U
                                                   : 0xfU)))))));
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPPU_TOP_Pixel_Reader::_sequent__TOP__PPU_TOP__DOT__u_sc__27(VPPU_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPPU_TOP_Pixel_Reader::_sequent__TOP__PPU_TOP__DOT__u_sc__27\n"); );
    VPPU_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__personal_counter_y = this->__PVT__personal_counter_y;
    this->__Vdly__personal_counter_x = this->__PVT__personal_counter_x;
    this->__Vdly__main_state = this->__PVT__main_state;
    this->__Vdly__main_state_counter = this->__PVT__main_state_counter;
    this->__Vdly__rgb_r_state = this->__PVT__rgb_r_state;
    this->__Vdly__read_pixel_y = this->__PVT__read_pixel_y;
    this->__Vdly__read_pixel_x = this->__PVT__read_pixel_x;
    this->__Vdly__fifo_r_state_counter = this->__PVT__fifo_r_state_counter;
    this->__Vdly__fifo_r_state = this->__PVT__fifo_r_state;
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[6U]))) {
            this->__PVT__RGB_reg_trans = 0U;
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[6U])) {
                this->__PVT__RGB_reg_trans = 1U;
            }
        }
    } else {
        this->__PVT__RGB_reg_trans = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[6U]))) {
            this->__PVT__RGB_reg = vlTOPp->PPU_TOP__DOT__Req_RGB
                [6U];
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[6U])) {
                this->__PVT__RGB_reg = 0U;
            }
        }
    } else {
        this->__PVT__RGB_reg = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(this->__PVT__RGB_reg_w_ena) & 
             (~ vlTOPp->PPU_TOP__DOT__Req_trans[6U]))) {
            this->__PVT__RGB_reg_valid = 1U;
        } else {
            if (((IData)(this->__PVT__RGB_reg_w_ena) 
                 & vlTOPp->PPU_TOP__DOT__Req_trans[6U])) {
                this->__PVT__RGB_reg_valid = 1U;
            }
        }
        if (this->__PVT__RGB_reg_ready) {
            this->__PVT__RGB_reg_valid = 0U;
        }
    } else {
        this->__PVT__RGB_reg_valid = 0U;
    }
    if (vlTOPp->resetn) {
        this->__Vdly__main_state_counter = this->__PVT__main_state_counter_next;
        this->__Vdly__main_state = this->__PVT__main_state_next;
        if ((0U == (IData)(this->__PVT__main_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Script_z)))) {
                this->__Vdly__main_state_counter = 0U;
                this->__Vdly__personal_counter_x = 0U;
                this->__Vdly__personal_counter_y = 0U;
                this->__Vdly__main_state = 2U;
            } else {
                this->__Vdly__main_state = 0U;
            }
        } else {
            if ((1U == (IData)(this->__PVT__main_state))) {
                if ((0U == (IData)(this->__PVT__main_state_counter))) {
                    if (((IData)(this->Pixel_valid) 
                         & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                         [7U])) {
                        if (((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                             & (0xefU == (IData)(this->__PVT__personal_counter_y)))) {
                            this->__Vdly__main_state = 0U;
                            this->__Vdly__personal_counter_x = 0U;
                            this->__Vdly__personal_counter_y = 0U;
                        } else {
                            if ((0x13fU == (IData)(this->__PVT__personal_counter_x))) {
                                this->__Vdly__personal_counter_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_y)));
                                this->__Vdly__personal_counter_x = 0U;
                            } else {
                                this->__Vdly__personal_counter_x 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_x)));
                            }
                        }
                    }
                }
            } else {
                if ((2U == (IData)(this->__PVT__main_state))) {
                    if (((IData)(this->Pixel_valid) 
                         & vlTOPp->PPU_TOP__DOT__u_proc__DOT__layer_ready
                         [7U])) {
                        if (((0x13fU == (IData)(this->__PVT__personal_counter_x)) 
                             & (0xefU == (IData)(this->__PVT__personal_counter_y)))) {
                            this->__Vdly__main_state = 0U;
                            this->__Vdly__personal_counter_x = 0U;
                            this->__Vdly__personal_counter_y = 0U;
                        } else {
                            if ((0x13fU == (IData)(this->__PVT__personal_counter_x))) {
                                this->__Vdly__personal_counter_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_y)));
                                this->__Vdly__personal_counter_x = 0U;
                            } else {
                                this->__Vdly__personal_counter_x 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__personal_counter_x)));
                            }
                        }
                    }
                }
            }
        }
    } else {
        this->__Vdly__main_state = 0U;
        this->__Vdly__main_state_counter = 0U;
        this->__Vdly__personal_counter_x = 0U;
        this->__Vdly__personal_counter_y = 0U;
    }
    if (vlTOPp->resetn) {
        this->__Vdly__fifo_r_state = this->__PVT__fifo_r_state_next;
        this->__Vdly__fifo_r_state_counter = this->__PVT__fifo_r_state_counter_next;
        this->__PVT__rgb_r_state_counter = this->__PVT__rgb_r_state_counter_next;
        this->__Vdly__rgb_r_state = this->__PVT__rgb_r_state_next;
        if ((0U == (IData)(this->__PVT__fifo_r_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Script_z)))) {
                this->__Vdly__fifo_r_state = 2U;
                this->__Vdly__read_pixel_x = 0x3fU;
                this->__Vdly__read_pixel_y = 0x1ffU;
                this->__Vdly__fifo_r_state_counter = 0U;
            } else {
                this->__Vdly__fifo_r_state = 0U;
            }
        } else {
            if ((1U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U != (IData)(this->__PVT__fifo_r_state_counter))) {
                    if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((0x31U == (IData)(this->__PVT__read_pixel_x))) {
                            this->__Vdly__read_pixel_y 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(this->__PVT__read_pixel_y)));
                            this->__Vdly__read_pixel_x = 0U;
                        } else {
                            if (((0x3fU == (IData)(this->__PVT__read_pixel_x)) 
                                 & (0x1ffU == (IData)(this->__PVT__read_pixel_y)))) {
                                this->__Vdly__read_pixel_x = 0U;
                                this->__Vdly__read_pixel_y = 0U;
                            } else {
                                this->__Vdly__read_pixel_x 
                                    = (0x3fU & ((IData)(1U) 
                                                + (IData)(this->__PVT__read_pixel_x)));
                            }
                        }
                        this->__PVT__decomp_pixel_reg 
                            = vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.Decompressed_FIFO_data;
                    }
                }
            } else {
                if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                    if ((0U != (IData)(this->__PVT__fifo_r_state_counter))) {
                        if ((1U == (IData)(this->__PVT__fifo_r_state_counter))) {
                            if ((0x27U == (IData)(this->__PVT__read_pixel_x))) {
                                this->__Vdly__read_pixel_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(this->__PVT__read_pixel_y)));
                                this->__Vdly__read_pixel_x = 0U;
                            } else {
                                if (((0x3fU == (IData)(this->__PVT__read_pixel_x)) 
                                     & (0x1ffU == (IData)(this->__PVT__read_pixel_y)))) {
                                    this->__Vdly__read_pixel_x = 0U;
                                    this->__Vdly__read_pixel_y = 0U;
                                } else {
                                    this->__Vdly__read_pixel_x 
                                        = (0x3fU & 
                                           ((IData)(1U) 
                                            + (IData)(this->__PVT__read_pixel_x)));
                                }
                            }
                            this->__PVT__decomp_pixel_reg 
                                = vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.Decompressed_FIFO_data;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(this->__PVT__rgb_r_state))) {
            if (((IData)(vlTOPp->PPU_start) & (0U != (IData)(vlTOPp->Script_z)))) {
                this->__Vdly__rgb_r_state = 3U;
                this->__PVT__rgb_r_state_counter = 0U;
            } else {
                this->__Vdly__rgb_r_state = 0U;
            }
        } else {
            if ((3U == (IData)(this->__PVT__rgb_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state))) {
                    this->__Vdly__rgb_r_state = 0U;
                    this->__PVT__rgb_r_state_counter = 0U;
                } else {
                    if (this->__PVT__rgb_convert_req) {
                        this->__Vdly__rgb_r_state = 4U;
                        this->__PVT__rgb_r_state_counter = 0U;
                    } else {
                        this->__Vdly__rgb_r_state = 3U;
                    }
                }
            }
        }
    } else {
        this->__Vdly__rgb_r_state = 0U;
        this->__Vdly__fifo_r_state_counter = 0U;
        this->__PVT__decomp_pixel_reg = 0ULL;
        this->__Vdly__fifo_r_state = 0U;
        this->__PVT__rgb_r_state_counter = 0U;
        this->__Vdly__read_pixel_x = 0x3fU;
        this->__Vdly__read_pixel_y = 0x1ffU;
    }
    this->__PVT__personal_counter_x = this->__Vdly__personal_counter_x;
    this->__PVT__personal_counter_y = this->__Vdly__personal_counter_y;
    this->__PVT__main_state_counter = this->__Vdly__main_state_counter;
    this->__PVT__main_state = this->__Vdly__main_state;
    this->__PVT__rgb_r_state = this->__Vdly__rgb_r_state;
    this->__PVT__read_pixel_x = this->__Vdly__read_pixel_x;
    this->__PVT__read_pixel_y = this->__Vdly__read_pixel_y;
    this->__PVT__fifo_r_state = this->__Vdly__fifo_r_state;
    this->__PVT__fifo_r_state_counter = this->__Vdly__fifo_r_state_counter;
    this->__PVT__main_state_counter_next = this->__PVT__main_state_counter;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                this->__PVT__main_state_counter_next = 0U;
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                this->__PVT__main_state_counter_next = 0U;
            }
        }
    }
    this->Decomp_fifo_dequeue = 0U;
    if ((0U != (IData)(this->__PVT__fifo_r_state))) {
        if ((1U == (IData)(this->__PVT__fifo_r_state))) {
            if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.Decompressed_FIFO_r_master) 
                     & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_empty_128)))) {
                    this->Decomp_fifo_dequeue = 1U;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    if (((IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.Decompressed_FIFO_r_master) 
                         & (~ (IData)(vlSymsp->TOP__PPU_TOP__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__fifo_empty_128)))) {
                        this->Decomp_fifo_dequeue = 1U;
                    }
                }
            }
        }
    }
}
