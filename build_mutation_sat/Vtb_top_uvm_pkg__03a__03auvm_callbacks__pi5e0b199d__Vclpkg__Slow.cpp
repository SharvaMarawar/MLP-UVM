// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg___ctor_var_reset(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg* vlSelf);

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg__ctor(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg* vlSelf, Vtb_top__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(Verilated::catName(symsp->name(), namep));
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_typename);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_cb_typename);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__id_1824);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__message_1825);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__filename_1827);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__context_name_1829);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1832);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1833);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1835);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1837);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1840);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1841);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1843);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1845);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1848);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1849);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1851);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1853);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1857);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1858);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1860);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1862);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_inst);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_typeid);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_cb_typeid);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_base_inst);
    // Reset structure values
    Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg___ctor_var_reset(vlSelf);
}

Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg::Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg(Vtb_top__Syms* symsp, const char* namep) {
    Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg__ctor(this, symsp, namep);
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg__dtor(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_base_inst);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_cb_typeid);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_typeid);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_inst);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1862);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1860);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1858);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1857);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1853);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1851);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1849);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1848);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1845);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1843);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1841);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1840);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1837);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1835);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1833);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1832);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__context_name_1829);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__filename_1827);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__message_1825);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__id_1824);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_cb_typename);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_typename);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg::~Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg() {
    Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg__dtor(this);
}
