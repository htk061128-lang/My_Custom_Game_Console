// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VI_CACHE_CONTROLLER__SYMS_H_
#define _VI_CACHE_CONTROLLER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VI_Cache_Controller.h"

// SYMS CLASS
class VI_Cache_Controller__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VI_Cache_Controller*           TOPp;
    
    // CREATORS
    VI_Cache_Controller__Syms(VI_Cache_Controller* topp, const char* namep);
    ~VI_Cache_Controller__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
