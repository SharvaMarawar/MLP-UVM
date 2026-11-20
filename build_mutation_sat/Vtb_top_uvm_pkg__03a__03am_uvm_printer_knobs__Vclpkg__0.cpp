// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs::init(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__identifier = 1U;
    this->__PVT__type_name = 1U;
    this->__PVT__size = 1U;
    this->__PVT__depth = 0xffffffffU;
    this->__PVT__reference = 1U;
    this->__PVT__begin_elements = 5U;
    this->__PVT__end_elements = 5U;
    this->__PVT__prefix = ""s;
    this->__PVT__indent = 2U;
    this->__PVT__show_root = 0U;
    this->__PVT__mcd = 0x80000001U;
    this->__PVT__separator = "{}"s;
    this->__PVT__show_radix = 1U;
    this->__PVT__default_radix = 0x07000000U;
    this->__PVT__dec_radix = "'d"s;
    this->__PVT__bin_radix = "'b"s;
    this->__PVT__oct_radix = "'o"s;
    this->__PVT__unsigned_radix = "'d"s;
    this->__PVT__hex_radix = "'h"s;
    this->__PVT__header = 1U;
    this->__PVT__footer = 1U;
    this->__PVT__full_name = 0U;
}

void Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__recursion_policy = 0;
}
