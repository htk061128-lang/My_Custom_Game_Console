// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpixel_fifo_top.h for the primary calling header

#include "Vpixel_fifo_top_Decompresser.h"
#include "Vpixel_fifo_top__Syms.h"

//==========

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_uni1__12(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_uni1__12\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__compressed_fifo_r_data = 0ULL;
    if (this->__PVT__compressed_fifo_r_state) {
        if (this->__PVT__compressed_fifo_r_state) {
            this->__PVT__compressed_fifo_r_data = vlTOPp->pixel_fifo_top__DOT__uni1_comp_data;
        }
    } else {
        this->__PVT__compressed_fifo_r_data = 0ULL;
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni1__21(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni1__21\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__fifo_rear_256 = this->__PVT__fifo_rear_256;
    this->__Vdly__fifo_front_256 = this->__PVT__fifo_front_256;
    this->__Vdly__unrepeat_counter = this->__PVT__unrepeat_counter;
    this->__Vdly__repeat_counter = this->__PVT__repeat_counter;
    this->__Vdly__decompressed_FIFO_reg_64 = this->__PVT__decompressed_FIFO_reg_64;
    this->__Vdly__compressed_FIFO_reg_counter = this->__PVT__compressed_FIFO_reg_counter;
    this->__Vdly__decompressed_FIFO_reg_counter = this->__PVT__decompressed_FIFO_reg_counter;
    this->__Vdly__fifo_rear_128 = this->__PVT__fifo_rear_128;
    this->__Vdly__fifo_front_128 = this->__PVT__fifo_front_128;
    this->__PVT__compressed_fifo_r_state = ((IData)(vlTOPp->resetn) 
                                            & (IData)(this->__PVT__compressed_fifo_r_state_next));
    this->__PVT__decompressed_fifo_r_state = ((IData)(vlTOPp->resetn)
                                               ? (IData)(this->__PVT__decompressed_fifo_r_state_next)
                                               : 0U);
    if (vlTOPp->resetn) {
        if ((((2U == (IData)(this->__PVT__r_state)) 
              & (2U == (IData)(this->__PVT__w_state))) 
             & (2U == (IData)(this->__PVT__decompress_state)))) {
            this->__Vdly__fifo_front_128 = 0U;
            this->__Vdly__fifo_front_256 = 0U;
            this->__Vdly__fifo_rear_128 = 0U;
            this->__Vdly__fifo_rear_256 = 0U;
            this->__Vdly__repeat_counter = 0U;
            this->__Vdly__unrepeat_counter = 0U;
            this->__PVT__pixel_reg = 0U;
            this->__PVT__compressed_FIFO_reg_64 = 0ULL;
            this->__Vdly__compressed_FIFO_reg_counter = 0U;
            this->__Vdly__decompressed_FIFO_reg_64 = 0ULL;
            this->__Vdly__decompressed_FIFO_reg_counter = 0U;
            this->__PVT__r_8_reg = 0U;
        }
        if (this->__PVT__repeat_counter_w_ena) {
            this->__Vdly__repeat_counter = (0x7fU & (IData)(this->__PVT__r_8));
        }
        if (this->__PVT__repeat_counter_dec_ena) {
            this->__Vdly__repeat_counter = (0x7fU & 
                                            ((IData)(this->__PVT__repeat_counter) 
                                             - (IData)(1U)));
        }
        if (this->__PVT__unrepeat_counter_w_ena) {
            this->__Vdly__unrepeat_counter = (0x7fU 
                                              & (IData)(this->__PVT__r_8));
        }
        if (this->__PVT__unrepeat_counter_dec_ena) {
            this->__Vdly__unrepeat_counter = (0x7fU 
                                              & ((IData)(this->__PVT__unrepeat_counter) 
                                                 - (IData)(1U)));
        }
        if (this->__PVT__pixel_reg_w_ena) {
            this->__PVT__pixel_reg = this->__PVT__r_8;
        }
        if (this->__PVT__fifo_front_128_inc_ena) {
            this->__Vdly__fifo_front_128 = (0xffU & 
                                            ((IData)(1U) 
                                             + (IData)(this->__PVT__fifo_front_128)));
        }
        if (this->__PVT__fifo_rear_128_inc_ena) {
            this->__Vdly__fifo_rear_128 = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(this->__PVT__fifo_rear_128)));
        }
        if (this->__PVT__fifo_front_256_inc_ena) {
            this->__Vdly__fifo_front_256 = (0x1ffU 
                                            & ((IData)(1U) 
                                               + (IData)(this->__PVT__fifo_front_256)));
        }
        if (this->__PVT__fifo_rear_256_inc_ena) {
            this->__Vdly__fifo_rear_256 = (0x1ffU & 
                                           ((IData)(1U) 
                                            + (IData)(this->__PVT__fifo_rear_256)));
        }
        if (this->__PVT__compressed_FIFO_reg_64_w_ena) {
            this->__PVT__compressed_FIFO_reg_64 = this->__PVT__compressed_fifo_r_data;
        }
        if (this->__PVT__compressed_FIFO_reg_counter_inc_ena) {
            this->__Vdly__compressed_FIFO_reg_counter 
                = (7U & ((IData)(1U) + (IData)(this->__PVT__compressed_FIFO_reg_counter)));
        }
        if (this->__PVT__compressed_FIFO_reg_counter_reset) {
            this->__Vdly__compressed_FIFO_reg_counter = 0U;
        }
        if ((1U & ((((((((IData)(this->__PVT__decompressed_FIFO_reg_wstrb) 
                         | ((IData)(this->__PVT__decompressed_FIFO_reg_wstrb) 
                            >> 1U)) | ((IData)(this->__PVT__decompressed_FIFO_reg_wstrb) 
                                       >> 2U)) | ((IData)(this->__PVT__decompressed_FIFO_reg_wstrb) 
                                                  >> 3U)) 
                      | ((IData)(this->__PVT__decompressed_FIFO_reg_wstrb) 
                         >> 4U)) | ((IData)(this->__PVT__decompressed_FIFO_reg_wstrb) 
                                    >> 5U)) | ((IData)(this->__PVT__decompressed_FIFO_reg_wstrb) 
                                               >> 6U)) 
                   | ((IData)(this->__PVT__decompressed_FIFO_reg_wstrb) 
                      >> 7U)))) {
            this->__Vdly__decompressed_FIFO_reg_64 
                = ((1U & (IData)(this->__PVT__decompressed_FIFO_reg_wstrb))
                    ? ((0xffffffffffffff00ULL & this->__PVT__decompressed_FIFO_reg_64) 
                       | (QData)((IData)(this->__PVT__w_8)))
                    : ((2U & (IData)(this->__PVT__decompressed_FIFO_reg_wstrb))
                        ? ((0xffffffffffff0000ULL & this->__PVT__decompressed_FIFO_reg_64) 
                           | (QData)((IData)((((IData)(this->__PVT__w_8) 
                                               << 8U) 
                                              | (0xffU 
                                                 & (IData)(this->__PVT__decompressed_FIFO_reg_64))))))
                        : ((4U & (IData)(this->__PVT__decompressed_FIFO_reg_wstrb))
                            ? ((0xffffffffff000000ULL 
                                & this->__PVT__decompressed_FIFO_reg_64) 
                               | (QData)((IData)((((IData)(this->__PVT__w_8) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & (IData)(this->__PVT__decompressed_FIFO_reg_64))))))
                            : ((8U & (IData)(this->__PVT__decompressed_FIFO_reg_wstrb))
                                ? (((QData)((IData)(
                                                    (this->__PVT__decompressed_FIFO_reg_64 
                                                     >> 0x20U))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(this->__PVT__w_8) 
                                                                  << 0x18U) 
                                                                 | (0xffffffU 
                                                                    & (IData)(this->__PVT__decompressed_FIFO_reg_64))))))
                                : ((0x10U & (IData)(this->__PVT__decompressed_FIFO_reg_wstrb))
                                    ? (((QData)((IData)(
                                                        ((0xffffff00U 
                                                          & ((IData)(
                                                                     (this->__PVT__decompressed_FIFO_reg_64 
                                                                      >> 0x28U)) 
                                                             << 8U)) 
                                                         | (IData)(this->__PVT__w_8)))) 
                                        << 0x20U) | (QData)((IData)(this->__PVT__decompressed_FIFO_reg_64)))
                                    : ((0x20U & (IData)(this->__PVT__decompressed_FIFO_reg_wstrb))
                                        ? (((QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (this->__PVT__decompressed_FIFO_reg_64 
                                                                        >> 0x30U))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(this->__PVT__w_8)) 
                                               << 0x28U) 
                                              | (0xffffffffffULL 
                                                 & this->__PVT__decompressed_FIFO_reg_64)))
                                        : ((0x40U & (IData)(this->__PVT__decompressed_FIFO_reg_wstrb))
                                            ? (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(
                                                                           (this->__PVT__decompressed_FIFO_reg_64 
                                                                            >> 0x38U))))) 
                                                << 0x38U) 
                                               | (((QData)((IData)(this->__PVT__w_8)) 
                                                   << 0x30U) 
                                                  | (0xffffffffffffULL 
                                                     & this->__PVT__decompressed_FIFO_reg_64)))
                                            : (((QData)((IData)(this->__PVT__w_8)) 
                                                << 0x38U) 
                                               | (0xffffffffffffffULL 
                                                  & this->__PVT__decompressed_FIFO_reg_64)))))))));
        }
        if (this->__PVT__decompressed_FIFO_reg_counter_inc_ena) {
            this->__Vdly__decompressed_FIFO_reg_counter 
                = (7U & ((IData)(1U) + (IData)(this->__PVT__decompressed_FIFO_reg_counter)));
        }
        if (this->__PVT__decompressed_FIFO_reg_counter_reset) {
            this->__Vdly__decompressed_FIFO_reg_counter = 0U;
        }
        if (this->__PVT__r_8_reg_w_ena) {
            this->__PVT__r_8_reg = this->__PVT__r_8;
        }
    } else {
        this->__Vdly__fifo_front_128 = 0U;
        this->__Vdly__fifo_front_256 = 0U;
        this->__Vdly__fifo_rear_128 = 0U;
        this->__Vdly__fifo_rear_256 = 0U;
        this->__Vdly__repeat_counter = 0U;
        this->__Vdly__unrepeat_counter = 0U;
        this->__Vdly__compressed_FIFO_reg_counter = 0U;
        this->__Vdly__decompressed_FIFO_reg_64 = 0ULL;
        this->__Vdly__decompressed_FIFO_reg_counter = 0U;
        this->__PVT__pixel_reg = 0U;
        this->__PVT__compressed_FIFO_reg_64 = 0ULL;
        this->__PVT__r_8_reg = 0U;
    }
    this->__PVT__fifo_front_256 = this->__Vdly__fifo_front_256;
    this->__PVT__fifo_rear_256 = this->__Vdly__fifo_rear_256;
    this->__PVT__repeat_counter = this->__Vdly__repeat_counter;
    this->__PVT__unrepeat_counter = this->__Vdly__unrepeat_counter;
    this->__PVT__decompressed_FIFO_reg_64 = this->__Vdly__decompressed_FIFO_reg_64;
    this->__PVT__compressed_FIFO_reg_counter = this->__Vdly__compressed_FIFO_reg_counter;
    this->__PVT__decompressed_FIFO_reg_counter = this->__Vdly__decompressed_FIFO_reg_counter;
    this->__PVT__fifo_front_128 = this->__Vdly__fifo_front_128;
    this->__PVT__fifo_rear_128 = this->__Vdly__fifo_rear_128;
    this->__PVT__fifo_empty_128 = ((IData)(this->__PVT__fifo_front_128) 
                                   == (IData)(this->__PVT__fifo_rear_128));
    this->__PVT__fifo_full_128 = (((0x7fU & (IData)(this->__PVT__fifo_front_128)) 
                                   == (0x7fU & (IData)(this->__PVT__fifo_rear_128))) 
                                  & ((1U & ((IData)(this->__PVT__fifo_front_128) 
                                            >> 7U)) 
                                     != (1U & ((IData)(this->__PVT__fifo_rear_128) 
                                               >> 7U))));
    if (vlTOPp->resetn) {
        this->__PVT__r_state = this->__PVT__r_state_next;
        this->__PVT__w_state = this->__PVT__w_state_next;
        this->__PVT__decompress_state = this->__PVT__decompress_state_next;
    } else {
        this->__PVT__r_state = 0U;
        this->__PVT__w_state = 0U;
        this->__PVT__decompress_state = 0U;
    }
    this->__PVT__compressed_FIFO_reg_64_w_ena = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__compressed_FIFO_reg_64_w_ena = 1U;
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
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni1__31(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni1__31\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->Decompressed_FIFO_r_master = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
             & (0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->Compressed_FIFO_dequeue = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
             & (0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_uni1__41(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_uni1__41\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__r_8_reg_w_ena = 1U;
                    }
                } else {
                    if ((9U != (IData)(this->__PVT__decompress_state))) {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
                                this->__PVT__pixel_reg_w_ena = 1U;
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
                                 & (~ (IData)(vlTOPp->clk))));
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__w_8 = this->__PVT__r_8;
                    }
                } else {
                    if ((9U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__w_8 = this->__PVT__r_8_reg;
                    } else {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
    this->__PVT__fifo_front_128_inc_ena = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->uni1_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__fifo_front_128_inc_ena = 1U;
        }
    }
    this->__PVT__decompressed_fifo_r_state_next = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->uni1_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__decompressed_fifo_r_state_next = 1U;
        }
    }
    this->BRAM10_en_b = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->uni1_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM10_en_b = 1U;
        }
    }
    this->BRAM10_addr_b = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->uni1_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM10_addr_b = (0x7fU & (IData)(this->__PVT__fifo_front_128));
        }
    }
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((2U == (IData)(this->__PVT__decompress_state))
                                          ? 2U : ((
                                                   (0U 
                                                    == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                                                   & (((1U 
                                                        == (IData)(this->__PVT__r_state)) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
                                                      & (0U 
                                                         == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))))
                                                   ? 6U
                                                   : 1U));
        } else {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__r_state_next = 7U;
                if ((2U == (IData)(this->__PVT__decompress_state))) {
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
                    if ((2U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__r_state_next = 2U;
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
    this->__PVT__decompressed_fifo_w_ena = (((((1U 
                                                == (IData)(this->__PVT__w_state)) 
                                               & (7U 
                                                  == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                                              & (IData)(this->__PVT__w_8_valid)) 
                                             | (8U 
                                                == (IData)(this->__PVT__w_state))) 
                                            | (0xbU 
                                               == (IData)(this->__PVT__w_state)));
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
    this->__PVT__fifo_rear_128_inc_ena = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->__PVT__fifo_rear_128_inc_ena = 1U;
        }
    }
    this->BRAM10_en_a = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_en_a = 1U;
        }
    }
    this->BRAM10_we_a = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_we_a = 1U;
        }
    }
    this->BRAM10_addr_a = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_addr_a = (0x7fU & (IData)(this->__PVT__fifo_rear_128));
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_128))));
    this->BRAM10_din_a = 0ULL;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
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
            if ((2U == (IData)(this->__PVT__decompress_state))) {
                this->__PVT__w_state_next = 0xbU;
            }
        } else {
            if ((8U == (IData)(this->__PVT__w_state))) {
                this->__PVT__w_state_next = ((IData)(this->__PVT__decompressed_fifo_w_end)
                                              ? ((2U 
                                                  == (IData)(this->__PVT__decompress_state))
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if (((~ (IData)(vlTOPp->clk)) & (0U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(this->__PVT__r_8))))) {
                    this->__PVT__decompress_state_next = 2U;
                } else {
                    if (vlTOPp->clk) {
                        this->__PVT__decompress_state_next = 1U;
                    } else {
                        if ((0x80U & (IData)(this->__PVT__r_8))) {
                            if ((0x80U & (IData)(this->__PVT__r_8))) {
                                this->__PVT__decompress_state_next = 3U;
                            }
                        } else {
                            this->__PVT__decompress_state_next = 4U;
                        }
                    }
                }
            } else {
                if ((4U == (IData)(this->__PVT__decompress_state))) {
                    this->__PVT__decompress_state_next 
                        = ((IData)(vlTOPp->clk) ? 4U
                            : ((IData)(this->__PVT__w_8_ready)
                                ? ((1U == (IData)(this->__PVT__unrepeat_counter))
                                    ? 1U : 4U) : 9U));
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
                            if (vlTOPp->clk) {
                                this->__PVT__decompress_state_next = 3U;
                            } else {
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
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_uni2__11(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_uni2__11\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__compressed_fifo_r_data = 0ULL;
    if (this->__PVT__compressed_fifo_r_state) {
        if (this->__PVT__compressed_fifo_r_state) {
            this->__PVT__compressed_fifo_r_data = vlTOPp->pixel_fifo_top__DOT__uni2_comp_data;
        }
    } else {
        this->__PVT__compressed_fifo_r_data = 0ULL;
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni2__32(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_uni2__32\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->Decompressed_FIFO_r_master = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
             & (1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->Compressed_FIFO_dequeue = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
             & (1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_uni2__42(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_uni2__42\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__r_8_reg_w_ena = 1U;
                    }
                } else {
                    if ((9U != (IData)(this->__PVT__decompress_state))) {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
                                this->__PVT__pixel_reg_w_ena = 1U;
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
                                 & (~ (IData)(vlTOPp->clk))));
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__w_8 = this->__PVT__r_8;
                    }
                } else {
                    if ((9U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__w_8 = this->__PVT__r_8_reg;
                    } else {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
    this->__PVT__fifo_front_128_inc_ena = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->uni2_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__fifo_front_128_inc_ena = 1U;
        }
    }
    this->__PVT__decompressed_fifo_r_state_next = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->uni2_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__decompressed_fifo_r_state_next = 1U;
        }
    }
    this->BRAM10_en_b = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->uni2_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM10_en_b = 1U;
        }
    }
    this->BRAM10_addr_b = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->uni2_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM10_addr_b = (0x1ffU & ((IData)(0x80U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_front_128))));
        }
    }
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((2U == (IData)(this->__PVT__decompress_state))
                                          ? 2U : ((
                                                   (1U 
                                                    == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                                                   & (((1U 
                                                        == (IData)(this->__PVT__r_state)) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
                                                      & (1U 
                                                         == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))))
                                                   ? 6U
                                                   : 1U));
        } else {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__r_state_next = 7U;
                if ((2U == (IData)(this->__PVT__decompress_state))) {
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
                    if ((2U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__r_state_next = 2U;
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
    this->__PVT__decompressed_fifo_w_ena = (((((1U 
                                                == (IData)(this->__PVT__w_state)) 
                                               & (7U 
                                                  == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                                              & (IData)(this->__PVT__w_8_valid)) 
                                             | (8U 
                                                == (IData)(this->__PVT__w_state))) 
                                            | (0xbU 
                                               == (IData)(this->__PVT__w_state)));
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
    this->__PVT__fifo_rear_128_inc_ena = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->__PVT__fifo_rear_128_inc_ena = 1U;
        }
    }
    this->BRAM10_en_a = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_en_a = 1U;
        }
    }
    this->BRAM10_we_a = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_we_a = 1U;
        }
    }
    this->BRAM10_addr_a = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_addr_a = (0x1ffU & ((IData)(0x80U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_rear_128))));
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_128))));
    this->BRAM10_din_a = 0ULL;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
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
            if ((2U == (IData)(this->__PVT__decompress_state))) {
                this->__PVT__w_state_next = 0xbU;
            }
        } else {
            if ((8U == (IData)(this->__PVT__w_state))) {
                this->__PVT__w_state_next = ((IData)(this->__PVT__decompressed_fifo_w_end)
                                              ? ((2U 
                                                  == (IData)(this->__PVT__decompress_state))
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if (((~ (IData)(vlTOPp->clk)) & (0U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(this->__PVT__r_8))))) {
                    this->__PVT__decompress_state_next = 2U;
                } else {
                    if (vlTOPp->clk) {
                        this->__PVT__decompress_state_next = 1U;
                    } else {
                        if ((0x80U & (IData)(this->__PVT__r_8))) {
                            if ((0x80U & (IData)(this->__PVT__r_8))) {
                                this->__PVT__decompress_state_next = 3U;
                            }
                        } else {
                            this->__PVT__decompress_state_next = 4U;
                        }
                    }
                }
            } else {
                if ((4U == (IData)(this->__PVT__decompress_state))) {
                    this->__PVT__decompress_state_next 
                        = ((IData)(vlTOPp->clk) ? 4U
                            : ((IData)(this->__PVT__w_8_ready)
                                ? ((1U == (IData)(this->__PVT__unrepeat_counter))
                                    ? 1U : 4U) : 9U));
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
                            if (vlTOPp->clk) {
                                this->__PVT__decompress_state_next = 3U;
                            } else {
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
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_script__14(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_script__14\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__compressed_fifo_r_data = 0ULL;
    if (this->__PVT__compressed_fifo_r_state) {
        if (this->__PVT__compressed_fifo_r_state) {
            this->__PVT__compressed_fifo_r_data = vlTOPp->pixel_fifo_top__DOT__sc_comp_data;
        }
    } else {
        this->__PVT__compressed_fifo_r_data = 0ULL;
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_script__33(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_script__33\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->Decompressed_FIFO_r_master = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
             & (2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->Compressed_FIFO_dequeue = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
             & (2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_script__43(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_script__43\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__r_8_reg_w_ena = 1U;
                    }
                } else {
                    if ((9U != (IData)(this->__PVT__decompress_state))) {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
                                this->__PVT__pixel_reg_w_ena = 1U;
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
                                 & (~ (IData)(vlTOPp->clk))));
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__w_8 = this->__PVT__r_8;
                    }
                } else {
                    if ((9U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__w_8 = this->__PVT__r_8_reg;
                    } else {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
    this->__PVT__fifo_front_128_inc_ena = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->sc_decomp_dequeue) & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__fifo_front_128_inc_ena = 1U;
        }
    }
    this->__PVT__decompressed_fifo_r_state_next = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->sc_decomp_dequeue) & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__decompressed_fifo_r_state_next = 1U;
        }
    }
    this->BRAM10_en_b = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->sc_decomp_dequeue) & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM10_en_b = 1U;
        }
    }
    this->BRAM10_addr_b = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->sc_decomp_dequeue) & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM10_addr_b = (0x1ffU & ((IData)(0x100U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_front_128))));
        }
    }
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((2U == (IData)(this->__PVT__decompress_state))
                                          ? 2U : ((
                                                   (2U 
                                                    == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                                                   & (((1U 
                                                        == (IData)(this->__PVT__r_state)) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
                                                      & (2U 
                                                         == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))))
                                                   ? 6U
                                                   : 1U));
        } else {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__r_state_next = 7U;
                if ((2U == (IData)(this->__PVT__decompress_state))) {
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
                    if ((2U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__r_state_next = 2U;
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
    this->__PVT__decompressed_fifo_w_ena = (((((1U 
                                                == (IData)(this->__PVT__w_state)) 
                                               & (7U 
                                                  == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                                              & (IData)(this->__PVT__w_8_valid)) 
                                             | (8U 
                                                == (IData)(this->__PVT__w_state))) 
                                            | (0xbU 
                                               == (IData)(this->__PVT__w_state)));
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
    this->__PVT__fifo_rear_128_inc_ena = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->__PVT__fifo_rear_128_inc_ena = 1U;
        }
    }
    this->BRAM10_en_a = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_en_a = 1U;
        }
    }
    this->BRAM10_we_a = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_we_a = 1U;
        }
    }
    this->BRAM10_addr_a = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_addr_a = (0x1ffU & ((IData)(0x100U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_rear_128))));
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_128))));
    this->BRAM10_din_a = 0ULL;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
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
            if ((2U == (IData)(this->__PVT__decompress_state))) {
                this->__PVT__w_state_next = 0xbU;
            }
        } else {
            if ((8U == (IData)(this->__PVT__w_state))) {
                this->__PVT__w_state_next = ((IData)(this->__PVT__decompressed_fifo_w_end)
                                              ? ((2U 
                                                  == (IData)(this->__PVT__decompress_state))
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if (((~ (IData)(vlTOPp->clk)) & (0U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(this->__PVT__r_8))))) {
                    this->__PVT__decompress_state_next = 2U;
                } else {
                    if (vlTOPp->clk) {
                        this->__PVT__decompress_state_next = 1U;
                    } else {
                        if ((0x80U & (IData)(this->__PVT__r_8))) {
                            if ((0x80U & (IData)(this->__PVT__r_8))) {
                                this->__PVT__decompress_state_next = 3U;
                            }
                        } else {
                            this->__PVT__decompress_state_next = 4U;
                        }
                    }
                }
            } else {
                if ((4U == (IData)(this->__PVT__decompress_state))) {
                    this->__PVT__decompress_state_next 
                        = ((IData)(vlTOPp->clk) ? 4U
                            : ((IData)(this->__PVT__w_8_ready)
                                ? ((1U == (IData)(this->__PVT__unrepeat_counter))
                                    ? 1U : 4U) : 9U));
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
                            if (vlTOPp->clk) {
                                this->__PVT__decompress_state_next = 3U;
                            } else {
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
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_status__13(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_status__13\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__compressed_fifo_r_data = 0ULL;
    if (this->__PVT__compressed_fifo_r_state) {
        if (this->__PVT__compressed_fifo_r_state) {
            this->__PVT__compressed_fifo_r_data = vlTOPp->pixel_fifo_top__DOT__st_comp_data;
        }
    } else {
        this->__PVT__compressed_fifo_r_data = 0ULL;
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_status__34(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_status__34\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->Decompressed_FIFO_r_master = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
             & (3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->Compressed_FIFO_dequeue = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
             & (3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_status__44(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_status__44\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__r_8_reg_w_ena = 1U;
                    }
                } else {
                    if ((9U != (IData)(this->__PVT__decompress_state))) {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
                                this->__PVT__pixel_reg_w_ena = 1U;
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
                                 & (~ (IData)(vlTOPp->clk))));
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__w_8 = this->__PVT__r_8;
                    }
                } else {
                    if ((9U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__w_8 = this->__PVT__r_8_reg;
                    } else {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
    this->__PVT__fifo_front_128_inc_ena = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->st_decomp_dequeue) & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__fifo_front_128_inc_ena = 1U;
        }
    }
    this->__PVT__decompressed_fifo_r_state_next = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->st_decomp_dequeue) & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__decompressed_fifo_r_state_next = 1U;
        }
    }
    this->BRAM10_en_b = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->st_decomp_dequeue) & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM10_en_b = 1U;
        }
    }
    this->BRAM10_addr_b = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->st_decomp_dequeue) & (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM10_addr_b = (0x1ffU & ((IData)(0x180U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_front_128))));
        }
    }
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((2U == (IData)(this->__PVT__decompress_state))
                                          ? 2U : ((
                                                   (3U 
                                                    == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                                                   & (((1U 
                                                        == (IData)(this->__PVT__r_state)) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
                                                      & (3U 
                                                         == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))))
                                                   ? 6U
                                                   : 1U));
        } else {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__r_state_next = 7U;
                if ((2U == (IData)(this->__PVT__decompress_state))) {
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
                    if ((2U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__r_state_next = 2U;
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
    this->__PVT__decompressed_fifo_w_ena = (((((1U 
                                                == (IData)(this->__PVT__w_state)) 
                                               & (7U 
                                                  == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                                              & (IData)(this->__PVT__w_8_valid)) 
                                             | (8U 
                                                == (IData)(this->__PVT__w_state))) 
                                            | (0xbU 
                                               == (IData)(this->__PVT__w_state)));
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
    this->__PVT__fifo_rear_128_inc_ena = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->__PVT__fifo_rear_128_inc_ena = 1U;
        }
    }
    this->BRAM10_en_a = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_en_a = 1U;
        }
    }
    this->BRAM10_we_a = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_we_a = 1U;
        }
    }
    this->BRAM10_addr_a = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_addr_a = (0x1ffU & ((IData)(0x180U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_rear_128))));
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_128))));
    this->BRAM10_din_a = 0ULL;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM10_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
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
            if ((2U == (IData)(this->__PVT__decompress_state))) {
                this->__PVT__w_state_next = 0xbU;
            }
        } else {
            if ((8U == (IData)(this->__PVT__w_state))) {
                this->__PVT__w_state_next = ((IData)(this->__PVT__decompressed_fifo_w_end)
                                              ? ((2U 
                                                  == (IData)(this->__PVT__decompress_state))
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if (((~ (IData)(vlTOPp->clk)) & (0U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(this->__PVT__r_8))))) {
                    this->__PVT__decompress_state_next = 2U;
                } else {
                    if (vlTOPp->clk) {
                        this->__PVT__decompress_state_next = 1U;
                    } else {
                        if ((0x80U & (IData)(this->__PVT__r_8))) {
                            if ((0x80U & (IData)(this->__PVT__r_8))) {
                                this->__PVT__decompress_state_next = 3U;
                            }
                        } else {
                            this->__PVT__decompress_state_next = 4U;
                        }
                    }
                }
            } else {
                if ((4U == (IData)(this->__PVT__decompress_state))) {
                    this->__PVT__decompress_state_next 
                        = ((IData)(vlTOPp->clk) ? 4U
                            : ((IData)(this->__PVT__w_8_ready)
                                ? ((1U == (IData)(this->__PVT__unrepeat_counter))
                                    ? 1U : 4U) : 9U));
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
                            if (vlTOPp->clk) {
                                this->__PVT__decompress_state_next = 3U;
                            } else {
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
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_ch1__18(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_ch1__18\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__compressed_fifo_r_data = 0ULL;
    if (this->__PVT__compressed_fifo_r_state) {
        if (this->__PVT__compressed_fifo_r_state) {
            this->__PVT__compressed_fifo_r_data = vlTOPp->pixel_fifo_top__DOT__ch1_comp_data;
        }
    } else {
        this->__PVT__compressed_fifo_r_data = 0ULL;
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_ch1__35(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_ch1__35\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->Decompressed_FIFO_r_master = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
             & (0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->Compressed_FIFO_dequeue = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
             & (0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_ch1__45(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_ch1__45\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__r_8_reg_w_ena = 1U;
                    }
                } else {
                    if ((9U != (IData)(this->__PVT__decompress_state))) {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
                                this->__PVT__pixel_reg_w_ena = 1U;
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
                                 & (~ (IData)(vlTOPp->clk))));
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__w_8 = this->__PVT__r_8;
                    }
                } else {
                    if ((9U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__w_8 = this->__PVT__r_8_reg;
                    } else {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
    this->__PVT__fifo_front_128_inc_ena = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->ch1_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__fifo_front_128_inc_ena = 1U;
        }
    }
    this->__PVT__decompressed_fifo_r_state_next = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->ch1_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__decompressed_fifo_r_state_next = 2U;
        }
    }
    this->BRAM11_en_b = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->ch1_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM11_en_b = 1U;
        }
    }
    this->BRAM11_addr_b = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->ch1_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM11_addr_b = (0x7fU & (IData)(this->__PVT__fifo_front_128));
        }
    }
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((2U == (IData)(this->__PVT__decompress_state))
                                          ? 2U : ((
                                                   (0U 
                                                    == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                                                   & (((1U 
                                                        == (IData)(this->__PVT__r_state)) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
                                                      & (0U 
                                                         == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))))
                                                   ? 6U
                                                   : 1U));
        } else {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__r_state_next = 7U;
                if ((2U == (IData)(this->__PVT__decompress_state))) {
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
                    if ((2U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__r_state_next = 2U;
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
    this->__PVT__decompressed_fifo_w_ena = (((((1U 
                                                == (IData)(this->__PVT__w_state)) 
                                               & (7U 
                                                  == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                                              & (IData)(this->__PVT__w_8_valid)) 
                                             | (8U 
                                                == (IData)(this->__PVT__w_state))) 
                                            | (0xbU 
                                               == (IData)(this->__PVT__w_state)));
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
    this->__PVT__fifo_rear_128_inc_ena = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->__PVT__fifo_rear_128_inc_ena = 1U;
        }
    }
    this->BRAM11_en_a = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_en_a = 1U;
        }
    }
    this->BRAM11_we_a = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_we_a = 1U;
        }
    }
    this->BRAM11_addr_a = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_addr_a = (0x7fU & (IData)(this->__PVT__fifo_rear_128));
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_128))));
    this->BRAM11_din_a = 0ULL;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
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
            if ((2U == (IData)(this->__PVT__decompress_state))) {
                this->__PVT__w_state_next = 0xbU;
            }
        } else {
            if ((8U == (IData)(this->__PVT__w_state))) {
                this->__PVT__w_state_next = ((IData)(this->__PVT__decompressed_fifo_w_end)
                                              ? ((2U 
                                                  == (IData)(this->__PVT__decompress_state))
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if (((~ (IData)(vlTOPp->clk)) & (0U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(this->__PVT__r_8))))) {
                    this->__PVT__decompress_state_next = 2U;
                } else {
                    if (vlTOPp->clk) {
                        this->__PVT__decompress_state_next = 1U;
                    } else {
                        if ((0x80U & (IData)(this->__PVT__r_8))) {
                            if ((0x80U & (IData)(this->__PVT__r_8))) {
                                this->__PVT__decompress_state_next = 3U;
                            }
                        } else {
                            this->__PVT__decompress_state_next = 4U;
                        }
                    }
                }
            } else {
                if ((4U == (IData)(this->__PVT__decompress_state))) {
                    this->__PVT__decompress_state_next 
                        = ((IData)(vlTOPp->clk) ? 4U
                            : ((IData)(this->__PVT__w_8_ready)
                                ? ((1U == (IData)(this->__PVT__unrepeat_counter))
                                    ? 1U : 4U) : 9U));
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
                            if (vlTOPp->clk) {
                                this->__PVT__decompress_state_next = 3U;
                            } else {
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
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_ch2__17(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_ch2__17\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__compressed_fifo_r_data = 0ULL;
    if (this->__PVT__compressed_fifo_r_state) {
        if (this->__PVT__compressed_fifo_r_state) {
            this->__PVT__compressed_fifo_r_data = vlTOPp->pixel_fifo_top__DOT__ch2_comp_data;
        }
    } else {
        this->__PVT__compressed_fifo_r_data = 0ULL;
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_ch2__36(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_ch2__36\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->Decompressed_FIFO_r_master = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
             & (1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->Compressed_FIFO_dequeue = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
             & (1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_ch2__46(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_ch2__46\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__r_8_reg_w_ena = 1U;
                    }
                } else {
                    if ((9U != (IData)(this->__PVT__decompress_state))) {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
                                this->__PVT__pixel_reg_w_ena = 1U;
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
                                 & (~ (IData)(vlTOPp->clk))));
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__w_8 = this->__PVT__r_8;
                    }
                } else {
                    if ((9U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__w_8 = this->__PVT__r_8_reg;
                    } else {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
    this->__PVT__fifo_front_128_inc_ena = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->ch2_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__fifo_front_128_inc_ena = 1U;
        }
    }
    this->__PVT__decompressed_fifo_r_state_next = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->ch2_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__decompressed_fifo_r_state_next = 2U;
        }
    }
    this->BRAM11_en_b = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->ch2_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM11_en_b = 1U;
        }
    }
    this->BRAM11_addr_b = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->ch2_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM11_addr_b = (0x1ffU & ((IData)(0x80U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_front_128))));
        }
    }
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((2U == (IData)(this->__PVT__decompress_state))
                                          ? 2U : ((
                                                   (1U 
                                                    == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                                                   & (((1U 
                                                        == (IData)(this->__PVT__r_state)) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
                                                      & (1U 
                                                         == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))))
                                                   ? 6U
                                                   : 1U));
        } else {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__r_state_next = 7U;
                if ((2U == (IData)(this->__PVT__decompress_state))) {
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
                    if ((2U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__r_state_next = 2U;
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
    this->__PVT__decompressed_fifo_w_ena = (((((1U 
                                                == (IData)(this->__PVT__w_state)) 
                                               & (7U 
                                                  == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                                              & (IData)(this->__PVT__w_8_valid)) 
                                             | (8U 
                                                == (IData)(this->__PVT__w_state))) 
                                            | (0xbU 
                                               == (IData)(this->__PVT__w_state)));
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
    this->__PVT__fifo_rear_128_inc_ena = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->__PVT__fifo_rear_128_inc_ena = 1U;
        }
    }
    this->BRAM11_en_a = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_en_a = 1U;
        }
    }
    this->BRAM11_we_a = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_we_a = 1U;
        }
    }
    this->BRAM11_addr_a = 0U;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_addr_a = (0x1ffU & ((IData)(0x80U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_rear_128))));
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_128))));
    this->BRAM11_din_a = 0ULL;
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
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
            if ((2U == (IData)(this->__PVT__decompress_state))) {
                this->__PVT__w_state_next = 0xbU;
            }
        } else {
            if ((8U == (IData)(this->__PVT__w_state))) {
                this->__PVT__w_state_next = ((IData)(this->__PVT__decompressed_fifo_w_end)
                                              ? ((2U 
                                                  == (IData)(this->__PVT__decompress_state))
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if (((~ (IData)(vlTOPp->clk)) & (0U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(this->__PVT__r_8))))) {
                    this->__PVT__decompress_state_next = 2U;
                } else {
                    if (vlTOPp->clk) {
                        this->__PVT__decompress_state_next = 1U;
                    } else {
                        if ((0x80U & (IData)(this->__PVT__r_8))) {
                            if ((0x80U & (IData)(this->__PVT__r_8))) {
                                this->__PVT__decompress_state_next = 3U;
                            }
                        } else {
                            this->__PVT__decompress_state_next = 4U;
                        }
                    }
                }
            } else {
                if ((4U == (IData)(this->__PVT__decompress_state))) {
                    this->__PVT__decompress_state_next 
                        = ((IData)(vlTOPp->clk) ? 4U
                            : ((IData)(this->__PVT__w_8_ready)
                                ? ((1U == (IData)(this->__PVT__unrepeat_counter))
                                    ? 1U : 4U) : 9U));
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
                            if (vlTOPp->clk) {
                                this->__PVT__decompress_state_next = 3U;
                            } else {
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
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_ch3__16(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_ch3__16\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__compressed_fifo_r_data = 0ULL;
    if (this->__PVT__compressed_fifo_r_state) {
        if (this->__PVT__compressed_fifo_r_state) {
            this->__PVT__compressed_fifo_r_data = vlTOPp->pixel_fifo_top__DOT__ch3_comp_data;
        }
    } else {
        this->__PVT__compressed_fifo_r_data = 0ULL;
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_ch3__37(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_ch3__37\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->Decompressed_FIFO_r_master = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
             & (2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->Compressed_FIFO_dequeue = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
             & (2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_ch3__47(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_ch3__47\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__r_8_reg_w_ena = 1U;
                    }
                } else {
                    if ((9U != (IData)(this->__PVT__decompress_state))) {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
                                this->__PVT__pixel_reg_w_ena = 1U;
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
                                 & (~ (IData)(vlTOPp->clk))));
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__w_8 = this->__PVT__r_8;
                    }
                } else {
                    if ((9U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__w_8 = this->__PVT__r_8_reg;
                    } else {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
    this->__PVT__fifo_front_128_inc_ena = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->ch3_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__fifo_front_128_inc_ena = 1U;
        }
    }
    this->__PVT__decompressed_fifo_r_state_next = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->ch3_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__decompressed_fifo_r_state_next = 2U;
        }
    }
    this->BRAM11_en_b = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->ch3_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM11_en_b = 1U;
        }
    }
    this->BRAM11_addr_b = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->ch3_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM11_addr_b = (0x1ffU & ((IData)(0x100U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_front_128))));
        }
    }
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((2U == (IData)(this->__PVT__decompress_state))
                                          ? 2U : ((
                                                   (2U 
                                                    == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                                                   & (((1U 
                                                        == (IData)(this->__PVT__r_state)) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
                                                      & (2U 
                                                         == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))))
                                                   ? 6U
                                                   : 1U));
        } else {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__r_state_next = 7U;
                if ((2U == (IData)(this->__PVT__decompress_state))) {
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
                    if ((2U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__r_state_next = 2U;
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
    this->__PVT__decompressed_fifo_w_ena = (((((1U 
                                                == (IData)(this->__PVT__w_state)) 
                                               & (7U 
                                                  == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                                              & (IData)(this->__PVT__w_8_valid)) 
                                             | (8U 
                                                == (IData)(this->__PVT__w_state))) 
                                            | (0xbU 
                                               == (IData)(this->__PVT__w_state)));
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
    this->__PVT__fifo_rear_128_inc_ena = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->__PVT__fifo_rear_128_inc_ena = 1U;
        }
    }
    this->BRAM11_en_a = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_en_a = 1U;
        }
    }
    this->BRAM11_we_a = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_we_a = 1U;
        }
    }
    this->BRAM11_addr_a = 0U;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_addr_a = (0x1ffU & ((IData)(0x100U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_rear_128))));
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_128))));
    this->BRAM11_din_a = 0ULL;
    if ((2U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
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
            if ((2U == (IData)(this->__PVT__decompress_state))) {
                this->__PVT__w_state_next = 0xbU;
            }
        } else {
            if ((8U == (IData)(this->__PVT__w_state))) {
                this->__PVT__w_state_next = ((IData)(this->__PVT__decompressed_fifo_w_end)
                                              ? ((2U 
                                                  == (IData)(this->__PVT__decompress_state))
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if (((~ (IData)(vlTOPp->clk)) & (0U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(this->__PVT__r_8))))) {
                    this->__PVT__decompress_state_next = 2U;
                } else {
                    if (vlTOPp->clk) {
                        this->__PVT__decompress_state_next = 1U;
                    } else {
                        if ((0x80U & (IData)(this->__PVT__r_8))) {
                            if ((0x80U & (IData)(this->__PVT__r_8))) {
                                this->__PVT__decompress_state_next = 3U;
                            }
                        } else {
                            this->__PVT__decompress_state_next = 4U;
                        }
                    }
                }
            } else {
                if ((4U == (IData)(this->__PVT__decompress_state))) {
                    this->__PVT__decompress_state_next 
                        = ((IData)(vlTOPp->clk) ? 4U
                            : ((IData)(this->__PVT__w_8_ready)
                                ? ((1U == (IData)(this->__PVT__unrepeat_counter))
                                    ? 1U : 4U) : 9U));
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
                            if (vlTOPp->clk) {
                                this->__PVT__decompress_state_next = 3U;
                            } else {
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
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_ch4__15(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_settle__TOP__pixel_fifo_top__DOT__u_decomp_ch4__15\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__compressed_fifo_r_data = 0ULL;
    if (this->__PVT__compressed_fifo_r_state) {
        if (this->__PVT__compressed_fifo_r_state) {
            this->__PVT__compressed_fifo_r_data = vlTOPp->pixel_fifo_top__DOT__ch4_comp_data;
        }
    } else {
        this->__PVT__compressed_fifo_r_data = 0ULL;
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_ch4__38(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_ch4__38\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->Decompressed_FIFO_r_master = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
             & (3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->Compressed_FIFO_dequeue = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
             & (3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_ch4__48(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_ch4__48\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__r_8_reg_w_ena = 1U;
                    }
                } else {
                    if ((9U != (IData)(this->__PVT__decompress_state))) {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
                                this->__PVT__pixel_reg_w_ena = 1U;
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
                                 & (~ (IData)(vlTOPp->clk))));
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__w_8 = this->__PVT__r_8;
                    }
                } else {
                    if ((9U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__w_8 = this->__PVT__r_8_reg;
                    } else {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
    this->__PVT__fifo_front_128_inc_ena = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->ch4_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__fifo_front_128_inc_ena = 1U;
        }
    }
    this->__PVT__decompressed_fifo_r_state_next = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->ch4_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->__PVT__decompressed_fifo_r_state_next = 2U;
        }
    }
    this->BRAM11_en_b = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->ch4_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM11_en_b = 1U;
        }
    }
    this->BRAM11_addr_b = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(vlTOPp->ch4_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_128)))) {
            this->BRAM11_addr_b = (0x1ffU & ((IData)(0x180U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_front_128))));
        }
    }
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((2U == (IData)(this->__PVT__decompress_state))
                                          ? 2U : ((
                                                   (3U 
                                                    == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                                                   & (((1U 
                                                        == (IData)(this->__PVT__r_state)) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
                                                      & (3U 
                                                         == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))))
                                                   ? 6U
                                                   : 1U));
        } else {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__r_state_next = 7U;
                if ((2U == (IData)(this->__PVT__decompress_state))) {
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
                    if ((2U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__r_state_next = 2U;
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
    this->__PVT__decompressed_fifo_w_ena = (((((1U 
                                                == (IData)(this->__PVT__w_state)) 
                                               & (7U 
                                                  == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                                              & (IData)(this->__PVT__w_8_valid)) 
                                             | (8U 
                                                == (IData)(this->__PVT__w_state))) 
                                            | (0xbU 
                                               == (IData)(this->__PVT__w_state)));
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
    this->__PVT__fifo_rear_128_inc_ena = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->__PVT__fifo_rear_128_inc_ena = 1U;
        }
    }
    this->BRAM11_en_a = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_en_a = 1U;
        }
    }
    this->BRAM11_we_a = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_we_a = 1U;
        }
    }
    this->BRAM11_addr_a = 0U;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_addr_a = (0x1ffU & ((IData)(0x180U) 
                                             + (0x7fU 
                                                & (IData)(this->__PVT__fifo_rear_128))));
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_128))));
    this->BRAM11_din_a = 0ULL;
    if ((3U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_128)))) {
            this->BRAM11_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
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
            if ((2U == (IData)(this->__PVT__decompress_state))) {
                this->__PVT__w_state_next = 0xbU;
            }
        } else {
            if ((8U == (IData)(this->__PVT__w_state))) {
                this->__PVT__w_state_next = ((IData)(this->__PVT__decompressed_fifo_w_end)
                                              ? ((2U 
                                                  == (IData)(this->__PVT__decompress_state))
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if (((~ (IData)(vlTOPp->clk)) & (0U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(this->__PVT__r_8))))) {
                    this->__PVT__decompress_state_next = 2U;
                } else {
                    if (vlTOPp->clk) {
                        this->__PVT__decompress_state_next = 1U;
                    } else {
                        if ((0x80U & (IData)(this->__PVT__r_8))) {
                            if ((0x80U & (IData)(this->__PVT__r_8))) {
                                this->__PVT__decompress_state_next = 3U;
                            }
                        } else {
                            this->__PVT__decompress_state_next = 4U;
                        }
                    }
                }
            } else {
                if ((4U == (IData)(this->__PVT__decompress_state))) {
                    this->__PVT__decompress_state_next 
                        = ((IData)(vlTOPp->clk) ? 4U
                            : ((IData)(this->__PVT__w_8_ready)
                                ? ((1U == (IData)(this->__PVT__unrepeat_counter))
                                    ? 1U : 4U) : 9U));
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
                            if (vlTOPp->clk) {
                                this->__PVT__decompress_state_next = 3U;
                            } else {
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
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_bg1__29(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_bg1__29\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__fifo_rear_128 = this->__PVT__fifo_rear_128;
    this->__Vdly__fifo_front_128 = this->__PVT__fifo_front_128;
    this->__Vdly__unrepeat_counter = this->__PVT__unrepeat_counter;
    this->__Vdly__repeat_counter = this->__PVT__repeat_counter;
    this->__Vdly__decompressed_FIFO_reg_64 = this->__PVT__decompressed_FIFO_reg_64;
    this->__Vdly__compressed_FIFO_reg_counter = this->__PVT__compressed_FIFO_reg_counter;
    this->__Vdly__decompressed_FIFO_reg_counter = this->__PVT__decompressed_FIFO_reg_counter;
    this->__Vdly__fifo_rear_256 = this->__PVT__fifo_rear_256;
    this->__Vdly__fifo_front_256 = this->__PVT__fifo_front_256;
    this->__PVT__compressed_fifo_r_state = ((IData)(vlTOPp->resetn) 
                                            & (IData)(this->__PVT__compressed_fifo_r_state_next));
    this->__PVT__decompressed_fifo_r_state = ((IData)(vlTOPp->resetn)
                                               ? (IData)(this->__PVT__decompressed_fifo_r_state_next)
                                               : 0U);
    if (vlTOPp->resetn) {
        if ((((2U == (IData)(this->__PVT__r_state)) 
              & (2U == (IData)(this->__PVT__w_state))) 
             & (2U == (IData)(this->__PVT__decompress_state)))) {
            this->__Vdly__fifo_front_128 = 0U;
            this->__Vdly__fifo_front_256 = 0U;
            this->__Vdly__fifo_rear_128 = 0U;
            this->__Vdly__fifo_rear_256 = 0U;
            this->__Vdly__repeat_counter = 0U;
            this->__Vdly__unrepeat_counter = 0U;
            this->__PVT__pixel_reg = 0U;
            this->__PVT__compressed_FIFO_reg_64 = 0ULL;
            this->__Vdly__compressed_FIFO_reg_counter = 0U;
            this->__Vdly__decompressed_FIFO_reg_64 = 0ULL;
            this->__Vdly__decompressed_FIFO_reg_counter = 0U;
            this->__PVT__r_8_reg = 0U;
        }
        if (this->__PVT__repeat_counter_w_ena) {
            this->__Vdly__repeat_counter = (0x7fU & (IData)(this->__PVT__r_8));
        }
        if (this->__PVT__repeat_counter_dec_ena) {
            this->__Vdly__repeat_counter = (0x7fU & 
                                            ((IData)(this->__PVT__repeat_counter) 
                                             - (IData)(1U)));
        }
        if (this->__PVT__unrepeat_counter_w_ena) {
            this->__Vdly__unrepeat_counter = (0x7fU 
                                              & (IData)(this->__PVT__r_8));
        }
        if (this->__PVT__unrepeat_counter_dec_ena) {
            this->__Vdly__unrepeat_counter = (0x7fU 
                                              & ((IData)(this->__PVT__unrepeat_counter) 
                                                 - (IData)(1U)));
        }
        if (this->__PVT__pixel_reg_w_ena) {
            this->__PVT__pixel_reg = this->__PVT__r_8;
        }
        if (this->__PVT__fifo_front_128_inc_ena) {
            this->__Vdly__fifo_front_128 = (0xffU & 
                                            ((IData)(1U) 
                                             + (IData)(this->__PVT__fifo_front_128)));
        }
        if (this->__PVT__fifo_rear_128_inc_ena) {
            this->__Vdly__fifo_rear_128 = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(this->__PVT__fifo_rear_128)));
        }
        if (this->__PVT__fifo_front_256_inc_ena) {
            this->__Vdly__fifo_front_256 = (0x1ffU 
                                            & ((IData)(1U) 
                                               + (IData)(this->__PVT__fifo_front_256)));
        }
        if (this->__PVT__fifo_rear_256_inc_ena) {
            this->__Vdly__fifo_rear_256 = (0x1ffU & 
                                           ((IData)(1U) 
                                            + (IData)(this->__PVT__fifo_rear_256)));
        }
        if (this->__PVT__compressed_FIFO_reg_64_w_ena) {
            this->__PVT__compressed_FIFO_reg_64 = this->__PVT__compressed_fifo_r_data;
        }
        if (this->__PVT__compressed_FIFO_reg_counter_inc_ena) {
            this->__Vdly__compressed_FIFO_reg_counter 
                = (7U & ((IData)(1U) + (IData)(this->__PVT__compressed_FIFO_reg_counter)));
        }
        if (this->__PVT__compressed_FIFO_reg_counter_reset) {
            this->__Vdly__compressed_FIFO_reg_counter = 0U;
        }
        if ((1U & ((((((((IData)(this->__PVT__decompressed_FIFO_reg_wstrb) 
                         | ((IData)(this->__PVT__decompressed_FIFO_reg_wstrb) 
                            >> 1U)) | ((IData)(this->__PVT__decompressed_FIFO_reg_wstrb) 
                                       >> 2U)) | ((IData)(this->__PVT__decompressed_FIFO_reg_wstrb) 
                                                  >> 3U)) 
                      | ((IData)(this->__PVT__decompressed_FIFO_reg_wstrb) 
                         >> 4U)) | ((IData)(this->__PVT__decompressed_FIFO_reg_wstrb) 
                                    >> 5U)) | ((IData)(this->__PVT__decompressed_FIFO_reg_wstrb) 
                                               >> 6U)) 
                   | ((IData)(this->__PVT__decompressed_FIFO_reg_wstrb) 
                      >> 7U)))) {
            this->__Vdly__decompressed_FIFO_reg_64 
                = ((1U & (IData)(this->__PVT__decompressed_FIFO_reg_wstrb))
                    ? ((0xffffffffffffff00ULL & this->__PVT__decompressed_FIFO_reg_64) 
                       | (QData)((IData)(this->__PVT__w_8)))
                    : ((2U & (IData)(this->__PVT__decompressed_FIFO_reg_wstrb))
                        ? ((0xffffffffffff0000ULL & this->__PVT__decompressed_FIFO_reg_64) 
                           | (QData)((IData)((((IData)(this->__PVT__w_8) 
                                               << 8U) 
                                              | (0xffU 
                                                 & (IData)(this->__PVT__decompressed_FIFO_reg_64))))))
                        : ((4U & (IData)(this->__PVT__decompressed_FIFO_reg_wstrb))
                            ? ((0xffffffffff000000ULL 
                                & this->__PVT__decompressed_FIFO_reg_64) 
                               | (QData)((IData)((((IData)(this->__PVT__w_8) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & (IData)(this->__PVT__decompressed_FIFO_reg_64))))))
                            : ((8U & (IData)(this->__PVT__decompressed_FIFO_reg_wstrb))
                                ? (((QData)((IData)(
                                                    (this->__PVT__decompressed_FIFO_reg_64 
                                                     >> 0x20U))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(this->__PVT__w_8) 
                                                                  << 0x18U) 
                                                                 | (0xffffffU 
                                                                    & (IData)(this->__PVT__decompressed_FIFO_reg_64))))))
                                : ((0x10U & (IData)(this->__PVT__decompressed_FIFO_reg_wstrb))
                                    ? (((QData)((IData)(
                                                        ((0xffffff00U 
                                                          & ((IData)(
                                                                     (this->__PVT__decompressed_FIFO_reg_64 
                                                                      >> 0x28U)) 
                                                             << 8U)) 
                                                         | (IData)(this->__PVT__w_8)))) 
                                        << 0x20U) | (QData)((IData)(this->__PVT__decompressed_FIFO_reg_64)))
                                    : ((0x20U & (IData)(this->__PVT__decompressed_FIFO_reg_wstrb))
                                        ? (((QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (this->__PVT__decompressed_FIFO_reg_64 
                                                                        >> 0x30U))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(this->__PVT__w_8)) 
                                               << 0x28U) 
                                              | (0xffffffffffULL 
                                                 & this->__PVT__decompressed_FIFO_reg_64)))
                                        : ((0x40U & (IData)(this->__PVT__decompressed_FIFO_reg_wstrb))
                                            ? (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(
                                                                           (this->__PVT__decompressed_FIFO_reg_64 
                                                                            >> 0x38U))))) 
                                                << 0x38U) 
                                               | (((QData)((IData)(this->__PVT__w_8)) 
                                                   << 0x30U) 
                                                  | (0xffffffffffffULL 
                                                     & this->__PVT__decompressed_FIFO_reg_64)))
                                            : (((QData)((IData)(this->__PVT__w_8)) 
                                                << 0x38U) 
                                               | (0xffffffffffffffULL 
                                                  & this->__PVT__decompressed_FIFO_reg_64)))))))));
        }
        if (this->__PVT__decompressed_FIFO_reg_counter_inc_ena) {
            this->__Vdly__decompressed_FIFO_reg_counter 
                = (7U & ((IData)(1U) + (IData)(this->__PVT__decompressed_FIFO_reg_counter)));
        }
        if (this->__PVT__decompressed_FIFO_reg_counter_reset) {
            this->__Vdly__decompressed_FIFO_reg_counter = 0U;
        }
        if (this->__PVT__r_8_reg_w_ena) {
            this->__PVT__r_8_reg = this->__PVT__r_8;
        }
    } else {
        this->__Vdly__fifo_front_128 = 0U;
        this->__Vdly__fifo_front_256 = 0U;
        this->__Vdly__fifo_rear_128 = 0U;
        this->__Vdly__fifo_rear_256 = 0U;
        this->__Vdly__repeat_counter = 0U;
        this->__Vdly__unrepeat_counter = 0U;
        this->__Vdly__compressed_FIFO_reg_counter = 0U;
        this->__Vdly__decompressed_FIFO_reg_64 = 0ULL;
        this->__Vdly__decompressed_FIFO_reg_counter = 0U;
        this->__PVT__pixel_reg = 0U;
        this->__PVT__compressed_FIFO_reg_64 = 0ULL;
        this->__PVT__r_8_reg = 0U;
    }
    this->__PVT__fifo_front_128 = this->__Vdly__fifo_front_128;
    this->__PVT__fifo_rear_128 = this->__Vdly__fifo_rear_128;
    this->__PVT__repeat_counter = this->__Vdly__repeat_counter;
    this->__PVT__unrepeat_counter = this->__Vdly__unrepeat_counter;
    this->__PVT__decompressed_FIFO_reg_64 = this->__Vdly__decompressed_FIFO_reg_64;
    this->__PVT__compressed_FIFO_reg_counter = this->__Vdly__compressed_FIFO_reg_counter;
    this->__PVT__decompressed_FIFO_reg_counter = this->__Vdly__decompressed_FIFO_reg_counter;
    this->__PVT__fifo_front_256 = this->__Vdly__fifo_front_256;
    this->__PVT__fifo_rear_256 = this->__Vdly__fifo_rear_256;
    this->__PVT__fifo_empty_256 = ((IData)(this->__PVT__fifo_front_256) 
                                   == (IData)(this->__PVT__fifo_rear_256));
    this->__PVT__fifo_full_256 = (((0xffU & (IData)(this->__PVT__fifo_front_256)) 
                                   == (0xffU & (IData)(this->__PVT__fifo_rear_256))) 
                                  & ((1U & ((IData)(this->__PVT__fifo_front_256) 
                                            >> 8U)) 
                                     != (1U & ((IData)(this->__PVT__fifo_rear_256) 
                                               >> 8U))));
    if (vlTOPp->resetn) {
        this->__PVT__r_state = this->__PVT__r_state_next;
        this->__PVT__w_state = this->__PVT__w_state_next;
        this->__PVT__decompress_state = this->__PVT__decompress_state_next;
    } else {
        this->__PVT__r_state = 0U;
        this->__PVT__w_state = 0U;
        this->__PVT__decompress_state = 0U;
    }
    this->__PVT__compressed_FIFO_reg_64_w_ena = 0U;
    if ((0U != (IData)(this->__PVT__r_state))) {
        if ((1U != (IData)(this->__PVT__r_state))) {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__compressed_FIFO_reg_64_w_ena = 1U;
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
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_bg1__39(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_sequent__TOP__pixel_fifo_top__DOT__u_decomp_bg1__39\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->Decompressed_FIFO_r_master = 0U;
    if ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    if ((1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter))) {
        this->Decompressed_FIFO_r_master = 1U;
    }
    this->__PVT__tdm_match = ((0U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)) 
                              | (1U == (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter)));
    this->__PVT__compressed_fifo_r_state_next = 0U;
    if (this->__PVT__tdm_match) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
            this->__PVT__compressed_fifo_r_state_next = 1U;
        }
    }
    this->Compressed_FIFO_dequeue = 0U;
    if (this->__PVT__tdm_match) {
        if ((((1U == (IData)(this->__PVT__r_state)) 
              & (0U < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
             & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
            this->Compressed_FIFO_dequeue = 1U;
        }
    }
}

VL_INLINE_OPT void Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_bg1__49(Vpixel_fifo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpixel_fifo_top_Decompresser::_combo__TOP__pixel_fifo_top__DOT__u_decomp_bg1__49\n"); );
    Vpixel_fifo_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__r_8_reg_w_ena = 1U;
                    }
                } else {
                    if ((9U != (IData)(this->__PVT__decompress_state))) {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
                                this->__PVT__pixel_reg_w_ena = 1U;
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
                                 & (~ (IData)(vlTOPp->clk))));
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if ((1U & (~ ((~ (IData)(vlTOPp->clk)) 
                              & (0U == (0x7fU & (IData)(this->__PVT__r_8))))))) {
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
                        this->__PVT__w_8 = this->__PVT__r_8;
                    }
                } else {
                    if ((9U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__w_8 = this->__PVT__r_8_reg;
                    } else {
                        if ((3U == (IData)(this->__PVT__decompress_state))) {
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
    this->__PVT__fifo_front_256_inc_ena = 0U;
    if (this->__PVT__tdm_match) {
        if (((IData)(vlTOPp->bg1_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_256)))) {
            this->__PVT__fifo_front_256_inc_ena = 1U;
        }
    }
    this->__PVT__decompressed_fifo_r_state_next = 0U;
    if (this->__PVT__tdm_match) {
        if (((IData)(vlTOPp->bg1_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_256)))) {
            this->__PVT__decompressed_fifo_r_state_next = 3U;
        }
    }
    this->BRAM12_en_b = 0U;
    if (this->__PVT__tdm_match) {
        if (((IData)(vlTOPp->bg1_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_256)))) {
            this->BRAM12_en_b = 1U;
        }
    }
    this->BRAM12_addr_b = 0U;
    if (this->__PVT__tdm_match) {
        if (((IData)(vlTOPp->bg1_decomp_dequeue) & 
             (~ (IData)(this->__PVT__fifo_empty_256)))) {
            this->BRAM12_addr_b = (0xffU & (IData)(this->__PVT__fifo_front_256));
        }
    }
    this->__PVT__r_state_next = this->__PVT__r_state;
    if ((0U == (IData)(this->__PVT__r_state))) {
        this->__PVT__r_state_next = ((IData)(vlTOPp->PPU_start)
                                      ? 1U : 0U);
    } else {
        if ((1U == (IData)(this->__PVT__r_state))) {
            this->__PVT__r_state_next = ((2U == (IData)(this->__PVT__decompress_state))
                                          ? 2U : (((IData)(this->__PVT__tdm_match) 
                                                   & (((1U 
                                                        == (IData)(this->__PVT__r_state)) 
                                                       & (0U 
                                                          < (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
                                                      & (IData)(vlTOPp->pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_r_master)))
                                                   ? 6U
                                                   : 1U));
        } else {
            if ((6U == (IData)(this->__PVT__r_state))) {
                this->__PVT__r_state_next = 7U;
                if ((2U == (IData)(this->__PVT__decompress_state))) {
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
                    if ((2U == (IData)(this->__PVT__decompress_state))) {
                        this->__PVT__r_state_next = 2U;
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
    this->__PVT__decompressed_fifo_w_ena = (((((1U 
                                                == (IData)(this->__PVT__w_state)) 
                                               & (7U 
                                                  == (IData)(this->__PVT__decompressed_FIFO_reg_counter))) 
                                              & (IData)(this->__PVT__w_8_valid)) 
                                             | (8U 
                                                == (IData)(this->__PVT__w_state))) 
                                            | (0xbU 
                                               == (IData)(this->__PVT__w_state)));
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
            this->BRAM12_addr_a = (0xffU & (IData)(this->__PVT__fifo_rear_256));
        }
    }
    this->__PVT__decompressed_fifo_w_end = ((IData)(this->__PVT__tdm_match) 
                                            & ((IData)(this->__PVT__decompressed_fifo_w_ena) 
                                               & (~ (IData)(this->__PVT__fifo_full_256))));
    this->BRAM12_din_a = 0ULL;
    if (this->__PVT__tdm_match) {
        if (((IData)(this->__PVT__decompressed_fifo_w_ena) 
             & (~ (IData)(this->__PVT__fifo_full_256)))) {
            this->BRAM12_din_a = this->__PVT__decompressed_fifo_w_data;
        }
    }
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
            if ((2U == (IData)(this->__PVT__decompress_state))) {
                this->__PVT__w_state_next = 0xbU;
            }
        } else {
            if ((8U == (IData)(this->__PVT__w_state))) {
                this->__PVT__w_state_next = ((IData)(this->__PVT__decompressed_fifo_w_end)
                                              ? ((2U 
                                                  == (IData)(this->__PVT__decompress_state))
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
                            if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                    if ((1U & (~ (IData)(vlTOPp->clk)))) {
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
                if (((~ (IData)(vlTOPp->clk)) & (0U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(this->__PVT__r_8))))) {
                    this->__PVT__decompress_state_next = 2U;
                } else {
                    if (vlTOPp->clk) {
                        this->__PVT__decompress_state_next = 1U;
                    } else {
                        if ((0x80U & (IData)(this->__PVT__r_8))) {
                            if ((0x80U & (IData)(this->__PVT__r_8))) {
                                this->__PVT__decompress_state_next = 3U;
                            }
                        } else {
                            this->__PVT__decompress_state_next = 4U;
                        }
                    }
                }
            } else {
                if ((4U == (IData)(this->__PVT__decompress_state))) {
                    this->__PVT__decompress_state_next 
                        = ((IData)(vlTOPp->clk) ? 4U
                            : ((IData)(this->__PVT__w_8_ready)
                                ? ((1U == (IData)(this->__PVT__unrepeat_counter))
                                    ? 1U : 4U) : 9U));
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
                            if (vlTOPp->clk) {
                                this->__PVT__decompress_state_next = 3U;
                            } else {
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
}
