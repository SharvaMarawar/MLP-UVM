// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg___ctor_var_reset(Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg* vlSelf);

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg__ctor(Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg* vlSelf, Vtb_top__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(Verilated::catName(symsp->name(), namep));
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_rsrc_db_imp);
    // Reset structure values
    Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg___ctor_var_reset(vlSelf);
}

Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg::Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg(Vtb_top__Syms* symsp, const char* namep) {
    Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg__ctor(this, symsp, namep);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg__dtor(Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_rsrc_db_imp);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg::~Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg() {
    Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg__dtor(this);
}
