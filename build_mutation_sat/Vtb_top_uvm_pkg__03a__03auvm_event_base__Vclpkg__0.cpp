// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi24c71f73> __Vfunc_get__Vfuncout_931;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi24c71f73__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_931);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_931;
}

void Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_event_base"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_event_base::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_event_base::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__trigger_time = 0ULL;
    /*super.new*/;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_on(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ delta) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_on\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__0;
    __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    {
        if (this->__PVT__on) {
            if (delta) {
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0ULL, 
                                                                           vlProcess, 
                                                                           "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 
                                                                           88);
            }
            goto __Vlabel0;
        }
        this->__PVT__num_waiters = ((::IData)(1U) + this->__PVT__num_waiters);
        ::CData/*0:0*/ __VdynTrigger_hc7a198ec__0;
        __VdynTrigger_hc7a198ec__0 = 0;
        __VdynTrigger_hc7a198ec__0 = 0U;
        __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__0 
            = this->__PVT__on;
        while ((1U & (~ (::IData)(__VdynTrigger_hc7a198ec__0)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@( uvm_pkg::uvm_event_base.on)", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 
                                                                            94);
            __VdynTrigger_hc7a198ec__0 = ((::IData)(this->__PVT__on) 
                                          != (::IData)(__Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__0));
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hc7a198ec__0);
            __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__0 
                = this->__PVT__on;
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@( uvm_pkg::uvm_event_base.on)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 
                                                                        94);
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_reset(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ wakeup) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_reset\n"); );
    // Body
    ::VlAssignableEvent e;
    if (wakeup) {
        vlSymsp->fireEvent(this->__PVT__m_event);
    }
    this->__PVT__m_event = e;
    this->__PVT__num_waiters = 0U;
    this->__PVT__on = 0U;
    this->__PVT__trigger_time = 0ULL;
}

void Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_cancel(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_cancel\n"); );
    // Body
    if (VL_LTS_III(32, 0U, this->__PVT__num_waiters)) {
        this->__PVT__num_waiters = (this->__PVT__num_waiters 
                                    - (::IData)(1U));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_num_waiters(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_num_waiters__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_num_waiters\n"); );
    // Body
    get_num_waiters__Vfuncrtn = this->__PVT__num_waiters;
}

void Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 253)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "num_waiters"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__num_waiters), 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 254)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "on"s, (::QData)((::IData)(this->__PVT__on)), 1U, 0x01000000U, 0x2eU, "bit"s);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 255)->__VnoInFunc_print_time(vlProcess, vlSymsp, "trigger_time"s, this->__PVT__trigger_time, 0x2eU);
}

void Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_base> e;
    {
        Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, e);
        if (((1U & (~ (0U != __VlefExpr_0))) || (VlNull{} 
                                                 == e))) {
            goto __Vlabel0;
        }
        this->__PVT__m_event = VL_NULL_CHECK(e, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 268)
            ->__PVT__m_event;
        this->__PVT__num_waiters = VL_NULL_CHECK(e, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 269)
            ->__PVT__num_waiters;
        this->__PVT__on = VL_NULL_CHECK(e, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 270)
            ->__PVT__on;
        this->__PVT__trigger_time = VL_NULL_CHECK(e, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 271)
            ->__PVT__trigger_time;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_event_base::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_event_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__num_waiters = 0;
    __PVT__on = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_event_base::~Vtb_top_uvm_pkg__03a__03auvm_event_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_event_base::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_event_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_event_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_event_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_event_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_event:" + VL_TO_STRING(__PVT__m_event);
    out += ", num_waiters:" + VL_TO_STRING(__PVT__num_waiters);
    out += ", on:" + VL_TO_STRING(__PVT__on);
    out += ", trigger_time:" + VL_TO_STRING(__PVT__trigger_time);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
