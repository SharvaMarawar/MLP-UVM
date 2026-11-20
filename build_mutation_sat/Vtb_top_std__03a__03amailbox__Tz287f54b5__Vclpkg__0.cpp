// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_std__03a__03amailbox__Tz287f54b5::init(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ bound) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_std__03a__03amailbox__Tz287f54b5::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_bound = bound;
}

void Vtb_top_std__03a__03amailbox__Tz287f54b5::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_std__03a__03amailbox__Tz287f54b5::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_bound = 0;
}
