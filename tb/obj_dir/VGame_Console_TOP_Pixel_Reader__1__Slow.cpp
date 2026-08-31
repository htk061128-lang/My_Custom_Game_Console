// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGame_Console_TOP.h for the primary calling header

#include "VGame_Console_TOP_Pixel_Reader.h"
#include "VGame_Console_TOP__Syms.h"

void VGame_Console_TOP_Pixel_Reader::_settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2__10(VGame_Console_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VGame_Console_TOP_Pixel_Reader::_settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2__10\n"); );
    VGame_Console_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__RGB_reg_ready = 0U;
    if ((0U != (IData)(this->__PVT__main_state))) {
        if ((1U == (IData)(this->__PVT__main_state))) {
            if ((0U == (IData)(this->__PVT__main_state_counter))) {
                if (this->__PVT__RGB_reg_valid) {
                    this->__PVT__RGB_reg_ready = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                        [0xaU];
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__main_state))) {
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x1dU])) & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                                            (0xfffU 
                                                             & ((IData)(0x13fU) 
                                                                + 
                                                                vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                [0x1dU])))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                               [0x1dU] 
                                               >> 0x10U)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                 [0x1dU] 
                                                 >> 0x10U)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->__PVT__RGB_reg_ready 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                            [0xaU];
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
                                   (0xfffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x1dU])) & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                                            (0xfffU 
                                                             & ((IData)(0x13fU) 
                                                                + 
                                                                vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                [0x1dU])))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                               [0x1dU] 
                                               >> 0x10U)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                 [0x1dU] 
                                                 >> 0x10U)))))) {
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
                                   (0xfffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x1dU])) & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                                            (0xfffU 
                                                             & ((IData)(0x13fU) 
                                                                + 
                                                                vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                [0x1dU])))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                               [0x1dU] 
                                               >> 0x10U)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                 [0x1dU] 
                                                 >> 0x10U)))))) {
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
                          & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                          [0xaU]) ? 0U : 1U);
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
                                                 & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_ready
                                                 [0xaU])
                                                 ? 0U
                                                 : 2U);
                if ((((VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                   (0xfffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                    [0x1dU])) & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_x), 
                                                            (0xfffU 
                                                             & ((IData)(0x13fU) 
                                                                + 
                                                                vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                [0x1dU])))) 
                      & VL_GTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                    (0xfffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                               [0x1dU] 
                                               >> 0x10U)))) 
                     & VL_LTES_III(1,12,12, (IData)(this->__PVT__personal_counter_y), 
                                   (0xfffU & ((IData)(0xefU) 
                                              + (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                 [0x1dU] 
                                                 >> 0x10U)))))) {
                    if (this->__PVT__RGB_reg_valid) {
                        this->Pixel_valid = 1U;
                    }
                } else {
                    this->Pixel_valid = 1U;
                }
            }
        }
    }
    this->Decomp_fifo_dequeue = 0U;
    if ((0U != (IData)(this->__PVT__fifo_r_state))) {
        if ((1U == (IData)(this->__PVT__fifo_r_state))) {
            if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                if (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Decompressed_FIFO_r_master) 
                     & (~ (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_empty_128)))) {
                    this->Decomp_fifo_dequeue = 1U;
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__fifo_r_state))) {
                if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                    if (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Decompressed_FIFO_r_master) 
                         & (~ (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_empty_128)))) {
                        this->Decomp_fifo_dequeue = 1U;
                    }
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
                                                       (VL_EXTENDS_II(32,16, 
                                                                      (0xffffU 
                                                                       & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                          [0x1dU] 
                                                                          >> 0x10U))) 
                                                        + 
                                                        VL_EXTENDS_II(32,16, (IData)(this->__PVT__read_pixel_y)))) 
                                           & VL_GTES_III(1,32,32, 0xefU, 
                                                         (VL_EXTENDS_II(32,16, 
                                                                        (0xffffU 
                                                                         & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                            [0x1dU] 
                                                                            >> 0x10U))) 
                                                          + 
                                                          VL_EXTENDS_II(32,16, (IData)(this->__PVT__read_pixel_y))))) 
                                          & VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,16, 
                                                                       (0xffffU 
                                                                        & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                        [0x1dU])) 
                                                         + 
                                                         VL_EXTENDS_II(32,16, 
                                                                       ((IData)(this->__PVT__read_pixel_x) 
                                                                        << 3U))))) 
                                         & VL_GTES_III(1,32,32, 0x13fU, 
                                                       (VL_EXTENDS_II(32,16, 
                                                                      (0xffffU 
                                                                       & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                       [0x1dU])) 
                                                        + 
                                                        VL_EXTENDS_II(32,16, 
                                                                      ((IData)(this->__PVT__read_pixel_x) 
                                                                       << 3U))))));
    this->__PVT__valid_pixel_check = ((0xfdU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,16, 
                                                                       (0xffffU 
                                                                        & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                           [0x1dU] 
                                                                           >> 0x10U))) 
                                                         + 
                                                         VL_EXTENDS_II(32,16, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,16, 
                                                                         (0xffffU 
                                                                          & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                             [0x1dU] 
                                                                             >> 0x10U))) 
                                                           + 
                                                           VL_EXTENDS_II(32,16, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,16, 
                                                                        (0xffffU 
                                                                         & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                         [0x1dU])) 
                                                          + 
                                                          VL_EXTENDS_II(32,16, 
                                                                        (1U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,16, 
                                                                       (0xffffU 
                                                                        & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                        [0x1dU])) 
                                                         + 
                                                         VL_EXTENDS_II(32,16, 
                                                                       (1U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 1U));
    this->__PVT__valid_pixel_check = ((0xfbU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,16, 
                                                                       (0xffffU 
                                                                        & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                           [0x1dU] 
                                                                           >> 0x10U))) 
                                                         + 
                                                         VL_EXTENDS_II(32,16, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,16, 
                                                                         (0xffffU 
                                                                          & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                             [0x1dU] 
                                                                             >> 0x10U))) 
                                                           + 
                                                           VL_EXTENDS_II(32,16, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,16, 
                                                                        (0xffffU 
                                                                         & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                         [0x1dU])) 
                                                          + 
                                                          VL_EXTENDS_II(32,16, 
                                                                        (2U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,16, 
                                                                       (0xffffU 
                                                                        & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                        [0x1dU])) 
                                                         + 
                                                         VL_EXTENDS_II(32,16, 
                                                                       (2U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 2U));
    this->__PVT__valid_pixel_check = ((0xf7U & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,16, 
                                                                       (0xffffU 
                                                                        & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                           [0x1dU] 
                                                                           >> 0x10U))) 
                                                         + 
                                                         VL_EXTENDS_II(32,16, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,16, 
                                                                         (0xffffU 
                                                                          & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                             [0x1dU] 
                                                                             >> 0x10U))) 
                                                           + 
                                                           VL_EXTENDS_II(32,16, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,16, 
                                                                        (0xffffU 
                                                                         & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                         [0x1dU])) 
                                                          + 
                                                          VL_EXTENDS_II(32,16, 
                                                                        (3U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,16, 
                                                                       (0xffffU 
                                                                        & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                        [0x1dU])) 
                                                         + 
                                                         VL_EXTENDS_II(32,16, 
                                                                       (3U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 3U));
    this->__PVT__valid_pixel_check = ((0xefU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,16, 
                                                                       (0xffffU 
                                                                        & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                           [0x1dU] 
                                                                           >> 0x10U))) 
                                                         + 
                                                         VL_EXTENDS_II(32,16, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,16, 
                                                                         (0xffffU 
                                                                          & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                             [0x1dU] 
                                                                             >> 0x10U))) 
                                                           + 
                                                           VL_EXTENDS_II(32,16, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,16, 
                                                                        (0xffffU 
                                                                         & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                         [0x1dU])) 
                                                          + 
                                                          VL_EXTENDS_II(32,16, 
                                                                        (4U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,16, 
                                                                       (0xffffU 
                                                                        & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                        [0x1dU])) 
                                                         + 
                                                         VL_EXTENDS_II(32,16, 
                                                                       (4U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 4U));
    this->__PVT__valid_pixel_check = ((0xdfU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,16, 
                                                                       (0xffffU 
                                                                        & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                           [0x1dU] 
                                                                           >> 0x10U))) 
                                                         + 
                                                         VL_EXTENDS_II(32,16, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,16, 
                                                                         (0xffffU 
                                                                          & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                             [0x1dU] 
                                                                             >> 0x10U))) 
                                                           + 
                                                           VL_EXTENDS_II(32,16, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,16, 
                                                                        (0xffffU 
                                                                         & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                         [0x1dU])) 
                                                          + 
                                                          VL_EXTENDS_II(32,16, 
                                                                        (5U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,16, 
                                                                       (0xffffU 
                                                                        & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                        [0x1dU])) 
                                                         + 
                                                         VL_EXTENDS_II(32,16, 
                                                                       (5U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 5U));
    this->__PVT__valid_pixel_check = ((0xbfU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,16, 
                                                                       (0xffffU 
                                                                        & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                           [0x1dU] 
                                                                           >> 0x10U))) 
                                                         + 
                                                         VL_EXTENDS_II(32,16, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,16, 
                                                                         (0xffffU 
                                                                          & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                             [0x1dU] 
                                                                             >> 0x10U))) 
                                                           + 
                                                           VL_EXTENDS_II(32,16, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,16, 
                                                                        (0xffffU 
                                                                         & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                         [0x1dU])) 
                                                          + 
                                                          VL_EXTENDS_II(32,16, 
                                                                        (6U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,16, 
                                                                       (0xffffU 
                                                                        & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                        [0x1dU])) 
                                                         + 
                                                         VL_EXTENDS_II(32,16, 
                                                                       (6U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 6U));
    this->__PVT__valid_pixel_check = ((0x7fU & (IData)(this->__PVT__valid_pixel_check)) 
                                      | ((((VL_LTES_III(1,32,32, 0U, 
                                                        (VL_EXTENDS_II(32,16, 
                                                                       (0xffffU 
                                                                        & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                           [0x1dU] 
                                                                           >> 0x10U))) 
                                                         + 
                                                         VL_EXTENDS_II(32,16, (IData)(this->__PVT__read_pixel_y)))) 
                                            & VL_GTES_III(1,32,32, 0xefU, 
                                                          (VL_EXTENDS_II(32,16, 
                                                                         (0xffffU 
                                                                          & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                             [0x1dU] 
                                                                             >> 0x10U))) 
                                                           + 
                                                           VL_EXTENDS_II(32,16, (IData)(this->__PVT__read_pixel_y))))) 
                                           & VL_LTES_III(1,32,32, 0U, 
                                                         (VL_EXTENDS_II(32,16, 
                                                                        (0xffffU 
                                                                         & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                         [0x1dU])) 
                                                          + 
                                                          VL_EXTENDS_II(32,16, 
                                                                        (7U 
                                                                         | ((IData)(this->__PVT__read_pixel_x) 
                                                                            << 3U)))))) 
                                          & VL_GTES_III(1,32,32, 0x13fU, 
                                                        (VL_EXTENDS_II(32,16, 
                                                                       (0xffffU 
                                                                        & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                                        [0x1dU])) 
                                                         + 
                                                         VL_EXTENDS_II(32,16, 
                                                                       (7U 
                                                                        | ((IData)(this->__PVT__read_pixel_x) 
                                                                           << 3U)))))) 
                                         << 7U));
    if ((0U == (IData)(this->__PVT__fifo_r_state))) {
        this->__PVT__fifo_r_state_counter_next = 0U;
    } else {
        if ((1U == (IData)(this->__PVT__fifo_r_state))) {
            if ((0U == (IData)(this->__PVT__fifo_r_state_counter))) {
                if (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Decompressed_FIFO_r_master) 
                     & (~ (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_empty_128)))) {
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
                            if (((0x31U == (IData)(this->__PVT__read_pixel_x)) 
                                 & (0x13fU == (IData)(this->__PVT__read_pixel_y)))) {
                                this->__PVT__fifo_r_state_counter_next = 0U;
                                this->__PVT__fifo_r_state_next = 0U;
                            } else {
                                this->__PVT__fifo_r_state_counter_next = 0U;
                                this->__PVT__fifo_r_state_next = 1U;
                            }
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
                    if (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Decompressed_FIFO_r_master) 
                         & (~ (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__fifo_empty_128)))) {
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
                                if (((0x27U == (IData)(this->__PVT__read_pixel_x)) 
                                     & (0xefU == (IData)(this->__PVT__read_pixel_y)))) {
                                    this->__PVT__fifo_r_state_counter_next = 0U;
                                    this->__PVT__fifo_r_state_next = 0U;
                                } else {
                                    this->__PVT__fifo_r_state_counter_next = 0U;
                                    this->__PVT__fifo_r_state_next = 2U;
                                }
                            } else {
                                this->__PVT__rgb_convert_req = 1U;
                                this->__PVT__fifo_r_state_counter_next = 3U;
                                this->__PVT__fifo_r_state_next = 2U;
                            }
                        } else {
                            if ((3U == (IData)(this->__PVT__fifo_r_state_counter))) {
                                this->__PVT__rgb_convert_req = 1U;
                                if (this->__PVT__rgb_convert_end) {
                                    if (((0x27U == (IData)(this->__PVT__read_pixel_x)) 
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
                        if ((8U == (IData)(this->__PVT__rgb_r_state_counter))) {
                            if ((1U & (~ ((IData)(this->__PVT__valid_pixel_check) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(this->__PVT__valid_pixel_check) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(this->__PVT__valid_pixel_check) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(this->__PVT__valid_pixel_check) 
                                                    >> 7U)))) {
                                            this->__PVT__rgb_convert_end = 1U;
                                        }
                                    }
                                }
                            }
                        } else {
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
                        this->__PVT__rgb_r_state_next 
                            = ((8U == (IData)(this->__PVT__rgb_r_state_counter))
                                ? ((0x10U & (IData)(this->__PVT__valid_pixel_check))
                                    ? 4U : ((0x20U 
                                             & (IData)(this->__PVT__valid_pixel_check))
                                             ? 4U : 
                                            ((0x40U 
                                              & (IData)(this->__PVT__valid_pixel_check))
                                              ? 4U : 
                                             ((0x80U 
                                               & (IData)(this->__PVT__valid_pixel_check))
                                               ? 4U
                                               : 3U))))
                                : ((9U == (IData)(this->__PVT__rgb_r_state_counter))
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
                                                     : 4U))))))));
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

void VGame_Console_TOP_Pixel_Reader::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VGame_Console_TOP_Pixel_Reader::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    resetn = VL_RAND_RESET_I(1);
    Clk_Counter = VL_RAND_RESET_I(2);
    PPU_start = VL_RAND_RESET_I(1);
    Pixel_Reader_ena = VL_RAND_RESET_I(1);
    is_background = VL_RAND_RESET_I(1);
    is_character = VL_RAND_RESET_I(1);
    is_status = VL_RAND_RESET_I(1);
    is_script = VL_RAND_RESET_I(1);
    is_universal = VL_RAND_RESET_I(1);
    WX = VL_RAND_RESET_I(16);
    WY = VL_RAND_RESET_I(16);
    SCX = VL_RAND_RESET_I(16);
    SCY = VL_RAND_RESET_I(16);
    Pixel_valid = VL_RAND_RESET_I(1);
    Pixel_RGB = VL_RAND_RESET_I(18);
    Pixel_is_trans = VL_RAND_RESET_I(1);
    Pixel_ready = VL_RAND_RESET_I(1);
    Decomp_fifo_r_master = VL_RAND_RESET_I(1);
    Decomp_fifo_empty = VL_RAND_RESET_I(1);
    Decomp_fifo_data = VL_RAND_RESET_Q(64);
    Decomp_fifo_dequeue = VL_RAND_RESET_I(1);
    Lookup_ena = VL_RAND_RESET_I(1);
    Lookup_pixel = VL_RAND_RESET_I(8);
    Lookup_end = VL_RAND_RESET_I(1);
    Lookup_RGB = VL_RAND_RESET_I(18);
    Lookup_trans = VL_RAND_RESET_I(1);
    __PVT__decomp_pixel_reg = VL_RAND_RESET_Q(64);
    __PVT__RGB_reg = VL_RAND_RESET_I(18);
    __PVT__RGB_reg_trans = VL_RAND_RESET_I(1);
    __PVT__RGB_reg_w_ena = VL_RAND_RESET_I(1);
    __PVT__RGB_reg_valid = VL_RAND_RESET_I(1);
    __PVT__RGB_reg_ready = VL_RAND_RESET_I(1);
    __PVT__personal_counter_x = VL_RAND_RESET_I(9);
    __PVT__personal_counter_y = VL_RAND_RESET_I(9);
    __PVT__main_state = VL_RAND_RESET_I(4);
    __PVT__main_state_next = VL_RAND_RESET_I(4);
    __PVT__main_state_counter = VL_RAND_RESET_I(4);
    __PVT__main_state_counter_next = VL_RAND_RESET_I(4);
    __PVT__fifo_r_state = VL_RAND_RESET_I(4);
    __PVT__fifo_r_state_next = VL_RAND_RESET_I(4);
    __PVT__fifo_r_state_counter = VL_RAND_RESET_I(4);
    __PVT__fifo_r_state_counter_next = VL_RAND_RESET_I(4);
    __PVT__valid_pixel_check = VL_RAND_RESET_I(8);
    __PVT__read_pixel_x = VL_RAND_RESET_I(6);
    __PVT__read_pixel_y = VL_RAND_RESET_I(9);
    __PVT__rgb_r_state = VL_RAND_RESET_I(4);
    __PVT__rgb_r_state_next = VL_RAND_RESET_I(4);
    __PVT__rgb_r_state_counter = VL_RAND_RESET_I(4);
    __PVT__rgb_r_state_counter_next = VL_RAND_RESET_I(4);
    __PVT__rgb_convert_req = VL_RAND_RESET_I(1);
    __PVT__rgb_convert_end = VL_RAND_RESET_I(1);
    __Vdly__main_state_counter = VL_RAND_RESET_I(4);
    __Vdly__main_state = VL_RAND_RESET_I(4);
    __Vdly__personal_counter_x = VL_RAND_RESET_I(9);
    __Vdly__personal_counter_y = VL_RAND_RESET_I(9);
    __Vdly__fifo_r_state = VL_RAND_RESET_I(4);
    __Vdly__fifo_r_state_counter = VL_RAND_RESET_I(4);
    __Vdly__rgb_r_state = VL_RAND_RESET_I(4);
    __Vdly__read_pixel_x = VL_RAND_RESET_I(6);
    __Vdly__read_pixel_y = VL_RAND_RESET_I(9);
}
