// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_registry__pia5220a88> __Vfunc_get__Vfuncout_1499;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pia5220a88__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1499);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1499;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base_::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__seq_item_export = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4, vlProcess, vlSymsp, "seq_item_export"s, 
                                          ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_>{this});
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_stop_sequences(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_stop_sequences\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__get_full_name;
    ::IData/*31:0*/ __VlefCall_0__used;
    Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_sequences(vlSymsp);
    Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__sequence_item_requested = 0U;
    Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__get_next_item_called = 0U;
    VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__m_req_fifo, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 183)->__VnoInFunc_used(vlSymsp, __VlefCall_0__used);
    if (VL_UNLIKELY(((0U != __VlefCall_0__used)))) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), "Sequences stopped.  Removing request from sequencer fifo"s, 0x000000c8U, ""s, 0U, ""s, 0U);
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__m_req_fifo, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 185)->__VnoInFunc_flush(vlSymsp);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_sequencer"s;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_get_next_item(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_get_next_item\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_m_safe_select_item__t_3531;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_0__get_full_name;
    if (VL_UNLIKELY((Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__get_next_item_called))) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, 
                                           VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "Get_next_item called twice without item_done or get in between"s, 0U, ""s, 0U, ""s, 0U);
    }
    co_await this->__VnoInFunc_m_safe_select_item(vlSymsp, 1U, __Vtask_m_safe_select_item__t_3531);
    t = __Vtask_m_safe_select_item__t_3531;
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_try_next_item(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_try_next_item\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_peek__t_3532;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_8__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_7;
    ::IData/*31:0*/ __VlefCall_6__get_report_action;
    ::IData/*31:0*/ __VlefCall_5__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_4__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogOr_3;
    ::IData/*31:0*/ __VlefCall_2__status;
    ::IData/*31:0*/ __VlefCall_1__status;
    ::std::string __VlefCall_0__get_full_name;
    ::IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    ::IData/*31:0*/ unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk1_2__DOT____Vrepeat1 = 0;
    ::std::string unnamedblk372__DOT__msg;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk372__DOT__unnamedblk373__DOT___local_report_object_;
    ::IData/*31:0*/ selected_sequence;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_request> selected_sequence_request;
    ::CData/*0:0*/ found_item;
    {
        selected_sequence = 0U;
        found_item = 0U;
        if (VL_UNLIKELY((Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__get_next_item_called))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "get_next_item/try_next_item called twice without item_done or get in between"s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        unnamedblk1_1__DOT____Vrepeat0 = Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_wait_for_sequences_count;
        {
            while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
                co_await this->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
                this->__VnoInFunc_m_choose_next_request(vlProcess, vlSymsp, selected_sequence);
                if ((0xffffffffU != selected_sequence)) {
                    goto __Vlabel1;
                }
                unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                                  - (::IData)(1U));
            }
            __Vlabel1: ;
        }
        t = VlNull{};
        while ((0xffffffffU != selected_sequence)) {
            selected_sequence_request = Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__PVT__arb_sequence_q.at(selected_sequence);
            this->__VnoInFunc_m_set_arbitration_completed(vlSymsp, VL_NULL_CHECK(selected_sequence_request, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 271)
                                                          ->__PVT__request_id);
            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__PVT__arb_sequence_q.erase(selected_sequence);
            this->__VnoInFunc_m_update_lists(vlSymsp);
            Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__sequence_item_requested = 1U;
            Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__get_next_item_called = 1U;
            unnamedblk1_2__DOT____Vrepeat1 = Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_wait_for_sequences_count;
            while (VL_LTS_III(32, 0U, unnamedblk1_2__DOT____Vrepeat1)) {
                co_await this->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
                VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__m_req_fifo, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 282)->__VnoInFunc_try_peek(vlSymsp, __Vtask_try_peek__t_3532, found_item);
                t = __Vtask_try_peek__t_3532;
                if (found_item) {
                    goto __Vlabel0;
                }
                unnamedblk1_2__DOT____Vrepeat1 = (unnamedblk1_2__DOT____Vrepeat1 
                                                  - (::IData)(1U));
            }
            VL_NULL_CHECK(VL_NULL_CHECK(selected_sequence_request, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 292)
                          ->__PVT__process_id, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 292)->__VnoInFunc_status(vlSymsp, __VlefCall_1__status);
            __VlefLogOr_3 = (4U == __VlefCall_1__status);
            if ((1U & (~ (::IData)(__VlefLogOr_3)))) {
                VL_NULL_CHECK(VL_NULL_CHECK(selected_sequence_request, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 292)
                              ->__PVT__process_id, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 292)->__VnoInFunc_status(vlSymsp, __VlefCall_2__status);
                __VlefLogOr_3 = (0U == __VlefCall_2__status);
            }
            if (__VlefLogOr_3) {
                if ((0U != Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__PVT__arb_completed.exists(VL_NULL_CHECK(selected_sequence_request, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 294)
                                                                                ->__PVT__request_id))) {
                    Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__PVT__arb_completed.erase(VL_NULL_CHECK(selected_sequence_request, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 295)
                                                                                ->__PVT__request_id);
                }
                this->__VnoInFunc_m_choose_next_request(vlProcess, vlSymsp, selected_sequence);
            } else {
                unnamedblk372__DOT__msg = "try_next_item: the selected sequence '%s' did not produce an item within %0d wait_for_sequences call%s.  If the sequence requires more deltas/NBA within this time step, then the wait_for_sequences_count value for this sequencer should be increased.  Note that sequences should not consume non-delta/NBA time between calls to start_item and finish_item.  Returning null item."s;
                this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_4__uvm_get_report_object);
                VL_NULL_CHECK(__VlefCall_4__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 303)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk372__DOT__unnamedblk373__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk372__DOT__unnamedblk373__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 303)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "TRY_NEXT_BLOCKED"s, __VlefCall_5__get_report_verbosity_level);
                __VlefLogAnd_7 = VL_LTES_III(32, 0U, __VlefCall_5__get_report_verbosity_level);
                if (__VlefLogAnd_7) {
                    VL_NULL_CHECK(unnamedblk372__DOT__unnamedblk373__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 303)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "TRY_NEXT_BLOCKED"s, __VlefCall_6__get_report_action);
                    __VlefLogAnd_7 = (0U != __VlefCall_6__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_7))) {
                    VL_NULL_CHECK(VL_NULL_CHECK(selected_sequence_request, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 303)
                                  ->__PVT__sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 303)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "TRY_NEXT_BLOCKED"s, VL_SFORMATF_N_NX(unnamedblk372__DOT__msg,5, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequencer_.try_next_item.unnamedblk372.unnamedblk373", 'T',-9
                                                                                , 'S',&(__VlefCall_8__get_full_name)
                                                                                , '~',32,Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_wait_for_sequences_count
                                                                                , '#',8,
                                                                                (VL_LTS_III(32, 1U, Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_wait_for_sequences_count)
                                                                                 ? 0x73U
                                                                                 : 0U)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh"s, 0x0000012fU, ""s, 1U);
                }
                goto __Vlabel0;
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_item_done(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_item_done\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_get__t_3533;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_0__try_get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t;
    Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__sequence_item_requested = 0U;
    Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__get_next_item_called = 0U;
    VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__m_req_fifo, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 322)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__t_3533, __VlefCall_0__try_get);
    t = __Vtask_try_get__t_3533;
    if (VL_LIKELY((__VlefCall_0__try_get))) {
        VL_NULL_CHECK(t, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 326)->__VnoInFunc_get_sequence_id(vlSymsp, Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_wait_for_item_sequence_id);
        VL_NULL_CHECK(t, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 327)->__VnoInFunc_get_transaction_id(vlSymsp, Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_wait_for_item_transaction_id);
    } else {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SQRBADITMDN"s, "Item_done() called with no outstanding requests. Each call to item_done() must be paired with a previous call to get_next_item()."s, 0U, ""s, 0U, ""s, 0U);
    }
    if ((VlNull{} != item)) {
        VL_NULL_CHECK(this->__PVT__seq_item_export, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer.svh", 331)->__VnoInFunc_put_response(vlSymsp, item);
    }
    this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_get\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_m_safe_select_item__t_3534;
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_m_safe_select_item(vlSymsp, 0U, __Vtask_m_safe_select_item__t_3534);
    t = __Vtask_m_safe_select_item__t_3534;
    this->__VnoInFunc_item_done(vlSymsp, VlNull{});
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_peek\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_m_safe_select_item__t_3535;
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_m_safe_select_item(vlSymsp, 0U, __Vtask_m_safe_select_item__t_3535);
    t = __Vtask_m_safe_select_item__t_3535;
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_sequencer_::~Vtb_top_uvm_pkg__03a__03auvm_sequencer_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_sequencer_::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_sequencer_::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_::to_string_middle\n"); );
    // Body
    std::string out;
    out += "seq_item_export:" + VL_TO_STRING(__PVT__seq_item_export);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base_::to_string_middle();
    return (out);
}
