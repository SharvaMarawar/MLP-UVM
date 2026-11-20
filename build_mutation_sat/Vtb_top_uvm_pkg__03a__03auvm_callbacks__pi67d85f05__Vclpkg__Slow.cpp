// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi67d85f05__Vclpkg___ctor_var_reset(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi67d85f05__Vclpkg* vlSelf);

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi67d85f05__Vclpkg__ctor(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi67d85f05__Vclpkg* vlSelf, Vtb_top__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(Verilated::catName(symsp->name(), namep));
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_typename);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_cb_typename);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__id_1720);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__message_1721);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__filename_1723);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__context_name_1725);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1728);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1729);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1731);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1733);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1736);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1737);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1739);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1741);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1744);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1745);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1747);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1749);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1753);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1754);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1756);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1758);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_inst);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_typeid);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_cb_typeid);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_base_inst);
    // Reset structure values
    Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi67d85f05__Vclpkg___ctor_var_reset(vlSelf);
}

Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi67d85f05__Vclpkg::Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi67d85f05__Vclpkg(Vtb_top__Syms* symsp, const char* namep) {
    Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi67d85f05__Vclpkg__ctor(this, symsp, namep);
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi67d85f05__Vclpkg__dtor(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi67d85f05__Vclpkg* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_base_inst);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_cb_typeid);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_typeid);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_inst);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1758);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1756);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1754);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1753);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1749);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1747);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1745);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1744);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1741);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1739);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1737);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1736);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1733);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__filename_1731);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__message_1729);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_warning__id_1728);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__context_name_1725);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__filename_1723);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__message_1721);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_error__id_1720);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_cb_typename);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_typename);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi67d85f05__Vclpkg::~Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi67d85f05__Vclpkg() {
    Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi67d85f05__Vclpkg__dtor(this);
}
