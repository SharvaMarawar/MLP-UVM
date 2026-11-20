// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_m_free_id(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_m_free_id\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> recorder;
    if ((0U != this->__Vnontrivs.__PVT__m_recorders_by_id.exists(id))) {
        recorder = this->__Vnontrivs.__PVT__m_recorders_by_id
            .at(id);
    }
    if ((VlNull{} != recorder)) {
        this->__Vnontrivs.__PVT__m_recorders_by_id.erase(id);
        this->__Vnontrivs.__PVT__m_ids_by_recorder.erase(recorder);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_get_recorder_from_handle(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ id, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> &get_recorder_from_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_get_recorder_from_handle\n"); );
    // Body
    {
        if ((0U == id)) {
            get_recorder_from_handle__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((1U & (~ (0U != this->__Vnontrivs.__PVT__m_recorders_by_id.exists(id))))) {
            get_recorder_from_handle__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_recorder_from_handle__Vfuncrtn = this->__Vnontrivs.__PVT__m_recorders_by_id
            .at(id);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi8ef681a5> __Vfunc_get__Vfuncout_922;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi8ef681a5__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_922);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_922;
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_recorder"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_set_recursion_policy(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ policy) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_set_recursion_policy\n"); );
    // Body
    this->__PVT__policy = policy;
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_recursion_policy(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ &get_recursion_policy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_recursion_policy\n"); );
    // Body
    get_recursion_policy__Vfuncrtn = this->__PVT__policy;
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_id_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_id_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_id_enabled\n"); );
    // Body
    get_id_enabled__Vfuncrtn = this->__PVT__identifier;
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_default_radix(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ &get_default_radix__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_default_radix\n"); );
    // Body
    get_default_radix__Vfuncrtn = this->__PVT__default_radix;
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_flush(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_flush\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__PVT__policy = 0U;
    this->__PVT__identifier = 1U;
    this->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
    this->__PVT__m_recur_states.clear();
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_policy::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__default_radix = 0x07000000U;
    this->__PVT__identifier = 1U;
    this->__PVT__physical = 1U;
    this->__PVT__abstract = 1U;
    this->__PVT__policy = 0U;
    /*super.new*/;
    this->__PVT__m_stream_dap = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pie4df6861, vlProcess, vlSymsp, "stream_dap"s);
    this->__PVT__m_warn_null_stream = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_stream(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> &get_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_stream\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> __Vtask_try_get__value_1626;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_923;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1627;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1630;
    __Vtask_uvm_report_warning__verbosity_1630 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1632;
    __Vtask_uvm_report_warning__line_1632 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1634;
    __Vtask_uvm_report_warning__report_enabled_checked_1634 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_924;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1635;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__get_name;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_0__try_get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    VL_NULL_CHECK(this->__PVT__m_stream_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 188)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__value_1626, __VlefCall_0__try_get);
    get_stream__Vfuncrtn = __Vtask_try_get__value_1626;
    if ((1U & (~ (::IData)(__VlefCall_0__try_get)))) {
        if (this->__PVT__m_warn_null_stream) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_923);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_923;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1627);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1627;
            __VlefCall_1__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 192)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 192)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/REC/NO_CFG"s, __VlefCall_2__get_report_verbosity_level);
            __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
            if (__VlefLogAnd_4) {
                VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 192)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/REC/NO_CFG"s, __VlefCall_3__get_report_action);
                __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_4))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                __Vtask_uvm_report_warning__report_enabled_checked_1634 = 1U;
                this->__Vtask_uvm_report_warning__context_name_1633 = ""s;
                __Vtask_uvm_report_warning__line_1632 = 0x000000c0U;
                this->__Vtask_uvm_report_warning__filename_1631 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh"s;
                __Vtask_uvm_report_warning__verbosity_1630 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_1629
                              ,"attempt to retrieve STREAM from '%s' before it was set!",1
                              , 'S',&(__VlefCall_5__get_name));
                this->__Vtask_uvm_report_warning__id_1628 = "UVM/REC/NO_CFG"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_924);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_924;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1635);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1635;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_1628, this->__Vtask_uvm_report_warning__message_1629, __Vtask_uvm_report_warning__verbosity_1630, this->__Vtask_uvm_report_warning__filename_1631, __Vtask_uvm_report_warning__line_1632, this->__Vtask_uvm_report_warning__context_name_1633, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1634));
            }
        }
        this->__PVT__m_warn_null_stream = 0U;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_close(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ close_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_close\n"); );
    // Body
    ::CData/*0:0*/ __VlefCall_0__is_open;
    {
        if ((0ULL == close_time)) {
            close_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
        }
        this->__VnoInFunc_is_open(vlSymsp, __VlefCall_0__is_open);
        if ((1U & (~ (::IData)(__VlefCall_0__is_open)))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_close(vlSymsp, close_time);
        this->__PVT__m_is_opened = 0U;
        this->__PVT__m_is_closed = 1U;
        this->__PVT__m_close_time = close_time;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_free(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ close_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_free\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_2__is_open;
    ::CData/*0:0*/ __VlefCall_1__is_closed;
    ::CData/*0:0*/ __VlefCall_0__is_open;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> p;
    ::std::string s;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> stream;
    {
        vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
        s = ""s;
        this->__VnoInFunc_is_open(vlSymsp, __VlefCall_0__is_open);
        this->__VnoInFunc_is_closed(vlSymsp, __VlefCall_1__is_closed);
        if ((1U & ((~ (::IData)(__VlefCall_0__is_open)) 
                   & (~ (::IData)(__VlefCall_1__is_closed))))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_is_open(vlSymsp, __VlefCall_2__is_open);
        if (__VlefCall_2__is_open) {
            this->__VnoInFunc_close(vlSymsp, close_time);
        }
        this->__VnoInFunc_do_free(vlSymsp);
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, stream);
        this->__PVT__m_is_closed = 0U;
        if ((VlNull{} != p)) {
            VL_NULL_CHECK(p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 258)->__VnoInFunc_get_randstate(vlSymsp, s);
        }
        this->__PVT__m_stream_dap = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pie4df6861, vlProcess, vlSymsp, "stream_dap"s);
        if ((VlNull{} != p)) {
            VL_NULL_CHECK(p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 264)->__VnoInFunc_set_randstate(vlSymsp, s);
        }
        this->__PVT__m_warn_null_stream = 1U;
        if ((0U != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__Vnontrivs.__PVT__m_ids_by_recorder.exists(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder>{this}))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_m_free_id(vlSymsp, vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__Vnontrivs.__PVT__m_ids_by_recorder
                                                                                .at(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder>{this}));
        }
        if ((VlNull{} != stream)) {
            VL_NULL_CHECK(stream, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 277)->__VnoInFunc_m_free_recorder(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder>{this});
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_is_open(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_open__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_is_open\n"); );
    // Body
    is_open__Vfuncrtn = this->__PVT__m_is_opened;
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_is_closed(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_closed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_is_closed\n"); );
    // Body
    is_closed__Vfuncrtn = this->__PVT__m_is_closed;
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_m_do_open(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> stream, ::QData/*63:0*/ open_time, ::std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_m_do_open\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_925;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1636;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1639;
    __Vtask_uvm_report_error__verbosity_1639 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1641;
    __Vtask_uvm_report_error__line_1641 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1643;
    __Vtask_uvm_report_error__report_enabled_checked_1643 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_926;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1644;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> __Vtask_try_get__value_1645;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_927;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1646;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1649;
    __Vtask_uvm_report_error__verbosity_1649 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1651;
    __Vtask_uvm_report_error__line_1651 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1653;
    __Vtask_uvm_report_error__report_enabled_checked_1653 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_928;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1654;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_10__get_name;
    ::CData/*0:0*/ __VlefLogAnd_9;
    ::IData/*31:0*/ __VlefCall_8__get_report_action;
    ::IData/*31:0*/ __VlefCall_7__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_6__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_5__try_get;
    ::std::string __VlefCall_4__get_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    {
        if ((VlNull{} == stream)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_925);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_925;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1636);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1636;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 323)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 323)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/REC/NULL_STREAM"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 323)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/REC/NULL_STREAM"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                __Vtask_uvm_report_error__report_enabled_checked_1643 = 1U;
                this->__Vtask_uvm_report_error__context_name_1642 = ""s;
                __Vtask_uvm_report_error__line_1641 = 0x00000143U;
                this->__Vtask_uvm_report_error__filename_1640 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh"s;
                __Vtask_uvm_report_error__verbosity_1639 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_1638
                              ,"Illegal attempt to set STREAM for '%s' to '<null>'",1
                              , 'S',&(__VlefCall_4__get_name));
                this->__Vtask_uvm_report_error__id_1637 = "UVM/REC/NULL_STREAM"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_926);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_926;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1644);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1644;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1637, this->__Vtask_uvm_report_error__message_1638, __Vtask_uvm_report_error__verbosity_1639, this->__Vtask_uvm_report_error__filename_1640, __Vtask_uvm_report_error__line_1641, this->__Vtask_uvm_report_error__context_name_1642, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1643));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_stream_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 327)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__value_1645, __VlefCall_5__try_get);
        if (__VlefCall_5__try_get) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_927);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_927;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1646);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1646;
            __VlefCall_6__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_6__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 330)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 330)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/REC/RE_INIT"s, __VlefCall_7__get_report_verbosity_level);
            __VlefLogAnd_9 = VL_LTES_III(32, 0U, __VlefCall_7__get_report_verbosity_level);
            if (__VlefLogAnd_9) {
                VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 330)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/REC/RE_INIT"s, __VlefCall_8__get_report_action);
                __VlefLogAnd_9 = (0U != __VlefCall_8__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_9))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                __Vtask_uvm_report_error__report_enabled_checked_1653 = 1U;
                this->__Vtask_uvm_report_error__context_name_1652 = ""s;
                __Vtask_uvm_report_error__line_1651 = 0x0000014aU;
                this->__Vtask_uvm_report_error__filename_1650 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh"s;
                __Vtask_uvm_report_error__verbosity_1649 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_1648
                              ,"Illegal attempt to re-initialize '%s'",1
                              , 'S',&(__VlefCall_10__get_name));
                this->__Vtask_uvm_report_error__id_1647 = "UVM/REC/RE_INIT"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_928);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_928;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1654);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1654;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1647, this->__Vtask_uvm_report_error__message_1648, __Vtask_uvm_report_error__verbosity_1649, this->__Vtask_uvm_report_error__filename_1650, __Vtask_uvm_report_error__line_1651, this->__Vtask_uvm_report_error__context_name_1652, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1653));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_stream_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 334)->__VnoInFunc_set(vlSymsp, stream);
        this->__PVT__m_open_time = open_time;
        this->__PVT__m_is_opened = 1U;
        this->__VnoInFunc_do_open(vlProcess, vlSymsp, stream, open_time, type_name);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_handle(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_handle\n"); );
    // Body
    ::CData/*0:0*/ __VlefCall_1__is_closed;
    ::CData/*0:0*/ __VlefCall_0__is_open;
    ::IData/*31:0*/ unnamedblk4__DOT__handle;
    get_handle__Vfuncrtn = 0U;
    this->__VnoInFunc_is_open(vlSymsp, __VlefCall_0__is_open);
    this->__VnoInFunc_is_closed(vlSymsp, __VlefCall_1__is_closed);
    if ((1U & ((~ (::IData)(__VlefCall_0__is_open)) 
               & (~ (::IData)(__VlefCall_1__is_closed))))) {
        get_handle__Vfuncrtn = 0U;
    } else {
        this->__VnoInFunc_get_inst_id(vlSymsp, unnamedblk4__DOT__handle);
        if (((0U != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__Vnontrivs.__PVT__m_ids_by_recorder.exists(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder>{this})) 
             & (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__Vnontrivs.__PVT__m_ids_by_recorder
                .at(::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder>{this}) 
                != unnamedblk4__DOT__handle))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__Vnontrivs.__PVT__m_recorders_by_id.erase(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__Vnontrivs.__PVT__m_ids_by_recorder
                                                                                .at(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder>{this}));
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__Vnontrivs.__PVT__m_recorders_by_id.atWrite(unnamedblk4__DOT__handle) 
            = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder>{this};
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__Vnontrivs.__PVT__m_ids_by_recorder.atWrite(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder>{this}) 
            = unnamedblk4__DOT__handle;
        get_handle__Vfuncrtn = unnamedblk4__DOT__handle;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlWide<128>/*4095:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_record_field(vlSymsp, name, value, size, radix);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field_int(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field_int\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_record_field_int(vlSymsp, name, value, size, radix);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_object(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_object\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __Vtask_pop_active_object__Vfuncout_1655;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*27:0*/ __VlefCall_2__get_recursion_policy;
    ::IData/*27:0*/ __VlefCall_1__get_recursion_policy;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        }
        if ((VlNull{} == value)) {
            this->__VnoInFunc_do_record_object(vlProcess, vlSymsp, name, value);
        } else {
            this->__VnoInFunc_push_active_object(vlProcess, vlSymsp, value);
            this->__VnoInFunc_get_recursion_policy(vlSymsp, __VlefCall_1__get_recursion_policy);
            this->__PVT__m_recur_states.atWrite(value).atWrite(__VlefCall_1__get_recursion_policy) = 1U;
            this->__VnoInFunc_do_record_object(vlProcess, vlSymsp, name, value);
            this->__VnoInFunc_get_recursion_policy(vlSymsp, __VlefCall_2__get_recursion_policy);
            this->__PVT__m_recur_states.atWrite(value).atWrite(__VlefCall_2__get_recursion_policy) = 2U;
            this->__VnoInFunc_pop_active_object(vlProcess, vlSymsp, __Vtask_pop_active_object__Vfuncout_1655);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_record_string(vlSymsp, name, value);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_generic(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string value, ::std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_generic\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_record_generic(vlSymsp, name, value, type_name);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_use_record_attribute(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &use_record_attribute__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_use_record_attribute\n"); );
    // Body
    use_record_attribute__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_open(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> stream, ::QData/*63:0*/ open_time, ::std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_open\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_close(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ close_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_close\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_free(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_free\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlWide<128>/*4095:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field_int(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field_int\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_object(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_object\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_1__user_hook_enabled;
    ::IData/*27:0*/ __VlefCall_0__get_recursion_policy;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op> unnamedblk5__DOT__field_op;
    this->__VnoInFunc_get_recursion_policy(vlSymsp, __VlefCall_0__get_recursion_policy);
    if (((0x00040000U != __VlefCall_0__get_recursion_policy) 
         & (VlNull{} != value))) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, unnamedblk5__DOT__field_op);
        VL_NULL_CHECK(unnamedblk5__DOT__field_op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 565)->__VnoInFunc_set(vlProcess, vlSymsp, 0x00000040U, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder>{this}, VlNull{});
        VL_NULL_CHECK(value, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 566)->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, unnamedblk5__DOT__field_op);
        VL_NULL_CHECK(unnamedblk5__DOT__field_op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 567)->__VnoInFunc_user_hook_enabled(vlProcess, vlSymsp, __VlefCall_1__user_hook_enabled);
        if (__VlefCall_1__user_hook_enabled) {
            VL_NULL_CHECK(value, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 569)->__VnoInFunc_do_record(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder>{this});
        }
        VL_NULL_CHECK(unnamedblk5__DOT__field_op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 572)->__VnoInFunc_m_recycle(vlSymsp);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_string(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_string\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_generic(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string value, ::std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_generic\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_recorder::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_warn_null_stream = 0;
    __PVT__m_is_opened = 0;
    __PVT__m_is_closed = 0;
    __PVT__m_open_time = VL_SCOPED_RAND_RESET_Q(64, 14110915553244549694ULL, 6023116248236803926ull);
    __PVT__m_close_time = VL_SCOPED_RAND_RESET_Q(64, 14110915553244549694ULL, 5696291924415242857ull);
    __PVT__recording_depth = 0;
    __PVT__tr_handle = VL_SCOPED_RAND_RESET_I(32, 14110915553244549694ULL, 12119243538734566040ull);
    __PVT__m_recur_states.atDefault().atDefault() = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_recorder::~Vtb_top_uvm_pkg__03a__03auvm_recorder() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_recorder::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_recorder::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_recorder::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_stream_dap:" + VL_TO_STRING(__PVT__m_stream_dap);
    out += ", m_warn_null_stream:" + VL_TO_STRING(__PVT__m_warn_null_stream);
    out += ", m_is_opened:" + VL_TO_STRING(__PVT__m_is_opened);
    out += ", m_is_closed:" + VL_TO_STRING(__PVT__m_is_closed);
    out += ", m_open_time:" + VL_TO_STRING(__PVT__m_open_time);
    out += ", m_close_time:" + VL_TO_STRING(__PVT__m_close_time);
    out += ", recording_depth:" + VL_TO_STRING(__PVT__recording_depth);
    out += ", default_radix:" + VL_TO_STRING(__PVT__default_radix);
    out += ", identifier:" + VL_TO_STRING(__PVT__identifier);
    out += ", physical:" + VL_TO_STRING(__PVT__physical);
    out += ", abstract:" + VL_TO_STRING(__PVT__abstract);
    out += ", tr_handle:" + VL_TO_STRING(__PVT__tr_handle);
    out += ", m_recur_states:" + VL_TO_STRING(__PVT__m_recur_states);
    out += ", policy:" + VL_TO_STRING(__PVT__policy);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_policy::to_string_middle();
    return (out);
}
