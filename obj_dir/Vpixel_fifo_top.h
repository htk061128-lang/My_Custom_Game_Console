// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPIXEL_FIFO_TOP_H_
#define _VPIXEL_FIFO_TOP_H_  // guard

#include "verilated.h"

//==========

class Vpixel_fifo_top__Syms;
class Vpixel_fifo_top_VerilatedVcd;
class Vpixel_fifo_top_Decompresser;


//----------

VL_MODULE(Vpixel_fifo_top) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vpixel_fifo_top_Decompresser* __PVT__pixel_fifo_top__DOT__u_decomp_uni1;
    Vpixel_fifo_top_Decompresser* __PVT__pixel_fifo_top__DOT__u_decomp_uni2;
    Vpixel_fifo_top_Decompresser* __PVT__pixel_fifo_top__DOT__u_decomp_script;
    Vpixel_fifo_top_Decompresser* __PVT__pixel_fifo_top__DOT__u_decomp_status;
    Vpixel_fifo_top_Decompresser* __PVT__pixel_fifo_top__DOT__u_decomp_ch1;
    Vpixel_fifo_top_Decompresser* __PVT__pixel_fifo_top__DOT__u_decomp_ch2;
    Vpixel_fifo_top_Decompresser* __PVT__pixel_fifo_top__DOT__u_decomp_ch3;
    Vpixel_fifo_top_Decompresser* __PVT__pixel_fifo_top__DOT__u_decomp_ch4;
    Vpixel_fifo_top_Decompresser* __PVT__pixel_fifo_top__DOT__u_decomp_bg1;
    Vpixel_fifo_top_Decompresser* __PVT__pixel_fifo_top__DOT__u_decomp_bg2;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(resetn,0,0);
    VL_IN8(PPU_start,0,0);
    VL_OUT8(EMEM_valid,0,0);
    VL_IN8(EMEM_ready,0,0);
    VL_OUT8(EMEM_wstrb,3,0);
    VL_OUT8(EMEM_burst_len,7,0);
    VL_OUT8(EMEM_burst_en,0,0);
    VL_OUT8(BRAM7_en_a,0,0);
    VL_OUT8(BRAM7_we_a,0,0);
    VL_OUT8(BRAM7_en_b,0,0);
    VL_OUT8(BRAM8_en_a,0,0);
    VL_OUT8(BRAM8_we_a,0,0);
    VL_OUT8(BRAM8_en_b,0,0);
    VL_OUT8(BRAM9_en_a,0,0);
    VL_OUT8(BRAM9_we_a,0,0);
    VL_OUT8(BRAM9_en_b,0,0);
    VL_OUT8(BRAM10_en_a,0,0);
    VL_OUT8(BRAM10_we_a,0,0);
    VL_OUT8(BRAM10_en_b,0,0);
    VL_OUT8(BRAM11_en_a,0,0);
    VL_OUT8(BRAM11_we_a,0,0);
    VL_OUT8(BRAM11_en_b,0,0);
    VL_OUT8(BRAM12_en_a,0,0);
    VL_OUT8(BRAM12_we_a,0,0);
    VL_OUT8(BRAM12_en_b,0,0);
    VL_IN8(uni1_decomp_ena,0,0);
    VL_IN8(uni1_decomp_dequeue,0,0);
    VL_OUT8(uni1_decomp_r_master,0,0);
    VL_OUT8(uni1_decomp_empty,0,0);
    VL_IN8(uni2_decomp_ena,0,0);
    VL_IN8(uni2_decomp_dequeue,0,0);
    VL_OUT8(uni2_decomp_r_master,0,0);
    VL_OUT8(uni2_decomp_empty,0,0);
    VL_IN8(sc_decomp_ena,0,0);
    VL_IN8(sc_decomp_dequeue,0,0);
    VL_OUT8(sc_decomp_r_master,0,0);
    VL_OUT8(sc_decomp_empty,0,0);
    VL_IN8(st_decomp_ena,0,0);
    VL_IN8(st_decomp_dequeue,0,0);
    VL_OUT8(st_decomp_r_master,0,0);
    VL_OUT8(st_decomp_empty,0,0);
    VL_IN8(ch1_decomp_ena,0,0);
    VL_IN8(ch1_decomp_dequeue,0,0);
    VL_OUT8(ch1_decomp_r_master,0,0);
    VL_OUT8(ch1_decomp_empty,0,0);
    VL_IN8(ch2_decomp_ena,0,0);
    VL_IN8(ch2_decomp_dequeue,0,0);
    VL_OUT8(ch2_decomp_r_master,0,0);
    VL_OUT8(ch2_decomp_empty,0,0);
    VL_IN8(ch3_decomp_ena,0,0);
    VL_IN8(ch3_decomp_dequeue,0,0);
    VL_OUT8(ch3_decomp_r_master,0,0);
    VL_OUT8(ch3_decomp_empty,0,0);
    VL_IN8(ch4_decomp_ena,0,0);
    VL_IN8(ch4_decomp_dequeue,0,0);
    VL_OUT8(ch4_decomp_r_master,0,0);
    VL_OUT8(ch4_decomp_empty,0,0);
    VL_IN8(bg1_decomp_ena,0,0);
    VL_IN8(bg1_decomp_dequeue,0,0);
    VL_OUT8(bg1_decomp_r_master,0,0);
    VL_OUT8(bg1_decomp_empty,0,0);
    VL_IN8(bg2_decomp_ena,0,0);
    VL_IN8(bg2_decomp_dequeue,0,0);
    VL_OUT8(bg2_decomp_r_master,0,0);
    VL_OUT8(bg2_decomp_empty,0,0);
    VL_OUT16(BRAM7_addr_a,8,0);
    VL_OUT16(BRAM7_addr_b,8,0);
    VL_OUT16(BRAM8_addr_a,8,0);
    VL_OUT16(BRAM8_addr_b,8,0);
    VL_OUT16(BRAM9_addr_a,8,0);
    VL_OUT16(BRAM9_addr_b,8,0);
    VL_OUT16(BRAM10_addr_a,8,0);
    VL_OUT16(BRAM10_addr_b,8,0);
    VL_OUT16(BRAM11_addr_a,8,0);
    VL_OUT16(BRAM11_addr_b,8,0);
    VL_OUT16(BRAM12_addr_a,8,0);
    VL_OUT16(BRAM12_addr_b,8,0);
    VL_IN(Universal_Layer1_Address,31,0);
    VL_IN(Universal_Layer2_Address,31,0);
    VL_IN(Script_Layer_Address,31,0);
    VL_IN(Status_Layer_Address,31,0);
    VL_IN(Character_Layer1_Address,31,0);
    VL_IN(Character_Layer2_Address,31,0);
    VL_IN(Character_Layer3_Address,31,0);
    VL_IN(Character_Layer4_Address,31,0);
    VL_IN(Background_Layer1_Address,31,0);
    VL_IN(Background_Layer2_Address,31,0);
    VL_OUT(EMEM_addr,31,0);
    VL_OUT(EMEM_wdata,31,0);
    VL_IN(EMEM_rdata,31,0);
    VL_OUT64(BRAM7_din_a,63,0);
    VL_IN64(BRAM7_dout_b,63,0);
    VL_OUT64(BRAM8_din_a,63,0);
    VL_IN64(BRAM8_dout_b,63,0);
    VL_OUT64(BRAM9_din_a,63,0);
    VL_IN64(BRAM9_dout_b,63,0);
    VL_OUT64(BRAM10_din_a,63,0);
    VL_IN64(BRAM10_dout_b,63,0);
    VL_OUT64(BRAM11_din_a,63,0);
    VL_IN64(BRAM11_dout_b,63,0);
    VL_OUT64(BRAM12_din_a,63,0);
    VL_IN64(BRAM12_dout_b,63,0);
    VL_OUT64(uni1_decomp_data,63,0);
    VL_OUT64(uni2_decomp_data,63,0);
    VL_OUT64(sc_decomp_data,63,0);
    VL_OUT64(st_decomp_data,63,0);
    VL_OUT64(ch1_decomp_data,63,0);
    VL_OUT64(ch2_decomp_data,63,0);
    VL_OUT64(ch3_decomp_data,63,0);
    VL_OUT64(ch4_decomp_data,63,0);
    VL_OUT64(bg1_decomp_data,63,0);
    VL_OUT64(bg2_decomp_data,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_count;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_front;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_rear;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_count;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_front;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_rear;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_count;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_front;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_rear;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_count;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_front;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_rear;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_count;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_front;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_rear;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_count;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_front;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_rear;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_count;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_front;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_rear;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_count;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_front;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_rear;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_inc_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_inc_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_fifo_dec_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_inc_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_fifo_dec_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_inc_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_inc_want;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want;
        CData/*1:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__clk_counter;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_r_master;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_r_master;
        CData/*3:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__main_state;
        CData/*2:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state;
        CData/*2:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next;
        CData/*2:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state;
        CData/*2:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next;
        CData/*2:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM9_read_state;
        CData/*2:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__round_end;
        CData/*0:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__is_urgent_mode;
        CData/*7:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__emem_r_counter;
        SData/*8:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_count;
        SData/*8:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_front;
        SData/*8:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_fifo_rear;
        SData/*8:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_count;
        SData/*8:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_front;
        SData/*8:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_fifo_rear;
        SData/*9:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__next_should_read_layer;
    };
    struct {
        SData/*9:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_basic;
        SData/*9:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__last_read_urgent;
        SData/*9:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__valid_req;
        SData/*9:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__urgent_req;
        SData/*9:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__basic_req;
        SData/*9:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__masked_req;
        SData/*9:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__should_read_layer;
        IData/*31:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni1_next_ad;
        IData/*31:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__uni2_next_ad;
        IData/*31:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__script_next_ad;
        IData/*31:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__status_next_ad;
        IData/*31:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char1_next_ad;
        IData/*31:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char2_next_ad;
        IData/*31:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char3_next_ad;
        IData/*31:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__char4_next_ad;
        IData/*31:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__back1_next_ad;
        IData/*31:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__back2_next_ad;
        IData/*31:0*/ pixel_fifo_top__DOT__u_compressed_fifo__DOT__tem_32_reg;
        QData/*63:0*/ pixel_fifo_top__DOT__bg1_comp_data;
        QData/*63:0*/ pixel_fifo_top__DOT__bg2_comp_data;
        QData/*63:0*/ pixel_fifo_top__DOT__ch1_comp_data;
        QData/*63:0*/ pixel_fifo_top__DOT__ch2_comp_data;
        QData/*63:0*/ pixel_fifo_top__DOT__ch3_comp_data;
        QData/*63:0*/ pixel_fifo_top__DOT__ch4_comp_data;
        QData/*63:0*/ pixel_fifo_top__DOT__uni1_comp_data;
        QData/*63:0*/ pixel_fifo_top__DOT__uni2_comp_data;
        QData/*63:0*/ pixel_fifo_top__DOT__sc_comp_data;
        QData/*63:0*/ pixel_fifo_top__DOT__st_comp_data;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__resetn;
    CData/*0:0*/ __Vm_traceActivity[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vpixel_fifo_top__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vpixel_fifo_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vpixel_fifo_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vpixel_fifo_top();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vpixel_fifo_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vpixel_fifo_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vpixel_fifo_top__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__5(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__6(Vpixel_fifo_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vpixel_fifo_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vpixel_fifo_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__2(Vpixel_fifo_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
