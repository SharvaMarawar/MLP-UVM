// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_m_rh_init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_m_rh_init\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_handler> __VlefCall_1__create;
    ::std::string __VlefCall_0__get_name;
    if ((1U & (~ (::IData)(this->__PVT__m_rh_set)))) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pibac5cd21__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), VlNull{}, ""s, __VlefCall_1__create);
        this->__VnoInFunc_set_report_handler(vlSymsp, __VlefCall_1__create);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_get_report_object(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> &uvm_get_report_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_get_report_object\n"); );
    // Body
    uvm_get_report_object__Vfuncrtn = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object>{this};
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_enabled(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ verbosity, ::CData/*1:0*/ severity, ::std::string id, ::IData/*31:0*/ &uvm_report_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_enabled\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__get_report_verbosity_level;
    {
        uvm_report_enabled__Vfuncrtn = 0U;
        this->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, severity, id, __VlefCall_0__get_report_verbosity_level);
        if (VL_LTS_III(32, __VlefCall_0__get_report_verbosity_level, verbosity)) {
            uvm_report_enabled__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        uvm_report_enabled__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::std::string context_name, ::CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> l_report_message;
    {
        if (((0U == (::IData)(severity)) & (~ (::IData)(report_enabled_checked)))) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, verbosity, (::IData)(severity), id, __VlefCall_0__uvm_report_enabled);
            if ((1U & (~ (0U != __VlefCall_0__uvm_report_enabled)))) {
                goto __Vlabel0;
            }
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_message__Vclpkg.__VnoInFunc_new_report_message(vlProcess, vlSymsp, "uvm_report_message"s, l_report_message);
        VL_NULL_CHECK(l_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_object.svh", 180)->__VnoInFunc_set_report_message(vlSymsp, severity, id, message, verbosity, filename, line, context_name);
        this->__VnoInFunc_uvm_process_report_message(vlProcess, vlSymsp, l_report_message);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_info(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::std::string context_name, ::CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_info\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 0U, id, message, verbosity, filename, line, context_name, (::IData)(report_enabled_checked));
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_warning(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::std::string context_name, ::CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_warning\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 1U, id, message, verbosity, filename, line, context_name, (::IData)(report_enabled_checked));
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::std::string context_name, ::CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_error\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 2U, id, message, verbosity, filename, line, context_name, (::IData)(report_enabled_checked));
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_fatal(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::std::string context_name, ::CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_fatal\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 3U, id, message, verbosity, filename, line, context_name, (::IData)(report_enabled_checked));
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_process_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_object.svh", 292)->__VnoInFunc_set_report_object(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object>{this});
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_object.svh", 293)->__VnoInFunc_process_report_message(vlProcess, vlSymsp, report_message);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_verbosity_level(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::IData/*31:0*/ &get_report_verbosity_level__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_verbosity_level\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    get_report_verbosity_level__Vfuncrtn = 0U;
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_object.svh", 312)->__VnoInFunc_get_verbosity_level(vlSymsp, severity, id, get_report_verbosity_level__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_verbosity_level(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ verbosity_level) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_verbosity_level\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_object.svh", 338)->__VnoInFunc_set_verbosity_level(vlSymsp, verbosity_level);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_verbosity(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_verbosity\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_object.svh", 345)->__VnoInFunc_set_id_verbosity(vlSymsp, id, verbosity);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_action(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::IData/*31:0*/ &get_report_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_action\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    get_report_action__Vfuncrtn = 0U;
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_object.svh", 382)->__VnoInFunc_get_action(vlSymsp, severity, id, get_report_action__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_action(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_action\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_object.svh", 391)->__VnoInFunc_set_severity_action(vlSymsp, severity, action);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_action(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_action\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_object.svh", 398)->__VnoInFunc_set_id_action(vlSymsp, id, action);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_action(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_action\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_object.svh", 416)->__VnoInFunc_set_severity_id_action(vlProcess, vlSymsp, severity, id, action);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_file_handle(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::IData/*31:0*/ &get_report_file_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_file_handle\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    get_report_file_handle__Vfuncrtn = 0U;
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_object.svh", 433)->__VnoInFunc_get_file_handle(vlSymsp, severity, id, get_report_file_handle__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_file(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_file\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_object.svh", 450)->__VnoInFunc_set_id_file(vlSymsp, id, file);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_override(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ cur_severity, ::CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_override\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_object.svh", 494)->__VnoInFunc_set_severity_override(vlSymsp, cur_severity, (::IData)(new_severity));
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_override(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ cur_severity, ::std::string id, ::CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_override\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_object.svh", 503)->__VnoInFunc_set_severity_id_override(vlProcess, vlSymsp, cur_severity, id, (::IData)(new_severity));
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_handler(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_handler> handler) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_handler\n"); );
    // Body
    this->__PVT__m_rh = handler;
    this->__PVT__m_rh_set = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_header(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_header\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> top;
    {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, top);
        if ((::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object>{this} 
             == top)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_object.svh", 556)->__VnoInFunc_report_header(vlProcess, vlSymsp, file);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_die(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_die\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> top;
    {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, top);
        if ((::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object>{this} 
             == top)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_object.svh", 568)->__VnoInFunc_die(vlProcess, vlSymsp);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_summarize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_summarize\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> svr;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, svr);
    VL_NULL_CHECK(svr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_object.svh", 574)->__VnoInFunc_report_summarize(vlProcess, vlSymsp, file);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_info_hook(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::CData/*0:0*/ &report_info_hook__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_info_hook\n"); );
    // Body
    report_info_hook__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_error_hook(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::CData/*0:0*/ &report_error_hook__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_error_hook\n"); );
    // Body
    report_error_hook__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_warning_hook(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::CData/*0:0*/ &report_warning_hook__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_warning_hook\n"); );
    // Body
    report_warning_hook__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_fatal_hook(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::CData/*0:0*/ &report_fatal_hook__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_fatal_hook\n"); );
    // Body
    report_fatal_hook__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_hook(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::CData/*0:0*/ &report_hook__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_hook\n"); );
    // Body
    report_hook__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_object::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_rh_set = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_report_object::~Vtb_top_uvm_pkg__03a__03auvm_report_object() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_report_object::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_report_object::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_object::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_rh:" + VL_TO_STRING(__PVT__m_rh);
    out += ", m_rh_set:" + VL_TO_STRING(__PVT__m_rh_set);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
