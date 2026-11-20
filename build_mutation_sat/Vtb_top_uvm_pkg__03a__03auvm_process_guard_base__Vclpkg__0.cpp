// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_process_guard_base__Vclpkg::__VnoInFunc_m_init_process_guards(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_process_guard_base__Vclpkg::__VnoInFunc_m_init_process_guards\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_init_process_guards____Vfork_1__0(std::make_shared<VlProcess>(vlProcess));
}

void Vtb_top___024root____VbeforeTrig_h64ab4232__0(Vtb_top___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_process_guard_base__Vclpkg::__VnoInFunc_m_init_process_guards____Vfork_1__0(VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_process_guard_base__Vclpkg::__VnoInFunc_m_init_process_guards____Vfork_1__0\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_process_guard_base> __Vtask___VforkTask_0__unnamedblk340__DOT__next_guard_2599;
    // Body
    VlProcess::currentp(vlProcess.get());
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0xffffffffffffffffULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_process_guard_base.svh", 
                                                               127);
    while (true) {
        while ((0U == this->__Vnontrivs.__PVT__m_pending_guards.size())) {
            Vtb_top___024root____VbeforeTrig_h64ab4232__0((&vlSymsp->vlInst.TOP), 
                                                          "@( (32'sh0 != uvm_pkg::uvm_process_guard_base__Vclpkg.m_pending_guards.size()))");
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VtrigSched_h64ab4232__0.trigger(1U, 
                                                                                vlProcess, 
                                                                                "@( (32'sh0 != uvm_pkg::uvm_process_guard_base__Vclpkg.m_pending_guards.size()))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_process_guard_base.svh", 
                                                                                132);
        }
        __Vtask___VforkTask_0__unnamedblk340__DOT__next_guard_2599 
            = this->__Vnontrivs.__PVT__m_pending_guards.pop_front();
        if ((VlNull{} != VL_NULL_CHECK(__Vtask___VforkTask_0__unnamedblk340__DOT__next_guard_2599, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_process_guard_base.svh", 135)
             ->__PVT__m_target_process)) {
            this->__VnoInFunc_m_process_guard(vlProcess, vlSymsp, __Vtask___VforkTask_0__unnamedblk340__DOT__next_guard_2599);
        }
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_process_guard_base__Vclpkg::__VnoInFunc_m_process_guard(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_process_guard_base> guard) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_process_guard_base__Vclpkg::__VnoInFunc_m_process_guard\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_44> __VDynScope_m_process_guard_1;
    __VDynScope_m_process_guard_1 = VL_NEW(Vtb_top_uvm_pkg__03a__03a__VDynScope_44, vlSymsp);
    VL_NULL_CHECK(__VDynScope_m_process_guard_1, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_process_guard_base.svh", 143)->__PVT__guard 
        = guard;
    this->__VnoInFunc_m_process_guard____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), __VDynScope_m_process_guard_1);
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_process_guard_base__Vclpkg::__VnoInFunc_m_process_guard____Vfork_2__0(VlProcessRef vlProcess, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_44> __VDynScope_m_process_guard_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_process_guard_base__Vclpkg::__VnoInFunc_m_process_guard____Vfork_2__0\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_44> __Vtask___VforkTask_1____VDynScope_m_process_guard_1_2600;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vtask___VforkTask_1____VlefCall_0__self_2601;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vfunc_self__Vfuncout_1319;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtask___VforkTask_1____VDynScope_m_process_guard_1_2600 
        = __VDynScope_m_process_guard_1;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0xffffffffffffffffULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_process_guard_base.svh", 
                                                               145);
    if ((VlNull{} != VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_1____VDynScope_m_process_guard_1_2600, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_process_guard_base.svh", 148)
                                   ->__PVT__guard, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_process_guard_base.svh", 148)
         ->__PVT__m_target_process)) {
        vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__Vfuncout_1319);
        __Vtask___VforkTask_1____VlefCall_0__self_2601 
            = __Vfunc_self__Vfuncout_1319;
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_1____VDynScope_m_process_guard_1_2600, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_process_guard_base.svh", 150)
                      ->__PVT__guard, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_process_guard_base.svh", 150)->__PVT__m_guard_process 
            = __Vtask___VforkTask_1____VlefCall_0__self_2601;
        co_await VL_NULL_CHECK(VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_1____VDynScope_m_process_guard_1_2600, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_process_guard_base.svh", 152)
                                             ->__PVT__guard, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_process_guard_base.svh", 152)
                               ->__PVT__m_target_process, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_process_guard_base.svh", 152)->__VnoInFunc_await(vlProcess, vlSymsp);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_1____VDynScope_m_process_guard_1_2600, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_process_guard_base.svh", 154)
                      ->__PVT__guard, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_process_guard_base.svh", 154)->__VnoInFunc_do_trigger(vlProcess, vlSymsp);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::__VnoInFunc_do_trigger(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::__VnoInFunc_do_trigger\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, this->__PVT__m_target_process);
}

void Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::__VnoInFunc_get_process(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_std__03a__03aprocess> &get_process__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::__VnoInFunc_get_process\n"); );
    // Body
    get_process__Vfuncrtn = this->__PVT__m_target_process;
}

void Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::__VnoInFunc_is_terminated(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_terminated__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::__VnoInFunc_is_terminated\n"); );
    // Body
    ::CData/*0:0*/ __VlefLogOr_2;
    ::IData/*31:0*/ __VlefCall_1__status;
    ::IData/*31:0*/ __VlefCall_0__status;
    is_terminated__Vfuncrtn = 0U;
    __VlefLogOr_2 = (VlNull{} != this->__PVT__m_target_process);
    if (__VlefLogOr_2) {
        VL_NULL_CHECK(this->__PVT__m_target_process, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_process_guard_base.svh", 103)->__VnoInFunc_status(vlSymsp, __VlefCall_0__status);
        __VlefLogOr_2 = (0U == __VlefCall_0__status);
        if ((1U & (~ (::IData)(__VlefLogOr_2)))) {
            VL_NULL_CHECK(this->__PVT__m_target_process, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_process_guard_base.svh", 104)->__VnoInFunc_status(vlSymsp, __VlefCall_1__status);
            __VlefLogOr_2 = (4U == __VlefCall_1__status);
        }
    }
    is_terminated__Vfuncrtn = __VlefLogOr_2;
}

void Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::__VnoInFunc_clear(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_std__03a__03aprocess> &clear__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::__VnoInFunc_clear\n"); );
    // Body
    ::CData/*0:0*/ __VlefCall_0__is_terminated;
    {
        if ((VlNull{} != this->__PVT__m_guard_process)) {
            VL_NULL_CHECK(this->__PVT__m_guard_process, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_process_guard_base.svh", 110)->__VnoInFunc_kill(vlSymsp);
        }
        this->__VnoInFunc_is_terminated(vlSymsp, __VlefCall_0__is_terminated);
        if (__VlefCall_0__is_terminated) {
            clear__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        clear__Vfuncrtn = this->__PVT__m_target_process;
        this->__PVT__m_target_process = VlNull{};
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::~Vtb_top_uvm_pkg__03a__03auvm_process_guard_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_process_guard_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_target_process:" + VL_TO_STRING(__PVT__m_target_process);
    out += ", m_guard_process:" + VL_TO_STRING(__PVT__m_guard_process);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
