// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg___ctor_var_reset(Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg* vlSelf);

void Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg__ctor(Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg* vlSelf, Vtb_top__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(Verilated::catName(symsp->name(), namep));
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_info__id_894);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_info__message_895);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_info__filename_897);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_info__context_name_899);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_595);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_info__id_903);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_info__message_904);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_info__filename_906);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_info__context_name_908);
    // Reset structure values
    Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg___ctor_var_reset(vlSelf);
}

Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg::Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg(Vtb_top__Syms* symsp, const char* namep) {
    Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg__ctor(this, symsp, namep);
}

void Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg__dtor(Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_info__context_name_908);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_info__filename_906);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_info__message_904);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_info__id_903);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_595);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_info__context_name_899);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_info__filename_897);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_info__message_895);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report_info__id_894);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg::~Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg() {
    Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg__dtor(this);
}
