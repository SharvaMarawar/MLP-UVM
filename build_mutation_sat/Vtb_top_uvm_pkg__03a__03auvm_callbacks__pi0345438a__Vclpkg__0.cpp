// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi05374238> __Vtask_m_initialize__Vfuncout_1763;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz4eb997f4> __Vfunc_get__Vfuncout_981;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz7b6d9c4d> __Vfunc_get__Vfuncout_982;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz70055dd5> __Vfunc_get__Vfuncout_983;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz70055dd5> __Vfunc_get__Vfuncout_984;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_985;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1764;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid_base> unnamedblk1__DOT__cb_base_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT__unnamedblk2__DOT___local_report_object_;
    if ((VlNull{} == this->__Vnontrivs.__PVT__m_inst)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi05374238__Vclpkg.__VnoInFunc_m_initialize(vlProcess, vlSymsp, __Vtask_m_initialize__Vfuncout_1763);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid__Tz4eb997f4__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__Vfuncout_981);
        unnamedblk1__DOT__cb_base_type = __Vfunc_get__Vfuncout_981;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid__Tz7b6d9c4d__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__Vfuncout_982);
        this->__Vnontrivs.__PVT__m_cb_typeid = __Vfunc_get__Vfuncout_982;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid__Tz70055dd5__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__Vfuncout_983);
        this->__Vnontrivs.__PVT__m_typeid = __Vfunc_get__Vfuncout_983;
        this->__Vnontrivs.__PVT__m_inst = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a, vlProcess, vlSymsp);
        if (VL_UNLIKELY(((unnamedblk1__DOT__cb_base_type 
                          == this->__Vnontrivs.__PVT__m_cb_typeid)))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_callback.svh:605: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_callbacks__pi0345438a.get.unnamedblk1", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 605, "");
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi05374238__Vclpkg.__Vnontrivs.__PVT__m_t_inst 
                = this->__Vnontrivs.__PVT__m_base_inst;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__Vnontrivs.__PVT__typeid_map.atWrite(this->__Vnontrivs.__PVT__m_typeid) 
                = this->__Vnontrivs.__PVT__m_inst;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__Vnontrivs.__PVT__type_map.atWrite(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_b_inst) 
                = this->__Vnontrivs.__PVT__m_typeid;
        } else {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__Tz70055dd5__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_984);
            this->__Vnontrivs.__PVT__m_base_inst = __Vfunc_get__Vfuncout_984;
            VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_base_inst, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 613)->__PVT__m_this_type.push_back(this->__Vnontrivs.__PVT__m_inst);
        }
        if ((VlNull{} == this->__Vnontrivs.__PVT__m_inst)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_985);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_985;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1764);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1764;
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

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a__Vclpkg::__VnoInFunc_m_register_pair(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string tname, ::std::string cbname, ::CData/*0:0*/ &m_register_pair__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a__Vclpkg::__VnoInFunc_m_register_pair\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a> inst;
    m_register_pair__Vfuncrtn = 0U;
    this->__VnoInFunc_get(vlProcess, vlSymsp, inst);
    this->__Vnontrivs.__PVT__m_typename = tname;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi05374238__Vclpkg.__Vnontrivs.__PVT__m_typename 
        = tname;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__Vnontrivs.__PVT__typename 
        = tname;
    this->__Vnontrivs.__PVT__m_cb_typename = cbname;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__Vnontrivs.__PVT__typename 
        = cbname;
    VL_NULL_CHECK(inst, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 640)->__PVT__m_registered = 1U;
    m_register_pair__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a__Vclpkg::__VnoInFunc_m_get_q(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> &q, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a__Vclpkg::__VnoInFunc_m_get_q\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
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
            __VlefCall_1__m_get_tw_cb_q = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi05374238__Vclpkg.__Vnontrivs.__PVT__m_tw_cb_q;
        } else {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi05374238__Vclpkg.__Vnontrivs.__PVT__m_t_inst, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 966)->__VnoInFunc_m_get_tw_cb_q(vlSymsp, obj, __VlefCall_1__m_get_tw_cb_q);
        }
        q = __VlefCall_1__m_get_tw_cb_q;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a__Vclpkg::__VnoInFunc_get_first(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &itr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a__Vclpkg::__VnoInFunc_get_first\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a> __Vtask_get__Vfuncout_1765;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_3__callback_mode;
    ::IData/*31:0*/ __VlefExpr_2;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> __VlefCall_1__get;
    ::IData/*31:0*/ __VlefCall_0__size;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> q;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__Vfuncout_1765);
        this->__VnoInFunc_m_get_q(vlSymsp, q, obj);
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

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a__Vclpkg::__VnoInFunc_get_next(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &itr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a__Vclpkg::__VnoInFunc_get_next\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a> __Vtask_get__Vfuncout_1766;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_3__callback_mode;
    ::IData/*31:0*/ __VlefExpr_2;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> __VlefCall_1__get;
    ::IData/*31:0*/ __VlefCall_0__size;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> q;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__Vfuncout_1766);
        this->__VnoInFunc_m_get_q(vlSymsp, q, obj);
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

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::__VnoInFunc_m_is_registered(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::CData/*0:0*/ &m_is_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::__VnoInFunc_m_is_registered\n"); );
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

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::__VnoInFunc_m_is_for_me(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::CData/*0:0*/ &m_is_for_me__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::__VnoInFunc_m_is_for_me\n"); );
    // Body
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> this_cb;
    __VlefExpr_0 = VL_CAST_DYNAMIC(cb, this_cb);
    m_is_for_me__Vfuncrtn = (1U & __VlefExpr_0);
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi05374238::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_registered = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::~Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_registered:" + VL_TO_STRING(__PVT__m_registered);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi05374238::to_string_middle();
    return (out);
}
