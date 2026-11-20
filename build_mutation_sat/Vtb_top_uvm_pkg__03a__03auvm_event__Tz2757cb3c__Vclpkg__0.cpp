// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c__Vclpkg::__VnoInFunc_m_register_cb(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &m_register_cb__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c__Vclpkg::__VnoInFunc_m_register_cb\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    m_register_cb__Vfuncrtn = 0U;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_pkg::uvm_event#(T)"s, "uvm_pkg::uvm_event_callback#(T)"s, m_register_cb__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi4b2b0320> __Vfunc_get__Vfuncout_1052;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi4b2b0320__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1052);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1052;
}

void Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c, vlProcess, vlSymsp, ""s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_pkg::uvm_event#(T)"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_event_base::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_reset(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ wakeup) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_reset\n"); );
    // Body
    this->__VnoInFunc_get_default_data(vlSymsp, this->__PVT__trigger_data);
    Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_reset(vlSymsp, wakeup);
}

void Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_trigger(Vtb_top__Syms* __restrict vlSymsp, ::std::string data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_trigger\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_0__pre_trigger;
    ::IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk1__DOT__i__Vloopsize;
    unnamedblk1__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk2__DOT__i__Vloopsize;
    unnamedblk2__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ skip;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_callback__Tz2757cb3c>> cb_q;
    cb_q.clear();
    skip = 0U;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg.__VnoInFunc_get_all(vlProcess, vlSymsp, cb_q, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c>{this});
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, cb_q.size())) {
        unnamedblk1__DOT__i__Vloopsize = cb_q.size();
        VL_NULL_CHECK(cb_q.at(unnamedblk1__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 376)->__VnoInFunc_pre_trigger(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c>{this}, data, __VlefCall_0__pre_trigger);
        skip = (skip + (::IData)(__VlefCall_0__pre_trigger));
        if ((unnamedblk1__DOT__i__Vloopsize <= cb_q.size())) {
            unnamedblk1__DOT__i = ((::IData)(1U) + unnamedblk1__DOT__i);
        }
    }
    if ((0U == skip)) {
        Vtb_top_uvm_pkg__03a__03auvm_event_base::__PVT__on = 1U;
        Vtb_top_uvm_pkg__03a__03auvm_event_base::__PVT__trigger_time 
            = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
        this->__PVT__trigger_data = data;
        vlSymsp->fireEvent(Vtb_top_uvm_pkg__03a__03auvm_event_base::__PVT__m_event);
        unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__i, cb_q.size())) {
            unnamedblk2__DOT__i__Vloopsize = cb_q.size();
            VL_NULL_CHECK(cb_q.at(unnamedblk2__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 387)->__VnoInFunc_post_trigger(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c>{this}, data);
            if ((unnamedblk2__DOT__i__Vloopsize <= cb_q.size())) {
                unnamedblk2__DOT__i = ((::IData)(1U) 
                                       + unnamedblk2__DOT__i);
            }
        }
        Vtb_top_uvm_pkg__03a__03auvm_event_base::__PVT__num_waiters = 0U;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_get_trigger_data(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_trigger_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_get_trigger_data\n"); );
    // Body
    get_trigger_data__Vfuncrtn = this->__PVT__trigger_data;
}

void Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_get_default_data(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_default_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_get_default_data\n"); );
    // Body
    get_default_data__Vfuncrtn = this->__PVT__default_data;
}

void Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__get_trigger_data;
    ::IData/*31:0*/ unnamedblk3__DOT__e;
    unnamedblk3__DOT__e = 0;
    ::IData/*31:0*/ unnamedblk3__DOT__e__Vloopsize;
    unnamedblk3__DOT__e__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c> unnamedblk4__DOT__se;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_callback__Tz2757cb3c>> cb_q;
    cb_q.clear();
    Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg.__VnoInFunc_get_all(vlProcess, vlSymsp, cb_q, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c>{this});
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 424)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "callbacks"s, cb_q.size(), "queue"s, 0x2eU);
    unnamedblk3__DOT__e = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__e, cb_q.size())) {
        unnamedblk3__DOT__e__Vloopsize = cb_q.size();
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 427)->__VnoInFunc_print_object(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",1
                                                                                , '~',32,unnamedblk3__DOT__e) , cb_q.at(unnamedblk3__DOT__e), 0x5bU);
        if ((unnamedblk3__DOT__e__Vloopsize <= cb_q.size())) {
            unnamedblk3__DOT__e = ((::IData)(1U) + unnamedblk3__DOT__e);
        }
    }
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 430)->__VnoInFunc_print_array_footer(vlSymsp, cb_q.size());
    unnamedblk4__DOT__se = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c>{this};
    VL_NULL_CHECK(unnamedblk4__DOT__se, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 441)->__VnoInFunc_get_trigger_data(vlSymsp, __VlefCall_1__get_trigger_data);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 441)->__VnoInFunc_print_string(vlProcess, vlSymsp, "trigger_data"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_trigger_data), 0x2eU);
}

void Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefExpr_0;
    ::IData/*31:0*/ unnamedblk5__DOT__i;
    unnamedblk5__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk5__DOT__i__Vloopsize;
    unnamedblk5__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk6__DOT__i;
    unnamedblk6__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk6__DOT__i__Vloopsize;
    unnamedblk6__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c> e;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_callback__Tz2757cb3c>> cb_q;
    {
        cb_q.clear();
        Vtb_top_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, e);
        if (((1U & (~ (0U != __VlefExpr_0))) || (VlNull{} 
                                                 == e))) {
            goto __Vlabel0;
        }
        this->__PVT__trigger_data = VL_NULL_CHECK(e, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_event.svh", 456)
            ->__PVT__trigger_data;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg.__VnoInFunc_get_all(vlProcess, vlSymsp, cb_q, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c>{this});
        unnamedblk5__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk5__DOT__i, cb_q.size())) {
            unnamedblk5__DOT__i__Vloopsize = cb_q.size();
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg.__VnoInFunc_delete(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c>{this}, cb_q.at(unnamedblk5__DOT__i));
            if ((unnamedblk5__DOT__i__Vloopsize <= cb_q.size())) {
                unnamedblk5__DOT__i = ((::IData)(1U) 
                                       + unnamedblk5__DOT__i);
            }
        }
        cb_q.clear();
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg.__VnoInFunc_get_all(vlProcess, vlSymsp, cb_q, e);
        unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__i, cb_q.size())) {
            unnamedblk6__DOT__i__Vloopsize = cb_q.size();
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_callbacks__pib6057ff6__Vclpkg.__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c>{this}, cb_q.at(unnamedblk6__DOT__i), 0U);
            if ((unnamedblk6__DOT__i__Vloopsize <= cb_q.size())) {
                unnamedblk6__DOT__i = ((::IData)(1U) 
                                       + unnamedblk6__DOT__i);
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::~Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_event__Tz2757cb3c::to_string_middle\n"); );
    // Body
    std::string out;
    out += "trigger_data:" + VL_TO_STRING(__PVT__trigger_data);
    out += ", default_data:" + VL_TO_STRING(__PVT__default_data);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_event_base::to_string_middle();
    return (out);
}
