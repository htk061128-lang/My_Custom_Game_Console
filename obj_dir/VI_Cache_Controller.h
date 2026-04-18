// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VI_CACHE_CONTROLLER_H_
#define _VI_CACHE_CONTROLLER_H_  // guard

#include "verilated.h"

//==========

class VI_Cache_Controller__Syms;
class VI_Cache_Controller_VerilatedVcd;


//----------

VL_MODULE(VI_Cache_Controller) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(resetn,0,0);
    VL_IN8(CPU_valid,0,0);
    VL_IN8(CPU_instr,0,0);
    VL_OUT8(CPU_ready,0,0);
    VL_IN8(CPU_wstrb,3,0);
    VL_OUT8(EMEM_valid,0,0);
    VL_IN8(EMEM_ready,0,0);
    VL_OUT8(EMEM_wstrb,3,0);
    VL_OUT8(EMEM_burst_len,7,0);
    VL_OUT8(EMEM_burst_en,0,0);
    VL_OUT8(BRAM0_wen,0,0);
    VL_OUT8(BRAM0_wstrb,7,0);
    VL_OUT8(BRAM0_ren,0,0);
    VL_OUT8(BRAM1_wen,0,0);
    VL_OUT8(BRAM1_wstrb,7,0);
    VL_OUT8(BRAM1_ren,0,0);
    VL_OUT8(BRAM2_wen,0,0);
    VL_OUT8(BRAM2_wstrb,7,0);
    VL_OUT8(BRAM2_ren,0,0);
    VL_OUT8(BRAM3_wen,0,0);
    VL_OUT8(BRAM3_wstrb,7,0);
    VL_OUT8(BRAM3_ren,0,0);
    VL_OUT8(cache_hit,0,0);
    VL_OUT16(BRAM0_waddr,8,0);
    VL_OUT16(BRAM0_raddr,8,0);
    VL_OUT16(BRAM1_waddr,8,0);
    VL_OUT16(BRAM1_raddr,8,0);
    VL_OUT16(BRAM2_waddr,8,0);
    VL_OUT16(BRAM2_raddr,8,0);
    VL_OUT16(BRAM3_waddr,8,0);
    VL_OUT16(BRAM3_raddr,8,0);
    VL_IN(CPU_addr,31,0);
    VL_IN(CPU_wdata,31,0);
    VL_OUT(CPU_rdata,31,0);
    VL_OUT(EMEM_addr,31,0);
    VL_OUT(EMEM_wdata,31,0);
    VL_IN(EMEM_rdata,31,0);
    VL_OUTW(BRAM0_din,71,0,3);
    VL_INW(BRAM0_dout,71,0,3);
    VL_OUTW(BRAM1_din,71,0,3);
    VL_INW(BRAM1_dout,71,0,3);
    VL_OUTW(BRAM2_din,71,0,3);
    VL_INW(BRAM2_dout,71,0,3);
    VL_OUTW(BRAM3_din,71,0,3);
    VL_INW(BRAM3_dout,71,0,3);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*3:0*/ I_Cache_Controller__DOT__main_state;
    CData/*3:0*/ I_Cache_Controller__DOT__main_next;
    CData/*0:0*/ I_Cache_Controller__DOT__cpu_tag_save;
    CData/*3:0*/ I_Cache_Controller__DOT__burst_counter;
    CData/*0:0*/ I_Cache_Controller__DOT__burst_counter_reset;
    CData/*0:0*/ I_Cache_Controller__DOT__burst_counter_plus;
    CData/*0:0*/ I_Cache_Controller__DOT__word_buffer_wen_0;
    CData/*0:0*/ I_Cache_Controller__DOT__word_buffer_wen_1;
    CData/*0:0*/ I_Cache_Controller__DOT__word_buffer_wen_2;
    CData/*0:0*/ I_Cache_Controller__DOT__word_buffer_wen_3;
    CData/*0:0*/ I_Cache_Controller__DOT__random_bit;
    SData/*14:0*/ I_Cache_Controller__DOT__cpu_I_tag;
    IData/*31:0*/ I_Cache_Controller__DOT__word_buffer[4];
    IData/*31:0*/ I_Cache_Controller__DOT__word_buffer_wdata[4];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__resetn;
    CData/*0:0*/ __Vm_traceActivity[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VI_Cache_Controller__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VI_Cache_Controller);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VI_Cache_Controller(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VI_Cache_Controller();
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
    static void _eval_initial_loop(VI_Cache_Controller__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VI_Cache_Controller__Syms* symsp, bool first);
  private:
    static QData _change_request(VI_Cache_Controller__Syms* __restrict vlSymsp);
    static QData _change_request_1(VI_Cache_Controller__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VI_Cache_Controller__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VI_Cache_Controller__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VI_Cache_Controller__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VI_Cache_Controller__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VI_Cache_Controller__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VI_Cache_Controller__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
