// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_backdoor(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &backdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_backdoor\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__Vnontrivs.__PVT__m_backdoor)) {
        this->__Vnontrivs.__PVT__m_backdoor = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_map, vlProcess, vlSymsp, "Backdoor"s);
    }
    backdoor__Vfuncrtn = this->__Vnontrivs.__PVT__m_backdoor;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pia0d5f9ca> __Vfunc_get__Vfuncout_1887;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pia0d5f9ca__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1887);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1887;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_map, vlProcess, vlSymsp, "uvm_reg_map"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_map, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_map"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_auto_predict(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_auto_predict__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_auto_predict\n"); );
    // Body
    get_auto_predict__Vfuncrtn = this->__PVT__m_auto_predict;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_check_on_read(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_check_on_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_check_on_read\n"); );
    // Body
    get_check_on_read__Vfuncrtn = this->__PVT__m_check_on_read;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_ceil(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ a, ::IData/*31:0*/ b, ::IData/*31:0*/ &ceil__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_ceil\n"); );
    // Body
    ::IData/*31:0*/ r;
    ::IData/*31:0*/ r0;
    r = VL_DIV_III(32, a, b);
    r0 = VL_MODDIV_III(32, a, b);
    ceil__Vfuncrtn = ((0U != r0) ? ((::IData)(1U) + r)
                       : r);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_unregister(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_unregister\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk2__DOT__idx;
    unnamedblk2__DOT__idx = 0;
    ::IData/*31:0*/ unnamedblk2__DOT__idx__Vloopsize;
    unnamedblk2__DOT__idx__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk3__DOT__idx;
    unnamedblk3__DOT__idx = 0;
    ::IData/*31:0*/ unnamedblk3__DOT__idx__Vloopsize;
    unnamedblk3__DOT__idx__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk4__DOT__map_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk4__DOT__map___Vnext;
    ::CData/*0:0*/ unnamedblk4__DOT__map___Vmore;
    unnamedblk4__DOT__map___Vmore = 0;
    ::QData/*63:0*/ unnamedblk5__DOT__i;
    unnamedblk5__DOT__i = 0;
    ::QData/*63:0*/ unnamedblk5__DOT__i__Vnext;
    unnamedblk5__DOT__i__Vnext = 0;
    ::CData/*0:0*/ unnamedblk5__DOT__i__Vmore;
    unnamedblk5__DOT__i__Vmore = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block>> q;
    q.clear();
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__VnoInFunc_get_root_blocks(vlSymsp, q);
    unnamedblk2__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__idx, q.size())) {
        unnamedblk2__DOT__idx__Vloopsize = q.size();
        VL_NULL_CHECK(q.at(unnamedblk2__DOT__idx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 522)->__VnoInFunc_set_lock(vlSymsp, 0U);
        if ((unnamedblk2__DOT__idx__Vloopsize <= q.size())) {
            unnamedblk2__DOT__idx = ((::IData)(1U) 
                                     + unnamedblk2__DOT__idx);
        }
    }
    unnamedblk3__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__idx, q.size())) {
        unnamedblk3__DOT__idx__Vloopsize = q.size();
        VL_NULL_CHECK(q.at(unnamedblk3__DOT__idx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 528)->__VnoInFunc_unregister(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>{this});
        if ((unnamedblk3__DOT__idx__Vloopsize <= q.size())) {
            unnamedblk3__DOT__idx = ((::IData)(1U) 
                                     + unnamedblk3__DOT__idx);
        }
    }
    unnamedblk4__DOT__map___Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk4__DOT__map___Vnext));
    while (unnamedblk4__DOT__map___Vmore) {
        unnamedblk4__DOT__map_ = unnamedblk4__DOT__map___Vnext;
        unnamedblk4__DOT__map___Vmore = (0U != this->__PVT__m_submaps.next(unnamedblk4__DOT__map___Vnext));
        VL_NULL_CHECK(unnamedblk4__DOT__map_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 534)->__VnoInFunc_unregister(vlSymsp);
    }
    this->__PVT__m_submaps.clear();
    this->__PVT__m_submap_rights.clear();
    unnamedblk5__DOT__i__Vmore = (0U != this->__PVT__m_regs_by_offset.first(unnamedblk5__DOT__i__Vnext));
    while (unnamedblk5__DOT__i__Vmore) {
        unnamedblk5__DOT__i = unnamedblk5__DOT__i__Vnext;
        unnamedblk5__DOT__i__Vmore = (0U != this->__PVT__m_regs_by_offset.next(unnamedblk5__DOT__i__Vnext));
        VL_NULL_CHECK(this->__PVT__m_regs_by_offset
                      .at(unnamedblk5__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 544)->__VnoInFunc_unregister(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>{this});
    }
    this->__PVT__m_regs_by_offset.clear();
    this->__PVT__m_regs_by_offset_wo.clear();
    this->__PVT__m_mems_by_offset.clear();
    this->__PVT__m_regs_info.clear();
    this->__PVT__m_mems_info.clear();
    this->__PVT__m_parent_map = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, 
                                              VL_CVT_PACK_STR_NN(
                                                                 ((""s 
                                                                   == name)
                                                                   ? "default_map"s
                                                                   : name)));
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_auto_predict = 0U;
    this->__PVT__m_check_on_read = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_reg(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> rg, ::QData/*63:0*/ offset, ::std::string rights, ::CData/*0:0*/ unmapped, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_reg\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1888;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4957;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4960;
    __Vtask_uvm_report_error__verbosity_4960 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4962;
    __Vtask_uvm_report_error__line_4962 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4964;
    __Vtask_uvm_report_error__report_enabled_checked_4964 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1889;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4965;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1890;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4966;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4969;
    __Vtask_uvm_report_error__verbosity_4969 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4971;
    __Vtask_uvm_report_error__line_4971 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4973;
    __Vtask_uvm_report_error__report_enabled_checked_4973 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1891;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4974;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_13__get_full_name;
    ::std::string __VlefCall_12__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_11;
    ::IData/*31:0*/ __VlefCall_10__get_report_action;
    ::IData/*31:0*/ __VlefCall_9__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_8__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> __VlefCall_7__get_parent;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> __VlefCall_6__get_parent;
    ::std::string __VlefCall_5__get_full_name;
    ::std::string __VlefCall_4__get_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk847__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk848__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk849__DOT__info;
    {
        if ((0U != this->__PVT__m_regs_info.exists(rg))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1888);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1888;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4957);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4957;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 629)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk847__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk847__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 629)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk847__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 629)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 629)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4964 = 1U;
                this->__Vtask_uvm_report_error__context_name_4963 = ""s;
                __Vtask_uvm_report_error__line_4962 = 0x00000275U;
                this->__Vtask_uvm_report_error__filename_4961 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__verbosity_4960 = 0U;
                this->__Vtask_uvm_report_error__message_4959 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_4__get_name), "' has already been added to map '"s), __VlefCall_5__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__id_4958 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1889);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1889;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4965);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4965;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4958, this->__Vtask_uvm_report_error__message_4959, __Vtask_uvm_report_error__verbosity_4960, this->__Vtask_uvm_report_error__filename_4961, __Vtask_uvm_report_error__line_4962, this->__Vtask_uvm_report_error__context_name_4963, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4964));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 633)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_6__get_parent);
        this->__VnoInFunc_get_parent(vlSymsp, __VlefCall_7__get_parent);
        if ((__VlefCall_6__get_parent != __VlefCall_7__get_parent)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1890);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1890;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4966);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4966;
            __VlefCall_8__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_8__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 636)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk848__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk848__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 636)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_9__get_report_verbosity_level);
            __VlefLogAnd_11 = VL_LTES_III(32, 0U, __VlefCall_9__get_report_verbosity_level);
            if (__VlefLogAnd_11) {
                VL_NULL_CHECK(unnamedblk848__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 636)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_10__get_report_action);
                __VlefLogAnd_11 = (0U != __VlefCall_10__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_11))) {
                VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 636)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4973 = 1U;
                this->__Vtask_uvm_report_error__context_name_4972 = ""s;
                __Vtask_uvm_report_error__line_4971 = 0x0000027cU;
                this->__Vtask_uvm_report_error__filename_4970 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__verbosity_4969 = 0U;
                this->__Vtask_uvm_report_error__message_4968 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_12__get_full_name), "' may not be added to address map '"s), __VlefCall_13__get_full_name), "' : they are not in the same block"s));
                this->__Vtask_uvm_report_error__id_4967 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1891);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1891;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4974);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4974;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4967, this->__Vtask_uvm_report_error__message_4968, __Vtask_uvm_report_error__verbosity_4969, this->__Vtask_uvm_report_error__filename_4970, __Vtask_uvm_report_error__line_4971, this->__Vtask_uvm_report_error__context_name_4972, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4973));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 640)->__VnoInFunc_add_map(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>{this});
        unnamedblk849__DOT__info = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_map_info, vlSymsp);
        VL_NULL_CHECK(unnamedblk849__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 644)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(unnamedblk849__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 645)->__PVT__rights 
            = rights;
        VL_NULL_CHECK(unnamedblk849__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 646)->__PVT__unmapped 
            = unmapped;
        VL_NULL_CHECK(unnamedblk849__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 647)->__PVT__frontdoor 
            = frontdoor;
        VL_NULL_CHECK(unnamedblk849__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 648)->__PVT__is_initialized = 0U;
        this->__PVT__m_regs_info.atWrite(rg) = unnamedblk849__DOT__info;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_reg_offset(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> rg, ::QData/*63:0*/ offset, ::CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_reg_offset\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1892;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4975;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4978;
    __Vtask_uvm_report_error__verbosity_4978 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4980;
    __Vtask_uvm_report_error__line_4980 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4982;
    __Vtask_uvm_report_error__report_enabled_checked_4982 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1893;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4983;
    ::IData/*31:0*/ __Vtask_get_physical_addresses__Vfuncout_4984;
    __Vtask_get_physical_addresses__Vfuncout_4984 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1894;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4985;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4988;
    __Vtask_uvm_report_warning__verbosity_4988 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4990;
    __Vtask_uvm_report_warning__line_4990 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4992;
    __Vtask_uvm_report_warning__report_enabled_checked_4992 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1895;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4993;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1896;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4994;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4997;
    __Vtask_uvm_report_warning__verbosity_4997 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4999;
    __Vtask_uvm_report_warning__line_4999 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_5001;
    __Vtask_uvm_report_warning__report_enabled_checked_5001 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1897;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5002;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_21__get_full_name;
    ::std::string __VlefCall_20__get_full_name;
    ::std::string __VlefCall_19__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_18;
    ::IData/*31:0*/ __VlefCall_17__get_report_action;
    ::IData/*31:0*/ __VlefCall_16__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_15__uvm_get_report_object;
    ::std::string __VlefCall_14__get_full_name;
    ::std::string __VlefCall_13__get_full_name;
    ::std::string __VlefCall_12__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_11;
    ::IData/*31:0*/ __VlefCall_10__get_report_action;
    ::IData/*31:0*/ __VlefCall_9__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_8__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_7__get_n_bytes;
    ::CData/*0:0*/ __VlefCall_6__is_locked;
    ::std::string __VlefCall_5__get_full_name;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk850__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk851__DOT__info;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk851__DOT__blk;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk851__DOT__top_map;
    ::VlQueue<::QData/*63:0*/> unnamedblk851__DOT__addrs;
    ::IData/*31:0*/ unnamedblk851__DOT__unnamedblk852__DOT__i;
    unnamedblk851__DOT__unnamedblk852__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk851__DOT__unnamedblk852__DOT__i__Vloopsize;
    unnamedblk851__DOT__unnamedblk852__DOT__i__Vloopsize = 0;
    ::std::string unnamedblk851__DOT__unnamedblk853__DOT__rg_acc;
    ::IData/*31:0*/ unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__i;
    unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__i__Vloopsize;
    unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__i__Vloopsize = 0;
    ::QData/*63:0*/ unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__addr;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__rg2;
    ::std::string unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__rg2_acc;
    ::std::string unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__unnamedblk857__DOT__a;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__unnamedblk857__DOT__unnamedblk858__DOT___local_report_object_;
    ::VlWide<5>/*159:0*/ unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range;
    VL_ZERO_W(160, unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range);
    ::VlWide<5>/*159:0*/ unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range__Vnext;
    VL_ZERO_W(160, unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range__Vnext);
    ::CData/*0:0*/ unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range__Vmore;
    unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range__Vmore = 0;
    ::std::string unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__unnamedblk860__DOT__a;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__unnamedblk860__DOT__unnamedblk861__DOT___local_report_object_;
    {
        if ((1U & (~ (0U != this->__PVT__m_regs_info.exists(rg))))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1892);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1892;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4975);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4975;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 664)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk850__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk850__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 664)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk850__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 664)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 664)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4982 = 1U;
                this->__Vtask_uvm_report_error__context_name_4981 = ""s;
                __Vtask_uvm_report_error__line_4980 = 0x00000298U;
                this->__Vtask_uvm_report_error__filename_4979 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__verbosity_4978 = 0U;
                this->__Vtask_uvm_report_error__message_4977 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot modify offset of register '"s, __VlefCall_4__get_full_name), "' in address map '"s), __VlefCall_5__get_full_name), "' : register not mapped in that address map"s));
                this->__Vtask_uvm_report_error__id_4976 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1893);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1893;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4983);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4983;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4976, this->__Vtask_uvm_report_error__message_4977, __Vtask_uvm_report_error__verbosity_4978, this->__Vtask_uvm_report_error__filename_4979, __Vtask_uvm_report_error__line_4980, this->__Vtask_uvm_report_error__context_name_4981, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4982));
            }
            goto __Vlabel0;
        }
        unnamedblk851__DOT__info = this->__PVT__m_regs_info
            .at(rg);
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk851__DOT__blk);
        this->__VnoInFunc_get_root_map(vlSymsp, unnamedblk851__DOT__top_map);
        unnamedblk851__DOT__addrs.clear();
        unnamedblk851__DOT__addrs.atDefault() = 0;
        VL_NULL_CHECK(unnamedblk851__DOT__blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 675)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_6__is_locked);
        if (__VlefCall_6__is_locked) {
            if ((1U & (~ VL_NULL_CHECK(unnamedblk851__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 678)
                       ->__PVT__unmapped))) {
                unnamedblk851__DOT__unnamedblk852__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk851__DOT__unnamedblk852__DOT__i, VL_NULL_CHECK(unnamedblk851__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 679)
                                  ->__PVT__addr.size())) {
                    unnamedblk851__DOT__unnamedblk852__DOT__i__Vloopsize 
                        = VL_NULL_CHECK(unnamedblk851__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 679)
                        ->__PVT__addr.size();
                    if ((0U != VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 681)
                         ->__PVT__m_regs_by_offset_wo.exists(VL_NULL_CHECK(unnamedblk851__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 681)
                                                             ->__PVT__addr.at(unnamedblk851__DOT__unnamedblk852__DOT__i)))) {
                        if ((VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 685)
                             ->__PVT__m_regs_by_offset
                             .at(VL_NULL_CHECK(unnamedblk851__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 685)
                                 ->__PVT__addr.at(unnamedblk851__DOT__unnamedblk852__DOT__i)) 
                             == rg)) {
                            VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 686)->__PVT__m_regs_by_offset.atWrite(VL_NULL_CHECK(unnamedblk851__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 686)
                                                                                ->__PVT__addr.at(unnamedblk851__DOT__unnamedblk852__DOT__i)) 
                                = VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 687)
                                ->__PVT__m_regs_by_offset_wo
                                .at(VL_NULL_CHECK(unnamedblk851__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 687)
                                    ->__PVT__addr.at(unnamedblk851__DOT__unnamedblk852__DOT__i));
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, rg);
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 689)
                                                                                ->__PVT__m_regs_by_offset
                                                                                .at(VL_NULL_CHECK(unnamedblk851__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 689)
                                                                                ->__PVT__addr.at(unnamedblk851__DOT__unnamedblk852__DOT__i)));
                        } else {
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, rg);
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 693)
                                                                                ->__PVT__m_regs_by_offset
                                                                                .at(VL_NULL_CHECK(unnamedblk851__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 693)
                                                                                ->__PVT__addr.at(unnamedblk851__DOT__unnamedblk852__DOT__i)));
                        }
                        VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 695)->__PVT__m_regs_by_offset_wo.erase(VL_NULL_CHECK(unnamedblk851__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 695)
                                                                                ->__PVT__addr.at(unnamedblk851__DOT__unnamedblk852__DOT__i));
                    } else {
                        VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 682)->__PVT__m_regs_by_offset.erase(VL_NULL_CHECK(unnamedblk851__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 682)
                                                                                ->__PVT__addr.at(unnamedblk851__DOT__unnamedblk852__DOT__i));
                    }
                    if ((unnamedblk851__DOT__unnamedblk852__DOT__i__Vloopsize 
                         <= VL_NULL_CHECK(unnamedblk851__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 679)
                         ->__PVT__addr.size())) {
                        unnamedblk851__DOT__unnamedblk852__DOT__i 
                            = ((::IData)(1U) + unnamedblk851__DOT__unnamedblk852__DOT__i);
                    }
                }
            }
            if ((1U & (~ (::IData)(unmapped)))) {
                VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 702)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>{this}, unnamedblk851__DOT__unnamedblk853__DOT__rg_acc);
                VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 705)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_7__get_n_bytes);
                this->__VnoInFunc_get_physical_addresses(vlSymsp, offset, 0ULL, __VlefCall_7__get_n_bytes, unnamedblk851__DOT__addrs, __Vtask_get_physical_addresses__Vfuncout_4984);
                unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__i, unnamedblk851__DOT__addrs.size())) {
                    unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__i__Vloopsize 
                        = unnamedblk851__DOT__addrs.size();
                    unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__addr 
                        = unnamedblk851__DOT__addrs.at(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__i);
                    if ((0U != VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 710)
                         ->__PVT__m_regs_by_offset.exists(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__addr))) {
                        unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__rg2 
                            = VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 712)
                            ->__PVT__m_regs_by_offset
                            .at(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__addr);
                        VL_NULL_CHECK(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__rg2, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 713)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>{this}, unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__rg2_acc);
                        if ((("RO"s == unnamedblk851__DOT__unnamedblk853__DOT__rg_acc) 
                             & ("WO"s == unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__rg2_acc))) {
                            VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 718)->__PVT__m_regs_by_offset.atWrite(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__addr) 
                                = rg;
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, rg);
                            VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 720)->__PVT__m_regs_by_offset_wo.atWrite(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__addr) 
                                = unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__rg2;
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__rg2);
                        } else if ((("WO"s == unnamedblk851__DOT__unnamedblk853__DOT__rg_acc) 
                                    & ("RO"s == unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__rg2_acc))) {
                            VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 724)->__PVT__m_regs_by_offset_wo.atWrite(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__addr) 
                                = rg;
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, rg);
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__rg2);
                        } else {
                            unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__unnamedblk857__DOT__a = ""s;
                            VL_SFORMAT_NX(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__unnamedblk857__DOT__a
                                          ,"%0h",1, '#',64,unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__addr);
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1894);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                                = __Vfunc_get__Vfuncout_1894;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4985);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                                = __Vtask_get_root__Vfuncout_4985;
                            __VlefCall_8__uvm_get_report_object 
                                = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                            VL_NULL_CHECK(__VlefCall_8__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 733)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__unnamedblk857__DOT__unnamedblk858__DOT___local_report_object_);
                            VL_NULL_CHECK(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__unnamedblk857__DOT__unnamedblk858__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 733)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_9__get_report_verbosity_level);
                            __VlefLogAnd_11 = VL_LTES_III(32, 0U, __VlefCall_9__get_report_verbosity_level);
                            if (__VlefLogAnd_11) {
                                VL_NULL_CHECK(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__unnamedblk857__DOT__unnamedblk858__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 733)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_10__get_report_action);
                                __VlefLogAnd_11 = (0U 
                                                   != __VlefCall_10__get_report_action);
                            }
                            if (VL_UNLIKELY((__VlefLogAnd_11))) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                                VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 733)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                                VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 733)
                                              ->__PVT__m_regs_by_offset
                                              .at(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__addr), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 733)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                                __Vtask_uvm_report_warning__report_enabled_checked_4992 = 1U;
                                this->__Vtask_uvm_report_warning__context_name_4991 = ""s;
                                __Vtask_uvm_report_warning__line_4990 = 0x000002ddU;
                                this->__Vtask_uvm_report_warning__filename_4989 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
                                __Vtask_uvm_report_warning__verbosity_4988 = 0U;
                                this->__Vtask_uvm_report_warning__message_4987 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_12__get_full_name), "' register '"s), __VlefCall_13__get_full_name), "' maps to same address as register '"s), __VlefCall_14__get_full_name), "': 'h"s), unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk856__DOT__unnamedblk857__DOT__a));
                                this->__Vtask_uvm_report_warning__id_4986 = "RegModel"s;
                                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1895);
                                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                                    = __Vfunc_get__Vfuncout_1895;
                                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4993);
                                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vtask_get_root__Vfuncout_4993;
                                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4986, this->__Vtask_uvm_report_warning__message_4987, __Vtask_uvm_report_warning__verbosity_4988, this->__Vtask_uvm_report_warning__filename_4989, __Vtask_uvm_report_warning__line_4990, this->__Vtask_uvm_report_warning__context_name_4991, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4992));
                            }
                        }
                    } else {
                        VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 738)->__PVT__m_regs_by_offset.atWrite(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__addr) 
                            = rg;
                    }
                    unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 742)
                           ->__PVT__m_mems_by_offset.first(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range__Vnext));
                    while (unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range__Vmore) {
                        unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range[0U] 
                            = unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range__Vnext[0U];
                        unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range[1U] 
                            = unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range__Vnext[1U];
                        unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range[2U] 
                            = unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range__Vnext[2U];
                        unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range[3U] 
                            = unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range__Vnext[3U];
                        unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range[4U] 
                            = unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range__Vnext[4U];
                        unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range__Vmore 
                            = (0U != VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 742)
                               ->__PVT__m_mems_by_offset.next(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range__Vnext));
                        if (((unnamedblk851__DOT__addrs.at(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__i) 
                              >= (((::QData)((::IData)(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range[4U])) 
                                   << 0x00000020U) 
                                  | (::QData)((::IData)(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range[3U])))) 
                             & (unnamedblk851__DOT__addrs.at(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__i) 
                                <= (((::QData)((::IData)(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range[2U])) 
                                     << 0x00000020U) 
                                    | (::QData)((::IData)(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range[1U])))))) {
                            unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__unnamedblk860__DOT__a = ""s;
                            VL_SFORMAT_NX(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__unnamedblk860__DOT__a
                                          ,"%0h",1, '#',64,unnamedblk851__DOT__addrs.at(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__i));
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1896);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                                = __Vfunc_get__Vfuncout_1896;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4994);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                                = __Vtask_get_root__Vfuncout_4994;
                            __VlefCall_15__uvm_get_report_object 
                                = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                            VL_NULL_CHECK(__VlefCall_15__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 748)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__unnamedblk860__DOT__unnamedblk861__DOT___local_report_object_);
                            VL_NULL_CHECK(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__unnamedblk860__DOT__unnamedblk861__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 748)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_16__get_report_verbosity_level);
                            __VlefLogAnd_18 = VL_LTES_III(32, 0U, __VlefCall_16__get_report_verbosity_level);
                            if (__VlefLogAnd_18) {
                                VL_NULL_CHECK(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__unnamedblk860__DOT__unnamedblk861__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 748)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_17__get_report_action);
                                __VlefLogAnd_18 = (0U 
                                                   != __VlefCall_17__get_report_action);
                            }
                            if (VL_UNLIKELY((__VlefLogAnd_18))) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
                                VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 748)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                                VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk851__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 748)
                                              ->__PVT__m_mems_by_offset
                                              .at(unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__range), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 748)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                                __Vtask_uvm_report_warning__report_enabled_checked_5001 = 1U;
                                this->__Vtask_uvm_report_warning__context_name_5000 = ""s;
                                __Vtask_uvm_report_warning__line_4999 = 0x000002ecU;
                                this->__Vtask_uvm_report_warning__filename_4998 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
                                __Vtask_uvm_report_warning__verbosity_4997 = 0U;
                                this->__Vtask_uvm_report_warning__message_4996 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_19__get_full_name), "' register '"s), __VlefCall_20__get_full_name), "' overlaps with address range of memory '"s), __VlefCall_21__get_full_name), "': 'h"s), unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__unnamedblk855__DOT__unnamedblk859__DOT__unnamedblk860__DOT__a));
                                this->__Vtask_uvm_report_warning__id_4995 = "RegModel"s;
                                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1897);
                                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                                    = __Vfunc_get__Vfuncout_1897;
                                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5002);
                                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vtask_get_root__Vfuncout_5002;
                                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4995, this->__Vtask_uvm_report_warning__message_4996, __Vtask_uvm_report_warning__verbosity_4997, this->__Vtask_uvm_report_warning__filename_4998, __Vtask_uvm_report_warning__line_4999, this->__Vtask_uvm_report_warning__context_name_5000, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_5001));
                            }
                        }
                    }
                    if ((unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__i__Vloopsize 
                         <= unnamedblk851__DOT__addrs.size())) {
                        unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__i 
                            = ((::IData)(1U) + unnamedblk851__DOT__unnamedblk853__DOT__unnamedblk854__DOT__i);
                    }
                }
                VL_NULL_CHECK(unnamedblk851__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 752)->__PVT__addr 
                    = unnamedblk851__DOT__addrs;
            }
        }
        if (unmapped) {
            VL_NULL_CHECK(unnamedblk851__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 757)->__PVT__offset = 0xffffffffffffffffULL;
            VL_NULL_CHECK(unnamedblk851__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 758)->__PVT__unmapped = 1U;
        } else {
            VL_NULL_CHECK(unnamedblk851__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 761)->__PVT__offset 
                = offset;
            VL_NULL_CHECK(unnamedblk851__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 762)->__PVT__unmapped = 0U;
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_mem_offset(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> mem, ::QData/*63:0*/ offset, ::CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_mem_offset\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1898;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5003;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_5006;
    __Vtask_uvm_report_error__verbosity_5006 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_5008;
    __Vtask_uvm_report_error__line_5008 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_5010;
    __Vtask_uvm_report_error__report_enabled_checked_5010 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1899;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5011;
    ::IData/*31:0*/ __Vtask_get_physical_addresses__Vfuncout_5012;
    __Vtask_get_physical_addresses__Vfuncout_5012 = 0;
    ::IData/*31:0*/ __Vtask_get_physical_addresses__Vfuncout_5013;
    __Vtask_get_physical_addresses__Vfuncout_5013 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1900;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5014;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_5017;
    __Vtask_uvm_report_warning__verbosity_5017 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_5019;
    __Vtask_uvm_report_warning__line_5019 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_5021;
    __Vtask_uvm_report_warning__report_enabled_checked_5021 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1901;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5022;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1902;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5023;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_5026;
    __Vtask_uvm_report_warning__verbosity_5026 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_5028;
    __Vtask_uvm_report_warning__line_5028 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_5030;
    __Vtask_uvm_report_warning__report_enabled_checked_5030 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1903;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5031;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_25__get_full_name;
    ::std::string __VlefCall_24__get_full_name;
    ::std::string __VlefCall_23__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_22;
    ::IData/*31:0*/ __VlefCall_21__get_report_action;
    ::IData/*31:0*/ __VlefCall_20__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_19__uvm_get_report_object;
    ::std::string __VlefCall_18__get_full_name;
    ::std::string __VlefCall_17__get_full_name;
    ::std::string __VlefCall_16__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_15;
    ::IData/*31:0*/ __VlefCall_14__get_report_action;
    ::IData/*31:0*/ __VlefCall_13__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_12__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_11__get_addr_unit_bytes;
    ::IData/*31:0*/ __VlefCall_10__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_9__get_n_bytes;
    ::QData/*63:0*/ __VlefCall_8__get_size;
    ::IData/*31:0*/ __VlefCall_7__get_n_bytes;
    ::CData/*0:0*/ __VlefCall_6__is_locked;
    ::std::string __VlefCall_5__get_full_name;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk865__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk866__DOT__info;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk866__DOT__blk;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk866__DOT__top_map;
    ::VlWide<5>/*159:0*/ unnamedblk866__DOT__unnamedblk867__DOT__range;
    VL_ZERO_W(160, unnamedblk866__DOT__unnamedblk867__DOT__range);
    ::VlWide<5>/*159:0*/ unnamedblk866__DOT__unnamedblk867__DOT__range__Vnext;
    VL_ZERO_W(160, unnamedblk866__DOT__unnamedblk867__DOT__range__Vnext);
    ::CData/*0:0*/ unnamedblk866__DOT__unnamedblk867__DOT__range__Vmore;
    unnamedblk866__DOT__unnamedblk867__DOT__range__Vmore = 0;
    ::VlQueue<::QData/*63:0*/> unnamedblk866__DOT__unnamedblk868__DOT__addrs;
    ::VlQueue<::QData/*63:0*/> unnamedblk866__DOT__unnamedblk868__DOT__addrs_max;
    ::QData/*63:0*/ unnamedblk866__DOT__unnamedblk868__DOT__min;
    ::QData/*63:0*/ unnamedblk866__DOT__unnamedblk868__DOT__max;
    ::IData/*31:0*/ unnamedblk866__DOT__unnamedblk868__DOT__stride;
    ::QData/*63:0*/ unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__reg_addr;
    unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__reg_addr = 0;
    ::QData/*63:0*/ unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__reg_addr__Vnext;
    unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__reg_addr__Vnext = 0;
    ::CData/*0:0*/ unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__reg_addr__Vmore;
    unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__reg_addr__Vmore = 0;
    ::std::string unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__unnamedblk870__DOT__a;
    ::std::string unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__unnamedblk870__DOT__b;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__unnamedblk870__DOT__unnamedblk871__DOT___local_report_object_;
    ::VlWide<5>/*159:0*/ unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range;
    VL_ZERO_W(160, unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range);
    ::VlWide<5>/*159:0*/ unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range__Vnext;
    VL_ZERO_W(160, unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range__Vnext);
    ::CData/*0:0*/ unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range__Vmore;
    unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range__Vmore = 0;
    ::std::string unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__unnamedblk873__DOT__a;
    ::std::string unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__unnamedblk873__DOT__b;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__unnamedblk873__DOT__unnamedblk874__DOT___local_report_object_;
    ::VlWide<5>/*159:0*/ unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk875__DOT__range;
    {
        if ((1U & (~ (0U != this->__PVT__m_mems_info.exists(mem))))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1898);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1898;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5003);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_5003;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 813)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk865__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk865__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 813)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk865__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 813)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 813)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_5010 = 1U;
                this->__Vtask_uvm_report_error__context_name_5009 = ""s;
                __Vtask_uvm_report_error__line_5008 = 0x0000032dU;
                this->__Vtask_uvm_report_error__filename_5007 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__verbosity_5006 = 0U;
                this->__Vtask_uvm_report_error__message_5005 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot modify offset of memory '"s, __VlefCall_4__get_full_name), "' in address map '"s), __VlefCall_5__get_full_name), "' : memory not mapped in that address map"s));
                this->__Vtask_uvm_report_error__id_5004 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1899);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1899;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5011);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_5011;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_5004, this->__Vtask_uvm_report_error__message_5005, __Vtask_uvm_report_error__verbosity_5006, this->__Vtask_uvm_report_error__filename_5007, __Vtask_uvm_report_error__line_5008, this->__Vtask_uvm_report_error__context_name_5009, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_5010));
            }
            goto __Vlabel0;
        }
        unnamedblk866__DOT__info = this->__PVT__m_mems_info
            .at(mem);
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk866__DOT__blk);
        this->__VnoInFunc_get_root_map(vlSymsp, unnamedblk866__DOT__top_map);
        VL_NULL_CHECK(unnamedblk866__DOT__blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 824)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_6__is_locked);
        if (__VlefCall_6__is_locked) {
            if ((1U & (~ VL_NULL_CHECK(unnamedblk866__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 827)
                       ->__PVT__unmapped))) {
                unnamedblk866__DOT__unnamedblk867__DOT__range__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk866__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 828)
                       ->__PVT__m_mems_by_offset.first(unnamedblk866__DOT__unnamedblk867__DOT__range__Vnext));
                while (unnamedblk866__DOT__unnamedblk867__DOT__range__Vmore) {
                    unnamedblk866__DOT__unnamedblk867__DOT__range[0U] 
                        = unnamedblk866__DOT__unnamedblk867__DOT__range__Vnext[0U];
                    unnamedblk866__DOT__unnamedblk867__DOT__range[1U] 
                        = unnamedblk866__DOT__unnamedblk867__DOT__range__Vnext[1U];
                    unnamedblk866__DOT__unnamedblk867__DOT__range[2U] 
                        = unnamedblk866__DOT__unnamedblk867__DOT__range__Vnext[2U];
                    unnamedblk866__DOT__unnamedblk867__DOT__range[3U] 
                        = unnamedblk866__DOT__unnamedblk867__DOT__range__Vnext[3U];
                    unnamedblk866__DOT__unnamedblk867__DOT__range[4U] 
                        = unnamedblk866__DOT__unnamedblk867__DOT__range__Vnext[4U];
                    unnamedblk866__DOT__unnamedblk867__DOT__range__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk866__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 828)
                           ->__PVT__m_mems_by_offset.next(unnamedblk866__DOT__unnamedblk867__DOT__range__Vnext));
                    if ((VL_NULL_CHECK(unnamedblk866__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 829)
                         ->__PVT__m_mems_by_offset.at(unnamedblk866__DOT__unnamedblk867__DOT__range) 
                         == mem)) {
                        VL_NULL_CHECK(unnamedblk866__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 831)->__PVT__m_mems_by_offset.erase(unnamedblk866__DOT__unnamedblk867__DOT__range);
                    }
                }
            }
            if ((1U & (~ (::IData)(unmapped)))) {
                unnamedblk866__DOT__unnamedblk868__DOT__addrs.clear();
                unnamedblk866__DOT__unnamedblk868__DOT__addrs.atDefault() = 0;
                unnamedblk866__DOT__unnamedblk868__DOT__addrs_max.clear();
                unnamedblk866__DOT__unnamedblk868__DOT__addrs_max.atDefault() = 0;
                unnamedblk866__DOT__unnamedblk868__DOT__min = 0ULL;
                unnamedblk866__DOT__unnamedblk868__DOT__max = 0ULL;
                unnamedblk866__DOT__unnamedblk868__DOT__stride = 0U;
                VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 843)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_7__get_n_bytes);
                this->__VnoInFunc_get_physical_addresses(vlSymsp, offset, 0ULL, __VlefCall_7__get_n_bytes, unnamedblk866__DOT__unnamedblk868__DOT__addrs, __Vtask_get_physical_addresses__Vfuncout_5012);
                unnamedblk866__DOT__unnamedblk868__DOT__min 
                    = ((unnamedblk866__DOT__unnamedblk868__DOT__addrs.at(0U) 
                        < unnamedblk866__DOT__unnamedblk868__DOT__addrs.at(
                                                                           (unnamedblk866__DOT__unnamedblk868__DOT__addrs.size() 
                                                                            - (::IData)(1U))))
                        ? unnamedblk866__DOT__unnamedblk868__DOT__addrs.at(0U)
                        : unnamedblk866__DOT__unnamedblk868__DOT__addrs.at(
                                                                           (unnamedblk866__DOT__unnamedblk868__DOT__addrs.size() 
                                                                            - (::IData)(1U))));
                VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 847)->__VnoInFunc_get_size(vlSymsp, __VlefCall_8__get_size);
                VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 848)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_9__get_n_bytes);
                this->__VnoInFunc_get_physical_addresses(vlSymsp, offset, 
                                                         (__VlefCall_8__get_size 
                                                          - 1ULL), __VlefCall_9__get_n_bytes, unnamedblk866__DOT__unnamedblk868__DOT__addrs_max, __Vtask_get_physical_addresses__Vfuncout_5013);
                unnamedblk866__DOT__unnamedblk868__DOT__max 
                    = ((unnamedblk866__DOT__unnamedblk868__DOT__addrs_max.at(0U) 
                        > unnamedblk866__DOT__unnamedblk868__DOT__addrs_max.at(
                                                                               (unnamedblk866__DOT__unnamedblk868__DOT__addrs_max.size() 
                                                                                - (::IData)(1U))))
                        ? unnamedblk866__DOT__unnamedblk868__DOT__addrs_max.at(0U)
                        : unnamedblk866__DOT__unnamedblk868__DOT__addrs_max.at(
                                                                               (unnamedblk866__DOT__unnamedblk868__DOT__addrs_max.size() 
                                                                                - (::IData)(1U))));
                VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 853)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_10__get_n_bytes);
                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_11__get_addr_unit_bytes);
                unnamedblk866__DOT__unnamedblk868__DOT__stride 
                    = VL_DIV_III(32, __VlefCall_10__get_n_bytes, __VlefCall_11__get_addr_unit_bytes);
                unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__reg_addr__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk866__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 856)
                       ->__PVT__m_regs_by_offset.first(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__reg_addr__Vnext));
                while (unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__reg_addr__Vmore) {
                    unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__reg_addr 
                        = unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__reg_addr__Vnext;
                    unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__reg_addr__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk866__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 856)
                           ->__PVT__m_regs_by_offset.next(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__reg_addr__Vnext));
                    if (((unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__reg_addr 
                          >= unnamedblk866__DOT__unnamedblk868__DOT__min) 
                         & (unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__reg_addr 
                            <= unnamedblk866__DOT__unnamedblk868__DOT__max))) {
                        unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__unnamedblk870__DOT__a = ""s;
                        unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__unnamedblk870__DOT__b = ""s;
                        VL_SFORMAT_NX(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__unnamedblk870__DOT__a
                                      ,"[%0h:%0h]",2
                                      , '#',64,unnamedblk866__DOT__unnamedblk868__DOT__min
                                      , '#',64,unnamedblk866__DOT__unnamedblk868__DOT__max);
                        VL_SFORMAT_NX(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__unnamedblk870__DOT__b
                                      ,"%0h",1, '#',64,unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__reg_addr);
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1900);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1900;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5014);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_5014;
                        __VlefCall_12__uvm_get_report_object 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                        VL_NULL_CHECK(__VlefCall_12__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 864)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__unnamedblk870__DOT__unnamedblk871__DOT___local_report_object_);
                        VL_NULL_CHECK(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__unnamedblk870__DOT__unnamedblk871__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 864)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_13__get_report_verbosity_level);
                        __VlefLogAnd_15 = VL_LTES_III(32, 0U, __VlefCall_13__get_report_verbosity_level);
                        if (__VlefLogAnd_15) {
                            VL_NULL_CHECK(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__unnamedblk870__DOT__unnamedblk871__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 864)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_14__get_report_action);
                            __VlefLogAnd_15 = (0U != __VlefCall_14__get_report_action);
                        }
                        if (VL_UNLIKELY((__VlefLogAnd_15))) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                            VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 864)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                            VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk866__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 864)
                                          ->__PVT__m_regs_by_offset
                                          .at(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__reg_addr), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 864)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                            __Vtask_uvm_report_warning__report_enabled_checked_5021 = 1U;
                            this->__Vtask_uvm_report_warning__context_name_5020 = ""s;
                            __Vtask_uvm_report_warning__line_5019 = 0x00000360U;
                            this->__Vtask_uvm_report_warning__filename_5018 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
                            __Vtask_uvm_report_warning__verbosity_5017 = 0U;
                            this->__Vtask_uvm_report_warning__message_5016 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_16__get_full_name), "' memory '"s), __VlefCall_17__get_full_name), "' with range "s), unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__unnamedblk870__DOT__a), " overlaps with address of existing register '"s), __VlefCall_18__get_full_name), "': 'h"s), unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk869__DOT__unnamedblk870__DOT__b));
                            this->__Vtask_uvm_report_warning__id_5015 = "RegModel"s;
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1901);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__Vfuncout_1901;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5022);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__Vfuncout_5022;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_5015, this->__Vtask_uvm_report_warning__message_5016, __Vtask_uvm_report_warning__verbosity_5017, this->__Vtask_uvm_report_warning__filename_5018, __Vtask_uvm_report_warning__line_5019, this->__Vtask_uvm_report_warning__context_name_5020, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_5021));
                        }
                    }
                }
                unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk866__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 868)
                       ->__PVT__m_mems_by_offset.first(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range__Vnext));
                while (unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range__Vmore) {
                    unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[0U] 
                        = unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range__Vnext[0U];
                    unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[1U] 
                        = unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range__Vnext[1U];
                    unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[2U] 
                        = unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range__Vnext[2U];
                    unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[3U] 
                        = unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range__Vnext[3U];
                    unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[4U] 
                        = unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range__Vnext[4U];
                    unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk866__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 868)
                           ->__PVT__m_mems_by_offset.next(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range__Vnext));
                    if (((((unnamedblk866__DOT__unnamedblk868__DOT__min 
                            <= (((::QData)((::IData)(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[2U])) 
                                 << 0x00000020U) | (::QData)((::IData)(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[1U])))) 
                           & (unnamedblk866__DOT__unnamedblk868__DOT__max 
                              >= (((::QData)((::IData)(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[2U])) 
                                   << 0x00000020U) 
                                  | (::QData)((::IData)(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[1U]))))) 
                          | ((unnamedblk866__DOT__unnamedblk868__DOT__min 
                              <= (((::QData)((::IData)(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[4U])) 
                                   << 0x00000020U) 
                                  | (::QData)((::IData)(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[3U])))) 
                             & (unnamedblk866__DOT__unnamedblk868__DOT__max 
                                >= (((::QData)((::IData)(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[4U])) 
                                     << 0x00000020U) 
                                    | (::QData)((::IData)(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[3U])))))) 
                         | ((unnamedblk866__DOT__unnamedblk868__DOT__min 
                             >= (((::QData)((::IData)(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[4U])) 
                                  << 0x00000020U) | (::QData)((::IData)(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[3U])))) 
                            & (unnamedblk866__DOT__unnamedblk868__DOT__max 
                               <= (((::QData)((::IData)(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[2U])) 
                                    << 0x00000020U) 
                                   | (::QData)((::IData)(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[1U]))))))) {
                        unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__unnamedblk873__DOT__a = ""s;
                        unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__unnamedblk873__DOT__b = ""s;
                        VL_SFORMAT_NX(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__unnamedblk873__DOT__a
                                      ,"[%0h:%0h]",2
                                      , '#',64,unnamedblk866__DOT__unnamedblk868__DOT__min
                                      , '#',64,unnamedblk866__DOT__unnamedblk868__DOT__max);
                        VL_SFORMAT_NX(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__unnamedblk873__DOT__b
                                      ,"[%0h:%0h]",2
                                      , '#',64,(((::QData)((::IData)(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[4U])) 
                                                 << 0x00000020U) 
                                                | (::QData)((::IData)(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[3U])))
                                      , '#',64,(((::QData)((::IData)(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[2U])) 
                                                 << 0x00000020U) 
                                                | (::QData)((::IData)(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range[1U]))));
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1902);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1902;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5023);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_5023;
                        __VlefCall_19__uvm_get_report_object 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                        VL_NULL_CHECK(__VlefCall_19__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 878)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__unnamedblk873__DOT__unnamedblk874__DOT___local_report_object_);
                        VL_NULL_CHECK(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__unnamedblk873__DOT__unnamedblk874__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 878)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_20__get_report_verbosity_level);
                        __VlefLogAnd_22 = VL_LTES_III(32, 0U, __VlefCall_20__get_report_verbosity_level);
                        if (__VlefLogAnd_22) {
                            VL_NULL_CHECK(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__unnamedblk873__DOT__unnamedblk874__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 878)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_21__get_report_action);
                            __VlefLogAnd_22 = (0U != __VlefCall_21__get_report_action);
                        }
                        if (VL_UNLIKELY((__VlefLogAnd_22))) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
                            VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 878)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_24__get_full_name);
                            VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk866__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 878)
                                          ->__PVT__m_mems_by_offset
                                          .at(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__range), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 878)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_25__get_full_name);
                            __Vtask_uvm_report_warning__report_enabled_checked_5030 = 1U;
                            this->__Vtask_uvm_report_warning__context_name_5029 = ""s;
                            __Vtask_uvm_report_warning__line_5028 = 0x0000036eU;
                            this->__Vtask_uvm_report_warning__filename_5027 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
                            __Vtask_uvm_report_warning__verbosity_5026 = 0U;
                            this->__Vtask_uvm_report_warning__message_5025 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_23__get_full_name), "' memory '"s), __VlefCall_24__get_full_name), "' with range "s), unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__unnamedblk873__DOT__a), " overlaps existing memory with range '"s), __VlefCall_25__get_full_name), "': "s), unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk872__DOT__unnamedblk873__DOT__b));
                            this->__Vtask_uvm_report_warning__id_5024 = "RegModel"s;
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1903);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__Vfuncout_1903;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5031);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__Vfuncout_5031;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_5024, this->__Vtask_uvm_report_warning__message_5025, __Vtask_uvm_report_warning__verbosity_5026, this->__Vtask_uvm_report_warning__filename_5027, __Vtask_uvm_report_warning__line_5028, this->__Vtask_uvm_report_warning__context_name_5029, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_5030));
                        }
                    }
                }
                unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk875__DOT__range[0U] 
                    = unnamedblk866__DOT__unnamedblk868__DOT__stride;
                unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk875__DOT__range[1U] 
                    = (::IData)(unnamedblk866__DOT__unnamedblk868__DOT__max);
                unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk875__DOT__range[2U] 
                    = (::IData)((unnamedblk866__DOT__unnamedblk868__DOT__max 
                                 >> 0x00000020U));
                unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk875__DOT__range[3U] 
                    = (::IData)(unnamedblk866__DOT__unnamedblk868__DOT__min);
                unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk875__DOT__range[4U] 
                    = (::IData)((unnamedblk866__DOT__unnamedblk868__DOT__min 
                                 >> 0x00000020U));
                VL_NULL_CHECK(unnamedblk866__DOT__top_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 884)->__PVT__m_mems_by_offset.atWrite(unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk875__DOT__range) 
                    = mem;
                VL_NULL_CHECK(unnamedblk866__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 885)->__PVT__addr 
                    = unnamedblk866__DOT__unnamedblk868__DOT__addrs;
                VL_ASSIGN_W(160, VL_NULL_CHECK(unnamedblk866__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 886)
                            ->__PVT__mem_range, unnamedblk866__DOT__unnamedblk868__DOT__unnamedblk875__DOT__range);
            }
        }
        if (unmapped) {
            VL_NULL_CHECK(unnamedblk866__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 893)->__PVT__offset = 0xffffffffffffffffULL;
            VL_NULL_CHECK(unnamedblk866__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 894)->__PVT__unmapped = 1U;
        } else {
            VL_NULL_CHECK(unnamedblk866__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 897)->__PVT__offset 
                = offset;
            VL_NULL_CHECK(unnamedblk866__DOT__info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 898)->__PVT__unmapped = 0U;
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_reset(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_reset\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk879__DOT__i;
    unnamedblk879__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk879__DOT__i__Vloopsize;
    unnamedblk879__DOT__i__Vloopsize = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>> regs;
    regs.clear();
    this->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
    unnamedblk879__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk879__DOT__i, regs.size())) {
        unnamedblk879__DOT__i__Vloopsize = regs.size();
        VL_NULL_CHECK(regs.at(unnamedblk879__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 954)->__VnoInFunc_reset(vlSymsp, kind);
        if ((unnamedblk879__DOT__i__Vloopsize <= regs.size())) {
            unnamedblk879__DOT__i = ((::IData)(1U) 
                                     + unnamedblk879__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_sequencer(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_sequencer\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1904;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5032;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_5035;
    __Vtask_uvm_report_error__verbosity_5035 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_5037;
    __Vtask_uvm_report_error__line_5037 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_5039;
    __Vtask_uvm_report_error__report_enabled_checked_5039 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1905;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5040;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1906;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5041;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_5044;
    __Vtask_uvm_report_info__verbosity_5044 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_5046;
    __Vtask_uvm_report_info__line_5046 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_5048;
    __Vtask_uvm_report_info__report_enabled_checked_5048 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1907;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5049;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_9__get_full_name;
    ::std::string __VlefCall_8__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_7;
    ::IData/*31:0*/ __VlefCall_6__get_report_action;
    ::IData/*31:0*/ __VlefCall_5__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_4__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk882__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk883__DOT___local_report_object_;
    {
        if ((VlNull{} == sequencer)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1904);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1904;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5032);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_5032;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 989)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk882__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk882__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 989)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "REG_NULL_SQR"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk882__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 989)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "REG_NULL_SQR"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                __Vtask_uvm_report_error__report_enabled_checked_5039 = 1U;
                this->__Vtask_uvm_report_error__context_name_5038 = ""s;
                __Vtask_uvm_report_error__line_5037 = 0x000003ddU;
                this->__Vtask_uvm_report_error__filename_5036 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__verbosity_5035 = 0U;
                this->__Vtask_uvm_report_error__message_5034 = "Null reference specified for bus sequencer"s;
                this->__Vtask_uvm_report_error__id_5033 = "REG_NULL_SQR"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1905);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1905;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5040);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_5040;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_5033, this->__Vtask_uvm_report_error__message_5034, __Vtask_uvm_report_error__verbosity_5035, this->__Vtask_uvm_report_error__filename_5036, __Vtask_uvm_report_error__line_5037, this->__Vtask_uvm_report_error__context_name_5038, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_5039));
            }
            goto __Vlabel0;
        }
        if ((VlNull{} == adapter)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1906);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1906;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5041);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_5041;
            __VlefCall_4__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_4__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 996)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk883__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk883__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 996)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "REG_NO_ADAPT"s, __VlefCall_5__get_report_verbosity_level);
            __VlefLogAnd_7 = VL_LTES_III(32, 0x000000c8U, __VlefCall_5__get_report_verbosity_level);
            if (__VlefLogAnd_7) {
                VL_NULL_CHECK(unnamedblk883__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 996)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "REG_NO_ADAPT"s, __VlefCall_6__get_report_action);
                __VlefLogAnd_7 = (0U != __VlefCall_6__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_7))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                VL_NULL_CHECK(sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 996)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                __Vtask_uvm_report_info__report_enabled_checked_5048 = 1U;
                this->__Vtask_uvm_report_info__context_name_5047 = ""s;
                __Vtask_uvm_report_info__line_5046 = 0x000003e4U;
                this->__Vtask_uvm_report_info__filename_5045 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_info__verbosity_5044 = 0x000000c8U;
                this->__Vtask_uvm_report_info__message_5043 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Adapter not specified for map '"s, __VlefCall_8__get_full_name), "'. Accesses via this map will send abstract 'uvm_reg_item' items to sequencer '"s), __VlefCall_9__get_full_name), "'"s));
                this->__Vtask_uvm_report_info__id_5042 = "REG_NO_ADAPT"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1907);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1907;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5049);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_5049;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_5042, this->__Vtask_uvm_report_info__message_5043, __Vtask_uvm_report_info__verbosity_5044, this->__Vtask_uvm_report_info__filename_5045, __Vtask_uvm_report_info__line_5046, this->__Vtask_uvm_report_info__context_name_5047, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_5048));
            }
        }
        this->__PVT__m_sequencer = sequencer;
        this->__PVT__m_adapter = adapter;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__m_parent;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_parent_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent_map\n"); );
    // Body
    get_parent_map__Vfuncrtn = this->__PVT__m_parent_map;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_root_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_root_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_root_map\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCond_1;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_0__get_root_map;
    if ((VlNull{} == this->__PVT__m_parent_map)) {
        __VlefCond_1 = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>{this};
    } else {
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1026)->__VnoInFunc_get_root_map(vlSymsp, __VlefCall_0__get_root_map);
        __VlefCond_1 = __VlefCall_0__get_root_map;
    }
    get_root_map__Vfuncrtn = __VlefCond_1;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_base_addr(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ hier, ::QData/*63:0*/ &get_base_addr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_base_addr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::QData/*63:0*/ __VlefCall_0__get_base_addr;
    {
        get_base_addr__Vfuncrtn = 0ULL;
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_base_addr__Vfuncrtn = this->__PVT__m_base_addr;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1039)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>{this}, get_base_addr__Vfuncrtn);
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1040)->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 1U, __VlefCall_0__get_base_addr);
        get_base_addr__Vfuncrtn = (get_base_addr__Vfuncrtn 
                                   + __VlefCall_0__get_base_addr);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_n_bytes(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ hier, ::IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_n_bytes\n"); );
    // Body
    {
        get_n_bytes__Vfuncrtn = 0U;
        if ((0U == hier)) {
            get_n_bytes__Vfuncrtn = this->__PVT__m_n_bytes;
            goto __Vlabel0;
        }
        get_n_bytes__Vfuncrtn = this->__PVT__m_system_n_bytes;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_addr_unit_bytes(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_addr_unit_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_addr_unit_bytes\n"); );
    // Body
    get_addr_unit_bytes__Vfuncrtn = ((::IData)(this->__PVT__m_byte_addressing)
                                      ? 1U : this->__PVT__m_n_bytes);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_endian(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ hier, ::IData/*31:0*/ &get_endian__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_endian\n"); );
    // Body
    {
        get_endian__Vfuncrtn = 0U;
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_endian__Vfuncrtn = this->__PVT__m_endian;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1071)->__VnoInFunc_get_endian(vlSymsp, hier, get_endian__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_sequencer(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ hier, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> &get_sequencer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_sequencer\n"); );
    // Body
    {
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_sequencer__Vfuncrtn = this->__PVT__m_sequencer;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1083)->__VnoInFunc_get_sequencer(vlSymsp, hier, get_sequencer__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_adapter(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ hier, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_adapter> &get_adapter__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_adapter\n"); );
    // Body
    {
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_adapter__Vfuncrtn = this->__PVT__m_adapter;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1095)->__VnoInFunc_get_adapter(vlSymsp, hier, get_adapter__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submaps(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>> &maps, ::IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submaps\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk884__DOT__submap;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk884__DOT__submap__Vnext;
    ::CData/*0:0*/ unnamedblk884__DOT__submap__Vmore;
    unnamedblk884__DOT__submap__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk885__DOT__submap_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk885__DOT__submap___Vnext;
    ::CData/*0:0*/ unnamedblk885__DOT__submap___Vmore;
    unnamedblk885__DOT__submap___Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk885__DOT__unnamedblk886__DOT__submap;
    unnamedblk884__DOT__submap__Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk884__DOT__submap__Vnext));
    while (unnamedblk884__DOT__submap__Vmore) {
        unnamedblk884__DOT__submap = unnamedblk884__DOT__submap__Vnext;
        unnamedblk884__DOT__submap__Vmore = (0U != this->__PVT__m_submaps.next(unnamedblk884__DOT__submap__Vnext));
        maps.push_back(unnamedblk884__DOT__submap);
    }
    if ((1U == hier)) {
        unnamedblk885__DOT__submap___Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk885__DOT__submap___Vnext));
        while (unnamedblk885__DOT__submap___Vmore) {
            unnamedblk885__DOT__submap_ = unnamedblk885__DOT__submap___Vnext;
            unnamedblk885__DOT__submap___Vmore = (0U 
                                                  != this->__PVT__m_submaps.next(unnamedblk885__DOT__submap___Vnext));
            unnamedblk885__DOT__unnamedblk886__DOT__submap 
                = unnamedblk885__DOT__submap_;
            VL_NULL_CHECK(unnamedblk885__DOT__unnamedblk886__DOT__submap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1114)->__VnoInFunc_get_submaps(vlSymsp, maps, 1U);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_registers(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>> &regs, ::IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_registers\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> unnamedblk887__DOT__rg;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> unnamedblk887__DOT__rg__Vnext;
    ::CData/*0:0*/ unnamedblk887__DOT__rg__Vmore;
    unnamedblk887__DOT__rg__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk888__DOT__submap_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk888__DOT__submap___Vnext;
    ::CData/*0:0*/ unnamedblk888__DOT__submap___Vmore;
    unnamedblk888__DOT__submap___Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk888__DOT__unnamedblk889__DOT__submap;
    unnamedblk887__DOT__rg__Vmore = (0U != this->__PVT__m_regs_info.first(unnamedblk887__DOT__rg__Vnext));
    while (unnamedblk887__DOT__rg__Vmore) {
        unnamedblk887__DOT__rg = unnamedblk887__DOT__rg__Vnext;
        unnamedblk887__DOT__rg__Vmore = (0U != this->__PVT__m_regs_info.next(unnamedblk887__DOT__rg__Vnext));
        regs.push_back(unnamedblk887__DOT__rg);
    }
    if ((1U == hier)) {
        unnamedblk888__DOT__submap___Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk888__DOT__submap___Vnext));
        while (unnamedblk888__DOT__submap___Vmore) {
            unnamedblk888__DOT__submap_ = unnamedblk888__DOT__submap___Vnext;
            unnamedblk888__DOT__submap___Vmore = (0U 
                                                  != this->__PVT__m_submaps.next(unnamedblk888__DOT__submap___Vnext));
            unnamedblk888__DOT__unnamedblk889__DOT__submap 
                = unnamedblk888__DOT__submap_;
            VL_NULL_CHECK(unnamedblk888__DOT__unnamedblk889__DOT__submap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1135)->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_fields(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> &fields, ::IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_fields\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> unnamedblk890__DOT__rg_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> unnamedblk890__DOT__rg___Vnext;
    ::CData/*0:0*/ unnamedblk890__DOT__rg___Vmore;
    unnamedblk890__DOT__rg___Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> unnamedblk890__DOT__unnamedblk891__DOT__rg;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk892__DOT__submap_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk892__DOT__submap___Vnext;
    ::CData/*0:0*/ unnamedblk892__DOT__submap___Vmore;
    unnamedblk892__DOT__submap___Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk892__DOT__unnamedblk893__DOT__submap;
    unnamedblk890__DOT__rg___Vmore = (0U != this->__PVT__m_regs_info.first(unnamedblk890__DOT__rg___Vnext));
    while (unnamedblk890__DOT__rg___Vmore) {
        unnamedblk890__DOT__rg_ = unnamedblk890__DOT__rg___Vnext;
        unnamedblk890__DOT__rg___Vmore = (0U != this->__PVT__m_regs_info.next(unnamedblk890__DOT__rg___Vnext));
        unnamedblk890__DOT__unnamedblk891__DOT__rg 
            = unnamedblk890__DOT__rg_;
        VL_NULL_CHECK(unnamedblk890__DOT__unnamedblk891__DOT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1149)->__VnoInFunc_get_fields(vlSymsp, fields);
    }
    if ((1U == hier)) {
        unnamedblk892__DOT__submap___Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk892__DOT__submap___Vnext));
        while (unnamedblk892__DOT__submap___Vmore) {
            unnamedblk892__DOT__submap_ = unnamedblk892__DOT__submap___Vnext;
            unnamedblk892__DOT__submap___Vmore = (0U 
                                                  != this->__PVT__m_submaps.next(unnamedblk892__DOT__submap___Vnext));
            unnamedblk892__DOT__unnamedblk893__DOT__submap 
                = unnamedblk892__DOT__submap_;
            VL_NULL_CHECK(unnamedblk892__DOT__unnamedblk893__DOT__submap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1156)->__VnoInFunc_get_fields(vlSymsp, fields, 1U);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_memories(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>> &mems, ::IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_memories\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> unnamedblk894__DOT__mem;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> unnamedblk894__DOT__mem__Vnext;
    ::CData/*0:0*/ unnamedblk894__DOT__mem__Vmore;
    unnamedblk894__DOT__mem__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk895__DOT__submap_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk895__DOT__submap___Vnext;
    ::CData/*0:0*/ unnamedblk895__DOT__submap___Vmore;
    unnamedblk895__DOT__submap___Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk895__DOT__unnamedblk896__DOT__submap;
    unnamedblk894__DOT__mem__Vmore = (0U != this->__PVT__m_mems_info.first(unnamedblk894__DOT__mem__Vnext));
    while (unnamedblk894__DOT__mem__Vmore) {
        unnamedblk894__DOT__mem = unnamedblk894__DOT__mem__Vnext;
        unnamedblk894__DOT__mem__Vmore = (0U != this->__PVT__m_mems_info.next(unnamedblk894__DOT__mem__Vnext));
        mems.push_back(unnamedblk894__DOT__mem);
    }
    if ((1U == hier)) {
        unnamedblk895__DOT__submap___Vmore = (0U != this->__PVT__m_submaps.first(unnamedblk895__DOT__submap___Vnext));
        while (unnamedblk895__DOT__submap___Vmore) {
            unnamedblk895__DOT__submap_ = unnamedblk895__DOT__submap___Vnext;
            unnamedblk895__DOT__submap___Vmore = (0U 
                                                  != this->__PVT__m_submaps.next(unnamedblk895__DOT__submap___Vnext));
            unnamedblk895__DOT__unnamedblk896__DOT__submap 
                = unnamedblk895__DOT__submap_;
            VL_NULL_CHECK(unnamedblk895__DOT__unnamedblk896__DOT__submap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1178)->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_registers(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg>> &regs, ::IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_registers\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk897__DOT__i;
    unnamedblk897__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk897__DOT__i__Vloopsize;
    unnamedblk897__DOT__i__Vloopsize = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>> mems;
    mems.clear();
    this->__VnoInFunc_get_memories(vlSymsp, mems, hier);
    unnamedblk897__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk897__DOT__i, mems.size())) {
        unnamedblk897__DOT__i__Vloopsize = mems.size();
        VL_NULL_CHECK(mems.at(unnamedblk897__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1195)->__VnoInFunc_get_virtual_registers(vlSymsp, regs);
        if ((unnamedblk897__DOT__i__Vloopsize <= mems.size())) {
            unnamedblk897__DOT__i = ((::IData)(1U) 
                                     + unnamedblk897__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__get_name;
    ::std::string __VlefCall_0__get_full_name;
    get_full_name__Vfuncrtn = ""s;
    if ((VlNull{} == this->__PVT__m_parent)) {
        this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
    } else {
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1229)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_map_info(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> mem, ::CData/*0:0*/ error, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> &get_mem_map_info__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_map_info\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1908;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5050;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_5053;
    __Vtask_uvm_report_error__verbosity_5053 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_5055;
    __Vtask_uvm_report_error__line_5055 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_5057;
    __Vtask_uvm_report_error__report_enabled_checked_5057 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1909;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5058;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__get_full_name;
    ::std::string __VlefCall_4__get_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk899__DOT___local_report_object_;
    {
        if ((1U & (~ (0U != this->__PVT__m_mems_info.exists(mem))))) {
            if (error) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1908);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1908;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5050);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_5050;
                __VlefCall_0__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1240)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk899__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk899__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1240)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "REG_NO_MAP"s, __VlefCall_1__get_report_verbosity_level);
                __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
                if (__VlefLogAnd_3) {
                    VL_NULL_CHECK(unnamedblk899__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1240)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "REG_NO_MAP"s, __VlefCall_2__get_report_action);
                    __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_3))) {
                    VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1240)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                    __Vtask_uvm_report_error__report_enabled_checked_5057 = 1U;
                    this->__Vtask_uvm_report_error__context_name_5056 = ""s;
                    __Vtask_uvm_report_error__line_5055 = 0x000004d8U;
                    this->__Vtask_uvm_report_error__filename_5054 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
                    __Vtask_uvm_report_error__verbosity_5053 = 0U;
                    this->__Vtask_uvm_report_error__message_5052 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_4__get_name), "' not in map '"s), __VlefCall_5__get_full_name), "'"s));
                    this->__Vtask_uvm_report_error__id_5051 = "REG_NO_MAP"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1909);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1909;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5058);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_5058;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_5051, this->__Vtask_uvm_report_error__message_5052, __Vtask_uvm_report_error__verbosity_5053, this->__Vtask_uvm_report_error__filename_5054, __Vtask_uvm_report_error__line_5055, this->__Vtask_uvm_report_error__context_name_5056, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_5057));
                }
            }
            get_mem_map_info__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_mem_map_info__Vfuncrtn = this->__PVT__m_mems_info
            .at(mem);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_map_info(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> rg, ::CData/*0:0*/ error, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> &get_reg_map_info__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_map_info\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1910;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5059;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_5062;
    __Vtask_uvm_report_error__verbosity_5062 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_5064;
    __Vtask_uvm_report_error__line_5064 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_5066;
    __Vtask_uvm_report_error__report_enabled_checked_5066 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1911;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5067;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1912;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5068;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_5071;
    __Vtask_uvm_report_warning__verbosity_5071 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_5073;
    __Vtask_uvm_report_warning__line_5073 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_5075;
    __Vtask_uvm_report_warning__report_enabled_checked_5075 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1913;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5076;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_10__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_9;
    ::IData/*31:0*/ __VlefCall_8__get_report_action;
    ::IData/*31:0*/ __VlefCall_7__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_6__uvm_get_report_object;
    ::std::string __VlefCall_5__get_full_name;
    ::std::string __VlefCall_4__get_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk900__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk901__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> result;
    {
        if ((1U & (~ (0U != this->__PVT__m_regs_info.exists(rg))))) {
            if (error) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1910);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1910;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5059);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_5059;
                __VlefCall_0__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1254)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk900__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk900__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1254)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "REG_NO_MAP"s, __VlefCall_1__get_report_verbosity_level);
                __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
                if (__VlefLogAnd_3) {
                    VL_NULL_CHECK(unnamedblk900__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1254)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "REG_NO_MAP"s, __VlefCall_2__get_report_action);
                    __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_3))) {
                    VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1254)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                    __Vtask_uvm_report_error__report_enabled_checked_5066 = 1U;
                    this->__Vtask_uvm_report_error__context_name_5065 = ""s;
                    __Vtask_uvm_report_error__line_5064 = 0x000004e6U;
                    this->__Vtask_uvm_report_error__filename_5063 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
                    __Vtask_uvm_report_error__verbosity_5062 = 0U;
                    this->__Vtask_uvm_report_error__message_5061 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_4__get_name), "' not in map '"s), __VlefCall_5__get_full_name), "'"s));
                    this->__Vtask_uvm_report_error__id_5060 = "REG_NO_MAP"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1911);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1911;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5067);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_5067;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_5060, this->__Vtask_uvm_report_error__message_5061, __Vtask_uvm_report_error__verbosity_5062, this->__Vtask_uvm_report_error__filename_5063, __Vtask_uvm_report_error__line_5064, this->__Vtask_uvm_report_error__context_name_5065, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_5066));
                }
            }
            get_reg_map_info__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        result = this->__PVT__m_regs_info.at(rg);
        if ((1U & (~ VL_NULL_CHECK(result, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1259)
                   ->__PVT__is_initialized))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1912);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1912;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5068);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_5068;
            __VlefCall_6__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_6__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1260)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk901__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk901__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1260)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_7__get_report_verbosity_level);
            __VlefLogAnd_9 = VL_LTES_III(32, 0U, __VlefCall_7__get_report_verbosity_level);
            if (__VlefLogAnd_9) {
                VL_NULL_CHECK(unnamedblk901__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1260)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_8__get_report_action);
                __VlefLogAnd_9 = (0U != __VlefCall_8__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_9))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                __Vtask_uvm_report_warning__report_enabled_checked_5075 = 1U;
                this->__Vtask_uvm_report_warning__context_name_5074 = ""s;
                __Vtask_uvm_report_warning__line_5073 = 0x000004ecU;
                this->__Vtask_uvm_report_warning__filename_5072 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_warning__verbosity_5071 = 0U;
                this->__Vtask_uvm_report_warning__message_5070 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("map '"s, __VlefCall_10__get_full_name), "' does not seem to be initialized correctly, check that the top register model is locked()"s));
                this->__Vtask_uvm_report_warning__id_5069 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1913);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1913;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5076);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_5076;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_5069, this->__Vtask_uvm_report_warning__message_5070, __Vtask_uvm_report_warning__verbosity_5071, this->__Vtask_uvm_report_warning__filename_5072, __Vtask_uvm_report_warning__line_5073, this->__Vtask_uvm_report_warning__context_name_5074, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_5075));
            }
        }
        get_reg_map_info__Vfuncrtn = result;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_physical_addresses_to_map(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ base_addr, ::QData/*63:0*/ mem_offset, ::IData/*31:0*/ n_bytes, ::VlQueue<::QData/*63:0*/> &addr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> parent_map, ::IData/*31:0*/ &byte_offset, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> mem, ::IData/*31:0*/ &get_physical_addresses_to_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_physical_addresses_to_map\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_get_n_bytes__Vfuncout_1914;
    __Vfunc_get_n_bytes__Vfuncout_1914 = 0;
    ::IData/*31:0*/ __Vtask_get_physical_addresses_to_map__Vfuncout_5077;
    __Vtask_get_physical_addresses_to_map__Vfuncout_5077 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1915;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5078;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_5081;
    __Vtask_uvm_report_error__verbosity_5081 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_5083;
    __Vtask_uvm_report_error__line_5083 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_5085;
    __Vtask_uvm_report_error__report_enabled_checked_5085 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1916;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5086;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_22__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_21;
    ::IData/*31:0*/ __VlefCall_20__get_report_action;
    ::IData/*31:0*/ __VlefCall_19__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_18__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_17__get_addr_unit_bytes;
    ::IData/*31:0*/ __VlefCall_16__get_addr_unit_bytes;
    ::IData/*31:0*/ __VlefCall_15__get_endian;
    ::IData/*31:0*/ __VlefCall_14__get_addr_unit_bytes;
    ::IData/*31:0*/ __VlefCall_13__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_12__get_addr_unit_bytes;
    ::IData/*31:0*/ __VlefCall_11__get_n_bytes;
    ::CData/*0:0*/ __VlefLogAnd_10;
    ::IData/*31:0*/ __VlefCall_9__get_addr_unit_bytes;
    ::IData/*31:0*/ __VlefCall_8__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_7__ceil;
    ::IData/*31:0*/ __VlefCall_6__get_addr_unit_bytes;
    ::IData/*31:0*/ __VlefCall_5__get_addr_unit_bytes;
    ::IData/*31:0*/ __VlefCall_4__get_addr_unit_bytes;
    ::IData/*31:0*/ __VlefCall_3__get_addr_unit_bytes;
    ::IData/*31:0*/ __VlefCall_2__get_addr_unit_bytes;
    ::IData/*31:0*/ __VlefCall_1__get_n_bytes;
    ::QData/*63:0*/ __VlefCall_0__get_base_addr;
    ::QData/*63:0*/ unnamedblk912__DOT__lb;
    ::QData/*63:0*/ unnamedblk912__DOT__laddr;
    ::QData/*63:0*/ unnamedblk913__DOT__lbase_addr2;
    ::IData/*31:0*/ unnamedblk913__DOT__unnamedblk914__DOT__i;
    unnamedblk913__DOT__unnamedblk914__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk913__DOT__unnamedblk914__DOT__i__Vloopsize;
    unnamedblk913__DOT__unnamedblk914__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk913__DOT__unnamedblk915__DOT__i;
    unnamedblk913__DOT__unnamedblk915__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk913__DOT__unnamedblk915__DOT__i__Vloopsize;
    unnamedblk913__DOT__unnamedblk915__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk913__DOT__unnamedblk916__DOT__i;
    unnamedblk913__DOT__unnamedblk916__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk913__DOT__unnamedblk916__DOT__i__Vloopsize;
    unnamedblk913__DOT__unnamedblk916__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk913__DOT__unnamedblk917__DOT__i;
    unnamedblk913__DOT__unnamedblk917__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk913__DOT__unnamedblk917__DOT__i__Vloopsize;
    unnamedblk913__DOT__unnamedblk917__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk913__DOT__unnamedblk918__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk913__DOT__unnamedblk919__DOT__idx;
    unnamedblk913__DOT__unnamedblk919__DOT__idx = 0;
    ::IData/*31:0*/ unnamedblk913__DOT__unnamedblk919__DOT__idx__Vloopsize;
    unnamedblk913__DOT__unnamedblk919__DOT__idx__Vloopsize = 0;
    ::IData/*31:0*/ bus_width;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> up_map;
    ::VlQueue<::QData/*63:0*/> local_addr;
    ::QData/*63:0*/ lbase_addr;
    get_physical_addresses_to_map__Vfuncrtn = 0U;
    this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __Vfunc_get_n_bytes__Vfuncout_1914);
    bus_width = __Vfunc_get_n_bytes__Vfuncout_1914;
    local_addr.clear();
    local_addr.atDefault() = 0;
    lbase_addr = 0ULL;
    this->__VnoInFunc_get_parent_map(vlSymsp, up_map);
    if ((VlNull{} == up_map)) {
        this->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 0U, __VlefCall_0__get_base_addr);
    } else {
        VL_NULL_CHECK(up_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1380)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_0__get_base_addr);
    }
    lbase_addr = __VlefCall_0__get_base_addr;
    if ((up_map != parent_map)) {
        unnamedblk912__DOT__lb = 0ULL;
        unnamedblk912__DOT__laddr = 0ULL;
        if ((0U != mem_offset)) {
            VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1392)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_1__get_n_bytes);
            this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_2__get_addr_unit_bytes);
            base_addr = (base_addr + VL_DIV_QQQ(64, 
                                                (mem_offset 
                                                 * (::QData)((::IData)(__VlefCall_1__get_n_bytes))), (::QData)((::IData)(__VlefCall_2__get_addr_unit_bytes))));
        }
        this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_3__get_addr_unit_bytes);
        VL_NULL_CHECK(up_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1394)->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_4__get_addr_unit_bytes);
        unnamedblk912__DOT__laddr = (lbase_addr + VL_DIV_QQQ(64, 
                                                             (base_addr 
                                                              * (::QData)((::IData)(__VlefCall_3__get_addr_unit_bytes))), (::QData)((::IData)(__VlefCall_4__get_addr_unit_bytes))));
        this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_5__get_addr_unit_bytes);
        VL_NULL_CHECK(up_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1395)->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_6__get_addr_unit_bytes);
        unnamedblk912__DOT__lb = VL_MODDIV_QQQ(64, 
                                               (base_addr 
                                                * (::QData)((::IData)(__VlefCall_5__get_addr_unit_bytes))), (::QData)((::IData)(__VlefCall_6__get_addr_unit_bytes)));
        byte_offset = (byte_offset + (::IData)(unnamedblk912__DOT__lb));
        VL_NULL_CHECK(up_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1398)->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, unnamedblk912__DOT__laddr, 0ULL, 
                                                                                (n_bytes 
                                                                                + (::IData)(unnamedblk912__DOT__lb)), addr, parent_map, byte_offset, VlNull{}, __Vtask_get_physical_addresses_to_map__Vfuncout_5077);
        get_physical_addresses_to_map__Vfuncrtn = __Vtask_get_physical_addresses_to_map__Vfuncout_5077;
    } else {
        unnamedblk913__DOT__lbase_addr2 = 0ULL;
        this->__VnoInFunc_ceil(vlSymsp, n_bytes, bus_width, __VlefCall_7__ceil);
        local_addr.renew(__VlefCall_7__ceil);
        unnamedblk913__DOT__lbase_addr2 = base_addr;
        if ((0U != mem_offset)) {
            __VlefLogAnd_10 = (VlNull{} != mem);
            if (__VlefLogAnd_10) {
                VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1408)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_8__get_n_bytes);
                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_9__get_addr_unit_bytes);
                __VlefLogAnd_10 = (__VlefCall_8__get_n_bytes 
                                   >= __VlefCall_9__get_addr_unit_bytes);
            }
            if (__VlefLogAnd_10) {
                VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1409)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_11__get_n_bytes);
                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_12__get_addr_unit_bytes);
                unnamedblk913__DOT__lbase_addr2 = (base_addr 
                                                   + 
                                                   VL_DIV_QQQ(64, 
                                                              (mem_offset 
                                                               * (::QData)((::IData)(__VlefCall_11__get_n_bytes))), (::QData)((::IData)(__VlefCall_12__get_addr_unit_bytes))));
                VL_NULL_CHECK(mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1410)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_13__get_n_bytes);
                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_14__get_addr_unit_bytes);
                byte_offset = (byte_offset + (::IData)(
                                                       VL_MODDIV_QQQ(64, 
                                                                     (mem_offset 
                                                                      * (::QData)((::IData)(__VlefCall_13__get_n_bytes))), (::QData)((::IData)(__VlefCall_14__get_addr_unit_bytes)))));
            } else {
                unnamedblk913__DOT__lbase_addr2 = (base_addr 
                                                   + mem_offset);
            }
        }
        this->__VnoInFunc_get_endian(vlSymsp, 0U, __VlefCall_15__get_endian);
        if ((1U == __VlefCall_15__get_endian)) {
            unnamedblk913__DOT__unnamedblk914__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk913__DOT__unnamedblk914__DOT__i, local_addr.size())) {
                unnamedblk913__DOT__unnamedblk914__DOT__i__Vloopsize 
                    = local_addr.size();
                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_16__get_addr_unit_bytes);
                local_addr.atWrite(unnamedblk913__DOT__unnamedblk914__DOT__i) 
                    = (unnamedblk913__DOT__lbase_addr2 
                       + VL_DIV_QQQ(64, ((::QData)((::IData)(unnamedblk913__DOT__unnamedblk914__DOT__i)) 
                                         * (::QData)((::IData)(bus_width))), (::QData)((::IData)(__VlefCall_16__get_addr_unit_bytes))));
                if ((unnamedblk913__DOT__unnamedblk914__DOT__i__Vloopsize 
                     <= local_addr.size())) {
                    unnamedblk913__DOT__unnamedblk914__DOT__i 
                        = ((::IData)(1U) + unnamedblk913__DOT__unnamedblk914__DOT__i);
                }
            }
        } else if ((2U == __VlefCall_15__get_endian)) {
            unnamedblk913__DOT__unnamedblk915__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk913__DOT__unnamedblk915__DOT__i, local_addr.size())) {
                unnamedblk913__DOT__unnamedblk915__DOT__i__Vloopsize 
                    = local_addr.size();
                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_17__get_addr_unit_bytes);
                local_addr.atWrite(unnamedblk913__DOT__unnamedblk915__DOT__i) 
                    = (unnamedblk913__DOT__lbase_addr2 
                       + VL_DIV_QQQ(64, ((((::QData)((::IData)(local_addr.size())) 
                                           - 1ULL) 
                                          - (::QData)((::IData)(unnamedblk913__DOT__unnamedblk915__DOT__i))) 
                                         * (::QData)((::IData)(bus_width))), (::QData)((::IData)(__VlefCall_17__get_addr_unit_bytes))));
                if ((unnamedblk913__DOT__unnamedblk915__DOT__i__Vloopsize 
                     <= local_addr.size())) {
                    unnamedblk913__DOT__unnamedblk915__DOT__i 
                        = ((::IData)(1U) + unnamedblk913__DOT__unnamedblk915__DOT__i);
                }
            }
        } else if ((3U == __VlefCall_15__get_endian)) {
            unnamedblk913__DOT__unnamedblk916__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk913__DOT__unnamedblk916__DOT__i, local_addr.size())) {
                unnamedblk913__DOT__unnamedblk916__DOT__i__Vloopsize 
                    = local_addr.size();
                local_addr.atWrite(unnamedblk913__DOT__unnamedblk916__DOT__i) 
                    = unnamedblk913__DOT__lbase_addr2;
                if ((unnamedblk913__DOT__unnamedblk916__DOT__i__Vloopsize 
                     <= local_addr.size())) {
                    unnamedblk913__DOT__unnamedblk916__DOT__i 
                        = ((::IData)(1U) + unnamedblk913__DOT__unnamedblk916__DOT__i);
                }
            }
        } else if ((4U == __VlefCall_15__get_endian)) {
            unnamedblk913__DOT__unnamedblk917__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk913__DOT__unnamedblk917__DOT__i, local_addr.size())) {
                unnamedblk913__DOT__unnamedblk917__DOT__i__Vloopsize 
                    = local_addr.size();
                local_addr.atWrite(unnamedblk913__DOT__unnamedblk917__DOT__i) 
                    = unnamedblk913__DOT__lbase_addr2;
                if ((unnamedblk913__DOT__unnamedblk917__DOT__i__Vloopsize 
                     <= local_addr.size())) {
                    unnamedblk913__DOT__unnamedblk917__DOT__i 
                        = ((::IData)(1U) + unnamedblk913__DOT__unnamedblk917__DOT__i);
                }
            }
        } else {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1915);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1915;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5078);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_5078;
            __VlefCall_18__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_18__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1445)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk913__DOT__unnamedblk918__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk913__DOT__unnamedblk918__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1445)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/REG/MAPNOENDIANESS"s, __VlefCall_19__get_report_verbosity_level);
            __VlefLogAnd_21 = VL_LTES_III(32, 0U, __VlefCall_19__get_report_verbosity_level);
            if (__VlefLogAnd_21) {
                VL_NULL_CHECK(unnamedblk913__DOT__unnamedblk918__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1445)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/REG/MAPNOENDIANESS"s, __VlefCall_20__get_report_action);
                __VlefLogAnd_21 = (0U != __VlefCall_20__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_21))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_22__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_5085 = 1U;
                this->__Vtask_uvm_report_error__context_name_5084 = ""s;
                __Vtask_uvm_report_error__line_5083 = 0x000005a5U;
                this->__Vtask_uvm_report_error__filename_5082 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__verbosity_5081 = 0U;
                this->__Vtask_uvm_report_error__message_5080 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("Map has no specified endianness. "s, VL_SFORMATF_N_NX("Cannot access %0d bytes register via its %0d byte \"%s\" interface",3
                                                                                , '#',32,n_bytes
                                                                                , '~',32,bus_width
                                                                                , 'S',&(__VlefCall_22__get_full_name)) ));
                this->__Vtask_uvm_report_error__id_5079 = "UVM/REG/MAPNOENDIANESS"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1916);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1916;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5086);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_5086;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_5079, this->__Vtask_uvm_report_error__message_5080, __Vtask_uvm_report_error__verbosity_5081, this->__Vtask_uvm_report_error__filename_5082, __Vtask_uvm_report_error__line_5083, this->__Vtask_uvm_report_error__context_name_5084, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_5085));
            }
        }
        addr.renew_copy(local_addr.size(), local_addr);
        unnamedblk913__DOT__unnamedblk919__DOT__idx = 0U;
        while (VL_LTS_III(32, unnamedblk913__DOT__unnamedblk919__DOT__idx, addr.size())) {
            unnamedblk913__DOT__unnamedblk919__DOT__idx__Vloopsize 
                = addr.size();
            addr.atWrite(unnamedblk913__DOT__unnamedblk919__DOT__idx) 
                = (addr.at(unnamedblk913__DOT__unnamedblk919__DOT__idx) 
                   + lbase_addr);
            if ((unnamedblk913__DOT__unnamedblk919__DOT__idx__Vloopsize 
                 <= addr.size())) {
                unnamedblk913__DOT__unnamedblk919__DOT__idx 
                    = ((::IData)(1U) + unnamedblk913__DOT__unnamedblk919__DOT__idx);
            }
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_physical_addresses(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ base_addr, ::QData/*63:0*/ mem_offset, ::IData/*31:0*/ n_bytes, ::VlQueue<::QData/*63:0*/> &addr, ::IData/*31:0*/ &get_physical_addresses__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_physical_addresses\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_get_physical_addresses_to_map__Vfuncout_1917;
    __Vfunc_get_physical_addresses_to_map__Vfuncout_1917 = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ skip;
    get_physical_addresses__Vfuncrtn = 0U;
    skip = 0U;
    this->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, base_addr, mem_offset, n_bytes, addr, VlNull{}, skip, VlNull{}, __Vfunc_get_physical_addresses_to_map__Vfuncout_1917);
    get_physical_addresses__Vfuncrtn = __Vfunc_get_physical_addresses_to_map__Vfuncout_1917;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submap_offset(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> submap, ::QData/*63:0*/ &get_submap_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submap_offset\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1918;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5087;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_5090;
    __Vtask_uvm_report_error__verbosity_5090 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_5092;
    __Vtask_uvm_report_error__line_5092 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_5094;
    __Vtask_uvm_report_error__report_enabled_checked_5094 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1919;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5095;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1920;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5096;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_5099;
    __Vtask_uvm_report_error__verbosity_5099 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_5101;
    __Vtask_uvm_report_error__line_5101 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_5103;
    __Vtask_uvm_report_error__report_enabled_checked_5103 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1921;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5104;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_9__get_full_name;
    ::std::string __VlefCall_8__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_7;
    ::IData/*31:0*/ __VlefCall_6__get_report_action;
    ::IData/*31:0*/ __VlefCall_5__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_4__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk922__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk923__DOT___local_report_object_;
    {
        get_submap_offset__Vfuncrtn = 0ULL;
        if ((VlNull{} == submap)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1918);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1918;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5087);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_5087;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1501)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk922__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk922__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1501)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "REG/NULL"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk922__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1501)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "REG/NULL"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                __Vtask_uvm_report_error__report_enabled_checked_5094 = 1U;
                this->__Vtask_uvm_report_error__context_name_5093 = ""s;
                __Vtask_uvm_report_error__line_5092 = 0x000005ddU;
                this->__Vtask_uvm_report_error__filename_5091 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__verbosity_5090 = 0U;
                this->__Vtask_uvm_report_error__message_5089 = "set_submap_offset: submap handle is null"s;
                this->__Vtask_uvm_report_error__id_5088 = "REG/NULL"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1919);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1919;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5095);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_5095;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_5088, this->__Vtask_uvm_report_error__message_5089, __Vtask_uvm_report_error__verbosity_5090, this->__Vtask_uvm_report_error__filename_5091, __Vtask_uvm_report_error__line_5092, this->__Vtask_uvm_report_error__context_name_5093, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_5094));
            }
            get_submap_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        if ((1U & (~ (0U != this->__PVT__m_submaps.exists(submap))))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1920);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1920;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5096);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_5096;
            __VlefCall_4__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_4__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1506)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk923__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk923__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1506)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_5__get_report_verbosity_level);
            __VlefLogAnd_7 = VL_LTES_III(32, 0U, __VlefCall_5__get_report_verbosity_level);
            if (__VlefLogAnd_7) {
                VL_NULL_CHECK(unnamedblk923__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1506)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_6__get_report_action);
                __VlefLogAnd_7 = (0U != __VlefCall_6__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_7))) {
                VL_NULL_CHECK(submap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1506)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_5103 = 1U;
                this->__Vtask_uvm_report_error__context_name_5102 = ""s;
                __Vtask_uvm_report_error__line_5101 = 0x000005e2U;
                this->__Vtask_uvm_report_error__filename_5100 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__verbosity_5099 = 0U;
                this->__Vtask_uvm_report_error__message_5098 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Map '"s, __VlefCall_8__get_full_name), "' is not a submap of '"s), __VlefCall_9__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__id_5097 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1921);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1921;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5104);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_5104;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_5097, this->__Vtask_uvm_report_error__message_5098, __Vtask_uvm_report_error__verbosity_5099, this->__Vtask_uvm_report_error__filename_5100, __Vtask_uvm_report_error__line_5101, this->__Vtask_uvm_report_error__context_name_5102, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_5103));
            }
            get_submap_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        get_submap_offset__Vfuncrtn = this->__PVT__m_submaps
            .at(submap);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xget_bus_infoX(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, ::IData/*31:0*/ &size, ::IData/*31:0*/ &lsb, ::IData/*31:0*/ &addr_skip) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xget_bus_infoX\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1922;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5105;
    ::IData/*31:0*/ __Vtask_get_n_bits__Vfuncout_5106;
    __Vtask_get_n_bits__Vfuncout_5106 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1923;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5107;
    ::IData/*31:0*/ __Vtask_get_n_bits__Vfuncout_5108;
    __Vtask_get_n_bits__Vfuncout_5108 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1924;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5109;
    ::IData/*31:0*/ __Vtask_get_n_bits__Vfuncout_5110;
    __Vtask_get_n_bits__Vfuncout_5110 = 0;
    ::IData/*31:0*/ __Vtask_get_lsb_pos__Vfuncout_5111;
    __Vtask_get_lsb_pos__Vfuncout_5111 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_31__get_n_bytes;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> __VlefCall_30__get_parent;
    ::std::string __VlefCall_29__get_name;
    ::CData/*0:0*/ __VlefLogAnd_28;
    ::IData/*31:0*/ __VlefCall_27__get_report_action;
    ::IData/*31:0*/ __VlefCall_26__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_25__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogOr_24;
    ::IData/*31:0*/ __VlefExpr_23;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_22__get_element;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_21__get_element;
    ::IData/*31:0*/ __VlefCall_20__get_element_kind;
    ::std::string __VlefCall_19__get_name;
    ::CData/*0:0*/ __VlefLogAnd_18;
    ::IData/*31:0*/ __VlefCall_17__get_report_action;
    ::IData/*31:0*/ __VlefCall_16__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_15__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogOr_14;
    ::IData/*31:0*/ __VlefExpr_13;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_12__get_element;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_11__get_element;
    ::IData/*31:0*/ __VlefCall_10__get_element_kind;
    ::std::string __VlefCall_9__get_name;
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_5__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogOr_4;
    ::IData/*31:0*/ __VlefExpr_3;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_2__get_element;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_1__get_element;
    ::IData/*31:0*/ __VlefCall_0__get_element_kind;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> unnamedblk954__DOT__mem;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk954__DOT__unnamedblk955__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> unnamedblk956__DOT__rg;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk956__DOT__unnamedblk957__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk958__DOT__field;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk958__DOT__unnamedblk959__DOT___local_report_object_;
    size = 0U;
    lsb = 0U;
    addr_skip = 0U;
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1753)->__VnoInFunc_get_element_kind(vlSymsp, __VlefCall_0__get_element_kind);
    if ((2U == __VlefCall_0__get_element_kind)) {
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1755)->__VnoInFunc_get_element(vlSymsp, __VlefCall_1__get_element);
        __VlefLogOr_4 = (VlNull{} == __VlefCall_1__get_element);
        if ((1U & (~ (::IData)(__VlefLogOr_4)))) {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1755)->__VnoInFunc_get_element(vlSymsp, __VlefCall_2__get_element);
            __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__get_element, unnamedblk954__DOT__mem);
            __VlefLogOr_4 = (1U & (~ (0U != __VlefExpr_3)));
        }
        if (__VlefLogOr_4) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1922);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1922;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5105);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_5105;
            __VlefCall_5__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1757)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk954__DOT__unnamedblk955__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk954__DOT__unnamedblk955__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1757)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "REG/CAST"s, __VlefCall_6__get_report_verbosity_level);
            __VlefLogAnd_8 = VL_LTES_III(32, 0U, __VlefCall_6__get_report_verbosity_level);
            if (__VlefLogAnd_8) {
                VL_NULL_CHECK(unnamedblk954__DOT__unnamedblk955__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1757)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "REG/CAST"s, __VlefCall_7__get_report_action);
                __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_8))) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1757)->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CAST"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg_item 'element_kind' is UVM_MEM, but 'element' does not point to a memory: "s, __VlefCall_9__get_name)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s, 0x000006ddU, ""s, 1U);
            }
        }
        this->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, unnamedblk954__DOT__mem, 1U, map_info);
        VL_NULL_CHECK(unnamedblk954__DOT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1760)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__Vfuncout_5106);
        size = __Vtask_get_n_bits__Vfuncout_5106;
    } else {
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1762)->__VnoInFunc_get_element_kind(vlSymsp, __VlefCall_10__get_element_kind);
        if ((0U == __VlefCall_10__get_element_kind)) {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1764)->__VnoInFunc_get_element(vlSymsp, __VlefCall_11__get_element);
            __VlefLogOr_14 = (VlNull{} == __VlefCall_11__get_element);
            if ((1U & (~ (::IData)(__VlefLogOr_14)))) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1764)->__VnoInFunc_get_element(vlSymsp, __VlefCall_12__get_element);
                __VlefExpr_13 = VL_CAST_DYNAMIC(__VlefCall_12__get_element, unnamedblk956__DOT__rg);
                __VlefLogOr_14 = (1U & (~ (0U != __VlefExpr_13)));
            }
            if (__VlefLogOr_14) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1923);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1923;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5107);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_5107;
                __VlefCall_15__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_15__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1766)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk956__DOT__unnamedblk957__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk956__DOT__unnamedblk957__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1766)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "REG/CAST"s, __VlefCall_16__get_report_verbosity_level);
                __VlefLogAnd_18 = VL_LTES_III(32, 0U, __VlefCall_16__get_report_verbosity_level);
                if (__VlefLogAnd_18) {
                    VL_NULL_CHECK(unnamedblk956__DOT__unnamedblk957__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1766)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "REG/CAST"s, __VlefCall_17__get_report_action);
                    __VlefLogAnd_18 = (0U != __VlefCall_17__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_18))) {
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1766)->__VnoInFunc_get_name(vlSymsp, __VlefCall_19__get_name);
                    vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CAST"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg_item 'element_kind' is UVM_REG, but 'element' does not point to a register: "s, __VlefCall_19__get_name)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s, 0x000006e6U, ""s, 1U);
                }
            }
            this->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, unnamedblk956__DOT__rg, 1U, map_info);
            VL_NULL_CHECK(unnamedblk956__DOT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1769)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__Vfuncout_5108);
            size = __Vtask_get_n_bits__Vfuncout_5108;
        } else {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1771)->__VnoInFunc_get_element_kind(vlSymsp, __VlefCall_20__get_element_kind);
            if ((1U == __VlefCall_20__get_element_kind)) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1773)->__VnoInFunc_get_element(vlSymsp, __VlefCall_21__get_element);
                __VlefLogOr_24 = (VlNull{} == __VlefCall_21__get_element);
                if ((1U & (~ (::IData)(__VlefLogOr_24)))) {
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1773)->__VnoInFunc_get_element(vlSymsp, __VlefCall_22__get_element);
                    __VlefExpr_23 = VL_CAST_DYNAMIC(__VlefCall_22__get_element, unnamedblk958__DOT__field);
                    __VlefLogOr_24 = (1U & (~ (0U != __VlefExpr_23)));
                }
                if (__VlefLogOr_24) {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1924);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1924;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5109);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_5109;
                    __VlefCall_25__uvm_get_report_object 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                    VL_NULL_CHECK(__VlefCall_25__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1775)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk958__DOT__unnamedblk959__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk958__DOT__unnamedblk959__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1775)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "REG/CAST"s, __VlefCall_26__get_report_verbosity_level);
                    __VlefLogAnd_28 = VL_LTES_III(32, 0U, __VlefCall_26__get_report_verbosity_level);
                    if (__VlefLogAnd_28) {
                        VL_NULL_CHECK(unnamedblk958__DOT__unnamedblk959__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1775)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "REG/CAST"s, __VlefCall_27__get_report_action);
                        __VlefLogAnd_28 = (0U != __VlefCall_27__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_28))) {
                        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1775)->__VnoInFunc_get_name(vlSymsp, __VlefCall_29__get_name);
                        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CAST"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg_item 'element_kind' is UVM_FIELD, but 'element' does not point to a field: "s, __VlefCall_29__get_name)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s, 0x000006efU, ""s, 1U);
                    }
                }
                VL_NULL_CHECK(unnamedblk958__DOT__field, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1777)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_30__get_parent);
                this->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, __VlefCall_30__get_parent, 1U, map_info);
                VL_NULL_CHECK(unnamedblk958__DOT__field, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1778)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__Vfuncout_5110);
                size = __Vtask_get_n_bits__Vfuncout_5110;
                VL_NULL_CHECK(unnamedblk958__DOT__field, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1779)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__Vfuncout_5111);
                lsb = __Vtask_get_lsb_pos__Vfuncout_5111;
                this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_31__get_n_bytes);
                addr_skip = VL_DIV_III(32, lsb, (__VlefCall_31__get_n_bytes 
                                                 << 3U));
            }
        }
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_write\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1925;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5112;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1926;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5113;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_15__get_priority;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_14__get_parent_sequence;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_13__get_parent_sequence;
    ::std::string __VlefCall_12__get_type_name;
    ::std::string __VlefCall_11__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_10;
    ::IData/*31:0*/ __VlefCall_9__get_report_action;
    ::IData/*31:0*/ __VlefCall_8__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_7__uvm_get_report_object;
    ::IData/*31:0*/ __VlefExpr_6;
    ::std::string __VlefCall_5__get_type_name;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> unnamedblk960__DOT__o;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> unnamedblk960__DOT__seq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk960__DOT__unnamedblk961__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk960__DOT__unnamedblk962__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_> unnamedblk963__DOT__end_event;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi5f4a92bc> unnamedblk963__DOT__ep;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> tmp_parent_seq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> system_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_seq_base> parent_proxy;
    this->__VnoInFunc_get_root_map(vlSymsp, system_map);
    VL_NULL_CHECK(system_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1793)->__VnoInFunc_get_adapter(vlSymsp, 1U, adapter);
    VL_NULL_CHECK(system_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1794)->__VnoInFunc_get_sequencer(vlSymsp, 1U, sequencer);
    if (((VlNull{} != adapter) && (VlNull{} != VL_NULL_CHECK(adapter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1797)
                                   ->__PVT__parent_sequence))) {
        VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1800)
                      ->__PVT__parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1800)->__VnoInFunc_clone(vlProcess, vlSymsp, unnamedblk960__DOT__o);
        if ((VlNull{} == unnamedblk960__DOT__o)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1925);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1925;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5112);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_5112;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1807)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk960__DOT__unnamedblk961__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk960__DOT__unnamedblk961__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1807)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "REG/CLONE"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk960__DOT__unnamedblk961__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1807)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "REG/CLONE"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1807)
                              ->__PVT__parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1807)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1807)
                              ->__PVT__parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1807)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CLONE"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("failed to clone adapter's parent sequence: '"s, __VlefCall_4__get_full_name), "' (of type '"s), __VlefCall_5__get_type_name), "')"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s, 0x0000070fU, ""s, 1U);
            }
        }
        __VlefExpr_6 = VL_CAST_DYNAMIC(unnamedblk960__DOT__o, unnamedblk960__DOT__seq);
        if ((1U & (~ (0U != __VlefExpr_6)))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1926);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1926;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5113);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_5113;
            __VlefCall_7__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_7__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1815)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk960__DOT__unnamedblk962__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk960__DOT__unnamedblk962__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1815)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "REG/CAST"s, __VlefCall_8__get_report_verbosity_level);
            __VlefLogAnd_10 = VL_LTES_III(32, 0U, __VlefCall_8__get_report_verbosity_level);
            if (__VlefLogAnd_10) {
                VL_NULL_CHECK(unnamedblk960__DOT__unnamedblk962__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1815)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "REG/CAST"s, __VlefCall_9__get_report_action);
                __VlefLogAnd_10 = (0U != __VlefCall_9__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_10))) {
                VL_NULL_CHECK(unnamedblk960__DOT__o, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1815)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                VL_NULL_CHECK(unnamedblk960__DOT__o, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1815)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_12__get_type_name);
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CAST"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("failed to cast: '"s, __VlefCall_11__get_full_name), "' (of type '"s), __VlefCall_12__get_type_name), "') to uvm_sequence_base!"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s, 0x00000717U, ""s, 1U);
            }
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1817)->__VnoInFunc_get_parent_sequence(vlSymsp, __VlefCall_13__get_parent_sequence);
        VL_NULL_CHECK(unnamedblk960__DOT__seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1817)->__VnoInFunc_set_parent_sequence(vlSymsp, __VlefCall_13__get_parent_sequence);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1818)->__VnoInFunc_set_parent_sequence(vlSymsp, unnamedblk960__DOT__seq);
        tmp_parent_seq = unnamedblk960__DOT__seq;
    }
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1822)->__VnoInFunc_get_parent_sequence(vlSymsp, __VlefCall_14__get_parent_sequence);
    if ((VlNull{} == __VlefCall_14__get_parent_sequence)) {
        parent_proxy = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_seq_base, vlProcess, vlSymsp, "default_parent_seq"s);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1824)->__VnoInFunc_set_parent_sequence(vlSymsp, parent_proxy);
        tmp_parent_seq = parent_proxy;
    }
    if ((VlNull{} == adapter)) {
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1831)->__VnoInFunc_get_event_pool(vlSymsp, unnamedblk963__DOT__ep);
        VL_NULL_CHECK(unnamedblk963__DOT__ep, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1832)->__VnoInFunc_get(vlProcess, vlSymsp, "end"s, unnamedblk963__DOT__end_event);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1833)->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1834)->__VnoInFunc_get_parent_sequence(vlSymsp, tmp_parent_seq);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1835)->__VnoInFunc_get_priority(vlSymsp, __VlefCall_15__get_priority);
        co_await VL_NULL_CHECK(tmp_parent_seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1835)->__VnoInFunc_start_item(vlProcess, vlSymsp, rw, __VlefCall_15__get_priority, VlNull{});
        co_await VL_NULL_CHECK(tmp_parent_seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1836)->__VnoInFunc_finish_item(vlProcess, vlSymsp, rw, 0xffffffffU);
        co_await VL_NULL_CHECK(unnamedblk963__DOT__end_event, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1837)->__VnoInFunc_wait_on(vlProcess, vlSymsp, 0U);
    } else {
        co_await this->__VnoInFunc_do_bus_write(vlProcess, vlSymsp, rw, sequencer, adapter);
    }
    if ((VlNull{} != tmp_parent_seq)) {
        VL_NULL_CHECK(sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1845)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, tmp_parent_seq);
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_read\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1927;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5114;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1928;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5115;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_15__get_priority;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_14__get_parent_sequence;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_13__get_parent_sequence;
    ::std::string __VlefCall_12__get_type_name;
    ::std::string __VlefCall_11__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_10;
    ::IData/*31:0*/ __VlefCall_9__get_report_action;
    ::IData/*31:0*/ __VlefCall_8__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_7__uvm_get_report_object;
    ::IData/*31:0*/ __VlefExpr_6;
    ::std::string __VlefCall_5__get_type_name;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> unnamedblk964__DOT__o;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> unnamedblk964__DOT__seq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk964__DOT__unnamedblk965__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk964__DOT__unnamedblk966__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_> unnamedblk967__DOT__end_event;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi5f4a92bc> unnamedblk967__DOT__ep;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> tmp_parent_seq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> system_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_seq_base> parent_proxy;
    this->__VnoInFunc_get_root_map(vlSymsp, system_map);
    VL_NULL_CHECK(system_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1858)->__VnoInFunc_get_adapter(vlSymsp, 1U, adapter);
    VL_NULL_CHECK(system_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1859)->__VnoInFunc_get_sequencer(vlSymsp, 1U, sequencer);
    if (((VlNull{} != adapter) && (VlNull{} != VL_NULL_CHECK(adapter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1862)
                                   ->__PVT__parent_sequence))) {
        VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1865)
                      ->__PVT__parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1865)->__VnoInFunc_clone(vlProcess, vlSymsp, unnamedblk964__DOT__o);
        if ((VlNull{} == unnamedblk964__DOT__o)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1927);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1927;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5114);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_5114;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1872)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk964__DOT__unnamedblk965__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk964__DOT__unnamedblk965__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1872)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "REG/CLONE"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk964__DOT__unnamedblk965__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1872)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "REG/CLONE"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1872)
                              ->__PVT__parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1872)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1872)
                              ->__PVT__parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1872)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CLONE"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("failed to clone adapter's parent sequence: '"s, __VlefCall_4__get_full_name), "' (of type '"s), __VlefCall_5__get_type_name), "')"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s, 0x00000750U, ""s, 1U);
            }
        }
        __VlefExpr_6 = VL_CAST_DYNAMIC(unnamedblk964__DOT__o, unnamedblk964__DOT__seq);
        if ((1U & (~ (0U != __VlefExpr_6)))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1928);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1928;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5115);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_5115;
            __VlefCall_7__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_7__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1880)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk964__DOT__unnamedblk966__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk964__DOT__unnamedblk966__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1880)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "REG/CAST"s, __VlefCall_8__get_report_verbosity_level);
            __VlefLogAnd_10 = VL_LTES_III(32, 0U, __VlefCall_8__get_report_verbosity_level);
            if (__VlefLogAnd_10) {
                VL_NULL_CHECK(unnamedblk964__DOT__unnamedblk966__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1880)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "REG/CAST"s, __VlefCall_9__get_report_action);
                __VlefLogAnd_10 = (0U != __VlefCall_9__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_10))) {
                VL_NULL_CHECK(unnamedblk964__DOT__o, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1880)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                VL_NULL_CHECK(unnamedblk964__DOT__o, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1880)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_12__get_type_name);
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CAST"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("failed to cast: '"s, __VlefCall_11__get_full_name), "' (of type '"s), __VlefCall_12__get_type_name), "') to uvm_sequence_base!"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s, 0x00000758U, ""s, 1U);
            }
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1882)->__VnoInFunc_get_parent_sequence(vlSymsp, __VlefCall_13__get_parent_sequence);
        VL_NULL_CHECK(unnamedblk964__DOT__seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1882)->__VnoInFunc_set_parent_sequence(vlSymsp, __VlefCall_13__get_parent_sequence);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1883)->__VnoInFunc_set_parent_sequence(vlSymsp, unnamedblk964__DOT__seq);
        tmp_parent_seq = unnamedblk964__DOT__seq;
    }
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1887)->__VnoInFunc_get_parent_sequence(vlSymsp, __VlefCall_14__get_parent_sequence);
    if ((VlNull{} == __VlefCall_14__get_parent_sequence)) {
        parent_proxy = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_seq_base, vlProcess, vlSymsp, "default_parent_seq"s);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1889)->__VnoInFunc_set_parent_sequence(vlSymsp, parent_proxy);
        tmp_parent_seq = parent_proxy;
    }
    if ((VlNull{} == adapter)) {
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1896)->__VnoInFunc_get_event_pool(vlSymsp, unnamedblk967__DOT__ep);
        VL_NULL_CHECK(unnamedblk967__DOT__ep, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1897)->__VnoInFunc_get(vlProcess, vlSymsp, "end"s, unnamedblk967__DOT__end_event);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1898)->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1899)->__VnoInFunc_get_parent_sequence(vlSymsp, tmp_parent_seq);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1900)->__VnoInFunc_get_priority(vlSymsp, __VlefCall_15__get_priority);
        co_await VL_NULL_CHECK(tmp_parent_seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1900)->__VnoInFunc_start_item(vlProcess, vlSymsp, rw, __VlefCall_15__get_priority, VlNull{});
        co_await VL_NULL_CHECK(tmp_parent_seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1901)->__VnoInFunc_finish_item(vlProcess, vlSymsp, rw, 0xffffffffU);
        co_await VL_NULL_CHECK(unnamedblk967__DOT__end_event, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1902)->__VnoInFunc_wait_on(vlProcess, vlSymsp, 0U);
    } else {
        co_await this->__VnoInFunc_do_bus_read(vlProcess, vlSymsp, rw, sequencer, adapter);
    }
    if ((VlNull{} != tmp_parent_seq)) {
        VL_NULL_CHECK(sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1910)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, tmp_parent_seq);
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_do_bus_access(vlProcess, vlSymsp, rw, sequencer, adapter);
    co_return;
}

extern const ::VlUnpacked<::std::string, 4> Vtb_top__ConstPool__CONSARRAY_10;

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_perform_accesses(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<Vtb_top_uvm_reg_bus_op__struct__0> &accesses, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_perform_accesses\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_reg2bus__Vfuncout_5116;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1929;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5117;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get_base_response__response_5118;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1930;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5119;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_5122;
    __Vtask_uvm_report_info__verbosity_5122 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_5124;
    __Vtask_uvm_report_info__line_5124 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_5126;
    __Vtask_uvm_report_info__report_enabled_checked_5126 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1931;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5127;
    ::std::string __Vtemp_3;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_20__get_status;
    ::std::string __VlefCall_19__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_18;
    ::IData/*31:0*/ __VlefCall_17__get_report_action;
    ::IData/*31:0*/ __VlefCall_16__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_15__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogOr_13;
    ::IData/*31:0*/ __VlefCall_12__get_kind;
    ::IData/*31:0*/ __VlefCall_11__get_kind;
    ::IData/*31:0*/ __VlefCall_10__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_9__get_transaction_id;
    ::IData/*31:0*/ __VlefCall_8__get_priority;
    ::std::string __VlefCall_7__get_name;
    ::CData/*0:0*/ __VlefLogAnd_6;
    ::IData/*31:0*/ __VlefCall_5__get_report_action;
    ::IData/*31:0*/ __VlefCall_4__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_3__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogOr_2;
    ::IData/*31:0*/ __VlefCall_1__get_kind;
    ::IData/*31:0*/ __VlefCall_0__get_kind;
    ::IData/*31:0*/ unnamedblk968__DOT__i;
    unnamedblk968__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk968__DOT__i__Vloopsize;
    unnamedblk968__DOT__i__Vloopsize = 0;
    Vtb_top_uvm_reg_bus_op__struct__0 unnamedblk968__DOT__unnamedblk969__DOT__rw_access;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> unnamedblk968__DOT__unnamedblk969__DOT__bus_req;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> unnamedblk968__DOT__unnamedblk969__DOT__rw_parent_seq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk968__DOT__unnamedblk969__DOT__rw_map;
    ::IData/*31:0*/ unnamedblk968__DOT__unnamedblk969__DOT__rw_status;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk968__DOT__unnamedblk969__DOT__unnamedblk970__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_> unnamedblk968__DOT__unnamedblk969__DOT__unnamedblk971__DOT__end_event;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi5f4a92bc> unnamedblk968__DOT__unnamedblk969__DOT__unnamedblk971__DOT__ep;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> unnamedblk968__DOT__unnamedblk969__DOT__unnamedblk972__DOT__bus_rsp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk968__DOT__unnamedblk969__DOT__unnamedblk973__DOT___local_report_object_;
    ::std::string op;
    ::QData/*63:0*/ data;
    ::IData/*31:0*/ endian;
    op = ""s;
    data = 0;
    endian = 0U;
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1935)->__VnoInFunc_get_kind(vlSymsp, __VlefCall_0__get_kind);
    __VlefLogOr_2 = (0U == __VlefCall_0__get_kind);
    if ((1U & (~ (::IData)(__VlefLogOr_2)))) {
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1935)->__VnoInFunc_get_kind(vlSymsp, __VlefCall_1__get_kind);
        __VlefLogOr_2 = (2U == __VlefCall_1__get_kind);
    }
    op = VL_CVT_PACK_STR_NQ(((::IData)(__VlefLogOr_2)
                              ? 0x0000000052656164ULL
                              : 0x00000057726f7465ULL));
    this->__VnoInFunc_get_endian(vlSymsp, 0U, endian);
    if ((VlNull{} != this->__PVT__policy)) {
        VL_NULL_CHECK(this->__PVT__policy, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1941)->__VnoInFunc_order(vlSymsp, accesses);
    }
    {
        unnamedblk968__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk968__DOT__i, accesses.size())) {
            unnamedblk968__DOT__i__Vloopsize = accesses.size();
            unnamedblk968__DOT__unnamedblk969__DOT__rw_access 
                = accesses.at(unnamedblk968__DOT__i);
            unnamedblk968__DOT__unnamedblk969__DOT__rw_status = 0U;
            if (((1U == unnamedblk968__DOT__unnamedblk969__DOT__rw_access
                  .__PVT__kind) & (2U == endian))) {
                unnamedblk968__DOT__unnamedblk969__DOT__rw_access.__PVT__data 
                    = VL_STREAML_FAST_QQI(64, unnamedblk968__DOT__unnamedblk969__DOT__rw_access
                                          .__PVT__data, 3);
            }
            VL_NULL_CHECK(adapter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1957)->__VnoInFunc_m_set_item(vlSymsp, rw);
            VL_NULL_CHECK(adapter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1958)->__VnoInFunc_reg2bus(vlProcess, vlSymsp, unnamedblk968__DOT__unnamedblk969__DOT__rw_access, __Vtask_reg2bus__Vfuncout_5116);
            unnamedblk968__DOT__unnamedblk969__DOT__bus_req 
                = __Vtask_reg2bus__Vfuncout_5116;
            VL_NULL_CHECK(adapter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1959)->__VnoInFunc_m_set_item(vlSymsp, VlNull{});
            if ((VlNull{} == unnamedblk968__DOT__unnamedblk969__DOT__bus_req)) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1929);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1929;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5117);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_5117;
                __VlefCall_3__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_3__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1962)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk968__DOT__unnamedblk969__DOT__unnamedblk970__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk968__DOT__unnamedblk969__DOT__unnamedblk970__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1962)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "RegMem"s, __VlefCall_4__get_report_verbosity_level);
                __VlefLogAnd_6 = VL_LTES_III(32, 0U, __VlefCall_4__get_report_verbosity_level);
                if (__VlefLogAnd_6) {
                    VL_NULL_CHECK(unnamedblk968__DOT__unnamedblk969__DOT__unnamedblk970__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1962)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "RegMem"s, __VlefCall_5__get_report_action);
                    __VlefLogAnd_6 = (0U != __VlefCall_5__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_6))) {
                    VL_NULL_CHECK(adapter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1962)->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
                    vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegMem"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("adapter ["s, __VlefCall_7__get_name), "] didnt return a bus transaction"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s, 0x000007aaU, ""s, 1U);
                }
            }
            VL_NULL_CHECK(unnamedblk968__DOT__unnamedblk969__DOT__bus_req, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1965)->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1966)->__VnoInFunc_get_parent_sequence(vlSymsp, unnamedblk968__DOT__unnamedblk969__DOT__rw_parent_seq);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1967)->__VnoInFunc_get_priority(vlSymsp, __VlefCall_8__get_priority);
            co_await VL_NULL_CHECK(unnamedblk968__DOT__unnamedblk969__DOT__rw_parent_seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1967)->__VnoInFunc_start_item(vlProcess, vlSymsp, unnamedblk968__DOT__unnamedblk969__DOT__bus_req, __VlefCall_8__get_priority, VlNull{});
            if (((VlNull{} != unnamedblk968__DOT__unnamedblk969__DOT__rw_parent_seq) 
                 & (0U == unnamedblk968__DOT__i))) {
                VL_NULL_CHECK(unnamedblk968__DOT__unnamedblk969__DOT__rw_parent_seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1971)->__VnoInFunc_mid_do(vlSymsp, rw);
            }
            co_await VL_NULL_CHECK(unnamedblk968__DOT__unnamedblk969__DOT__rw_parent_seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1975)->__VnoInFunc_finish_item(vlProcess, vlSymsp, unnamedblk968__DOT__unnamedblk969__DOT__bus_req, 0xffffffffU);
            VL_NULL_CHECK(unnamedblk968__DOT__unnamedblk969__DOT__bus_req, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1979)->__VnoInFunc_get_event_pool(vlSymsp, unnamedblk968__DOT__unnamedblk969__DOT__unnamedblk971__DOT__ep);
            VL_NULL_CHECK(unnamedblk968__DOT__unnamedblk969__DOT__unnamedblk971__DOT__ep, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1980)->__VnoInFunc_get(vlProcess, vlSymsp, "end"s, unnamedblk968__DOT__unnamedblk969__DOT__unnamedblk971__DOT__end_event);
            co_await VL_NULL_CHECK(unnamedblk968__DOT__unnamedblk969__DOT__unnamedblk971__DOT__end_event, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1981)->__VnoInFunc_wait_on(vlProcess, vlSymsp, 0U);
            if (VL_NULL_CHECK(adapter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1984)
                ->__PVT__provides_responses) {
                VL_NULL_CHECK(unnamedblk968__DOT__unnamedblk969__DOT__bus_req, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1988)->__VnoInFunc_get_transaction_id(vlSymsp, __VlefCall_9__get_transaction_id);
                co_await VL_NULL_CHECK(unnamedblk968__DOT__unnamedblk969__DOT__rw_parent_seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1988)->__VnoInFunc_get_base_response(vlProcess, vlSymsp, __Vtask_get_base_response__response_5118, __VlefCall_9__get_transaction_id);
                unnamedblk968__DOT__unnamedblk969__DOT__unnamedblk972__DOT__bus_rsp 
                    = __Vtask_get_base_response__response_5118;
                VL_NULL_CHECK(adapter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1989)->__VnoInFunc_bus2reg(vlProcess, vlSymsp, unnamedblk968__DOT__unnamedblk969__DOT__unnamedblk972__DOT__bus_rsp, unnamedblk968__DOT__unnamedblk969__DOT__rw_access);
            } else {
                VL_NULL_CHECK(adapter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1992)->__VnoInFunc_bus2reg(vlProcess, vlSymsp, unnamedblk968__DOT__unnamedblk969__DOT__bus_req, unnamedblk968__DOT__unnamedblk969__DOT__rw_access);
            }
            if (((0U == unnamedblk968__DOT__unnamedblk969__DOT__rw_access
                  .__PVT__kind) & (2U == endian))) {
                unnamedblk968__DOT__unnamedblk969__DOT__rw_access.__PVT__data 
                    = VL_STREAML_FAST_QQI(64, unnamedblk968__DOT__unnamedblk969__DOT__rw_access
                                          .__PVT__data, 3);
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 1999)->__VnoInFunc_set_status(vlSymsp, unnamedblk968__DOT__unnamedblk969__DOT__rw_access
                                                                                .__PVT__status);
            this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_10__get_n_bytes);
            data = (unnamedblk968__DOT__unnamedblk969__DOT__rw_access
                    .__PVT__data & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                  (__VlefCall_10__get_n_bytes 
                                                   << 3U)) 
                                    - 1ULL));
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2004)->__VnoInFunc_get_kind(vlSymsp, __VlefCall_11__get_kind);
            __VlefLogOr_13 = (0U == __VlefCall_11__get_kind);
            if ((1U & (~ (::IData)(__VlefLogOr_13)))) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2004)->__VnoInFunc_get_kind(vlSymsp, __VlefCall_12__get_kind);
                __VlefLogOr_13 = (2U == __VlefCall_12__get_kind);
            }
            unnamedblk968__DOT__unnamedblk969__DOT__rw_access.__PVT__data 
                = data;
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2017)->__VnoInFunc_get_map(vlSymsp, unnamedblk968__DOT__unnamedblk969__DOT__rw_map);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2018)->__VnoInFunc_get_status(vlSymsp, unnamedblk968__DOT__unnamedblk969__DOT__rw_status);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1930);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1930;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5119);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_5119;
            __VlefCall_15__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_15__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2022)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk968__DOT__unnamedblk969__DOT__unnamedblk973__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk968__DOT__unnamedblk969__DOT__unnamedblk973__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2022)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "UVM/REG/ADDR"s, __VlefCall_16__get_report_verbosity_level);
            __VlefLogAnd_18 = VL_LTES_III(32, 0x00000190U, __VlefCall_16__get_report_verbosity_level);
            if (__VlefLogAnd_18) {
                VL_NULL_CHECK(unnamedblk968__DOT__unnamedblk969__DOT__unnamedblk973__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2022)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVM/REG/ADDR"s, __VlefCall_17__get_report_action);
                __VlefLogAnd_18 = (0U != __VlefCall_17__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_18))) {
                VL_NULL_CHECK(unnamedblk968__DOT__unnamedblk969__DOT__rw_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2022)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
                __Vtask_uvm_report_info__report_enabled_checked_5126 = 1U;
                this->__Vtask_uvm_report_info__context_name_5125 = ""s;
                __Vtask_uvm_report_info__line_5124 = 0x000007e6U;
                this->__Vtask_uvm_report_info__filename_5123 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_info__verbosity_5122 = 0x00000190U;
                __Vtemp_3 = ((2U < unnamedblk968__DOT__unnamedblk969__DOT__rw_status)
                              ? ""s : Vtb_top__ConstPool__CONSARRAY_10
                             [(3U & unnamedblk968__DOT__unnamedblk969__DOT__rw_status)]);
                VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_5121
                              ,"%s 'h%0h at 'h%0h via map \"%s\": %s...",5
                              , 'S',&(op), '#',64,unnamedblk968__DOT__unnamedblk969__DOT__rw_access
                              .__PVT__data, '#',64,unnamedblk968__DOT__unnamedblk969__DOT__rw_access
                              .__PVT__addr, 'S',&(__VlefCall_19__get_full_name)
                              , 'S',&(__Vtemp_3));
                this->__Vtask_uvm_report_info__id_5120 = "UVM/REG/ADDR"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1931);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1931;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5127);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_5127;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_5120, this->__Vtask_uvm_report_info__message_5121, __Vtask_uvm_report_info__verbosity_5122, this->__Vtask_uvm_report_info__filename_5123, __Vtask_uvm_report_info__line_5124, this->__Vtask_uvm_report_info__context_name_5125, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_5126));
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2024)->__VnoInFunc_get_status(vlSymsp, __VlefCall_20__get_status);
            if ((1U == __VlefCall_20__get_status)) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2029)->__VnoInFunc_get_parent_sequence(vlSymsp, unnamedblk968__DOT__unnamedblk969__DOT__rw_parent_seq);
            if (((VlNull{} != unnamedblk968__DOT__unnamedblk969__DOT__rw_parent_seq) 
                 & (unnamedblk968__DOT__i == (accesses.size() 
                                              - (::IData)(1U))))) {
                VL_NULL_CHECK(unnamedblk968__DOT__unnamedblk969__DOT__rw_parent_seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2033)->__VnoInFunc_post_do(vlSymsp, rw);
            }
            accesses.atWriteAppend(unnamedblk968__DOT__i) 
                = unnamedblk968__DOT__unnamedblk969__DOT__rw_access;
            if ((unnamedblk968__DOT__i__Vloopsize <= accesses.size())) {
                unnamedblk968__DOT__i = ((::IData)(1U) 
                                         + unnamedblk968__DOT__i);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_access(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_access\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_Xget_bus_infoX__map_info_5128;
    ::IData/*31:0*/ __Vtask_Xget_bus_infoX__size_5129;
    __Vtask_Xget_bus_infoX__size_5129 = 0;
    ::IData/*31:0*/ __Vtask_Xget_bus_infoX__lsb_5130;
    __Vtask_Xget_bus_infoX__lsb_5130 = 0;
    ::IData/*31:0*/ __Vtask_Xget_bus_infoX__addr_skip_5131;
    __Vtask_Xget_bus_infoX__addr_skip_5131 = 0;
    ::IData/*31:0*/ __Vtask_get_physical_addresses_to_map__Vfuncout_5132;
    __Vtask_get_physical_addresses_to_map__Vfuncout_5132 = 0;
    ::IData/*31:0*/ __Vtask_get_physical_addresses_to_map__Vfuncout_5133;
    __Vtask_get_physical_addresses_to_map__Vfuncout_5133 = 0;
    ::IData/*31:0*/ __Vtask_get_physical_addresses_to_map__Vfuncout_5134;
    __Vtask_get_physical_addresses_to_map__Vfuncout_5134 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1932;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5135;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_5138;
    __Vtask_uvm_report_info__verbosity_5138 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_5140;
    __Vtask_uvm_report_info__line_5140 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_5142;
    __Vtask_uvm_report_info__report_enabled_checked_5142 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1933;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5143;
    ::IData/*31:0*/ __Vtask_get_value_size__Vfuncout_5144;
    __Vtask_get_value_size__Vfuncout_5144 = 0;
    ::IData/*31:0*/ __Vtask_get_value_size__Vfuncout_5145;
    __Vtask_get_value_size__Vfuncout_5145 = 0;
    ::IData/*31:0*/ __Vtask_get_value_size__Vfuncout_5146;
    __Vtask_get_value_size__Vfuncout_5146 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_36__get_n_bits;
    ::IData/*31:0*/ __VlefExpr_35;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_34__get_element;
    ::IData/*31:0*/ __VlefCall_33__get_element_kind;
    ::CData/*0:0*/ __VlefLogOr_32;
    ::IData/*31:0*/ __VlefCall_31__get_kind;
    ::IData/*31:0*/ __VlefCall_30__get_kind;
    ::IData/*31:0*/ __VlefCall_29__get_kind;
    ::std::string __VlefCall_28__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_27;
    ::IData/*31:0*/ __VlefCall_26__get_report_action;
    ::IData/*31:0*/ __VlefCall_25__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_24__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_23__get_n_bytes;
    ::IData/*31:0*/ __VlefExpr_22;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_21__get_element;
    ::IData/*31:0*/ __VlefCall_20__get_n_bits;
    ::IData/*31:0*/ __VlefCall_19__get_n_bits;
    ::IData/*31:0*/ __VlefCall_18__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_17__get_n_bits;
    ::IData/*31:0*/ __VlefCall_16__get_n_bits;
    ::IData/*31:0*/ __VlefCall_15__ceil;
    ::IData/*31:0*/ __VlefCall_14__get_n_bits;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> __VlefCall_13__get_parent;
    ::IData/*31:0*/ __VlefExpr_12;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_11__get_element;
    ::IData/*31:0*/ __VlefCall_10__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_9__get_value_size;
    ::IData/*31:0*/ __VlefCall_8__get_n_bytes;
    ::IData/*31:0*/ __VlefCall_7__get_value_size;
    ::QData/*63:0*/ __VlefCall_6__get_offset;
    ::IData/*31:0*/ __VlefExpr_5;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_4__get_element;
    ::IData/*31:0*/ __VlefCall_3__get_element_kind;
    ::CData/*0:0*/ __VlefLogOr_2;
    ::IData/*31:0*/ __VlefCall_1__get_kind;
    ::IData/*31:0*/ __VlefCall_0__get_kind;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> unnamedblk974__DOT__mem;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk975__DOT__f;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> unnamedblk976__DOT__r;
    ::VlQueue<::CData/*0:0*/> unnamedblk977__DOT__be;
    ::VlQueue<::CData/*7:0*/> unnamedblk977__DOT__p;
    ::VlQueue<::QData/*63:0*/> unnamedblk977__DOT__values;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk977__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk977__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk1_3__DOT____Vrepeat2;
    unnamedblk977__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk1_4__DOT____Vrepeat3;
    unnamedblk977__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk978__DOT__idx;
    unnamedblk977__DOT__unnamedblk978__DOT__idx = 0;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk978__DOT__unnamedblk979__DOT__i;
    ::VlQueue<::CData/*0:0*/> unnamedblk977__DOT__unnamedblk980__DOT__bits;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk980__DOT__unnamedblk1_5__DOT____Vrepeat4;
    unnamedblk977__DOT__unnamedblk980__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk981__DOT__i;
    unnamedblk977__DOT__unnamedblk981__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk981__DOT__i__Vloopsize;
    unnamedblk977__DOT__unnamedblk981__DOT__i__Vloopsize = 0;
    Vtb_top_uvm_reg_bus_op__struct__0 unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__rw_access;
    ::QData/*63:0*/ unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__data;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__tmp_map;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk983__DOT__i0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk984__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk985__DOT__z;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk986__DOT__i;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk987__DOT__rw_value_size;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk988__DOT__i0;
    unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk988__DOT__i0 = 0;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk988__DOT__unnamedblk989__DOT__i1;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk1_6__DOT____Vrepeat5;
    unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk990__DOT__i;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk991__DOT__unnamedblk992__DOT__i;
    ::CData/*7:0*/ unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk991__DOT__unnamedblk992__DOT__unnamedblk993__DOT__nv;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__idx;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__unnamedblk995__DOT__i0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk996__DOT__f;
    ::QData/*63:0*/ unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk996__DOT__m;
    ::IData/*31:0*/ unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk996__DOT__unnamedblk997__DOT__idx;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> system_map;
    ::IData/*31:0*/ bus_width;
    ::IData/*31:0*/ lsb;
    ::IData/*31:0*/ skip;
    ::VlQueue<Vtb_top_uvm_reg_bus_op__struct__0> accesses;
    ::std::string op;
    ::VlQueue<::QData/*63:0*/> adr;
    ::IData/*31:0*/ byte_offset;
    ::IData/*31:0*/ num_stream_bytes;
    ::IData/*31:0*/ n_bytes;
    ::IData/*31:0*/ bytes_per_value;
    ::IData/*31:0*/ bit_shift;
    ::IData/*31:0*/ extra_byte;
    ::QData/*63:0*/ rw_value;
    this->__VnoInFunc_get_root_map(vlSymsp, system_map);
    this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, bus_width);
    lsb = 0U;
    skip = 0U;
    accesses.clear();
    accesses.atDefault().__PVT__kind = 0;
    accesses.atDefault().__PVT__addr = 0;
    accesses.atDefault().__PVT__data = 0;
    accesses.atDefault().__PVT__n_bits = 0;
    accesses.atDefault().__PVT__byte_en = 0;
    accesses.atDefault().__PVT__status = 0;
    op = ""s;
    adr.clear();
    adr.atDefault() = 0;
    byte_offset = 0U;
    num_stream_bytes = 0U;
    n_bytes = 0U;
    bytes_per_value = 0U;
    bit_shift = 0U;
    extra_byte = 0U;
    rw_value = 0ULL;
    this->__VnoInFunc_Xget_bus_infoX(vlProcess, vlSymsp, rw, __Vtask_Xget_bus_infoX__map_info_5128, __Vtask_Xget_bus_infoX__size_5129, __Vtask_Xget_bus_infoX__lsb_5130, __Vtask_Xget_bus_infoX__addr_skip_5131);
    lsb = __Vtask_Xget_bus_infoX__lsb_5130;
    skip = __Vtask_Xget_bus_infoX__addr_skip_5131;
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2073)->__VnoInFunc_get_kind(vlSymsp, __VlefCall_0__get_kind);
    __VlefLogOr_2 = (0U == __VlefCall_0__get_kind);
    if ((1U & (~ (::IData)(__VlefLogOr_2)))) {
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2073)->__VnoInFunc_get_kind(vlSymsp, __VlefCall_1__get_kind);
        __VlefLogOr_2 = (2U == __VlefCall_1__get_kind);
    }
    op = VL_CVT_PACK_STR_NQ(((::IData)(__VlefLogOr_2)
                              ? 0x0052656164696e67ULL
                              : 0x0057726974696e67ULL));
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2075)->__VnoInFunc_get_element_kind(vlSymsp, __VlefCall_3__get_element_kind);
    if ((2U == __VlefCall_3__get_element_kind)) {
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2078)->__VnoInFunc_get_element(vlSymsp, __VlefCall_4__get_element);
        __VlefExpr_5 = VL_CAST_DYNAMIC(__VlefCall_4__get_element, unnamedblk974__DOT__mem);
        if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_5)))))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_map.svh:2078: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_map.do_bus_access.unnamedblk974", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2078, "");
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2079)->__VnoInFunc_get_offset(vlSymsp, __VlefCall_6__get_offset);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2079)->__VnoInFunc_get_value_size(vlSymsp, __VlefCall_7__get_value_size);
        VL_NULL_CHECK(unnamedblk974__DOT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2079)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_8__get_n_bytes);
        this->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__m_mems_info
                                                                                .at(unnamedblk974__DOT__mem), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2079)
                                                        ->__PVT__offset, __VlefCall_6__get_offset, 
                                                        (__VlefCall_7__get_value_size 
                                                         * __VlefCall_8__get_n_bytes), adr, VlNull{}, byte_offset, unnamedblk974__DOT__mem, __Vtask_get_physical_addresses_to_map__Vfuncout_5132);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2080)->__VnoInFunc_get_value_size(vlSymsp, __VlefCall_9__get_value_size);
        VL_NULL_CHECK(unnamedblk974__DOT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2080)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_10__get_n_bytes);
        num_stream_bytes = (__VlefCall_9__get_value_size 
                            * __VlefCall_10__get_n_bytes);
        VL_NULL_CHECK(unnamedblk974__DOT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2081)->__VnoInFunc_get_n_bytes(vlSymsp, n_bytes);
        VL_NULL_CHECK(unnamedblk974__DOT__mem, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2082)->__VnoInFunc_get_n_bytes(vlSymsp, bytes_per_value);
    } else if ((1U == __VlefCall_3__get_element_kind)) {
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2087)->__VnoInFunc_get_element(vlSymsp, __VlefCall_11__get_element);
        __VlefExpr_12 = VL_CAST_DYNAMIC(__VlefCall_11__get_element, unnamedblk975__DOT__f);
        if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_12)))))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_map.svh:2087: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_map.do_bus_access.unnamedblk975", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2087, "");
        }
        VL_NULL_CHECK(unnamedblk975__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2090)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_13__get_parent);
        VL_NULL_CHECK(unnamedblk975__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2090)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_14__get_n_bits);
        this->__VnoInFunc_ceil(vlSymsp, __VlefCall_14__get_n_bits, 8U, __VlefCall_15__ceil);
        this->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, 
                                                        (VL_NULL_CHECK(this->__PVT__m_regs_info
                                                                       .at(__VlefCall_13__get_parent), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2090)
                                                         ->__PVT__offset 
                                                         + (::QData)((::IData)(skip))), 0ULL, __VlefCall_15__ceil, adr, VlNull{}, byte_offset, VlNull{}, __Vtask_get_physical_addresses_to_map__Vfuncout_5133);
        VL_NULL_CHECK(unnamedblk975__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2091)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_16__get_n_bits);
        this->__VnoInFunc_ceil(vlSymsp, __VlefCall_16__get_n_bits, 8U, num_stream_bytes);
        this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, n_bytes);
        VL_NULL_CHECK(unnamedblk975__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2093)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_17__get_n_bits);
        this->__VnoInFunc_ceil(vlSymsp, __VlefCall_17__get_n_bits, 8U, bytes_per_value);
        this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_18__get_n_bytes);
        bit_shift = VL_MODDIV_III(32, lsb, (__VlefCall_18__get_n_bytes 
                                            << 3U));
        VL_NULL_CHECK(unnamedblk975__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2095)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_19__get_n_bits);
        VL_NULL_CHECK(unnamedblk975__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2095)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_20__get_n_bits);
        if ((((bit_shift + __VlefCall_19__get_n_bits) 
              >> 3U) != (__VlefCall_20__get_n_bits 
                         >> 3U))) {
            extra_byte = 1U;
        }
    } else if ((0U == __VlefCall_3__get_element_kind)) {
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2105)->__VnoInFunc_get_element(vlSymsp, __VlefCall_21__get_element);
        __VlefExpr_22 = VL_CAST_DYNAMIC(__VlefCall_21__get_element, unnamedblk976__DOT__r);
        if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_22)))))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_map.svh:2105: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_map.do_bus_access.unnamedblk976", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2105, "");
        }
        VL_NULL_CHECK(unnamedblk976__DOT__r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2107)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_23__get_n_bytes);
        this->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__m_regs_info
                                                                                .at(unnamedblk976__DOT__r), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2107)
                                                        ->__PVT__offset, 0ULL, __VlefCall_23__get_n_bytes, adr, VlNull{}, byte_offset, VlNull{}, __Vtask_get_physical_addresses_to_map__Vfuncout_5134);
        VL_NULL_CHECK(unnamedblk976__DOT__r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2108)->__VnoInFunc_get_n_bytes(vlSymsp, num_stream_bytes);
        this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, n_bytes);
        VL_NULL_CHECK(unnamedblk976__DOT__r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2110)->__VnoInFunc_get_n_bytes(vlSymsp, bytes_per_value);
    }
    unnamedblk977__DOT__be.clear();
    unnamedblk977__DOT__be.atDefault() = 0;
    unnamedblk977__DOT__p.clear();
    unnamedblk977__DOT__p.atDefault() = 0;
    unnamedblk977__DOT__values.clear();
    unnamedblk977__DOT__values.atDefault() = 0;
    num_stream_bytes = (num_stream_bytes + extra_byte);
    unnamedblk977__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = byte_offset;
    while (VL_LTS_III(32, 0U, unnamedblk977__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        unnamedblk977__DOT__be.push_back(0U);
        unnamedblk977__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (unnamedblk977__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (::IData)(1U));
    }
    unnamedblk977__DOT__unnamedblk1_2__DOT____Vrepeat1 
        = num_stream_bytes;
    while (VL_LTS_III(32, 0U, unnamedblk977__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        unnamedblk977__DOT__be.push_back(1U);
        unnamedblk977__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (unnamedblk977__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (::IData)(1U));
    }
    unnamedblk977__DOT__unnamedblk1_3__DOT____Vrepeat2 
        = bus_width;
    while (VL_LTS_III(32, 0U, unnamedblk977__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        unnamedblk977__DOT__be.push_back(0U);
        unnamedblk977__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (unnamedblk977__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (::IData)(1U));
    }
    unnamedblk977__DOT__unnamedblk1_4__DOT____Vrepeat3 
        = byte_offset;
    while (VL_LTS_III(32, 0U, unnamedblk977__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        unnamedblk977__DOT__p.push_back(0U);
        unnamedblk977__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (unnamedblk977__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (::IData)(1U));
    }
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2141)->__VnoInFunc_get_value_array(vlSymsp, unnamedblk977__DOT__values);
    unnamedblk977__DOT__unnamedblk978__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk977__DOT__unnamedblk978__DOT__idx, unnamedblk977__DOT__values.size())) {
        unnamedblk977__DOT__unnamedblk978__DOT__unnamedblk979__DOT__i = 0U;
        unnamedblk977__DOT__unnamedblk978__DOT__unnamedblk979__DOT__i = 0U;
        while ((unnamedblk977__DOT__unnamedblk978__DOT__unnamedblk979__DOT__i 
                < bytes_per_value)) {
            unnamedblk977__DOT__p.push_back((0x000000ffU 
                                             & (::IData)(
                                                         (unnamedblk977__DOT__values.at(unnamedblk977__DOT__unnamedblk978__DOT__idx) 
                                                          >> 
                                                          (0x0000003fU 
                                                           & VL_MULS_III(32, (::IData)(8U), unnamedblk977__DOT__unnamedblk978__DOT__unnamedblk979__DOT__i))))));
            unnamedblk977__DOT__unnamedblk978__DOT__unnamedblk979__DOT__i 
                = ((::IData)(1U) + unnamedblk977__DOT__unnamedblk978__DOT__unnamedblk979__DOT__i);
        }
        unnamedblk977__DOT__unnamedblk978__DOT__idx 
            = ((::IData)(1U) + unnamedblk977__DOT__unnamedblk978__DOT__idx);
    }
    if ((0U != bit_shift)) {
        unnamedblk977__DOT__unnamedblk980__DOT__bits.clear();
        unnamedblk977__DOT__unnamedblk980__DOT__bits.atDefault() = 0;
        VL_REVCOPY_Q(unnamedblk977__DOT__unnamedblk980__DOT__bits, VL_REVCLONE_Q(unnamedblk977__DOT__p, 1, 8, 1), 8, 1, 1);
        unnamedblk977__DOT__unnamedblk980__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = bit_shift;
        while (VL_LTS_III(32, 0U, unnamedblk977__DOT__unnamedblk980__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
            unnamedblk977__DOT__unnamedblk980__DOT__bits.push_front(0U);
            unnamedblk977__DOT__unnamedblk980__DOT__unnamedblk1_5__DOT____Vrepeat4 
                = (unnamedblk977__DOT__unnamedblk980__DOT__unnamedblk1_5__DOT____Vrepeat4 
                   - (::IData)(1U));
        }
        VL_REVCOPY_Q(unnamedblk977__DOT__p, VL_REVCLONE_Q(unnamedblk977__DOT__unnamedblk980__DOT__bits, 1, 1, 1), 8, 1, 8);
    }
    accesses.clear();
    unnamedblk977__DOT__unnamedblk981__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk977__DOT__unnamedblk981__DOT__i, adr.size())) {
        unnamedblk977__DOT__unnamedblk981__DOT__i__Vloopsize 
            = adr.size();
        unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__rw_access.__PVT__kind = 0;
        unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__rw_access.__PVT__addr = 0;
        unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__rw_access.__PVT__data = 0;
        unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__rw_access.__PVT__n_bits = 0;
        unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__rw_access.__PVT__byte_en = 0;
        unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__rw_access.__PVT__status = 0;
        unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__data = 0ULL;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2197)->__VnoInFunc_get_map(vlSymsp, unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__tmp_map);
        unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk983__DOT__i0 = 0U;
        unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk983__DOT__i0 = 0U;
        while ((unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk983__DOT__i0 
                < bus_width)) {
            unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__data 
                = (((~ (0x00000000000000ffULL << (0x0000003fU 
                                                  & VL_MULS_III(32, (::IData)(8U), unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk983__DOT__i0)))) 
                    & unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__data) 
                   | ((::QData)((::IData)(unnamedblk977__DOT__p.at(
                                                                   ((unnamedblk977__DOT__unnamedblk981__DOT__i 
                                                                     * bus_width) 
                                                                    + unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk983__DOT__i0)))) 
                      << (0x0000003fU & VL_MULS_III(32, (::IData)(8U), unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk983__DOT__i0))));
            unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk983__DOT__i0 
                = ((::IData)(1U) + unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk983__DOT__i0);
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1932);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1932;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5135);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_5135;
        __VlefCall_24__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_24__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2206)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk984__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk984__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2206)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "UVM/REG/ADDR"s, __VlefCall_25__get_report_verbosity_level);
        __VlefLogAnd_27 = VL_LTES_III(32, 0x00000190U, __VlefCall_25__get_report_verbosity_level);
        if (__VlefLogAnd_27) {
            VL_NULL_CHECK(unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk984__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2206)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVM/REG/ADDR"s, __VlefCall_26__get_report_action);
            __VlefLogAnd_27 = (0U != __VlefCall_26__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_27))) {
            VL_NULL_CHECK(unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__tmp_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2206)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_28__get_full_name);
            __Vtask_uvm_report_info__report_enabled_checked_5142 = 1U;
            this->__Vtask_uvm_report_info__context_name_5141 = ""s;
            __Vtask_uvm_report_info__line_5140 = 0x0000089eU;
            this->__Vtask_uvm_report_info__filename_5139 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s;
            __Vtask_uvm_report_info__verbosity_5138 = 0x00000190U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_5137
                          ,"%s 'h%0h at 'h%0h via map \"%s\"...",4
                          , 'S',&(op), '#',64,unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__data
                          , '#',64,adr.at(unnamedblk977__DOT__unnamedblk981__DOT__i)
                          , 'S',&(__VlefCall_28__get_full_name));
            this->__Vtask_uvm_report_info__id_5136 = "UVM/REG/ADDR"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1933);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1933;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5143);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_5143;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_5136, this->__Vtask_uvm_report_info__message_5137, __Vtask_uvm_report_info__verbosity_5138, this->__Vtask_uvm_report_info__filename_5139, __Vtask_uvm_report_info__line_5140, this->__Vtask_uvm_report_info__context_name_5141, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_5142));
        }
        unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk985__DOT__z = 0U;
        unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk985__DOT__z = 0U;
        while ((unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk985__DOT__z 
                < bus_width)) {
            unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__rw_access.__PVT__byte_en 
                = (((~ ((::IData)(1U) << (7U & unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk985__DOT__z))) 
                    & unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__rw_access
                    .__PVT__byte_en) | (0x00ffU & (unnamedblk977__DOT__be.at(
                                                                             ((bus_width 
                                                                               * unnamedblk977__DOT__unnamedblk981__DOT__i) 
                                                                              + unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk985__DOT__z)) 
                                                   << 
                                                   (7U 
                                                    & unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk985__DOT__z))));
            unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk985__DOT__z 
                = ((::IData)(1U) + unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk985__DOT__z);
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2214)->__VnoInFunc_get_kind(vlSymsp, __VlefCall_29__get_kind);
        unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__rw_access.__PVT__kind 
            = __VlefCall_29__get_kind;
        unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__rw_access.__PVT__addr 
            = adr.at(unnamedblk977__DOT__unnamedblk981__DOT__i);
        unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__rw_access.__PVT__data 
            = unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__data;
        unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__rw_access.__PVT__n_bits 
            = (bus_width << 3U);
        unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk986__DOT__i = 0U;
        unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk986__DOT__i 
            = (bus_width - (::IData)(1U));
        {
            while (VL_LTES_III(32, 0U, unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk986__DOT__i)) {
                if ((1U & (unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__rw_access
                           .__PVT__byte_en >> (7U & unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk986__DOT__i)))) {
                    goto __Vlabel0;
                } else {
                    unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__rw_access.__PVT__n_bits 
                        = (unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__rw_access
                           .__PVT__n_bits - (::IData)(8U));
                }
                unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk986__DOT__i 
                    = (unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__unnamedblk986__DOT__i 
                       - (::IData)(1U));
            }
            __Vlabel0: ;
        }
        accesses.push_back(unnamedblk977__DOT__unnamedblk981__DOT__unnamedblk982__DOT__rw_access);
        if ((unnamedblk977__DOT__unnamedblk981__DOT__i__Vloopsize 
             <= adr.size())) {
            unnamedblk977__DOT__unnamedblk981__DOT__i 
                = ((::IData)(1U) + unnamedblk977__DOT__unnamedblk981__DOT__i);
        }
    }
    co_await this->__VnoInFunc_perform_accesses(vlProcess, vlSymsp, accesses, rw, adapter, sequencer);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2238)->__VnoInFunc_get_kind(vlSymsp, __VlefCall_30__get_kind);
    __VlefLogOr_32 = (0U == __VlefCall_30__get_kind);
    if ((1U & (~ (::IData)(__VlefLogOr_32)))) {
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2238)->__VnoInFunc_get_kind(vlSymsp, __VlefCall_31__get_kind);
        __VlefLogOr_32 = (2U == __VlefCall_31__get_kind);
    }
    if (__VlefLogOr_32) {
        unnamedblk977__DOT__unnamedblk987__DOT__rw_value_size = 0U;
        unnamedblk977__DOT__p.clear();
        unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk988__DOT__i0 = 0U;
        while (VL_LTS_III(32, unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk988__DOT__i0, accesses.size())) {
            unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk988__DOT__unnamedblk989__DOT__i1 = 0U;
            unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk988__DOT__unnamedblk989__DOT__i1 = 0U;
            while ((unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk988__DOT__unnamedblk989__DOT__i1 
                    < bus_width)) {
                unnamedblk977__DOT__p.push_back((0x000000ffU 
                                                 & (::IData)(
                                                             (accesses.at(unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk988__DOT__i0)
                                                              .__PVT__data 
                                                              >> 
                                                              (0x0000003fU 
                                                               & VL_MULS_III(32, (::IData)(8U), unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk988__DOT__unnamedblk989__DOT__i1))))));
                unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk988__DOT__unnamedblk989__DOT__i1 
                    = ((::IData)(1U) + unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk988__DOT__unnamedblk989__DOT__i1);
            }
            unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk988__DOT__i0 
                = ((::IData)(1U) + unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk988__DOT__i0);
        }
        unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = byte_offset;
        while (VL_LTS_III(32, 0U, unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
            std::ignore = unnamedblk977__DOT__p.pop_front();
            unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk1_6__DOT____Vrepeat5 
                = (unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk1_6__DOT____Vrepeat5 
                   - (::IData)(1U));
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2255)->__VnoInFunc_get_value_size(vlSymsp, __Vtask_get_value_size__Vfuncout_5144);
        unnamedblk977__DOT__unnamedblk987__DOT__rw_value_size 
            = __Vtask_get_value_size__Vfuncout_5144;
        unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk990__DOT__i = 0U;
        unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk990__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk990__DOT__i, unnamedblk977__DOT__unnamedblk987__DOT__rw_value_size)) {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2257)->__VnoInFunc_set_value(vlSymsp, 0ULL, unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk990__DOT__i);
            unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk990__DOT__i 
                = ((::IData)(1U) + unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk990__DOT__i);
        }
        if ((0U != bit_shift)) {
            unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk991__DOT__unnamedblk992__DOT__i = 0U;
            unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk991__DOT__unnamedblk992__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk991__DOT__unnamedblk992__DOT__i, unnamedblk977__DOT__p.size())) {
                unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk991__DOT__unnamedblk992__DOT__unnamedblk993__DOT__nv = 0U;
                unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk991__DOT__unnamedblk992__DOT__unnamedblk993__DOT__nv 
                    = VL_SHIFTR_III(8,8,32, unnamedblk977__DOT__p.at(unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk991__DOT__unnamedblk992__DOT__i), bit_shift);
                if ((unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk991__DOT__unnamedblk992__DOT__i 
                     != (unnamedblk977__DOT__p.size() 
                         - (::IData)(1U)))) {
                    unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk991__DOT__unnamedblk992__DOT__unnamedblk993__DOT__nv 
                        = (0x000000ffU & ((::IData)(unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk991__DOT__unnamedblk992__DOT__unnamedblk993__DOT__nv) 
                                          | VL_SHIFTL_III(8,8,32, unnamedblk977__DOT__p.at(
                                                                                ((::IData)(1U) 
                                                                                + unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk991__DOT__unnamedblk992__DOT__i)), bit_shift)));
                }
                unnamedblk977__DOT__p.atWriteAppend(unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk991__DOT__unnamedblk992__DOT__i) 
                    = unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk991__DOT__unnamedblk992__DOT__unnamedblk993__DOT__nv;
                unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk991__DOT__unnamedblk992__DOT__i 
                    = ((::IData)(1U) + unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk991__DOT__unnamedblk992__DOT__i);
            }
            if ((0U != extra_byte)) {
                std::ignore = unnamedblk977__DOT__p.pop_back();
            }
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2281)->__VnoInFunc_get_value_size(vlSymsp, __Vtask_get_value_size__Vfuncout_5145);
        unnamedblk977__DOT__unnamedblk987__DOT__rw_value_size 
            = __Vtask_get_value_size__Vfuncout_5145;
        unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__idx = 0U;
        unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__idx = 0U;
        while (VL_LTS_III(32, unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__idx, unnamedblk977__DOT__unnamedblk987__DOT__rw_value_size)) {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2283)->__VnoInFunc_get_value(vlSymsp, unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__idx, rw_value);
            unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__unnamedblk995__DOT__i0 = 0U;
            unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__unnamedblk995__DOT__i0 = 0U;
            while ((unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__unnamedblk995__DOT__i0 
                    < bytes_per_value)) {
                rw_value = (((~ (0x00000000000000ffULL 
                                 << (0x0000003fU & 
                                     VL_MULS_III(32, (::IData)(8U), unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__unnamedblk995__DOT__i0)))) 
                             & rw_value) | ((::QData)((::IData)(unnamedblk977__DOT__p.at(
                                                                                ((unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__idx 
                                                                                * bytes_per_value) 
                                                                                + unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__unnamedblk995__DOT__i0)))) 
                                            << (0x0000003fU 
                                                & VL_MULS_III(32, (::IData)(8U), unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__unnamedblk995__DOT__i0))));
                unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__unnamedblk995__DOT__i0 
                    = ((::IData)(1U) + unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__unnamedblk995__DOT__i0);
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2289)->__VnoInFunc_set_value(vlSymsp, rw_value, unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__idx);
            unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__idx 
                = ((::IData)(1U) + unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk994__DOT__idx);
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2292)->__VnoInFunc_get_element_kind(vlSymsp, __VlefCall_33__get_element_kind);
        if ((1U == __VlefCall_33__get_element_kind)) {
            unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk996__DOT__m = 0ULL;
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2296)->__VnoInFunc_get_element(vlSymsp, __VlefCall_34__get_element);
            __VlefExpr_35 = VL_CAST_DYNAMIC(__VlefCall_34__get_element, unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk996__DOT__f);
            if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_35)))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_map.svh:2296: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_map.do_bus_access.unnamedblk977.unnamedblk987.unnamedblk996", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2296, "");
            }
            VL_NULL_CHECK(unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk996__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2298)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_36__get_n_bits);
            unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk996__DOT__m 
                = (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_36__get_n_bits) 
                   - 1ULL);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2299)->__VnoInFunc_get_value_size(vlSymsp, __Vtask_get_value_size__Vfuncout_5146);
            unnamedblk977__DOT__unnamedblk987__DOT__rw_value_size 
                = __Vtask_get_value_size__Vfuncout_5146;
            unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk996__DOT__unnamedblk997__DOT__idx = 0U;
            unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk996__DOT__unnamedblk997__DOT__idx = 0U;
            while (VL_LTS_III(32, unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk996__DOT__unnamedblk997__DOT__idx, unnamedblk977__DOT__unnamedblk987__DOT__rw_value_size)) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2301)->__VnoInFunc_get_value(vlSymsp, unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk996__DOT__unnamedblk997__DOT__idx, rw_value);
                rw_value = (rw_value & unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk996__DOT__m);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2303)->__VnoInFunc_set_value(vlSymsp, rw_value, unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk996__DOT__unnamedblk997__DOT__idx);
                unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk996__DOT__unnamedblk997__DOT__idx 
                    = ((::IData)(1U) + unnamedblk977__DOT__unnamedblk987__DOT__unnamedblk996__DOT__unnamedblk997__DOT__idx);
            }
        }
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_do_bus_access(vlProcess, vlSymsp, rw, sequencer, adapter);
    co_return;
}

extern const ::VlUnpacked<::std::string, 8> Vtb_top__ConstPool__CONSARRAY_11;

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_16__get_name;
    ::QData/*63:0*/ __VlefCall_15__get_address;
    ::IData/*31:0*/ __VlefCall_14__get_inst_id;
    ::std::string __VlefCall_13__get_type_name;
    ::std::string __VlefCall_12__get_name;
    ::QData/*63:0*/ __VlefCall_11__get_address;
    ::IData/*31:0*/ __VlefCall_10__get_inst_id;
    ::std::string __VlefCall_9__get_type_name;
    ::std::string __VlefCall_8__get_name;
    ::QData/*63:0*/ __VlefCall_7__get_address;
    ::IData/*31:0*/ __VlefCall_6__get_inst_id;
    ::std::string __VlefCall_5__get_type_name;
    ::std::string __VlefCall_4__get_name;
    ::std::string __VlefCall_3__get_full_name;
    ::std::string __VlefCall_2__get_type_name;
    ::IData/*31:0*/ __VlefCall_1__get_addr_unit_bytes;
    ::IData/*31:0*/ __VlefCall_0__get_n_bytes;
    ::IData/*31:0*/ unnamedblk998__DOT__j;
    unnamedblk998__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk998__DOT__j__Vloopsize;
    unnamedblk998__DOT__j__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk999__DOT__j;
    unnamedblk999__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk999__DOT__j__Vloopsize;
    unnamedblk999__DOT__j__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk1000__DOT__j;
    unnamedblk1000__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk1000__DOT__j__Vloopsize;
    unnamedblk1000__DOT__j__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk1001__DOT__j;
    unnamedblk1001__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk1001__DOT__j__Vloopsize;
    unnamedblk1001__DOT__j__Vloopsize = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>> regs;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg>> vregs;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>> mems;
    ::IData/*31:0*/ endian;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>> maps;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sqr;
    regs.clear();
    vregs.clear();
    mems.clear();
    endian = 0U;
    maps.clear();
    this->__VnoInFunc_get_sequencer(vlSymsp, 1U, sqr);
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    this->__VnoInFunc_get_endian(vlSymsp, 0U, endian);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2346)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "endian"s, ""s, 0xfffffffeU, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ((4U 
                                                                                < endian)
                                                                                 ? ""s
                                                                                 : Vtb_top__ConstPool__CONSARRAY_11
                                                                                [
                                                                                (7U 
                                                                                & endian)])), 0x2eU);
    this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __VlefCall_0__get_n_bytes);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2347)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "n_bytes"s, (::QData)((::IData)(__VlefCall_0__get_n_bytes)), 0x00000040U, 0x02000000U, 0x2eU, ""s);
    this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_1__get_addr_unit_bytes);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2348)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "byte addressing"s, (::QData)((::IData)(
                                                                                (1U 
                                                                                == __VlefCall_1__get_addr_unit_bytes))), 0x00000040U, 0x02000000U, 0x2eU, ""s);
    if ((VlNull{} != sqr)) {
        VL_NULL_CHECK(sqr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2352)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
        VL_NULL_CHECK(sqr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2352)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2352)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "effective sequencer"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name), 0xfffffffeU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), 0x2eU);
    }
    this->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
    unnamedblk998__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk998__DOT__j, regs.size())) {
        unnamedblk998__DOT__j__Vloopsize = regs.size();
        VL_NULL_CHECK(regs.at(unnamedblk998__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2359)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
        VL_NULL_CHECK(regs.at(unnamedblk998__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2359)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
        VL_NULL_CHECK(regs.at(unnamedblk998__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2359)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_6__get_inst_id);
        VL_NULL_CHECK(regs.at(unnamedblk998__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2359)->__VnoInFunc_get_address(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_7__get_address);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2359)->__VnoInFunc_print_generic(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_5__get_type_name), 0xfffffffeU, VL_SFORMATF_N_NX("@%0d +'h%0x",2
                                                                                , '~',32,__VlefCall_6__get_inst_id
                                                                                , '#',64,__VlefCall_7__get_address) , 0x2eU);
        if ((unnamedblk998__DOT__j__Vloopsize <= regs.size())) {
            unnamedblk998__DOT__j = ((::IData)(1U) 
                                     + unnamedblk998__DOT__j);
        }
    }
    this->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
    unnamedblk999__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk999__DOT__j, mems.size())) {
        unnamedblk999__DOT__j__Vloopsize = mems.size();
        VL_NULL_CHECK(mems.at(unnamedblk999__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2367)->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
        VL_NULL_CHECK(mems.at(unnamedblk999__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2367)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_9__get_type_name);
        VL_NULL_CHECK(mems.at(unnamedblk999__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2367)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_10__get_inst_id);
        VL_NULL_CHECK(mems.at(unnamedblk999__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2367)->__VnoInFunc_get_address(vlProcess, vlSymsp, 0ULL, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_11__get_address);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2367)->__VnoInFunc_print_generic(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_8__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_9__get_type_name), 0xfffffffeU, VL_SFORMATF_N_NX("@%0d +'h%0x",2
                                                                                , '~',32,__VlefCall_10__get_inst_id
                                                                                , '#',64,__VlefCall_11__get_address) , 0x2eU);
        if ((unnamedblk999__DOT__j__Vloopsize <= mems.size())) {
            unnamedblk999__DOT__j = ((::IData)(1U) 
                                     + unnamedblk999__DOT__j);
        }
    }
    this->__VnoInFunc_get_virtual_registers(vlSymsp, vregs, 1U);
    unnamedblk1000__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk1000__DOT__j, vregs.size())) {
        unnamedblk1000__DOT__j__Vloopsize = vregs.size();
        VL_NULL_CHECK(vregs.at(unnamedblk1000__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2374)->__VnoInFunc_get_name(vlSymsp, __VlefCall_12__get_name);
        VL_NULL_CHECK(vregs.at(unnamedblk1000__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2374)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_13__get_type_name);
        VL_NULL_CHECK(vregs.at(unnamedblk1000__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2374)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_14__get_inst_id);
        VL_NULL_CHECK(vregs.at(unnamedblk1000__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2374)->__VnoInFunc_get_address(vlProcess, vlSymsp, 0ULL, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_15__get_address);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2374)->__VnoInFunc_print_generic(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_12__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_13__get_type_name), 0xfffffffeU, VL_SFORMATF_N_NX("@%0d +'h%0x",2
                                                                                , '~',32,__VlefCall_14__get_inst_id
                                                                                , '#',64,__VlefCall_15__get_address) , 0x2eU);
        if ((unnamedblk1000__DOT__j__Vloopsize <= vregs.size())) {
            unnamedblk1000__DOT__j = ((::IData)(1U) 
                                      + unnamedblk1000__DOT__j);
        }
    }
    this->__VnoInFunc_get_submaps(vlSymsp, maps, 1U);
    unnamedblk1001__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk1001__DOT__j, maps.size())) {
        unnamedblk1001__DOT__j__Vloopsize = maps.size();
        VL_NULL_CHECK(maps.at(unnamedblk1001__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2381)->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2381)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_16__get_name), maps.at(unnamedblk1001__DOT__j), 0x2eU);
        if ((unnamedblk1001__DOT__j__Vloopsize <= maps.size())) {
            unnamedblk1001__DOT__j = ((::IData)(1U) 
                                      + unnamedblk1001__DOT__j);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_convert2string\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__convert2string;
    ::std::string __VlefCall_3__convert2string;
    ::std::string __VlefCall_2__convert2string;
    ::IData/*31:0*/ __VlefCall_1__get_n_bytes;
    ::std::string __VlefCall_0__get_full_name;
    ::IData/*31:0*/ unnamedblk1002__DOT__j;
    unnamedblk1002__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk1002__DOT__j__Vloopsize;
    unnamedblk1002__DOT__j__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk1003__DOT__j;
    unnamedblk1003__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk1003__DOT__j__Vloopsize;
    unnamedblk1003__DOT__j__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk1004__DOT__j;
    unnamedblk1004__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk1004__DOT__j__Vloopsize;
    unnamedblk1004__DOT__j__Vloopsize = 0;
    convert2string__Vfuncrtn = ""s;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>> regs;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg>> vregs;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>> mems;
    ::IData/*31:0*/ endian;
    ::std::string prefix;
    regs.clear();
    vregs.clear();
    mems.clear();
    endian = 0U;
    prefix = ""s;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"%sMap %s",2
                  , 'S',&(prefix), 'S',&(__VlefCall_0__get_full_name));
    this->__VnoInFunc_get_endian(vlSymsp, 0U, endian);
    this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __VlefCall_1__get_n_bytes);
    __Vtemp_1 = ((4U < endian) ? ""s : Vtb_top__ConstPool__CONSARRAY_11
                 [(7U & endian)]);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s -- %0d bytes (%s)",3
                  , 'S',&(convert2string__Vfuncrtn)
                  , '#',32,__VlefCall_1__get_n_bytes
                  , 'S',&(__Vtemp_1));
    this->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
    unnamedblk1002__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk1002__DOT__j, regs.size())) {
        unnamedblk1002__DOT__j__Vloopsize = regs.size();
        VL_NULL_CHECK(regs.at(unnamedblk1002__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2402)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_2__convert2string);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s\n%s",2
                      , 'S',&(convert2string__Vfuncrtn)
                      , 'S',&(__VlefCall_2__convert2string));
        if ((unnamedblk1002__DOT__j__Vloopsize <= regs.size())) {
            unnamedblk1002__DOT__j = ((::IData)(1U) 
                                      + unnamedblk1002__DOT__j);
        }
    }
    this->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
    unnamedblk1003__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk1003__DOT__j, mems.size())) {
        unnamedblk1003__DOT__j__Vloopsize = mems.size();
        VL_NULL_CHECK(mems.at(unnamedblk1003__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2407)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_3__convert2string);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s\n%s",2
                      , 'S',&(convert2string__Vfuncrtn)
                      , 'S',&(__VlefCall_3__convert2string));
        if ((unnamedblk1003__DOT__j__Vloopsize <= mems.size())) {
            unnamedblk1003__DOT__j = ((::IData)(1U) 
                                      + unnamedblk1003__DOT__j);
        }
    }
    this->__VnoInFunc_get_virtual_registers(vlSymsp, vregs, 1U);
    unnamedblk1004__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk1004__DOT__j, vregs.size())) {
        unnamedblk1004__DOT__j__Vloopsize = vregs.size();
        VL_NULL_CHECK(vregs.at(unnamedblk1004__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2412)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_4__convert2string);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s\n%s",2
                      , 'S',&(convert2string__Vfuncrtn)
                      , 'S',&(__VlefCall_4__convert2string));
        if ((unnamedblk1004__DOT__j__Vloopsize <= vregs.size())) {
            unnamedblk1004__DOT__j = ((::IData)(1U) 
                                      + unnamedblk1004__DOT__j);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_clone\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1934;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_5147;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1005__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1934);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1934;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_5147);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_5147;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2420)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1005__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk1005__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2420)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "UVM/REGMAP/NOCLONE"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk1005__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh", 2420)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "UVM/REGMAP/NOCLONE"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM/REGMAP/NOCLONE"s, "uvm_reg_map doesnt support clone()"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_map.svh"s, 0x00000974U, ""s, 1U);
    }
    clone__Vfuncrtn = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_copy\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_map::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_base_addr = 0;
    __PVT__m_n_bytes = 0;
    __PVT__m_endian = 0;
    __PVT__m_byte_addressing = 0;
    __PVT__m_auto_predict = 0;
    __PVT__m_check_on_read = 0;
    __PVT__m_system_n_bytes = 0;
    __PVT__m_submaps.atDefault() = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_reg_map::~Vtb_top_uvm_pkg__03a__03auvm_reg_map() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_map::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_map::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_map::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_base_addr:" + VL_TO_STRING(__PVT__m_base_addr);
    out += ", m_n_bytes:" + VL_TO_STRING(__PVT__m_n_bytes);
    out += ", m_endian:" + VL_TO_STRING(__PVT__m_endian);
    out += ", m_byte_addressing:" + VL_TO_STRING(__PVT__m_byte_addressing);
    out += ", m_sequence_wrapper:" + VL_TO_STRING(__PVT__m_sequence_wrapper);
    out += ", m_adapter:" + VL_TO_STRING(__PVT__m_adapter);
    out += ", m_sequencer:" + VL_TO_STRING(__PVT__m_sequencer);
    out += ", m_auto_predict:" + VL_TO_STRING(__PVT__m_auto_predict);
    out += ", m_check_on_read:" + VL_TO_STRING(__PVT__m_check_on_read);
    out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
    out += ", m_system_n_bytes:" + VL_TO_STRING(__PVT__m_system_n_bytes);
    out += ", m_parent_map:" + VL_TO_STRING(__PVT__m_parent_map);
    out += ", m_submaps:" + VL_TO_STRING(__PVT__m_submaps);
    out += ", m_submap_rights:" + VL_TO_STRING(__PVT__m_submap_rights);
    out += ", m_regs_info:" + VL_TO_STRING(__PVT__m_regs_info);
    out += ", m_mems_info:" + VL_TO_STRING(__PVT__m_mems_info);
    out += ", m_regs_by_offset:" + VL_TO_STRING(__PVT__m_regs_by_offset);
    out += ", m_regs_by_offset_wo:" + VL_TO_STRING(__PVT__m_regs_by_offset_wo);
    out += ", m_mems_by_offset:" + VL_TO_STRING(__PVT__m_mems_by_offset);
    out += ", policy:" + VL_TO_STRING(__PVT__policy);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
