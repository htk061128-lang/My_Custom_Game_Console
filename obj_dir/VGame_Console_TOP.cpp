// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGame_Console_TOP.h for the primary calling header

#include "VGame_Console_TOP.h"
#include "VGame_Console_TOP__Syms.h"

//==========

void VGame_Console_TOP::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VGame_Console_TOP::eval\n"); );
    VGame_Console_TOP__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VGame_Console_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Game_Console_TOP.sv", 2, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VGame_Console_TOP::_eval_initial_loop(VGame_Console_TOP__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Game_Console_TOP.sv", 2, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VGame_Console_TOP::_sequent__TOP__3(VGame_Console_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGame_Console_TOP::_sequent__TOP__3\n"); );
    VGame_Console_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__mem_state;
    CData/*5:0*/ __Vdlyvdim0__Game_Console_TOP__DOT__u_cpu__DOT__cpuregs__v0;
    CData/*0:0*/ __Vdlyvset__Game_Console_TOP__DOT__u_cpu__DOT__cpuregs__v0;
    CData/*6:0*/ __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter;
    CData/*0:0*/ __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__running;
    IData/*31:0*/ __Vdlyvval__Game_Console_TOP__DOT__u_cpu__DOT__cpuregs__v0;
    IData/*31:0*/ __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__dividend;
    IData/*31:0*/ __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient;
    IData/*31:0*/ __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient_msk;
    QData/*62:0*/ __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__divisor;
    // Body
    __Vdlyvset__Game_Console_TOP__DOT__u_cpu__DOT__cpuregs__v0 = 0U;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__pcpi_timeout_counter 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_timeout_counter;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__pcpi_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__count_instr 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__count_instr;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__latched_rd 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_rd;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__latched_is_lb 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_is_lb;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__latched_is_lh 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_is_lh;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__latched_is_lu 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_is_lu;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__do_waitirq 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__do_waitirq;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__decoder_pseudo_trigger 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_pseudo_trigger;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__timer 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__timer;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__count_cycle 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__count_cycle;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__reg_sh 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_sh;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__mem_do_prefetch 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_prefetch;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__irq_active 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_active;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__decoder_trigger 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_trigger;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__latched_compr 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_compr;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__reg_pc 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_pc;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__mem_wordsize 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_wordsize;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rinst 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rinst;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__reg_out 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_out;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__irq_mask 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_mask;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__irq_state 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__irq_state;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__cpu_state 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpu_state;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1;
    __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter;
    __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__mem_state 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_state;
    __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient_msk 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient_msk;
    __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient;
    __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__divisor 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__divisor;
    __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__dividend 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__dividend;
    __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__running 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__running;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_remu 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_remu;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_rem 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_rem;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_divu 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_divu;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_div 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_div;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__trace_valid = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_wait = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__trace_data = 0ULL;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_wait_2 = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__launch_next_insn) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_addr 
            = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_pc;
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out_0_q 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__alu_out_0;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_ascii_instr 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_ascii_instr;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_imm 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_imm;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_opcode 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_opcode;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_rs1 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_rs1;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_rs2 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_rs2;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_rd 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_rd;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__clear_prefetched_high_word_q 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__clear_prefetched_high_word;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_next 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__launch_next_insn;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_pseudo_trigger_q 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_pseudo_trigger;
    if ((1U & (~ (IData)(vlTOPp->resetn)))) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_trace = 0U;
    }
    if ((((IData)(vlTOPp->resetn) & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_write)) 
         & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_rd)))) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT____Vlvbound1 
            = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs_wrdata;
        if ((0x23U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_rd))) {
            __Vdlyvval__Game_Console_TOP__DOT__u_cpu__DOT__cpuregs__v0 
                = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT____Vlvbound1;
            __Vdlyvset__Game_Console_TOP__DOT__u_cpu__DOT__cpuregs__v0 = 1U;
            __Vdlyvdim0__Game_Console_TOP__DOT__u_cpu__DOT__cpuregs__v0 
                = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__latched_rd;
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__pcpi_wait_q 
        = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_wait) 
           & (IData)(vlTOPp->resetn));
    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_fence 
            = ((0xfU == (0x7fU & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_q)) 
               & (~ (IData)((0U != (7U & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_q 
                                          >> 0xcU))))));
    }
    if ((1U & (~ (IData)(vlTOPp->resetn)))) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__instr_fence = 0U;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_trigger_q) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_ascii_instr 
            = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__new_ascii_instr;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_trigger_q) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_opcode 
            = ((3U == (3U & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_insn_opcode))
                ? vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_insn_opcode
                : (0xffffU & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_insn_opcode));
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_trigger_q) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_rd 
            = (0x1fU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rd));
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_trigger_q) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_rs1 
            = (0x1fU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs1));
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_trigger_q) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_rs2 
            = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs2;
    }
    if ((1U & ((~ (IData)(vlTOPp->resetn)) | (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_trap)))) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_valid_insn = 0U;
    } else {
        if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__launch_next_insn) {
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_valid_insn = 1U;
        }
    }
    if ((1U & ((~ (IData)(vlTOPp->resetn)) | (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_trap)))) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__prefetched_high_word = 0U;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__clear_prefetched_high_word) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__prefetched_high_word = 0U;
    }
    if ((1U & (~ ((~ (IData)(vlTOPp->resetn)) | (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_trap))))) {
        if (vlTOPp->Game_Console_TOP__DOT__cpu_la_write) {
            vlTOPp->Game_Console_TOP__DOT__cpu_mem_wdata 
                = vlTOPp->Game_Console_TOP__DOT__cpu_la_wdata;
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_wr = 0U;
    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish) 
         & (IData)(vlTOPp->resetn))) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_wr = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_ready = 0U;
    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish) 
         & (IData)(vlTOPp->resetn))) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_ready = 1U;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_trigger_q) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_imm 
            = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_imm;
    }
    if (vlTOPp->resetn) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__last_mem_valid)))) {
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_la_firstword_reg = 0U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_la_firstword_reg = 0U;
    }
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_remu = 0U;
    if ((((((IData)(vlTOPp->resetn) & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_valid)) 
           & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_ready))) 
          & (0x33U == (0x7fU & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn))) 
         & (1U == (0x7fU & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn 
                            >> 0x19U))))) {
        if ((4U != (7U & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((5U != (7U & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn 
                              >> 0xcU)))) {
                if ((6U != (7U & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    if ((7U == (7U & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn 
                                      >> 0xcU)))) {
                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_remu = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_rem = 0U;
    if ((((((IData)(vlTOPp->resetn) & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_valid)) 
           & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_ready))) 
          & (0x33U == (0x7fU & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn))) 
         & (1U == (0x7fU & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn 
                            >> 0x19U))))) {
        if ((4U != (7U & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((5U != (7U & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn 
                              >> 0xcU)))) {
                if ((6U == (7U & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_rem = 1U;
                }
            }
        }
    }
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_divu = 0U;
    if ((((((IData)(vlTOPp->resetn) & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_valid)) 
           & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_ready))) 
          & (0x33U == (0x7fU & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn))) 
         & (1U == (0x7fU & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn 
                            >> 0x19U))))) {
        if ((4U != (7U & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((5U == (7U & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn 
                              >> 0xcU)))) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_divu = 1U;
            }
        }
    }
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_div = 0U;
    if ((((((IData)(vlTOPp->resetn) & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_valid)) 
           & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_ready))) 
          & (0x33U == (0x7fU & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn))) 
         & (1U == (0x7fU & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn 
                            >> 0x19U))))) {
        if ((4U == (7U & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_insn 
                          >> 0xcU)))) {
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_div = 1U;
        }
    }
    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish) 
         & (IData)(vlTOPp->resetn))) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_rd 
            = (IData)(((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_any_mulh)
                        ? (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rd 
                           >> 0x20U) : vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rd));
    }
    if (__Vdlyvset__Game_Console_TOP__DOT__u_cpu__DOT__cpuregs__v0) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cpuregs[__Vdlyvdim0__Game_Console_TOP__DOT__u_cpu__DOT__cpuregs__v0] 
            = __Vdlyvval__Game_Console_TOP__DOT__u_cpu__DOT__cpuregs__v0;
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_xfer) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_insn_opcode 
            = vlTOPp->Game_Console_TOP__DOT__cache_cpu_rdata;
    }
    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_done))) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs1 
            = (0x1fU & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_latched_noshuffle 
                        >> 0xfU));
        if (((0xbU == (0x7fU & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_latched_noshuffle)) 
             & (0U == (0x7fU & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_latched_noshuffle 
                                >> 0x19U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs1 
                = (0x20U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs1));
        }
        if (((0xbU == (0x7fU & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_latched_noshuffle)) 
             & (2U == (0x7fU & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_rdata_latched_noshuffle 
                                >> 0x19U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs1 = 0x20U;
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__last_mem_valid 
        = ((IData)(vlTOPp->resetn) & ((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
                                      & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__cache_cpu_ready))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_wr = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_rd = 0U;
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__start) {
            __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__running = 1U;
            __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__dividend 
                = ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_div) 
                     | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_rem)) 
                    & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
                       >> 0x1fU)) ? (- vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1)
                    : vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1);
            __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__divisor 
                = (0x7fffffffffffffffULL & (((((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_div) 
                                               | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_rem)) 
                                              & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2 
                                                 >> 0x1fU))
                                              ? (- (QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2)))
                                              : (QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2))) 
                                            << 0x1fU));
            __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient = 0U;
            __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient_msk = 0x80000000U;
        } else {
            if (((~ (IData)((0U != vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient_msk))) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__running))) {
                __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__running = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_ready = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_wr = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_div_rd 
                    = (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_div) 
                        | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_divu))
                        ? ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__outsign)
                            ? (- vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient)
                            : vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient)
                        : ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__outsign)
                            ? (- vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__dividend)
                            : vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__dividend));
            } else {
                if ((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__divisor 
                     <= (QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__dividend)))) {
                    __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__dividend 
                        = (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__dividend 
                           - (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__divisor));
                    __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient 
                        = (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient 
                           | vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient_msk);
                }
                __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__divisor 
                    = (0x7fffffffffffffffULL & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__divisor 
                                                >> 1U));
                __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient_msk 
                    = (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient_msk 
                       >> 1U);
            }
        }
    } else {
        __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__running = 0U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish = 0U;
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_waiting) {
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs1 
                = (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh) 
                    | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulhsu))
                    ? VL_EXTENDS_QI(64,32, vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1)
                    : (QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1)));
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs2 
                = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_mulh)
                    ? VL_EXTENDS_QI(64,32, vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2)
                    : (QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2)));
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rd = 0ULL;
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rdx = 0ULL;
            __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter 
                = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__instr_any_mulh)
                    ? 0x3eU : 0x1eU);
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_waiting 
                = (1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_wait) 
                            & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q)))));
        } else {
            __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter 
                = (0x7fU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter) 
                            - (IData)(1U)));
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rd 
                = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd;
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rdx 
                = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx;
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs1 
                = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1;
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs2 
                = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2;
            if ((0x40U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter))) {
                vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_finish = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_waiting = 1U;
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_waiting = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__running 
        = __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__running;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__dividend 
        = __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__dividend;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__divisor 
        = __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__divisor;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient 
        = __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient_msk 
        = __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__quotient_msk;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter 
        = __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__mul_counter;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_opcode 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_opcode;
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_next) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_opcode 
            = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_opcode
                : ((3U == (3U & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_insn_opcode))
                    ? vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_insn_opcode
                    : (0xffffU & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__next_insn_opcode)));
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_rs1 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__q_insn_rs1;
    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_next) {
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__dbg_insn_rs1 
            = (0x1fU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoder_pseudo_trigger_q)
                         ? (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__cached_insn_rs1)
                         : (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__decoded_rs1)));
    }
    if ((1U & ((~ (IData)(vlTOPp->resetn)) | (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_trap)))) {
        if ((1U & (~ (IData)(vlTOPp->resetn)))) {
            __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlTOPp->resetn)) | (IData)(vlTOPp->Game_Console_TOP__DOT__cache_cpu_ready)))) {
            vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid = 0U;
        }
        vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_la_read) 
             | (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_la_write))) {
            vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb 
                = ((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_la_wstrb) 
                   & (- (IData)((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_la_write))));
        }
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_state))) {
            if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_prefetch) 
                  | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rinst)) 
                 | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rdata))) {
                vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid = 1U;
                vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr 
                    = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_prefetch) 
                       | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rinst));
                vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb = 0U;
                __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__mem_state = 1U;
            }
            if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_wdata) {
                vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid = 1U;
                vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr = 0U;
                __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__mem_state = 2U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_state))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_xfer) {
                    vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid = 0U;
                    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_la_secondword = 0U;
                    __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__mem_state 
                        = (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rinst) 
                            | (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rdata))
                            ? 0U : 3U);
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_state))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_xfer) {
                        vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid = 0U;
                        __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__mem_state = 0U;
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_state))) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_do_rinst) {
                            __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__mem_state = 0U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__start) {
            vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__outsign 
                = ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_div) 
                     & ((1U & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
                               >> 0x1fU)) != (1U & 
                                              (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2 
                                               >> 0x1fU)))) 
                    & (0U != vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op2)) 
                   | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk4__DOT__pcpi_div__DOT__instr_rem) 
                      & (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__reg_op1 
                         >> 0x1fU)));
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rd;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rdx;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs1;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__rs2;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
        = ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1))
            ? vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2
            : 0ULL);
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt = 0ULL;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd)) 
                   + (0xfU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx))) 
                  + (0xfU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2))) 
                 >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
                    + (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx)) 
                   + (IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2)));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffffffff7ULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 3U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffffff0ULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | (IData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 4U))) + (0xfU 
                                                & (IData)(
                                                          (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 4U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 4U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 4U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 4U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 4U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffffffff7fULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 7U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffffffff0fULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 8U))) + (0xfU 
                                                & (IData)(
                                                          (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 8U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 8U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 8U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 8U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 8U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffffff7ffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0xbU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffff0ffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 8U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0xcU))) + (0xfU 
                                                  & (IData)(
                                                            (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                             >> 0xcU)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0xcU)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0xcU)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                  >> 0xcU))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0xcU))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffffff7fffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0xfU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffffff0fffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0xcU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x10U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x10U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x10U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x10U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x10U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x10U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffff7ffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x13U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffff0ffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x10U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x14U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x14U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x14U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x14U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x14U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x14U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffff7fffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x17U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffff0fffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x14U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x18U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x18U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x18U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x18U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x18U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x18U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffff7ffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x1bU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffff0ffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x18U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x1cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x1cU)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x1cU)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x1cU)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x1cU))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x1cU))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffff7fffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x1fU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffff0fffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x1cU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x20U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x20U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x20U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x20U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x20U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x20U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffff7ffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x23U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffff0ffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x20U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x24U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x24U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x24U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x24U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x24U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x24U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffff7fffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x27U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffff0fffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x24U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x28U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x28U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x28U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x28U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x28U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x28U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffff7ffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x2bU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffff0ffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x28U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x2cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x2cU)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x2cU)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x2cU)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x2cU))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x2cU))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffff7fffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x2fU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffff0fffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x2cU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x30U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x30U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x30U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x30U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x30U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x30U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfff7ffffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x33U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfff0ffffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x30U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x34U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x34U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x34U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x34U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x34U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x34U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xff7fffffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x37U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xff0fffffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x34U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x38U))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x38U)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x38U)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x38U)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x38U))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x38U))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xf7ffffffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x3bU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xf0ffffffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x38U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x3cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x3cU)))) 
                  + (0xfU & (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x3cU)))) >> 4U));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x3cU)) + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x3cU))) 
                   + (IData)((vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x3cU))));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
        = ((0x7fffffffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x3fU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffffffULL & vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x3cU));
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdx 
        = (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rdt 
           << 1U);
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1 
        = (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs1 
           >> 1U);
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2 
        = (vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__next_rs2 
           << 1U);
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__genblk2__DOT__pcpi_mul__DOT__pcpi_wait_q 
        = vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__pcpi_mul_wait;
    vlTOPp->Game_Console_TOP__DOT__u_cpu__DOT__mem_state 
        = __Vdly__Game_Console_TOP__DOT__u_cpu__DOT__mem_state;
}

VL_INLINE_OPT void VGame_Console_TOP::_sequent__TOP__4(VGame_Console_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGame_Console_TOP::_sequent__TOP__4\n"); );
    VGame_Console_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v0 = 0U;
    vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v1 = 0U;
    vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v2 = 0U;
    vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v3 = 0U;
    vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v4 = 0U;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_data 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_data;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_data 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_data;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_data 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_data;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_x 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_x;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg_valid 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg_valid;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_next_ad 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_next_ad;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_next_ad 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_next_ad;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_next_ad 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_next_ad;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_next_ad 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_next_ad;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_next_ad 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_next_ad;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_next_ad 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_next_ad;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_next_ad 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_next_ad;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_next_ad 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_next_ad;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_next_ad 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_next_ad;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_next_ad 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_next_ad;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_rear 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_rear;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_rear 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_rear;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_rear 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_rear;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_rear 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_rear;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_rear 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_rear;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_rear 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_rear;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_rear 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_rear;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_rear 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_rear;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_rear 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_rear;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_rear 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_rear;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count;
    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count;
    vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs__v0 = 0U;
    vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs__v1 = 0U;
    vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs__v2 = 0U;
    if ((1U & (~ (IData)(vlTOPp->resetn)))) {
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__i = 0x2bU;
    }
    if (vlTOPp->resetn) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_3 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_3)));
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x_next;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y_next;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next;
        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit 
            = ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit)) 
               & 1U);
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_3 = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_0) {
            vlTOPp->__Vdlyvval__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v0 
                = vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata
                [0U];
            vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v0 = 1U;
        }
        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_1) {
            vlTOPp->__Vdlyvval__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v1 
                = vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata
                [1U];
            vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v1 = 1U;
        }
        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_2) {
            vlTOPp->__Vdlyvval__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v2 
                = vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata
                [2U];
            vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v2 = 1U;
        }
        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wen_3) {
            vlTOPp->__Vdlyvval__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v3 
                = vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer_wdata
                [3U];
            vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v3 = 1U;
        }
    } else {
        vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v4 = 1U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_exclusive_pixel = 0U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_exclusive_pixel = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_exclusive_valid = 1U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_exclusive_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_exclusive_pixel = 0U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_exclusive_pixel = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_exclusive_valid = 1U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_exclusive_valid = 0U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state 
        = ((IData)(vlTOPp->resetn) ? (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_next)
            : 0U);
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter_plus) {
            vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter 
                = (0xfU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter)));
        }
        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter_reset) {
            vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter = 0U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__burst_counter = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_exclusive_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req12_RGB;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req12_exclusive_RGB = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_exclusive_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req11_RGB;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req11_exclusive_RGB = 0U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_1 
        = ((IData)(vlTOPp->resetn) & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_1)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_2 
        = ((IData)(vlTOPp->resetn) ? ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_2))
                                       ? 0U : (3U & 
                                               ((IData)(1U) 
                                                + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__random_counter_0_2))))
            : 0U);
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req10_RGB;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_RGB = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req9_RGB;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_RGB = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req5_RGB;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_RGB = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req4_RGB;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_RGB = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req8_RGB;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_RGB = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req1_RGB;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_RGB = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req7_RGB;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_RGB = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req3_RGB;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_RGB = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req6_RGB;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_RGB = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_RGB 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT____Vcellout__u_rgb__Req2_RGB;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_RGB = 0U;
    }
    if (vlTOPp->resetn) {
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state_next;
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_inc) {
            if ((0x13fU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_x))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_y 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_y)));
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_x = 0U;
            } else {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_x 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_x)));
            }
        }
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state))) {
            if (vlTOPp->Game_Console_TOP__DOT__PPU_start) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_y = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state = 1U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_x = 0U;
            } else {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state = 0U;
            }
        }
    } else {
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_y = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_x = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_valid = 1U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_valid = 1U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_valid = 1U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_valid = 1U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_valid = 1U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_valid = 1U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_valid = 1U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_valid = 1U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_valid = 1U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_valid = 1U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_valid = 0U;
    }
    if (vlTOPp->resetn) {
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state_next;
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_w_ena) {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid = 1U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid = 1U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid = 1U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid = 1U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid = 1U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid = 1U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid = 1U;
            } else {
                if (((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_ascii) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_ascii_font_bitmap)) 
                        | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_custom) 
                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap))) 
                       | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                           & (0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap))) 
                      | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                          & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                            >> 8U))) | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                                         & (9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                                        & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                                           >> 8U)))) {
                    if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg;
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid = 1U;
                        } else {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid = 1U;
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid = 1U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1) 
                                       | (0x3f000U 
                                          & ((((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                >> 0xcU) 
                                               - (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                     >> 0xeU))) 
                                              + (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg 
                                                    >> 0xeU))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1) 
                                       | (0xfc0U & 
                                          ((((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                              >> 6U) 
                                             - (0xfU 
                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                   >> 8U))) 
                                            + (0xfU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg 
                                                  >> 8U))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1) 
                                       | (0x3fU & (
                                                   (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                    - 
                                                    (0xfU 
                                                     & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                        >> 2U))) 
                                                   + 
                                                   (0xfU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg 
                                                       >> 2U)))));
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1) 
                                       | (0x3f000U 
                                          & (((0x1fU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                  >> 0xdU)) 
                                              + (0x1fU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg 
                                                    >> 0xdU))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1) 
                                       | (0xfc0U & 
                                          (((0x1fU 
                                             & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                >> 7U)) 
                                            + (0x1fU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg 
                                                  >> 7U))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1) 
                                       | (0x3fU & (
                                                   (0x1fU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                       >> 1U)) 
                                                   + 
                                                   (0x1fU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg 
                                                       >> 1U)))));
                            }
                        } else {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1) 
                                       | (0x3f000U 
                                          & (((0xfU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                  >> 0xeU)) 
                                              + ((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg 
                                                  >> 0xcU) 
                                                 - 
                                                 (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg 
                                                     >> 0xeU)))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1) 
                                       | (0xfc0U & 
                                          (((0xfU & 
                                             (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                              >> 8U)) 
                                            + ((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg 
                                                >> 6U) 
                                               - (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg 
                                                     >> 8U)))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1) 
                                       | (0x3fU & (
                                                   (0xfU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                       >> 2U)) 
                                                   + 
                                                   (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg 
                                                    - 
                                                    (0xfU 
                                                     & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg 
                                                        >> 2U))))));
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid = 1U;
                            }
                        }
                    }
                } else {
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid = 1U;
                }
                if (((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_ascii) 
                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_ascii_font_bitmap) 
                            >> 1U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_custom) 
                                       & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap) 
                                          >> 1U))) 
                       | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                           & (0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                          & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                             >> 1U))) | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                                          & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                                            >> 9U))) 
                     | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                         & (9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                        & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                           >> 9U)))) {
                    if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg;
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid = 1U;
                        } else {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid = 1U;
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid = 1U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2) 
                                       | (0x3f000U 
                                          & ((((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                >> 0xcU) 
                                               - (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                     >> 0xeU))) 
                                              + (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg 
                                                    >> 0xeU))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2) 
                                       | (0xfc0U & 
                                          ((((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                              >> 6U) 
                                             - (0xfU 
                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                   >> 8U))) 
                                            + (0xfU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg 
                                                  >> 8U))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2) 
                                       | (0x3fU & (
                                                   (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                    - 
                                                    (0xfU 
                                                     & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                        >> 2U))) 
                                                   + 
                                                   (0xfU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg 
                                                       >> 2U)))));
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2) 
                                       | (0x3f000U 
                                          & (((0x1fU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                  >> 0xdU)) 
                                              + (0x1fU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg 
                                                    >> 0xdU))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2) 
                                       | (0xfc0U & 
                                          (((0x1fU 
                                             & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                >> 7U)) 
                                            + (0x1fU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg 
                                                  >> 7U))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2) 
                                       | (0x3fU & (
                                                   (0x1fU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                       >> 1U)) 
                                                   + 
                                                   (0x1fU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg 
                                                       >> 1U)))));
                            }
                        } else {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2) 
                                       | (0x3f000U 
                                          & (((0xfU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                  >> 0xeU)) 
                                              + ((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg 
                                                  >> 0xcU) 
                                                 - 
                                                 (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg 
                                                     >> 0xeU)))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2) 
                                       | (0xfc0U & 
                                          (((0xfU & 
                                             (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                              >> 8U)) 
                                            + ((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg 
                                                >> 6U) 
                                               - (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg 
                                                     >> 8U)))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2) 
                                       | (0x3fU & (
                                                   (0xfU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                       >> 2U)) 
                                                   + 
                                                   (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg 
                                                    - 
                                                    (0xfU 
                                                     & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg 
                                                        >> 2U))))));
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid = 1U;
                            }
                        }
                    }
                } else {
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid = 1U;
                }
                if (((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_ascii) 
                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_ascii_font_bitmap) 
                            >> 2U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_custom) 
                                       & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap) 
                                          >> 2U))) 
                       | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                           & (0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                          & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                             >> 2U))) | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                                          & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                                            >> 0xaU))) 
                     | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                         & (9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                        & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                           >> 0xaU)))) {
                    if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg;
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid = 1U;
                        } else {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid = 1U;
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid = 1U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3) 
                                       | (0x3f000U 
                                          & ((((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                >> 0xcU) 
                                               - (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                     >> 0xeU))) 
                                              + (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg 
                                                    >> 0xeU))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3) 
                                       | (0xfc0U & 
                                          ((((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                              >> 6U) 
                                             - (0xfU 
                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                   >> 8U))) 
                                            + (0xfU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg 
                                                  >> 8U))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3) 
                                       | (0x3fU & (
                                                   (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                    - 
                                                    (0xfU 
                                                     & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                        >> 2U))) 
                                                   + 
                                                   (0xfU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg 
                                                       >> 2U)))));
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3) 
                                       | (0x3f000U 
                                          & (((0x1fU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                  >> 0xdU)) 
                                              + (0x1fU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg 
                                                    >> 0xdU))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3) 
                                       | (0xfc0U & 
                                          (((0x1fU 
                                             & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                >> 7U)) 
                                            + (0x1fU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg 
                                                  >> 7U))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3) 
                                       | (0x3fU & (
                                                   (0x1fU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                       >> 1U)) 
                                                   + 
                                                   (0x1fU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg 
                                                       >> 1U)))));
                            }
                        } else {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3) 
                                       | (0x3f000U 
                                          & (((0xfU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                  >> 0xeU)) 
                                              + ((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg 
                                                  >> 0xcU) 
                                                 - 
                                                 (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg 
                                                     >> 0xeU)))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3) 
                                       | (0xfc0U & 
                                          (((0xfU & 
                                             (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                              >> 8U)) 
                                            + ((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg 
                                                >> 6U) 
                                               - (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg 
                                                     >> 8U)))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3) 
                                       | (0x3fU & (
                                                   (0xfU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                       >> 2U)) 
                                                   + 
                                                   (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg 
                                                    - 
                                                    (0xfU 
                                                     & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg 
                                                        >> 2U))))));
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid = 1U;
                            }
                        }
                    }
                } else {
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid = 1U;
                }
                if (((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_ascii) 
                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_ascii_font_bitmap) 
                            >> 3U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_custom) 
                                       & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap) 
                                          >> 3U))) 
                       | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                           & (0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                          & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                             >> 3U))) | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                                          & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                                            >> 0xbU))) 
                     | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                         & (9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                        & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                           >> 0xbU)))) {
                    if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg;
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid = 1U;
                        } else {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid = 1U;
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid = 1U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4) 
                                       | (0x3f000U 
                                          & ((((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                >> 0xcU) 
                                               - (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                     >> 0xeU))) 
                                              + (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg 
                                                    >> 0xeU))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4) 
                                       | (0xfc0U & 
                                          ((((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                              >> 6U) 
                                             - (0xfU 
                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                   >> 8U))) 
                                            + (0xfU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg 
                                                  >> 8U))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4) 
                                       | (0x3fU & (
                                                   (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                    - 
                                                    (0xfU 
                                                     & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                        >> 2U))) 
                                                   + 
                                                   (0xfU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg 
                                                       >> 2U)))));
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4) 
                                       | (0x3f000U 
                                          & (((0x1fU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                  >> 0xdU)) 
                                              + (0x1fU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg 
                                                    >> 0xdU))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4) 
                                       | (0xfc0U & 
                                          (((0x1fU 
                                             & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                >> 7U)) 
                                            + (0x1fU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg 
                                                  >> 7U))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4) 
                                       | (0x3fU & (
                                                   (0x1fU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                       >> 1U)) 
                                                   + 
                                                   (0x1fU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg 
                                                       >> 1U)))));
                            }
                        } else {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4) 
                                       | (0x3f000U 
                                          & (((0xfU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                  >> 0xeU)) 
                                              + ((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg 
                                                  >> 0xcU) 
                                                 - 
                                                 (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg 
                                                     >> 0xeU)))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4) 
                                       | (0xfc0U & 
                                          (((0xfU & 
                                             (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                              >> 8U)) 
                                            + ((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg 
                                                >> 6U) 
                                               - (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg 
                                                     >> 8U)))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4) 
                                       | (0x3fU & (
                                                   (0xfU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                       >> 2U)) 
                                                   + 
                                                   (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg 
                                                    - 
                                                    (0xfU 
                                                     & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg 
                                                        >> 2U))))));
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid = 1U;
                            }
                        }
                    }
                } else {
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid = 1U;
                }
                if (((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_ascii) 
                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_ascii_font_bitmap) 
                            >> 4U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_custom) 
                                       & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap) 
                                          >> 4U))) 
                       | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                           & (0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                          & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                             >> 4U))) | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                                          & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                                            >> 0xcU))) 
                     | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                         & (9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                        & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                           >> 0xcU)))) {
                    if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg;
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid = 1U;
                        } else {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid = 1U;
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid = 1U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5) 
                                       | (0x3f000U 
                                          & ((((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                >> 0xcU) 
                                               - (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                     >> 0xeU))) 
                                              + (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg 
                                                    >> 0xeU))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5) 
                                       | (0xfc0U & 
                                          ((((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                              >> 6U) 
                                             - (0xfU 
                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                   >> 8U))) 
                                            + (0xfU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg 
                                                  >> 8U))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5) 
                                       | (0x3fU & (
                                                   (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                    - 
                                                    (0xfU 
                                                     & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                        >> 2U))) 
                                                   + 
                                                   (0xfU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg 
                                                       >> 2U)))));
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5) 
                                       | (0x3f000U 
                                          & (((0x1fU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                  >> 0xdU)) 
                                              + (0x1fU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg 
                                                    >> 0xdU))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5) 
                                       | (0xfc0U & 
                                          (((0x1fU 
                                             & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                >> 7U)) 
                                            + (0x1fU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg 
                                                  >> 7U))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5) 
                                       | (0x3fU & (
                                                   (0x1fU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                       >> 1U)) 
                                                   + 
                                                   (0x1fU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg 
                                                       >> 1U)))));
                            }
                        } else {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5) 
                                       | (0x3f000U 
                                          & (((0xfU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                  >> 0xeU)) 
                                              + ((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg 
                                                  >> 0xcU) 
                                                 - 
                                                 (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg 
                                                     >> 0xeU)))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5) 
                                       | (0xfc0U & 
                                          (((0xfU & 
                                             (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                              >> 8U)) 
                                            + ((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg 
                                                >> 6U) 
                                               - (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg 
                                                     >> 8U)))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5) 
                                       | (0x3fU & (
                                                   (0xfU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                       >> 2U)) 
                                                   + 
                                                   (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg 
                                                    - 
                                                    (0xfU 
                                                     & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg 
                                                        >> 2U))))));
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid = 1U;
                            }
                        }
                    }
                } else {
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid = 1U;
                }
                if (((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_ascii) 
                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_ascii_font_bitmap) 
                            >> 5U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_custom) 
                                       & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap) 
                                          >> 5U))) 
                       | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                           & (0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                          & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                             >> 5U))) | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                                          & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                                            >> 0xdU))) 
                     | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                         & (9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                        & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                           >> 0xdU)))) {
                    if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg;
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid = 1U;
                        } else {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid = 1U;
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid = 1U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6) 
                                       | (0x3f000U 
                                          & ((((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                >> 0xcU) 
                                               - (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                     >> 0xeU))) 
                                              + (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg 
                                                    >> 0xeU))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6) 
                                       | (0xfc0U & 
                                          ((((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                              >> 6U) 
                                             - (0xfU 
                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                   >> 8U))) 
                                            + (0xfU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg 
                                                  >> 8U))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6) 
                                       | (0x3fU & (
                                                   (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                    - 
                                                    (0xfU 
                                                     & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                        >> 2U))) 
                                                   + 
                                                   (0xfU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg 
                                                       >> 2U)))));
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6) 
                                       | (0x3f000U 
                                          & (((0x1fU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                  >> 0xdU)) 
                                              + (0x1fU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg 
                                                    >> 0xdU))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6) 
                                       | (0xfc0U & 
                                          (((0x1fU 
                                             & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                >> 7U)) 
                                            + (0x1fU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg 
                                                  >> 7U))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6) 
                                       | (0x3fU & (
                                                   (0x1fU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                       >> 1U)) 
                                                   + 
                                                   (0x1fU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg 
                                                       >> 1U)))));
                            }
                        } else {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6) 
                                       | (0x3f000U 
                                          & (((0xfU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                  >> 0xeU)) 
                                              + ((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg 
                                                  >> 0xcU) 
                                                 - 
                                                 (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg 
                                                     >> 0xeU)))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6) 
                                       | (0xfc0U & 
                                          (((0xfU & 
                                             (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                              >> 8U)) 
                                            + ((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg 
                                                >> 6U) 
                                               - (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg 
                                                     >> 8U)))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6) 
                                       | (0x3fU & (
                                                   (0xfU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                       >> 2U)) 
                                                   + 
                                                   (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg 
                                                    - 
                                                    (0xfU 
                                                     & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg 
                                                        >> 2U))))));
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid = 1U;
                            }
                        }
                    }
                } else {
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid = 1U;
                }
                if (((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_ascii) 
                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_ascii_font_bitmap) 
                            >> 6U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_custom) 
                                       & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap) 
                                          >> 6U))) 
                       | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                           & (0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                          & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                             >> 6U))) | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                                          & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                                            >> 0xeU))) 
                     | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                         & (9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                        & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                           >> 0xeU)))) {
                    if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg;
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid = 1U;
                        } else {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid = 1U;
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid = 1U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7) 
                                       | (0x3f000U 
                                          & ((((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                >> 0xcU) 
                                               - (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                     >> 0xeU))) 
                                              + (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg 
                                                    >> 0xeU))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7) 
                                       | (0xfc0U & 
                                          ((((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                              >> 6U) 
                                             - (0xfU 
                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                   >> 8U))) 
                                            + (0xfU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg 
                                                  >> 8U))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7) 
                                       | (0x3fU & (
                                                   (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                    - 
                                                    (0xfU 
                                                     & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                        >> 2U))) 
                                                   + 
                                                   (0xfU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg 
                                                       >> 2U)))));
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7) 
                                       | (0x3f000U 
                                          & (((0x1fU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                  >> 0xdU)) 
                                              + (0x1fU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg 
                                                    >> 0xdU))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7) 
                                       | (0xfc0U & 
                                          (((0x1fU 
                                             & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                >> 7U)) 
                                            + (0x1fU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg 
                                                  >> 7U))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7) 
                                       | (0x3fU & (
                                                   (0x1fU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                       >> 1U)) 
                                                   + 
                                                   (0x1fU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg 
                                                       >> 1U)))));
                            }
                        } else {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
                                    = ((0xfffU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7) 
                                       | (0x3f000U 
                                          & (((0xfU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                  >> 0xeU)) 
                                              + ((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg 
                                                  >> 0xcU) 
                                                 - 
                                                 (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg 
                                                     >> 0xeU)))) 
                                             << 0xcU)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid = 1U;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
                                    = ((0x3f03fU & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7) 
                                       | (0xfc0U & 
                                          (((0xfU & 
                                             (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                              >> 8U)) 
                                            + ((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg 
                                                >> 6U) 
                                               - (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg 
                                                     >> 8U)))) 
                                           << 6U)));
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
                                    = ((0x3ffc0U & vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7) 
                                       | (0x3fU & (
                                                   (0xfU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                       >> 2U)) 
                                                   + 
                                                   (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg 
                                                    - 
                                                    (0xfU 
                                                     & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg 
                                                        >> 2U))))));
                            } else {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg;
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid = 1U;
                            }
                        }
                    }
                } else {
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid = 1U;
                }
                if (((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_ascii) 
                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_ascii_font_bitmap) 
                            >> 7U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_custom) 
                                       & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap) 
                                          >> 7U))) 
                       | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                           & (0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                          & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                             >> 7U))) | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                                          & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                                         & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                                            >> 0xfU))) 
                     | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea) 
                         & (9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) 
                        & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap) 
                           >> 0xfU)))) {
                    if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid = 1U;
                        } else {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid = 1U;
                            } else {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid = 1U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 
                                    = ((0xfffU & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8) 
                                       | (0x3f000U 
                                          & ((((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                >> 0xcU) 
                                               - (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                     >> 0xeU))) 
                                              + (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg 
                                                    >> 0xeU))) 
                                             << 0xcU)));
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid = 1U;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 
                                    = ((0x3f03fU & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8) 
                                       | (0xfc0U & 
                                          ((((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                              >> 6U) 
                                             - (0xfU 
                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                   >> 8U))) 
                                            + (0xfU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg 
                                                  >> 8U))) 
                                           << 6U)));
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 
                                    = ((0x3ffc0U & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8) 
                                       | (0x3fU & (
                                                   (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                    - 
                                                    (0xfU 
                                                     & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                        >> 2U))) 
                                                   + 
                                                   (0xfU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg 
                                                       >> 2U)))));
                            } else {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 
                                    = ((0xfffU & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8) 
                                       | (0x3f000U 
                                          & (((0x1fU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                  >> 0xdU)) 
                                              + (0x1fU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg 
                                                    >> 0xdU))) 
                                             << 0xcU)));
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid = 1U;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 
                                    = ((0x3f03fU & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8) 
                                       | (0xfc0U & 
                                          (((0x1fU 
                                             & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                >> 7U)) 
                                            + (0x1fU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg 
                                                  >> 7U))) 
                                           << 6U)));
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 
                                    = ((0x3ffc0U & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8) 
                                       | (0x3fU & (
                                                   (0x1fU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                       >> 1U)) 
                                                   + 
                                                   (0x1fU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg 
                                                       >> 1U)))));
                            }
                        } else {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 
                                    = ((0xfffU & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8) 
                                       | (0x3f000U 
                                          & (((0xfU 
                                               & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                  >> 0xeU)) 
                                              + ((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg 
                                                  >> 0xcU) 
                                                 - 
                                                 (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg 
                                                     >> 0xeU)))) 
                                             << 0xcU)));
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid = 1U;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 
                                    = ((0x3f03fU & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8) 
                                       | (0xfc0U & 
                                          (((0xfU & 
                                             (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                              >> 8U)) 
                                            + ((vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg 
                                                >> 6U) 
                                               - (0xfU 
                                                  & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg 
                                                     >> 8U)))) 
                                           << 6U)));
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 
                                    = ((0x3ffc0U & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8) 
                                       | (0x3fU & (
                                                   (0xfU 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                                       >> 2U)) 
                                                   + 
                                                   (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg 
                                                    - 
                                                    (0xfU 
                                                     & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg 
                                                        >> 2U))))));
                            } else {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg;
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid = 1U;
                            }
                        }
                    }
                } else {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid = 1U;
                }
            }
        }
        if (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_valid)) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_w_ena))) {
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg = 0U;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg_valid = 0U;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg = 0U;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg_valid = 0U;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg = 0U;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg_valid = 0U;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg = 0U;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg_valid = 0U;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg = 0U;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg_valid = 0U;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg = 0U;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg_valid = 0U;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg = 0U;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg_valid = 0U;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg = 0U;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg_valid = 0U;
        } else {
            if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_valid) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_w_ena))) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_RGB;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg_valid 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_valid;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg_valid = 0U;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_shift) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg_valid 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg_valid;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg_valid 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg_valid;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg_valid 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg_valid;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg_valid 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg_valid;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg_valid 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg_valid;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg_valid 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg_valid;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg_valid 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg_valid;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_RGB;
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg_valid 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_valid;
                }
            }
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_shift) 
             & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_w_ena)))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 = 0U;
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid = 0U;
        }
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
            if (vlTOPp->Game_Console_TOP__DOT__PPU_start) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state = 1U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid = 0U;
            } else {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state = 0U;
            }
        }
    } else {
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg_valid = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg_valid = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg_valid = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg_valid = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg_valid = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg_valid = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8 = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_pixel 
                = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un2.Lookup_pixel;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req10_exclusive_pixel = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_pixel 
                = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Lookup_pixel;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req1_exclusive_pixel = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_pixel 
                = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_un1.Lookup_pixel;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req9_exclusive_pixel = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_pixel 
                = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_st.Lookup_pixel;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req8_exclusive_pixel = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_pixel 
                = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch2.Lookup_pixel;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req4_exclusive_pixel = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_pixel 
                = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch4.Lookup_pixel;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req6_exclusive_pixel = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_pixel 
                = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Lookup_pixel;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req2_exclusive_pixel = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_pixel 
                = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch1.Lookup_pixel;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req3_exclusive_pixel = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_pixel 
                = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_ch3.Lookup_pixel;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req5_exclusive_pixel = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_w_ena) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_pixel 
                = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_sc.Lookup_pixel;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__req7_exclusive_pixel = 0U;
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_tag_save) {
            vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag 
                = (0x7fffU & (vlTOPp->Game_Console_TOP__DOT__cpu_mem_addr 
                              >> 0xdU));
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag = 0U;
    }
    if (vlTOPp->resetn) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__is_new_pixel 
            = (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move) 
                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid)) 
               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid));
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move) {
            if (((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_is_trans) 
                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_is_trans)) 
                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_is_trans = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_valid = 1U;
            } else {
                if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_is_trans) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid)) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_R 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB 
                                      >> 8U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB 
                                                    >> 0xeU)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_G 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB 
                                      >> 2U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB 
                                                    >> 8U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_B 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB 
                                      << 4U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB 
                                                    >> 2U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_is_trans = 0U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_valid = 1U;
                } else {
                    if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_is_trans) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_R 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_R;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_G 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_G;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_B 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_B;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_is_trans = 0U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_valid = 1U;
                    } else {
                        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_R 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_R) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB 
                                                       >> 8U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB 
                                                         >> 0xeU))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_G 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_G) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB 
                                                       >> 2U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB 
                                                         >> 8U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_B 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_B) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB 
                                                         >> 2U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_is_trans = 0U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_valid = 1U;
                        } else {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_valid = 0U;
                        }
                    }
                }
            }
            if (((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_is_trans) 
                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_is_trans)) 
                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_valid))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_is_trans = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid = 1U;
            } else {
                if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_is_trans) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_valid))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_R 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB 
                                      >> 8U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB 
                                                    >> 0xeU)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_G 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB 
                                      >> 2U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB 
                                                    >> 8U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_B 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB 
                                      << 4U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB 
                                                    >> 2U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_is_trans = 0U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid = 1U;
                } else {
                    if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_is_trans) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_R 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_R;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_G 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_G;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_B 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_B;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_is_trans = 0U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid = 1U;
                    } else {
                        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_valid))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_R 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_R) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB 
                                                       >> 8U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB 
                                                         >> 0xeU))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_G 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_G) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB 
                                                       >> 2U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB 
                                                         >> 8U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_B 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_B) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB 
                                                         >> 2U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_is_trans = 0U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid = 1U;
                        } else {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid = 0U;
                        }
                    }
                }
            }
            if (((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_is_trans) 
                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_is_trans)) 
                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_valid))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_is_trans = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_valid = 1U;
            } else {
                if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_is_trans) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_valid))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_R 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB 
                                      >> 8U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB 
                                                    >> 0xeU)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_G 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB 
                                      >> 2U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB 
                                                    >> 8U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_B 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB 
                                      << 4U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB 
                                                    >> 2U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_is_trans = 0U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_valid = 1U;
                } else {
                    if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_is_trans) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_R 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_R;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_G 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_G;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_B 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_B;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_is_trans = 0U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_valid = 1U;
                    } else {
                        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_valid))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_R 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_R) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB 
                                                       >> 8U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB 
                                                         >> 0xeU))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_G 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_G) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB 
                                                       >> 2U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB 
                                                         >> 8U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_B 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_B) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB 
                                                         >> 2U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_is_trans = 0U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_valid = 1U;
                        } else {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_valid = 0U;
                        }
                    }
                }
            }
            if (((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_is_trans) 
                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_is_trans)) 
                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_valid))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_is_trans = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_valid = 1U;
            } else {
                if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_is_trans) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_valid))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_R 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB 
                                      >> 8U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB 
                                                    >> 0xeU)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_G 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB 
                                      >> 2U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB 
                                                    >> 8U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_B 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB 
                                      << 4U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB 
                                                    >> 2U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_is_trans = 0U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_valid = 1U;
                } else {
                    if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_is_trans) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_R 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_R;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_G 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_G;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_B 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_B;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_is_trans = 0U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_valid = 1U;
                    } else {
                        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_valid))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_R 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_R) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB 
                                                       >> 8U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB 
                                                         >> 0xeU))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_G 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_G) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB 
                                                       >> 2U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB 
                                                         >> 8U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_B 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_B) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB 
                                                         >> 2U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_is_trans = 0U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_valid = 1U;
                        } else {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_valid = 0U;
                        }
                    }
                }
            }
            if (((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_is_trans) 
                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_is_trans)) 
                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_valid))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_is_trans = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_valid = 1U;
            } else {
                if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_is_trans) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_valid))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_R 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB 
                                      >> 8U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB 
                                                    >> 0xeU)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_G 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB 
                                      >> 2U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB 
                                                    >> 8U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_B 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB 
                                      << 4U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB 
                                                    >> 2U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_is_trans = 0U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_valid = 1U;
                } else {
                    if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_is_trans) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_R 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_R;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_G 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_G;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_B 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_B;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_is_trans = 0U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_valid = 1U;
                    } else {
                        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_valid))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_R 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_R) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB 
                                                       >> 8U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB 
                                                         >> 0xeU))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_G 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_G) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB 
                                                       >> 2U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB 
                                                         >> 8U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_B 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_B) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB 
                                                         >> 2U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_is_trans = 0U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_valid = 1U;
                        } else {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_valid = 0U;
                        }
                    }
                }
            }
            if (((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_is_trans) 
                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_is_trans)) 
                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_valid))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_is_trans = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_valid = 1U;
            } else {
                if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_is_trans) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_valid))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_R 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB 
                                      >> 8U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB 
                                                    >> 0xeU)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_G 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB 
                                      >> 2U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB 
                                                    >> 8U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_B 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB 
                                      << 4U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB 
                                                    >> 2U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_is_trans = 0U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_valid = 1U;
                } else {
                    if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_is_trans) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_R 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_R;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_G 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_G;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_B 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_B;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_is_trans = 0U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_valid = 1U;
                    } else {
                        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_valid))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_R 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_R) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB 
                                                       >> 8U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB 
                                                         >> 0xeU))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_G 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_G) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB 
                                                       >> 2U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB 
                                                         >> 8U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_B 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_B) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB 
                                                         >> 2U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_is_trans = 0U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_valid = 1U;
                        } else {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_valid = 0U;
                        }
                    }
                }
            }
            if (((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_is_trans) 
                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_is_trans)) 
                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_valid))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_is_trans = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_valid = 1U;
            } else {
                if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_is_trans) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid)) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_valid))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_R 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB 
                                      >> 8U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB 
                                                    >> 0xeU)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_G 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB 
                                      >> 2U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB 
                                                    >> 8U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_B 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB 
                                      << 4U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB 
                                                    >> 2U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_is_trans = 0U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_valid = 1U;
                } else {
                    if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_is_trans) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_R 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_R;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_G 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_G;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_B 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_B;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_is_trans = 0U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_valid = 1U;
                    } else {
                        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_valid))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_R 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_R) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB 
                                                       >> 8U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB 
                                                         >> 0xeU))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_G 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_G) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB 
                                                       >> 2U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB 
                                                         >> 8U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_B 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_B) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB 
                                                         >> 2U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_is_trans = 0U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_valid = 1U;
                        } else {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_valid = 0U;
                        }
                    }
                }
            }
            if (((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_is_trans) 
                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_is_trans)) 
                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_valid))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_is_trans = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_valid = 1U;
            } else {
                if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_is_trans) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid)) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_valid))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_R 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB 
                                      >> 8U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB 
                                                    >> 0xeU)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_G 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB 
                                      >> 2U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB 
                                                    >> 8U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_B 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB 
                                      << 4U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB 
                                                    >> 2U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_is_trans = 0U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_valid = 1U;
                } else {
                    if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_is_trans) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_R 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_R;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_G 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_G;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_B 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_B;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_is_trans = 0U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_valid = 1U;
                    } else {
                        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_valid))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_R 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_R) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB 
                                                       >> 8U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB 
                                                         >> 0xeU))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_G 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_G) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB 
                                                       >> 2U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB 
                                                         >> 8U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_B 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_B) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB 
                                                         >> 2U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_is_trans = 0U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_valid = 1U;
                        } else {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_valid = 0U;
                        }
                    }
                }
            }
            if (((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_is_trans) 
                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_is_trans)) 
                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_is_trans = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_valid = 1U;
            } else {
                if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_is_trans) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid)) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_R 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB 
                                      >> 8U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB 
                                                    >> 0xeU)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_G 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB 
                                      >> 2U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB 
                                                    >> 8U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_B 
                        = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB 
                                      << 4U)) | (0xfU 
                                                 & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB 
                                                    >> 2U)));
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_is_trans = 0U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_valid = 1U;
                } else {
                    if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_is_trans) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_R 
                            = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB 
                                          >> 8U)) | 
                               (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB 
                                        >> 0xeU)));
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_G 
                            = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB 
                                          >> 2U)) | 
                               (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB 
                                        >> 8U)));
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_B 
                            = ((0x3f0U & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB 
                                          << 4U)) | 
                               (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB 
                                        >> 2U)));
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_is_trans = 0U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_valid = 1U;
                    } else {
                        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_R 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((
                                                   (0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB 
                                                       >> 8U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB 
                                                         >> 0xeU))) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB 
                                                       >> 8U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB 
                                                         >> 0xeU))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_G 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((
                                                   (0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB 
                                                       >> 2U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB 
                                                         >> 8U))) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB 
                                                       >> 2U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB 
                                                         >> 8U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_B 
                                = (0x7ffU & (((IData)(8U) 
                                              + (((
                                                   (0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB 
                                                         >> 2U))) 
                                                  * 
                                                  (0x7fffU 
                                                   & ((IData)(0x10U) 
                                                      - 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_a))))) 
                                                 + 
                                                 (((0x3f0U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB 
                                                         >> 2U))) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_a))))) 
                                             >> 4U));
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_is_trans = 0U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_valid = 1U;
                        } else {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_valid = 0U;
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
            if (vlTOPp->Game_Console_TOP__DOT__PPU_start) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_valid = 0U;
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_R = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_G = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_B = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_R = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_G = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_B = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_R = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_G = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_B = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_R = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_G = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_B = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_R = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_G = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_B = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_R = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_G = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_B = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_R = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_G = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_B = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_R = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_G = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_B = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_R = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_G = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_B = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__is_new_pixel = 0U;
    }
    if (vlTOPp->resetn) {
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__round_end))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent = 0U;
        }
        if (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__round_end))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic = 0U;
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want) 
             & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want)))) {
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count)));
        } else {
            if (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_inc_want)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want))) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count 
                    = (0x1ffU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count) 
                                 - (IData)(1U)));
            }
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want) 
             & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want)))) {
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count)));
        } else {
            if (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_inc_want)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want))) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count 
                    = (0x1ffU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count) 
                                 - (IData)(1U)));
            }
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want) 
             & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want)))) {
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count)));
        } else {
            if (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_inc_want)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want))) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count 
                    = (0xffU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count) 
                                - (IData)(1U)));
            }
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_inc_want) 
             & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want)))) {
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count)));
        } else {
            if (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_inc_want)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want))) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count 
                    = (0xffU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count) 
                                - (IData)(1U)));
            }
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want) 
             & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want)))) {
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count)));
        } else {
            if (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_inc_want)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want))) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count 
                    = (0xffU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count) 
                                - (IData)(1U)));
            }
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want) 
             & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want)))) {
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count)));
        } else {
            if (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_inc_want)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want))) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count 
                    = (0xffU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count) 
                                - (IData)(1U)));
            }
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_inc_want) 
             & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_dec_want)))) {
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count)));
        } else {
            if (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_inc_want)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_dec_want))) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count 
                    = (0xffU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count) 
                                - (IData)(1U)));
            }
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_inc_want) 
             & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_dec_want)))) {
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count)));
        } else {
            if (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_inc_want)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_dec_want))) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count 
                    = (0xffU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count) 
                                - (IData)(1U)));
            }
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_inc_want) 
             & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want)))) {
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count)));
        } else {
            if (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_inc_want)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want))) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count 
                    = (0xffU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count) 
                                - (IData)(1U)));
            }
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_inc_want) 
             & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want)))) {
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count)));
        } else {
            if (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_inc_want)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want))) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count 
                    = (0xffU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count) 
                                - (IData)(1U)));
            }
        }
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_front 
                = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_front)));
        }
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_front 
                = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_front)));
        }
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_front)));
        }
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_front)));
        }
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_front)));
        }
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_front)));
        }
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_dec_want) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_front)));
        }
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_dec_want) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_front)));
        }
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_front)));
        }
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_front 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_front)));
        }
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
            if (vlTOPp->Game_Console_TOP__DOT__PPU_start) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state = 1U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_next_ad 
                    = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [8U];
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_next_ad 
                    = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [9U];
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_next_ad 
                    = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [7U];
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_next_ad 
                    = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [6U];
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_next_ad 
                    = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [2U];
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_next_ad 
                    = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [3U];
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_next_ad 
                    = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [4U];
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_next_ad 
                    = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [5U];
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_next_ad 
                    = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0U];
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_next_ad 
                    = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [1U];
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_front = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_rear = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_front = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_rear = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_front = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_rear = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_front = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_rear = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_front = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_rear = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_front = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_rear = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_front = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_rear = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_front = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_rear = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_front = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_rear = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_front = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_rear = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg = 0U;
            } else {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode) {
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state = 2U;
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer 
                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer;
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter = 0U;
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg = 0U;
                            if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                             | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                                >> 1U)) 
                                            | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                               >> 2U)) 
                                           | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                              >> 3U)) 
                                          | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                             >> 4U)) 
                                         | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                            >> 5U)) 
                                        | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                           >> 6U)) 
                                       | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                          >> 7U)))) {
                                if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                        = (1U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_next_ad;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                } else {
                                    if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                            = (2U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_next_ad;
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                                = (4U 
                                                   | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_next_ad;
                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                        } else {
                                            if ((8U 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                                    = 
                                                    (8U 
                                                     | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_next_ad;
                                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                            } else {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                                        = 
                                                        (0x10U 
                                                         | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_next_ad;
                                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                                } else {
                                                    if (
                                                        (0x20U 
                                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                                            = 
                                                            (0x20U 
                                                             | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_next_ad;
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                                    } else {
                                                        if (
                                                            (0x40U 
                                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                                                = 
                                                                (0x40U 
                                                                 | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_next_ad;
                                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                                        } else {
                                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                                                = 
                                                                (0x80U 
                                                                 | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_next_ad;
                                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0x100U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                        = (0x100U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_next_ad;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                } else {
                                    if ((0x200U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent 
                                            = (0x200U 
                                               | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent));
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_next_ad;
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                    }
                                }
                            }
                        }
                    } else {
                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state = 2U;
                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer;
                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter = 0U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg = 0U;
                        if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                         | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                            >> 1U)) 
                                        | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                           >> 2U)) 
                                       | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                          >> 3U)) | 
                                      ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                       >> 4U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                                  >> 5U)) 
                                    | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                       >> 6U)) | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer) 
                                                  >> 7U)))) {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic 
                                    = (1U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic));
                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_next_ad;
                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                            } else {
                                if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic 
                                        = (2U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic));
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_next_ad;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                } else {
                                    if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic 
                                            = (4U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic));
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_next_ad;
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                    } else {
                                        if ((8U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic 
                                                = (8U 
                                                   | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic));
                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_next_ad;
                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                        } else {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic 
                                                    = 
                                                    (0x10U 
                                                     | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic));
                                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_next_ad;
                                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                            } else {
                                                if (
                                                    (0x20U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic 
                                                        = 
                                                        (0x20U 
                                                         | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic));
                                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_next_ad;
                                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                                } else {
                                                    if (
                                                        (0x40U 
                                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic 
                                                            = 
                                                            (0x40U 
                                                             | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic));
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_next_ad;
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                                    } else {
                                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic 
                                                            = 
                                                            (0x80U 
                                                             | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic));
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_next_ad;
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                                        vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x100U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic 
                                    = (0x100U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic));
                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_next_ad;
                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                            } else {
                                if ((0x200U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic 
                                        = (0x200U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic));
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 1U;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr 
                                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_next_ad;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 1U;
                                    vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0x1fU;
                                }
                            }
                        }
                    }
                } else {
                    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer))) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__All_Decompresser_is_IDLE) {
                            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__All_Decompresser_is_IDLE) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state = 0U;
                            }
                        } else {
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state = 1U;
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state))) {
                    if (vlTOPp->DDR3_PPU_ready) {
                        if ((0x1fU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state = 1U;
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter = 0U;
                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 0U;
                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr = 0U;
                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0U;
                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 0U;
                            vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0U;
                        } else {
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter)));
                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state = 2U;
                        }
                        if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter))) {
                                if ((1U & ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                    >> 1U)) 
                                                | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                  >> 3U)) 
                                              | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                 >> 4U)) 
                                             | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                                >> 5U)) 
                                            | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                               >> 6U)) 
                                           | ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer) 
                                              >> 7U)))) {
                                    if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_next_ad 
                                            = ((IData)(8U) 
                                               + vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_next_ad);
                                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_rear 
                                            = (0x1ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_rear)));
                                    } else {
                                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_next_ad 
                                                = ((IData)(8U) 
                                                   + vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_next_ad);
                                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_rear 
                                                = (0x1ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_rear)));
                                        } else {
                                            if ((4U 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_next_ad 
                                                    = 
                                                    ((IData)(8U) 
                                                     + vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_next_ad);
                                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_rear 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_rear)));
                                            } else {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_next_ad 
                                                        = 
                                                        ((IData)(8U) 
                                                         + vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_next_ad);
                                                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_rear 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_rear)));
                                                } else {
                                                    if (
                                                        (0x10U 
                                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_next_ad 
                                                            = 
                                                            ((IData)(8U) 
                                                             + vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_next_ad);
                                                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_rear 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_rear)));
                                                    } else {
                                                        if (
                                                            (0x20U 
                                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_next_ad 
                                                                = 
                                                                ((IData)(8U) 
                                                                 + vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_next_ad);
                                                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_rear 
                                                                = 
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_rear)));
                                                        } else {
                                                            if (
                                                                (0x40U 
                                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_next_ad 
                                                                    = 
                                                                    ((IData)(8U) 
                                                                     + vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_next_ad);
                                                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_rear 
                                                                    = 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_rear)));
                                                            } else {
                                                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_next_ad 
                                                                    = 
                                                                    ((IData)(8U) 
                                                                     + vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_next_ad);
                                                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_rear 
                                                                    = 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_rear)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x100U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_next_ad 
                                            = ((IData)(8U) 
                                               + vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_next_ad);
                                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_rear 
                                            = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_rear)));
                                    } else {
                                        if ((0x200U 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer))) {
                                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_next_ad 
                                                = ((IData)(8U) 
                                                   + vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_next_ad);
                                            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_rear 
                                                = (0xffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_rear)));
                                        }
                                    }
                                }
                            }
                        } else {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg 
                                = vlTOPp->DDR3_PPU_rdata;
                        }
                    } else {
                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state = 2U;
                    }
                }
            }
        }
    } else {
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_next_ad 
            = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
            [8U];
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_next_ad 
            = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
            [9U];
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_next_ad 
            = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
            [7U];
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_next_ad 
            = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
            [6U];
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_next_ad 
            = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
            [2U];
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_next_ad 
            = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
            [3U];
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_next_ad 
            = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
            [4U];
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_next_ad 
            = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
            [5U];
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_next_ad 
            = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
            [0U];
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_next_ad 
            = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
            [1U];
        vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr = 0U;
        vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata = 0U;
        vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb = 0xfU;
        vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en = 0U;
        vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_front = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_rear = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_front = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_rear = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_front = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_rear = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_front = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_rear = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_front = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_rear = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_front = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_rear = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_front = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_rear = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_front = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_rear = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_front = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_rear = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_front = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_rear = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__tem_32_reg = 0U;
    }
}

VL_INLINE_OPT void VGame_Console_TOP::_sequent__TOP__5(VGame_Console_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGame_Console_TOP::_sequent__TOP__5\n"); );
    VGame_Console_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->resetn) {
        if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                       [0xaU] >> 0x18U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_RGB 
                = vlTOPp->LUT_data_out1;
        } else {
            if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                           [0xaU] >> 0x18U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_RGB 
                    = vlTOPp->LUT_data_out2;
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_RGB = 0U;
    }
    if (vlTOPp->resetn) {
        if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                       [0xaU] >> 0x10U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_RGB 
                = vlTOPp->LUT_data_out1;
        } else {
            if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                           [0xaU] >> 0x10U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_RGB 
                    = vlTOPp->LUT_data_out2;
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_RGB = 0U;
    }
    if (vlTOPp->resetn) {
        if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                       [0xaU] >> 8U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_RGB 
                = vlTOPp->LUT_data_out1;
        } else {
            if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                           [0xaU] >> 8U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_RGB 
                    = vlTOPp->LUT_data_out2;
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_RGB = 0U;
    }
    if (vlTOPp->resetn) {
        if (((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
              [0xaU]) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_RGB 
                = vlTOPp->LUT_data_out1;
        } else {
            if (((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                  [0xaU]) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_RGB 
                    = vlTOPp->LUT_data_out2;
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_RGB = 0U;
    }
    if (vlTOPp->resetn) {
        if ((((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                        [0xaU] >> 0x18U)) != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_pixel)) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_valid = 0U;
        }
        if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                       [0xaU] >> 0x18U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_valid = 1U;
        } else {
            if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                           [0xaU] >> 0x18U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_valid = 1U;
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if ((((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                        [0xaU] >> 8U)) != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_pixel)) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_valid = 0U;
        }
        if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                       [0xaU] >> 8U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_valid = 1U;
        } else {
            if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                           [0xaU] >> 8U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_valid = 1U;
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if ((((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
               [0xaU]) != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_pixel)) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_valid = 0U;
        }
        if (((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
              [0xaU]) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_valid = 1U;
        } else {
            if (((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                  [0xaU]) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_valid = 1U;
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if ((((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                        [0xaU] >> 0x10U)) != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_pixel)) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_valid = 0U;
        }
        if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                       [0xaU] >> 0x10U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_valid = 1U;
        } else {
            if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                           [0xaU] >> 0x10U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_valid = 1U;
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_valid = 0U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter 
        = ((IData)(vlTOPp->resetn) ? (3U & ((IData)(1U) 
                                            + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))
            : 0U);
    if (vlTOPp->resetn) {
        if ((0U != ((IData)(vlTOPp->joypad_state_in) 
                    & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__joypad_state_latched))))) {
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__joypad_irq_pending = 1U;
        }
        if (((((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ppu_reg)) 
              & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb))) 
             & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)))) {
            if ((0x29U >= (0xffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                    >> 2U)))) {
                vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT____Vlvbound1 
                    = vlTOPp->Game_Console_TOP__DOT__cache_emem_wdata;
                if ((0x2aU >= (0x3fU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                        >> 2U)))) {
                    vlTOPp->__Vdlyvval__Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs__v0 
                        = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT____Vlvbound1;
                    vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs__v0 = 1U;
                    vlTOPp->__Vdlyvdim0__Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs__v0 
                        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                    >> 2U));
                }
            }
        }
        if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
              & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb))) 
             & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)))) {
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram4_r 
                = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram4;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram5_r 
                = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram5;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram6_r 
                = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram6;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram13_r 
                = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram13;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_font_map_r 
                = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_font_map;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_ppu_reg_r 
                = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ppu_reg;
        } else {
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram4_r = 0U;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram5_r = 0U;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram6_r = 0U;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram13_r = 0U;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_font_map_r = 0U;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_ppu_reg_r = 0U;
        }
        if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
              & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb))) 
             & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state)))) {
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram4_w 
                = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram4;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram5_w 
                = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram5;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram6_w 
                = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram6;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram13_w 
                = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_bram13;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_font_map_w 
                = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_font_map;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_ppu_reg_w 
                = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ppu_reg;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_lut_w 
                = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_lut;
        } else {
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram4_w = 0U;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram5_w = 0U;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram6_w = 0U;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram13_w = 0U;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_font_map_w = 0U;
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_ppu_reg_w = 0U;
        }
        if ((((((IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_valid) 
                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sel_ppu_reg)) 
               & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cache_emem_wstrb))) 
              & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state))) 
             & (0x2aU == (0xffU & (vlTOPp->Game_Console_TOP__DOT__cache_emem_addr 
                                   >> 2U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__joypad_irq_pending = 0U;
        }
    } else {
        vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs__v1 = 1U;
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram4_r = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram4_w = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram5_r = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram5_w = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram6_r = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram6_w = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram13_r = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_bram13_w = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_font_map_r = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_font_map_w = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_lut_w = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_ppu_reg_r = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__sampling_ppu_reg_w = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__joypad_irq_pending = 0U;
        vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs__v2 = 1U;
    }
    if (vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v0) {
        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer[0U] 
            = vlTOPp->__Vdlyvval__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v0;
    }
    if (vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v1) {
        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer[1U] 
            = vlTOPp->__Vdlyvval__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v1;
    }
    if (vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v2) {
        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer[2U] 
            = vlTOPp->__Vdlyvval__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v2;
    }
    if (vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v3) {
        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer[3U] 
            = vlTOPp->__Vdlyvval__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v3;
    }
    if (vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_icache__DOT__word_buffer__v4) {
        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer[0U] = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer[1U] = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer[2U] = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer[3U] = 0U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_x 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_x;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_1_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_2_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_3_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_4_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_5_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_6_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_7_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_next_ad 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_next_ad;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_next_ad 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_next_ad;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_next_ad 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_next_ad;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_next_ad 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_next_ad;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_next_ad 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_next_ad;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_next_ad 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_next_ad;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_next_ad 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_next_ad;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_next_ad 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_next_ad;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_next_ad 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_next_ad;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_next_ad 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_next_ad;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_rear 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_rear;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_rear 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_rear;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_rear 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_rear;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_rear 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_rear;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_rear 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_rear;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_rear 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_rear;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_rear 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_rear;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_rear 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_rear;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_rear 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_rear;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_rear 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_rear;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__main_state;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__should_read_layer;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__emem_r_counter;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count;
    vlTOPp->BRAM1_wen = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit)))) {
                        vlTOPp->BRAM1_wen = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM0_wen = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit)))) {
                        vlTOPp->BRAM0_wen = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM0_wstrb = 0xffU;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit)))) {
                        vlTOPp->BRAM0_wstrb = 0xffU;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM1_wstrb = 0xffU;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit)))) {
                        vlTOPp->BRAM1_wstrb = 0xffU;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM2_wen = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                            vlTOPp->BRAM2_wen = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM2_wstrb = 0xffU;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                            vlTOPp->BRAM2_wstrb = 0xffU;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM3_wen = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                            vlTOPp->BRAM3_wen = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM3_wstrb = 0xffU;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                            vlTOPp->BRAM3_wstrb = 0xffU;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM2_ren = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
              & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))) {
            vlTOPp->BRAM2_ren = 1U;
        }
    }
    vlTOPp->BRAM3_ren = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
              & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))) {
            vlTOPp->BRAM3_ren = 1U;
        }
    }
    vlTOPp->BRAM0_ren = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
              & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))) {
            vlTOPp->BRAM0_ren = 1U;
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_tag_save = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
              & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))) {
            vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_tag_save = 1U;
        }
    }
    vlTOPp->BRAM1_ren = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((((IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_valid) 
              & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_wstrb))) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__cpu_mem_instr))) {
            vlTOPp->BRAM1_ren = 1U;
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full 
        = ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_1_reg_valid) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_2_reg_valid)) 
                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_3_reg_valid)) 
               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_4_reg_valid)) 
              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_5_reg_valid)) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_6_reg_valid)) 
            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_7_reg_valid)) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_8_reg_valid));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_mixed_pixel_valid = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_mixed_pixel_valid = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_mixed_pixel_RGB = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_mixed_pixel_RGB 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_line_end = 0U;
    if (((0x13fU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_x)) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_line_end = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_shift = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_inc = 0U;
    if ((((0x13fU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_x)) 
          & (0xefU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_y))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end = 1U;
    }
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state))) {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state_next = 0U;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_8_valid) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state_next = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_shift = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_inc = 1U;
                } else {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_state_next = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__output_pixel_inc = 0U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_shift = 0U;
                }
            }
        }
    }
    if (vlTOPp->resetn) {
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state_next;
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_map_read_ena_reg) 
             & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move)))) {
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_data 
                = (0xffffU & ((0xcU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_mask))
                               ? (vlTOPp->BRAM14_dout_a 
                                  >> 0x10U) : vlTOPp->BRAM14_dout_a));
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_valid = 1U;
        } else {
            if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_valid) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move))) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_data = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_valid = 0U;
            } else {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_data 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_data;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_valid 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_valid;
            }
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena_reg) 
             & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move)))) {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_korea) {
                if ((0xcU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_data 
                        = (0xffffU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_cho_sung_what_bram)
                                       ? (((vlTOPp->BRAM5_dout_a 
                                            | vlTOPp->BRAM6_dout_a) 
                                           | vlTOPp->BRAM13_dout_a) 
                                          >> 0x10U)
                                       : (((vlTOPp->BRAM4_dout_a 
                                            | vlTOPp->BRAM6_dout_a) 
                                           | vlTOPp->BRAM13_dout_a) 
                                          >> 0x10U)));
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_valid = 1U;
                } else {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_data 
                            = (0xffffU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_cho_sung_what_bram)
                                           ? ((vlTOPp->BRAM5_dout_a 
                                               | vlTOPp->BRAM6_dout_a) 
                                              | vlTOPp->BRAM13_dout_a)
                                           : ((vlTOPp->BRAM4_dout_a 
                                               | vlTOPp->BRAM6_dout_a) 
                                              | vlTOPp->BRAM13_dout_a)));
                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_valid = 1U;
                    }
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_ascii) {
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_valid = 1U;
                    if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_data 
                            = (0xffU & vlTOPp->BRAM5_dout_a);
                    }
                    if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_data 
                            = (0xffU & (vlTOPp->BRAM5_dout_a 
                                        >> 8U));
                    }
                    if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_data 
                            = (0xffU & (vlTOPp->BRAM5_dout_a 
                                        >> 0x10U));
                    }
                    if ((8U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_data 
                            = (0xffU & (vlTOPp->BRAM5_dout_a 
                                        >> 0x18U));
                    }
                } else {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_custom) {
                        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_valid = 1U;
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_custom_what_bram) {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data 
                                    = (0xffU & vlTOPp->BRAM6_dout_a);
                            }
                            if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data 
                                    = (0xffU & (vlTOPp->BRAM6_dout_a 
                                                >> 8U));
                            }
                            if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data 
                                    = (0xffU & (vlTOPp->BRAM6_dout_a 
                                                >> 0x10U));
                            }
                            if ((8U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data 
                                    = (0xffU & (vlTOPp->BRAM6_dout_a 
                                                >> 0x18U));
                            }
                        } else {
                            if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data 
                                    = (0xffU & vlTOPp->BRAM5_dout_a);
                            }
                            if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data 
                                    = (0xffU & (vlTOPp->BRAM5_dout_a 
                                                >> 8U));
                            }
                            if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data 
                                    = (0xffU & (vlTOPp->BRAM5_dout_a 
                                                >> 0x10U));
                            }
                            if ((8U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data 
                                    = (0xffU & (vlTOPp->BRAM5_dout_a 
                                                >> 0x18U));
                            }
                        }
                    }
                }
            }
        } else {
            if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_valid) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move))) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_data = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_data = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_valid = 0U;
            } else {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_data 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_data;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_valid 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_valid;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_data 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_data;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_valid 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_valid;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_valid 
                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_valid;
            }
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next))) {
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39 
                = ((0x27U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39))
                    ? 0U : ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset)
                             ? 1U : (0x3fU & ((IData)(1U) 
                                              + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39)))));
            if (((0x27U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39)) 
                 | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset))) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15 
                    = ((0xfU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))));
            }
            if ((((0x27U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39)) 
                  | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset)) 
                 & (0xfU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15)))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14 
                    = ((0xeU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                        ? 0U : (0x3fU & ((IData)(1U) 
                                         + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))));
            }
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset_reg_reg) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move))) {
            vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x = 0U;
        } else {
            if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move) 
                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_valid)) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__is_korea_wire))) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x 
                    = (0x3fU & ((IData)(2U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)));
            } else {
                if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_valid))) {
                    vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x 
                        = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)));
                }
            }
        }
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_index;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_index;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_index;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_valid;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_korea;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_font_x;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_font_y;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_counter_16 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_counter_16;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_next_line;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_ascii 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_ascii;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_custom 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_custom;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_valid 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_valid;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_font_x 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_font_x;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_font_y 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_font_y;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_next_line 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_next_line;
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_korea) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap 
                    = (0xffffU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_valid)
                                   ? (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_data)
                                   : ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_cho_sung_what_bram)
                                       ? ((0xcU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))
                                           ? (((vlTOPp->BRAM5_dout_a 
                                                | vlTOPp->BRAM6_dout_a) 
                                               | vlTOPp->BRAM13_dout_a) 
                                              >> 0x10U)
                                           : ((vlTOPp->BRAM5_dout_a 
                                               | vlTOPp->BRAM6_dout_a) 
                                              | vlTOPp->BRAM13_dout_a))
                                       : ((0xcU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))
                                           ? (((vlTOPp->BRAM4_dout_a 
                                                | vlTOPp->BRAM6_dout_a) 
                                               | vlTOPp->BRAM13_dout_a) 
                                              >> 0x10U)
                                           : ((vlTOPp->BRAM4_dout_a 
                                               | vlTOPp->BRAM6_dout_a) 
                                              | vlTOPp->BRAM13_dout_a)))));
            }
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_ascii) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_valid) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_ascii_font_bitmap 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_data;
                } else {
                    if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_ascii_font_bitmap 
                            = (0xffU & vlTOPp->BRAM5_dout_a);
                    }
                    if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_ascii_font_bitmap 
                            = (0xffU & (vlTOPp->BRAM5_dout_a 
                                        >> 8U));
                    }
                    if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_ascii_font_bitmap 
                            = (0xffU & (vlTOPp->BRAM5_dout_a 
                                        >> 0x10U));
                    }
                    if ((8U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_ascii_font_bitmap 
                            = (0xffU & (vlTOPp->BRAM5_dout_a 
                                        >> 0x18U));
                    }
                }
            }
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_custom) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_valid) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data;
                } else {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_custom_what_bram) {
                        if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap 
                                = (0xffU & vlTOPp->BRAM6_dout_a);
                        }
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap 
                                = (0xffU & (vlTOPp->BRAM6_dout_a 
                                            >> 8U));
                        }
                        if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap 
                                = (0xffU & (vlTOPp->BRAM6_dout_a 
                                            >> 0x10U));
                        }
                        if ((8U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap 
                                = (0xffU & (vlTOPp->BRAM6_dout_a 
                                            >> 0x18U));
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap 
                                = (0xffU & vlTOPp->BRAM5_dout_a);
                        }
                        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap 
                                = (0xffU & (vlTOPp->BRAM5_dout_a 
                                            >> 8U));
                        }
                        if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap 
                                = (0xffU & (vlTOPp->BRAM5_dout_a 
                                            >> 0x10U));
                        }
                        if ((8U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap 
                                = (0xffU & (vlTOPp->BRAM5_dout_a 
                                            >> 0x18U));
                        }
                    }
                }
            }
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_font_x 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_font_x;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_font_y 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_font_y;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_next_line 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_next_line;
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_cho_sung_what_bram 
                    = (7U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set));
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask 
                    = ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16))
                        ? 0xcU : 3U);
            }
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_font_x 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_font_x;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_font_y 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_font_y;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_next_line 
                = ((~ (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_next_line) 
                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_valid)) 
                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__is_korea_wire))) 
                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_next_line));
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask 
                    = ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16))
                        ? ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16))
                            ? 8U : 4U) : ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16))
                                           ? 2U : 1U));
            }
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_valid 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_valid;
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_custom_what_bram 
                    = (0xe053U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16));
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask 
                    = ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16))
                        ? ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16))
                            ? 8U : 4U) : ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16))
                                           ? 2U : 1U));
            }
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_korea 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_font_y 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_next_line 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_ascii 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_valid 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_valid;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_custom 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_counter_16 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y_next;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line_next;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_valid 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16 
                = (0xffffU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_valid)
                               ? (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_data)
                               : ((0xcU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_mask))
                                   ? (vlTOPp->BRAM14_dout_a 
                                      >> 0x10U) : vlTOPp->BRAM14_dout_a)));
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__is_korea_wire) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea = 1U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom = 0U;
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__is_ascii_wire) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea = 0U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii = 1U;
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom = 0U;
                } else {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__is_custom_wire) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea = 0U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii = 0U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom = 1U;
                    } else {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea = 0U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii = 1U;
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom = 0U;
                    }
                }
            }
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_counter_16;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_mask 
                = ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x))
                    ? 0xcU : 3U);
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_font_x 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_counter_16 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_counter_16;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x_next;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_counter_16 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16_next;
        }
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if (vlTOPp->Game_Console_TOP__DOT__PPU_start) {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state = 1U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39 = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14 = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15 = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_data = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_data = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_data = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_valid = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data = 0U;
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16 = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_mask = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_font_x = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_font_y = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_counter_16 = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_next_line = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16 = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_font_x = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_font_y = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_counter_16 = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_next_line = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16 = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_font_x = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_font_y = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16 = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_next_line = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_cho_sung_what_bram = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_custom_what_bram = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_korea = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_ascii = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_custom = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_font_x = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_font_y = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_counter_16 = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_next_line = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_ascii = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_custom = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_ascii_font_bitmap = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_counter_16 = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line = 0U;
            } else {
                vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state = 0U;
            }
        }
    } else {
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39 = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14 = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15 = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_data = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_valid = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_data = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_valid = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_data = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_valid = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data = 0U;
        vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16 = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_mask = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_font_x = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_font_y = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_counter_16 = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe2_next_line = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16 = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_font_x = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_font_y = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_counter_16 = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_next_line = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16 = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_font_x = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_font_y = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16 = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_next_line = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_mask = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_cho_sung_what_bram = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_custom_what_bram = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_korea = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_ascii = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_is_custom = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_font_x = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_font_y = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_counter_16 = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe5_next_line = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_ascii = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_custom = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_korea_font_bitmap = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_ascii_font_bitmap = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_custom_tile_bitmap = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_counter_16 = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line = 0U;
    }
    vlTOPp->BRAM3_din[0U] = 0U;
    vlTOPp->BRAM3_din[1U] = 0U;
    vlTOPp->BRAM3_din[2U] = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                            vlTOPp->BRAM3_din[0U] = 
                                (0x80U | ((0xffffff00U 
                                           & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                        [3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                         [2U])))) 
                                              << 8U)) 
                                          | (0x7fU 
                                             & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag) 
                                                >> 8U))));
                            vlTOPp->BRAM3_din[1U] = 
                                ((0xffU & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                     [3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                      [2U])))) 
                                           >> 0x18U)) 
                                 | (0xffffff00U & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                              [3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                               [2U]))) 
                                                            >> 0x20U)) 
                                                   << 8U)));
                            vlTOPp->BRAM3_din[2U] = 
                                (0xffU & ((IData)((
                                                   (((QData)((IData)(
                                                                     vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                     [3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                      [2U]))) 
                                                   >> 0x20U)) 
                                          >> 0x18U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->BRAM0_din[0U] = 0U;
    vlTOPp->BRAM0_din[1U] = 0U;
    vlTOPp->BRAM0_din[2U] = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit)))) {
                        vlTOPp->BRAM0_din[0U] = ((0xffffff00U 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                               [1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [0U])))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)));
                        vlTOPp->BRAM0_din[1U] = ((0xffU 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                               [1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [0U])))) 
                                                     >> 0x18U)) 
                                                 | (0xffffff00U 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [0U]))) 
                                                                >> 0x20U)) 
                                                       << 8U)));
                        vlTOPp->BRAM0_din[2U] = (0xffU 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                               [1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [0U]))) 
                                                             >> 0x20U)) 
                                                    >> 0x18U));
                    }
                }
            }
        }
    }
    vlTOPp->BRAM1_din[0U] = 0U;
    vlTOPp->BRAM1_din[1U] = 0U;
    vlTOPp->BRAM1_din[2U] = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit)))) {
                        vlTOPp->BRAM1_din[0U] = (0x80U 
                                                 | ((0xffffff00U 
                                                     & ((IData)(
                                                                (((QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [2U])))) 
                                                        << 8U)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag) 
                                                          >> 8U))));
                        vlTOPp->BRAM1_din[1U] = ((0xffU 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                               [3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [2U])))) 
                                                     >> 0x18U)) 
                                                 | (0xffffff00U 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [2U]))) 
                                                                >> 0x20U)) 
                                                       << 8U)));
                        vlTOPp->BRAM1_din[2U] = (0xffU 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                               [3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                                [2U]))) 
                                                             >> 0x20U)) 
                                                    >> 0x18U));
                    }
                }
            }
        }
    }
    vlTOPp->BRAM2_din[0U] = 0U;
    vlTOPp->BRAM2_din[1U] = 0U;
    vlTOPp->BRAM2_din[2U] = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
        if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
            if ((5U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__main_state))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__random_bit) {
                            vlTOPp->BRAM2_din[0U] = 
                                ((0xffffff00U & ((IData)(
                                                         (((QData)((IData)(
                                                                           vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                           [1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                            [0U])))) 
                                                 << 8U)) 
                                 | (0xffU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__cpu_I_tag)));
                            vlTOPp->BRAM2_din[1U] = 
                                ((0xffU & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                     [1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                      [0U])))) 
                                           >> 0x18U)) 
                                 | (0xffffff00U & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                              [1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                               [0U]))) 
                                                            >> 0x20U)) 
                                                   << 8U)));
                            vlTOPp->BRAM2_din[2U] = 
                                (0xffU & ((IData)((
                                                   (((QData)((IData)(
                                                                     vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                     [1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->Game_Console_TOP__DOT__u_icache__DOT__word_buffer
                                                                      [0U]))) 
                                                   >> 0x20U)) 
                                          >> 0x18U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_RGB = 0U;
    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_valid) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__is_new_pixel))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_RGB 
            = ((0x3f000U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_R) 
                            << 8U)) | ((0xfc0U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_G) 
                                                  << 2U)) 
                                       | (0x3fU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_B) 
                                                   >> 4U))));
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_valid = 0U;
    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe9_valid) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__is_new_pixel))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_valid = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state 
        = ((IData)(vlTOPp->resetn) ? (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_next)
            : 0U);
    if (vlTOPp->resetn) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state))) {
            if (vlTOPp->Game_Console_TOP__DOT__PPU_start) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_is_trans = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_a = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                    [8U]) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                        [8U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_is_trans 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                        [8U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_a 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                        [8U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid = 1U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state))) {
                    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_ready) 
                         & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                         [8U])) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                            [8U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_is_trans 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                            [8U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_a 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                            [8U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid = 1U;
                    } else {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid 
                            = (1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_ready) 
                                        & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                           [8U]))));
                    }
                }
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_RGB = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_a = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state))) {
            if (vlTOPp->Game_Console_TOP__DOT__PPU_start) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_is_trans = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_a = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                    [7U]) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                        [7U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_is_trans 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                        [7U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_a 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                        [7U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid = 1U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state))) {
                    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_ready) 
                         & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                         [7U])) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                            [7U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_is_trans 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                            [7U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_a 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                            [7U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid = 1U;
                    } else {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid 
                            = (1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_ready) 
                                        & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                           [7U]))));
                    }
                }
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_RGB = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_a = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state))) {
            if (vlTOPp->Game_Console_TOP__DOT__PPU_start) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_is_trans = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_a = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                    [6U]) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                        [6U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_is_trans 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                        [6U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_a 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                        [6U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid = 1U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state))) {
                    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_ready) 
                         & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                         [6U])) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                            [6U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_is_trans 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                            [6U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_a 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                            [6U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid = 1U;
                    } else {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid 
                            = (1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_ready) 
                                        & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                           [6U]))));
                    }
                }
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_RGB = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_a = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state))) {
            if (vlTOPp->Game_Console_TOP__DOT__PPU_start) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_is_trans = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_a = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                    [5U]) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                        [5U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_is_trans 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                        [5U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_a 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                        [5U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid = 1U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state))) {
                    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_ready) 
                         & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                         [5U])) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                            [5U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_is_trans 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                            [5U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_a 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                            [5U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid = 1U;
                    } else {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid 
                            = (1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_ready) 
                                        & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                           [5U]))));
                    }
                }
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_RGB = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_a = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state))) {
            if (vlTOPp->Game_Console_TOP__DOT__PPU_start) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_is_trans = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_a = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                    [4U]) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                        [4U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_is_trans 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                        [4U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_a 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                        [4U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid = 1U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state))) {
                    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_ready) 
                         & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                         [4U])) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                            [4U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_is_trans 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                            [4U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_a 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                            [4U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid = 1U;
                    } else {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid 
                            = (1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_ready) 
                                        & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                           [4U]))));
                    }
                }
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_RGB = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_a = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state))) {
            if (vlTOPp->Game_Console_TOP__DOT__PPU_start) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_is_trans = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_a = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                    [3U]) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                        [3U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_is_trans 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                        [3U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_a 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                        [3U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid = 1U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state))) {
                    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_ready) 
                         & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                         [3U])) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                            [3U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_is_trans 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                            [3U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_a 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                            [3U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid = 1U;
                    } else {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid 
                            = (1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_ready) 
                                        & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                           [3U]))));
                    }
                }
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_RGB = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_a = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state))) {
            if (vlTOPp->Game_Console_TOP__DOT__PPU_start) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_is_trans = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_a = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                    [2U]) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                        [2U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_is_trans 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                        [2U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_a 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                        [2U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid = 1U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state))) {
                    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_ready) 
                         & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                         [2U])) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                            [2U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_is_trans 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                            [2U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_a 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                            [2U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid = 1U;
                    } else {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid 
                            = (1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_ready) 
                                        & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                           [2U]))));
                    }
                }
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_RGB = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_a = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state))) {
            if (vlTOPp->Game_Console_TOP__DOT__PPU_start) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_is_trans = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_a = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                    [0U]) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                        [0U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_is_trans 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                        [0U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_a 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                        [0U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid = 1U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state))) {
                    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_ready) 
                         & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                         [0U])) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                            [0U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_is_trans 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                            [0U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_a 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                            [0U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid = 1U;
                    } else {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid 
                            = (1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_ready) 
                                        & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                           [0U]))));
                    }
                }
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_RGB = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_a = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state))) {
            if (vlTOPp->Game_Console_TOP__DOT__PPU_start) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_is_trans = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_a = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                    [1U]) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                        [1U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_is_trans 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                        [1U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_a 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                        [1U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid = 1U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state))) {
                    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_ready) 
                         & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                         [1U])) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                            [1U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_is_trans 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                            [1U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_a 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                            [1U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid = 1U;
                    } else {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid 
                            = (1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_ready) 
                                        & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                           [1U]))));
                    }
                }
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_RGB = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_a = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid = 0U;
    }
    if (vlTOPp->resetn) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state))) {
            if (vlTOPp->Game_Console_TOP__DOT__PPU_start) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_is_trans = 0U;
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_a = 0U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                    [9U]) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                        [9U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_is_trans 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                        [9U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_a 
                        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                        [9U];
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid = 1U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state))) {
                    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_ready) 
                         & vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                         [9U])) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_RGB
                            [9U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_is_trans 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_is_trans
                            [9U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_a 
                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a
                            [9U];
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid = 1U;
                    } else {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid 
                            = (1U & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_ready) 
                                        & (~ vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_valid
                                           [9U]))));
                    }
                }
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_RGB = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_is_trans = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_a = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid = 0U;
    }
    vlTOPp->DDR3_PPU_valid = vlTOPp->Game_Console_TOP__DOT__ppu_emem_valid;
    vlTOPp->DDR3_PPU_addr = vlTOPp->Game_Console_TOP__DOT__ppu_emem_addr;
    vlTOPp->DDR3_PPU_wstrb = vlTOPp->Game_Console_TOP__DOT__ppu_emem_wstrb;
    vlTOPp->DDR3_PPU_wdata = vlTOPp->Game_Console_TOP__DOT__ppu_emem_wdata;
    vlTOPp->DDR3_PPU_burst_en = vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_en;
    vlTOPp->DDR3_PPU_burst_len = vlTOPp->Game_Console_TOP__DOT__ppu_emem_burst_len;
    if (vlTOPp->resetn) {
        if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                       [0xaU] >> 0x18U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_pixel 
                = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                            [0xaU] >> 0x18U));
        } else {
            if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                           [0xaU] >> 0x18U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_pixel 
                    = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                [0xaU] >> 0x18U));
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache4_pixel = 0U;
    }
    if (vlTOPp->resetn) {
        if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                       [0xaU] >> 8U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_pixel 
                = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                            [0xaU] >> 8U));
        } else {
            if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                           [0xaU] >> 8U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_pixel 
                    = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                [0xaU] >> 8U));
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache2_pixel = 0U;
    }
    if (vlTOPp->resetn) {
        if (((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
              [0xaU]) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_pixel 
                = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                   [0xaU]);
        } else {
            if (((0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                  [0xaU]) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_pixel 
                    = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                       [0xaU]);
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache1_pixel = 0U;
    }
    if (vlTOPp->resetn) {
        if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                       [0xaU] >> 0x10U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r1))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_pixel 
                = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                            [0xaU] >> 0x10U));
        } else {
            if (((0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                           [0xaU] >> 0x10U)) == (IData)(vlTOPp->Game_Console_TOP__DOT__ppu_lut_addr_r2))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_pixel 
                    = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                [0xaU] >> 0x10U));
            }
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_rgb__DOT__cache3_pixel = 0U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master 
        = ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
           | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master 
        = ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)) 
           | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)));
    if (vlTOPp->resetn) {
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__joypad_state_latched 
            = vlTOPp->joypad_state_in;
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state 
            = vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state_next;
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__joypad_state_latched = 0U;
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__main_state = 0U;
    }
    vlTOPp->Final_pixel_valid = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_mixed_pixel_valid;
    vlTOPp->Final_pixel_RGB = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_mixed_pixel_RGB;
    vlTOPp->Font_Line_End = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_line_end;
    vlTOPp->Font_Frame_End = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_data 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_data;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__fontmap_skid_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_data 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_data;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__korea_bitmap_skid_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_data 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bitmap_skid_data;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_valid 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_valid;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bitmap_skid_data;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state 
        = vlTOPp->__Vdly__Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_index 
        = (0x1fU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                    - (((0x3ff0U & (((IData)(0x2493U) 
                                     * (0x3fffU & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                   - (IData)(0x2c00U)))) 
                                    >> 0xeU)) + (0x3ff8U 
                                                 & (((IData)(0x2493U) 
                                                     * 
                                                     (0x3fffU 
                                                      & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                         - (IData)(0x2c00U)))) 
                                                    >> 0xfU))) 
                       + (0x3ffcU & (((IData)(0x2493U) 
                                      * (0x3fffU & 
                                         ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                          - (IData)(0x2c00U)))) 
                                     >> 0x10U)))));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_index 
        = (0x1fU & (((IData)(0xc31U) * (0x3fffU & (
                                                   ((IData)(0x2493U) 
                                                    * 
                                                    (0x3fffU 
                                                     & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                        - (IData)(0x2c00U)))) 
                                                   >> 0x12U))) 
                    >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_index 
        = (0x1fU & ((((IData)(0x2493U) * (0x3fffU & 
                                          ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                           - (IData)(0x2c00U)))) 
                     >> 0x12U) - (((0x1f0U & (((IData)(0xc31U) 
                                               * (0x3fffU 
                                                  & (((IData)(0x2493U) 
                                                      * 
                                                      (0x3fffU 
                                                       & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                          - (IData)(0x2c00U)))) 
                                                     >> 0x12U))) 
                                              >> 0xcU)) 
                                   + (0x7cU & (((IData)(0xc31U) 
                                                * (0x3fffU 
                                                   & (((IData)(0x2493U) 
                                                       * 
                                                       (0x3fffU 
                                                        & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                           - (IData)(0x2c00U)))) 
                                                      >> 0x12U))) 
                                               >> 0xeU))) 
                                  + (((IData)(0xc31U) 
                                      * (0x3fffU & 
                                         (((IData)(0x2493U) 
                                           * (0x3fffU 
                                              & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16) 
                                                 - (IData)(0x2c00U)))) 
                                          >> 0x12U))) 
                                     >> 0x10U))));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__is_korea_wire 
        = ((0xac00U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16)) 
           & (0xd7a3U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__is_ascii_wire 
        = ((0x20U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16)) 
           & (0x7eU >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__is_custom_wire 
        = ((0xe000U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16)) 
           & (0xe0abU >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe3_UTF16)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bram_ad 
        = (0x3ffU & (((0x20U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16)) 
                      & (0x7eU >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16)))
                      ? ((IData)(0x130U) + ((0x3fcU 
                                             & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16) 
                                                 - (IData)(0x20U)) 
                                                << 2U)) 
                                            + (3U & 
                                               ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                >> 2U))))
                      : ((IData)(0x130U) + (3U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                  >> 2U)))));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bram_ad = 0U;
    if (((0xe000U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16)) 
         & (0xe053U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bram_ad 
            = (0x3ffU & ((IData)(0x2b0U) + ((0x3fcU 
                                             & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16) 
                                                << 2U)) 
                                            + (3U & 
                                               ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                >> 2U)))));
    } else {
        if (((0xe054U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16)) 
             & (0xe0abU >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16)))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bram_ad 
                = (0x3ffU & ((IData)(0x2a0U) + ((0x3fcU 
                                                 & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16) 
                                                     - (IData)(0x54U)) 
                                                    << 2U)) 
                                                + (3U 
                                                   & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                      >> 2U)))));
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_map_read_ena_reg 
        = ((IData)(vlTOPp->resetn) & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_map_read_ena));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set = 0U;
    if ((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
          | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
         | (9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set = 1U;
    } else {
        if (((((((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                 | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                | (0xbU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
               | (0xeU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
              | (0x10U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
             | ((0x13U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                | (0x14U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set = 2U;
        } else {
            if (((((((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                     | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                    | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                   | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                  | (0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                 | (0xfU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set = 3U;
            } else {
                if ((((((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                        | (0xcU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                       | (0xdU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                      | (0x11U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                     | (0x12U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set = 4U;
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_set = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_set 
            = (((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index)) 
                | (0xfU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index)))
                ? 1U : 2U);
    } else {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_set 
                = (((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index)) 
                    | (0xfU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index)))
                    ? 3U : 4U);
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 0U;
    if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index))) {
        if (((7U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
             | (0x14U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 1U;
        } else {
            if ((((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                  | (0xcU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                 | (0x12U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 2U;
            } else {
                if (((0xdU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                     | (0x11U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 3U;
                } else {
                    if (((((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                           | (0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                          | (0xbU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                         | (0x13U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 4U;
                    } else {
                        if ((((0xeU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                              | (0xfU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                             | (0x10U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 5U;
                        }
                    }
                }
            }
        }
    } else {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index))) {
            if (((7U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                 | (0x14U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 6U;
            } else {
                if ((((((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                        | (0xcU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                       | (0xdU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                      | (0x11U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                     | (0x12U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 7U;
                } else {
                    if ((((((((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)) 
                              | (0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                             | (0xbU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                            | (0xeU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                           | (0xfU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                          | (0x10U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index))) 
                         | (0x13U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index)))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set = 8U;
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena_reg 
        = ((IData)(vlTOPp->resetn) & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena));
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset_reg_reg 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset_reg;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset_reg_reg = 0U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_w_ena = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) 
                      & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line))) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_w_ena = 1U;
                } else {
                    if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_w_ena = 1U;
                    }
                }
            }
        } else {
            if ((0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_w_ena = 1U;
                    }
                }
            } else {
                if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__mixed_RGB_w_ena = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_shift = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((1U & (~ (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) 
                               & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line))) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                    if ((1U & (~ (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) 
                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line)) 
                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_valid) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_shift = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full)))) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_valid) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_shift = 1U;
                        }
                    }
                }
            } else {
                if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full)))) {
                            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__proc_final_pixel_valid) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_shift = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state_next 
                = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                    ? 0U : (0xfU & ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) 
                                      & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line))) 
                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                                     ? ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea)
                                         ? 0xaU : 1U)
                                     : ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) 
                                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line)) 
                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                                         ? 9U : 1U))));
        } else {
            if ((0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state_next 
                    = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                        ? 0U : ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full)
                                 ? 1U : 0xaU));
            } else {
                if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state_next 
                        = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                            ? 0U : ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full)
                                     ? ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea)
                                         ? 0xaU : 1U)
                                     : 9U));
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end = 0U;
    if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
        if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) 
                      & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line))) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end 
                        = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea)
                            ? 0U : 1U);
                } else {
                    if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end = 0U;
                    }
                }
            }
        } else {
            if ((0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end = 1U;
                    }
                }
            } else {
                if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__RGB_reg_all_full) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end 
                                = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_is_korea)
                                    ? 0U : 1U);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->resetn) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state_next;
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__all_fsm_reset) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state = 0U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_state = 0U;
    }
    if (vlTOPp->resetn) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state_next;
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__all_fsm_reset) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state = 0U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_state = 0U;
    }
    if (vlTOPp->resetn) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state_next;
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__all_fsm_reset) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state = 0U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_state = 0U;
    }
    if (vlTOPp->resetn) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state_next;
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__all_fsm_reset) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state = 0U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_state = 0U;
    }
    if (vlTOPp->resetn) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state_next;
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__all_fsm_reset) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state = 0U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_state = 0U;
    }
    if (vlTOPp->resetn) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state_next;
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__all_fsm_reset) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state = 0U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_state = 0U;
    }
    if (vlTOPp->resetn) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state_next;
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__all_fsm_reset) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state = 0U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_state = 0U;
    }
    if (vlTOPp->resetn) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state_next;
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__all_fsm_reset) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state = 0U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_state = 0U;
    }
    if (vlTOPp->resetn) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state_next;
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__all_fsm_reset) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state = 0U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_state = 0U;
    }
    if (vlTOPp->resetn) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state 
            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state_next;
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__all_fsm_reset) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state = 0U;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_state = 0U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)))) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x_next = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                if (((((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid)) 
                            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid)) 
                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid)) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x_next 
                            = (((0x137U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x)) 
                                & (0xf0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y)))
                                ? 0U : (((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x)) 
                                         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y)))
                                         ? 1U : ((0x140U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x))
                                                  ? 1U
                                                  : 
                                                 (0x1ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x))))));
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)))) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y_next = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                if (((((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid)) 
                            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid)) 
                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid)) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                    if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y_next 
                            = (((0x137U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x)) 
                                & (0xf0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y)))
                                ? 0U : (((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x)) 
                                         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y)))
                                         ? 1U : (0x1ffU 
                                                 & ((0x140U 
                                                     == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y))
                                                     : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y)))));
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_ready = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                if (((((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid)) 
                            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid)) 
                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid)) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                    if (((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid) 
                               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                        if ((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid) 
                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
                        }
                    } else {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                            if (((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid) 
                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                                if ((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid) 
                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
                                }
                            } else {
                                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                                    if (((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid) 
                                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
                                    }
                                } else {
                                    if ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid) 
                                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
            if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid) 
                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
            }
        } else {
            if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move = 1U;
                }
            }
        }
    }
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipeline_move) {
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_ready = 1U;
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_ready = 1U;
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe1_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_ready = 1U;
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe2_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_ready = 1U;
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe3_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_ready = 1U;
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe4_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_ready = 1U;
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe5_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_ready = 1U;
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe6_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_ready = 1U;
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe7_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_ready = 1U;
        }
        if (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid) 
             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_ready = 1U;
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_bram_ad = 0U;
    if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_bram_ad 
            = (0x3ffU & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index) 
                          << 3U) + (7U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                          >> 1U))));
    } else {
        if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_bram_ad 
                = (0x3ffU & ((IData)(0xe0U) + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index) 
                                                << 3U) 
                                               + (7U 
                                                  & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                     >> 1U)))));
        } else {
            if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_bram_ad 
                    = (0x3ffU & ((IData)(0x1c0U) + 
                                 (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index) 
                                   << 3U) + (7U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                   >> 1U)))));
            } else {
                if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_set))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_bram_ad 
                        = (0x3ffU & ((IData)(0x2a0U) 
                                     + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_chong_sung_index) 
                                         << 3U) + (7U 
                                                   & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                      >> 1U)))));
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_bram_ad = 0U;
    if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_set))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_bram_ad 
            = (0x3ffU & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index) 
                          << 3U) + (7U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                          >> 1U))));
    } else {
        if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_set))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_bram_ad 
                = (0x3ffU & ((IData)(0xa8U) + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index) 
                                                << 3U) 
                                               + (7U 
                                                  & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                     >> 1U)))));
        } else {
            if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_set))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_bram_ad 
                    = (0x3ffU & ((IData)(0x150U) + 
                                 (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index) 
                                   << 3U) + (7U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                   >> 1U)))));
            } else {
                if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_set))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_bram_ad 
                        = (0x3ffU & ((IData)(0x1f8U) 
                                     + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_jung_sung_index) 
                                         << 3U) + (7U 
                                                   & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                      >> 1U)))));
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_bram_ad = 0U;
    if (((((((((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set)) 
               | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) 
              | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) 
             | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) 
            | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) 
           | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) 
          | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) 
         | (8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_bram_ad 
            = (0x3ffU & ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))
                          ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index) 
                              << 3U) + (7U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                              >> 1U)))
                          : ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))
                              ? ((IData)(0x98U) + (
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index) 
                                                    << 3U) 
                                                   + 
                                                   (7U 
                                                    & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                       >> 1U))))
                              : ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))
                                  ? ((IData)(0x130U) 
                                     + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index) 
                                         << 3U) + (7U 
                                                   & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                      >> 1U))))
                                  : ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))
                                      ? ((IData)(0x1c8U) 
                                         + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index) 
                                             << 3U) 
                                            + (7U & 
                                               ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                >> 1U))))
                                      : ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))
                                          ? ((IData)(0x260U) 
                                             + (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index) 
                                                 << 3U) 
                                                + (7U 
                                                   & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                      >> 1U))))
                                          : ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))
                                              ? ((IData)(0x2f8U) 
                                                 + 
                                                 (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index) 
                                                   << 3U) 
                                                  + 
                                                  (7U 
                                                   & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                      >> 1U))))
                                              : ((7U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))
                                                  ? 
                                                 (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index) 
                                                   << 3U) 
                                                  + 
                                                  (7U 
                                                   & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                      >> 1U)))
                                                  : 
                                                 ((IData)(0x98U) 
                                                  + 
                                                  (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_cho_sung_index) 
                                                    << 3U) 
                                                   + 
                                                   (7U 
                                                    & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_counter_16) 
                                                       >> 1U))))))))))));
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                    if ((3U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                    if ((0x20U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset = 1U;
                                        } else {
                                            if ((8U 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset = 1U;
                                            } else {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset = 1U;
                                                        }
                                                    }
                                                } else {
                                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39_reset = 1U;
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state_next = 0U;
                } else {
                    if (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state_next = 1U;
                    } else {
                        if ((1U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end) 
                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid)) 
                                   | (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state_next 
                                = (((0x21U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)) 
                                    | (0x22U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)))
                                    ? 2U : 1U);
                        }
                    }
                }
            } else {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state_next 
                    = ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))
                        ? ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                            ? 0U : (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                                     ? 2U : 3U)) : 
                       ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))
                         ? ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                             ? 0U : (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                                      ? 3U : 4U)) : 
                        ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))
                          ? ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                              ? 0U : (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                                       ? 4U : ((0x20U 
                                                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                ? (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                    ? 1U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                     ? 1U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                        ? 1U
                                                        : 8U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                        ? 7U
                                                        : 5U))
                                                      : 1U)))
                                                : 1U)))
                          : ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))
                              ? ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                                  ? 0U : (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                                           ? 5U : 6U))
                              : ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))
                                  ? ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                                      ? 0U : (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                                               ? 6U
                                               : 2U))
                                  : ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                                      ? 0U : (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                                               ? 7U
                                               : 2U)))))));
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state_next 
                = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)
                    ? 0U : (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))
                             ? 8U : 1U));
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                    if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                        if ((1U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end) 
                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid)) 
                                   | (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next 
                                = (1U & (~ ((0x21U 
                                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)) 
                                            | (0x22U 
                                               == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)))));
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                        if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next = 0U;
                        }
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                            if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next = 0U;
                            }
                        }
                    } else {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next = 1U;
                                }
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                    if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next = 1U;
                                    }
                                }
                            } else {
                                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                        if ((1U & (~ 
                                                   ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next = 0U;
                                        }
                                    }
                                } else {
                                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                        if ((1U & (~ 
                                                   ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next = 0U;
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
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid_next = 1U;
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line_next = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                    if ((3U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                    if ((0x20U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line_next = 1U;
                                        } else {
                                            if ((8U 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line_next 
                                                    = 
                                                    (1U 
                                                     & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x) 
                                                         >> 2U) 
                                                        | (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x) 
                                                            >> 1U) 
                                                           | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))));
                                            } else {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line_next = 1U;
                                                        }
                                                    }
                                                } else {
                                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line_next = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line_next = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_next_line_next = 1U;
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16_next = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                    if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                        if ((1U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end) 
                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid)) 
                                   | (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                            if ((1U & (~ ((0x21U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)) 
                                          | (0x22U 
                                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)))))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16_next 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15;
                            }
                        }
                    }
                }
            } else {
                if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                    if ((3U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16_next 
                                        = (0xfU & (
                                                   (0x20U 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                     ? 
                                                    ((0xfU 
                                                      == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                      ? 0U
                                                      : 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15)))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                       ? 
                                                      ((0xfU 
                                                        == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                        ? 0U
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                        ? 
                                                       ((0xfU 
                                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                         ? 0U
                                                         : 
                                                        ((IData)(1U) 
                                                         + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                         ? 
                                                        ((0xfU 
                                                          == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                          ? 0U
                                                          : 
                                                         ((IData)(1U) 
                                                          + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15)))
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                          ? 0U
                                                          : 
                                                         ((IData)(1U) 
                                                          + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                         ? 
                                                        ((0xfU 
                                                          == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                          ? 0U
                                                          : 
                                                         ((IData)(1U) 
                                                          + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15)))
                                                         : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                        : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                       : 
                                                      ((0xfU 
                                                        == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                        ? 0U
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))))))
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                     ? 0U
                                                     : 
                                                    ((IData)(1U) 
                                                     + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15)))));
                                }
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                    if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16_next 
                                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_counter_16_next 
                        = ((0xfU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                            ? 0U : (0xfU & ((IData)(1U) 
                                            + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))));
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x_next = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                    if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                        if ((1U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end) 
                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid)) 
                                   | (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                            if ((1U & (~ ((0x21U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)) 
                                          | (0x22U 
                                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)))))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x_next 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39;
                            }
                        }
                    }
                }
            } else {
                if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                    if ((3U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x_next 
                                        = ((0x20U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                            ? ((0x10U 
                                                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                ? 0U
                                                : (
                                                   (8U 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                       ? 0U
                                                       : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39))
                                                      : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39))
                                                     : 0U)))
                                            : 0U);
                                }
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                    if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x_next 
                                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_39;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x_next = 0U;
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y_next = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                    if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                        if ((1U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end) 
                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid)) 
                                   | (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                            if ((1U & (~ ((0x21U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)) 
                                          | (0x22U 
                                             == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x)))))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y_next 
                                    = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14;
                            }
                        }
                    }
                }
            } else {
                if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                    if ((3U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y_next 
                                        = (0x3fU & 
                                           ((0x20U 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                             ? ((0x10U 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                 ? 
                                                ((0xfU 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                  : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                   ? 
                                                  ((0xfU 
                                                    == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                    : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                    ? 
                                                   ((0xfU 
                                                     == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                     : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                     ? 
                                                    ((0xfU 
                                                      == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                      : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                      : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14)))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))
                                                     ? 
                                                    ((0xfU 
                                                      == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                      : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                     : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                    : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                    : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14)))))
                                             : ((0xfU 
                                                 == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                                 : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))));
                                }
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                    if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y_next 
                                            = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y_next 
                        = (0x3fU & ((0xfU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_15))
                                     ? ((IData)(1U) 
                                        + (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14))
                                     : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_0_14)));
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__all_fsm_reset = 0U;
    if ((1U & (~ ((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)) 
                        | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
                       | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
                      | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
                     | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
                    | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
                   | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
                  | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)))))) {
        if ((8U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
            if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__all_fsm_reset = 1U;
                }
            }
        }
    }
    if (vlTOPp->resetn) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset_reg 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset;
        }
    } else {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset_reg = 0U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if ((2U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                    if ((3U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                                    if ((0x20U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset = 1U;
                                        } else {
                                            if ((8U 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset = 1U;
                                            } else {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x))) {
                                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset = 1U;
                                                        }
                                                    }
                                                } else {
                                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset = 1U;
                                                }
                                            }
                                        }
                                    } else {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__counter_font_x_reset = 1U;
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state)))) {
        if ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                    if (((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move = 0U;
                    } else {
                        if ((1U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end) 
                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid)) 
                                   | (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move = 1U;
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move 
                            = (1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))));
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move 
                                = (1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))));
                        }
                    } else {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move 
                                    = (1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))));
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                                if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move 
                                        = (1U & (~ 
                                                 ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))));
                                }
                            } else {
                                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
                                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move 
                                            = (1U & 
                                               (~ (
                                                   (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))));
                                    }
                                } else {
                                    if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move 
                                            = (1U & 
                                               (~ (
                                                   (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_state))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__font_frame_end)))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move 
                    = (1U & (~ ((~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__font_mix_end)) 
                                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_valid))));
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_map_read_ena 
        = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_valid) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena 
        = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_valid) 
           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipeline_move));
    vlTOPp->BRAM14_en_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_map_read_ena) {
        vlTOPp->BRAM14_en_a = 1U;
    }
    vlTOPp->BRAM14_wstrb_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_map_read_ena) {
        vlTOPp->BRAM14_wstrb_a = 0U;
    }
    vlTOPp->BRAM14_din_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_map_read_ena) {
        vlTOPp->BRAM14_din_a = 0U;
    }
    vlTOPp->BRAM14_addr_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_map_read_ena) {
        vlTOPp->BRAM14_addr_a = (0x3ffU & ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y) 
                                             << 4U) 
                                            + ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_y) 
                                               << 2U)) 
                                           + (0x1fU 
                                              & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe1_font_x) 
                                                 >> 1U))));
    }
    vlTOPp->BRAM13_en_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom)))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    vlTOPp->BRAM13_en_a = 1U;
                }
            }
        }
    }
    vlTOPp->BRAM13_wstrb_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom)))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    vlTOPp->BRAM13_wstrb_a = 0U;
                }
            }
        }
    }
    vlTOPp->BRAM13_din_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom)))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    vlTOPp->BRAM13_din_a = 0U;
                }
            }
        }
    }
    vlTOPp->BRAM6_din_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom) {
                if ((0xe053U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16))) {
                    vlTOPp->BRAM6_din_a = 0U;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    vlTOPp->BRAM6_din_a = 0U;
                }
            }
        }
    }
    vlTOPp->BRAM6_wstrb_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom) {
                if ((0xe053U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16))) {
                    vlTOPp->BRAM6_wstrb_a = 0U;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    vlTOPp->BRAM6_wstrb_a = 0U;
                }
            }
        }
    }
    vlTOPp->BRAM6_en_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom) {
                if ((0xe053U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16))) {
                    vlTOPp->BRAM6_en_a = 1U;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    vlTOPp->BRAM6_en_a = 1U;
                }
            }
        }
    }
    vlTOPp->BRAM4_din_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom)))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    if ((7U > (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) {
                        vlTOPp->BRAM4_din_a = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM4_wstrb_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom)))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    if ((7U > (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) {
                        vlTOPp->BRAM4_wstrb_a = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM4_en_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom)))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    if ((7U > (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) {
                        vlTOPp->BRAM4_en_a = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM13_addr_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom)))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    vlTOPp->BRAM13_addr_a = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__chong_sung_bram_ad;
                }
            }
        }
    }
    vlTOPp->BRAM5_din_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii) {
            vlTOPp->BRAM5_din_a = 0U;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom) {
                if ((0xe053U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16))) {
                    vlTOPp->BRAM5_din_a = 0U;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    if ((7U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) {
                        vlTOPp->BRAM5_din_a = 0U;
                    }
                } else {
                    vlTOPp->BRAM5_din_a = 0U;
                }
            }
        }
    }
    vlTOPp->BRAM5_wstrb_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii) {
            vlTOPp->BRAM5_wstrb_a = 0U;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom) {
                if ((0xe053U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16))) {
                    vlTOPp->BRAM5_wstrb_a = 0U;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    if ((7U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) {
                        vlTOPp->BRAM5_wstrb_a = 0U;
                    }
                } else {
                    vlTOPp->BRAM5_wstrb_a = 0U;
                }
            }
        }
    }
    vlTOPp->BRAM5_en_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii) {
            vlTOPp->BRAM5_en_a = 1U;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom) {
                if ((0xe053U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16))) {
                    vlTOPp->BRAM5_en_a = 1U;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    if ((7U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) {
                        vlTOPp->BRAM5_en_a = 1U;
                    }
                } else {
                    vlTOPp->BRAM5_en_a = 1U;
                }
            }
        }
    }
    vlTOPp->BRAM4_addr_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom)))) {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    if ((7U > (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) {
                        vlTOPp->BRAM4_addr_a = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_bram_ad;
                    }
                }
            }
        }
    }
    vlTOPp->BRAM6_addr_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if ((1U & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii)))) {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom) {
                if ((0xe053U < (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16))) {
                    vlTOPp->BRAM6_addr_a = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bram_ad;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    vlTOPp->BRAM6_addr_a = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__jung_sung_bram_ad;
                }
            }
        }
    }
    vlTOPp->BRAM5_addr_a = 0U;
    if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__bram_font_read_ena) {
        if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_ascii) {
            vlTOPp->BRAM5_addr_a = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bram_ad;
        } else {
            if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_custom) {
                if ((0xe053U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_UTF16))) {
                    vlTOPp->BRAM5_addr_a = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__custom_tile_bram_ad;
                }
            } else {
                if (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe4_is_korea) {
                    if ((7U <= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_set))) {
                        vlTOPp->BRAM5_addr_a = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__cho_sung_bram_ad;
                    }
                } else {
                    vlTOPp->BRAM5_addr_a = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__ascii_bram_ad;
                }
            }
        }
    }
}

VL_INLINE_OPT void VGame_Console_TOP::_sequent__TOP__6(VGame_Console_TOP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGame_Console_TOP::_sequent__TOP__6\n"); );
    VGame_Console_TOP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 3U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 4U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM7_read_state_next = 2U;
    }
    vlTOPp->BRAM7_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_en_b = 1U;
    }
    vlTOPp->BRAM7_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
         & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
         & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x180U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_addr_b = (0x7fU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM7_addr_b = (0x1ffU & ((IData)(0x80U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_front))));
    }
    vlTOPp->BRAM10_en_a = ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_en_a) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_en_a)) 
                            | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_en_a)) 
                           | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_en_a));
    vlTOPp->BRAM10_we_a = ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_we_a) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_we_a)) 
                            | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_we_a)) 
                           | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_we_a));
    vlTOPp->BRAM10_addr_a = ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_addr_a) 
                               | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_addr_a)) 
                              | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_addr_a)) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_addr_a));
    vlTOPp->BRAM10_din_a = (((vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.BRAM10_din_a 
                              | vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.BRAM10_din_a) 
                             | vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.BRAM10_din_a) 
                            | vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.BRAM10_din_a);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 2U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 3U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM8_read_state_next = 4U;
    }
    vlTOPp->BRAM8_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_en_b = 1U;
    }
    vlTOPp->BRAM8_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
         & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_addr_b = (0x7fU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
         & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x80U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
         & (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_front))));
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
         & (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__Clk_Counter)))) {
        vlTOPp->BRAM8_addr_b = (0x1ffU & ((IData)(0x180U) 
                                          + (0x7fU 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_front))));
    }
    vlTOPp->BRAM11_en_a = ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_en_a) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_en_a)) 
                            | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_en_a)) 
                           | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_en_a));
    vlTOPp->BRAM11_we_a = ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_we_a) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_we_a)) 
                            | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_we_a)) 
                           | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_we_a));
    vlTOPp->BRAM11_addr_a = ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_addr_a) 
                               | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_addr_a)) 
                              | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_addr_a)) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_addr_a));
    vlTOPp->BRAM11_din_a = (((vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.BRAM11_din_a 
                              | vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.BRAM11_din_a) 
                             | vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.BRAM11_din_a) 
                            | vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.BRAM11_din_a);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__All_Decompresser_is_IDLE 
        = ((((((((((((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__r_state)) 
                     & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__w_state))) 
                    & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.__PVT__decompress_state))) 
                   & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__r_state)) 
                       & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__w_state))) 
                      & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.__PVT__decompress_state)))) 
                  & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__r_state)) 
                      & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__w_state))) 
                     & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.__PVT__decompress_state)))) 
                 & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__r_state)) 
                     & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__w_state))) 
                    & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.__PVT__decompress_state)))) 
                & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__r_state)) 
                    & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__w_state))) 
                   & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.__PVT__decompress_state)))) 
               & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__r_state)) 
                   & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__w_state))) 
                  & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.__PVT__decompress_state)))) 
              & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__r_state)) 
                  & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__w_state))) 
                 & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.__PVT__decompress_state)))) 
             & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__r_state)) 
                 & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__w_state))) 
                & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.__PVT__decompress_state)))) 
            & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__r_state)) 
                & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__w_state))) 
               & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.__PVT__decompress_state)))) 
           & (((0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__r_state)) 
               & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__w_state))) 
              & (0U == (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.__PVT__decompress_state))));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_dec_want = 1U;
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__BRAM9_read_state_next = 2U;
    }
    vlTOPp->BRAM9_en_b = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlTOPp->BRAM9_en_b = 1U;
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlTOPp->BRAM9_en_b = 1U;
    }
    vlTOPp->BRAM9_addr_b = 0U;
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_r_master))) {
        vlTOPp->BRAM9_addr_b = (0xffU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_front));
    }
    if ((((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_dequeue) 
          & (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_r_master))) {
        vlTOPp->BRAM9_addr_b = (0x1ffU & ((IData)(0x100U) 
                                          + (0xffU 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_front))));
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__urgent_req 
        = ((((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count)) 
             & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_ena)) 
            << 9U) | ((((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count)) 
                        & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_ena)) 
                       << 8U) | ((((0x20U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count)) 
                                   & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_ena)) 
                                  << 7U) | ((((0x20U 
                                               >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count)) 
                                              & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_ena)) 
                                             << 6U) 
                                            | ((((0x20U 
                                                  >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count)) 
                                                 & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_ena)) 
                                                << 5U) 
                                               | ((((0x20U 
                                                     >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count)) 
                                                    & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_ena)) 
                                                   << 4U) 
                                                  | ((((0x20U 
                                                        >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count)) 
                                                       & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_ena)) 
                                                      << 3U) 
                                                     | ((((0x20U 
                                                           >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count)) 
                                                          & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_ena)) 
                                                         << 2U) 
                                                        | ((((0x40U 
                                                              >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count)) 
                                                             & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_ena)) 
                                                            << 1U) 
                                                           | ((0x40U 
                                                               >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count)) 
                                                              & (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_ena)))))))))));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode 
        = (0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__urgent_req));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3feU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.Compressed_FIFO_ena) 
              & (0xf0U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back1_fifo_count))));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3fdU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.Compressed_FIFO_ena) 
               & (0xf0U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__back2_fifo_count))) 
              << 1U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3fbU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch1.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char1_fifo_count))) 
              << 2U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3f7U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch2.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char2_fifo_count))) 
              << 3U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3efU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch3.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char3_fifo_count))) 
              << 4U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3dfU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_ch4.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__char4_fifo_count))) 
              << 5U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x3bfU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_script.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__script_fifo_count))) 
              << 6U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x37fU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_status.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__status_fifo_count))) 
              << 7U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x2ffU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni1.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni1_fifo_count))) 
              << 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req 
        = ((0x1ffU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)) 
           | (((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_uni2.Compressed_FIFO_ena) 
               & (0x70U >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__uni2_fifo_count))) 
              << 9U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req 
        = ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__urgent_req))
            ? (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__basic_req)
            : (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__urgent_req));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3feU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (1U & ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                     ? ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                        & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent)))
                     : ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                        & (~ (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic))))));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3fdU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (2U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 1U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 1U))) : (
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 1U) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 1U)))) 
                    << 1U)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3fbU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (4U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 2U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 2U))) : (
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 2U) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 2U)))) 
                    << 2U)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3f7U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (8U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                      ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 3U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                       >> 3U))) : (
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                                                    >> 3U) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                                       >> 3U)))) 
                    << 3U)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3efU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x10U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                             >> 4U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 4U))) : 
                        (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 4U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 4U)))) << 4U)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3dfU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x20U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                             >> 5U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 5U))) : 
                        (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 5U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 5U)))) << 5U)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x3bfU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x40U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                             >> 6U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 6U))) : 
                        (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 6U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 6U)))) << 6U)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x37fU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x80U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                         ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                             >> 7U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                          >> 7U))) : 
                        (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                          >> 7U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                       >> 7U)))) << 7U)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x2ffU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x100U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                          ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                              >> 8U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                           >> 8U)))
                          : (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                              >> 8U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                           >> 8U)))) 
                        << 8U)));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req 
        = ((0x1ffU & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)) 
           | (0x200U & (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__is_urgent_mode)
                          ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                              >> 9U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_urgent) 
                                           >> 9U)))
                          : (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req) 
                              >> 9U) & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__last_read_basic) 
                                           >> 9U)))) 
                        << 9U)));
    if ((1U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
            = (1U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
    } else {
        if ((2U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                = (2U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
        } else {
            if ((4U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                    = (4U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
            } else {
                if ((8U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                        = (8U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                } else {
                    if ((0x10U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                            = (0x10U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                    } else {
                        if ((0x20U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                = (0x20U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                        } else {
                            if ((0x40U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                    = (0x40U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                            } else {
                                if ((0x80U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                        = (0x80U | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                                } else {
                                    if ((0x100U & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                            = (0x100U 
                                               | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                                    } else {
                                        if ((0x200U 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req))) {
                                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer 
                                                = (0x200U 
                                                   | (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__next_should_read_layer));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__round_end 
        = ((0U != (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__valid_req)) 
           & (0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_compressed_fifo__DOT__masked_req)));
    vlTOPp->BRAM12_en_a = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_en_a) 
                           | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_en_a));
    vlTOPp->BRAM12_we_a = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_we_a) 
                           | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_we_a));
    vlTOPp->BRAM12_addr_a = ((IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_addr_a) 
                             | (IData)(vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_addr_a));
    vlTOPp->BRAM12_din_a = (vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg1.BRAM12_din_a 
                            | vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_pixel_fifo__DOT__u_decomp_bg2.BRAM12_din_a);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[1U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Pixel_is_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[1U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg1.Pixel_RGB;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_is_trans[2U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Pixel_is_trans;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_RGB[2U] 
        = vlSymsp->TOP__Game_Console_TOP__DOT__u_ppu__DOT__u_bg2.Pixel_RGB;
    if (vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs__v0) {
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs[vlTOPp->__Vdlyvdim0__Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs__v0] 
            = vlTOPp->__Vdlyvval__Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs__v0;
    }
    if (vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs__v1) {
        vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs[0U] = 0U;
    }
    if (vlTOPp->__Vdlyvset__Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs__v2) {
        __Vilp = 1U;
        while ((__Vilp <= 0x2aU)) {
            vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[1U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0xcU] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[2U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0xeU] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[3U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x10U] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[4U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x12U] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[5U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x14U] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[6U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x16U] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[7U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x18U] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[8U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x1aU] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[9U] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x1cU] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a[0xaU] 
        = (0xffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x1eU] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__line_rgb[0U] = (0x1ffU 
                                                   & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0x1fU]);
    vlTOPp->Game_Console_TOP__DOT__line_rgb[1U] = (0x1ffU 
                                                   & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                      [0x1fU] 
                                                      >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_rgb[2U] = (0x1ffU 
                                                   & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0x20U]);
    vlTOPp->Game_Console_TOP__DOT__line_rgb[3U] = (0x1ffU 
                                                   & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                      [0x20U] 
                                                      >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_rgb[4U] = (0x1ffU 
                                                   & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0x21U]);
    vlTOPp->Game_Console_TOP__DOT__line_rgb[5U] = (0x1ffU 
                                                   & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                      [0x21U] 
                                                      >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_rgb[6U] = (0x1ffU 
                                                   & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0x22U]);
    vlTOPp->Game_Console_TOP__DOT__line_rgb[7U] = (0x1ffU 
                                                   & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                      [0x22U] 
                                                      >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_rgb[8U] = (0x1ffU 
                                                   & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                   [0x23U]);
    vlTOPp->Game_Console_TOP__DOT__line_rgb[9U] = (0x1ffU 
                                                   & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                      [0x23U] 
                                                      >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_rgb[0xaU] = 
        (0x1ffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
         [0x24U]);
    vlTOPp->Game_Console_TOP__DOT__line_rgb[0xbU] = 
        (0x1ffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                   [0x24U] >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_rgb[0xcU] = 
        (0x1ffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
         [0x25U]);
    vlTOPp->Game_Console_TOP__DOT__line_rgb[0xdU] = 
        (0x1ffU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                   [0x25U] >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_rgb[0xeU] = 
        (0x1ffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
         [0x26U]);
    vlTOPp->Game_Console_TOP__DOT__line_alpha[0U] = 
        (7U & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
         [0x27U]);
    vlTOPp->Game_Console_TOP__DOT__line_alpha[1U] = 
        (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
               [0x27U] >> 4U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[2U] = 
        (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
               [0x27U] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[3U] = 
        (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
               [0x27U] >> 0xcU));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[4U] = 
        (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
               [0x27U] >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[5U] = 
        (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
               [0x27U] >> 0x14U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[6U] = 
        (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
               [0x27U] >> 0x18U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[7U] = 
        (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
               [0x27U] >> 0x1cU));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[8U] = 
        (7U & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
         [0x28U]);
    vlTOPp->Game_Console_TOP__DOT__line_alpha[9U] = 
        (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
               [0x28U] >> 4U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[0xaU] 
        = (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                 [0x28U] >> 8U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[0xbU] 
        = (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                 [0x28U] >> 0xcU));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[0xcU] 
        = (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                 [0x28U] >> 0x10U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[0xdU] 
        = (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                 [0x28U] >> 0x14U));
    vlTOPp->Game_Console_TOP__DOT__line_alpha[0xeU] 
        = (7U & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                 [0x28U] >> 0x18U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[0U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x1fU] >> 9U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[1U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x1fU] >> 0x19U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[2U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x20U] >> 9U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[3U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x20U] >> 0x19U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[4U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x21U] >> 9U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[5U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x21U] >> 0x19U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[6U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x22U] >> 9U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[7U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x22U] >> 0x19U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[8U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x23U] >> 9U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[9U] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x23U] >> 0x19U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[0xaU] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x24U] >> 9U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[0xbU] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x24U] >> 0x19U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[0xcU] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x25U] >> 9U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[0xdU] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x25U] >> 0x19U));
    vlTOPp->Game_Console_TOP__DOT__line_visible[0xeU] 
        = (0x3fU & (vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                    [0x26U] >> 9U));
    vlTOPp->Game_Console_TOP__DOT__PPU_start = (1U 
                                                & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
                                                [0x29U]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[1U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0xcU]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[2U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0xeU]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[3U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0x10U]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[4U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0x12U]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[5U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0x14U]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[6U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0x16U]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[7U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0x18U]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[8U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0x1aU]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[9U] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0x1cU]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z[0xaU] 
        = (0xffU & vlTOPp->Game_Console_TOP__DOT__u_addr_decoder__DOT__ppu_regs
           [0x1eU]);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix 
            = (1U & ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))
                      ? (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                             [0U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                            & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                  & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))))))
                      : ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))
                          ? (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                 [1U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                      & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))))))
                          : ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))
                              ? (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                     [2U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                    & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                          & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))))))
                              : ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))
                                  ? (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                         [3U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                        & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                              & (1U 
                                                 == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))))))
                                  : ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))
                                      ? (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                             [4U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                            & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                                  & (1U 
                                                     == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))))))
                                      : ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))
                                          ? (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                                 [5U] 
                                                 >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                                    & (1U 
                                                       == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))))))
                                          : ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))
                                              ? (~ 
                                                 ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                                   [6U] 
                                                   >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                                      & (1U 
                                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))))))
                                              : (~ 
                                                 ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                                   [7U] 
                                                   >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                                      & (1U 
                                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state))))))))))))));
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix 
                = (1U & (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                             [8U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                            & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                  & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))));
        } else {
            if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix 
                    = (1U & (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                 [9U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                      & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))));
            } else {
                if ((0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix 
                        = (1U & (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                     [0xaU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                    & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                          & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))));
                } else {
                    if ((0xbU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix 
                            = (1U & (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                         [0xbU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                        & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                              & (1U 
                                                 == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))));
                    } else {
                        if ((0xcU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix 
                                = (1U & (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                             [0xcU] 
                                             >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                            & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                                  & (1U 
                                                     == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))));
                        } else {
                            if ((0xdU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix 
                                    = (1U & (~ ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                                 [0xdU] 
                                                 >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                                    & (1U 
                                                       == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))));
                            } else {
                                if ((0xeU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__do_not_need_mix 
                                        = (1U & (~ 
                                                 ((vlTOPp->Game_Console_TOP__DOT__line_visible
                                                   [0xeU] 
                                                   >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                                      & (1U 
                                                         == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y)))) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
            if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                  [0U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                 & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                    = vlTOPp->Game_Console_TOP__DOT__line_alpha
                    [0U];
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                      [1U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                     & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                           & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                        = vlTOPp->Game_Console_TOP__DOT__line_alpha
                        [1U];
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                          [2U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                               & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                            = vlTOPp->Game_Console_TOP__DOT__line_alpha
                            [2U];
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                        if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                              [3U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                             & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                   & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                [3U];
                        }
                    } else {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                            if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                  [4U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                 & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                    = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [4U];
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                      [5U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                     & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                           & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                        = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                        [5U];
                                }
                            } else {
                                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                          [6U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                               & (1U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                            = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                            [6U];
                                    }
                                } else {
                                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                          [7U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                               & (1U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                            = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                            [7U];
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
            if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                  [8U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                 & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                    = vlTOPp->Game_Console_TOP__DOT__line_alpha
                    [8U];
            }
        } else {
            if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                      [9U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                     & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                           & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                        = vlTOPp->Game_Console_TOP__DOT__line_alpha
                        [9U];
                }
            } else {
                if ((0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                          [0xaU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                               & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                            = vlTOPp->Game_Console_TOP__DOT__line_alpha
                            [0xaU];
                    }
                } else {
                    if ((0xbU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                        if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                              [0xbU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                             & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                   & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                [0xbU];
                        }
                    } else {
                        if ((0xcU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                            if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                  [0xcU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                 & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                    = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                    [0xcU];
                            }
                        } else {
                            if ((0xdU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                      [0xdU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                     & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                           & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                        = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                        [0xdU];
                                }
                            } else {
                                if ((0xeU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                          [0xeU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                               & (1U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_alpha_0_4 
                                            = vlTOPp->Game_Console_TOP__DOT__line_alpha
                                            [0xeU];
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB = 0U;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y)))) {
        if ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
            if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                  [0U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                 & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                    = ((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [0U] << 9U)) | 
                       ((0x7000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [0U] << 6U)) | 
                        ((0xe00U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [0U] << 6U)) | 
                         ((0x1c0U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                     [0U] << 3U)) | 
                          ((0x38U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                     [0U] << 3U)) | 
                           (7U & vlTOPp->Game_Console_TOP__DOT__line_rgb
                            [0U]))))));
            }
        } else {
            if ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                      [1U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                     & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                           & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                        = ((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                        [1U] << 9U)) 
                           | ((0x7000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [1U] << 6U)) 
                              | ((0xe00U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                            [1U] << 6U)) 
                                 | ((0x1c0U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [1U] 
                                               << 3U)) 
                                    | ((0x38U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                 [1U] 
                                                 << 3U)) 
                                       | (7U & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [1U]))))));
                }
            } else {
                if ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                          [2U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                               & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                            = ((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                            [2U] << 9U)) 
                               | ((0x7000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                              [2U] 
                                              << 6U)) 
                                  | ((0xe00U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                [2U] 
                                                << 6U)) 
                                     | ((0x1c0U & (
                                                   vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                   [2U] 
                                                   << 3U)) 
                                        | ((0x38U & 
                                            (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                             [2U] << 3U)) 
                                           | (7U & 
                                              vlTOPp->Game_Console_TOP__DOT__line_rgb
                                              [2U]))))));
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                        if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                              [3U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                             & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                   & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                = ((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                [3U] 
                                                << 9U)) 
                                   | ((0x7000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [3U] 
                                                  << 6U)) 
                                      | ((0xe00U & 
                                          (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                           [3U] << 6U)) 
                                         | ((0x1c0U 
                                             & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                [3U] 
                                                << 3U)) 
                                            | ((0x38U 
                                                & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                   [3U] 
                                                   << 3U)) 
                                               | (7U 
                                                  & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [3U]))))));
                        }
                    } else {
                        if ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                            if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                  [4U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                 & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                    = ((0x38000U & 
                                        (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                         [4U] << 9U)) 
                                       | ((0x7000U 
                                           & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                              [4U] 
                                              << 6U)) 
                                          | ((0xe00U 
                                              & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                 [4U] 
                                                 << 6U)) 
                                             | ((0x1c0U 
                                                 & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                    [4U] 
                                                    << 3U)) 
                                                | ((0x38U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                       [4U] 
                                                       << 3U)) 
                                                   | (7U 
                                                      & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                      [4U]))))));
                            }
                        } else {
                            if ((5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                      [5U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                     & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                           & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                        = ((0x38000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [5U] 
                                               << 9U)) 
                                           | ((0x7000U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [5U] 
                                                  << 6U)) 
                                              | ((0xe00U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [5U] 
                                                     << 6U)) 
                                                 | ((0x1c0U 
                                                     & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                        [5U] 
                                                        << 3U)) 
                                                    | ((0x38U 
                                                        & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                           [5U] 
                                                           << 3U)) 
                                                       | (7U 
                                                          & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                          [5U]))))));
                                }
                            } else {
                                if ((6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                          [6U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                               & (1U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                            = ((0x38000U 
                                                & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                   [6U] 
                                                   << 9U)) 
                                               | ((0x7000U 
                                                   & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                      [6U] 
                                                      << 6U)) 
                                                  | ((0xe00U 
                                                      & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                         [6U] 
                                                         << 6U)) 
                                                     | ((0x1c0U 
                                                         & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                            [6U] 
                                                            << 3U)) 
                                                        | ((0x38U 
                                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                               [6U] 
                                                               << 3U)) 
                                                           | (7U 
                                                              & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                              [6U]))))));
                                    }
                                } else {
                                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                          [7U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                               & (1U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                            = ((0x38000U 
                                                & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                   [7U] 
                                                   << 9U)) 
                                               | ((0x7000U 
                                                   & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                      [7U] 
                                                      << 6U)) 
                                                  | ((0xe00U 
                                                      & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                         [7U] 
                                                         << 6U)) 
                                                     | ((0x1c0U 
                                                         & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                            [7U] 
                                                            << 3U)) 
                                                        | ((0x38U 
                                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                               [7U] 
                                                               << 3U)) 
                                                           | (7U 
                                                              & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                              [7U]))))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
            if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                  [8U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                 & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                    = ((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [8U] << 9U)) | 
                       ((0x7000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [8U] << 6U)) | 
                        ((0xe00U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                    [8U] << 6U)) | 
                         ((0x1c0U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                     [8U] << 3U)) | 
                          ((0x38U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                     [8U] << 3U)) | 
                           (7U & vlTOPp->Game_Console_TOP__DOT__line_rgb
                            [8U]))))));
            }
        } else {
            if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                      [9U] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                     & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                           & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                        = ((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                        [9U] << 9U)) 
                           | ((0x7000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [9U] << 6U)) 
                              | ((0xe00U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                            [9U] << 6U)) 
                                 | ((0x1c0U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [9U] 
                                               << 3U)) 
                                    | ((0x38U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                 [9U] 
                                                 << 3U)) 
                                       | (7U & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                          [9U]))))));
                }
            } else {
                if ((0xaU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                          [0xaU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                               & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                            = ((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                            [0xaU] 
                                            << 9U)) 
                               | ((0x7000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                              [0xaU] 
                                              << 6U)) 
                                  | ((0xe00U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                [0xaU] 
                                                << 6U)) 
                                     | ((0x1c0U & (
                                                   vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                   [0xaU] 
                                                   << 3U)) 
                                        | ((0x38U & 
                                            (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                             [0xaU] 
                                             << 3U)) 
                                           | (7U & 
                                              vlTOPp->Game_Console_TOP__DOT__line_rgb
                                              [0xaU]))))));
                    }
                } else {
                    if ((0xbU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                        if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                              [0xbU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                             & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                   & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                = ((0x38000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                [0xbU] 
                                                << 9U)) 
                                   | ((0x7000U & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xbU] 
                                                  << 6U)) 
                                      | ((0xe00U & 
                                          (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                           [0xbU] << 6U)) 
                                         | ((0x1c0U 
                                             & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                [0xbU] 
                                                << 3U)) 
                                            | ((0x38U 
                                                & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                   [0xbU] 
                                                   << 3U)) 
                                               | (7U 
                                                  & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xbU]))))));
                        }
                    } else {
                        if ((0xcU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                            if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                  [0xcU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                 & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                       & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                    = ((0x38000U & 
                                        (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                         [0xcU] << 9U)) 
                                       | ((0x7000U 
                                           & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                              [0xcU] 
                                              << 6U)) 
                                          | ((0xe00U 
                                              & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                 [0xcU] 
                                                 << 6U)) 
                                             | ((0x1c0U 
                                                 & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                    [0xcU] 
                                                    << 3U)) 
                                                | ((0x38U 
                                                    & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                       [0xcU] 
                                                       << 3U)) 
                                                   | (7U 
                                                      & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                      [0xcU]))))));
                            }
                        } else {
                            if ((0xdU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                      [0xdU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                     & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                           & (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                        = ((0x38000U 
                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                               [0xdU] 
                                               << 9U)) 
                                           | ((0x7000U 
                                               & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                  [0xdU] 
                                                  << 6U)) 
                                              | ((0xe00U 
                                                  & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                     [0xdU] 
                                                     << 6U)) 
                                                 | ((0x1c0U 
                                                     & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                        [0xdU] 
                                                        << 3U)) 
                                                    | ((0x38U 
                                                        & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                           [0xdU] 
                                                           << 3U)) 
                                                       | (7U 
                                                          & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                          [0xdU]))))));
                                }
                            } else {
                                if ((0xeU == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_y))) {
                                    if (((vlTOPp->Game_Console_TOP__DOT__line_visible
                                          [0xeU] >= (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_font_x)) 
                                         & (~ ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pipe6_next_line) 
                                               & (1U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__pixel_state)))))) {
                                        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_font__DOT__organized_RGB 
                                            = ((0x38000U 
                                                & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                   [0xeU] 
                                                   << 9U)) 
                                               | ((0x7000U 
                                                   & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                      [0xeU] 
                                                      << 6U)) 
                                                  | ((0xe00U 
                                                      & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                         [0xeU] 
                                                         << 6U)) 
                                                     | ((0x1c0U 
                                                         & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                            [0xeU] 
                                                            << 3U)) 
                                                        | ((0x38U 
                                                            & (vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                               [0xeU] 
                                                               << 3U)) 
                                                           | (7U 
                                                              & vlTOPp->Game_Console_TOP__DOT__line_rgb
                                                              [0xeU]))))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_next 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state;
    if (((((((((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)) 
               | (1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
              | (2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
             | (3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
            | (4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
           | (5U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
          | (6U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) 
         | (7U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state)))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_next 
            = ((0U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))
                ? ((IData)(vlTOPp->Game_Console_TOP__DOT__PPU_start)
                    ? 1U : 0U) : ((1U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))
                                   ? (((((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z1_valid) 
                                               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z2_valid)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid)) 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid)) 
                                            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                                          & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                                         & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                        & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))
                                       ? (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid) 
                                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Pipe8_valid))
                                           ? (((0x137U 
                                                == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_x)) 
                                               & (0xf0U 
                                                  == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_counter_y)))
                                               ? 2U
                                               : 1U)
                                           : 1U) : 1U)
                                   : ((2U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))
                                       ? (((((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z3_valid) 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid)) 
                                                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                                               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                                              & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                                             & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                            & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                           & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))
                                           ? 3U : 2U)
                                       : ((3U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))
                                           ? ((((((
                                                   ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z4_valid) 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid)) 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                                                  & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                                                 & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                                & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                               & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))
                                               ? 4U
                                               : 3U)
                                           : ((4U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))
                                               ? ((
                                                   (((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z5_valid) 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid)) 
                                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                                   & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))
                                                   ? 5U
                                                   : 4U)
                                               : ((5U 
                                                   == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))
                                                   ? 
                                                  ((((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z6_valid) 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid)) 
                                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))
                                                    ? 6U
                                                    : 5U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))
                                                    ? 
                                                   (((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z7_valid) 
                                                       & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid)) 
                                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))
                                                     ? 7U
                                                     : 6U)
                                                    : 
                                                   ((((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z8_valid) 
                                                      & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid)) 
                                                     & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))
                                                     ? 8U
                                                     : 7U))))))));
    } else {
        if ((8U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_next 
                = (((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z9_valid) 
                    & (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid))
                    ? 9U : 8U);
        } else {
            if ((9U == (IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state))) {
                vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__main_state_next 
                    = ((IData)(vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__Z10_valid)
                        ? 0U : 9U);
            }
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[0U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[1U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[2U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[3U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[4U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[5U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[6U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[7U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[8U] = 0U;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[9U] = 0U;
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [1U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [1U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 1U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [1U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [1U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [2U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [2U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 2U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [2U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [2U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [3U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [3U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 3U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [3U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [3U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [4U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [4U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 4U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [4U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [4U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [5U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [5U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 5U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [5U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [5U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [6U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [6U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 6U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [6U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [6U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [7U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [7U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 7U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [7U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [7U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [8U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [8U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 8U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [8U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [8U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [9U]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                   [9U]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 9U;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [9U] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [9U] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    if (((1U <= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
          [0xaU]) & (0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                     [0xaU]))) {
        vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2 = 0xaU;
        if ((9U >= (0xfU & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                            [0xaU] - (IData)(1U))))) {
            vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map[(0xfU 
                                                                                & (vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_z
                                                                                [0xaU] 
                                                                                - (IData)(1U)))] 
                = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound2;
        }
    }
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [0U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [0U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[0U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [1U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [1U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[1U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [2U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [2U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[2U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [3U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [3U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[3U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [4U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [4U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[4U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [5U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [5U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[5U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [6U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [6U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[6U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [7U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [7U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[7U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [8U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [8U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[8U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6 
        = ((0xaU >= vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
            [9U]) ? vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__layer_a
           [vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_index_map
           [9U]] : 0U);
    vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT__z_input_a[9U] 
        = vlTOPp->Game_Console_TOP__DOT__u_ppu__DOT__u_proc__DOT____Vlvbound6;
}
