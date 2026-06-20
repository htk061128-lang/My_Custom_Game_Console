// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPPU_TOP.h for the primary calling header

#ifndef _VPPU_TOP_PIXEL_READER_H_
#define _VPPU_TOP_PIXEL_READER_H_  // guard

#include "verilated.h"

//==========

class VPPU_TOP__Syms;
class VPPU_TOP_VerilatedVcd;


//----------

VL_MODULE(VPPU_TOP_Pixel_Reader) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(resetn,0,0);
    VL_IN8(Clk_Counter,1,0);
    VL_IN8(PPU_start,0,0);
    VL_IN8(Pixel_Reader_ena,0,0);
    VL_IN8(is_background,0,0);
    VL_IN8(is_character,0,0);
    VL_IN8(is_status,0,0);
    VL_IN8(is_script,0,0);
    VL_IN8(is_universal,0,0);
    VL_OUT8(Pixel_valid,0,0);
    VL_OUT8(Pixel_is_trans,0,0);
    VL_IN8(Pixel_ready,0,0);
    VL_IN8(Decomp_fifo_r_master,0,0);
    VL_IN8(Decomp_fifo_empty,0,0);
    VL_OUT8(Decomp_fifo_dequeue,0,0);
    VL_OUT8(Lookup_ena,0,0);
    VL_OUT8(Lookup_pixel,7,0);
    VL_IN8(Lookup_end,0,0);
    VL_IN8(Lookup_trans,0,0);
    VL_IN16(WX,15,0);
    VL_IN16(WY,15,0);
    VL_IN16(SCX,15,0);
    VL_IN16(SCY,15,0);
    VL_OUT(Pixel_RGB,17,0);
    VL_IN(Lookup_RGB,17,0);
    VL_IN64(Decomp_fifo_data,63,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__RGB_reg_trans;
    CData/*0:0*/ __PVT__RGB_reg_w_ena;
    CData/*0:0*/ __PVT__RGB_reg_valid;
    CData/*0:0*/ __PVT__RGB_reg_ready;
    CData/*3:0*/ __PVT__main_state;
    CData/*3:0*/ __PVT__main_state_next;
    CData/*3:0*/ __PVT__main_state_counter;
    CData/*3:0*/ __PVT__main_state_counter_next;
    CData/*3:0*/ __PVT__fifo_r_state;
    CData/*3:0*/ __PVT__fifo_r_state_next;
    CData/*3:0*/ __PVT__fifo_r_state_counter;
    CData/*3:0*/ __PVT__fifo_r_state_counter_next;
    CData/*7:0*/ __PVT__valid_pixel_check;
    CData/*5:0*/ __PVT__read_pixel_x;
    CData/*3:0*/ __PVT__rgb_r_state;
    CData/*3:0*/ __PVT__rgb_r_state_next;
    CData/*3:0*/ __PVT__rgb_r_state_counter;
    CData/*3:0*/ __PVT__rgb_r_state_counter_next;
    CData/*0:0*/ __PVT__rgb_convert_req;
    CData/*0:0*/ __PVT__rgb_convert_end;
    SData/*8:0*/ __PVT__personal_counter_x;
    SData/*8:0*/ __PVT__personal_counter_y;
    SData/*8:0*/ __PVT__read_pixel_y;
    IData/*17:0*/ __PVT__RGB_reg;
    QData/*63:0*/ __PVT__decomp_pixel_reg;
    
    // LOCAL VARIABLES
    CData/*3:0*/ __Vdly__main_state_counter;
    CData/*3:0*/ __Vdly__main_state;
    CData/*3:0*/ __Vdly__fifo_r_state;
    CData/*3:0*/ __Vdly__fifo_r_state_counter;
    CData/*3:0*/ __Vdly__rgb_r_state;
    CData/*5:0*/ __Vdly__read_pixel_x;
    SData/*8:0*/ __Vdly__personal_counter_x;
    SData/*8:0*/ __Vdly__personal_counter_y;
    SData/*8:0*/ __Vdly__read_pixel_y;
    
    // INTERNAL VARIABLES
  private:
    VPPU_TOP__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VPPU_TOP_Pixel_Reader);  ///< Copying not allowed
  public:
    VPPU_TOP_Pixel_Reader(const char* name = "TOP");
    ~VPPU_TOP_Pixel_Reader();
    
    // INTERNAL METHODS
    void __Vconfigure(VPPU_TOP__Syms* symsp, bool first);
    void _combo__TOP__PPU_TOP__DOT__u_bg1__31(VPPU_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__PPU_TOP__DOT__u_bg2__32(VPPU_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__PPU_TOP__DOT__u_ch1__33(VPPU_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__PPU_TOP__DOT__u_ch2__34(VPPU_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__PPU_TOP__DOT__u_ch3__35(VPPU_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__PPU_TOP__DOT__u_ch4__36(VPPU_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__PPU_TOP__DOT__u_sc__37(VPPU_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__PPU_TOP__DOT__u_st__38(VPPU_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__PPU_TOP__DOT__u_un1__39(VPPU_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__PPU_TOP__DOT__u_un2__40(VPPU_TOP__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__PPU_TOP__DOT__u_bg1__21(VPPU_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__PPU_TOP__DOT__u_bg2__22(VPPU_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__PPU_TOP__DOT__u_ch1__23(VPPU_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__PPU_TOP__DOT__u_ch2__24(VPPU_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__PPU_TOP__DOT__u_ch3__25(VPPU_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__PPU_TOP__DOT__u_ch4__26(VPPU_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__PPU_TOP__DOT__u_sc__27(VPPU_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__PPU_TOP__DOT__u_st__28(VPPU_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__PPU_TOP__DOT__u_un1__29(VPPU_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__PPU_TOP__DOT__u_un2__30(VPPU_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__PPU_TOP__DOT__u_bg1__1(VPPU_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__PPU_TOP__DOT__u_bg1__11(VPPU_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__PPU_TOP__DOT__u_bg2__12(VPPU_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__PPU_TOP__DOT__u_bg2__2(VPPU_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__PPU_TOP__DOT__u_ch1__13(VPPU_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__PPU_TOP__DOT__u_ch1__3(VPPU_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__PPU_TOP__DOT__u_ch2__14(VPPU_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__PPU_TOP__DOT__u_ch2__4(VPPU_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__PPU_TOP__DOT__u_ch3__15(VPPU_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__PPU_TOP__DOT__u_ch3__5(VPPU_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__PPU_TOP__DOT__u_ch4__16(VPPU_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__PPU_TOP__DOT__u_ch4__6(VPPU_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__PPU_TOP__DOT__u_sc__17(VPPU_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__PPU_TOP__DOT__u_sc__7(VPPU_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__PPU_TOP__DOT__u_st__18(VPPU_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__PPU_TOP__DOT__u_st__8(VPPU_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__PPU_TOP__DOT__u_un1__19(VPPU_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__PPU_TOP__DOT__u_un1__9(VPPU_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__PPU_TOP__DOT__u_un2__10(VPPU_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__PPU_TOP__DOT__u_un2__20(VPPU_TOP__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
