// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_cfg_dap = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9, vlProcess, vlSymsp, "cfg_dap"s);
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_db(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> &get_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_db\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg> __Vtask_try_get__value_1577;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_910;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1578;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1581;
    __Vtask_uvm_report_warning__verbosity_1581 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1583;
    __Vtask_uvm_report_warning__line_1583 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1585;
    __Vtask_uvm_report_warning__report_enabled_checked_1585 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_911;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1586;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__get_name;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_0__try_get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg> m_cfg;
    {
        VL_NULL_CHECK(this->__PVT__m_cfg_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 100)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__value_1577, __VlefCall_0__try_get);
        m_cfg = __Vtask_try_get__value_1577;
        if ((1U & (~ (::IData)(__VlefCall_0__try_get)))) {
            if (this->__PVT__m_warn_null_cfg) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_910);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_910;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1578);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1578;
                __VlefCall_1__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 106)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 106)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/REC_STR/NO_CFG"s, __VlefCall_2__get_report_verbosity_level);
                __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
                if (__VlefLogAnd_4) {
                    VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 106)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/REC_STR/NO_CFG"s, __VlefCall_3__get_report_action);
                    __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_4))) {
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                    __Vtask_uvm_report_warning__report_enabled_checked_1585 = 1U;
                    this->__Vtask_uvm_report_warning__context_name_1584 = ""s;
                    __Vtask_uvm_report_warning__line_1583 = 0x0000006aU;
                    this->__Vtask_uvm_report_warning__filename_1582 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh"s;
                    __Vtask_uvm_report_warning__verbosity_1581 = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_1580
                                  ,"attempt to retrieve DB from '%s' before it was set!",1
                                  , 'S',&(__VlefCall_5__get_name));
                    this->__Vtask_uvm_report_warning__id_1579 = "UVM/REC_STR/NO_CFG"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_911);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_911;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1586);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_1586;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_1579, this->__Vtask_uvm_report_warning__message_1580, __Vtask_uvm_report_warning__verbosity_1581, this->__Vtask_uvm_report_warning__filename_1582, __Vtask_uvm_report_warning__line_1583, this->__Vtask_uvm_report_warning__context_name_1584, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1585));
                }
            }
            this->__PVT__m_warn_null_cfg = 0U;
            get_db__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_db__Vfuncrtn = VL_NULL_CHECK(m_cfg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 111)
            ->__PVT__db;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_scope(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_scope\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg> __Vtask_try_get__value_1587;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_912;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1588;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1591;
    __Vtask_uvm_report_warning__verbosity_1591 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1593;
    __Vtask_uvm_report_warning__line_1593 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1595;
    __Vtask_uvm_report_warning__report_enabled_checked_1595 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_913;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1596;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__get_name;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_0__try_get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg> m_cfg;
    {
        get_scope__Vfuncrtn = ""s;
        VL_NULL_CHECK(this->__PVT__m_cfg_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 118)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__value_1587, __VlefCall_0__try_get);
        m_cfg = __Vtask_try_get__value_1587;
        if ((1U & (~ (::IData)(__VlefCall_0__try_get)))) {
            if (this->__PVT__m_warn_null_cfg) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_912);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_912;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1588);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1588;
                __VlefCall_1__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 124)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 124)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/REC_STR/NO_CFG"s, __VlefCall_2__get_report_verbosity_level);
                __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
                if (__VlefLogAnd_4) {
                    VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 124)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/REC_STR/NO_CFG"s, __VlefCall_3__get_report_action);
                    __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_4))) {
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                    __Vtask_uvm_report_warning__report_enabled_checked_1595 = 1U;
                    this->__Vtask_uvm_report_warning__context_name_1594 = ""s;
                    __Vtask_uvm_report_warning__line_1593 = 0x0000007cU;
                    this->__Vtask_uvm_report_warning__filename_1592 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh"s;
                    __Vtask_uvm_report_warning__verbosity_1591 = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_1590
                                  ,"attempt to retrieve scope from '%s' before it was set!",1
                                  , 'S',&(__VlefCall_5__get_name));
                    this->__Vtask_uvm_report_warning__id_1589 = "UVM/REC_STR/NO_CFG"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_913);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_913;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1596);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_1596;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_1589, this->__Vtask_uvm_report_warning__message_1590, __Vtask_uvm_report_warning__verbosity_1591, this->__Vtask_uvm_report_warning__filename_1592, __Vtask_uvm_report_warning__line_1593, this->__Vtask_uvm_report_warning__context_name_1594, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1595));
                }
            }
            this->__PVT__m_warn_null_cfg = 0U;
            get_scope__Vfuncrtn = ""s;
            goto __Vlabel0;
        }
        get_scope__Vfuncrtn = VL_NULL_CHECK(m_cfg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 129)
            ->__PVT__scope;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_stream_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_stream_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_stream_type_name\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg> __Vtask_try_get__value_1597;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_914;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1598;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1601;
    __Vtask_uvm_report_warning__verbosity_1601 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1603;
    __Vtask_uvm_report_warning__line_1603 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1605;
    __Vtask_uvm_report_warning__report_enabled_checked_1605 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_915;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1606;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__get_name;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_0__try_get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg> m_cfg;
    {
        get_stream_type_name__Vfuncrtn = ""s;
        VL_NULL_CHECK(this->__PVT__m_cfg_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 136)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__value_1597, __VlefCall_0__try_get);
        m_cfg = __Vtask_try_get__value_1597;
        if ((1U & (~ (::IData)(__VlefCall_0__try_get)))) {
            if (this->__PVT__m_warn_null_cfg) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_914);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_914;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1598);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1598;
                __VlefCall_1__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 142)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 142)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/REC_STR/NO_CFG"s, __VlefCall_2__get_report_verbosity_level);
                __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
                if (__VlefLogAnd_4) {
                    VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 142)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/REC_STR/NO_CFG"s, __VlefCall_3__get_report_action);
                    __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_4))) {
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                    __Vtask_uvm_report_warning__report_enabled_checked_1605 = 1U;
                    this->__Vtask_uvm_report_warning__context_name_1604 = ""s;
                    __Vtask_uvm_report_warning__line_1603 = 0x0000008eU;
                    this->__Vtask_uvm_report_warning__filename_1602 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh"s;
                    __Vtask_uvm_report_warning__verbosity_1601 = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_1600
                                  ,"attempt to retrieve STREAM_TYPE_NAME from '%s' before it was set!",1
                                  , 'S',&(__VlefCall_5__get_name));
                    this->__Vtask_uvm_report_warning__id_1599 = "UVM/REC_STR/NO_CFG"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_915);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_915;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1606);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_1606;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_1599, this->__Vtask_uvm_report_warning__message_1600, __Vtask_uvm_report_warning__verbosity_1601, this->__Vtask_uvm_report_warning__filename_1602, __Vtask_uvm_report_warning__line_1603, this->__Vtask_uvm_report_warning__context_name_1604, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1605));
                }
            }
            this->__PVT__m_warn_null_cfg = 0U;
            get_stream_type_name__Vfuncrtn = ""s;
            goto __Vlabel0;
        }
        get_stream_type_name__Vfuncrtn = VL_NULL_CHECK(m_cfg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 147)
            ->__PVT__stream_type_name;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_do_open(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> db, ::std::string scope, ::std::string stream_type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_do_open\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_916;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1607;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1610;
    __Vtask_uvm_report_error__verbosity_1610 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1612;
    __Vtask_uvm_report_error__line_1612 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1614;
    __Vtask_uvm_report_error__report_enabled_checked_1614 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_917;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1615;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg> __Vtask_try_get__value_1616;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_918;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1617;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1620;
    __Vtask_uvm_report_error__verbosity_1620 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1622;
    __Vtask_uvm_report_error__line_1622 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1624;
    __Vtask_uvm_report_error__report_enabled_checked_1624 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_919;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1625;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_10__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_9;
    ::IData/*31:0*/ __VlefCall_8__get_report_action;
    ::IData/*31:0*/ __VlefCall_7__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_6__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_5__try_get;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk6__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk7__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg> m_cfg;
    {
        if ((VlNull{} == db)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_916);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_916;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1607);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1607;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 267)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk6__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 267)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/REC_STR/NULL_DB"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 267)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/REC_STR/NULL_DB"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_1614 = 1U;
                this->__Vtask_uvm_report_error__context_name_1613 = ""s;
                __Vtask_uvm_report_error__line_1612 = 0x0000010bU;
                this->__Vtask_uvm_report_error__filename_1611 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh"s;
                __Vtask_uvm_report_error__verbosity_1610 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_1609
                              ,"Illegal attempt to set DB for '%s' to '<null>'",1
                              , 'S',&(__VlefCall_4__get_full_name));
                this->__Vtask_uvm_report_error__id_1608 = "UVM/REC_STR/NULL_DB"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_917);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_917;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1615);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1615;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1608, this->__Vtask_uvm_report_error__message_1609, __Vtask_uvm_report_error__verbosity_1610, this->__Vtask_uvm_report_error__filename_1611, __Vtask_uvm_report_error__line_1612, this->__Vtask_uvm_report_error__context_name_1613, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1614));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_cfg_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 271)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__value_1616, __VlefCall_5__try_get);
        m_cfg = __Vtask_try_get__value_1616;
        if (__VlefCall_5__try_get) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_918);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_918;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1617);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1617;
            __VlefCall_6__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_6__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 275)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk7__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 275)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/REC_STR/RE_CFG"s, __VlefCall_7__get_report_verbosity_level);
            __VlefLogAnd_9 = VL_LTES_III(32, 0U, __VlefCall_7__get_report_verbosity_level);
            if (__VlefLogAnd_9) {
                VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 275)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/REC_STR/RE_CFG"s, __VlefCall_8__get_report_action);
                __VlefLogAnd_9 = (0U != __VlefCall_8__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_9))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_1624 = 1U;
                this->__Vtask_uvm_report_error__context_name_1623 = ""s;
                __Vtask_uvm_report_error__line_1622 = 0x00000113U;
                this->__Vtask_uvm_report_error__filename_1621 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh"s;
                __Vtask_uvm_report_error__verbosity_1620 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_1619
                              ,"Illegal attempt to re-open '%s'",1
                              , 'S',&(__VlefCall_10__get_full_name));
                this->__Vtask_uvm_report_error__id_1618 = "UVM/REC_STR/RE_CFG"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_919);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_919;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1625);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1625;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1618, this->__Vtask_uvm_report_error__message_1619, __Vtask_uvm_report_error__verbosity_1620, this->__Vtask_uvm_report_error__filename_1621, __Vtask_uvm_report_error__line_1622, this->__Vtask_uvm_report_error__context_name_1623, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1624));
            }
        } else {
            m_cfg = VL_NEW(Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg, vlSymsp);
            VL_NULL_CHECK(m_cfg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 281)->__PVT__db 
                = db;
            VL_NULL_CHECK(m_cfg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 282)->__PVT__scope 
                = scope;
            VL_NULL_CHECK(m_cfg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 283)->__PVT__stream_type_name 
                = stream_type_name;
            VL_NULL_CHECK(this->__PVT__m_cfg_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 284)->__VnoInFunc_set(vlSymsp, m_cfg);
            this->__PVT__m_is_opened = 1U;
            this->__VnoInFunc_do_open(vlSymsp, db, scope, stream_type_name);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_is_open(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_open__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_is_open\n"); );
    // Body
    is_open__Vfuncrtn = this->__PVT__m_is_opened;
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_is_closed(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_closed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_is_closed\n"); );
    // Body
    is_closed__Vfuncrtn = this->__PVT__m_is_closed;
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_open_recorder(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ open_time, ::std::string type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> &open_recorder__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_open_recorder\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_0__is_open;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> unnamedblk8__DOT__p;
    ::std::string unnamedblk8__DOT__s;
    ::QData/*63:0*/ m_time;
    m_time = ((0ULL == open_time) ? VL_TIME_UNITED_Q(1000)
               : open_time);
    this->__VnoInFunc_is_open(vlSymsp, __VlefCall_0__is_open);
    if (__VlefCall_0__is_open) {
        vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, unnamedblk8__DOT__p);
        unnamedblk8__DOT__s = ""s;
        if ((VlNull{} != unnamedblk8__DOT__p)) {
            VL_NULL_CHECK(unnamedblk8__DOT__p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 332)->__VnoInFunc_get_randstate(vlSymsp, unnamedblk8__DOT__s);
        }
        this->__VnoInFunc_do_open_recorder(vlProcess, vlSymsp, name, m_time, type_name, open_recorder__Vfuncrtn);
        if ((VlNull{} != open_recorder__Vfuncrtn)) {
            this->__PVT__m_records.atWrite(open_recorder__Vfuncrtn) = 1U;
            VL_NULL_CHECK(open_recorder__Vfuncrtn, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 345)->__VnoInFunc_m_do_open(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream>{this}, m_time, type_name);
        }
        if ((VlNull{} != unnamedblk8__DOT__p)) {
            VL_NULL_CHECK(unnamedblk8__DOT__p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_stream.svh", 349)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk8__DOT__s);
        }
    } else {
        open_recorder__Vfuncrtn = VlNull{};
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_free_recorder(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_free_recorder\n"); );
    // Body
    if ((0U != this->__PVT__m_records.exists(recorder))) {
        this->__PVT__m_records.erase(recorder);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_handle(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_handle\n"); );
    // Body
    ::CData/*0:0*/ __VlefCall_1__is_closed;
    ::CData/*0:0*/ __VlefCall_0__is_open;
    ::IData/*31:0*/ unnamedblk10__DOT__handle;
    get_handle__Vfuncrtn = 0U;
    this->__VnoInFunc_is_open(vlSymsp, __VlefCall_0__is_open);
    this->__VnoInFunc_is_closed(vlSymsp, __VlefCall_1__is_closed);
    if ((1U & ((~ (::IData)(__VlefCall_0__is_open)) 
               & (~ (::IData)(__VlefCall_1__is_closed))))) {
        get_handle__Vfuncrtn = 0U;
    } else {
        this->__VnoInFunc_get_inst_id(vlSymsp, unnamedblk10__DOT__handle);
        if (((0U != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__Vnontrivs.__PVT__m_ids_by_stream.exists(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream>{this})) 
             & (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__Vnontrivs.__PVT__m_ids_by_stream
                .at(::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream>{this}) 
                != unnamedblk10__DOT__handle))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__Vnontrivs.__PVT__m_streams_by_id.erase(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__Vnontrivs.__PVT__m_ids_by_stream
                                                                                .at(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream>{this}));
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__Vnontrivs.__PVT__m_streams_by_id.atWrite(unnamedblk10__DOT__handle) 
            = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream>{this};
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__Vnontrivs.__PVT__m_ids_by_stream.atWrite(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream>{this}) 
            = unnamedblk10__DOT__handle;
        get_handle__Vfuncrtn = unnamedblk10__DOT__handle;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_open(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> db, ::std::string scope, ::std::string stream_type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_open\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_close(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_close\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_free(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_free\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_open_recorder(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ open_time, ::std::string type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> &do_open_recorder__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_open_recorder\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    do_open_recorder__Vfuncrtn = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_stream::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_records.atDefault() = 0;
    __PVT__m_warn_null_cfg = 0;
    __PVT__m_is_opened = 0;
    __PVT__m_is_closed = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_tr_stream::~Vtb_top_uvm_pkg__03a__03auvm_tr_stream() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_tr_stream::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_tr_stream::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_stream::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_cfg_dap:" + VL_TO_STRING(__PVT__m_cfg_dap);
    out += ", m_records:" + VL_TO_STRING(__PVT__m_records);
    out += ", m_warn_null_cfg:" + VL_TO_STRING(__PVT__m_warn_null_cfg);
    out += ", m_is_opened:" + VL_TO_STRING(__PVT__m_is_opened);
    out += ", m_is_closed:" + VL_TO_STRING(__PVT__m_is_closed);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
