// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg___ctor_var_reset(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg* vlSelf);

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg__ctor(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg* vlSelf, Vtb_top__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(Verilated::catName(symsp->name(), namep));
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_typename);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_cb_typename);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__id_1893);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__message_1894);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__filename_1896);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__context_name_1898);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1901);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1902);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1904);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1906);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1909);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1910);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1912);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1914);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1917);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1918);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1920);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1922);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1926);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1927);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1929);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1931);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_inst);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_typeid);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_cb_typeid);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_base_inst);
    // Reset structure values
    Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg___ctor_var_reset(vlSelf);
}

Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg::Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg(Vtb_top__Syms* symsp, const char* namep) {
    Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg__ctor(this, symsp, namep);
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg__dtor(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_base_inst);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_cb_typeid);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_typeid);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_inst);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1931);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1929);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1927);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1926);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1922);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1920);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1918);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1917);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1914);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1912);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1910);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1909);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1906);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1904);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1902);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1901);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__context_name_1898);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__filename_1896);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__message_1894);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__id_1893);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_cb_typename);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_typename);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg::~Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg() {
    Vtb_top_uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg__dtor(this);
}
