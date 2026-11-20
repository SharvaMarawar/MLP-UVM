// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi86d104f9> __Vtask_m_initialize__Vfuncout_1661;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz4eb997f4> __Vfunc_get__Vfuncout_941;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz3554cd4e> __Vfunc_get__Vfuncout_942;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz0415207e> __Vfunc_get__Vfuncout_943;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz0415207e> __Vfunc_get__Vfuncout_944;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_945;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1662;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid_base> unnamedblk1__DOT__cb_base_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT__unnamedblk2__DOT___local_report_object_;
    if ((VlNull{} == this->__Vnontrivs.__PVT__m_inst)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi86d104f9__Vclpkg.__VnoInFunc_m_initialize(vlProcess, vlSymsp, __Vtask_m_initialize__Vfuncout_1661);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid__Tz4eb997f4__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__Vfuncout_941);
        unnamedblk1__DOT__cb_base_type = __Vfunc_get__Vfuncout_941;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid__Tz3554cd4e__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__Vfuncout_942);
        this->__Vnontrivs.__PVT__m_cb_typeid = __Vfunc_get__Vfuncout_942;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid__Tz0415207e__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__Vfuncout_943);
        this->__Vnontrivs.__PVT__m_typeid = __Vfunc_get__Vfuncout_943;
        this->__Vnontrivs.__PVT__m_inst = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877, vlProcess, vlSymsp);
        if (VL_UNLIKELY(((unnamedblk1__DOT__cb_base_type 
                          == this->__Vnontrivs.__PVT__m_cb_typeid)))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_callback.svh:605: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_callbacks__pif2d69877.get.unnamedblk1", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 605, "");
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi86d104f9__Vclpkg.__Vnontrivs.__PVT__m_t_inst 
                = this->__Vnontrivs.__PVT__m_base_inst;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__Vnontrivs.__PVT__typeid_map.atWrite(this->__Vnontrivs.__PVT__m_typeid) 
                = this->__Vnontrivs.__PVT__m_inst;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__Vnontrivs.__PVT__type_map.atWrite(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_b_inst) 
                = this->__Vnontrivs.__PVT__m_typeid;
        } else {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__Tz0415207e__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_944);
            this->__Vnontrivs.__PVT__m_base_inst = __Vfunc_get__Vfuncout_944;
            VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_base_inst, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 613)->__PVT__m_this_type.push_back(this->__Vnontrivs.__PVT__m_inst);
        }
        if ((VlNull{} == this->__Vnontrivs.__PVT__m_inst)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_945);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_945;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1662);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1662;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 617)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 617)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "CB/INTERNAL"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 617)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "CB/INTERNAL"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "CB/INTERNAL"s, "get(): m_inst is null"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh"s, 0x00000269U, ""s, 1U);
            }
        }
    }
    get__Vfuncrtn = this->__Vnontrivs.__PVT__m_inst;
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg::__VnoInFunc_m_register_pair(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string tname, ::std::string cbname, ::CData/*0:0*/ &m_register_pair__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg::__VnoInFunc_m_register_pair\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877> inst;
    m_register_pair__Vfuncrtn = 0U;
    this->__VnoInFunc_get(vlProcess, vlSymsp, inst);
    this->__Vnontrivs.__PVT__m_typename = tname;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi86d104f9__Vclpkg.__Vnontrivs.__PVT__m_typename 
        = tname;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__Vnontrivs.__PVT__typename 
        = tname;
    this->__Vnontrivs.__PVT__m_cb_typename = cbname;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__Vnontrivs.__PVT__typename 
        = cbname;
    VL_NULL_CHECK(inst, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 640)->__PVT__m_registered = 1U;
    m_register_pair__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg::__VnoInFunc_add(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg::__VnoInFunc_add\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877> __Vtask_get__Vfuncout_1663;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1666;
    __Vtask_uvm_report_error__verbosity_1666 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1668;
    __Vtask_uvm_report_error__line_1668 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1670;
    __Vtask_uvm_report_error__report_enabled_checked_1670 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_946;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1671;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1674;
    __Vtask_uvm_report_warning__verbosity_1674 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1676;
    __Vtask_uvm_report_warning__line_1676 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1678;
    __Vtask_uvm_report_warning__report_enabled_checked_1678 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_947;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1679;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1682;
    __Vtask_uvm_report_warning__verbosity_1682 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1684;
    __Vtask_uvm_report_warning__line_1684 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1686;
    __Vtask_uvm_report_warning__report_enabled_checked_1686 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_948;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1687;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1690;
    __Vtask_uvm_report_warning__verbosity_1690 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1692;
    __Vtask_uvm_report_warning__line_1692 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1694;
    __Vtask_uvm_report_warning__report_enabled_checked_1694 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_949;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1695;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_12__get_full_name;
    ::std::string __VlefCall_11__get_name;
    ::IData/*31:0*/ __VlefCall_10__m_cb_find;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> __VlefCall_9__get;
    ::IData/*31:0*/ __VlefCall_8__size;
    ::IData/*31:0*/ __VlefCall_5__size;
    ::std::string __VlefCall_4__get_name;
    ::IData/*31:0*/ __VlefCall_3__m_cb_find;
    ::std::string __VlefCall_2__get_type_name;
    ::std::string __VlefCall_1__get_name;
    ::CData/*0:0*/ __VlefCall_0__check_registration;
    ::IData/*31:0*/ unnamedblk3__DOT__unnamedblk6__DOT__i;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> q;
    ::std::string nm;
    ::std::string tnm;
    {
        nm = ""s;
        tnm = ""s;
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__Vfuncout_1663);
        if (VL_UNLIKELY(((VlNull{} == cb)))) {
            if ((VlNull{} == obj)) {
                nm = "(*)"s;
            } else {
                VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 690)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, nm);
            }
            if ((""s != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__Tz0415207e__Vclpkg.__Vnontrivs.__PVT__m_typename)) {
                tnm = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__Tz0415207e__Vclpkg.__Vnontrivs.__PVT__m_typename;
            } else if ((VlNull{} != obj)) {
                VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 701)->__VnoInFunc_get_type_name(vlSymsp, tnm);
            } else {
                tnm = "uvm_object"s;
            }
            __Vtask_uvm_report_error__report_enabled_checked_1670 = 0U;
            this->__Vnontrivs.__Vtask_uvm_report_error__context_name_1669 = ""s;
            __Vtask_uvm_report_error__line_1668 = 0U;
            this->__Vnontrivs.__Vtask_uvm_report_error__filename_1667 = ""s;
            __Vtask_uvm_report_error__verbosity_1666 = 0U;
            this->__Vnontrivs.__Vtask_uvm_report_error__message_1665 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Null callback object cannot be registered with object "s, nm), " ("s), tnm), ")"s));
            this->__Vnontrivs.__Vtask_uvm_report_error__id_1664 = "CBUNREG"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_946);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_946;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1671);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1671;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vnontrivs.__Vtask_uvm_report_error__id_1664, this->__Vnontrivs.__Vtask_uvm_report_error__message_1665, __Vtask_uvm_report_error__verbosity_1666, this->__Vnontrivs.__Vtask_uvm_report_error__filename_1667, __Vtask_uvm_report_error__line_1668, this->__Vnontrivs.__Vtask_uvm_report_error__context_name_1669, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1670));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_base_inst, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 716)->__VnoInFunc_check_registration(vlSymsp, obj, cb, __VlefCall_0__check_registration);
        if (VL_UNLIKELY(((1U & (~ (::IData)(__VlefCall_0__check_registration)))))) {
            if ((VlNull{} == obj)) {
                nm = "(*)"s;
            } else {
                VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 725)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, nm);
            }
            if ((""s != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__Tz0415207e__Vclpkg.__Vnontrivs.__PVT__m_typename)) {
                tnm = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__Tz0415207e__Vclpkg.__Vnontrivs.__PVT__m_typename;
            } else if ((VlNull{} != obj)) {
                VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 736)->__VnoInFunc_get_type_name(vlSymsp, tnm);
            } else {
                tnm = "uvm_object"s;
            }
            VL_NULL_CHECK(cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 746)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            VL_NULL_CHECK(cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 747)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
            __Vtask_uvm_report_warning__report_enabled_checked_1678 = 0U;
            this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1677 = ""s;
            __Vtask_uvm_report_warning__line_1676 = 0U;
            this->__Vnontrivs.__Vtask_uvm_report_warning__filename_1675 = ""s;
            __Vtask_uvm_report_warning__verbosity_1674 = 0U;
            this->__Vnontrivs.__Vtask_uvm_report_warning__message_1673 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Callback "s, __VlefCall_1__get_name), " cannot be registered with object "s), nm), " because callback type "s), __VlefCall_2__get_type_name), " is not registered with object type "s), tnm));
            this->__Vnontrivs.__Vtask_uvm_report_warning__id_1672 = "CBUNREG"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_947);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_947;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1679);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1679;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vnontrivs.__Vtask_uvm_report_warning__id_1672, this->__Vnontrivs.__Vtask_uvm_report_warning__message_1673, __Vtask_uvm_report_warning__verbosity_1674, this->__Vnontrivs.__Vtask_uvm_report_warning__filename_1675, __Vtask_uvm_report_warning__line_1676, this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1677, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1678));
        }
        if ((VlNull{} == obj)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi86d104f9__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi86d104f9__Vclpkg.__Vnontrivs.__PVT__m_tw_cb_q, cb, __VlefCall_3__m_cb_find);
            if (VL_UNLIKELY(((0xffffffffU != __VlefCall_3__m_cb_find)))) {
                tnm = ((""s != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__Tz0415207e__Vclpkg.__Vnontrivs.__PVT__m_typename)
                        ? vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__Tz0415207e__Vclpkg.__Vnontrivs.__PVT__m_typename
                        : "uvm_object"s);
                VL_NULL_CHECK(cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 766)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                __Vtask_uvm_report_warning__report_enabled_checked_1686 = 0U;
                this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1685 = ""s;
                __Vtask_uvm_report_warning__line_1684 = 0U;
                this->__Vnontrivs.__Vtask_uvm_report_warning__filename_1683 = ""s;
                __Vtask_uvm_report_warning__verbosity_1682 = 0U;
                this->__Vnontrivs.__Vtask_uvm_report_warning__message_1681 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("Callback object "s, __VlefCall_4__get_name), " is already registered with type "s), tnm));
                this->__Vnontrivs.__Vtask_uvm_report_warning__id_1680 = "CBPREG"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_948);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_948;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1687);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1687;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vnontrivs.__Vtask_uvm_report_warning__id_1680, this->__Vnontrivs.__Vtask_uvm_report_warning__message_1681, __Vtask_uvm_report_warning__verbosity_1682, this->__Vnontrivs.__Vtask_uvm_report_warning__filename_1683, __Vtask_uvm_report_warning__line_1684, this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1685, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1686));
            } else {
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi86d104f9__Vclpkg.__Vnontrivs.__PVT__m_t_inst, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 772)->__VnoInFunc_m_add_tw_cbs(vlProcess, vlSymsp, cb, ordering);
            }
        } else {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 781)->__VnoInFunc_get(vlSymsp, obj, q);
            if ((VlNull{} == q)) {
                q = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4, vlProcess, vlSymsp, ""s);
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 785)->__VnoInFunc_add(vlSymsp, obj, q);
            }
            VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 788)->__VnoInFunc_size(vlSymsp, __VlefCall_5__size);
            if ((0U == __VlefCall_5__size)) {
                unnamedblk3__DOT__unnamedblk6__DOT__i = 0U;
                unnamedblk3__DOT__unnamedblk6__DOT__i = 0U;
                while (true) {
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi86d104f9__Vclpkg.__Vnontrivs.__PVT__m_tw_cb_q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 804)->__VnoInFunc_size(vlSymsp, __VlefCall_8__size);
                    if (!(VL_LTS_III(32, unnamedblk3__DOT__unnamedblk6__DOT__i, __VlefCall_8__size))) break;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi86d104f9__Vclpkg.__Vnontrivs.__PVT__m_tw_cb_q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 806)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk3__DOT__unnamedblk6__DOT__i, __VlefCall_9__get);
                    VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 806)->__VnoInFunc_push_back(vlSymsp, __VlefCall_9__get);
                    unnamedblk3__DOT__unnamedblk6__DOT__i 
                        = ((::IData)(1U) + unnamedblk3__DOT__unnamedblk6__DOT__i);
                }
            }
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi86d104f9__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, __VlefCall_10__m_cb_find);
            if (VL_UNLIKELY(((0xffffffffU != __VlefCall_10__m_cb_find)))) {
                VL_NULL_CHECK(cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 813)->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 814)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                __Vtask_uvm_report_warning__report_enabled_checked_1694 = 0U;
                this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1693 = ""s;
                __Vtask_uvm_report_warning__line_1692 = 0U;
                this->__Vnontrivs.__Vtask_uvm_report_warning__filename_1691 = ""s;
                __Vtask_uvm_report_warning__verbosity_1690 = 0U;
                this->__Vnontrivs.__Vtask_uvm_report_warning__message_1689 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Callback object "s, __VlefCall_11__get_name), " is already registered"s), " with object "s), __VlefCall_12__get_full_name));
                this->__Vnontrivs.__Vtask_uvm_report_warning__id_1688 = "CBPREG"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_949);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_949;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1695);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1695;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vnontrivs.__Vtask_uvm_report_warning__id_1688, this->__Vnontrivs.__Vtask_uvm_report_warning__message_1689, __Vtask_uvm_report_warning__verbosity_1690, this->__Vnontrivs.__Vtask_uvm_report_warning__filename_1691, __Vtask_uvm_report_warning__line_1692, this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1693, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1694));
            } else if ((0U == ordering)) {
                VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 819)->__VnoInFunc_push_back(vlSymsp, cb);
            } else {
                VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 824)->__VnoInFunc_push_front(vlSymsp, cb);
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg::__VnoInFunc_delete(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg::__VnoInFunc_delete\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877> __Vtask_get__Vfuncout_1696;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1699;
    __Vtask_uvm_report_warning__verbosity_1699 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1701;
    __Vtask_uvm_report_warning__line_1701 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1703;
    __Vtask_uvm_report_warning__report_enabled_checked_1703 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_950;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1704;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_0__get_name;
    ::std::string unnamedblk8__DOT__nm;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> b_obj;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> q;
    ::CData/*0:0*/ found;
    ::IData/*31:0*/ pos;
    b_obj = obj;
    found = 0U;
    pos = 0U;
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__Vfuncout_1696);
    if ((VlNull{} == obj)) {
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi86d104f9__Vclpkg.__Vnontrivs.__PVT__m_t_inst, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 896)->__VnoInFunc_m_delete_tw_cbs(vlProcess, vlSymsp, cb, found);
    } else {
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 901)->__VnoInFunc_get(vlSymsp, b_obj, q);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi86d104f9__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, pos);
        if ((0xffffffffU != pos)) {
            VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 904)->__VnoInFunc_delete(vlProcess, vlSymsp, pos);
            found = 1U;
        }
    }
    if (VL_UNLIKELY(((1U & (~ (::IData)(found)))))) {
        unnamedblk8__DOT__nm = ""s;
        if ((VlNull{} == obj)) {
            unnamedblk8__DOT__nm = "(*)"s;
        } else {
            VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 914)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk8__DOT__nm);
        }
        VL_NULL_CHECK(cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 917)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        __Vtask_uvm_report_warning__report_enabled_checked_1703 = 0U;
        this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1702 = ""s;
        __Vtask_uvm_report_warning__line_1701 = 0U;
        this->__Vnontrivs.__Vtask_uvm_report_warning__filename_1700 = ""s;
        __Vtask_uvm_report_warning__verbosity_1699 = 0U;
        this->__Vnontrivs.__Vtask_uvm_report_warning__message_1698 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN(
                                                                              VL_CONCATN_NNN("Callback "s, __VlefCall_0__get_name), " cannot be removed from object "s), unnamedblk8__DOT__nm), " because it is not currently registered to that object."s));
        this->__Vnontrivs.__Vtask_uvm_report_warning__id_1697 = "CBUNREG"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_950);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_950;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1704);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1704;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vnontrivs.__Vtask_uvm_report_warning__id_1697, this->__Vnontrivs.__Vtask_uvm_report_warning__message_1698, __Vtask_uvm_report_warning__verbosity_1699, this->__Vnontrivs.__Vtask_uvm_report_warning__filename_1700, __Vtask_uvm_report_warning__line_1701, this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1702, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1703));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg::__VnoInFunc_m_get_q(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> &q, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg::__VnoInFunc_m_get_q\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> __VlefCall_1__m_get_tw_cb_q;
    ::IData/*31:0*/ __VlefCall_0__exists;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 965)->__VnoInFunc_exists(vlSymsp, obj, __VlefCall_0__exists);
    if ((0U != __VlefCall_0__exists)) {
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 969)->__VnoInFunc_get(vlSymsp, obj, q);
        if ((VlNull{} == q)) {
            q = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4, vlProcess, vlSymsp, ""s);
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 972)->__VnoInFunc_add(vlSymsp, obj, q);
        }
    } else {
        if ((VlNull{} == obj)) {
            __VlefCall_1__m_get_tw_cb_q = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi86d104f9__Vclpkg.__Vnontrivs.__PVT__m_tw_cb_q;
        } else {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi86d104f9__Vclpkg.__Vnontrivs.__PVT__m_t_inst, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 966)->__VnoInFunc_m_get_tw_cb_q(vlSymsp, obj, __VlefCall_1__m_get_tw_cb_q);
        }
        q = __VlefCall_1__m_get_tw_cb_q;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg::__VnoInFunc_get_first(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &itr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> &get_first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg::__VnoInFunc_get_first\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877> __Vtask_get__Vfuncout_1705;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_3__callback_mode;
    ::IData/*31:0*/ __VlefExpr_2;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> __VlefCall_1__get;
    ::IData/*31:0*/ __VlefCall_0__size;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> q;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__Vfuncout_1705);
        this->__VnoInFunc_m_get_q(vlProcess, vlSymsp, q, obj);
        itr = 0U;
        while (true) {
            VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 996)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, itr, __VlefCall_0__size))) break;
            VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 998)->__VnoInFunc_get(vlProcess, vlSymsp, itr, __VlefCall_1__get);
            __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__get, cb);
            __VlefCall_3__callback_mode = (0U != __VlefExpr_2);
            if (__VlefCall_3__callback_mode) {
                VL_NULL_CHECK(cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 998)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __VlefCall_3__callback_mode);
            }
            if (__VlefCall_3__callback_mode) {
                get_first__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = ((::IData)(1U) + itr);
        }
        get_first__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg::__VnoInFunc_get_next(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &itr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> &get_next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877__Vclpkg::__VnoInFunc_get_next\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877> __Vtask_get__Vfuncout_1706;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_3__callback_mode;
    ::IData/*31:0*/ __VlefExpr_2;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> __VlefCall_1__get;
    ::IData/*31:0*/ __VlefCall_0__size;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> q;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__Vfuncout_1706);
        this->__VnoInFunc_m_get_q(vlProcess, vlSymsp, q, obj);
        itr = ((::IData)(1U) + itr);
        while (true) {
            VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 1059)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, itr, __VlefCall_0__size))) break;
            VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 1061)->__VnoInFunc_get(vlProcess, vlSymsp, itr, __VlefCall_1__get);
            __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__get, cb);
            __VlefCall_3__callback_mode = (0U != __VlefExpr_2);
            if (__VlefCall_3__callback_mode) {
                VL_NULL_CHECK(cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 1061)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __VlefCall_3__callback_mode);
            }
            if (__VlefCall_3__callback_mode) {
                get_next__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = ((::IData)(1U) + itr);
        }
        get_next__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::__VnoInFunc_m_is_registered(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::CData/*0:0*/ &m_is_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::__VnoInFunc_m_is_registered\n"); );
    // Body
    ::CData/*0:0*/ __VlefCall_0__m_is_for_me;
    m_is_registered__Vfuncrtn = 0U;
    this->__VnoInFunc_m_is_for_me(vlSymsp, cb, __VlefCall_0__m_is_for_me);
    if (__VlefCall_0__m_is_for_me) {
        this->__VnoInFunc_m_am_i_a(vlSymsp, obj, __VlefCall_0__m_is_for_me);
    }
    if (__VlefCall_0__m_is_for_me) {
        m_is_registered__Vfuncrtn = this->__PVT__m_registered;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::__VnoInFunc_m_is_for_me(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::CData/*0:0*/ &m_is_for_me__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::__VnoInFunc_m_is_for_me\n"); );
    // Body
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> this_cb;
    __VlefExpr_0 = VL_CAST_DYNAMIC(cb, this_cb);
    m_is_for_me__Vfuncrtn = (1U & __VlefExpr_0);
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi86d104f9::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_registered = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::~Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pif2d69877::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_registered:" + VL_TO_STRING(__PVT__m_registered);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi86d104f9::to_string_middle();
    return (out);
}
