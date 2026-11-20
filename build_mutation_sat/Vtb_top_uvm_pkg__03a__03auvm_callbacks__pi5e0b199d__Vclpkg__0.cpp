// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi854bcbc1> __Vtask_m_initialize__Vfuncout_1821;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz4eb997f4> __Vfunc_get__Vfuncout_1042;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz487bf0fc> __Vfunc_get__Vfuncout_1043;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz1180cad6> __Vfunc_get__Vfuncout_1044;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz1180cad6> __Vfunc_get__Vfuncout_1045;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1046;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1822;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid_base> unnamedblk1__DOT__cb_base_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT__unnamedblk2__DOT___local_report_object_;
    if ((VlNull{} == this->__Vnontrivs.__PVT__m_inst)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi854bcbc1__Vclpkg.__VnoInFunc_m_initialize(vlProcess, vlSymsp, __Vtask_m_initialize__Vfuncout_1821);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid__Tz4eb997f4__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__Vfuncout_1042);
        unnamedblk1__DOT__cb_base_type = __Vfunc_get__Vfuncout_1042;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid__Tz487bf0fc__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__Vfuncout_1043);
        this->__Vnontrivs.__PVT__m_cb_typeid = __Vfunc_get__Vfuncout_1043;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid__Tz1180cad6__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__Vfuncout_1044);
        this->__Vnontrivs.__PVT__m_typeid = __Vfunc_get__Vfuncout_1044;
        this->__Vnontrivs.__PVT__m_inst = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d, vlProcess, vlSymsp);
        if (VL_UNLIKELY(((unnamedblk1__DOT__cb_base_type 
                          == this->__Vnontrivs.__PVT__m_cb_typeid)))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_callback.svh:605: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_callbacks__pi5e0b199d.get.unnamedblk1", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 605, "");
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi854bcbc1__Vclpkg.__Vnontrivs.__PVT__m_t_inst 
                = this->__Vnontrivs.__PVT__m_base_inst;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__Vnontrivs.__PVT__typeid_map.atWrite(this->__Vnontrivs.__PVT__m_typeid) 
                = this->__Vnontrivs.__PVT__m_inst;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__Vnontrivs.__PVT__type_map.atWrite(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_b_inst) 
                = this->__Vnontrivs.__PVT__m_typeid;
        } else {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__Tz1180cad6__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1045);
            this->__Vnontrivs.__PVT__m_base_inst = __Vfunc_get__Vfuncout_1045;
            VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_base_inst, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 613)->__PVT__m_this_type.push_back(this->__Vnontrivs.__PVT__m_inst);
        }
        if ((VlNull{} == this->__Vnontrivs.__PVT__m_inst)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1046);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1046;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1822);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1822;
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

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg::__VnoInFunc_m_register_pair(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string tname, ::std::string cbname, ::CData/*0:0*/ &m_register_pair__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg::__VnoInFunc_m_register_pair\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d> inst;
    m_register_pair__Vfuncrtn = 0U;
    this->__VnoInFunc_get(vlProcess, vlSymsp, inst);
    this->__Vnontrivs.__PVT__m_typename = tname;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi854bcbc1__Vclpkg.__Vnontrivs.__PVT__m_typename 
        = tname;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__Vnontrivs.__PVT__typename 
        = tname;
    this->__Vnontrivs.__PVT__m_cb_typename = cbname;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__Vnontrivs.__PVT__typename 
        = cbname;
    VL_NULL_CHECK(inst, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 640)->__PVT__m_registered = 1U;
    m_register_pair__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg::__VnoInFunc_add(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg::__VnoInFunc_add\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d> __Vtask_get__Vfuncout_1823;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1826;
    __Vtask_uvm_report_error__verbosity_1826 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1828;
    __Vtask_uvm_report_error__line_1828 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1830;
    __Vtask_uvm_report_error__report_enabled_checked_1830 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1047;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1831;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1834;
    __Vtask_uvm_report_warning__verbosity_1834 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1836;
    __Vtask_uvm_report_warning__line_1836 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1838;
    __Vtask_uvm_report_warning__report_enabled_checked_1838 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1048;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1839;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1842;
    __Vtask_uvm_report_warning__verbosity_1842 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1844;
    __Vtask_uvm_report_warning__line_1844 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1846;
    __Vtask_uvm_report_warning__report_enabled_checked_1846 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1049;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1847;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1850;
    __Vtask_uvm_report_warning__verbosity_1850 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1852;
    __Vtask_uvm_report_warning__line_1852 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1854;
    __Vtask_uvm_report_warning__report_enabled_checked_1854 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1050;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1855;
    // Body
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
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__Vfuncout_1823);
        if (VL_UNLIKELY(((VlNull{} == cb)))) {
            if ((VlNull{} == obj)) {
                nm = "(*)"s;
            } else {
                VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 690)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, nm);
            }
            if ((""s != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__Tz1180cad6__Vclpkg.__Vnontrivs.__PVT__m_typename)) {
                tnm = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__Tz1180cad6__Vclpkg.__Vnontrivs.__PVT__m_typename;
            } else if ((VlNull{} != obj)) {
                VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 701)->__VnoInFunc_get_type_name(vlSymsp, tnm);
            } else {
                tnm = "uvm_object"s;
            }
            __Vtask_uvm_report_error__report_enabled_checked_1830 = 0U;
            this->__Vnontrivs.__Vtask_uvm_report_error__context_name_1829 = ""s;
            __Vtask_uvm_report_error__line_1828 = 0U;
            this->__Vnontrivs.__Vtask_uvm_report_error__filename_1827 = ""s;
            __Vtask_uvm_report_error__verbosity_1826 = 0U;
            this->__Vnontrivs.__Vtask_uvm_report_error__message_1825 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Null callback object cannot be registered with object "s, nm), " ("s), tnm), ")"s));
            this->__Vnontrivs.__Vtask_uvm_report_error__id_1824 = "CBUNREG"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1047);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1047;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1831);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1831;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vnontrivs.__Vtask_uvm_report_error__id_1824, this->__Vnontrivs.__Vtask_uvm_report_error__message_1825, __Vtask_uvm_report_error__verbosity_1826, this->__Vnontrivs.__Vtask_uvm_report_error__filename_1827, __Vtask_uvm_report_error__line_1828, this->__Vnontrivs.__Vtask_uvm_report_error__context_name_1829, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1830));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_base_inst, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 716)->__VnoInFunc_check_registration(vlSymsp, obj, cb, __VlefCall_0__check_registration);
        if (VL_UNLIKELY(((1U & (~ (::IData)(__VlefCall_0__check_registration)))))) {
            if ((VlNull{} == obj)) {
                nm = "(*)"s;
            } else {
                VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 725)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, nm);
            }
            if ((""s != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__Tz1180cad6__Vclpkg.__Vnontrivs.__PVT__m_typename)) {
                tnm = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__Tz1180cad6__Vclpkg.__Vnontrivs.__PVT__m_typename;
            } else if ((VlNull{} != obj)) {
                VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 736)->__VnoInFunc_get_type_name(vlSymsp, tnm);
            } else {
                tnm = "uvm_object"s;
            }
            VL_NULL_CHECK(cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 746)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            VL_NULL_CHECK(cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 747)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
            __Vtask_uvm_report_warning__report_enabled_checked_1838 = 0U;
            this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1837 = ""s;
            __Vtask_uvm_report_warning__line_1836 = 0U;
            this->__Vnontrivs.__Vtask_uvm_report_warning__filename_1835 = ""s;
            __Vtask_uvm_report_warning__verbosity_1834 = 0U;
            this->__Vnontrivs.__Vtask_uvm_report_warning__message_1833 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Callback "s, __VlefCall_1__get_name), " cannot be registered with object "s), nm), " because callback type "s), __VlefCall_2__get_type_name), " is not registered with object type "s), tnm));
            this->__Vnontrivs.__Vtask_uvm_report_warning__id_1832 = "CBUNREG"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1048);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1048;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1839);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1839;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vnontrivs.__Vtask_uvm_report_warning__id_1832, this->__Vnontrivs.__Vtask_uvm_report_warning__message_1833, __Vtask_uvm_report_warning__verbosity_1834, this->__Vnontrivs.__Vtask_uvm_report_warning__filename_1835, __Vtask_uvm_report_warning__line_1836, this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1837, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1838));
        }
        if ((VlNull{} == obj)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi854bcbc1__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi854bcbc1__Vclpkg.__Vnontrivs.__PVT__m_tw_cb_q, cb, __VlefCall_3__m_cb_find);
            if (VL_UNLIKELY(((0xffffffffU != __VlefCall_3__m_cb_find)))) {
                tnm = ((""s != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__Tz1180cad6__Vclpkg.__Vnontrivs.__PVT__m_typename)
                        ? vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__Tz1180cad6__Vclpkg.__Vnontrivs.__PVT__m_typename
                        : "uvm_object"s);
                VL_NULL_CHECK(cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 766)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                __Vtask_uvm_report_warning__report_enabled_checked_1846 = 0U;
                this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1845 = ""s;
                __Vtask_uvm_report_warning__line_1844 = 0U;
                this->__Vnontrivs.__Vtask_uvm_report_warning__filename_1843 = ""s;
                __Vtask_uvm_report_warning__verbosity_1842 = 0U;
                this->__Vnontrivs.__Vtask_uvm_report_warning__message_1841 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("Callback object "s, __VlefCall_4__get_name), " is already registered with type "s), tnm));
                this->__Vnontrivs.__Vtask_uvm_report_warning__id_1840 = "CBPREG"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1049);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1049;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1847);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1847;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vnontrivs.__Vtask_uvm_report_warning__id_1840, this->__Vnontrivs.__Vtask_uvm_report_warning__message_1841, __Vtask_uvm_report_warning__verbosity_1842, this->__Vnontrivs.__Vtask_uvm_report_warning__filename_1843, __Vtask_uvm_report_warning__line_1844, this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1845, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1846));
            } else {
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi854bcbc1__Vclpkg.__Vnontrivs.__PVT__m_t_inst, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 772)->__VnoInFunc_m_add_tw_cbs(vlProcess, vlSymsp, cb, ordering);
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
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi854bcbc1__Vclpkg.__Vnontrivs.__PVT__m_tw_cb_q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 804)->__VnoInFunc_size(vlSymsp, __VlefCall_8__size);
                    if (!(VL_LTS_III(32, unnamedblk3__DOT__unnamedblk6__DOT__i, __VlefCall_8__size))) break;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi854bcbc1__Vclpkg.__Vnontrivs.__PVT__m_tw_cb_q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 806)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk3__DOT__unnamedblk6__DOT__i, __VlefCall_9__get);
                    VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 806)->__VnoInFunc_push_back(vlSymsp, __VlefCall_9__get);
                    unnamedblk3__DOT__unnamedblk6__DOT__i 
                        = ((::IData)(1U) + unnamedblk3__DOT__unnamedblk6__DOT__i);
                }
            }
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi854bcbc1__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, __VlefCall_10__m_cb_find);
            if (VL_UNLIKELY(((0xffffffffU != __VlefCall_10__m_cb_find)))) {
                VL_NULL_CHECK(cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 813)->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 814)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                __Vtask_uvm_report_warning__report_enabled_checked_1854 = 0U;
                this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1853 = ""s;
                __Vtask_uvm_report_warning__line_1852 = 0U;
                this->__Vnontrivs.__Vtask_uvm_report_warning__filename_1851 = ""s;
                __Vtask_uvm_report_warning__verbosity_1850 = 0U;
                this->__Vnontrivs.__Vtask_uvm_report_warning__message_1849 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Callback object "s, __VlefCall_11__get_name), " is already registered"s), " with object "s), __VlefCall_12__get_full_name));
                this->__Vnontrivs.__Vtask_uvm_report_warning__id_1848 = "CBPREG"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1050);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1050;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1855);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1855;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vnontrivs.__Vtask_uvm_report_warning__id_1848, this->__Vnontrivs.__Vtask_uvm_report_warning__message_1849, __Vtask_uvm_report_warning__verbosity_1850, this->__Vnontrivs.__Vtask_uvm_report_warning__filename_1851, __Vtask_uvm_report_warning__line_1852, this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1853, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1854));
            } else if ((0U == ordering)) {
                VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 819)->__VnoInFunc_push_back(vlSymsp, cb);
            } else {
                VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 824)->__VnoInFunc_push_front(vlSymsp, cb);
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg::__VnoInFunc_delete(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg::__VnoInFunc_delete\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d> __Vtask_get__Vfuncout_1856;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1859;
    __Vtask_uvm_report_warning__verbosity_1859 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1861;
    __Vtask_uvm_report_warning__line_1861 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1863;
    __Vtask_uvm_report_warning__report_enabled_checked_1863 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1051;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1864;
    // Body
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
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__Vfuncout_1856);
    if ((VlNull{} == obj)) {
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi854bcbc1__Vclpkg.__Vnontrivs.__PVT__m_t_inst, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 896)->__VnoInFunc_m_delete_tw_cbs(vlProcess, vlSymsp, cb, found);
    } else {
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 901)->__VnoInFunc_get(vlSymsp, b_obj, q);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi854bcbc1__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, pos);
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
        __Vtask_uvm_report_warning__report_enabled_checked_1863 = 0U;
        this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1862 = ""s;
        __Vtask_uvm_report_warning__line_1861 = 0U;
        this->__Vnontrivs.__Vtask_uvm_report_warning__filename_1860 = ""s;
        __Vtask_uvm_report_warning__verbosity_1859 = 0U;
        this->__Vnontrivs.__Vtask_uvm_report_warning__message_1858 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN(
                                                                              VL_CONCATN_NNN("Callback "s, __VlefCall_0__get_name), " cannot be removed from object "s), unnamedblk8__DOT__nm), " because it is not currently registered to that object."s));
        this->__Vnontrivs.__Vtask_uvm_report_warning__id_1857 = "CBUNREG"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1051);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1051;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1864);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1864;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vnontrivs.__Vtask_uvm_report_warning__id_1857, this->__Vnontrivs.__Vtask_uvm_report_warning__message_1858, __Vtask_uvm_report_warning__verbosity_1859, this->__Vnontrivs.__Vtask_uvm_report_warning__filename_1860, __Vtask_uvm_report_warning__line_1861, this->__Vnontrivs.__Vtask_uvm_report_warning__context_name_1862, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1863));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg::__VnoInFunc_get_all(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_callback_>> &all_callbacks, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d__Vclpkg::__VnoInFunc_get_all\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d> __Vtask_get__Vfuncout_1865;
    ::IData/*31:0*/ __Vtask_get_inst_id__Vfuncout_1866;
    __Vtask_get_inst_id__Vfuncout_1866 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefExpr_7;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> __VlefCall_6__get;
    ::IData/*31:0*/ __VlefCall_5__size;
    ::IData/*31:0*/ __VlefExpr_4;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> __VlefCall_3__get;
    ::IData/*31:0*/ __VlefCall_2__size;
    ::CData/*0:0*/ __VlefLogOr_1;
    ::IData/*31:0*/ __VlefCall_0__exists;
    ::IData/*31:0*/ unnamedblk10__DOT__qi;
    ::IData/*31:0*/ unnamedblk11__DOT__qi;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> q;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_callback_> cb;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_callback_>> callbacks_to_append;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_callback_>> unique_callbacks_to_append;
    callbacks_to_append.clear();
    unique_callbacks_to_append.clear();
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__Vfuncout_1865);
    __VlefLogOr_1 = (VlNull{} == obj);
    if ((1U & (~ (::IData)(__VlefLogOr_1)))) {
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 1113)->__VnoInFunc_exists(vlSymsp, obj, __VlefCall_0__exists);
        __VlefLogOr_1 = (1U & (~ (0U != __VlefCall_0__exists)));
    }
    if (__VlefLogOr_1) {
        unnamedblk10__DOT__qi = 0U;
        unnamedblk10__DOT__qi = 0U;
        while (true) {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi854bcbc1__Vclpkg.__Vnontrivs.__PVT__m_tw_cb_q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 1115)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
            if (!(VL_LTS_III(32, unnamedblk10__DOT__qi, __VlefCall_2__size))) break;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi854bcbc1__Vclpkg.__Vnontrivs.__PVT__m_tw_cb_q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 1117)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk10__DOT__qi, __VlefCall_3__get);
            __VlefExpr_4 = VL_CAST_DYNAMIC(__VlefCall_3__get, cb);
            if ((0U != __VlefExpr_4)) {
                callbacks_to_append.push_back(cb);
            }
            unnamedblk10__DOT__qi = ((::IData)(1U) 
                                     + unnamedblk10__DOT__qi);
        }
    } else {
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 1128)->__VnoInFunc_get(vlSymsp, obj, q);
        unnamedblk11__DOT__qi = 0U;
        unnamedblk11__DOT__qi = 0U;
        while (true) {
            VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 1129)->__VnoInFunc_size(vlSymsp, __VlefCall_5__size);
            if (!(VL_LTS_III(32, unnamedblk11__DOT__qi, __VlefCall_5__size))) break;
            VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 1131)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk11__DOT__qi, __VlefCall_6__get);
            __VlefExpr_7 = VL_CAST_DYNAMIC(__VlefCall_6__get, cb);
            if ((0U != __VlefExpr_7)) {
                callbacks_to_append.push_back(cb);
            }
            unnamedblk11__DOT__qi = ((::IData)(1U) 
                                     + unnamedblk11__DOT__qi);
        }
    }
    unique_callbacks_to_append = callbacks_to_append.unique(
                                                            [&](
                                                                ::IData/*31:0*/ cb___DOT__index, 
                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_callback_> cb_) -> 
                                                            ::IData/*31:0*/ {
            return (([&]() {
                        VL_NULL_CHECK(cb_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 1141)
                     ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__Vfuncout_1866);
                    }(), __Vtask_get_inst_id__Vfuncout_1866));
        }
    );
    all_callbacks = ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_callback_>>{
        all_callbacks,
        unique_callbacks_to_append
    };
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::__VnoInFunc_m_is_registered(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::CData/*0:0*/ &m_is_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::__VnoInFunc_m_is_registered\n"); );
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

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::__VnoInFunc_m_is_for_me(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::CData/*0:0*/ &m_is_for_me__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::__VnoInFunc_m_is_for_me\n"); );
    // Body
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_callback_> this_cb;
    __VlefExpr_0 = VL_CAST_DYNAMIC(cb, this_cb);
    m_is_for_me__Vfuncrtn = (1U & __VlefExpr_0);
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi854bcbc1::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_registered = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::~Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi5e0b199d::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_registered:" + VL_TO_STRING(__PVT__m_registered);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi854bcbc1::to_string_middle();
    return (out);
}
