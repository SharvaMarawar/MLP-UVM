// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_transaction::init(vlProcess, vlSymsp, name, VlNull{});
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_sequence_id = 0xffffffffU;
    this->__PVT__m_depth = 0xffffffffU;
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_sequence_item"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi5866bf10> __Vfunc_get__Vfuncout_1454;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi5866bf10__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1454);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1454;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_sequence_id(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_sequence_id\n"); );
    // Body
    this->__PVT__m_sequence_id = id;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequence_id(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_sequence_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequence_id\n"); );
    // Body
    get_sequence_id__Vfuncrtn = this->__PVT__m_sequence_id;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_item_context(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent_seq, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_item_context\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__get_depth;
    this->__VnoInFunc_set_use_sequence_info(vlSymsp, 1U);
    if ((VlNull{} != parent_seq)) {
        this->__VnoInFunc_set_parent_sequence(vlSymsp, parent_seq);
    }
    if (((VlNull{} == sequencer) & (VlNull{} != this->__PVT__m_parent_sequence))) {
        VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 135)->__VnoInFunc_get_sequencer(vlSymsp, sequencer);
    }
    this->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
    if ((VlNull{} != this->__PVT__m_parent_sequence)) {
        VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 140)->__VnoInFunc_get_depth(vlSymsp, __VlefCall_0__get_depth);
        this->__VnoInFunc_set_depth(vlSymsp, ((::IData)(1U) 
                                              + __VlefCall_0__get_depth));
    }
    this->__VnoInFunc_reseed(vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_use_sequence_info(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_use_sequence_info\n"); );
    // Body
    this->__PVT__m_use_sequence_info = value;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_sequencer(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_sequencer\n"); );
    // Body
    this->__PVT__m_sequencer = sequencer;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequencer(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> &get_sequencer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequencer\n"); );
    // Body
    get_sequencer__Vfuncrtn = this->__PVT__m_sequencer;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_parent_sequence(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_parent_sequence\n"); );
    // Body
    this->__PVT__m_parent_sequence = parent;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_parent_sequence(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> &get_parent_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_parent_sequence\n"); );
    // Body
    get_parent_sequence__Vfuncrtn = this->__PVT__m_parent_sequence;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_depth(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_depth\n"); );
    // Body
    this->__PVT__m_depth = value;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_depth(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_depth__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_depth\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__get_depth;
    {
        get_depth__Vfuncrtn = 0U;
        if ((0xffffffffU != this->__PVT__m_depth)) {
            get_depth__Vfuncrtn = this->__PVT__m_depth;
            goto __Vlabel0;
        }
        if ((VlNull{} == this->__PVT__m_parent_sequence)) {
            this->__PVT__m_depth = 1U;
        } else {
            VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 263)->__VnoInFunc_get_depth(vlSymsp, __VlefCall_0__get_depth);
            this->__PVT__m_depth = ((::IData)(1U) + __VlefCall_0__get_depth);
        }
        get_depth__Vfuncrtn = this->__PVT__m_depth;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_is_item(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_is_item\n"); );
    // Body
    is_item__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_3__get_name;
    ::std::string __VlefCall_2__get_name;
    ::std::string __VlefCall_1__get_full_name;
    ::std::string __VlefCall_0__get_full_name;
    get_full_name__Vfuncrtn = ""s;
    if ((VlNull{} != this->__PVT__m_parent_sequence)) {
        VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 288)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s);
    } else if ((VlNull{} != this->__PVT__m_sequencer)) {
        VL_NULL_CHECK(this->__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 293)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s);
    }
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
    if ((""s != __VlefCall_2__get_name)) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(get_full_name__Vfuncrtn, __VlefCall_3__get_name);
    } else {
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(get_full_name__Vfuncrtn, "_item"s);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_root_sequence_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_root_sequence_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_root_sequence_name\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> root_seq;
    get_root_sequence_name__Vfuncrtn = ""s;
    this->__VnoInFunc_get_root_sequence(vlSymsp, root_seq);
    if ((VlNull{} == root_seq)) {
        get_root_sequence_name__Vfuncrtn = ""s;
    } else {
        VL_NULL_CHECK(root_seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 322)->__VnoInFunc_get_name(vlSymsp, get_root_sequence_name__Vfuncrtn);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_root_sequence(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> &get_root_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_root_sequence\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> curr_seq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> next_seq;
    this->__VnoInFunc_get_parent_sequence(vlSymsp, next_seq);
    while ((VlNull{} != next_seq)) {
        curr_seq = next_seq;
        VL_NULL_CHECK(curr_seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 348)->__VnoInFunc_get_parent_sequence(vlSymsp, next_seq);
    }
    get_root_sequence__Vfuncrtn = curr_seq;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequence_path(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_sequence_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequence_path\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> __Vtask_get_parent_sequence__Vfuncout_3446;
    // Body
    ::std::string __VlefCall_1__get_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_0__get_parent_sequence;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> this_item;
    ::std::string seq_path;
    get_sequence_path__Vfuncrtn = ""s;
    seq_path = ""s;
    this_item = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item>{this};
    this->__VnoInFunc_get_name(vlSymsp, seq_path);
    while (true) {
        VL_NULL_CHECK(this_item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 366)->__VnoInFunc_get_parent_sequence(vlSymsp, __VlefCall_0__get_parent_sequence);
        if (!((VlNull{} != __VlefCall_0__get_parent_sequence))) break;
        VL_NULL_CHECK(this_item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 367)->__VnoInFunc_get_parent_sequence(vlSymsp, __Vtask_get_parent_sequence__Vfuncout_3446);
        this_item = __Vtask_get_parent_sequence__Vfuncout_3446;
        VL_NULL_CHECK(this_item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 368)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        seq_path = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_name, "."s), seq_path);
    }
    get_sequence_path__Vfuncrtn = seq_path;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_get_report_object(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> &uvm_get_report_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_get_report_object\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3447;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk1__DOT__cs;
    if ((VlNull{} == this->__PVT__m_sequencer)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk1__DOT__cs);
        VL_NULL_CHECK(unnamedblk1__DOT__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 389)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3447);
        uvm_get_report_object__Vfuncrtn = __Vtask_get_root__Vfuncout_3447;
    } else {
        uvm_get_report_object__Vfuncrtn = this->__PVT__m_sequencer;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_enabled(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ verbosity, ::CData/*1:0*/ severity, ::std::string id, ::IData/*31:0*/ &uvm_report_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_enabled\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> l_report_object;
    {
        uvm_report_enabled__Vfuncrtn = 0U;
        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, l_report_object);
        VL_NULL_CHECK(l_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 401)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, severity, id, __VlefCall_0__get_report_verbosity_level);
        if (VL_LTS_III(32, __VlefCall_0__get_report_verbosity_level, verbosity)) {
            uvm_report_enabled__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        uvm_report_enabled__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::std::string context_name, ::CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> l_report_message;
    {
        if (((0U == (::IData)(severity)) & (~ (::IData)(report_enabled_checked)))) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, verbosity, (::IData)(severity), id, __VlefCall_0__uvm_report_enabled);
            if ((1U & (~ (0U != __VlefCall_0__uvm_report_enabled)))) {
                goto __Vlabel0;
            }
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_message__Vclpkg.__VnoInFunc_new_report_message(vlProcess, vlSymsp, "uvm_report_message"s, l_report_message);
        VL_NULL_CHECK(l_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 430)->__VnoInFunc_set_report_message(vlSymsp, severity, id, message, verbosity, filename, line, context_name);
        this->__VnoInFunc_uvm_process_report_message(vlProcess, vlSymsp, l_report_message);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_info(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::std::string context_name, ::CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_info\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 0U, id, message, verbosity, filename, line, context_name, (::IData)(report_enabled_checked));
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_warning(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::std::string context_name, ::CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_warning\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 1U, id, message, verbosity, filename, line, context_name, (::IData)(report_enabled_checked));
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::std::string context_name, ::CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_error\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 2U, id, message, verbosity, filename, line, context_name, (::IData)(report_enabled_checked));
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_fatal(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::std::string context_name, ::CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_fatal\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 3U, id, message, verbosity, filename, line, context_name, (::IData)(report_enabled_checked));
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_process_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__get_sequence_path;
    ::std::string __VlefCall_0__get_context;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> l_report_object;
    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, l_report_object);
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 504)->__VnoInFunc_set_report_object(vlSymsp, l_report_object);
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 505)->__VnoInFunc_get_context(vlSymsp, __VlefCall_0__get_context);
    if ((""s == __VlefCall_0__get_context)) {
        this->__VnoInFunc_get_sequence_path(vlSymsp, __VlefCall_1__get_sequence_path);
        VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 507)->__VnoInFunc_set_context(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_sequence_path));
    }
    VL_NULL_CHECK(VL_NULL_CHECK(l_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 510)
                  ->__PVT__m_rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 510)->__VnoInFunc_process_report_message(vlProcess, vlSymsp, report_message);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string temp_str0;
    ::std::string temp_str1;
    ::IData/*31:0*/ depth;
    temp_str0 = ""s;
    temp_str1 = ""s;
    this->__VnoInFunc_get_depth(vlSymsp, depth);
    Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    if (((::IData)(this->__PVT__print_sequence_info) 
         | (::IData)(this->__PVT__m_use_sequence_info))) {
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 523)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "depth"s, 
                                                                                VL_EXTENDS_QI(64,32, depth), 0x00000020U, 0x02000000U, 0x2eU, "int"s);
        if ((VlNull{} != this->__PVT__m_parent_sequence)) {
            VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 525)->__VnoInFunc_get_name(vlSymsp, temp_str0);
            VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 526)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, temp_str1);
        }
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 528)->__VnoInFunc_print_string(vlProcess, vlSymsp, "parent sequence (name)"s, temp_str0, 0x2eU);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 529)->__VnoInFunc_print_string(vlProcess, vlSymsp, "parent sequence (full name)"s, temp_str1, 0x2eU);
        temp_str1 = ""s;
        if ((VlNull{} != this->__PVT__m_sequencer)) {
            VL_NULL_CHECK(this->__PVT__m_sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 532)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, temp_str1);
        }
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/seq/uvm_sequence_item.svh", 534)->__VnoInFunc_print_string(vlProcess, vlSymsp, "sequencer"s, temp_str1, 0x2eU);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_sequence_item::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_use_sequence_info = 0;
    __PVT__print_sequence_info = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_sequence_item::~Vtb_top_uvm_pkg__03a__03auvm_sequence_item() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_sequence_item::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_sequence_item::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_sequence_item::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_sequence_id:" + VL_TO_STRING(__PVT__m_sequence_id);
    out += ", m_use_sequence_info:" + VL_TO_STRING(__PVT__m_use_sequence_info);
    out += ", m_depth:" + VL_TO_STRING(__PVT__m_depth);
    out += ", m_sequencer:" + VL_TO_STRING(__PVT__m_sequencer);
    out += ", m_parent_sequence:" + VL_TO_STRING(__PVT__m_parent_sequence);
    out += ", print_sequence_info:" + VL_TO_STRING(__PVT__print_sequence_info);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_transaction::to_string_middle();
    return (out);
}
