// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VPIXEL_FIFO_TOP__SYMS_H_
#define _VPIXEL_FIFO_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vpixel_fifo_top.h"
#include "Vpixel_fifo_top_Decompresser.h"

// SYMS CLASS
class Vpixel_fifo_top__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vpixel_fifo_top*               TOPp;
    Vpixel_fifo_top_Decompresser   TOP__pixel_fifo_top__DOT__u_decomp_bg1;
    Vpixel_fifo_top_Decompresser   TOP__pixel_fifo_top__DOT__u_decomp_bg2;
    Vpixel_fifo_top_Decompresser   TOP__pixel_fifo_top__DOT__u_decomp_ch1;
    Vpixel_fifo_top_Decompresser   TOP__pixel_fifo_top__DOT__u_decomp_ch2;
    Vpixel_fifo_top_Decompresser   TOP__pixel_fifo_top__DOT__u_decomp_ch3;
    Vpixel_fifo_top_Decompresser   TOP__pixel_fifo_top__DOT__u_decomp_ch4;
    Vpixel_fifo_top_Decompresser   TOP__pixel_fifo_top__DOT__u_decomp_script;
    Vpixel_fifo_top_Decompresser   TOP__pixel_fifo_top__DOT__u_decomp_status;
    Vpixel_fifo_top_Decompresser   TOP__pixel_fifo_top__DOT__u_decomp_uni1;
    Vpixel_fifo_top_Decompresser   TOP__pixel_fifo_top__DOT__u_decomp_uni2;
    
    // CREATORS
    Vpixel_fifo_top__Syms(Vpixel_fifo_top* topp, const char* namep);
    ~Vpixel_fifo_top__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
