// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg____Vdpiexp_m___05Fuvm_report_dpi_TOP__uvm_pkg(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ severity, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_uvm_pkg____Vdpiexp_m___05Fuvm_report_dpi_TOP__uvm_pkg\n"); );
    // Locals
    ::CData/*1:0*/ __Vtask_uvm_report__severity_2;
    __Vtask_uvm_report__severity_2 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report__verbosity_5;
    __Vtask_uvm_report__verbosity_5 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report__line_7;
    __Vtask_uvm_report__line_7 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report__report_enabled_checked_9;
    __Vtask_uvm_report__report_enabled_checked_9 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_5;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_10;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report__report_enabled_checked_9 = 0U;
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__Vtask_uvm_report__context_name_8 = ""s;
    __Vtask_uvm_report__line_7 = line;
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__Vtask_uvm_report__filename_6 
        = filename;
    __Vtask_uvm_report__verbosity_5 = verbosity;
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__Vtask_uvm_report__message_4 
        = message;
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__Vtask_uvm_report__id_3 
        = id;
    __Vtask_uvm_report__severity_2 = (3U & severity);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_5);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report__Vstatic__cs 
        = __Vfunc_get__Vfuncout_5;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 119)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_10);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report__Vstatic__top 
        = __Vtask_get_root__Vfuncout_10;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 120)->__VnoInFunc_uvm_report(vlProcess, vlSymsp, __Vtask_uvm_report__severity_2, vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__Vtask_uvm_report__id_3, vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__Vtask_uvm_report__message_4, __Vtask_uvm_report__verbosity_5, vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__Vtask_uvm_report__filename_6, __Vtask_uvm_report__line_7, vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__Vtask_uvm_report__context_name_8, (::IData)(__Vtask_uvm_report__report_enabled_checked_9));
}

void Vtb_top_uvm_pkg::__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::std::string context_name, ::CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_uvm_pkg::__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_6;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_11;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_6);
    this->__Vnontrivs.__PVT__uvm_report_fatal__Vstatic__cs 
        = __Vfunc_get__Vfuncout_6;
    VL_NULL_CHECK(this->__Vnontrivs.__PVT__uvm_report_fatal__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 213)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_11);
    this->__Vnontrivs.__PVT__uvm_report_fatal__Vstatic__top 
        = __Vtask_get_root__Vfuncout_11;
    VL_NULL_CHECK(this->__Vnontrivs.__PVT__uvm_report_fatal__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 214)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, id, message, verbosity, filename, line, context_name, (::IData)(report_enabled_checked));
}

void Vtb_top_uvm_pkg____Vdpiexp_uvm_polling_value_change_notify_TOP__uvm_pkg(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ sv_key) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_uvm_pkg____Vdpiexp_uvm_polling_value_change_notify_TOP__uvm_pkg\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_POLLING"s, "VPI access is disabled. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
}

std::string VL_TO_STRING(const Vtb_top_uvm_acs_name_struct__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_uvm_pkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{name:" + VL_TO_STRING(obj.__PVT__name);
    out += ", regex:" + VL_TO_STRING(obj.__PVT__regex);
    out += "}";
    return (out);
}
