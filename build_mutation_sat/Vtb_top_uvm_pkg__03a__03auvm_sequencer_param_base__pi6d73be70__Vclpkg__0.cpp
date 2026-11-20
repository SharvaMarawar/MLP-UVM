// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_num_last_reqs = 1U;
    this->__PVT__num_last_items = 1U;
    this->__PVT__m_num_last_rsps = 1U;
    /*super.new*/;
    this->__PVT__rsp_export = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_analysis_export__pi4db5e8fa, vlProcess, vlSymsp, "rsp_export"s, 
                                     ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70>{this});
    this->__PVT__sqr_rsp_analysis_fifo = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi1e7305e0, vlProcess, vlSymsp, "sqr_rsp_analysis_fifo"s, 
                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70>{this});
    VL_NULL_CHECK(this->__PVT__sqr_rsp_analysis_fifo, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 260)->__PVT__print_enabled = 0U;
    this->__PVT__m_req_fifo = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz69703346, vlProcess, vlSymsp, "req_fifo"s, 
                                     ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70>{this}, 1U);
    VL_NULL_CHECK(this->__PVT__m_req_fifo, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 262)->__PVT__print_enabled = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 271)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "num_last_reqs"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__m_num_last_reqs), 0x00000020U, 0x02000000U, 0x2eU, ""s);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 272)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "num_last_rsps"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__m_num_last_rsps), 0x00000020U, 0x02000000U, 0x2eU, ""s);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_connect_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(this->__PVT__rsp_export, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 281)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__sqr_rsp_analysis_fifo, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 281)
                                                                                ->__PVT__analysis_export);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(this->__PVT__sqr_rsp_analysis_fifo, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 290)->__PVT__sequencer_ptr 
        = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70>{this};
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_send_request(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t, ::CData/*0:0*/ rerandomize) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_send_request\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_5__try_put;
    ::IData/*31:0*/ __VlefCall_4__m_get_sqr_sequence_id;
    ::IData/*31:0*/ __VlefCall_3__get_transaction_id;
    ::IData/*31:0*/ __VlefCond_2;
    ::IData/*31:0*/ __VlefCall_1__randomize;
    ::IData/*31:0*/ __VlefExpr_0;
    ::IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> param_t;
    if (VL_UNLIKELY(((VlNull{} == sequence_ptr)))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SNDREQ"s, "Send request sequence_ptr is null"s, 0U, ""s, 0U, ""s, 0U);
    }
    if (VL_UNLIKELY((VL_GTS_III(32, 1U, VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 306)
                                ->__PVT__m_wait_for_grant_semaphore)))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SNDREQ"s, "Send request called without wait_for_grant"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 309)->__PVT__m_wait_for_grant_semaphore 
        = (VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 309)
           ->__PVT__m_wait_for_grant_semaphore - (::IData)(1U));
    __VlefExpr_0 = VL_CAST_DYNAMIC(t, param_t);
    if (VL_LIKELY(((0U != __VlefExpr_0)))) {
        if (rerandomize) {
            if ((VlNull{} != param_t)) {
                VL_NULL_CHECK(param_t, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 313)->__VnoInFunc_randomize(vlSymsp, __VlefCall_1__randomize);
                __VlefCond_2 = __VlefCall_1__randomize;
            } else {
                __VlefCond_2 = 0U;
            }
            if (VL_UNLIKELY(((1U & (~ (0U != __VlefCond_2)))))) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "SQRSNDREQ"s, "Failed to rerandomize sequence item in send_request"s, 0U, ""s, 0U, ""s, 0U);
            }
        }
        VL_NULL_CHECK(param_t, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 317)->__VnoInFunc_get_transaction_id(vlSymsp, __VlefCall_3__get_transaction_id);
        if ((0xffffffffU == __VlefCall_3__get_transaction_id)) {
            __Vincrement1 = VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 318)
                ->__PVT__m_next_transaction_id;
            VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 318)->__PVT__m_next_transaction_id 
                = ((::IData)(1U) + VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 318)
                   ->__PVT__m_next_transaction_id);
            VL_NULL_CHECK(param_t, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 318)->__VnoInFunc_set_transaction_id(vlSymsp, __Vincrement1);
        }
        this->__VnoInFunc_m_last_req_push_front(vlSymsp, param_t);
    } else {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SQRSNDREQCAST"s, "send_request failed to cast sequence item"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 325)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_sequencer_id, 1U, __VlefCall_4__m_get_sqr_sequence_id);
    VL_NULL_CHECK(param_t, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 325)->__VnoInFunc_set_sequence_id(vlSymsp, __VlefCall_4__m_get_sqr_sequence_id);
    VL_NULL_CHECK(t, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 326)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70>{this});
    VL_NULL_CHECK(this->__PVT__m_req_fifo, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 327)->__VnoInFunc_try_put(vlProcess, vlSymsp, param_t, __VlefCall_5__try_put);
    if (VL_UNLIKELY(((1U & (~ (::IData)(__VlefCall_5__try_put)))))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SQRSNDREQGNI"s, "Concurrent calls to get_next_item() not supported. Consider using a semaphore to ensure that concurrent processes take turns in the driver"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__PVT__m_num_reqs_sent = ((::IData)(1U) + this->__PVT__m_num_reqs_sent);
    this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_put_response(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_put_response\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_3__get_sequence_id;
    ::CData/*0:0*/ __VlefCall_2__get_use_response_handler;
    ::IData/*31:0*/ __VlefCall_1__get_sequence_id;
    ::IData/*31:0*/ __VlefCall_0__get_sequence_id;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr;
    {
        if (VL_UNLIKELY(((VlNull{} == t)))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SQRPUT"s, "Driver put a null response"s, 0U, ""s, 0U, ""s, 0U);
        }
        this->__VnoInFunc_m_last_rsp_push_front(vlSymsp, t);
        this->__PVT__m_num_rsps_received = ((::IData)(1U) 
                                            + this->__PVT__m_num_rsps_received);
        VL_NULL_CHECK(t, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 351)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_0__get_sequence_id);
        if (VL_UNLIKELY(((0xffffffffU == __VlefCall_0__get_sequence_id)))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SQRPUT"s, "Driver put a response with null sequence_id"s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(t, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 358)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_1__get_sequence_id);
        this->__VnoInFunc_m_find_sequence(vlSymsp, __VlefCall_1__get_sequence_id, sequence_ptr);
        if (VL_LIKELY(((VlNull{} != sequence_ptr)))) {
            VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 362)->__VnoInFunc_get_use_response_handler(vlSymsp, __VlefCall_2__get_use_response_handler);
            if (__VlefCall_2__get_use_response_handler) {
                VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 363)->__VnoInFunc_response_handler(vlSymsp, t);
                goto __Vlabel0;
            }
            VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 367)->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
        } else {
            VL_NULL_CHECK(t, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 372)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_3__get_sequence_id);
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Sequencer"s, VL_SFORMATF_N_NX("Dropping response for sequence %0d, sequence not found.  Probable cause: sequence exited or has been killed",1
                                                                                , '~',32,__VlefCall_3__get_sequence_id) , 0U, ""s, 0U, ""s, 0U);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_analysis_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_analysis_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> response;
    __VlefExpr_0 = VL_CAST_DYNAMIC(t, response);
    if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_0)))))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "ANALWRT"s, "Failure to cast analysis port write item"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__VnoInFunc_put_response(vlProcess, vlSymsp, response);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_m_last_req_push_front(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_m_last_req_push_front\n"); );
    // Body
    {
        if ((1U & (~ (0U != this->__PVT__m_num_last_reqs)))) {
            goto __Vlabel0;
        }
        if ((this->__PVT__m_last_req_buffer.size() 
             == this->__PVT__m_num_last_reqs)) {
            std::ignore = this->__PVT__m_last_req_buffer.pop_back();
        }
        this->__PVT__m_last_req_buffer.push_front(item);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_m_last_rsp_push_front(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_m_last_rsp_push_front\n"); );
    // Body
    {
        if ((1U & (~ (0U != this->__PVT__m_num_last_rsps)))) {
            goto __Vlabel0;
        }
        if ((this->__PVT__m_last_rsp_buffer.size() 
             == this->__PVT__m_num_last_rsps)) {
            std::ignore = this->__PVT__m_last_rsp_buffer.pop_back();
        }
        this->__PVT__m_last_rsp_buffer.push_front(item);
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_m_safe_select_item(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ get_next_item, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_m_safe_select_item\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_hac9d7dea__0;
    __Vtrigprevexpr_hac9d7dea__0 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_request> __Vtask_m_select_sequence__selected_sequence_request_3543;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> __Vtask_peek__t_3549;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VlefLogAnd_1;
    ::IData/*31:0*/ __VlefCall_0__status;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_55> __VDynScope_m_safe_select_item_0;
    __VDynScope_m_safe_select_item_0 = VL_NEW(Vtb_top_uvm_pkg__03a__03a__VDynScope_55, vlSymsp);
    if ((1U & (~ (::IData)(this->__PVT__sequence_item_requested)))) {
        co_await this->__VnoInFunc_m_select_sequence(vlProcess, vlSymsp, __Vtask_m_select_sequence__selected_sequence_request_3543);
        VL_NULL_CHECK(__VDynScope_m_safe_select_item_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 512)->__PVT__selected_sequence_request 
            = __Vtask_m_select_sequence__selected_sequence_request_3543;
        this->__VnoInFunc_m_safe_select_item____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_m_safe_select_item_0);
        if ((VlNull{} == VL_NULL_CHECK(__VDynScope_m_safe_select_item_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 535)
             ->__PVT__select_process)) {
            ::CData/*0:0*/ __VdynTrigger_hb27f16db__0;
            __VdynTrigger_hb27f16db__0 = 0;
            __VdynTrigger_hb27f16db__0 = 0U;
            while ((1U & (~ (::IData)(__VdynTrigger_hb27f16db__0)))) {
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@([true] (null != uvm_pkg::uvm_sequencer_param_base__pi6d73be70.__VDynScope_m_safe_select_item_0.select_process))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 
                                                                                535);
                __Vtrigprevexpr_hac9d7dea__0 = (VlNull{} 
                                                != VL_NULL_CHECK(__VDynScope_m_safe_select_item_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 535)
                                                ->__PVT__select_process);
                __VdynTrigger_hb27f16db__0 = __Vtrigprevexpr_hac9d7dea__0;
                vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hb27f16db__0);
            }
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                            vlProcess, 
                                                                            "@([true] (null != uvm_pkg::uvm_sequencer_param_base__pi6d73be70.__VDynScope_m_safe_select_item_0.select_process))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 
                                                                            535);
        }
    }
    this->__PVT__sequence_item_requested = 1U;
    if (get_next_item) {
        this->__PVT__get_next_item_called = 1U;
    }
    co_await VL_NULL_CHECK(this->__PVT__m_req_fifo, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 543)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__t_3549);
    t = __Vtask_peek__t_3549;
    __VlefLogAnd_1 = (VlNull{} != VL_NULL_CHECK(__VDynScope_m_safe_select_item_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 544)
                      ->__PVT__select_process);
    if (__VlefLogAnd_1) {
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_m_safe_select_item_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 544)
                      ->__PVT__select_process, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 544)->__VnoInFunc_status(vlSymsp, __VlefCall_0__status);
        __VlefLogAnd_1 = (0U != __VlefCall_0__status);
    }
    if (__VlefLogAnd_1) {
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_m_safe_select_item_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 546)
                      ->__PVT__select_process, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 546)->__VnoInFunc_kill(vlSymsp);
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_m_safe_select_item____Vfork_1__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_55> __VDynScope_m_safe_select_item_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_m_safe_select_item____Vfork_1__0\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_55> __Vtask___VforkTask_0____VDynScope_m_safe_select_item_0_3544;
    ::CData/*0:0*/ __Vtask___VforkTask_0____VlefCall_1__is_empty_3545;
    __Vtask___VforkTask_0____VlefCall_1__is_empty_3545 = 0;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vtask___VforkTask_0____VlefCall_0__self_3546;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vfunc_self__Vfuncout_1501;
    ::CData/*0:0*/ __Vtask_is_empty__Vfuncout_3547;
    __Vtask_is_empty__Vfuncout_3547 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_request> __Vtask_m_select_sequence__selected_sequence_request_3548;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_0____VDynScope_m_safe_select_item_0_3544 
        = __VDynScope_m_safe_select_item_0;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0xffffffffffffffffULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 
                                                               513);
    vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__Vfuncout_1501);
    __Vtask___VforkTask_0____VlefCall_0__self_3546 
        = __Vfunc_self__Vfuncout_1501;
    VL_NULL_CHECK(__Vtask___VforkTask_0____VDynScope_m_safe_select_item_0_3544, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 515)->__PVT__select_process 
        = __Vtask___VforkTask_0____VlefCall_0__self_3546;
    {
        while (true) {
            co_await VL_NULL_CHECK(VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0____VDynScope_m_safe_select_item_0_3544, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 519)
                                                 ->__PVT__selected_sequence_request, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 519)
                                   ->__PVT__process_id, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 519)->__VnoInFunc_await(vlProcess, vlSymsp);
            VL_NULL_CHECK(this->__PVT__m_req_fifo, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 521)->__VnoInFunc_is_empty(vlProcess, vlSymsp, __Vtask_is_empty__Vfuncout_3547);
            __Vtask___VforkTask_0____VlefCall_1__is_empty_3545 
                = __Vtask_is_empty__Vfuncout_3547;
            if ((1U & (~ (::IData)(__Vtask___VforkTask_0____VlefCall_1__is_empty_3545)))) {
                goto __Vlabel0;
            }
            if ((0U != Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__PVT__arb_completed.exists(VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0____VDynScope_m_safe_select_item_0_3544, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 527)
                                                                                ->__PVT__selected_sequence_request, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 527)
                                                                                ->__PVT__request_id))) {
                Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__PVT__arb_completed.erase(VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0____VDynScope_m_safe_select_item_0_3544, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 528)
                                                                                ->__PVT__selected_sequence_request, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 528)
                                                                                ->__PVT__request_id);
            }
            co_await this->__VnoInFunc_m_select_sequence(vlProcess, vlSymsp, __Vtask_m_select_sequence__selected_sequence_request_3548);
            VL_NULL_CHECK(__Vtask___VforkTask_0____VDynScope_m_safe_select_item_0_3544, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_param_base.svh", 530)->__PVT__selected_sequence_request 
                = __Vtask_m_select_sequence__selected_sequence_request_3548;
        }
        __Vlabel0: ;
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__sequence_item_requested = 0;
    __PVT__get_next_item_called = 0;
    __PVT__m_num_reqs_sent = 0;
    __PVT__m_num_rsps_received = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::~Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_last_req_buffer:" + VL_TO_STRING(__PVT__m_last_req_buffer);
    out += ", m_last_rsp_buffer:" + VL_TO_STRING(__PVT__m_last_rsp_buffer);
    out += ", sequence_item_requested:" + VL_TO_STRING(__PVT__sequence_item_requested);
    out += ", get_next_item_called:" + VL_TO_STRING(__PVT__get_next_item_called);
    out += ", m_num_last_reqs:" + VL_TO_STRING(__PVT__m_num_last_reqs);
    out += ", num_last_items:" + VL_TO_STRING(__PVT__num_last_items);
    out += ", m_num_last_rsps:" + VL_TO_STRING(__PVT__m_num_last_rsps);
    out += ", m_num_reqs_sent:" + VL_TO_STRING(__PVT__m_num_reqs_sent);
    out += ", m_num_rsps_received:" + VL_TO_STRING(__PVT__m_num_rsps_received);
    out += ", sqr_rsp_analysis_fifo:" + VL_TO_STRING(__PVT__sqr_rsp_analysis_fifo);
    out += ", rsp_export:" + VL_TO_STRING(__PVT__rsp_export);
    out += ", m_req_fifo:" + VL_TO_STRING(__PVT__m_req_fifo);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::to_string_middle();
    return (out);
}
