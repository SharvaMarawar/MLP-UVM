// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg::__VnoInFunc_m_initialize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22> &m_initialize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg::__VnoInFunc_m_initialize\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks_base> __Vtask_m_initialize__Vfuncout_1880;
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__Vnontrivs.__PVT__m_t_inst)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__VnoInFunc_m_initialize(vlProcess, vlSymsp, __Vtask_m_initialize__Vfuncout_1880);
        this->__Vnontrivs.__PVT__m_t_inst = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22, vlProcess, vlSymsp);
        this->__Vnontrivs.__PVT__m_tw_cb_q = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4, vlProcess, vlSymsp, "typewide_queue"s);
    }
    m_initialize__Vfuncrtn = this->__Vnontrivs.__PVT__m_t_inst;
}

void Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg::__VnoInFunc_m_cb_find(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> q, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::IData/*31:0*/ &m_cb_find__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg::__VnoInFunc_m_cb_find\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> __VlefCall_1__get;
    ::IData/*31:0*/ __VlefCall_0__size;
    ::IData/*31:0*/ unnamedblk3__DOT__i;
    {
        m_cb_find__Vfuncrtn = 0U;
        unnamedblk3__DOT__i = 0U;
        unnamedblk3__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 262)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, unnamedblk3__DOT__i, __VlefCall_0__size))) break;
            VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 264)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk3__DOT__i, __VlefCall_1__get);
            if ((__VlefCall_1__get == cb)) {
                m_cb_find__Vfuncrtn = unnamedblk3__DOT__i;
                goto __Vlabel0;
            }
            unnamedblk3__DOT__i = ((::IData)(1U) + unnamedblk3__DOT__i);
        }
        m_cb_find__Vfuncrtn = 0xffffffffU;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::__VnoInFunc_m_am_i_a(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::CData/*0:0*/ &m_am_i_a__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::__VnoInFunc_m_am_i_a\n"); );
    // Body
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> this_type_inst;
    {
        m_am_i_a__Vfuncrtn = 0U;
        if ((VlNull{} == obj)) {
            m_am_i_a__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(obj, this_type_inst);
        m_am_i_a__Vfuncrtn = (1U & __VlefExpr_0);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::__VnoInFunc_m_get_tw_cb_q(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> &m_get_tw_cb_q__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::__VnoInFunc_m_get_tw_cb_q\n"); );
    // Body
    ::CData/*0:0*/ __VlefCall_0__m_am_i_a;
    ::IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk1__DOT__i__Vloopsize;
    unnamedblk1__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks_base> unnamedblk1__DOT__unnamedblk2__DOT__dt;
    {
        this->__VnoInFunc_m_am_i_a(vlSymsp, obj, __VlefCall_0__m_am_i_a);
        if (__VlefCall_0__m_am_i_a) {
            unnamedblk1__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk1__DOT__i, Vtb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
                unnamedblk1__DOT__i__Vloopsize = Vtb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size();
                unnamedblk1__DOT__unnamedblk2__DOT__dt 
                    = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__Vnontrivs.__PVT__typeid_map
                    .at(Vtb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.at(unnamedblk1__DOT__i));
                if (((VlNull{} != unnamedblk1__DOT__unnamedblk2__DOT__dt) 
                     & (unnamedblk1__DOT__unnamedblk2__DOT__dt 
                        != ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22>{this}))) {
                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__dt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 244)->__VnoInFunc_m_get_tw_cb_q(vlSymsp, obj, m_get_tw_cb_q__Vfuncrtn);
                    if ((VlNull{} != m_get_tw_cb_q__Vfuncrtn)) {
                        goto __Vlabel0;
                    }
                }
                if ((unnamedblk1__DOT__i__Vloopsize 
                     <= Vtb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
                    unnamedblk1__DOT__i = ((::IData)(1U) 
                                           + unnamedblk1__DOT__i);
                }
            }
            m_get_tw_cb_q__Vfuncrtn = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg.__Vnontrivs.__PVT__m_tw_cb_q;
        } else {
            m_get_tw_cb_q__Vfuncrtn = VlNull{};
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::__VnoInFunc_m_add_tw_cbs(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::__VnoInFunc_m_add_tw_cbs\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_first__Vfuncout_1876;
    __Vtask_first__Vfuncout_1876 = 0;
    ::IData/*31:0*/ __Vtask_next__Vfuncout_1877;
    __Vtask_next__Vfuncout_1877 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_4__next;
    ::IData/*31:0*/ __VlefCall_3__m_cb_find;
    ::IData/*31:0*/ __VlefExpr_2;
    ::IData/*31:0*/ __VlefCall_1__first;
    ::IData/*31:0*/ __VlefCall_0__m_cb_find;
    ::IData/*31:0*/ unnamedblk4__DOT__i;
    unnamedblk4__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk4__DOT__i__Vloopsize;
    unnamedblk4__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks_base> cb_pair;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> me;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> q;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg.__Vnontrivs.__PVT__m_tw_cb_q, cb, __VlefCall_0__m_cb_find);
    if ((0xffffffffU == __VlefCall_0__m_cb_find)) {
        if ((0U == ordering)) {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg.__Vnontrivs.__PVT__m_tw_cb_q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 283)->__VnoInFunc_push_back(vlSymsp, cb);
        } else {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg.__Vnontrivs.__PVT__m_tw_cb_q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 288)->__VnoInFunc_push_front(vlSymsp, cb);
        }
    }
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 292)->__VnoInFunc_first(vlSymsp, obj, __Vtask_first__Vfuncout_1876);
    __VlefCall_1__first = __Vtask_first__Vfuncout_1876;
    if ((0U != __VlefCall_1__first)) {
        do {
            __VlefExpr_2 = VL_CAST_DYNAMIC(obj, me);
            if ((0U != __VlefExpr_2)) {
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 295)->__VnoInFunc_get(vlSymsp, obj, q);
                if ((VlNull{} == q)) {
                    q = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4, vlProcess, vlSymsp, ""s);
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 298)->__VnoInFunc_add(vlSymsp, obj, q);
                }
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, __VlefCall_3__m_cb_find);
                if ((0xffffffffU == __VlefCall_3__m_cb_find)) {
                    if ((0U == ordering)) {
                        VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 303)->__VnoInFunc_push_back(vlSymsp, cb);
                    } else {
                        VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 308)->__VnoInFunc_push_front(vlSymsp, cb);
                    }
                }
            }
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 314)->__VnoInFunc_next(vlSymsp, obj, __Vtask_next__Vfuncout_1877);
            __VlefCall_4__next = __Vtask_next__Vfuncout_1877;
        } while ((0U != __VlefCall_4__next));
    }
    unnamedblk4__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk4__DOT__i, Vtb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
        unnamedblk4__DOT__i__Vloopsize = Vtb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size();
        cb_pair = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__Vnontrivs.__PVT__typeid_map
            .at(Vtb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.at(unnamedblk4__DOT__i));
        if ((cb_pair != ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22>{this})) {
            VL_NULL_CHECK(cb_pair, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 320)->__VnoInFunc_m_add_tw_cbs(vlProcess, vlSymsp, cb, ordering);
        }
        if ((unnamedblk4__DOT__i__Vloopsize <= Vtb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
            unnamedblk4__DOT__i = ((::IData)(1U) + unnamedblk4__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::__VnoInFunc_m_delete_tw_cbs(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::CData/*0:0*/ &m_delete_tw_cbs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::__VnoInFunc_m_delete_tw_cbs\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_first__Vfuncout_1878;
    __Vtask_first__Vfuncout_1878 = 0;
    ::IData/*31:0*/ __Vtask_next__Vfuncout_1879;
    __Vtask_next__Vfuncout_1879 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_2__m_delete_tw_cbs;
    ::IData/*31:0*/ __VlefCall_1__next;
    ::IData/*31:0*/ __VlefCall_0__first;
    ::IData/*31:0*/ unnamedblk5__DOT__i;
    unnamedblk5__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk5__DOT__i__Vloopsize;
    unnamedblk5__DOT__i__Vloopsize = 0;
    m_delete_tw_cbs__Vfuncrtn = 0U;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks_base> cb_pair;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> q;
    ::IData/*31:0*/ pos;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg.__Vnontrivs.__PVT__m_tw_cb_q, cb, pos);
    if ((0xffffffffU != pos)) {
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg.__Vnontrivs.__PVT__m_tw_cb_q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 335)->__VnoInFunc_delete(vlProcess, vlSymsp, pos);
        m_delete_tw_cbs__Vfuncrtn = 1U;
    }
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 339)->__VnoInFunc_first(vlSymsp, obj, __Vtask_first__Vfuncout_1878);
    __VlefCall_0__first = __Vtask_first__Vfuncout_1878;
    if ((0U != __VlefCall_0__first)) {
        do {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 341)->__VnoInFunc_get(vlSymsp, obj, q);
            if ((VlNull{} == q)) {
                q = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4, vlProcess, vlSymsp, ""s);
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 344)->__VnoInFunc_add(vlSymsp, obj, q);
            }
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, pos);
            if ((0xffffffffU != pos)) {
                VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 348)->__VnoInFunc_delete(vlProcess, vlSymsp, pos);
                m_delete_tw_cbs__Vfuncrtn = 1U;
            }
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__Vnontrivs.__PVT__m_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 352)->__VnoInFunc_next(vlSymsp, obj, __Vtask_next__Vfuncout_1879);
            __VlefCall_1__next = __Vtask_next__Vfuncout_1879;
        } while ((0U != __VlefCall_1__next));
    }
    unnamedblk5__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk5__DOT__i, Vtb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
        unnamedblk5__DOT__i__Vloopsize = Vtb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size();
        cb_pair = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__Vnontrivs.__PVT__typeid_map
            .at(Vtb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.at(unnamedblk5__DOT__i));
        if ((cb_pair != ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22>{this})) {
            VL_NULL_CHECK(cb_pair, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_callback.svh", 358)->__VnoInFunc_m_delete_tw_cbs(vlProcess, vlSymsp, cb, __VlefCall_2__m_delete_tw_cbs);
            m_delete_tw_cbs__Vfuncrtn = ((::IData)(m_delete_tw_cbs__Vfuncrtn) 
                                         | (::IData)(__VlefCall_2__m_delete_tw_cbs));
        }
        if ((unnamedblk5__DOT__i__Vloopsize <= Vtb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
            unnamedblk5__DOT__i = ((::IData)(1U) + unnamedblk5__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_callbacks_base::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::~Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_callbacks_base::to_string_middle();
    return (out);
}
