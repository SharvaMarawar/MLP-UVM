// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg___ctor_var_reset(Vtb_top_uvm_pkg* vlSelf);

void Vtb_top_uvm_pkg__ctor(Vtb_top_uvm_pkg* vlSelf, Vtb_top__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(Verilated::catName(symsp->name(), namep));
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__m_uvm_core_state);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report__id_3);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report__message_4);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report__filename_6);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report__context_name_8);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_deferred_init);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_default_table_printer);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_default_printer);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_random_seed_table_lookup);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.run_test__Vstatic__top);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.run_test__Vstatic__cs);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__top);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__cs);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report__Vstatic__top);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report__Vstatic__cs);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_info__Vstatic__top);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_error__Vstatic__top);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_fatal__Vstatic__top);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_fatal__Vstatic__cs);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_init__Vstatic__dcs);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk5__DOT___local_report_object_);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk6__DOT__actual);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk9__DOT__top);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__end_of_elaboration_ph);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_top);
    // Reset structure values
    Vtb_top_uvm_pkg___ctor_var_reset(vlSelf);
}

Vtb_top_uvm_pkg::Vtb_top_uvm_pkg(Vtb_top__Syms* symsp, const char* namep) {
    Vtb_top_uvm_pkg__ctor(this, symsp, namep);
}

void Vtb_top_uvm_pkg__dtor(Vtb_top_uvm_pkg* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_top);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__end_of_elaboration_ph);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk9__DOT__top);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk6__DOT__actual);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_init__Vstatic__unnamedblk5__DOT___local_report_object_);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_init__Vstatic__dcs);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_fatal__Vstatic__cs);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_fatal__Vstatic__top);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_error__Vstatic__top);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_info__Vstatic__top);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report__Vstatic__cs);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report__Vstatic__top);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__cs);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__top);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.run_test__Vstatic__cs);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.run_test__Vstatic__top);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_random_seed_table_lookup);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_default_printer);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_default_table_printer);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__uvm_deferred_init);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report__context_name_8);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report__filename_6);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report__message_4);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__Vtask_uvm_report__id_3);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__PVT__m_uvm_core_state);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtb_top_uvm_pkg::~Vtb_top_uvm_pkg() {
    Vtb_top_uvm_pkg__dtor(this);
}
