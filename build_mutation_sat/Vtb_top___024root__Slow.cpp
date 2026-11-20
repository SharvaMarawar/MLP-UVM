// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top___024root___ctor_var_reset(Vtb_top___024root* vlSelf);

void Vtb_top___024root__ctor(Vtb_top___024root* vlSelf, Vtb_top__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.tb_top__DOT__unnamedblk1__DOT__tn);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.tb_top__DOT__unnamedblk3__DOT__tname);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_run_test__test_name_0);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VdlySched, *vlSelf->vlSymsp->_vm_contextp__);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VdynSched);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VnbaEvent);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VtrigSched_h27d73e2b__0);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VtrigSched_h64ab4232__0);
    // Reset structure values
    Vtb_top___024root___ctor_var_reset(vlSelf);
}

Vtb_top___024root::Vtb_top___024root(Vtb_top__Syms* symsp, const char* namep) {
    Vtb_top___024root__ctor(this, symsp, namep);
}

void Vtb_top___024root__dtor(Vtb_top___024root* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VtrigSched_h64ab4232__0);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VtrigSched_h27d73e2b__0);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VnbaEvent);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VdynSched);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VdlySched);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_run_test__test_name_0);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.tb_top__DOT__unnamedblk3__DOT__tname);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.tb_top__DOT__unnamedblk1__DOT__tn);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtb_top___024root::~Vtb_top___024root() {
    Vtb_top___024root__dtor(this);
}
