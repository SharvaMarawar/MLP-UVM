// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pia0bc9590> __Vtask_m_initialize__Vfuncout_1874;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz4eb997f4> __Vfunc_get__Vfuncout_1059;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz4eb997f4> __Vfunc_get__Vfuncout_1060;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz5779618c> __Vfunc_get__Vfuncout_1061;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c> __Vfunc_get__Vfuncout_1062;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1063;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1875;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid_base> unnamedblk1__DOT__cb_base_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT__unnamedblk2__DOT___local_report_object_;
    if ((VlNull{} == this->__Vnontrivs.__PVT__m_inst)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pia0bc9590__Vclpkg.__VnoInFunc_m_initialize(vlProcess, vlSymsp, __Vtask_m_initialize__Vfuncout_1874);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid__Tz4eb997f4__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__Vfuncout_1059);
        unnamedblk1__DOT__cb_base_type = __Vfunc_get__Vfuncout_1059;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid__Tz4eb997f4__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__Vfuncout_1060);
        this->__Vnontrivs.__PVT__m_cb_typeid = __Vfunc_get__Vfuncout_1060;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid__Tz5779618c__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__Vfuncout_1061);
        this->__Vnontrivs.__PVT__m_typeid = __Vfunc_get__Vfuncout_1061;
        this->__Vnontrivs.__PVT__m_inst = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c, vlProcess, vlSymsp);
        if ((unnamedblk1__DOT__cb_base_type == this->__Vnontrivs.__PVT__m_cb_typeid)) {
            this->__Vnontrivs.__PVT__m_base_inst = this->__Vnontrivs.__PVT__m_inst;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pia0bc9590__Vclpkg.__Vnontrivs.__PVT__m_t_inst 
                = this->__Vnontrivs.__PVT__m_base_inst;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__Vnontrivs.__PVT__typeid_map.atWrite(this->__Vnontrivs.__PVT__m_typeid) 
                = this->__Vnontrivs.__PVT__m_inst;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__Vnontrivs.__PVT__type_map.atWrite(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_b_inst) 
                = this->__Vnontrivs.__PVT__m_typeid;
        } else {
            this->__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1062);
            this->__Vnontrivs.__PVT__m_base_inst = __Vfunc_get__Vfuncout_1062;
            VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_base_inst, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 613)->__PVT__m_this_type.push_back(this->__Vnontrivs.__PVT__m_inst);
        }
        if ((VlNull{} == this->__Vnontrivs.__PVT__m_inst)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1063);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1063;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1875);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1875;
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

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::__VnoInFunc_m_is_registered(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::CData/*0:0*/ &m_is_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::__VnoInFunc_m_is_registered\n"); );
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

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::__VnoInFunc_m_is_for_me(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::CData/*0:0*/ &m_is_for_me__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::__VnoInFunc_m_is_for_me\n"); );
    // Body
    m_is_for_me__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pia0bc9590::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_registered = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::~Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz5779618c::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_registered:" + VL_TO_STRING(__PVT__m_registered);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pia0bc9590::to_string_middle();
    return (out);
}
