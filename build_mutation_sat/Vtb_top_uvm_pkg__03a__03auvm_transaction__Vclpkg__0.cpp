// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_transaction::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> initiator) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__events = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi5f4a92bc, vlProcess, vlSymsp, "events"s);
    this->__PVT__m_transaction_id = 0xffffffffU;
    this->__PVT__begin_time = 0xffffffffffffffffULL;
    this->__PVT__end_time = 0xffffffffffffffffULL;
    this->__PVT__accept_time = 0xffffffffffffffffULL;
    /*super.new*/;
    this->__PVT__initiator = initiator;
    this->__PVT__m_transaction_id = 0xffffffffU;
}

void Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_transaction_id(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_transaction_id\n"); );
    // Body
    this->__PVT__m_transaction_id = id;
}

void Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_transaction_id(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_transaction_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_transaction_id\n"); );
    // Body
    get_transaction_id__Vfuncrtn = this->__PVT__m_transaction_id;
}

void Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_event_pool(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi5f4a92bc> &get_event_pool__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_event_pool\n"); );
    // Body
    get_event_pool__Vfuncrtn = this->__PVT__events;
}

void Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_begin_tr(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_begin_tr\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_end_tr(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_end_tr\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__get_type_name;
    ::IData/*31:0*/ __VlefCall_0__get_inst_id;
    ::std::string str;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> tmp_initiator;
    str = ""s;
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    if ((0xffffffffffffffffULL != this->__PVT__accept_time)) {
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 592)->__VnoInFunc_print_time(vlProcess, vlSymsp, "accept_time"s, this->__PVT__accept_time, 0x2eU);
    }
    if ((0xffffffffffffffffULL != this->__PVT__begin_time)) {
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 597)->__VnoInFunc_print_time(vlProcess, vlSymsp, "begin_time"s, this->__PVT__begin_time, 0x2eU);
    }
    if ((0xffffffffffffffffULL != this->__PVT__end_time)) {
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 602)->__VnoInFunc_print_time(vlProcess, vlSymsp, "end_time"s, this->__PVT__end_time, 0x2eU);
    }
    if ((VlNull{} != this->__PVT__initiator)) {
        tmp_initiator = this->__PVT__initiator;
        VL_NULL_CHECK(tmp_initiator, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 608)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
        VL_SFORMAT_NX(str,"@%0d",1, '~',32,__VlefCall_0__get_inst_id);
        VL_NULL_CHECK(this->__PVT__initiator, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 609)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 609)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "initiator"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), 0xffffffffU, str, 0x2eU);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_transaction> txn;
    {
        Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        if ((VlNull{} == rhs)) {
            goto __Vlabel0;
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, txn);
        if ((1U & (~ (0U != __VlefExpr_0)))) {
            goto __Vlabel0;
        }
        this->__PVT__accept_time = VL_NULL_CHECK(txn, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 627)
            ->__PVT__accept_time;
        this->__PVT__begin_time = VL_NULL_CHECK(txn, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 628)
            ->__PVT__begin_time;
        this->__PVT__end_time = VL_NULL_CHECK(txn, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 629)
            ->__PVT__end_time;
        this->__PVT__initiator = VL_NULL_CHECK(txn, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 630)
            ->__PVT__initiator;
        this->__PVT__stream_handle = VL_NULL_CHECK(txn, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 631)
            ->__PVT__stream_handle;
        this->__PVT__tr_recorder = VL_NULL_CHECK(txn, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 632)
            ->__PVT__tr_recorder;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_record(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_record\n"); );
    // Locals
    ::VlWide<128>/*4095:0*/ __Vtemp_1;
    ::IData/*31:0*/ __Vilp1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*27:0*/ unnamedblk93__DOT__p;
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
    if ((0xffffffffffffffffULL != this->__PVT__accept_time)) {
        __Vtemp_1[0U] = (::IData)(this->__PVT__accept_time);
        __Vtemp_1[1U] = (::IData)((this->__PVT__accept_time 
                                   >> 0x00000020U));
        __Vilp1 = 2U;
        while ((__Vilp1 <= 0x0000007fU)) {
            __Vtemp_1[__Vilp1] = 0U;
            __Vilp1 = ((::IData)(1U) + __Vilp1);
        }
        VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 643)->__VnoInFunc_record_field(vlProcess, vlSymsp, "accept_time"s, __Vtemp_1, 0x00000040U, 0x09000000U);
    }
    if ((VlNull{} != this->__PVT__initiator)) {
        VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 648)->__VnoInFunc_get_recursion_policy(vlSymsp, unnamedblk93__DOT__p);
        VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 649)->__VnoInFunc_set_recursion_policy(vlSymsp, 0x00040000U);
        VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 650)->__VnoInFunc_record_object(vlProcess, vlSymsp, "initiator"s, this->__PVT__initiator);
        VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 651)->__VnoInFunc_set_recursion_policy(vlSymsp, unnamedblk93__DOT__p);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_recording_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_recording_enabled\n"); );
    // Body
    is_recording_enabled__Vfuncrtn = (VlNull{} != this->__PVT__stream_handle);
}

void Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_tr(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ begin_time, ::IData/*31:0*/ parent_handle, ::IData/*31:0*/ &begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_tr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    begin_tr__Vfuncrtn = 0U;
    this->__VnoInFunc_m_begin_tr(vlProcess, vlSymsp, begin_time, parent_handle, begin_tr__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ begin_time, ::IData/*31:0*/ parent_handle, ::IData/*31:0*/ &m_begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_m_begin_tr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_parent_child_link> __VlefCall_3__get_link;
    ::std::string __VlefCall_2__get_type_name;
    ::std::string __VlefCall_1__get_type_name;
    ::CData/*0:0*/ __VlefCall_0__is_recording_enabled;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> unnamedblk94__DOT__db;
    m_begin_tr__Vfuncrtn = 0U;
    ::QData/*63:0*/ tmp_time;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> parent_recorder;
    tmp_time = VL_RTOIROUND_Q_D(((0ULL == begin_time)
                                  ? VL_TIME_UNITED_D(1000)
                                  : VL_ITOR_D_Q(64, begin_time)));
    if ((0U != parent_handle)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, parent_handle, parent_recorder);
    }
    if ((VlNull{} != this->__PVT__tr_recorder)) {
        this->__VnoInFunc_end_tr(vlProcess, vlSymsp, tmp_time, 1U);
    }
    this->__VnoInFunc_is_recording_enabled(vlSymsp, __VlefCall_0__is_recording_enabled);
    if (__VlefCall_0__is_recording_enabled) {
        VL_NULL_CHECK(this->__PVT__stream_handle, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 770)->__VnoInFunc_get_db(vlProcess, vlSymsp, unnamedblk94__DOT__db);
        this->__PVT__end_time = 0xffffffffffffffffULL;
        this->__PVT__begin_time = tmp_time;
        if ((VlNull{} == parent_recorder)) {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
            VL_NULL_CHECK(this->__PVT__stream_handle, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 777)->__VnoInFunc_open_recorder(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), this->__PVT__begin_time, "Begin_No_Parent, Link"s, this->__PVT__tr_recorder);
        } else {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
            VL_NULL_CHECK(this->__PVT__stream_handle, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 784)->__VnoInFunc_open_recorder(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name), this->__PVT__begin_time, "Begin_End, Link"s, this->__PVT__tr_recorder);
            if ((VlNull{} != this->__PVT__tr_recorder)) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_parent_child_link__Vclpkg.__VnoInFunc_get_link(vlProcess, vlSymsp, parent_recorder, this->__PVT__tr_recorder, "pc_link"s, __VlefCall_3__get_link);
                VL_NULL_CHECK(unnamedblk94__DOT__db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 790)->__VnoInFunc_establish_link(vlProcess, vlSymsp, __VlefCall_3__get_link);
            }
        }
        if ((VlNull{} != this->__PVT__tr_recorder)) {
            VL_NULL_CHECK(this->__PVT__tr_recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 797)->__VnoInFunc_get_handle(vlSymsp, m_begin_tr__Vfuncrtn);
        } else {
            m_begin_tr__Vfuncrtn = 0U;
        }
    } else {
        this->__PVT__tr_recorder = VlNull{};
        this->__PVT__end_time = 0xffffffffffffffffULL;
        this->__PVT__begin_time = tmp_time;
        m_begin_tr__Vfuncrtn = 0U;
    }
    this->__VnoInFunc_do_begin_tr(vlSymsp);
    VL_NULL_CHECK(this->__PVT__events, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 818)->__VnoInFunc_get(vlProcess, vlSymsp, "begin"s, this->__PVT__begin_event);
    VL_NULL_CHECK(this->__PVT__begin_event, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 819)->__VnoInFunc_trigger__Vtcwrap_1(vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_end_tr(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ end_time, ::CData/*0:0*/ free_handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_end_tr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_0__is_recording_enabled;
    this->__PVT__end_time = VL_RTOIROUND_Q_D(((0ULL 
                                               == end_time)
                                               ? VL_TIME_UNITED_D(1000)
                                               : VL_ITOR_D_Q(64, end_time)));
    this->__VnoInFunc_do_end_tr(vlSymsp);
    this->__VnoInFunc_is_recording_enabled(vlSymsp, __VlefCall_0__is_recording_enabled);
    if (((::IData)(__VlefCall_0__is_recording_enabled) 
         & (VlNull{} != this->__PVT__tr_recorder))) {
        this->__VnoInFunc_record(vlProcess, vlSymsp, this->__PVT__tr_recorder);
        VL_NULL_CHECK(this->__PVT__tr_recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 837)->__VnoInFunc_close(vlSymsp, this->__PVT__end_time);
        if (free_handle) {
            VL_NULL_CHECK(this->__PVT__tr_recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 842)->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
        }
    }
    this->__PVT__tr_recorder = VlNull{};
    VL_NULL_CHECK(this->__PVT__events, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 849)->__VnoInFunc_get(vlProcess, vlSymsp, "end"s, this->__PVT__end_event);
    VL_NULL_CHECK(this->__PVT__end_event, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_transaction.svh", 850)->__VnoInFunc_trigger__Vtcwrap_1(vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_transaction::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_transaction::~Vtb_top_uvm_pkg__03a__03auvm_transaction() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_transaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_transaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_transaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "events:" + VL_TO_STRING(__PVT__events);
    out += ", m_transaction_id:" + VL_TO_STRING(__PVT__m_transaction_id);
    out += ", begin_time:" + VL_TO_STRING(__PVT__begin_time);
    out += ", end_time:" + VL_TO_STRING(__PVT__end_time);
    out += ", accept_time:" + VL_TO_STRING(__PVT__accept_time);
    out += ", initiator:" + VL_TO_STRING(__PVT__initiator);
    out += ", stream_handle:" + VL_TO_STRING(__PVT__stream_handle);
    out += ", tr_recorder:" + VL_TO_STRING(__PVT__tr_recorder);
    out += ", begin_event:" + VL_TO_STRING(__PVT__begin_event);
    out += ", end_event:" + VL_TO_STRING(__PVT__end_event);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
