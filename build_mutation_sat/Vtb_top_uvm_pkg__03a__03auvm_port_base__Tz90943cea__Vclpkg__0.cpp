// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent, ::IData/*31:0*/ port_type, ::IData/*31:0*/ min_size, ::IData/*31:0*/ max_size) {
    Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::new\n"); );
    // Locals
    ::VlWide<128>/*4095:0*/ __Vfunc_get__value_1461;
    VL_ZERO_W(4096, __Vfunc_get__value_1461);
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    ::CData/*0:0*/ __VlefCall_0__get;
    ::IData/*31:0*/ tmp;
    /*super.new*/;
    tmp = 0U;
    this->__PVT__m_port_type = port_type;
    this->__PVT__m_min_size = min_size;
    this->__PVT__m_max_size = max_size;
    this->__PVT__m_comp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_port_component__Tzc5f277a6, vlProcess, vlSymsp, name, parent, 
                                 ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea>{this});
    VL_EXTENDS_WI(4096,32, __Vfunc_get__value_1461, tmp);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db__Tz39e91f07__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, this->__PVT__m_comp, ""s, "check_connection_relationships"s, __Vfunc_get__value_1461, __VlefCall_0__get);
    tmp = __Vfunc_get__value_1461[0U];
    if ((1U & (~ (::IData)(__VlefCall_0__get)))) {
        VL_NULL_CHECK(this->__PVT__m_comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 307)->__VnoInFunc_set_report_id_action(vlProcess, vlSymsp, "Connection Warning"s, 0U);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    get_full_name__Vfuncrtn = ""s;
    VL_NULL_CHECK(this->__PVT__m_comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 330)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, get_full_name__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_get_parent\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 340)->__VnoInFunc_get_parent(vlSymsp, get_parent__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = ""s;
    if ((0U == this->__PVT__m_port_type)) {
        get_type_name__Vfuncrtn = "port"s;
    } else if ((1U == this->__PVT__m_port_type)) {
        get_type_name__Vfuncrtn = "export"s;
    } else if ((2U == this->__PVT__m_port_type)) {
        get_type_name__Vfuncrtn = "implementation"s;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_max_size(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &max_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_max_size\n"); );
    // Body
    max_size__Vfuncrtn = this->__PVT__m_max_size;
}

void Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_min_size(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &min_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_min_size\n"); );
    // Body
    min_size__Vfuncrtn = this->__PVT__m_min_size;
}

void Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_is_port(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_port__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_is_port\n"); );
    // Body
    is_port__Vfuncrtn = (0U == this->__PVT__m_port_type);
}

void Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_is_export(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_export__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_is_export\n"); );
    // Body
    is_export__Vfuncrtn = (1U == this->__PVT__m_port_type);
}

void Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_is_imp(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_imp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_is_imp\n"); );
    // Body
    is_imp__Vfuncrtn = (2U == this->__PVT__m_port_type);
}

void Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_size(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__m_imp_list.size();
}

void Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_set_if(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ index) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_set_if\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_get_if(vlProcess, vlSymsp, index, this->__PVT__m_if);
    if ((VlNull{} != this->__PVT__m_if)) {
        this->__PVT__m_def_index = index;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_connect(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea> provider) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_connect\n"); );
    // Locals
    ::CData/*0:0*/ __Vtask_m_check_relationship__Vfuncout_3457;
    __Vtask_m_check_relationship__Vfuncout_3457 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_13__get_full_name;
    ::std::string __VlefCall_12__get_full_name;
    ::std::string __VlefCall_11__get_full_name;
    ::CData/*0:0*/ __VlefCall_10__is_export;
    ::std::string __VlefCall_9__get_full_name;
    ::CData/*0:0*/ __VlefCall_8__is_imp;
    ::std::string __VlefCall_7__get_type_name;
    ::std::string __VlefCall_6__get_type_name;
    ::std::string __VlefCall_5__get_full_name;
    ::std::string __VlefCall_4__get_type_name;
    ::std::string __VlefCall_3__get_full_name;
    ::CData/*0:0*/ __VlefLogOr_2;
    ::IData/*31:0*/ __VlefCall_1__get_state;
    ::IData/*31:0*/ __VlefCall_0__get_state;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> top;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 527)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__end_of_elaboration_ph, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 528)->__VnoInFunc_get_state(vlSymsp, __VlefCall_0__get_state);
        __VlefLogOr_2 = (0x00000010U == __VlefCall_0__get_state);
        if ((1U & (~ (::IData)(__VlefLogOr_2)))) {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__end_of_elaboration_ph, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 529)->__VnoInFunc_get_state(vlSymsp, __VlefCall_1__get_state);
            __VlefLogOr_2 = (0x00000100U == __VlefCall_1__get_state);
        }
        if (VL_UNLIKELY((__VlefLogOr_2))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 530)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Late Connection"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Attempt to connect "s, __VlefCall_3__get_full_name), " (of type "s), __VlefCall_4__get_type_name), ") at or after end_of_elaboration phase.  Ignoring."s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if (VL_UNLIKELY(((VlNull{} == provider)))) {
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 537)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, "Cannot connect to null port handle"s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if (VL_UNLIKELY(((provider == ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea>{this})))) {
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 543)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, "Cannot connect a port instance to itself"s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if (VL_UNLIKELY((((VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 548)
                           ->__PVT__m_if_mask & this->__PVT__m_if_mask) 
                          != this->__PVT__m_if_mask)))) {
            VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 550)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 551)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_7__get_type_name);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 549)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(__VlefCall_5__get_full_name, " (of type "s), __VlefCall_6__get_type_name), ") does not provide the complete interface required of this port (type "s), __VlefCall_7__get_type_name), ")"s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        this->__VnoInFunc_is_imp(vlSymsp, __VlefCall_8__is_imp);
        if (VL_UNLIKELY((__VlefCall_8__is_imp))) {
            VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 561)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 559)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, VL_SFORMATF_N_NX("Cannot call an imp port's connect method. An imp is connected only to the component passed in its constructor. (You attempted to bind this imp to %s)",1
                                                                                , 'S',&(__VlefCall_9__get_full_name)) , 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        this->__VnoInFunc_is_export(vlSymsp, __VlefCall_10__is_export);
        if (__VlefCall_10__is_export) {
            VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 566)->__VnoInFunc_is_port(vlSymsp, __VlefCall_10__is_export);
        }
        if (VL_UNLIKELY((__VlefCall_10__is_export))) {
            VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 569)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 567)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, VL_SFORMATF_N_NX("Cannot connect exports to ports Try calling port.connect(export) instead. (You attempted to bind this export to %s).",1
                                                                                , 'S',&(__VlefCall_11__get_full_name)) , 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        this->__VnoInFunc_m_check_relationship(vlProcess, vlSymsp, provider, __Vtask_m_check_relationship__Vfuncout_3457);
        VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 575)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
        this->__PVT__m_provided_by.atWrite(__VlefCall_12__get_full_name) 
            = provider;
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
        VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 576)->__PVT__m_provided_to.atWrite(__VlefCall_13__get_full_name) 
            = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea>{this};
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_m_check_relationship(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea> provider, ::CData/*0:0*/ &m_check_relationship__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_m_check_relationship\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_11__get_type_name;
    ::std::string __VlefCall_10__get_full_name;
    ::CData/*0:0*/ __VlefCall_9__is_export;
    ::CData/*0:0*/ __VlefCall_8__is_export;
    ::std::string __VlefCall_7__get_type_name;
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefCall_5__is_export;
    ::CData/*0:0*/ __VlefCall_4__is_port;
    ::std::string __VlefCall_3__get_type_name;
    ::std::string __VlefCall_2__get_full_name;
    ::CData/*0:0*/ __VlefCall_1__is_port;
    ::std::string __VlefCall_0__get_type_name;
    ::std::string s;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea> from;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> from_parent;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> to_parent;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> from_gparent;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> to_gparent;
    {
        m_check_relationship__Vfuncrtn = 0U;
        s = ""s;
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
        if (("uvm_analysis_port"s == __VlefCall_0__get_type_name)) {
            m_check_relationship__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        from = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea>{this};
        this->__VnoInFunc_get_parent(vlSymsp, from_parent);
        VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 777)->__VnoInFunc_get_parent(vlSymsp, to_parent);
        if (((VlNull{} == from_parent) | (VlNull{} 
                                          == to_parent))) {
            m_check_relationship__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(from_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 786)->__VnoInFunc_get_parent(vlSymsp, from_gparent);
        VL_NULL_CHECK(to_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 787)->__VnoInFunc_get_parent(vlSymsp, to_gparent);
        VL_NULL_CHECK(from, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 791)->__VnoInFunc_is_port(vlSymsp, __VlefCall_1__is_port);
        if (__VlefCall_1__is_port) {
            VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 791)->__VnoInFunc_is_port(vlSymsp, __VlefCall_1__is_port);
        }
        if (VL_UNLIKELY((((::IData)(__VlefCall_1__is_port) 
                          && (from_gparent != to_parent))))) {
            VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 792)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 793)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(__VlefCall_2__get_full_name, " (of type "s), __VlefCall_3__get_type_name), ") is not up one level of hierarchy from this port. "s), "A port-to-port connection takes the form "s), "child_component.child_port.connect(parent_port)"s);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 797)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Connection Warning"s, s, 0U, ""s, 0U, ""s, 0U);
            m_check_relationship__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            VL_NULL_CHECK(from, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 804)->__VnoInFunc_is_port(vlSymsp, __VlefCall_4__is_port);
            if (__VlefCall_4__is_port) {
                VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 804)->__VnoInFunc_is_export(vlSymsp, __VlefCall_5__is_export);
                if ((1U & (~ (::IData)(__VlefCall_5__is_export)))) {
                    VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 804)->__VnoInFunc_is_imp(vlSymsp, __VlefCall_5__is_export);
                }
                __VlefCall_4__is_port = __VlefCall_5__is_export;
            }
            if (VL_UNLIKELY((((::IData)(__VlefCall_4__is_port) 
                              && (from_gparent != to_gparent))))) {
                VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 806)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 807)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_7__get_type_name);
                s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(__VlefCall_6__get_full_name, " (of type "s), __VlefCall_7__get_type_name), ") is not at the same level of hierarchy as this port. "s), "A port-to-export connection takes the form "s), "component1.port.connect(component2.export)"s);
                VL_NULL_CHECK(this->__PVT__m_comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 811)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Connection Warning"s, s, 0U, ""s, 0U, ""s, 0U);
                m_check_relationship__Vfuncrtn = 0U;
                goto __Vlabel0;
            } else {
                VL_NULL_CHECK(from, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 818)->__VnoInFunc_is_export(vlSymsp, __VlefCall_8__is_export);
                if (__VlefCall_8__is_export) {
                    VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 818)->__VnoInFunc_is_export(vlSymsp, __VlefCall_9__is_export);
                    if ((1U & (~ (::IData)(__VlefCall_9__is_export)))) {
                        VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 818)->__VnoInFunc_is_imp(vlSymsp, __VlefCall_9__is_export);
                    }
                    __VlefCall_8__is_export = __VlefCall_9__is_export;
                }
                if (VL_UNLIKELY((((::IData)(__VlefCall_8__is_export) 
                                  && (from_parent != to_gparent))))) {
                    VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 820)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                    VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 821)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_11__get_type_name);
                    s = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                      VL_CONCATN_NNN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(__VlefCall_10__get_full_name, " (of type "s), __VlefCall_11__get_type_name), ") is not down one level of hierarchy from this export. "s), "An export-to-export or export-to-imp connection takes the form "s), "parent_export.connect(child_component.child_export)"s);
                    VL_NULL_CHECK(this->__PVT__m_comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 825)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Connection Warning"s, s, 0U, ""s, 0U, ""s, 0U);
                    m_check_relationship__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
            }
        }
        m_check_relationship__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_m_add_list(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea> provider) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_m_add_list\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_2__get_full_name;
    ::std::string __VlefCall_1__get_full_name;
    ::IData/*31:0*/ __VlefCall_0__size;
    ::IData/*31:0*/ unnamedblk7__DOT__i;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea> imp;
    unnamedblk7__DOT__i = 0U;
    while (true) {
        VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 841)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if (!(VL_LTS_III(32, unnamedblk7__DOT__i, __VlefCall_0__size))) break;
        VL_NULL_CHECK(provider, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 842)->__VnoInFunc_get_if(vlProcess, vlSymsp, unnamedblk7__DOT__i, imp);
        VL_NULL_CHECK(imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 843)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        if ((1U & (~ (0U != this->__PVT__m_imp_list.exists(__VlefCall_1__get_full_name))))) {
            VL_NULL_CHECK(imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 845)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__PVT__m_imp_list.atWrite(__VlefCall_2__get_full_name) 
                = imp;
        }
        unnamedblk7__DOT__i = ((::IData)(1U) + unnamedblk7__DOT__i);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_resolve_bindings\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_11__size;
    ::IData/*31:0*/ __VlefCall_10__max_size;
    ::IData/*31:0*/ __VlefCall_9__size;
    ::IData/*31:0*/ __VlefCall_8__max_size;
    ::IData/*31:0*/ __VlefCall_7__size;
    ::IData/*31:0*/ __VlefCall_6__max_size;
    ::IData/*31:0*/ __VlefCall_5__min_size;
    ::IData/*31:0*/ __VlefCall_4__size;
    ::IData/*31:0*/ __VlefCall_3__min_size;
    ::IData/*31:0*/ __VlefCall_2__size;
    ::std::string __VlefCall_1__get_full_name;
    ::CData/*0:0*/ __VlefCall_0__is_imp;
    ::std::string unnamedblk8__DOT__nm;
    ::std::string unnamedblk8__DOT__nm__Vnext;
    ::CData/*0:0*/ unnamedblk8__DOT__nm__Vmore;
    unnamedblk8__DOT__nm__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea> unnamedblk8__DOT__unnamedblk9__DOT__port;
    {
        if (this->__PVT__m_resolved) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_is_imp(vlSymsp, __VlefCall_0__is_imp);
        if (__VlefCall_0__is_imp) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            this->__PVT__m_imp_list.atWrite(__VlefCall_1__get_full_name) 
                = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea>{this};
        } else {
            unnamedblk8__DOT__nm__Vmore = (0U != this->__PVT__m_provided_by.first(unnamedblk8__DOT__nm__Vnext));
            while (unnamedblk8__DOT__nm__Vmore) {
                unnamedblk8__DOT__nm = unnamedblk8__DOT__nm__Vnext;
                unnamedblk8__DOT__nm__Vmore = (0U != this->__PVT__m_provided_by.next(unnamedblk8__DOT__nm__Vnext));
                unnamedblk8__DOT__unnamedblk9__DOT__port 
                    = this->__PVT__m_provided_by.at(unnamedblk8__DOT__nm);
                VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__port, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 879)->__VnoInFunc_resolve_bindings(vlProcess, vlSymsp);
                this->__VnoInFunc_m_add_list(vlProcess, vlSymsp, unnamedblk8__DOT__unnamedblk9__DOT__port);
            }
        }
        this->__PVT__m_resolved = 1U;
        this->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
        this->__VnoInFunc_min_size(vlSymsp, __VlefCall_3__min_size);
        if (VL_UNLIKELY((VL_LTS_III(32, __VlefCall_2__size, __VlefCall_3__min_size)))) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_4__size);
            this->__VnoInFunc_min_size(vlSymsp, __VlefCall_5__min_size);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 887)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, VL_SFORMATF_N_NX("connection count of %0d does not meet required minimum of %0d",2
                                                                                , '~',32,__VlefCall_4__size
                                                                                , '~',32,__VlefCall_5__min_size) , 0U, ""s, 0U, ""s, 0U);
        }
        this->__VnoInFunc_max_size(vlSymsp, __VlefCall_6__max_size);
        this->__VnoInFunc_size(vlSymsp, __VlefCall_7__size);
        this->__VnoInFunc_max_size(vlSymsp, __VlefCall_8__max_size);
        if (VL_UNLIKELY((((0xffffffffU != __VlefCall_6__max_size) 
                          & VL_GTS_III(32, __VlefCall_7__size, __VlefCall_8__max_size))))) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_9__size);
            this->__VnoInFunc_max_size(vlSymsp, __VlefCall_10__max_size);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 893)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, VL_SFORMATF_N_NX("connection count of %0d exceeds maximum of %0d",2
                                                                                , '~',32,__VlefCall_9__size
                                                                                , '~',32,__VlefCall_10__max_size) , 0U, ""s, 0U, ""s, 0U);
        }
        this->__VnoInFunc_size(vlSymsp, __VlefCall_11__size);
        if ((0U != __VlefCall_11__size)) {
            this->__VnoInFunc_set_if(vlProcess, vlSymsp, 0U);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_get_if(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ index, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea> &get_if__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__VnoInFunc_get_if\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_2__size;
    ::IData/*31:0*/ __VlefCall_1__size;
    ::IData/*31:0*/ __VlefCall_0__size;
    ::std::string unnamedblk10__DOT__nm;
    ::std::string unnamedblk10__DOT__nm__Vnext;
    ::CData/*0:0*/ unnamedblk10__DOT__nm__Vmore;
    unnamedblk10__DOT__nm__Vmore = 0;
    ::std::string s;
    {
        s = ""s;
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if (VL_UNLIKELY(((0U == __VlefCall_0__size)))) {
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 917)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "get_if"s, "Port size is zero; cannot get interface at any index"s, 0U, ""s, 0U, ""s, 0U);
            get_if__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        this->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
        if (VL_UNLIKELY(((VL_GTS_III(32, 0U, index) 
                          | VL_GTES_III(32, index, __VlefCall_1__size))))) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
            VL_SFORMAT_NX(s,"Index %0d out of range [0,%0d]",2
                          , '~',32,index, '~',32,(__VlefCall_2__size 
                                                  - (::IData)(1U)));
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_port_base.svh", 923)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Connection Error"s, s, 0U, ""s, 0U, ""s, 0U);
            get_if__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        unnamedblk10__DOT__nm__Vmore = (0U != this->__PVT__m_imp_list.first(unnamedblk10__DOT__nm__Vnext));
        while (unnamedblk10__DOT__nm__Vmore) {
            unnamedblk10__DOT__nm = unnamedblk10__DOT__nm__Vnext;
            unnamedblk10__DOT__nm__Vmore = (0U != this->__PVT__m_imp_list.next(unnamedblk10__DOT__nm__Vnext));
            if ((0U == index)) {
                get_if__Vfuncrtn = this->__PVT__m_imp_list
                    .at(unnamedblk10__DOT__nm);
                goto __Vlabel0;
            }
            index = (index - (::IData)(1U));
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_if_mask = 0;
    __PVT__m_def_index = 0;
    __PVT__m_port_type = 0;
    __PVT__m_min_size = 0;
    __PVT__m_max_size = 0;
    __PVT__m_resolved = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::~Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::~\n"); );
}
