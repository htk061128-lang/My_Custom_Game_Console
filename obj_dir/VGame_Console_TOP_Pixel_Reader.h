// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VGame_Console_TOP.h for the primary calling header

#ifndef _VGAME_CONSOLE_TOP_PIXEL_READER_H_
#define _VGAME_CONSOLE_TOP_PIXEL_READER_H_  // guard

#include "verilated.h"

//==========

class VGame_Console_TOP__Syms;
class VGame_Console_TOP_VerilatedVcd;


//----------

VL_MODULE(VGame_Console_TOP_Pixel_Reader) {
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
    VGame_Console_TOP__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VGame_Console_TOP_Pixel_Reader);  ///< Copying not allowed
  public:
    VGame_Console_TOP_Pixel_Reader(const char* name = "TOP");
    ~VGame_Console_TOP_Pixel_Reader();
    
    // INTERNAL METHODS
    void __Vconfigure(VGame_Console_TOP__Syms* symsp, bool first);
    void _combo__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1__39(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2__40(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1__41(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2__42(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3__43(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4__44(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc__45(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st__46(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1__47(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _combo__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2__48(VGame_Console_TOP__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1__21(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2__22(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1__23(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1__31(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2__24(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2__32(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3__25(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3__33(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4__26(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4__34(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc__27(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc__35(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st__28(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st__36(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1__29(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1__37(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2__30(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _sequent__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2__38(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1__1(VGame_Console_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1__11(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2__12(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2__2(VGame_Console_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1__13(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1__3(VGame_Console_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2__14(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2__4(VGame_Console_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3__15(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3__5(VGame_Console_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4__16(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4__6(VGame_Console_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc__17(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc__7(VGame_Console_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st__18(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st__8(VGame_Console_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1__19(VGame_Console_TOP__Syms* __restrict vlSymsp);
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1__9(VGame_Console_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2__10(VGame_Console_TOP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2__20(VGame_Console_TOP__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
