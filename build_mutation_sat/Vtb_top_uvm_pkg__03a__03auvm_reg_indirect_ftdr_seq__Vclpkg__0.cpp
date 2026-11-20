// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> addr_reg, ::IData/*31:0*/ idx, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> data_reg) {
    Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::init(vlProcess, vlSymsp, "uvm_reg_indirect_ftdr_seq"s);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_addr_reg = addr_reg;
    this->__PVT__m_idx = idx;
    this->__PVT__m_data_reg = data_reg;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc_body\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_6__get_status;
    ::QData/*63:0*/ __VlefCall_5__get_value;
    ::IData/*31:0*/ __VlefCall_4__get_kind;
    ::IData/*31:0*/ __VlefExpr_3;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_2__clone;
    ::IData/*31:0*/ __VlefExpr_1;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_0__clone;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    {
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 301)->__VnoInFunc_clone(vlProcess, vlSymsp, __VlefCall_0__clone);
        __VlefExpr_1 = VL_CAST_DYNAMIC(__VlefCall_0__clone, rw);
        if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_1)))))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_indirect.svh:301: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_indirect_ftdr_seq.body", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 301, "");
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 302)->__PVT__element 
            = this->__PVT__m_addr_reg;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 303)->__PVT__kind = 1U;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 304)->__PVT__value.atWrite(0U) 
            = VL_EXTENDS_QI(64,32, this->__PVT__m_idx);
        co_await VL_NULL_CHECK(this->__PVT__m_addr_reg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 306)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        co_await VL_NULL_CHECK(this->__PVT__m_data_reg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 307)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        co_await VL_NULL_CHECK(this->__PVT__m_addr_reg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 309)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
        if ((1U == VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 311)
             ->__PVT__status)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 317)->__VnoInFunc_clone(vlProcess, vlSymsp, __VlefCall_2__clone);
        __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__clone, rw);
        if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_3)))))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_indirect.svh:317: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_indirect_ftdr_seq.body", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 317, "");
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 318)->__PVT__element 
            = this->__PVT__m_data_reg;
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 320)->__VnoInFunc_get_kind(vlSymsp, __VlefCall_4__get_kind);
        if ((1U == __VlefCall_4__get_kind)) {
            co_await VL_NULL_CHECK(this->__PVT__m_data_reg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 322)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
        } else {
            co_await VL_NULL_CHECK(this->__PVT__m_data_reg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 326)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 327)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_5__get_value);
            VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 327)->__VnoInFunc_set_value(vlSymsp, __VlefCall_5__get_value, 0U);
        }
        co_await VL_NULL_CHECK(this->__PVT__m_addr_reg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 330)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        co_await VL_NULL_CHECK(this->__PVT__m_data_reg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 331)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 333)->__VnoInFunc_get_status(vlSymsp, __VlefCall_6__get_status);
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_indirect.svh", 333)->__VnoInFunc_set_status(vlSymsp, __VlefCall_6__get_status);
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_idx = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::~Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_addr_reg:" + VL_TO_STRING(__PVT__m_addr_reg);
    out += ", m_data_reg:" + VL_TO_STRING(__PVT__m_data_reg);
    out += ", m_idx:" + VL_TO_STRING(__PVT__m_idx);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::to_string_middle();
    return (out);
}
