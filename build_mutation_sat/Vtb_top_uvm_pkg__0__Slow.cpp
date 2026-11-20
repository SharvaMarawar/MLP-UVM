// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top_uvm_pkg___eval_static__TOP__uvm_pkg(Vtb_top_uvm_pkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_uvm_pkg___eval_static__TOP__uvm_pkg\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__uvm_re_match__Vstatic__e = 0U;
    vlSelfRef.__PVT__uvm_re_match__Vstatic__es = 0U;
    vlSelfRef.__PVT__uvm_re_match__Vstatic__s = 0U;
    vlSelfRef.__PVT__uvm_re_match__Vstatic__ss = 0U;
    vlSelfRef.__PVT__uvm_global_random_seed = VL_RANDOM_I();
    vlSelfRef.__PVT__uvm_instance_scope__Vstatic__c = 0U;
    vlSelfRef.__PVT__uvm_instance_scope__Vstatic__pos = 0U;
    vlSelfRef.__PVT__uvm_oneway_hash__Vstatic__msb = 0U;
    vlSelfRef.__PVT__uvm_oneway_hash__Vstatic__current_byte = 0U;
    vlSelfRef.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0U;
    vlSelfRef.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0U;
    vlSelfRef.__PVT__uvm_leaf_scope__Vstatic__pos = 0U;
    vlSelfRef.__PVT__uvm_leaf_scope__Vstatic__bmatches = 0U;
    vlSelfRef.__PVT__uvm_wait_for_nba_region__Vstatic__nba = 0U;
    vlSelfRef.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba = 0U;
}

VL_ATTR_COLD void Vtb_top_uvm_pkg___ctor_var_reset(Vtb_top_uvm_pkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_uvm_pkg___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Vnontrivs.__PVT__m_uvm_core_state.atDefault() = 0;
}
