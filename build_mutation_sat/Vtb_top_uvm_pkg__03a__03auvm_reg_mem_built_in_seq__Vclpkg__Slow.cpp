// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg__ctor(Vtb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg* vlSelf, Vtb_top__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(Verilated::catName(symsp->name(), namep));
    // Construct members
    // Reset structure values
}

Vtb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg::Vtb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg(Vtb_top__Syms* symsp, const char* namep) {
    Vtb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg__ctor(this, symsp, namep);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg__dtor(Vtb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg::~Vtb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg() {
    Vtb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg__dtor(this);
}
