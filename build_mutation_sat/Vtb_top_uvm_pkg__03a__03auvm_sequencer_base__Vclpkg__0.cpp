// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_disable_auto_item_recording(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    this->__PVT__m_auto_item_recording = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_auto_item_recording_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Body
    is_auto_item_recording_enabled__Vfuncrtn = this->__PVT__m_auto_item_recording;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_top_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_wait_relevant_count = 0U;
    this->__PVT__m_max_zero_time_wait_relevant_count = 0x0000000aU;
    this->__PVT__m_last_wait_relevant_time = 0ULL;
    this->__PVT__m_arbitration = 0U;
    this->__PVT__m_auto_item_recording = 1U;
    ::IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    /*super.new*/;
    __Vincrement1 = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequencer_id;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequencer_id 
        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequencer_id);
    this->__PVT__m_sequencer_id = __Vincrement1;
    this->__PVT__m_lock_arb_size = 0xffffffffU;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__Vnontrivs.__PVT__all_sequencer_insts.atWrite(this->__PVT__m_sequencer_id) 
        = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base>{this};
    this->__PVT__m_wait_for_sequences_count = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_build_phase\n"); );
    // Locals
    ::VlWide<128>/*4095:0*/ __Vfunc_get__value_1479;
    VL_ZERO_W(4096, __Vfunc_get__value_1479);
    ::CData/*0:0*/ __Vtask_get__Vfuncout_3497;
    __Vtask_get__Vfuncout_3497 = 0;
    ::IData/*31:0*/ __Vtask_get__value_3498;
    __Vtask_get__value_3498 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_0__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk341__DOT___local_report_object_;
    Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    VL_EXTENDS_WI(4096,32, __Vfunc_get__value_1479, this->__PVT__m_wait_for_sequences_count);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db__Tz39e91f07__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base>{this}, ""s, "wait_for_sequences_count"s, __Vfunc_get__value_1479, __VlefCall_0__get);
    this->__PVT__m_wait_for_sequences_count = __Vfunc_get__value_1479[0U];
    if ((1U & (~ (::IData)(__VlefCall_0__get)))) {
        __Vtask_get__value_3498 = this->__PVT__m_wait_for_sequences_count;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db___Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base>{this}, ""s, "wait_for_sequences_count"s, __Vtask_get__value_3498, __Vtask_get__Vfuncout_3497);
        this->__PVT__m_wait_for_sequences_count = __Vtask_get__value_3498;
    }
    if (VL_GTS_III(32, 1U, this->__PVT__m_wait_for_sequences_count)) {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_1__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 459)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk341__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk341__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 459)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/SQR/WFSC"s, __VlefCall_2__get_report_verbosity_level);
        __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
        if (__VlefLogAnd_4) {
            VL_NULL_CHECK(unnamedblk341__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 459)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/SQR/WFSC"s, __VlefCall_3__get_report_action);
            __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_4))) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM/SQR/WFSC"s, VL_SFORMATF_N_NX("attempt to set wait_for_sequences_count to '%0d' will be ignored, values must be 1 or greater!",1
                                                                                , '~',32,this->__PVT__m_wait_for_sequences_count) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh"s, 0x000001cbU, ""s, 1U);
        }
        this->__PVT__m_wait_for_sequences_count = 1U;
    }
}

extern const ::VlUnpacked<::std::string, 2> Vtb_top__ConstPool__CONSARRAY_5;

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_do_print\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_1__get_sequence_id;
    ::std::string __VlefCall_0__get_full_name;
    ::IData/*31:0*/ unnamedblk342__DOT__i;
    unnamedblk342__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk342__DOT__i__Vloopsize;
    unnamedblk342__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk343__DOT__i;
    unnamedblk343__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk343__DOT__i__Vloopsize;
    unnamedblk343__DOT__i__Vloopsize = 0;
    Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 469)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "arbitration_queue"s, this->__PVT__arb_sequence_q.size(), "array"s, 0x2eU);
    unnamedblk342__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk342__DOT__i, this->__PVT__arb_sequence_q.size())) {
        unnamedblk342__DOT__i__Vloopsize = this->__PVT__arb_sequence_q.size();
        __Vtemp_1 = ((1U < VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk342__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 473)
                      ->__PVT__request) ? ""s : Vtb_top__ConstPool__CONSARRAY_5
                     [(1U & VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk342__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 473)
                       ->__PVT__request)]);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 472)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",1
                                                                                , '~',32,unnamedblk342__DOT__i) , VL_SFORMATF_N_NX("%s@seqid%0d",2
                                                                                , 'S',&(__Vtemp_1)
                                                                                , '~',32,VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk342__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 473)
                                                                                ->__PVT__sequence_id) , 0x5bU);
        if ((unnamedblk342__DOT__i__Vloopsize <= this->__PVT__arb_sequence_q.size())) {
            unnamedblk342__DOT__i = ((::IData)(1U) 
                                     + unnamedblk342__DOT__i);
        }
    }
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 476)->__VnoInFunc_print_array_footer(vlSymsp, this->__PVT__arb_sequence_q.size());
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 478)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "lock_queue"s, this->__PVT__lock_list.size(), "array"s, 0x2eU);
    unnamedblk343__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk343__DOT__i, this->__PVT__lock_list.size())) {
        unnamedblk343__DOT__i__Vloopsize = this->__PVT__lock_list.size();
        VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk343__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 482)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk343__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 482)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_1__get_sequence_id);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 481)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",1
                                                                                , '~',32,unnamedblk343__DOT__i) , VL_SFORMATF_N_NX("%s@seqid%0d",2
                                                                                , 'S',&(__VlefCall_0__get_full_name)
                                                                                , '~',32,__VlefCall_1__get_sequence_id) , 0x5bU);
        if ((unnamedblk343__DOT__i__Vloopsize <= this->__PVT__lock_list.size())) {
            unnamedblk343__DOT__i = ((::IData)(1U) 
                                     + unnamedblk343__DOT__i);
        }
    }
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 485)->__VnoInFunc_print_array_footer(vlSymsp, this->__PVT__lock_list.size());
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_update_lists(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_update_lists\n"); );
    // Body
    this->__PVT__m_lock_arb_size = ((::IData)(1U) + this->__PVT__m_lock_arb_size);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_convert2string\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__get_sequence_id;
    ::IData/*31:0*/ unnamedblk344__DOT__i;
    unnamedblk344__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk345__DOT__i;
    unnamedblk345__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk345__DOT__i__Vloopsize;
    unnamedblk345__DOT__i__Vloopsize = 0;
    ::std::string s;
    convert2string__Vfuncrtn = ""s;
    s = "  -- arb i/id/type: "s;
    unnamedblk344__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk344__DOT__i, this->__PVT__arb_sequence_q.size())) {
        __Vtemp_1 = ((1U < VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk344__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 505)
                      ->__PVT__request) ? ""s : Vtb_top__ConstPool__CONSARRAY_5
                     [(1U & VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk344__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 505)
                       ->__PVT__request)]);
        VL_SFORMAT_NX(s,"%s %0d/%0d/%s ",4, 'S',&(s)
                      , '~',32,unnamedblk344__DOT__i
                      , '~',32,VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk344__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 505)
                      ->__PVT__sequence_id, 'S',&(__Vtemp_1));
        unnamedblk344__DOT__i = ((::IData)(1U) + unnamedblk344__DOT__i);
    }
    VL_SFORMAT_NX(s,"%s\n -- lock_list i/id: ",1, 'S',&(s));
    unnamedblk345__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk345__DOT__i, this->__PVT__lock_list.size())) {
        unnamedblk345__DOT__i__Vloopsize = this->__PVT__lock_list.size();
        VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk345__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 509)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_0__get_sequence_id);
        VL_SFORMAT_NX(s,"%s %0d/%0d",3, 'S',&(s), '~',32,unnamedblk345__DOT__i
                      , '~',32,__VlefCall_0__get_sequence_id);
        if ((unnamedblk345__DOT__i__Vloopsize <= this->__PVT__lock_list.size())) {
            unnamedblk345__DOT__i = ((::IData)(1U) 
                                     + unnamedblk345__DOT__i);
        }
    }
    convert2string__Vfuncrtn = s;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_register_sequence(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, ::IData/*31:0*/ &m_register_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_register_sequence\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_1__get_sequence_id;
    ::IData/*31:0*/ __VlefCall_0__m_get_sqr_sequence_id;
    ::IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    {
        m_register_sequence__Vfuncrtn = 0U;
        VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 529)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 1U, __VlefCall_0__m_get_sqr_sequence_id);
        if (VL_LTS_III(32, 0U, __VlefCall_0__m_get_sqr_sequence_id)) {
            VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 531)->__VnoInFunc_get_sequence_id(vlSymsp, m_register_sequence__Vfuncrtn);
            goto __Vlabel0;
        }
        __Vincrement2 = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequence_id;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequence_id 
            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequence_id);
        VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 535)->__VnoInFunc_m_set_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, __Vincrement2);
        VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 536)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_1__get_sequence_id);
        this->__PVT__reg_sequences.atWrite(__VlefCall_1__get_sequence_id) 
            = sequence_ptr;
        VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 537)->__VnoInFunc_get_sequence_id(vlSymsp, m_register_sequence__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_sequence(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ sequence_id, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> &m_find_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_sequence\n"); );
    // Body
    ::CData/*0:0*/ __VlefExpr_0;
    ::IData/*31:0*/ i;
    {
        i = 0U;
        if ((0xffffffffU == sequence_id)) {
            __VlefExpr_0 = (0U != this->__PVT__reg_sequences.first(i));
            if (__VlefExpr_0) {
                m_find_sequence__Vfuncrtn = this->__PVT__reg_sequences
                    .at(i);
                goto __Vlabel0;
            }
            m_find_sequence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((1U & (~ (0U != this->__PVT__reg_sequences.exists(sequence_id))))) {
            m_find_sequence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        m_find_sequence__Vfuncrtn = this->__PVT__reg_sequences
            .at(sequence_id);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unregister_sequence(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ sequence_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unregister_sequence\n"); );
    // Body
    {
        if ((1U & (~ (0U != this->__PVT__reg_sequences.exists(sequence_id))))) {
            goto __Vlabel0;
        }
        this->__PVT__reg_sequences.erase(sequence_id);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_user_priority_arbitration(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::IData/*31:0*/> avail_sequences, ::IData/*31:0*/ &user_priority_arbitration__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_user_priority_arbitration\n"); );
    // Body
    user_priority_arbitration__Vfuncrtn = avail_sequences.at(0U);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grant_queued_locks(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grant_queued_locks\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_status__Vfuncout_3499;
    __Vtask_status__Vfuncout_3499 = 0;
    ::IData/*31:0*/ __Vtask_status__Vfuncout_3500;
    __Vtask_status__Vfuncout_3500 = 0;
    ::CData/*0:0*/ __Vfunc_is_blocked__Vfuncout_1480;
    __Vfunc_is_blocked__Vfuncout_1480 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__get_full_name;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_request>> unnamedblk346__DOT__zombies;
    ::IData/*31:0*/ unnamedblk346__DOT__unnamedblk347__DOT__idx;
    unnamedblk346__DOT__unnamedblk347__DOT__idx = 0;
    ::IData/*31:0*/ unnamedblk346__DOT__unnamedblk347__DOT__idx__Vloopsize;
    unnamedblk346__DOT__unnamedblk347__DOT__idx__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk346__DOT__unnamedblk347__DOT__unnamedblk348__DOT___local_report_object_;
    ::VlQueue<::IData/*31:0*/> unnamedblk349__DOT__lock_req_indices;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_request> unnamedblk349__DOT__unnamedblk350__DOT__lock_req;
    unnamedblk346__DOT__zombies.clear();
    unnamedblk346__DOT__zombies = this->__PVT__arb_sequence_q.find(
                                                                   [&](
                                                                       ::IData/*31:0*/ item__DOT__index, 
                                                                       ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_request> item) -> 
                                                                   ::CData/*31:0*/ {
            return (((1U == VL_NULL_CHECK(item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 597)
                      ->__PVT__request) && ((4U == 
                                             ([&]() {
                                    VL_NULL_CHECK(VL_NULL_CHECK(
                                                                item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 597)
                                                  ->__PVT__process_id, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 597)
                                              ->__VnoInFunc_status(vlSymsp, __Vtask_status__Vfuncout_3499);
                                }(), __Vtask_status__Vfuncout_3499)) 
                                            || (0U 
                                                == 
                                                ([&]() {
                                    VL_NULL_CHECK(VL_NULL_CHECK(
                                                                item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 597)
                                                  ->__PVT__process_id, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 597)
                                                 ->__VnoInFunc_status(vlSymsp, __Vtask_status__Vfuncout_3500);
                                }(), __Vtask_status__Vfuncout_3500)))));
        }
    );
    unnamedblk346__DOT__unnamedblk347__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk346__DOT__unnamedblk347__DOT__idx, unnamedblk346__DOT__zombies.size())) {
        unnamedblk346__DOT__unnamedblk347__DOT__idx__Vloopsize 
            = unnamedblk346__DOT__zombies.size();
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 599)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk346__DOT__unnamedblk347__DOT__unnamedblk348__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk346__DOT__unnamedblk347__DOT__unnamedblk348__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 599)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "SEQLCKZMB"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk346__DOT__unnamedblk347__DOT__unnamedblk348__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 599)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "SEQLCKZMB"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk346__DOT__zombies.at(unnamedblk346__DOT__unnamedblk347__DOT__idx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 599)
                          ->__PVT__sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 599)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQLCKZMB"s, VL_SFORMATF_N_NX("The task responsible for requesting a lock on sequencer '%s' for sequence '%s' has been killed, to avoid a deadlock the sequence will be removed from the arbitration queues",2
                                                                                , 'S',&(__VlefCall_4__get_full_name)
                                                                                , 'S',&(__VlefCall_5__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh"s, 0x00000257U, ""s, 1U);
        }
        this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk346__DOT__zombies.at(unnamedblk346__DOT__unnamedblk347__DOT__idx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 600)
                                                      ->__PVT__sequence_ptr);
        if ((unnamedblk346__DOT__unnamedblk347__DOT__idx__Vloopsize 
             <= unnamedblk346__DOT__zombies.size())) {
            unnamedblk346__DOT__unnamedblk347__DOT__idx 
                = ((::IData)(1U) + unnamedblk346__DOT__unnamedblk347__DOT__idx);
        }
    }
    unnamedblk349__DOT__lock_req_indices.clear();
    unnamedblk349__DOT__lock_req_indices.atDefault() = 0;
    unnamedblk349__DOT__lock_req_indices = this->__PVT__arb_sequence_q.find_first_index(
                                                                                [&](
                                                                                ::IData/*31:0*/ item__DOT__index, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_request> item) -> 
                                                                                ::CData/*31:0*/ {
            return (((1U == VL_NULL_CHECK(item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 607)
                      ->__PVT__request) && (1U & (~ 
                                                  ([&]() {
                                    this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(
                                                                                item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 607)
                                                                 ->__PVT__sequence_ptr, __Vfunc_is_blocked__Vfuncout_1480);
                                }(), (::IData)(__Vfunc_is_blocked__Vfuncout_1480))))));
        }
    );
    if ((0U != unnamedblk349__DOT__lock_req_indices.size())) {
        unnamedblk349__DOT__unnamedblk350__DOT__lock_req 
            = this->__PVT__arb_sequence_q.at(unnamedblk349__DOT__lock_req_indices.at(0U));
        this->__PVT__lock_list.push_back(VL_NULL_CHECK(unnamedblk349__DOT__unnamedblk350__DOT__lock_req, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 610)
                                         ->__PVT__sequence_ptr);
        this->__VnoInFunc_m_set_arbitration_completed(vlSymsp, VL_NULL_CHECK(unnamedblk349__DOT__unnamedblk350__DOT__lock_req, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 611)
                                                      ->__PVT__request_id);
        this->__PVT__arb_sequence_q.erase(unnamedblk349__DOT__lock_req_indices.at(0U));
        {
            // Inlined CFunc: __VnoInFunc_m_update_lists
            this->__PVT__m_lock_arb_size = ((::IData)(1U) 
                                            + this->__PVT__m_lock_arb_size);
        }
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_select_sequence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_request> &selected_sequence_request) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_select_sequence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    ::IData/*31:0*/ selected_sequence;
    selected_sequence = 0U;
    do {
        unnamedblk1_1__DOT____Vrepeat0 = this->__PVT__m_wait_for_sequences_count;
        {
            while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
                co_await this->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
                this->__VnoInFunc_m_choose_next_request(vlProcess, vlSymsp, selected_sequence);
                if ((0xffffffffU != selected_sequence)) {
                    goto __Vlabel0;
                }
                unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                                  - (::IData)(1U));
            }
            __Vlabel0: ;
        }
        if ((0xffffffffU == selected_sequence)) {
            co_await this->__VnoInFunc_m_wait_for_available_sequence(vlProcess, vlSymsp);
        }
    } while ((0xffffffffU == selected_sequence));
    if (VL_LTES_III(32, 0U, selected_sequence)) {
        selected_sequence_request = this->__PVT__arb_sequence_q.at(selected_sequence);
        this->__VnoInFunc_m_set_arbitration_completed(vlSymsp, VL_NULL_CHECK(selected_sequence_request, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 643)
                                                      ->__PVT__request_id);
        this->__PVT__arb_sequence_q.erase(selected_sequence);
        {
            // Inlined CFunc: __VnoInFunc_m_update_lists
            this->__PVT__m_lock_arb_size = ((::IData)(1U) 
                                            + this->__PVT__m_lock_arb_size);
        }
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_choose_next_request(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &m_choose_next_request__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_choose_next_request\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_17__convert2string;
    ::IData/*31:0*/ __VlefCall_16__m_get_seq_item_priority;
    ::IData/*31:0*/ __VlefCall_15__m_get_seq_item_priority;
    ::IData/*31:0*/ __VlefCall_14__m_get_seq_item_priority;
    ::IData/*31:0*/ __VlefCall_13__m_get_seq_item_priority;
    ::IData/*31:0*/ __VlefCall_12__m_get_seq_item_priority;
    ::CData/*0:0*/ __VlefCall_11__is_blocked;
    ::CData/*0:0*/ __VlefCall_10__is_relevant;
    ::CData/*0:0*/ __VlefCall_9__is_blocked;
    ::std::string __VlefCall_8__get_full_name;
    ::std::string __VlefCall_7__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_6;
    ::IData/*31:0*/ __VlefCall_5__get_report_action;
    ::IData/*31:0*/ __VlefCall_4__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_3__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogOr_2;
    ::IData/*31:0*/ __VlefCall_1__status;
    ::IData/*31:0*/ __VlefCall_0__status;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk351__DOT___local_report_object_;
    ::IData/*31:0*/ i;
    ::IData/*31:0*/ temp;
    ::IData/*31:0*/ sum_priority_val;
    ::VlQueue<::IData/*31:0*/> avail_sequences;
    ::VlQueue<::IData/*31:0*/> highest_sequences;
    ::IData/*31:0*/ highest_pri;
    {
        m_choose_next_request__Vfuncrtn = 0U;
        i = 0U;
        temp = 0U;
        sum_priority_val = 0U;
        avail_sequences.clear();
        avail_sequences.atDefault() = 0;
        highest_sequences.clear();
        highest_sequences.atDefault() = 0;
        highest_pri = 0U;
        this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
        i = 0U;
        while (VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size())) {
            {
                VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 673)
                              ->__PVT__process_id, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 673)->__VnoInFunc_status(vlSymsp, __VlefCall_0__status);
                __VlefLogOr_2 = (4U == __VlefCall_0__status);
                if ((1U & (~ (::IData)(__VlefLogOr_2)))) {
                    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 674)
                                  ->__PVT__process_id, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 674)->__VnoInFunc_status(vlSymsp, __VlefCall_1__status);
                    __VlefLogOr_2 = (0U == __VlefCall_1__status);
                }
                if (__VlefLogOr_2) {
                    this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_3__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_3__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 675)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk351__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk351__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 675)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "SEQREQZMB"s, __VlefCall_4__get_report_verbosity_level);
                    __VlefLogAnd_6 = VL_LTES_III(32, 0U, __VlefCall_4__get_report_verbosity_level);
                    if (__VlefLogAnd_6) {
                        VL_NULL_CHECK(unnamedblk351__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 675)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "SEQREQZMB"s, __VlefCall_5__get_report_action);
                        __VlefLogAnd_6 = (0U != __VlefCall_5__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_6))) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 675)
                                      ->__PVT__sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 675)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQREQZMB"s, VL_SFORMATF_N_NX("The task responsible for requesting a wait_for_grant on sequencer '%s' for sequence '%s' has been killed, to avoid a deadlock the sequence will be removed from the arbitration queues",2
                                                                                , 'S',&(__VlefCall_7__get_full_name)
                                                                                , 'S',&(__VlefCall_8__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh"s, 0x000002a3U, ""s, 1U);
                    }
                    this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 676)
                                                                  ->__PVT__sequence_ptr);
                    goto __Vlabel1;
                }
                if (VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size())) {
                    if ((0U == VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 682)
                         ->__PVT__request)) {
                        this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 684)
                                                     ->__PVT__sequence_ptr, __VlefCall_9__is_blocked);
                        if ((1U & (~ (::IData)(__VlefCall_9__is_blocked)))) {
                            VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 686)
                                          ->__PVT__sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 686)->__VnoInFunc_is_relevant(vlSymsp, __VlefCall_10__is_relevant);
                            if (__VlefCall_10__is_relevant) {
                                if ((0U == this->__PVT__m_arbitration)) {
                                    m_choose_next_request__Vfuncrtn 
                                        = i;
                                    goto __Vlabel0;
                                } else {
                                    avail_sequences.push_back(i);
                                }
                            }
                        }
                    }
                }
                i = ((::IData)(1U) + i);
                __Vlabel1: ;
            }
        }
        if ((0U == this->__PVT__m_arbitration)) {
            m_choose_next_request__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        if (VL_GTS_III(32, 1U, avail_sequences.size())) {
            m_choose_next_request__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        if ((1U == avail_sequences.size())) {
            m_choose_next_request__Vfuncrtn = avail_sequences.at(0U);
            goto __Vlabel0;
        }
        if (VL_LTS_III(32, 0U, this->__PVT__lock_list.size())) {
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 721)
                                             ->__PVT__sequence_ptr, __VlefCall_11__is_blocked);
                if (__VlefCall_11__is_blocked) {
                    avail_sequences.erase(i);
                    i = (i - (::IData)(1U));
                }
                i = ((::IData)(1U) + i);
            }
            if (VL_GTS_III(32, 1U, avail_sequences.size())) {
                m_choose_next_request__Vfuncrtn = 0xffffffffU;
                goto __Vlabel0;
            }
            if ((1U == avail_sequences.size())) {
                m_choose_next_request__Vfuncrtn = avail_sequences.at(0U);
                goto __Vlabel0;
            }
        }
        if (VL_UNLIKELY(((1U == this->__PVT__m_arbitration)))) {
            sum_priority_val = 0U;
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_12__m_get_seq_item_priority);
                sum_priority_val = (sum_priority_val 
                                    + __VlefCall_12__m_get_seq_item_priority);
                i = ((::IData)(1U) + i);
            }
            temp = VL_URANDOM_RANGE_I((sum_priority_val 
                                       - (::IData)(1U)), 0U);
            sum_priority_val = 0U;
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_13__m_get_seq_item_priority);
                if (VL_GTS_III(32, (__VlefCall_13__m_get_seq_item_priority 
                                    + sum_priority_val), temp)) {
                    m_choose_next_request__Vfuncrtn 
                        = avail_sequences.at(i);
                    goto __Vlabel0;
                }
                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_14__m_get_seq_item_priority);
                sum_priority_val = (sum_priority_val 
                                    + __VlefCall_14__m_get_seq_item_priority);
                i = ((::IData)(1U) + i);
            }
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Sequencer"s, "UVM Internal error in weighted arbitration code"s, 0U, ""s, 0U, ""s, 0U);
        }
        if ((2U == this->__PVT__m_arbitration)) {
            i = VL_URANDOM_RANGE_I((avail_sequences.size() 
                                    - (::IData)(1U)), 0U);
            m_choose_next_request__Vfuncrtn = avail_sequences.at(i);
            goto __Vlabel0;
        }
        if (((3U == this->__PVT__m_arbitration) | (4U 
                                                   == this->__PVT__m_arbitration))) {
            highest_pri = 0U;
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_15__m_get_seq_item_priority);
                if (VL_GTS_III(32, __VlefCall_15__m_get_seq_item_priority, highest_pri)) {
                    highest_sequences.clear();
                    highest_sequences.push_back(avail_sequences.at(i));
                    this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), highest_pri);
                } else {
                    this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_16__m_get_seq_item_priority);
                    if ((__VlefCall_16__m_get_seq_item_priority 
                         == highest_pri)) {
                        highest_sequences.push_back(avail_sequences.at(i));
                    }
                }
                i = ((::IData)(1U) + i);
            }
            if ((3U == this->__PVT__m_arbitration)) {
                m_choose_next_request__Vfuncrtn = highest_sequences.at(0U);
                goto __Vlabel0;
            }
            i = VL_URANDOM_RANGE_I((highest_sequences.size() 
                                    - (::IData)(1U)), 0U);
            m_choose_next_request__Vfuncrtn = highest_sequences.at(i);
            goto __Vlabel0;
        }
        if ((5U == this->__PVT__m_arbitration)) {
            this->__VnoInFunc_user_priority_arbitration(vlSymsp, avail_sequences, i);
            highest_sequences = avail_sequences.find(
                                                     [&](
                                                         ::IData/*31:0*/ item__DOT__index, 
                                                         ::IData/*31:0*/ item) -> 
                                                     ::CData/*31:0*/ {
                    return ((item == i));
                }
            );
            if (VL_UNLIKELY(((0U == highest_sequences.size())))) {
                this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_17__convert2string);
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Sequencer"s, VL_SFORMATF_N_NX("Error in User arbitration, sequence %0d not available\n%s",2
                                                                                , '~',32,i
                                                                                , 'S',&(__VlefCall_17__convert2string)) , 0U, ""s, 0U, ""s, 0U);
            }
            m_choose_next_request__Vfuncrtn = i;
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Sequencer"s, "Internal error: Failed to choose sequence"s, 0U, ""s, 0U, ""s, 0U);
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_arb_not_equal(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_arb_not_equal\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_h91d6d29d__0;
    __Vtrigprevexpr_h91d6d29d__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((this->__PVT__m_arb_size == this->__PVT__m_lock_arb_size)) {
        ::CData/*0:0*/ __VdynTrigger_h0e55bad0__0;
        __VdynTrigger_h0e55bad0__0 = 0;
        __VdynTrigger_h0e55bad0__0 = 0U;
        while ((1U & (~ (::IData)(__VdynTrigger_h0e55bad0__0)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@([true] (uvm_pkg::uvm_sequencer_base.m_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                                                                            813);
            __Vtrigprevexpr_h91d6d29d__0 = (this->__PVT__m_arb_size 
                                            != this->__PVT__m_lock_arb_size);
            __VdynTrigger_h0e55bad0__0 = __Vtrigprevexpr_h91d6d29d__0;
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h0e55bad0__0);
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@([true] (uvm_pkg::uvm_sequencer_base.m_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                                                                        813);
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VlefCall_1__is_relevant;
    ::CData/*0:0*/ __VlefCall_0__is_blocked;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_45> __VDynScope_m_wait_for_available_sequence_0;
    ::VlQueue<::IData/*31:0*/> is_relevant_entries;
    __VDynScope_m_wait_for_available_sequence_0 = VL_NEW(Vtb_top_uvm_pkg__03a__03a__VDynScope_45, vlSymsp);
    {
        VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 821)->__PVT__i = 0U;
        is_relevant_entries.clear();
        is_relevant_entries.atDefault() = 0;
        this->__PVT__m_arb_size = this->__PVT__m_lock_arb_size;
        VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 828)->__PVT__i = 0U;
        while (VL_LTS_III(32, VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 828)
                          ->__PVT__i, this->__PVT__arb_sequence_q.size())) {
            if ((0U == VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 829)
                                                                    ->__PVT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 829)
                 ->__PVT__request)) {
                this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 830)
                                                                                ->__PVT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 830)
                                             ->__PVT__sequence_ptr, __VlefCall_0__is_blocked);
                if ((1U & (~ (::IData)(__VlefCall_0__is_blocked)))) {
                    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 831)
                                                                               ->__PVT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 831)
                                  ->__PVT__sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 831)->__VnoInFunc_is_relevant(vlSymsp, __VlefCall_1__is_relevant);
                    if ((1U & (~ (::IData)(__VlefCall_1__is_relevant)))) {
                        is_relevant_entries.push_back(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 832)
                                                      ->__PVT__i);
                    }
                }
            }
            VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 828)->__PVT__i 
                = ((::IData)(1U) + VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 828)
                   ->__PVT__i);
        }
        if ((0U == is_relevant_entries.size())) {
            co_await this->__VnoInFunc_m_wait_arb_not_equal(vlProcess, vlSymsp);
            goto __Vlabel0;
        }
        {
            ::VlForkSync __Vfork_1__sync;
            __Vfork_1__sync.init(1U, vlProcess);
            this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_1__sync, __VDynScope_m_wait_for_available_sequence_0, is_relevant_entries);
            co_await __Vfork_1__sync.join(vlProcess, 
                                          "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                                          844);
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_1__sync, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_45> &__VDynScope_m_wait_for_available_sequence_0, ::VlQueue<::IData/*31:0*/> &is_relevant_entries) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_1__sync.onKill(vlProcess);
    {
        ::VlForkSync __Vfork_2__sync;
        __Vfork_2__sync.init(1U, vlProcess);
        this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_2__sync, __VDynScope_m_wait_for_available_sequence_0, is_relevant_entries);
        co_await __Vfork_2__sync.join(vlProcess, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                                      846);
    }
    vlProcess->disableFork();
    vlProcess->state(VlProcess::FINISHED);
    __Vfork_1__sync.done("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                         845);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_2__sync, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_45> __VDynScope_m_wait_for_available_sequence_0, ::VlQueue<::IData/*31:0*/> is_relevant_entries) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_2__sync.onKill(vlProcess);
    co_await this->__VnoInFunc___VforkTask_2(vlProcess, vlSymsp, __VDynScope_m_wait_for_available_sequence_0, is_relevant_entries);
    vlProcess->state(VlProcess::FINISHED);
    __Vfork_2__sync.done("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                         847);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_get_seq_item_priority(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_request> seq_q_entry, ::IData/*31:0*/ &m_get_seq_item_priority__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_get_seq_item_priority\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_3__get_priority;
    ::std::string __VlefCall_2__get_full_name;
    ::IData/*31:0*/ __VlefCall_1__get_priority;
    ::std::string __VlefCall_0__get_full_name;
    {
        m_get_seq_item_priority__Vfuncrtn = 0U;
        if ((0xffffffffU != VL_NULL_CHECK(seq_q_entry, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 895)
             ->__PVT__item_priority)) {
            if (VL_UNLIKELY((VL_GTES_III(32, 0U, VL_NULL_CHECK(seq_q_entry, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 896)
                                         ->__PVT__item_priority)))) {
                VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 899)
                              ->__PVT__sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 899)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQITEMPRI"s, VL_SFORMATF_N_NX("Sequence item from %s has illegal priority: %0d",2
                                                                                , 'S',&(__VlefCall_0__get_full_name)
                                                                                , '~',32,VL_NULL_CHECK(seq_q_entry, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 900)
                                                                                ->__PVT__item_priority) , 0U, ""s, 0U, ""s, 0U);
            }
            m_get_seq_item_priority__Vfuncrtn = VL_NULL_CHECK(seq_q_entry, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 902)
                ->__PVT__item_priority;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 905)
                      ->__PVT__sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 905)->__VnoInFunc_get_priority(vlSymsp, __VlefCall_1__get_priority);
        if (VL_UNLIKELY((VL_GTS_III(32, 0U, __VlefCall_1__get_priority)))) {
            VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 908)
                          ->__PVT__sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 908)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 909)
                          ->__PVT__sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 909)->__VnoInFunc_get_priority(vlSymsp, __VlefCall_3__get_priority);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQDEFPRI"s, VL_SFORMATF_N_NX("Sequence %s has illegal priority: %0d",2
                                                                                , 'S',&(__VlefCall_2__get_full_name)
                                                                                , '~',32,__VlefCall_3__get_priority) , 0U, ""s, 0U, ""s, 0U);
        }
        VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 911)
                      ->__PVT__sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 911)->__VnoInFunc_get_priority(vlSymsp, m_get_seq_item_priority__Vfuncrtn);
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_arbitration_completed(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ request_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_arbitration_completed\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_h3b1f593c__0;
    __Vtrigprevexpr_h3b1f593c__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ lock_arb_size;
    {
        lock_arb_size = 0U;
        while (true) {
            lock_arb_size = this->__PVT__m_lock_arb_size;
            if ((0U != this->__PVT__arb_completed.exists(request_id))) {
                this->__PVT__arb_completed.erase(request_id);
                goto __Vlabel0;
            }
            if ((lock_arb_size == this->__PVT__m_lock_arb_size)) {
                ::CData/*0:0*/ __VdynTrigger_h88fe4dad__0;
                __VdynTrigger_h88fe4dad__0 = 0;
                __VdynTrigger_h88fe4dad__0 = 0U;
                while ((1U & (~ (::IData)(__VdynTrigger_h88fe4dad__0)))) {
                    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@([true] (uvm_pkg::uvm_sequencer_base.lock_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                                                                                930);
                    __Vtrigprevexpr_h3b1f593c__0 = 
                        (lock_arb_size != this->__PVT__m_lock_arb_size);
                    __VdynTrigger_h88fe4dad__0 = __Vtrigprevexpr_h3b1f593c__0;
                    vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h88fe4dad__0);
                }
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                                vlProcess, 
                                                                                "@([true] (uvm_pkg::uvm_sequencer_base.lock_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                                                                                930);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_set_arbitration_completed(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ request_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_set_arbitration_completed\n"); );
    // Body
    this->__PVT__arb_completed.atWrite(request_id) = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_child(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> child, ::CData/*0:0*/ &is_child__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_child\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_1__get_inst_id;
    ::IData/*31:0*/ __VlefCall_0__get_inst_id;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> child_parent;
    {
        is_child__Vfuncrtn = 0U;
        if (VL_UNLIKELY(((VlNull{} == child)))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "is_child passed null child"s, 0U, ""s, 0U, ""s, 0U);
        }
        if (VL_UNLIKELY(((VlNull{} == parent)))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "is_child passed null parent"s, 0U, ""s, 0U, ""s, 0U);
        }
        VL_NULL_CHECK(child, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 958)->__VnoInFunc_get_parent_sequence(vlSymsp, child_parent);
        while ((VlNull{} != child_parent)) {
            VL_NULL_CHECK(child_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 960)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
            VL_NULL_CHECK(parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 960)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
            if ((__VlefCall_0__get_inst_id == __VlefCall_1__get_inst_id)) {
                is_child__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(child_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 963)->__VnoInFunc_get_parent_sequence(vlSymsp, child_parent);
        }
        is_child__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_grant(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, ::IData/*31:0*/ item_priority, ::CData/*0:0*/ lock_request) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_grant\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __VlefCall_1__self;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __VlefCall_0__self;
    ::IData/*31:0*/ __Vincrement4;
    __Vincrement4 = 0;
    ::IData/*31:0*/ __Vincrement3;
    __Vincrement3 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_request> req_s;
    ::IData/*31:0*/ my_seq_id;
    my_seq_id = 0U;
    if (VL_UNLIKELY(((VlNull{} == sequence_ptr)))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "wait_for_grant passed null sequence_ptr"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__VnoInFunc_m_register_sequence(vlSymsp, sequence_ptr, my_seq_id);
    if (lock_request) {
        req_s = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_sequence_request, vlSymsp);
        VL_NULL_CHECK(req_s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1016)->__PVT__grant = 0U;
        VL_NULL_CHECK(req_s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1017)->__PVT__sequence_id 
            = my_seq_id;
        VL_NULL_CHECK(req_s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1018)->__PVT__request = 1U;
        VL_NULL_CHECK(req_s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1019)->__PVT__sequence_ptr 
            = sequence_ptr;
        __Vincrement3 = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id 
            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id);
        VL_NULL_CHECK(req_s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1020)->__PVT__request_id 
            = __Vincrement3;
        vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __VlefCall_0__self);
        VL_NULL_CHECK(req_s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1021)->__PVT__process_id 
            = __VlefCall_0__self;
        this->__PVT__arb_sequence_q.push_back(req_s);
    }
    req_s = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_sequence_request, vlSymsp);
    VL_NULL_CHECK(req_s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1027)->__PVT__grant = 0U;
    VL_NULL_CHECK(req_s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1028)->__PVT__request = 0U;
    VL_NULL_CHECK(req_s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1029)->__PVT__sequence_id 
        = my_seq_id;
    VL_NULL_CHECK(req_s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1030)->__PVT__item_priority 
        = item_priority;
    VL_NULL_CHECK(req_s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1031)->__PVT__sequence_ptr 
        = sequence_ptr;
    __Vincrement4 = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id 
        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id);
    VL_NULL_CHECK(req_s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1032)->__PVT__request_id 
        = __Vincrement4;
    vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __VlefCall_1__self);
    VL_NULL_CHECK(req_s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1033)->__PVT__process_id 
        = __VlefCall_1__self;
    this->__PVT__arb_sequence_q.push_back(req_s);
    {
        // Inlined CFunc: __VnoInFunc_m_update_lists
        this->__PVT__m_lock_arb_size = ((::IData)(1U) 
                                        + this->__PVT__m_lock_arb_size);
    }
    co_await this->__VnoInFunc_m_wait_for_arbitration_completed(vlProcess, vlSymsp, VL_NULL_CHECK(req_s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1039)
                                                                ->__PVT__request_id);
    VL_NULL_CHECK(VL_NULL_CHECK(req_s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1044)
                  ->__PVT__sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1044)->__PVT__m_wait_for_grant_semaphore 
        = ((::IData)(1U) + VL_NULL_CHECK(VL_NULL_CHECK(req_s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1044)
                                         ->__PVT__sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1044)
           ->__PVT__m_wait_for_grant_semaphore);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_item_done(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, ::IData/*31:0*/ transaction_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_item_done\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_h05003a71__0;
    __Vtrigprevexpr_h05003a71__0 = 0;
    ::CData/*0:0*/ __Vtrigprevexpr_hfb142448__0;
    __Vtrigprevexpr_hfb142448__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ sequence_id;
    sequence_id = 0U;
    VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1056)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 1U, sequence_id);
    this->__PVT__m_wait_for_item_sequence_id = 0xffffffffU;
    this->__PVT__m_wait_for_item_transaction_id = 0xffffffffU;
    if ((0xffffffffU == transaction_id)) {
        if ((this->__PVT__m_wait_for_item_sequence_id 
             != sequence_id)) {
            ::CData/*0:0*/ __VdynTrigger_h4913a871__0;
            __VdynTrigger_h4913a871__0 = 0;
            __VdynTrigger_h4913a871__0 = 0U;
            while ((1U & (~ (::IData)(__VdynTrigger_h4913a871__0)))) {
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@([true] (uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                                                                                1062);
                __Vtrigprevexpr_hfb142448__0 = (this->__PVT__m_wait_for_item_sequence_id 
                                                == sequence_id);
                __VdynTrigger_h4913a871__0 = __Vtrigprevexpr_hfb142448__0;
                vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h4913a871__0);
            }
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                            vlProcess, 
                                                                            "@([true] (uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                                                                            1062);
        }
    } else if ((1U & (~ ((this->__PVT__m_wait_for_item_sequence_id 
                          == sequence_id) & (this->__PVT__m_wait_for_item_transaction_id 
                                             == transaction_id))))) {
        ::CData/*0:0*/ __VdynTrigger_h3b11625c__0;
        __VdynTrigger_h3b11625c__0 = 0;
        __VdynTrigger_h3b11625c__0 = 0U;
        while ((1U & (~ (::IData)(__VdynTrigger_h3b11625c__0)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@([true] ((uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id) & (uvm_pkg::uvm_sequencer_base.m_wait_for_item_transaction_id == uvm_pkg::uvm_sequencer_base.transaction_id)))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                                                                            1067);
            __Vtrigprevexpr_h05003a71__0 = ((this->__PVT__m_wait_for_item_sequence_id 
                                             == sequence_id) 
                                            & (this->__PVT__m_wait_for_item_transaction_id 
                                               == transaction_id));
            __VdynTrigger_h3b11625c__0 = __Vtrigprevexpr_h05003a71__0;
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h3b11625c__0);
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@([true] ((uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id) & (uvm_pkg::uvm_sequencer_base.m_wait_for_item_transaction_id == uvm_pkg::uvm_sequencer_base.transaction_id)))", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                                                                        1067);
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_blocked(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, ::CData/*0:0*/ &is_blocked__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_blocked\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::CData/*0:0*/ __VlefCall_2__is_child;
    ::IData/*31:0*/ __VlefCall_1__get_inst_id;
    ::IData/*31:0*/ __VlefCall_0__get_inst_id;
    ::IData/*31:0*/ unnamedblk354__DOT__i;
    unnamedblk354__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk354__DOT__i__Vloopsize;
    unnamedblk354__DOT__i__Vloopsize = 0;
    {
        is_blocked__Vfuncrtn = 0U;
        if (VL_UNLIKELY(((VlNull{} == sequence_ptr)))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequence_controller"s, "is_blocked passed null sequence_ptr"s, 0U, ""s, 0U, ""s, 0U);
        }
        unnamedblk354__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk354__DOT__i, this->__PVT__lock_list.size())) {
            unnamedblk354__DOT__i__Vloopsize = this->__PVT__lock_list.size();
            VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk354__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1087)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
            VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1088)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
            __VlefLogAnd_3 = (__VlefCall_0__get_inst_id 
                              != __VlefCall_1__get_inst_id);
            if (__VlefLogAnd_3) {
                this->__VnoInFunc_is_child(vlProcess, vlSymsp, this->__PVT__lock_list.at(unnamedblk354__DOT__i), sequence_ptr, __VlefCall_2__is_child);
                __VlefLogAnd_3 = (1U & (~ (::IData)(__VlefCall_2__is_child)));
            }
            if (__VlefLogAnd_3) {
                is_blocked__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            if ((unnamedblk354__DOT__i__Vloopsize <= this->__PVT__lock_list.size())) {
                unnamedblk354__DOT__i = ((::IData)(1U) 
                                         + unnamedblk354__DOT__i);
            }
        }
        is_blocked__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_remove_sequence_from_queues(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_remove_sequence_from_queues\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_18__m_get_sqr_sequence_id;
    ::std::string __VlefCall_17__get_full_name;
    ::std::string __VlefCall_16__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_15;
    ::IData/*31:0*/ __VlefCall_14__get_report_action;
    ::IData/*31:0*/ __VlefCall_13__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_12__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_11__get_sequence_state;
    ::CData/*0:0*/ __VlefCall_10__is_child;
    ::IData/*31:0*/ __VlefCall_9__get_inst_id;
    ::IData/*31:0*/ __VlefCall_8__get_inst_id;
    ::std::string __VlefCall_7__get_full_name;
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_1__get_sequence_state;
    ::CData/*0:0*/ __VlefCall_0__is_child;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk357__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk358__DOT___local_report_object_;
    ::IData/*31:0*/ i;
    ::IData/*31:0*/ seq_id;
    i = 0U;
    seq_id = 0U;
    VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1234)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 0U, seq_id);
    i = 0U;
    do {
        if (VL_GTS_III(32, this->__PVT__arb_sequence_q.size(), i)) {
            __VlefCall_0__is_child = (VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1241)
                                      ->__PVT__sequence_id 
                                      == seq_id);
            if ((1U & (~ (::IData)(__VlefCall_0__is_child)))) {
                this->__VnoInFunc_is_child(vlProcess, vlSymsp, sequence_ptr, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1242)
                                           ->__PVT__sequence_ptr, __VlefCall_0__is_child);
            }
            if (__VlefCall_0__is_child) {
                VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1243)->__VnoInFunc_get_sequence_state(vlSymsp, __VlefCall_1__get_sequence_state);
                if ((0x00000100U == __VlefCall_1__get_sequence_state)) {
                    this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_2__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1244)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk357__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk357__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1244)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "SEQFINERR"s, __VlefCall_3__get_report_verbosity_level);
                    __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
                    if (__VlefLogAnd_5) {
                        VL_NULL_CHECK(unnamedblk357__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1244)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "SEQFINERR"s, __VlefCall_4__get_report_action);
                        __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_5))) {
                        VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1244)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1244)
                                      ->__PVT__sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1244)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQFINERR"s, VL_SFORMATF_N_NX("Parent sequence '%s' should not finish before all items from itself and items from descendent sequences are processed.  The item request from the sequence '%s' is being removed.",2
                                                                                , 'S',&(__VlefCall_6__get_full_name)
                                                                                , 'S',&(__VlefCall_7__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh"s, 0x000004dcU, ""s, 1U);
                    }
                }
                this->__PVT__arb_sequence_q.erase(i);
                {
                    // Inlined CFunc: __VnoInFunc_m_update_lists
                    this->__PVT__m_lock_arb_size = 
                        ((::IData)(1U) + this->__PVT__m_lock_arb_size);
                }
            } else {
                i = ((::IData)(1U) + i);
            }
        }
    } while (VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size()));
    i = 0U;
    do {
        if (VL_GTS_III(32, this->__PVT__lock_list.size(), i)) {
            VL_NULL_CHECK(this->__PVT__lock_list.at(i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1261)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_8__get_inst_id);
            VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1261)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_9__get_inst_id);
            __VlefCall_10__is_child = (__VlefCall_8__get_inst_id 
                                       == __VlefCall_9__get_inst_id);
            if ((1U & (~ (::IData)(__VlefCall_10__is_child)))) {
                this->__VnoInFunc_is_child(vlProcess, vlSymsp, sequence_ptr, this->__PVT__lock_list.at(i), __VlefCall_10__is_child);
            }
            if (__VlefCall_10__is_child) {
                VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1263)->__VnoInFunc_get_sequence_state(vlSymsp, __VlefCall_11__get_sequence_state);
                if ((0x00000100U == __VlefCall_11__get_sequence_state)) {
                    this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_12__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_12__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1264)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk358__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk358__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1264)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "SEQFINERR"s, __VlefCall_13__get_report_verbosity_level);
                    __VlefLogAnd_15 = VL_LTES_III(32, 0U, __VlefCall_13__get_report_verbosity_level);
                    if (__VlefLogAnd_15) {
                        VL_NULL_CHECK(unnamedblk358__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1264)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "SEQFINERR"s, __VlefCall_14__get_report_action);
                        __VlefLogAnd_15 = (0U != __VlefCall_14__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_15))) {
                        VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1264)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                        VL_NULL_CHECK(this->__PVT__lock_list.at(i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1264)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQFINERR"s, VL_SFORMATF_N_NX("Parent sequence '%s' should not finish before locks from itself and descedent sequences are removed.  The lock held by the child sequence '%s' is being removed.",2
                                                                                , 'S',&(__VlefCall_16__get_full_name)
                                                                                , 'S',&(__VlefCall_17__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh"s, 0x000004f0U, ""s, 1U);
                    }
                }
                this->__PVT__lock_list.erase(i);
                {
                    // Inlined CFunc: __VnoInFunc_m_update_lists
                    this->__PVT__m_lock_arb_size = 
                        ((::IData)(1U) + this->__PVT__m_lock_arb_size);
                }
            } else {
                i = ((::IData)(1U) + i);
            }
        }
    } while (VL_LTS_III(32, i, this->__PVT__lock_list.size()));
    VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1277)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 1U, __VlefCall_18__m_get_sqr_sequence_id);
    this->__VnoInFunc_m_unregister_sequence(vlSymsp, __VlefCall_18__m_get_sqr_sequence_id);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_sequences(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_sequences\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> seq_ptr;
    this->__VnoInFunc_m_find_sequence(vlSymsp, 0xffffffffU, seq_ptr);
    while ((VlNull{} != seq_ptr)) {
        this->__VnoInFunc_kill_sequence(vlProcess, vlSymsp, seq_ptr);
        this->__VnoInFunc_m_find_sequence(vlSymsp, 0xffffffffU, seq_ptr);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_sequence_exiting(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_sequence_exiting\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, sequence_ptr);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_kill_sequence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_kill_sequence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, sequence_ptr);
    VL_NULL_CHECK(sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1309)->__VnoInFunc_m_kill(vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_do_available(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_do_available\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_1__is_blocked;
    ::CData/*0:0*/ __VlefCall_0__is_relevant;
    ::IData/*31:0*/ unnamedblk359__DOT__i;
    unnamedblk359__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk359__DOT__i__Vloopsize;
    unnamedblk359__DOT__i__Vloopsize = 0;
    {
        has_do_available__Vfuncrtn = 0U;
        unnamedblk359__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk359__DOT__i, this->__PVT__arb_sequence_q.size())) {
            unnamedblk359__DOT__i__Vloopsize = this->__PVT__arb_sequence_q.size();
            VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk359__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1338)
                          ->__PVT__sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1338)->__VnoInFunc_is_relevant(vlSymsp, __VlefCall_0__is_relevant);
            if (__VlefCall_0__is_relevant) {
                this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk359__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1339)
                                             ->__PVT__sequence_ptr, __VlefCall_1__is_blocked);
                __VlefCall_0__is_relevant = (1U & (~ (::IData)(__VlefCall_1__is_blocked)));
            }
            if (__VlefCall_0__is_relevant) {
                has_do_available__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            if ((unnamedblk359__DOT__i__Vloopsize <= this->__PVT__arb_sequence_q.size())) {
                unnamedblk359__DOT__i = ((::IData)(1U) 
                                         + unnamedblk359__DOT__i);
            }
        }
        has_do_available__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_analysis_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_analysis_write\n"); );
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences\n"); );
    // Locals
    ::IData/*31:0*/ __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
    this->__VnoInFunc_wait_for_sequences____Vfork_3__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
    ::CData/*0:0*/ __VdynTrigger_he1335ce6__3;
    __VdynTrigger_he1335ce6__3 = 0;
    __VdynTrigger_he1335ce6__3 = 0U;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
        = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
    while ((1U & (~ (::IData)(__VdynTrigger_he1335ce6__3)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        vlProcess, 
                                                                        "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                        517);
        __VdynTrigger_he1335ce6__3 = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
                                      != __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_he1335ce6__3);
        __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    vlProcess, 
                                                                    "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                                    "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                    517);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_3__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_3__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0xffffffffffffffffULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                               516);
    vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
    ::IData/*31:0*/ __Vintraval_h5242ab7a__3;
    __Vintraval_h5242ab7a__3 = 0;
    __Vintraval_h5242ab7a__3 = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
    this->__VnoInFunc_wait_for_sequences____Vfork_3__0____Vfork_4__0(vlSymsp, __Vintraval_h5242ab7a__3);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_3__0____Vfork_4__0(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ __Vintraval_h5242ab7a__3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_3__0____Vfork_4__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__20;
    __VdynTrigger_hd539cefb__20 = 0;
    __VdynTrigger_hd539cefb__20 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__20)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                        516);
        __VdynTrigger_hd539cefb__20 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__20);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                        516);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                    516);
    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
        = __Vintraval_h5242ab7a__3;
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_send_request(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t, ::CData/*0:0*/ rerandomize) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_send_request\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_45__get_name;
    ::std::string __VlefCall_44__get_type_name;
    ::CData/*0:0*/ __VlefLogAnd_43;
    ::IData/*31:0*/ __VlefCall_42__get_report_action;
    ::IData/*31:0*/ __VlefCall_41__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_40__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCond_39;
    ::IData/*31:0*/ __VlefCall_38__randomize;
    ::CData/*0:0*/ __VlefCall_37__get_randomize_enabled;
    ::std::string __VlefCall_36__get_name;
    ::std::string __VlefCall_35__get_type_name;
    ::CData/*0:0*/ __VlefLogAnd_34;
    ::IData/*31:0*/ __VlefCall_33__get_report_action;
    ::IData/*31:0*/ __VlefCall_32__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_31__uvm_get_report_object;
    ::std::string __VlefCall_30__get_name;
    ::CData/*0:0*/ __VlefLogAnd_29;
    ::IData/*31:0*/ __VlefCall_28__get_report_action;
    ::IData/*31:0*/ __VlefCall_27__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_26__uvm_get_report_object;
    ::std::string __VlefCall_25__get_name;
    ::CData/*0:0*/ __VlefLogAnd_24;
    ::IData/*31:0*/ __VlefCall_23__get_report_action;
    ::IData/*31:0*/ __VlefCall_22__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_21__uvm_get_report_object;
    ::IData/*31:0*/ __VlefExpr_20;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_19__create_object_by_type;
    ::std::string __VlefCall_18__get_type_name;
    ::std::string __VlefCall_17__get_full_name;
    ::std::string __VlefCall_16__get_name;
    ::CData/*0:0*/ __VlefLogAnd_15;
    ::IData/*31:0*/ __VlefCall_14__get_report_action;
    ::IData/*31:0*/ __VlefCall_13__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_12__uvm_get_report_object;
    ::IData/*31:0*/ __VlefExpr_11;
    ::std::string __VlefCall_10__get_name;
    ::CData/*0:0*/ __VlefLogAnd_9;
    ::IData/*31:0*/ __VlefCall_8__get_report_action;
    ::IData/*31:0*/ __VlefCall_7__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_6__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_5__read;
    ::IData/*31:0*/ __VlefExpr_4;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__size;
    ::std::string __VlefCall_1__get_name;
    ::std::string __VlefCall_0__get_full_name;
    ::IData/*31:0*/ unnamedblk360__DOT__i;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> unnamedblk360__DOT__unnamedblk361__DOT__rsrc;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz05d526ac> unnamedblk360__DOT__unnamedblk361__DOT__sbr;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tzd665aaf6> unnamedblk360__DOT__unnamedblk361__DOT__owr;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk362__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk363__DOT__wrapper;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk363__DOT__unnamedblk364__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk363__DOT__unnamedblk365__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk366__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk367__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk368__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_52> __VDynScope_start_phase_sequence_7;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> rq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory> f;
    __VDynScope_start_phase_sequence_7 = VL_NEW(Vtb_top_uvm_pkg__03a__03a__VDynScope_52, vlSymsp);
    VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1407)->__PVT__phase 
        = phase;
    {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1412)->__VnoInFunc_get_factory(vlProcess, vlSymsp, f);
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1415)
                      ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1415)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1415)->__VnoInFunc_lookup_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name), "_phase"s)), "default_sequence"s, VlNull{}, 0U, rq);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_sort_by_precedence(vlProcess, vlSymsp, rq);
        unnamedblk360__DOT__i = 0U;
        unnamedblk360__DOT__i = 0U;
        while (true) {
            __VlefLogAnd_3 = (VlNull{} == VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1420)
                              ->__PVT__seq);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1420)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
                __VlefLogAnd_3 = VL_LTS_III(32, unnamedblk360__DOT__i, __VlefCall_2__size);
            }
            if (!(__VlefLogAnd_3)) break;
            VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1421)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk360__DOT__i, unnamedblk360__DOT__unnamedblk361__DOT__rsrc);
            __VlefExpr_4 = VL_CAST_DYNAMIC(unnamedblk360__DOT__unnamedblk361__DOT__rsrc, unnamedblk360__DOT__unnamedblk361__DOT__sbr);
            if (((0U != __VlefExpr_4) && (VlNull{} 
                                          != unnamedblk360__DOT__unnamedblk361__DOT__sbr))) {
                VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__sbr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1431)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base>{this}, __VlefCall_5__read);
                VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1431)->__PVT__seq 
                    = __VlefCall_5__read;
                if ((VlNull{} == VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1432)
                     ->__PVT__seq)) {
                    this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_6__uvm_get_report_object);
                    VL_NULL_CHECK(__VlefCall_6__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1434)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk362__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk362__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1434)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "UVM/SQR/PH/DEF/SB/NULL"s, __VlefCall_7__get_report_verbosity_level);
                    __VlefLogAnd_9 = VL_LTES_III(32, 0x00000190U, __VlefCall_7__get_report_verbosity_level);
                    if (__VlefLogAnd_9) {
                        VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk362__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1434)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVM/SQR/PH/DEF/SB/NULL"s, __VlefCall_8__get_report_action);
                        __VlefLogAnd_9 = (0U != __VlefCall_8__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_9))) {
                        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1434)
                                      ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1434)->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/SQR/PH/DEF/SB/NULL"s, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Default phase sequence for phase '"s, __VlefCall_10__get_name), "' explicitly disabled"s)), 0x00000190U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh"s, 0x0000059aU, ""s, 1U);
                    }
                    goto __Vlabel0;
                }
            } else {
                __VlefExpr_11 = VL_CAST_DYNAMIC(unnamedblk360__DOT__unnamedblk361__DOT__rsrc, unnamedblk360__DOT__unnamedblk361__DOT__owr);
                if (((0U != __VlefExpr_11) && (VlNull{} 
                                               != unnamedblk360__DOT__unnamedblk361__DOT__owr))) {
                    VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__owr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1443)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base>{this}, unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk363__DOT__wrapper);
                    if ((VlNull{} == unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk363__DOT__wrapper)) {
                        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_12__uvm_get_report_object);
                        VL_NULL_CHECK(__VlefCall_12__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1446)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk363__DOT__unnamedblk364__DOT___local_report_object_);
                        VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk363__DOT__unnamedblk364__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1446)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "UVM/SQR/PH/DEF/OW/NULL"s, __VlefCall_13__get_report_verbosity_level);
                        __VlefLogAnd_15 = VL_LTES_III(32, 0x00000190U, __VlefCall_13__get_report_verbosity_level);
                        if (__VlefLogAnd_15) {
                            VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk363__DOT__unnamedblk364__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1446)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVM/SQR/PH/DEF/OW/NULL"s, __VlefCall_14__get_report_action);
                            __VlefLogAnd_15 = (0U != __VlefCall_14__get_report_action);
                        }
                        if (VL_UNLIKELY((__VlefLogAnd_15))) {
                            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1446)
                                          ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1446)->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
                            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/SQR/PH/DEF/OW/NULL"s, 
                                                              VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Default phase sequence for phase '"s, __VlefCall_16__get_name), "' explicitly disabled"s)), 0x00000190U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh"s, 0x000005a6U, ""s, 1U);
                        }
                        goto __Vlabel0;
                    }
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                    VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk363__DOT__wrapper, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1451)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_18__get_type_name);
                    VL_NULL_CHECK(f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1450)->__VnoInFunc_create_object_by_type(vlProcess, vlSymsp, unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk363__DOT__wrapper, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_17__get_full_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_18__get_type_name), __VlefCall_19__create_object_by_type);
                    __VlefExpr_20 = VL_CAST_DYNAMIC(__VlefCall_19__create_object_by_type, VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1450)
                                                    ->__PVT__seq);
                    if (((1U & (~ (0U != __VlefExpr_20))) 
                         || (VlNull{} == VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1452)
                             ->__PVT__seq))) {
                        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_21__uvm_get_report_object);
                        VL_NULL_CHECK(__VlefCall_21__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1454)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk363__DOT__unnamedblk365__DOT___local_report_object_);
                        VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk363__DOT__unnamedblk365__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1454)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "PHASESEQ"s, __VlefCall_22__get_report_verbosity_level);
                        __VlefLogAnd_24 = VL_LTES_III(32, 0U, __VlefCall_22__get_report_verbosity_level);
                        if (__VlefLogAnd_24) {
                            VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk363__DOT__unnamedblk365__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1454)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "PHASESEQ"s, __VlefCall_23__get_report_action);
                            __VlefLogAnd_24 = (0U != __VlefCall_23__get_report_action);
                        }
                        if (VL_UNLIKELY((__VlefLogAnd_24))) {
                            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1454)
                                          ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1454)->__VnoInFunc_get_name(vlSymsp, __VlefCall_25__get_name);
                            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "PHASESEQ"s, 
                                                                 VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Default sequence for phase '"s, __VlefCall_25__get_name), "' %s is not a sequence type"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh"s, 0x000005aeU, ""s, 1U);
                        }
                        goto __Vlabel0;
                    }
                }
            }
            unnamedblk360__DOT__i = ((::IData)(1U) 
                                     + unnamedblk360__DOT__i);
        }
        if ((VlNull{} == VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1460)
             ->__PVT__seq)) {
            this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_26__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_26__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1462)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk366__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk366__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1462)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PHASESEQ"s, __VlefCall_27__get_report_verbosity_level);
            __VlefLogAnd_29 = VL_LTES_III(32, 0x00000190U, __VlefCall_27__get_report_verbosity_level);
            if (__VlefLogAnd_29) {
                VL_NULL_CHECK(unnamedblk366__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1462)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PHASESEQ"s, __VlefCall_28__get_report_action);
                __VlefLogAnd_29 = (0U != __VlefCall_28__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_29))) {
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1462)
                              ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1462)->__VnoInFunc_get_name(vlSymsp, __VlefCall_30__get_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("No default phase sequence for phase '"s, __VlefCall_30__get_name), "'"s)), 0x00000190U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh"s, 0x000005b6U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_31__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_31__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1467)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk367__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk367__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1467)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PHASESEQ"s, __VlefCall_32__get_report_verbosity_level);
        __VlefLogAnd_34 = VL_LTES_III(32, 0x00000190U, __VlefCall_32__get_report_verbosity_level);
        if (__VlefLogAnd_34) {
            VL_NULL_CHECK(unnamedblk367__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1467)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PHASESEQ"s, __VlefCall_33__get_report_action);
            __VlefLogAnd_34 = (0U != __VlefCall_33__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_34))) {
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1467)
                          ->__PVT__seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1467)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_35__get_type_name);
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1467)
                          ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1467)->__VnoInFunc_get_name(vlSymsp, __VlefCall_36__get_name);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Starting default sequence '"s, __VlefCall_35__get_type_name), "' for phase '"s), __VlefCall_36__get_name), "'"s)), 0x00000190U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh"s, 0x000005bbU, ""s, 1U);
        }
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1469)
                      ->__PVT__seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1469)->__PVT__print_sequence_info = 1U;
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1470)
                      ->__PVT__seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1470)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base>{this});
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1471)
                      ->__PVT__seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1471)->__VnoInFunc_reseed(vlProcess, vlSymsp);
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1472)
                      ->__PVT__seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1472)->__VnoInFunc_set_starting_phase(vlProcess, vlSymsp, VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1472)
                                                                                ->__PVT__phase);
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1474)
                      ->__PVT__seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1474)->__VnoInFunc_get_randomize_enabled(vlSymsp, __VlefCall_37__get_randomize_enabled);
        if (__VlefCall_37__get_randomize_enabled) {
            if ((VlNull{} != VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1474)
                 ->__PVT__seq)) {
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1474)
                              ->__PVT__seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1474)->__VnoInFunc_randomize(vlSymsp, __VlefCall_38__randomize);
                __VlefCond_39 = __VlefCall_38__randomize;
            } else {
                __VlefCond_39 = 0U;
            }
            __VlefCall_37__get_randomize_enabled = 
                (1U & (~ (0U != __VlefCond_39)));
        }
        if (__VlefCall_37__get_randomize_enabled) {
            this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_40__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_40__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1476)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk368__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk368__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1476)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "STRDEFSEQ"s, __VlefCall_41__get_report_verbosity_level);
            __VlefLogAnd_43 = VL_LTES_III(32, 0U, __VlefCall_41__get_report_verbosity_level);
            if (__VlefLogAnd_43) {
                VL_NULL_CHECK(unnamedblk368__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1476)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "STRDEFSEQ"s, __VlefCall_42__get_report_action);
                __VlefLogAnd_43 = (0U != __VlefCall_42__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_43))) {
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1476)
                              ->__PVT__seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1476)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_44__get_type_name);
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1476)
                              ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1476)->__VnoInFunc_get_name(vlSymsp, __VlefCall_45__get_name);
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "STRDEFSEQ"s, 
                                                     VL_CVT_PACK_STR_NN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Randomization failed for default sequence '"s, __VlefCall_44__get_type_name), "' for phase '"s), __VlefCall_45__get_name), "'"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh"s, 0x000005c4U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_start_phase_sequence____Vfork_5__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_start_phase_sequence_7);
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence____Vfork_5__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_52> __VDynScope_start_phase_sequence_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence____Vfork_5__0\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_52> __Vtask___VforkTask_3____VDynScope_start_phase_sequence_7_3501;
    ::IData/*31:0*/ __Vtask___VforkTask_3____VlefCall_3__uvm_create_random_seed_3502;
    __Vtask___VforkTask_3____VlefCall_3__uvm_create_random_seed_3502 = 0;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vtask___VforkTask_3____VlefCall_0__self_3505;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_process_wrapper> __Vtask___VforkTask_3__w_3506;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vfunc_self__Vfuncout_1481;
    ::IData/*31:0*/ __Vfunc_uvm_create_random_seed__Vfuncout_1483;
    __Vfunc_uvm_create_random_seed__Vfuncout_1483 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_create_random_seed____VlefCall_2__uvm_oneway_hash_1486;
    __Vfunc_uvm_create_random_seed____VlefCall_2__uvm_oneway_hash_1486 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_seed_map> __Vfunc_uvm_create_random_seed____VlefCall_0__new_1488;
    ::IData/*31:0*/ __Vfunc_uvm_instance_scope____Vincrement2_1490;
    __Vfunc_uvm_instance_scope____Vincrement2_1490 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3510;
    __Vtask_uvm_report_error__verbosity_3510 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3512;
    __Vtask_uvm_report_error__line_3512 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3514;
    __Vtask_uvm_report_error__report_enabled_checked_3514 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1491;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3515;
    ::IData/*31:0*/ __Vfunc_uvm_oneway_hash__Vfuncout_1492;
    __Vfunc_uvm_oneway_hash__Vfuncout_1492 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_oneway_hash__seed_1494;
    __Vfunc_uvm_oneway_hash__seed_1494 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_1495;
    __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_1495 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_3____VDynScope_start_phase_sequence_7_3501 
        = __VDynScope_start_phase_sequence_7;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0xffffffffffffffffULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                                                               1480);
    __Vtask___VforkTask_3__w_3506 = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_sequence_process_wrapper, vlSymsp);
    vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__Vfuncout_1481);
    __Vtask___VforkTask_3____VlefCall_0__self_3505 
        = __Vfunc_self__Vfuncout_1481;
    VL_NULL_CHECK(__Vtask___VforkTask_3__w_3506, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1483)->__PVT__pid 
        = __Vtask___VforkTask_3____VlefCall_0__self_3505;
    VL_NULL_CHECK(__Vtask___VforkTask_3__w_3506, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1484)->__PVT__seq 
        = VL_NULL_CHECK(__Vtask___VforkTask_3____VDynScope_start_phase_sequence_7_3501, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1484)
        ->__PVT__seq;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3____VDynScope_start_phase_sequence_7_3501, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1485)
                  ->__PVT__seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1485)->__VnoInFunc_get_type_name(vlSymsp, this->__Vtask_get_type_name__Vfuncout_3507);
    this->__Vtask___VforkTask_3____VlefCall_1__get_type_name_3504 
        = this->__Vtask_get_type_name__Vfuncout_3507;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__Vfuncout_1482);
    this->__Vtask___VforkTask_3____VlefCall_2__get_full_name_3503 
        = this->__Vfunc_get_full_name__Vfuncout_1482;
    this->__Vfunc_uvm_create_random_seed__inst_id_1485 
        = VL_CVT_PACK_STR_NN(this->__Vtask___VforkTask_3____VlefCall_2__get_full_name_3503);
    this->__Vfunc_uvm_create_random_seed__type_id_1484 
        = VL_CVT_PACK_STR_NN(this->__Vtask___VforkTask_3____VlefCall_1__get_type_name_3504);
    if ((""s == this->__Vfunc_uvm_create_random_seed__inst_id_1485)) {
        this->__Vfunc_uvm_create_random_seed__inst_id_1485 = "__global__"s;
    }
    if ((1U & (~ (0U != vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_random_seed_table_lookup.exists(this->__Vfunc_uvm_create_random_seed__inst_id_1485))))) {
        __Vfunc_uvm_create_random_seed____VlefCall_0__new_1488 
            = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_seed_map, vlSymsp);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_random_seed_table_lookup.atWrite(this->__Vfunc_uvm_create_random_seed__inst_id_1485) 
            = __Vfunc_uvm_create_random_seed____VlefCall_0__new_1488;
    }
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map 
        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_random_seed_table_lookup
        .at(this->__Vfunc_uvm_create_random_seed__inst_id_1485);
    __Vfunc_uvm_instance_scope____Vincrement2_1490 = 0U;
    {
        if ((""s != this->__Vfunc_uvm_instance_scope__Vfuncout_1489)) {
            goto __Vlabel0;
        }
        VL_SFORMAT_NX(this->__Vfunc_uvm_instance_scope__Vfuncout_1489
                      ,"%m",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_instance_scope");
        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
            = (VL_LEN_IN(this->__Vfunc_uvm_instance_scope__Vfuncout_1489) 
               - (::IData)(1U));
        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
            = VL_GETC_N(this->__Vfunc_uvm_instance_scope__Vfuncout_1489,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
        while ((((0U != vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos) 
                 & (0x2eU != (::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c))) 
                & (0x3aU != (::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c)))) {
            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                   - (::IData)(1U));
            __Vfunc_uvm_instance_scope____Vincrement2_1490 
                = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos;
            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
                = VL_GETC_N(this->__Vfunc_uvm_instance_scope__Vfuncout_1489,__Vfunc_uvm_instance_scope____Vincrement2_1490);
        }
        if (VL_UNLIKELY(((0U == vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos)))) {
            __Vtask_uvm_report_error__report_enabled_checked_3514 = 0U;
            this->__Vtask_uvm_report_error__context_name_3513 = ""s;
            __Vtask_uvm_report_error__line_3512 = 0U;
            this->__Vtask_uvm_report_error__filename_3511 = ""s;
            __Vtask_uvm_report_error__verbosity_3510 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_3509
                          ,"Illegal name %s in scope string",1
                          , 'S',&(this->__Vfunc_uvm_instance_scope__Vfuncout_1489));
            this->__Vtask_uvm_report_error__id_3508 = "SCPSTR"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1491);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1491;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3515);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3515;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3508, this->__Vtask_uvm_report_error__message_3509, __Vtask_uvm_report_error__verbosity_3510, this->__Vtask_uvm_report_error__filename_3511, __Vtask_uvm_report_error__line_3512, this->__Vtask_uvm_report_error__context_name_3513, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3514));
        }
        this->__Vfunc_uvm_instance_scope__Vfuncout_1489 
            = VL_SUBSTR_N(this->__Vfunc_uvm_instance_scope__Vfuncout_1489,0U,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
        __Vlabel0: ;
    }
    this->__Vfunc_uvm_create_random_seed____VlefCall_1__uvm_instance_scope_1487 
        = this->__Vfunc_uvm_instance_scope__Vfuncout_1489;
    this->__Vfunc_uvm_create_random_seed__type_id_1484 
        = VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed____VlefCall_1__uvm_instance_scope_1487, this->__Vfunc_uvm_create_random_seed__type_id_1484);
    if ((1U & (~ (0U != VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 207)
                  ->__PVT__seed_table.exists(this->__Vfunc_uvm_create_random_seed__type_id_1484))))) {
        __Vfunc_uvm_oneway_hash__seed_1494 = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        this->__Vfunc_uvm_oneway_hash__string_in_1493 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__type_id_1484, "::"s), this->__Vfunc_uvm_create_random_seed__inst_id_1485));
        if ((1U & (~ (0U != __Vfunc_uvm_oneway_hash__seed_1494)))) {
            __Vfunc_uvm_oneway_hash__seed_1494 = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        }
        __Vfunc_uvm_oneway_hash__Vfuncout_1492 = __Vfunc_uvm_oneway_hash__seed_1494;
        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0xffffffffU;
        __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_1495 = 0U;
        __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_1495 = 0U;
        {
            while (VL_LTS_III(32, __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_1495, 
                              VL_LEN_IN(this->__Vfunc_uvm_oneway_hash__string_in_1493))) {
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte 
                    = VL_GETC_N(this->__Vfunc_uvm_oneway_hash__string_in_1493,__Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_1495);
                if ((0U == (::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte))) {
                    goto __Vlabel1;
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ (::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 1U)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 2U)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 3U)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 4U)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 5U)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 6U)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if (((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                     ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                        >> 7U))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_1495 
                    = ((::IData)(1U) + __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_1495);
            }
            __Vlabel1: ;
        }
        __Vfunc_uvm_oneway_hash__Vfuncout_1492 = (__Vfunc_uvm_oneway_hash__Vfuncout_1492 
                                                  + 
                                                  (~ 
                                                   ((((0x0000ff00U 
                                                       & (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                            >> 8U))) 
                                                     << 0x00000010U) 
                                                    | ((0x0000ff00U 
                                                        & (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                           >> 8U)) 
                                                       | (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                          >> 0x18U)))));
        __Vfunc_uvm_create_random_seed____VlefCall_2__uvm_oneway_hash_1486 
            = __Vfunc_uvm_oneway_hash__Vfuncout_1492;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 208)->__PVT__seed_table.atWrite(this->__Vfunc_uvm_create_random_seed__type_id_1484) 
            = __Vfunc_uvm_create_random_seed____VlefCall_2__uvm_oneway_hash_1486;
    }
    if ((1U & (~ (0U != VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 210)
                  ->__PVT__count.exists(this->__Vfunc_uvm_create_random_seed__type_id_1484))))) {
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 211)->__PVT__count.atWrite(this->__Vfunc_uvm_create_random_seed__type_id_1484) = 0U;
    }
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 217)->__PVT__seed_table.atWrite(this->__Vfunc_uvm_create_random_seed__type_id_1484) 
        = (VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 217)
           ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__type_id_1484) 
           + VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 217)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__type_id_1484));
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 218)->__PVT__count.atWrite(this->__Vfunc_uvm_create_random_seed__type_id_1484) 
        = ((::IData)(1U) + VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 218)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__type_id_1484));
    __Vfunc_uvm_create_random_seed__Vfuncout_1483 = VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 220)
        ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__type_id_1484);
    __Vtask___VforkTask_3____VlefCall_3__uvm_create_random_seed_3502 
        = __Vfunc_uvm_create_random_seed__Vfuncout_1483;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3__w_3506, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1485)
                  ->__PVT__pid, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1485)->__VnoInFunc_srandom(vlSymsp, __Vtask___VforkTask_3____VlefCall_3__uvm_create_random_seed_3502);
    this->__PVT__m_default_sequences.atWrite(VL_NULL_CHECK(__Vtask___VforkTask_3____VDynScope_start_phase_sequence_7_3501, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1486)
                                             ->__PVT__phase) 
        = __Vtask___VforkTask_3__w_3506;
    co_await VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3____VDynScope_start_phase_sequence_7_3501, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1488)
                           ->__PVT__seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1488)->__VnoInFunc_start(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base>{this}, VlNull{}, 0xffffffffU, 1U);
    this->__PVT__m_default_sequences.erase(VL_NULL_CHECK(__Vtask___VforkTask_3____VDynScope_start_phase_sequence_7_3501, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1489)
                                           ->__PVT__phase);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_phase_sequence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_phase_sequence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_10__get_name;
    ::CData/*0:0*/ __VlefLogAnd_9;
    ::IData/*31:0*/ __VlefCall_8__get_report_action;
    ::IData/*31:0*/ __VlefCall_7__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_6__uvm_get_report_object;
    ::std::string __VlefCall_5__get_name;
    ::std::string __VlefCall_4__get_type_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk370__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk371__DOT___local_report_object_;
    if ((0U != this->__PVT__m_default_sequences.exists(phase))) {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1502)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk370__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk370__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1502)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PHASESEQ"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0x00000190U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk370__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1502)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PHASESEQ"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__m_default_sequences
                                        .at(phase), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1502)
                          ->__PVT__seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1502)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
            VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1502)->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Killing default sequence '"s, __VlefCall_4__get_type_name), "' for phase '"s), __VlefCall_5__get_name), "'"s)), 0x00000190U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh"s, 0x000005deU, ""s, 1U);
        }
        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__m_default_sequences
                                    .at(phase), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1503)
                      ->__PVT__seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1503)->__VnoInFunc_kill(vlProcess, vlSymsp);
    } else {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_6__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_6__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1508)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk371__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk371__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1508)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PHASESEQ"s, __VlefCall_7__get_report_verbosity_level);
        __VlefLogAnd_9 = VL_LTES_III(32, 0x00000190U, __VlefCall_7__get_report_verbosity_level);
        if (__VlefLogAnd_9) {
            VL_NULL_CHECK(unnamedblk371__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1508)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PHASESEQ"s, __VlefCall_8__get_report_action);
            __VlefLogAnd_9 = (0U != __VlefCall_8__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_9))) {
            VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 1508)->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("No default sequence to kill for phase '"s, __VlefCall_10__get_name), "'"s)), 0x00000190U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh"s, 0x000005e4U, ""s, 1U);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VforkTask_1(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_45> __VDynScope_m_wait_for_available_sequence_0, ::VlQueue<::IData/*31:0*/> is_relevant_entries) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VforkTask_1\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_h30f85ab8__0;
    __Vtrigprevexpr_h30f85ab8__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_51> _Vwrapped_unnamedblk352_6__DOT____VDynScope_unnamedblk352_6;
    this->__PVT__m_is_relevant_completed = 0U;
    VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 853)->__PVT__i = 0U;
    while (VL_LTS_III(32, VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 853)
                      ->__PVT__i, is_relevant_entries.size())) {
        _Vwrapped_unnamedblk352_6__DOT____VDynScope_unnamedblk352_6 
            = VL_NEW(Vtb_top_uvm_pkg__03a__03a__VDynScope_51, vlSymsp);
        VL_NULL_CHECK(_Vwrapped_unnamedblk352_6__DOT____VDynScope_unnamedblk352_6, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 855)->__PVT__k 
            = VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 855)
            ->__PVT__i;
        this->__VnoInFunc___VforkTask_1____Vfork_6__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, _Vwrapped_unnamedblk352_6__DOT____VDynScope_unnamedblk352_6, is_relevant_entries);
        VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 853)->__PVT__i 
            = ((::IData)(1U) + VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 853)
               ->__PVT__i);
    }
    if (VL_GTES_III(32, 0U, this->__PVT__m_is_relevant_completed)) {
        ::CData/*0:0*/ __VdynTrigger_h6f694221__0;
        __VdynTrigger_h6f694221__0 = 0;
        __VdynTrigger_h6f694221__0 = 0U;
        while ((1U & (~ (::IData)(__VdynTrigger_h6f694221__0)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@([true] (32'sh0 < uvm_pkg::uvm_sequencer_base.m_is_relevant_completed))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                                                                            874);
            __Vtrigprevexpr_h30f85ab8__0 = VL_LTS_III(32, 0U, this->__PVT__m_is_relevant_completed);
            __VdynTrigger_h6f694221__0 = __Vtrigprevexpr_h30f85ab8__0;
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h6f694221__0);
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@([true] (32'sh0 < uvm_pkg::uvm_sequencer_base.m_is_relevant_completed))", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                                                                        874);
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VforkTask_1____Vfork_6__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_51> _Vwrapped_unnamedblk352_6__DOT____VDynScope_unnamedblk352_6, ::VlQueue<::IData/*31:0*/> is_relevant_entries) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VforkTask_1____Vfork_6__0\n"); );
    // Locals
    ::VlQueue<::IData/*31:0*/> __Vtask___VforkTask_0__is_relevant_entries_3516;
    __Vtask___VforkTask_0__is_relevant_entries_3516.atDefault() = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_51> __Vtask___VforkTask_0____VDynScope_unnamedblk352_6_3517;
    ::CData/*0:0*/ __Vtask___VforkTask_0____VlefLogAnd_3_3518;
    __Vtask___VforkTask_0____VlefLogAnd_3_3518 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_0____VlefCall_2__get_report_action_3519;
    __Vtask___VforkTask_0____VlefCall_2__get_report_action_3519 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_0____VlefCall_1__get_report_verbosity_level_3520;
    __Vtask___VforkTask_0____VlefCall_1__get_report_verbosity_level_3520 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_0____VlefCall_0__uvm_get_report_object_3521;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_0__unnamedblk353__DOT___local_report_object__3522;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vfunc_uvm_get_report_object__Vfuncout_1497;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask_uvm_get_report_object__Vfuncout_3523;
    ::IData/*31:0*/ __Vtask_get_report_verbosity_level__Vfuncout_3524;
    __Vtask_get_report_verbosity_level__Vfuncout_3524 = 0;
    ::IData/*31:0*/ __Vtask_get_report_action__Vfuncout_3525;
    __Vtask_get_report_action__Vfuncout_3525 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_0____VDynScope_unnamedblk352_6_3517 
        = _Vwrapped_unnamedblk352_6__DOT____VDynScope_unnamedblk352_6;
    __Vtask___VforkTask_0__is_relevant_entries_3516 
        = is_relevant_entries;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0xffffffffffffffffULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                                                               854);
    co_await VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(__Vtask___VforkTask_0__is_relevant_entries_3516.at(VL_NULL_CHECK(__Vtask___VforkTask_0____VDynScope_unnamedblk352_6_3517, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 858)
                                                                                ->__PVT__k)), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 858)
                           ->__PVT__sequence_ptr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 858)->__VnoInFunc_wait_for_relevant(vlProcess, vlSymsp);
    if ((VL_TIME_UNITED_D(1000) != VL_ITOR_D_Q(64, this->__PVT__m_last_wait_relevant_time))) {
        this->__PVT__m_last_wait_relevant_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
        this->__PVT__m_wait_relevant_count = 0U;
    } else {
        this->__PVT__m_wait_relevant_count = ((::IData)(1U) 
                                              + this->__PVT__m_wait_relevant_count);
        if (VL_GTS_III(32, this->__PVT__m_wait_relevant_count, this->__PVT__m_max_zero_time_wait_relevant_count)) {
            this->__VnoInFunc_uvm_get_report_object(vlSymsp, __Vfunc_uvm_get_report_object__Vfuncout_1497);
            __Vtask___VforkTask_0____VlefCall_0__uvm_get_report_object_3521 
                = __Vfunc_uvm_get_report_object__Vfuncout_1497;
            VL_NULL_CHECK(__Vtask___VforkTask_0____VlefCall_0__uvm_get_report_object_3521, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 866)->__VnoInFunc_uvm_get_report_object(vlSymsp, __Vtask_uvm_get_report_object__Vfuncout_3523);
            __Vtask___VforkTask_0__unnamedblk353__DOT___local_report_object__3522 
                = __Vtask_uvm_get_report_object__Vfuncout_3523;
            VL_NULL_CHECK(__Vtask___VforkTask_0__unnamedblk353__DOT___local_report_object__3522, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 866)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "SEQRELEVANTLOOP"s, __Vtask_get_report_verbosity_level__Vfuncout_3524);
            __Vtask___VforkTask_0____VlefCall_1__get_report_verbosity_level_3520 
                = __Vtask_get_report_verbosity_level__Vfuncout_3524;
            __Vtask___VforkTask_0____VlefLogAnd_3_3518 
                = VL_LTES_III(32, 0U, __Vtask___VforkTask_0____VlefCall_1__get_report_verbosity_level_3520);
            if (__Vtask___VforkTask_0____VlefLogAnd_3_3518) {
                VL_NULL_CHECK(__Vtask___VforkTask_0__unnamedblk353__DOT___local_report_object__3522, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 866)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "SEQRELEVANTLOOP"s, __Vtask_get_report_action__Vfuncout_3525);
                __Vtask___VforkTask_0____VlefCall_2__get_report_action_3519 
                    = __Vtask_get_report_action__Vfuncout_3525;
                __Vtask___VforkTask_0____VlefLogAnd_3_3518 
                    = (0U != __Vtask___VforkTask_0____VlefCall_2__get_report_action_3519);
            }
            if (VL_UNLIKELY((__Vtask___VforkTask_0____VlefLogAnd_3_3518))) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQRELEVANTLOOP"s, VL_SFORMATF_N_NX("Zero time loop detected, passed wait_for_relevant %0d times without time advancing",1
                                                                                , '~',32,this->__PVT__m_wait_relevant_count) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh"s, 0x00000362U, ""s, 1U);
            }
        }
    }
    this->__PVT__m_is_relevant_completed = 1U;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VforkTask_2(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_45> __VDynScope_m_wait_for_available_sequence_0, ::VlQueue<::IData/*31:0*/> is_relevant_entries) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VforkTask_2\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    {
        ::VlForkSync __Vfork_7__sync;
        __Vfork_7__sync.init(1U, vlProcess);
        this->__VnoInFunc___VforkTask_2____Vfork_7__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_7__sync, __VDynScope_m_wait_for_available_sequence_0, is_relevant_entries);
        this->__VnoInFunc___VforkTask_2____Vfork_7__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_7__sync);
        co_await __Vfork_7__sync.join(vlProcess, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                                      848);
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VforkTask_2____Vfork_7__1(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_7__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VforkTask_2____Vfork_7__1\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_7__sync.onKill(vlProcess);
    co_await this->__VnoInFunc_m_wait_arb_not_equal(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    __Vfork_7__sync.done("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                         878);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VforkTask_2____Vfork_7__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_7__sync, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_45> __VDynScope_m_wait_for_available_sequence_0, ::VlQueue<::IData/*31:0*/> is_relevant_entries) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VforkTask_2____Vfork_7__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_7__sync.onKill(vlProcess);
    co_await this->__VnoInFunc___VforkTask_1(vlProcess, vlSymsp, __VDynScope_m_wait_for_available_sequence_0, is_relevant_entries);
    vlProcess->state(VlProcess::FINISHED);
    __Vfork_7__sync.done("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequencer_base.svh", 
                         849);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__arb_completed.atDefault() = 0;
    __PVT__m_sequencer_id = 0;
    __PVT__m_lock_arb_size = 0;
    __PVT__m_arb_size = 0;
    __PVT__m_wait_for_item_sequence_id = 0;
    __PVT__m_wait_for_item_transaction_id = 0;
    __PVT__m_wait_for_sequences_count = 0;
    __PVT__m_is_relevant_completed = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::~Vtb_top_uvm_pkg__03a__03auvm_sequencer_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequencer_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += "arb_sequence_q:" + VL_TO_STRING(__PVT__arb_sequence_q);
    out += ", arb_completed:" + VL_TO_STRING(__PVT__arb_completed);
    out += ", lock_list:" + VL_TO_STRING(__PVT__lock_list);
    out += ", reg_sequences:" + VL_TO_STRING(__PVT__reg_sequences);
    out += ", m_sequencer_id:" + VL_TO_STRING(__PVT__m_sequencer_id);
    out += ", m_lock_arb_size:" + VL_TO_STRING(__PVT__m_lock_arb_size);
    out += ", m_arb_size:" + VL_TO_STRING(__PVT__m_arb_size);
    out += ", m_wait_for_item_sequence_id:" + VL_TO_STRING(__PVT__m_wait_for_item_sequence_id);
    out += ", m_wait_for_item_transaction_id:" + VL_TO_STRING(__PVT__m_wait_for_item_transaction_id);
    out += ", m_wait_relevant_count:" + VL_TO_STRING(__PVT__m_wait_relevant_count);
    out += ", m_max_zero_time_wait_relevant_count:" + VL_TO_STRING(__PVT__m_max_zero_time_wait_relevant_count);
    out += ", m_last_wait_relevant_time:" + VL_TO_STRING(__PVT__m_last_wait_relevant_time);
    out += ", m_arbitration:" + VL_TO_STRING(__PVT__m_arbitration);
    out += ", m_wait_for_sequences_count:" + VL_TO_STRING(__PVT__m_wait_for_sequences_count);
    out += ", m_default_sequences:" + VL_TO_STRING(__PVT__m_default_sequences);
    out += ", m_is_relevant_completed:" + VL_TO_STRING(__PVT__m_is_relevant_completed);
    out += ", m_auto_item_recording:" + VL_TO_STRING(__PVT__m_auto_item_recording);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_component::to_string_middle();
    return (out);
}
