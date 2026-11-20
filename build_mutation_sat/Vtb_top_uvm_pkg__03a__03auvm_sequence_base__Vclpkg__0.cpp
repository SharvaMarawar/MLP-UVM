// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pif3ea0ac9> __Vfunc_get__Vfuncout_1504;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pif3ea0ac9__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1504);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1504;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_sequence_base"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_sequence_item::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_next_transaction_id = 1U;
    this->__PVT__m_priority = 0xffffffffU;
    this->__PVT__response_queue_depth = 8U;
    /*super.new*/;
    this->__PVT__m_sequence_state_mutex = VL_NEW(Vtb_top_std__03a__03asemaphore, vlSymsp, 1U);
    this->__PVT__m_sequence_state = 1U;
    this->__PVT__m_wait_for_grant_semaphore = 0U;
    this->__VnoInFunc_m_init_phase_daps(vlProcess, vlSymsp, 1U);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_randomize_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_randomize_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_randomize_enabled\n"); );
    // Body
    get_randomize_enabled__Vfuncrtn = (1U & (~ (::IData)(this->__PVT__do_not_randomize)));
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_item(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_item\n"); );
    // Body
    is_item__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence_state(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_sequence_state__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence_state\n"); );
    // Body
    get_sequence_state__Vfuncrtn = this->__PVT__m_sequence_state;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent_sequence, ::IData/*31:0*/ this_priority, ::CData/*0:0*/ call_pre_post) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_m_register_sequence__Vfuncout_3562;
    __Vtask_m_register_sequence__Vfuncout_3562 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_13__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_12;
    ::IData/*31:0*/ __VlefCall_11__get_report_action;
    ::IData/*31:0*/ __VlefCall_10__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_9__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_8__get_automatic_phase_objection;
    ::CData/*0:0*/ __VlefCall_7__get_automatic_phase_objection;
    ::IData/*31:0*/ __VlefCond_6;
    ::IData/*31:0*/ __VlefCall_5__get_handle;
    ::std::string __VlefCall_4__get_root_sequence_name;
    ::std::string __VlefCall_3__get_name;
    ::std::string __VlefCall_2__get_full_name;
    ::std::string __VlefCall_1__get_full_name;
    ::IData/*31:0*/ __VlefCall_0__try_get;
    ::IData/*31:0*/ unnamedblk1__DOT__handle;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    ::CData/*0:0*/ old_automatic_phase_objection;
    old_automatic_phase_objection = 0U;
    this->__VnoInFunc_set_item_context(vlProcess, vlSymsp, parent_sequence, sequencer);
    VL_NULL_CHECK(this->__PVT__m_sequence_state_mutex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 309)->__VnoInFunc_try_get(vlSymsp, 1U, __VlefCall_0__try_get);
    if (VL_UNLIKELY(((0U == __VlefCall_0__try_get)))) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQ_NOT_DONE"s, 
                                           VL_CVT_PACK_STR_NN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN("Sequence "s, __VlefCall_1__get_full_name), " already started"s)), 0U, ""s, 0U, ""s, 0U);
    }
    this->__PVT__m_parent_process_guard = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz05d526ac, vlProcess, vlSymsp, "uvm_sequence_base::start_guard"s, 
                                                 ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
    if ((VlNull{} != Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence)) {
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 317)->__PVT__children_array.atWrite(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this}) = 1U;
    }
    if (VL_UNLIKELY((VL_GTS_III(32, 0xffffffffU, this_priority)))) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQPRI"s, VL_SFORMATF_N_NX("Sequence %s start has illegal priority: %0d",2
                                                                                , 'S',&(__VlefCall_2__get_full_name)
                                                                                , '~',32,this_priority) , 0U, ""s, 0U, ""s, 0U);
    }
    if (VL_GTS_III(32, 0U, this_priority)) {
        if ((VlNull{} == parent_sequence)) {
            this_priority = 0x00000064U;
        } else {
            VL_NULL_CHECK(parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 331)->__VnoInFunc_get_priority(vlSymsp, this_priority);
        }
    }
    {
        // Inlined CFunc: __VnoInFunc_clear_response_queue
        this->__PVT__response_queue.clear();
    }
    this->__PVT__m_priority = this_priority;
    if ((VlNull{} != Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        unnamedblk1__DOT__handle = 0U;
        if ((VlNull{} == Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
            VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 344)->__VnoInFunc_begin_tr(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_name), ""s, ""s, 0ULL, 0U, unnamedblk1__DOT__handle);
        } else {
            this->__VnoInFunc_get_root_sequence_name(vlSymsp, __VlefCall_4__get_root_sequence_name);
            if ((VlNull{} == VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 348)
                 ->__PVT__m_tr_recorder)) {
                __VlefCond_6 = 0U;
            } else {
                VL_NULL_CHECK(VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 348)
                              ->__PVT__m_tr_recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 348)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_5__get_handle);
                __VlefCond_6 = __VlefCall_5__get_handle;
            }
            VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 347)->__VnoInFunc_begin_tr(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_root_sequence_name), ""s, ""s, 0ULL, __VlefCond_6, unnamedblk1__DOT__handle);
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, unnamedblk1__DOT__handle, this->__PVT__m_tr_recorder);
    }
    this->__VnoInFunc_set_sequence_id(vlSymsp, 0xffffffffU);
    if ((VlNull{} != Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 358)->__VnoInFunc_m_register_sequence(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, __Vtask_m_register_sequence__Vfuncout_3562);
    }
    this->__PVT__m_sequence_state = 2U;
    {
        ::VlForkSync __Vfork_1__sync;
        __Vfork_1__sync.init(1U, vlProcess);
        this->__VnoInFunc_start____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_1__sync, __VlefCall_7__get_automatic_phase_objection, call_pre_post, parent_sequence, __VlefCall_8__get_automatic_phase_objection);
        co_await __Vfork_1__sync.join(vlProcess, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                      364);
    }
    this->__PVT__m_sequence_process = VlNull{};
    if ((VlNull{} != this->__PVT__m_killing_process)) {
        {
            ::VlForkSync __Vfork_2__sync;
            __Vfork_2__sync.init(1U, vlProcess);
            this->__VnoInFunc_start____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_2__sync);
            co_await __Vfork_2__sync.join(vlProcess, 
                                          "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                          426);
        }
    }
    if (((0x00000100U != this->__PVT__m_sequence_state) 
         & (0x00000080U != this->__PVT__m_sequence_state))) {
        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_9__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_9__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 446)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 446)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "SEQBDYZMB"s, __VlefCall_10__get_report_verbosity_level);
        __VlefLogAnd_12 = VL_LTES_III(32, 0U, __VlefCall_10__get_report_verbosity_level);
        if (__VlefLogAnd_12) {
            VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 446)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "SEQBDYZMB"s, __VlefCall_11__get_report_action);
            __VlefLogAnd_12 = (0U != __VlefCall_11__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_12))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "SEQBDYZMB"s, VL_SFORMATF_N_NX("The child process forked by start() on sequence '%s' was terminated without killing the sequence, perhaps by an errant \"disable fork.\"  The kill() method is being automatically triggered.",1
                                                                                , 'S',&(__VlefCall_13__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh"s, 0x000001beU, ""s, 1U);
        }
        this->__VnoInFunc_kill(vlProcess, vlSymsp);
    }
    if ((VlNull{} != Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 451)->__VnoInFunc_end_tr(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, 0ULL, 1U);
    }
    if ((0x00000080U != this->__PVT__m_sequence_state)) {
        {
            // Inlined CFunc: __VnoInFunc_clean_exit_sequence
            ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vinline_0___VnoInFunc_clean_exit_sequence___Vtask_clear__Vfuncout_3563;
            ::IData/*31:0*/ __Vinline_0___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID;
            __Vinline_0___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID = 0;
            ::IData/*31:0*/ __Vinline_0___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext;
            __Vinline_0___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext = 0;
            ::CData/*0:0*/ __Vinline_0___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore;
            __Vinline_0___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore = 0;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> __Vinline_0___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__unnamedblk4__DOT__s;
            if ((VlNull{} != Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
                VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 477)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
            }
            __Vinline_0___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore 
                = (0U != this->__PVT__m_sqr_seq_ids.first(__Vinline_0___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext));
            while (__Vinline_0___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore) {
                __Vinline_0___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID 
                    = __Vinline_0___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext;
                __Vinline_0___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore 
                    = (0U != this->__PVT__m_sqr_seq_ids.next(__Vinline_0___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext));
                __Vinline_0___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__unnamedblk4__DOT__s 
                    = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__Vnontrivs.__PVT__all_sequencer_insts
                    .at(__Vinline_0___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID);
                VL_NULL_CHECK(__Vinline_0___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__unnamedblk4__DOT__s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 483)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
            }
            this->__PVT__m_sqr_seq_ids.clear();
            VL_NULL_CHECK(this->__PVT__m_sequence_state_mutex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 487)->__VnoInFunc_put(vlSymsp, 1U);
            if ((VlNull{} != this->__PVT__m_parent_process_guard)) {
                VL_NULL_CHECK(this->__PVT__m_parent_process_guard, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 491)->__VnoInFunc_clear(vlSymsp, __Vinline_0___VnoInFunc_clean_exit_sequence___Vtask_clear__Vfuncout_3563);
            }
        }
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0ULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                                               460);
    if (((VlNull{} != Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence) 
         && (0U != VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 462)
             ->__PVT__children_array.exists(::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this})))) {
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 463)->__PVT__children_array.erase(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, old_automatic_phase_objection);
    this->__VnoInFunc_m_init_phase_daps(vlProcess, vlSymsp, 1U);
    this->__VnoInFunc_set_automatic_phase_objection(vlProcess, vlSymsp, old_automatic_phase_objection);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start____Vfork_2__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start____Vfork_2__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_2__sync.onKill(vlProcess);
    {
        ::VlForkSync __Vfork_3__sync;
        __Vfork_3__sync.init(1U, vlProcess);
        this->__VnoInFunc_start____Vfork_2__0____Vfork_3__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_3__sync);
        this->__VnoInFunc_start____Vfork_2__0____Vfork_3__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_3__sync);
        co_await __Vfork_3__sync.join(vlProcess, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                      428);
    }
    vlProcess->disableFork();
    vlProcess->state(VlProcess::FINISHED);
    __Vfork_2__sync.done("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                         427);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start____Vfork_2__0____Vfork_3__1(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start____Vfork_2__0____Vfork_3__1\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_3__sync.onKill(vlProcess);
    co_await VL_NULL_CHECK(this->__PVT__m_killing_process, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 433)->__VnoInFunc_await(vlProcess, vlSymsp);
    {
        // Inlined CFunc: __VnoInFunc_m_killed
        this->__PVT__m_sequence_state = 0x00000080U;
        if (((VlNull{} != Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence) 
             && (0U != VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 967)
                 ->__PVT__children_array.exists(::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this})))) {
            VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 968)->__PVT__children_array.erase(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
        }
        {
            // Inlined CFunc: __VnoInFunc_clean_exit_sequence
            ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence___Vtask_clear__Vfuncout_3563;
            ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID;
            __Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID = 0;
            ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext;
            __Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext = 0;
            ::CData/*0:0*/ __Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore;
            __Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore = 0;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> __Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__unnamedblk4__DOT__s;
            if ((VlNull{} != Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
                VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 477)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
            }
            __Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore 
                = (0U != this->__PVT__m_sqr_seq_ids.first(__Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext));
            while (__Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore) {
                __Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID 
                    = __Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext;
                __Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore 
                    = (0U != this->__PVT__m_sqr_seq_ids.next(__Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext));
                __Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__unnamedblk4__DOT__s 
                    = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__Vnontrivs.__PVT__all_sequencer_insts
                    .at(__Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID);
                VL_NULL_CHECK(__Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__unnamedblk4__DOT__s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 483)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
            }
            this->__PVT__m_sqr_seq_ids.clear();
            VL_NULL_CHECK(this->__PVT__m_sequence_state_mutex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 487)->__VnoInFunc_put(vlSymsp, 1U);
            if ((VlNull{} != this->__PVT__m_parent_process_guard)) {
                VL_NULL_CHECK(this->__PVT__m_parent_process_guard, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 491)->__VnoInFunc_clear(vlSymsp, __Vinline_0___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence___Vtask_clear__Vfuncout_3563);
            }
        }
        this->__PVT__m_killing_process = VlNull{};
    }
    vlProcess->state(VlProcess::FINISHED);
    __Vfork_3__sync.done("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                         432);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start____Vfork_2__0____Vfork_3__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start____Vfork_2__0____Vfork_3__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_3__sync.onKill(vlProcess);
    ::CData/*0:0*/ __Vtrigprevexpr_hfac5f35b__0;
    __Vtrigprevexpr_hfac5f35b__0 = 0;
    if ((VlNull{} != this->__PVT__m_killing_process)) {
        ::CData/*0:0*/ __VdynTrigger_h2a259b06__0;
        __VdynTrigger_h2a259b06__0 = 0;
        __VdynTrigger_h2a259b06__0 = 0U;
        while ((1U & (~ (::IData)(__VdynTrigger_h2a259b06__0)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@([true] (null == uvm_pkg::uvm_sequence_base.m_killing_process))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                                                            430);
            __Vtrigprevexpr_hfac5f35b__0 = (VlNull{} 
                                            == this->__PVT__m_killing_process);
            __VdynTrigger_h2a259b06__0 = __Vtrigprevexpr_hfac5f35b__0;
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h2a259b06__0);
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@([true] (null == uvm_pkg::uvm_sequence_base.m_killing_process))", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                                                        430);
    }
    vlProcess->state(VlProcess::FINISHED);
    __Vfork_3__sync.done("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                         429);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start____Vfork_1__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_1__sync, ::CData/*0:0*/ &__VlefCall_7__get_automatic_phase_objection, ::CData/*0:0*/ &call_pre_post, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> &parent_sequence, ::CData/*0:0*/ &__VlefCall_8__get_automatic_phase_objection) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start____Vfork_1__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_1__sync.onKill(vlProcess);
    vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, this->__PVT__m_sequence_process);
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0ULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                                               369);
    this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, __VlefCall_7__get_automatic_phase_objection);
    if (__VlefCall_7__get_automatic_phase_objection) {
        this->__VnoInFunc_m_safe_raise_starting_phase(vlProcess, vlSymsp, "automatic phase objection"s, 1U);
    }
    if (call_pre_post) {
        this->__PVT__m_sequence_state = 4U;
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0ULL, 
                                                                   vlProcess, 
                                                                   "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                                                   381);
    }
    if ((VlNull{} != parent_sequence)) {
        VL_NULL_CHECK(parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 386)->__VnoInFunc_pre_do(vlSymsp, 0U);
        VL_NULL_CHECK(parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 387)->__VnoInFunc_mid_do(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    this->__PVT__m_sequence_state = 8U;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0ULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                                               391);
    co_await this->__VnoInFunc_body(vlProcess, vlSymsp);
    this->__PVT__m_sequence_state = 0x00000040U;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0ULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                                               395);
    if ((VlNull{} != parent_sequence)) {
        VL_NULL_CHECK(parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 398)->__VnoInFunc_post_do(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    if (call_pre_post) {
        this->__PVT__m_sequence_state = 0x00000010U;
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0ULL, 
                                                                   vlProcess, 
                                                                   "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                                                   403);
    }
    this->__PVT__m_sequence_state = 0x00000020U;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0ULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                                               408);
    this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, __VlefCall_8__get_automatic_phase_objection);
    if (__VlefCall_8__get_automatic_phase_objection) {
        this->__VnoInFunc_m_safe_drop_starting_phase(vlProcess, vlSymsp, "automatic phase objection"s, 1U);
    }
    this->__PVT__m_sequence_state = 0x00000100U;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0ULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                                               417);
    vlProcess->state(VlProcess::FINISHED);
    __Vfork_1__sync.done("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                         365);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_clean_exit_sequence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_clean_exit_sequence\n"); );
    // Locals
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vtask_clear__Vfuncout_3563;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk3__DOT__seqrID;
    unnamedblk3__DOT__seqrID = 0;
    ::IData/*31:0*/ unnamedblk3__DOT__seqrID__Vnext;
    unnamedblk3__DOT__seqrID__Vnext = 0;
    ::CData/*0:0*/ unnamedblk3__DOT__seqrID__Vmore;
    unnamedblk3__DOT__seqrID__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> unnamedblk3__DOT__unnamedblk4__DOT__s;
    if ((VlNull{} != Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 477)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    unnamedblk3__DOT__seqrID__Vmore = (0U != this->__PVT__m_sqr_seq_ids.first(unnamedblk3__DOT__seqrID__Vnext));
    while (unnamedblk3__DOT__seqrID__Vmore) {
        unnamedblk3__DOT__seqrID = unnamedblk3__DOT__seqrID__Vnext;
        unnamedblk3__DOT__seqrID__Vmore = (0U != this->__PVT__m_sqr_seq_ids.next(unnamedblk3__DOT__seqrID__Vnext));
        unnamedblk3__DOT__unnamedblk4__DOT__s = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__Vnontrivs.__PVT__all_sequencer_insts
            .at(unnamedblk3__DOT__seqrID);
        VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 483)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    this->__PVT__m_sqr_seq_ids.clear();
    VL_NULL_CHECK(this->__PVT__m_sequence_state_mutex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 487)->__VnoInFunc_put(vlSymsp, 1U);
    if ((VlNull{} != this->__PVT__m_parent_process_guard)) {
        VL_NULL_CHECK(this->__PVT__m_parent_process_guard, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 491)->__VnoInFunc_clear(vlSymsp, __Vtask_clear__Vfuncout_3563);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_do(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ is_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_do\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_mid_do(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> this_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_mid_do\n"); );
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_body\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "uvm_sequence_base"s, "Body definition undefined"s, 0U, ""s, 0U, ""s, 0U);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_do(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> this_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_do\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_init_phase_daps(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ create) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_init_phase_daps\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_3__get_sequencer;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_2__get_sequencer;
    ::std::string __VlefCall_1__get_full_name;
    ::std::string __VlefCall_0__get_full_name;
    ::std::string apo_name;
    ::std::string sp_name;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_SFORMAT_NX(apo_name,"%s.automatic_phase_objection",1
                  , 'S',&(__VlefCall_0__get_full_name));
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    VL_SFORMAT_NX(sp_name,"%s.starting_phase",1, 'S',&(__VlefCall_1__get_full_name));
    if (create) {
        this->__VnoInFunc_get_sequencer(vlSymsp, __VlefCall_2__get_sequencer);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pid4fbee54__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, apo_name, __VlefCall_2__get_sequencer, ""s, this->__PVT__m_automatic_phase_objection_dap);
        this->__VnoInFunc_get_sequencer(vlSymsp, __VlefCall_3__get_sequencer);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pif1fae8ac__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, sp_name, __VlefCall_3__get_sequencer, ""s, this->__PVT__m_starting_phase_dap);
    } else {
        VL_NULL_CHECK(this->__PVT__m_automatic_phase_objection_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 627)->__VnoInFunc_set_name(vlProcess, vlSymsp, apo_name);
        VL_NULL_CHECK(this->__PVT__m_starting_phase_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 628)->__VnoInFunc_set_name(vlProcess, vlSymsp, sp_name);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_starting_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &get_starting_phase__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_starting_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_6__get_name;
    ::std::string __VlefCall_5__get_name;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_0__is_locked;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> sp;
    VL_NULL_CHECK(this->__PVT__m_starting_phase_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 651)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
    if (((1U & (~ (::IData)(__VlefCall_0__is_locked))) 
         && (VlNull{} != this->__PVT__starting_phase))) {
        VL_NULL_CHECK(this->__PVT__m_starting_phase_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 653)->__VnoInFunc_set(vlProcess, vlSymsp, this->__PVT__starting_phase);
    }
    VL_NULL_CHECK(this->__PVT__m_starting_phase_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 658)->__VnoInFunc_get(vlSymsp, sp);
    if ((sp != this->__PVT__starting_phase)) {
        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_1__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 665)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 665)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/SEQ/SP/GET"s, __VlefCall_2__get_report_verbosity_level);
        __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
        if (__VlefLogAnd_4) {
            VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 665)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/SEQ/SP/GET"s, __VlefCall_3__get_report_action);
            __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_4))) {
            if ((VlNull{} == this->__PVT__starting_phase)) {
                __VlefCall_5__get_name = "<null>"s;
            } else {
                VL_NULL_CHECK(this->__PVT__starting_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 665)->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
            }
            if ((VlNull{} == sp)) {
                __VlefCall_6__get_name = "<null>"s;
            } else {
                VL_NULL_CHECK(sp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 665)->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
            }
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM/SEQ/SP/GET"s, VL_SFORMATF_N_NX("The starting_phase variable was set to '%s' after a call to get_starting_phase locked the value '%s'.  The new value is ignored.",2
                                                                                , 'S',&(__VlefCall_5__get_name)
                                                                                , 'S',&(__VlefCall_6__get_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh"s, 0x00000299U, ""s, 1U);
        }
    }
    get_starting_phase__Vfuncrtn = sp;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_starting_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_starting_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_6__get_name;
    ::std::string __VlefCall_5__get_name;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_0__try_set;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk6__DOT__sp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_;
    VL_NULL_CHECK(this->__PVT__m_starting_phase_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 673)->__VnoInFunc_try_set(vlSymsp, phase, __VlefCall_0__try_set);
    if (__VlefCall_0__try_set) {
        this->__PVT__starting_phase = phase;
    } else {
        VL_NULL_CHECK(this->__PVT__m_starting_phase_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 676)->__VnoInFunc_get(vlSymsp, unnamedblk6__DOT__sp);
        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_1__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 680)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 680)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/SEQ/SP/SET"s, __VlefCall_2__get_report_verbosity_level);
        __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
        if (__VlefLogAnd_4) {
            VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 680)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/SEQ/SP/SET"s, __VlefCall_3__get_report_action);
            __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_4))) {
            if ((VlNull{} == phase)) {
                __VlefCall_5__get_name = "<null>"s;
            } else {
                VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 680)->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
            }
            if ((VlNull{} == unnamedblk6__DOT__sp)) {
                __VlefCall_6__get_name = "<null>"s;
            } else {
                VL_NULL_CHECK(unnamedblk6__DOT__sp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 680)->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
            }
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM/SEQ/SP/SET"s, VL_SFORMATF_N_NX("The starting_phase variable was set to '%s' after a call to get_starting_phase locked the value at '%s'.  The new value is ignored.",2
                                                                                , 'S',&(__VlefCall_5__get_name)
                                                                                , 'S',&(__VlefCall_6__get_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh"s, 0x000002a8U, ""s, 1U);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_automatic_phase_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_automatic_phase_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_automatic_phase_objection_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 691)->__VnoInFunc_set(vlProcess, vlSymsp, value);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_automatic_phase_objection(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_automatic_phase_objection__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_automatic_phase_objection\n"); );
    // Body
    get_automatic_phase_objection__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_automatic_phase_objection_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 697)->__VnoInFunc_get(vlSymsp, get_automatic_phase_objection__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_safe_raise_starting_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string description, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_safe_raise_starting_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> starting_phase;
    this->__VnoInFunc_get_starting_phase(vlProcess, vlSymsp, starting_phase);
    if ((VlNull{} != starting_phase)) {
        VL_NULL_CHECK(starting_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 706)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, description, count);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_safe_drop_starting_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string description, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_safe_drop_starting_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> starting_phase;
    this->__VnoInFunc_get_starting_phase(vlProcess, vlSymsp, starting_phase);
    if ((VlNull{} != starting_phase)) {
        VL_NULL_CHECK(starting_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 717)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, description, count);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_priority(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_priority__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_priority\n"); );
    // Body
    get_priority__Vfuncrtn = this->__PVT__m_priority;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_relevant(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_relevant__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_relevant\n"); );
    // Body
    this->__PVT__is_rel_default = 1U;
    is_relevant__Vfuncrtn = 1U;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_relevant(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_relevant\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::VlAssignableEvent e;
    this->__PVT__wait_rel_default = 1U;
    if (VL_UNLIKELY(((1U & (~ (::IData)(this->__PVT__is_rel_default)))))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RELMSM"s, "is_relevant() was implemented without defining wait_for_relevant()"s, 0U, ""s, 0U, ""s, 0U);
    }
    ::CData/*0:0*/ __VdynTrigger_h77411eee__0;
    __VdynTrigger_h77411eee__0 = 0;
    __VdynTrigger_h77411eee__0 = 0U;
    e.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_h77411eee__0)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        vlProcess, 
                                                                        "@([event] uvm_pkg::uvm_sequence_base.e)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                                                        802);
        __VdynTrigger_h77411eee__0 = (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish() && !vlSymsp->_vm_contextp__->finishPending()) 
                                      && e.isFired());
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h77411eee__0);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        vlProcess, 
                                                                        "@([event] uvm_pkg::uvm_sequence_base.e)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                                                        802);
        e.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    vlProcess, 
                                                                    "@([event] uvm_pkg::uvm_sequence_base.e)", 
                                                                    "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                                                    802);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_kill(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_kill\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_1__get_automatic_phase_objection;
    ::CData/*0:0*/ __VlefCall_0__get_automatic_phase_objection;
    {
        if ((VlNull{} != this->__PVT__m_sequence_process)) {
            if ((VlNull{} == Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
                {
                    // Inlined CFunc: __VnoInFunc_m_kill
                    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> __Vinline_0___VnoInFunc_m_kill_unnamedblk8__DOT__i;
                    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> __Vinline_0___VnoInFunc_m_kill_unnamedblk8__DOT__i__Vnext;
                    ::CData/*0:0*/ __Vinline_0___VnoInFunc_m_kill_unnamedblk8__DOT__i__Vmore;
                    __Vinline_0___VnoInFunc_m_kill_unnamedblk8__DOT__i__Vmore = 0;
                    vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, this->__PVT__m_killing_process);
                    __Vinline_0___VnoInFunc_m_kill_unnamedblk8__DOT__i__Vmore 
                        = (0U != this->__PVT__children_array.first(__Vinline_0___VnoInFunc_m_kill_unnamedblk8__DOT__i__Vnext));
                    while (__Vinline_0___VnoInFunc_m_kill_unnamedblk8__DOT__i__Vmore) {
                        __Vinline_0___VnoInFunc_m_kill_unnamedblk8__DOT__i 
                            = __Vinline_0___VnoInFunc_m_kill_unnamedblk8__DOT__i__Vnext;
                        __Vinline_0___VnoInFunc_m_kill_unnamedblk8__DOT__i__Vmore 
                            = (0U != this->__PVT__children_array.next(__Vinline_0___VnoInFunc_m_kill_unnamedblk8__DOT__i__Vnext));
                        VL_NULL_CHECK(__Vinline_0___VnoInFunc_m_kill_unnamedblk8__DOT__i, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 979)->__VnoInFunc_kill(vlProcess, vlSymsp);
                    }
                    if ((VlNull{} != this->__PVT__m_sequence_process)) {
                        VL_NULL_CHECK(this->__PVT__m_sequence_process, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 985)->__VnoInFunc_kill(vlSymsp);
                        this->__PVT__m_sequence_process = VlNull{};
                    }
                    {
                        // Inlined CFunc: __VnoInFunc_m_killed
                        this->__PVT__m_sequence_state = 0x00000080U;
                        if (((VlNull{} != Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence) 
                             && (0U != VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 967)
                                 ->__PVT__children_array.exists(
                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this})))) {
                            VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 968)->__PVT__children_array.erase(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
                        }
                        {
                            // Inlined CFunc: __VnoInFunc_clean_exit_sequence
                            ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence___Vtask_clear__Vfuncout_3563;
                            ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID;
                            __Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID = 0;
                            ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext;
                            __Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext = 0;
                            ::CData/*0:0*/ __Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore;
                            __Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore = 0;
                            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> __Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__unnamedblk4__DOT__s;
                            if ((VlNull{} != Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
                                VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 477)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
                            }
                            __Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore 
                                = (0U != this->__PVT__m_sqr_seq_ids.first(__Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext));
                            while (__Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore) {
                                __Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID 
                                    = __Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext;
                                __Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore 
                                    = (0U != this->__PVT__m_sqr_seq_ids.next(__Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext));
                                __Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__unnamedblk4__DOT__s 
                                    = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__Vnontrivs.__PVT__all_sequencer_insts
                                    .at(__Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID);
                                VL_NULL_CHECK(__Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__unnamedblk4__DOT__s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 483)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
                            }
                            this->__PVT__m_sqr_seq_ids.clear();
                            VL_NULL_CHECK(this->__PVT__m_sequence_state_mutex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 487)->__VnoInFunc_put(vlSymsp, 1U);
                            if ((VlNull{} != this->__PVT__m_parent_process_guard)) {
                                VL_NULL_CHECK(this->__PVT__m_parent_process_guard, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 491)->__VnoInFunc_clear(vlSymsp, __Vinline_0___VnoInFunc_m_kill___Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence___Vtask_clear__Vfuncout_3563);
                            }
                        }
                        this->__PVT__m_killing_process = VlNull{};
                    }
                }
                this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, __VlefCall_0__get_automatic_phase_objection);
                if (__VlefCall_0__get_automatic_phase_objection) {
                    this->__VnoInFunc_m_safe_drop_starting_phase(vlProcess, vlSymsp, "automatic phase objection"s, 1U);
                }
                goto __Vlabel0;
            }
            VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 948)->__VnoInFunc_kill_sequence(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
            this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, __VlefCall_1__get_automatic_phase_objection);
            if (__VlefCall_1__get_automatic_phase_objection) {
                this->__VnoInFunc_m_safe_drop_starting_phase(vlProcess, vlSymsp, "automatic phase objection"s, 1U);
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_killed(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_killed\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__PVT__m_sequence_state = 0x00000080U;
    if (((VlNull{} != Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence) 
         && (0U != VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 967)
             ->__PVT__children_array.exists(::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this})))) {
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 968)->__PVT__children_array.erase(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    {
        // Inlined CFunc: __VnoInFunc_clean_exit_sequence
        ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vinline_1___VnoInFunc_clean_exit_sequence___Vtask_clear__Vfuncout_3563;
        ::IData/*31:0*/ __Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID;
        __Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID = 0;
        ::IData/*31:0*/ __Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext;
        __Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext = 0;
        ::CData/*0:0*/ __Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore;
        __Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore = 0;
        ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> __Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__unnamedblk4__DOT__s;
        if ((VlNull{} != Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
            VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 477)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
        }
        __Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore 
            = (0U != this->__PVT__m_sqr_seq_ids.first(__Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext));
        while (__Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore) {
            __Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID 
                = __Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext;
            __Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore 
                = (0U != this->__PVT__m_sqr_seq_ids.next(__Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext));
            __Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__unnamedblk4__DOT__s 
                = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__Vnontrivs.__PVT__all_sequencer_insts
                .at(__Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID);
            VL_NULL_CHECK(__Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__unnamedblk4__DOT__s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 483)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
        }
        this->__PVT__m_sqr_seq_ids.clear();
        VL_NULL_CHECK(this->__PVT__m_sequence_state_mutex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 487)->__VnoInFunc_put(vlSymsp, 1U);
        if ((VlNull{} != this->__PVT__m_parent_process_guard)) {
            VL_NULL_CHECK(this->__PVT__m_parent_process_guard, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 491)->__VnoInFunc_clear(vlSymsp, __Vinline_1___VnoInFunc_clean_exit_sequence___Vtask_clear__Vfuncout_3563);
        }
    }
    this->__PVT__m_killing_process = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_kill(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_kill\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> unnamedblk8__DOT__i;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> unnamedblk8__DOT__i__Vnext;
    ::CData/*0:0*/ unnamedblk8__DOT__i__Vmore;
    unnamedblk8__DOT__i__Vmore = 0;
    vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, this->__PVT__m_killing_process);
    unnamedblk8__DOT__i__Vmore = (0U != this->__PVT__children_array.first(unnamedblk8__DOT__i__Vnext));
    while (unnamedblk8__DOT__i__Vmore) {
        unnamedblk8__DOT__i = unnamedblk8__DOT__i__Vnext;
        unnamedblk8__DOT__i__Vmore = (0U != this->__PVT__children_array.next(unnamedblk8__DOT__i__Vnext));
        VL_NULL_CHECK(unnamedblk8__DOT__i, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 979)->__VnoInFunc_kill(vlProcess, vlSymsp);
    }
    if ((VlNull{} != this->__PVT__m_sequence_process)) {
        VL_NULL_CHECK(this->__PVT__m_sequence_process, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 985)->__VnoInFunc_kill(vlSymsp);
        this->__PVT__m_sequence_process = VlNull{};
    }
    {
        // Inlined CFunc: __VnoInFunc_m_killed
        this->__PVT__m_sequence_state = 0x00000080U;
        if (((VlNull{} != Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence) 
             && (0U != VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 967)
                 ->__PVT__children_array.exists(::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this})))) {
            VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 968)->__PVT__children_array.erase(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
        }
        {
            // Inlined CFunc: __VnoInFunc_clean_exit_sequence
            ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence___Vtask_clear__Vfuncout_3563;
            ::IData/*31:0*/ __Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID;
            __Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID = 0;
            ::IData/*31:0*/ __Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext;
            __Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext = 0;
            ::CData/*0:0*/ __Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore;
            __Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore = 0;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> __Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__unnamedblk4__DOT__s;
            if ((VlNull{} != Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
                VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 477)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
            }
            __Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore 
                = (0U != this->__PVT__m_sqr_seq_ids.first(__Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext));
            while (__Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore) {
                __Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID 
                    = __Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext;
                __Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vmore 
                    = (0U != this->__PVT__m_sqr_seq_ids.next(__Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID__Vnext));
                __Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__unnamedblk4__DOT__s 
                    = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__Vnontrivs.__PVT__all_sequencer_insts
                    .at(__Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__seqrID);
                VL_NULL_CHECK(__Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence_unnamedblk3__DOT__unnamedblk4__DOT__s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 483)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this});
            }
            this->__PVT__m_sqr_seq_ids.clear();
            VL_NULL_CHECK(this->__PVT__m_sequence_state_mutex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 487)->__VnoInFunc_put(vlSymsp, 1U);
            if ((VlNull{} != this->__PVT__m_parent_process_guard)) {
                VL_NULL_CHECK(this->__PVT__m_parent_process_guard, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 491)->__VnoInFunc_clear(vlSymsp, __Vinline_1___VnoInFunc_m_killed___Vinline_1___VnoInFunc_clean_exit_sequence___Vtask_clear__Vfuncout_3563);
            }
        }
        this->__PVT__m_killing_process = VlNull{};
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_process_guard_triggered(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz05d526ac> guard) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_process_guard_triggered\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk9__DOT___local_report_object_;
    if ((guard == this->__PVT__m_parent_process_guard)) {
        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_0__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 994)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk9__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk9__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 994)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "SEQPRTZMB"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk9__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 994)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "SEQPRTZMB"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "SEQPRTZMB"s, VL_SFORMATF_N_NX("The parent process that called start() on sequence '%s' was terminated without killing the sequence.  The kill() method is being automatically triggered.",1
                                                                                , 'S',&(__VlefCall_4__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh"s, 0x000003e2U, ""s, 1U);
        }
        this->__VnoInFunc_kill(vlProcess, vlSymsp);
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start_item(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> item, ::IData/*31:0*/ set_priority, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start_item\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_begin_tr__Vfuncout_3564;
    __Vtask_begin_tr__Vfuncout_3564 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCond_7;
    ::IData/*31:0*/ __VlefCall_6__get_handle;
    ::std::string __VlefCall_5__get_root_sequence_name;
    ::CData/*0:0*/ __VlefCall_4__is_auto_item_recording_enabled;
    ::std::string __VlefCall_3__get_full_name;
    ::std::string __VlefCall_2__get_full_name;
    ::CData/*0:0*/ __VlefCall_1__is_item;
    ::std::string __VlefCall_0__get_full_name;
    {
        if (VL_UNLIKELY(((VlNull{} == item)))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NULLITM"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("attempting to start a null item from sequence '"s, __VlefCall_0__get_full_name), "'"s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 1042)->__VnoInFunc_is_item(vlSymsp, __VlefCall_1__is_item);
        if (VL_UNLIKELY(((1U & (~ (::IData)(__VlefCall_1__is_item)))))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQNOTITM"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("attempting to start a sequence using start_item() from sequence '"s, __VlefCall_2__get_full_name), "'. Use seq.start() instead."s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((VlNull{} == sequencer)) {
            VL_NULL_CHECK(item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 1051)->__VnoInFunc_get_sequencer(vlSymsp, sequencer);
        }
        if ((VlNull{} == sequencer)) {
            this->__VnoInFunc_get_sequencer(vlSymsp, sequencer);
        }
        if (VL_UNLIKELY(((VlNull{} == sequencer)))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQ"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN("neither the item's sequencer nor dedicated sequencer has been supplied to start item in "s, __VlefCall_3__get_full_name)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 1066)->__VnoInFunc_set_item_context(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, sequencer);
        if (VL_GTS_III(32, 0U, set_priority)) {
            this->__VnoInFunc_get_priority(vlSymsp, set_priority);
        }
        co_await VL_NULL_CHECK(sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 1074)->__VnoInFunc_wait_for_grant(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, set_priority, 0U);
        VL_NULL_CHECK(sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 1076)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, __VlefCall_4__is_auto_item_recording_enabled);
        if (__VlefCall_4__is_auto_item_recording_enabled) {
            VL_NULL_CHECK(item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 1077)->__VnoInFunc_get_root_sequence_name(vlSymsp, __VlefCall_5__get_root_sequence_name);
            if ((VlNull{} == this->__PVT__m_tr_recorder)) {
                __VlefCond_7 = 0U;
            } else {
                VL_NULL_CHECK(this->__PVT__m_tr_recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 1078)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_6__get_handle);
                __VlefCond_7 = __VlefCall_6__get_handle;
            }
            VL_NULL_CHECK(sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 1077)->__VnoInFunc_begin_tr(vlProcess, vlSymsp, item, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_5__get_root_sequence_name), "Transactions"s, ""s, 0ULL, __VlefCond_7, __Vtask_begin_tr__Vfuncout_3564);
        }
        this->__VnoInFunc_pre_do(vlSymsp, 1U);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_finish_item(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> item, ::IData/*31:0*/ set_priority) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_finish_item\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VlefCall_0__is_auto_item_recording_enabled;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer;
    VL_NULL_CHECK(item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 1100)->__VnoInFunc_get_sequencer(vlSymsp, sequencer);
    if (VL_UNLIKELY(((VlNull{} == sequencer)))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "STRITM"s, "sequence_item has null sequencer"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__VnoInFunc_mid_do(vlSymsp, item);
    VL_NULL_CHECK(sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 1107)->__VnoInFunc_send_request(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, item, 0U);
    co_await VL_NULL_CHECK(sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 1108)->__VnoInFunc_wait_for_item_done(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, 0xffffffffU);
    VL_NULL_CHECK(sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 1110)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, __VlefCall_0__is_auto_item_recording_enabled);
    if (__VlefCall_0__is_auto_item_recording_enabled) {
        VL_NULL_CHECK(sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 1111)->__VnoInFunc_end_tr(vlProcess, vlSymsp, item, 0ULL, 1U);
    }
    this->__VnoInFunc_post_do(vlSymsp, item);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_grant(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ item_priority, ::CData/*0:0*/ lock_request) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_grant\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if (VL_UNLIKELY(((VlNull{} == Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "WAITGRANT"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
    }
    co_await VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 1137)->__VnoInFunc_wait_for_grant(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, item_priority, (::IData)(lock_request));
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_send_request(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> request, ::CData/*0:0*/ rerandomize) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_send_request\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if (VL_UNLIKELY(((VlNull{} == Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SENDREQ"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 1153)->__VnoInFunc_send_request(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, request, rerandomize);
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_item_done(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ transaction_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_item_done\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if (VL_UNLIKELY(((VlNull{} == Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "WAITITEMDONE"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
    }
    co_await VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 1175)->__VnoInFunc_wait_for_item_done(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base>{this}, transaction_id);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_use_response_handler(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_use_response_handler__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_use_response_handler\n"); );
    // Body
    get_use_response_handler__Vfuncrtn = this->__PVT__m_use_response_handler;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_response_handler(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> response) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_response_handler\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_clear_response_queue(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_clear_response_queue\n"); );
    // Body
    this->__PVT__response_queue.clear();
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_base_response(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> response) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_base_response\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_0__get_full_name;
    {
        if (((0xffffffffU == this->__PVT__response_queue_depth) 
             | VL_LTS_III(32, this->__PVT__response_queue.size(), this->__PVT__response_queue_depth))) {
            this->__PVT__response_queue.push_back(response);
            goto __Vlabel0;
        }
        if (VL_UNLIKELY((this->__PVT__response_queue_error_report_enabled))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "Response queue overflow, response was dropped"s, 0U, ""s, 0U, ""s, 0U);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_response(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> response_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_response\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_put_base_response(vlProcess, vlSymsp, response_item);
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_base_response(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &response, ::IData/*31:0*/ transaction_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_base_response\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_h6090ad54__0;
    __Vtrigprevexpr_h6090ad54__0 = 0;
    ::CData/*0:0*/ __Vtrigprevexpr_hc474c40f__0;
    __Vtrigprevexpr_hc474c40f__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_0__get_transaction_id;
    ::IData/*31:0*/ queue_size;
    ::IData/*31:0*/ i;
    {
        queue_size = 0U;
        i = 0U;
        if ((0U == this->__PVT__response_queue.size())) {
            if ((0U == this->__PVT__response_queue.size())) {
                ::CData/*0:0*/ __VdynTrigger_h00f388b2__0;
                __VdynTrigger_h00f388b2__0 = 0;
                __VdynTrigger_h00f388b2__0 = 0U;
                while ((1U & (~ (::IData)(__VdynTrigger_h00f388b2__0)))) {
                    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@([true] (32'sh0 != uvm_pkg::uvm_sequence_base.response_queue.size()))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                                                                1318);
                    __Vtrigprevexpr_hc474c40f__0 = 
                        (0U != this->__PVT__response_queue.size());
                    __VdynTrigger_h00f388b2__0 = __Vtrigprevexpr_hc474c40f__0;
                    vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h00f388b2__0);
                }
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                                vlProcess, 
                                                                                "@([true] (32'sh0 != uvm_pkg::uvm_sequence_base.response_queue.size()))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                                                                1318);
            }
        }
        if ((0xffffffffU == transaction_id)) {
            response = this->__PVT__response_queue.pop_front();
            goto __Vlabel0;
        }
        while (true) {
            queue_size = this->__PVT__response_queue.size();
            i = 0U;
            while (VL_LTS_III(32, i, queue_size)) {
                VL_NULL_CHECK(this->__PVT__response_queue.at(i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 1330)->__VnoInFunc_get_transaction_id(vlSymsp, __VlefCall_0__get_transaction_id);
                if ((__VlefCall_0__get_transaction_id 
                     == transaction_id)) {
                    response = this->__PVT__response_queue.at(i);
                    this->__PVT__response_queue.erase(i);
                    goto __Vlabel0;
                }
                i = ((::IData)(1U) + i);
            }
            if ((this->__PVT__response_queue.size() 
                 == queue_size)) {
                ::CData/*0:0*/ __VdynTrigger_hdfbff105__0;
                __VdynTrigger_hdfbff105__0 = 0;
                __VdynTrigger_hdfbff105__0 = 0U;
                while ((1U & (~ (::IData)(__VdynTrigger_hdfbff105__0)))) {
                    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@([true] (uvm_pkg::uvm_sequence_base.response_queue.size() != uvm_pkg::uvm_sequence_base.queue_size))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                                                                1337);
                    __Vtrigprevexpr_h6090ad54__0 = 
                        (this->__PVT__response_queue.size() 
                         != queue_size);
                    __VdynTrigger_hdfbff105__0 = __Vtrigprevexpr_h6090ad54__0;
                    vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hdfbff105__0);
                }
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                                vlProcess, 
                                                                                "@([true] (uvm_pkg::uvm_sequence_base.response_queue.size() != uvm_pkg::uvm_sequence_base.queue_size))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_base.svh", 
                                                                                1337);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_get_sqr_sequence_id(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ sequencer_id, ::CData/*0:0*/ update_sequence_id, ::IData/*31:0*/ &m_get_sqr_sequence_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_get_sqr_sequence_id\n"); );
    // Body
    {
        m_get_sqr_sequence_id__Vfuncrtn = 0U;
        if ((0U != this->__PVT__m_sqr_seq_ids.exists(sequencer_id))) {
            if (update_sequence_id) {
                this->__VnoInFunc_set_sequence_id(vlSymsp, this->__PVT__m_sqr_seq_ids
                                                  .at(sequencer_id));
            }
            m_get_sqr_sequence_id__Vfuncrtn = this->__PVT__m_sqr_seq_ids
                .at(sequencer_id);
            goto __Vlabel0;
        }
        if (update_sequence_id) {
            this->__VnoInFunc_set_sequence_id(vlSymsp, 0xffffffffU);
        }
        m_get_sqr_sequence_id__Vfuncrtn = 0xffffffffU;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_set_sqr_sequence_id(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ sequencer_id, ::IData/*31:0*/ sequence_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_set_sqr_sequence_id\n"); );
    // Body
    this->__PVT__m_sqr_seq_ids.atWrite(sequencer_id) 
        = sequence_id;
    this->__VnoInFunc_set_sequence_id(vlSymsp, sequence_id);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_base::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_sequence_state = 0;
    __PVT__m_wait_for_grant_semaphore = 0;
    __PVT__m_sqr_seq_ids.atDefault() = 0;
    __PVT__children_array.atDefault() = 0;
    __PVT__response_queue_error_report_enabled = 0;
    __PVT__do_not_randomize = 0;
    __PVT__m_use_response_handler = 0;
    __PVT__is_rel_default = 0;
    __PVT__wait_rel_default = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_sequence_base::~Vtb_top_uvm_pkg__03a__03auvm_sequence_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_sequence_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_sequence_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_sequence_state_mutex:" + VL_TO_STRING(__PVT__m_sequence_state_mutex);
    out += ", m_sequence_state:" + VL_TO_STRING(__PVT__m_sequence_state);
    out += ", m_next_transaction_id:" + VL_TO_STRING(__PVT__m_next_transaction_id);
    out += ", m_priority:" + VL_TO_STRING(__PVT__m_priority);
    out += ", m_tr_recorder:" + VL_TO_STRING(__PVT__m_tr_recorder);
    out += ", m_wait_for_grant_semaphore:" + VL_TO_STRING(__PVT__m_wait_for_grant_semaphore);
    out += ", m_sqr_seq_ids:" + VL_TO_STRING(__PVT__m_sqr_seq_ids);
    out += ", children_array:" + VL_TO_STRING(__PVT__children_array);
    out += ", response_queue:" + VL_TO_STRING(__PVT__response_queue);
    out += ", response_queue_depth:" + VL_TO_STRING(__PVT__response_queue_depth);
    out += ", response_queue_error_report_enabled:" + VL_TO_STRING(__PVT__response_queue_error_report_enabled);
    out += ", do_not_randomize:" + VL_TO_STRING(__PVT__do_not_randomize);
    out += ", m_parent_process_guard:" + VL_TO_STRING(__PVT__m_parent_process_guard);
    out += ", m_sequence_process:" + VL_TO_STRING(__PVT__m_sequence_process);
    out += ", m_killing_process:" + VL_TO_STRING(__PVT__m_killing_process);
    out += ", m_use_response_handler:" + VL_TO_STRING(__PVT__m_use_response_handler);
    out += ", is_rel_default:" + VL_TO_STRING(__PVT__is_rel_default);
    out += ", wait_rel_default:" + VL_TO_STRING(__PVT__wait_rel_default);
    out += ", m_automatic_phase_objection_dap:" + VL_TO_STRING(__PVT__m_automatic_phase_objection_dap);
    out += ", m_starting_phase_dap:" + VL_TO_STRING(__PVT__m_starting_phase_dap);
    out += ", starting_phase:" + VL_TO_STRING(__PVT__starting_phase);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_sequence_item::to_string_middle();
    return (out);
}
