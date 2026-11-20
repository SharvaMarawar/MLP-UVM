// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pia1b84df2> __Vfunc_get__Vfuncout_1513;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pia1b84df2__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1513);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1513;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_frontdoor"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_frontdoor_mutex = VL_NEW(Vtb_top_std__03a__03asemaphore, vlSymsp, 1U);
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc_atomic_lock(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc_atomic_lock\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz307140d2> l_mutex_guard;
    l_mutex_guard = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz307140d2, vlProcess, vlSymsp, "atomic_guard"s, 
                           ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor>{this});
    co_await VL_NULL_CHECK(this->__PVT__m_frontdoor_mutex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 540)->__VnoInFunc_get(vlProcess, vlSymsp, 1U);
    this->__PVT__m_mutex_guard = l_mutex_guard;
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc_atomic_unlock(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc_atomic_unlock\n"); );
    // Locals
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vtask_clear__Vfuncout_3586;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk416__DOT___local_report_object_;
    {
        if ((VlNull{} == this->__PVT__m_mutex_guard)) {
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_0__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 548)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk416__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk416__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 548)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "REG_FD_UNLOCK"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk416__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 548)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "REG_FD_UNLOCK"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "REG_FD_UNLOCK"s, VL_SFORMATF_N_NX("Attempt to unlock frontdoor '%s' when it wasn't locked!",1
                                                                                , 'S',&(__VlefCall_4__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh"s, 0x00000224U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_frontdoor_mutex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 551)->__VnoInFunc_put(vlSymsp, 1U);
        VL_NULL_CHECK(this->__PVT__m_mutex_guard, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 552)->__VnoInFunc_clear(vlSymsp, __Vtask_clear__Vfuncout_3586);
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc_start(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent_sequence, ::IData/*31:0*/ this_priority, ::CData/*0:0*/ call_pre_post) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc_start\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_8__get_full_name;
    ::std::string __VlefCall_7__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_6;
    ::IData/*31:0*/ __VlefCall_5__get_report_action;
    ::IData/*31:0*/ __VlefCall_4__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_3__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogOr_2;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __VlefCall_1__self;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __VlefCall_0__get_process;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk417__DOT___local_report_object_;
    ::CData/*0:0*/ self_locked;
    self_locked = 0U;
    __VlefLogOr_2 = (VlNull{} == this->__PVT__m_mutex_guard);
    if ((1U & (~ (::IData)(__VlefLogOr_2)))) {
        VL_NULL_CHECK(this->__PVT__m_mutex_guard, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 561)->__VnoInFunc_get_process(vlSymsp, __VlefCall_0__get_process);
        vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __VlefCall_1__self);
        __VlefLogOr_2 = (__VlefCall_0__get_process 
                         != __VlefCall_1__self);
    }
    if (__VlefLogOr_2) {
        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_3__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_3__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 565)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk417__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk417__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 565)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/REG/FRNTDR"s, __VlefCall_4__get_report_verbosity_level);
        __VlefLogAnd_6 = VL_LTES_III(32, 0U, __VlefCall_4__get_report_verbosity_level);
        if (__VlefLogAnd_6) {
            VL_NULL_CHECK(unnamedblk417__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 565)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/REG/FRNTDR"s, __VlefCall_5__get_report_action);
            __VlefLogAnd_6 = (0U != __VlefCall_5__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_6))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
            if ((VlNull{} == sequencer)) {
                __VlefCall_8__get_full_name = "<NULL>"s;
            } else {
                VL_NULL_CHECK(sequencer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 565)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
            }
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM/REG/FRNTDR"s, VL_SFORMATF_N_NX("Call to start() for frontdoor sequence '%s', executing on '%s', was not protected by atomic_lock()/atomic_unlock().",2
                                                                                , 'S',&(__VlefCall_7__get_full_name)
                                                                                , 'S',&(__VlefCall_8__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh"s, 0x00000235U, ""s, 1U);
        }
        co_await this->__VnoInFunc_atomic_lock(vlProcess, vlSymsp);
        self_locked = 1U;
    }
    co_await Vtb_top_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start(vlProcess, vlSymsp, sequencer, parent_sequence, this_priority, (::IData)(call_pre_post));
    if (self_locked) {
        {
            // Inlined CFunc: __VnoInFunc_atomic_unlock
            ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vinline_0___VnoInFunc_atomic_unlock___Vtask_clear__Vfuncout_3586;
            ::std::string __Vinline_0___VnoInFunc_atomic_unlock___VlefCall_4__get_full_name;
            ::CData/*0:0*/ __Vinline_0___VnoInFunc_atomic_unlock___VlefLogAnd_3;
            ::IData/*31:0*/ __Vinline_0___VnoInFunc_atomic_unlock___VlefCall_2__get_report_action;
            ::IData/*31:0*/ __Vinline_0___VnoInFunc_atomic_unlock___VlefCall_1__get_report_verbosity_level;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vinline_0___VnoInFunc_atomic_unlock___VlefCall_0__uvm_get_report_object;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vinline_0___VnoInFunc_atomic_unlock_unnamedblk416__DOT___local_report_object_;
            {
                if ((VlNull{} == this->__PVT__m_mutex_guard)) {
                    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_atomic_unlock___VlefCall_0__uvm_get_report_object);
                    VL_NULL_CHECK(__Vinline_0___VnoInFunc_atomic_unlock___VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 548)->__VnoInFunc_uvm_get_report_object(vlSymsp, __Vinline_0___VnoInFunc_atomic_unlock_unnamedblk416__DOT___local_report_object_);
                    VL_NULL_CHECK(__Vinline_0___VnoInFunc_atomic_unlock_unnamedblk416__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 548)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "REG_FD_UNLOCK"s, __Vinline_0___VnoInFunc_atomic_unlock___VlefCall_1__get_report_verbosity_level);
                    __Vinline_0___VnoInFunc_atomic_unlock___VlefLogAnd_3 
                        = VL_LTES_III(32, 0U, __Vinline_0___VnoInFunc_atomic_unlock___VlefCall_1__get_report_verbosity_level);
                    if (__Vinline_0___VnoInFunc_atomic_unlock___VlefLogAnd_3) {
                        VL_NULL_CHECK(__Vinline_0___VnoInFunc_atomic_unlock_unnamedblk416__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 548)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "REG_FD_UNLOCK"s, __Vinline_0___VnoInFunc_atomic_unlock___VlefCall_2__get_report_action);
                        __Vinline_0___VnoInFunc_atomic_unlock___VlefLogAnd_3 
                            = (0U != __Vinline_0___VnoInFunc_atomic_unlock___VlefCall_2__get_report_action);
                    }
                    if (VL_UNLIKELY((__Vinline_0___VnoInFunc_atomic_unlock___VlefLogAnd_3))) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_atomic_unlock___VlefCall_4__get_full_name);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "REG_FD_UNLOCK"s, VL_SFORMATF_N_NX("Attempt to unlock frontdoor '%s' when it wasn't locked!",1
                                                                                , 'S',&(__Vinline_0___VnoInFunc_atomic_unlock___VlefCall_4__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh"s, 0x00000224U, ""s, 1U);
                    }
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(this->__PVT__m_frontdoor_mutex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 551)->__VnoInFunc_put(vlSymsp, 1U);
                VL_NULL_CHECK(this->__PVT__m_mutex_guard, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 552)->__VnoInFunc_clear(vlSymsp, __Vinline_0___VnoInFunc_atomic_unlock___Vtask_clear__Vfuncout_3586);
                __Vlabel0: ;
            }
        }
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc_process_guard_triggered(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz307140d2> guard) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc_process_guard_triggered\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk418__DOT___local_report_object_;
    if ((guard == this->__PVT__m_mutex_guard)) {
        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_0__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 583)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk418__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk418__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 583)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/REG/FRNTDR"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk418__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 583)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/REG/FRNTDR"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM/REG/FRNTDR"s, VL_SFORMATF_N_NX("Locking process was killed, releasing atomic lock for frontdoor: '%s'",1
                                                                                , 'S',&(__VlefCall_4__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh"s, 0x00000247U, ""s, 1U);
        }
        {
            // Inlined CFunc: __VnoInFunc_atomic_unlock
            ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vinline_1___VnoInFunc_atomic_unlock___Vtask_clear__Vfuncout_3586;
            ::std::string __Vinline_1___VnoInFunc_atomic_unlock___VlefCall_4__get_full_name;
            ::CData/*0:0*/ __Vinline_1___VnoInFunc_atomic_unlock___VlefLogAnd_3;
            ::IData/*31:0*/ __Vinline_1___VnoInFunc_atomic_unlock___VlefCall_2__get_report_action;
            ::IData/*31:0*/ __Vinline_1___VnoInFunc_atomic_unlock___VlefCall_1__get_report_verbosity_level;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vinline_1___VnoInFunc_atomic_unlock___VlefCall_0__uvm_get_report_object;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vinline_1___VnoInFunc_atomic_unlock_unnamedblk416__DOT___local_report_object_;
            {
                if ((VlNull{} == this->__PVT__m_mutex_guard)) {
                    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __Vinline_1___VnoInFunc_atomic_unlock___VlefCall_0__uvm_get_report_object);
                    VL_NULL_CHECK(__Vinline_1___VnoInFunc_atomic_unlock___VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 548)->__VnoInFunc_uvm_get_report_object(vlSymsp, __Vinline_1___VnoInFunc_atomic_unlock_unnamedblk416__DOT___local_report_object_);
                    VL_NULL_CHECK(__Vinline_1___VnoInFunc_atomic_unlock_unnamedblk416__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 548)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "REG_FD_UNLOCK"s, __Vinline_1___VnoInFunc_atomic_unlock___VlefCall_1__get_report_verbosity_level);
                    __Vinline_1___VnoInFunc_atomic_unlock___VlefLogAnd_3 
                        = VL_LTES_III(32, 0U, __Vinline_1___VnoInFunc_atomic_unlock___VlefCall_1__get_report_verbosity_level);
                    if (__Vinline_1___VnoInFunc_atomic_unlock___VlefLogAnd_3) {
                        VL_NULL_CHECK(__Vinline_1___VnoInFunc_atomic_unlock_unnamedblk416__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 548)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "REG_FD_UNLOCK"s, __Vinline_1___VnoInFunc_atomic_unlock___VlefCall_2__get_report_action);
                        __Vinline_1___VnoInFunc_atomic_unlock___VlefLogAnd_3 
                            = (0U != __Vinline_1___VnoInFunc_atomic_unlock___VlefCall_2__get_report_action);
                    }
                    if (VL_UNLIKELY((__Vinline_1___VnoInFunc_atomic_unlock___VlefLogAnd_3))) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vinline_1___VnoInFunc_atomic_unlock___VlefCall_4__get_full_name);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "REG_FD_UNLOCK"s, VL_SFORMATF_N_NX("Attempt to unlock frontdoor '%s' when it wasn't locked!",1
                                                                                , 'S',&(__Vinline_1___VnoInFunc_atomic_unlock___VlefCall_4__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh"s, 0x00000224U, ""s, 1U);
                    }
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(this->__PVT__m_frontdoor_mutex, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 551)->__VnoInFunc_put(vlSymsp, 1U);
                VL_NULL_CHECK(this->__PVT__m_mutex_guard, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_sequence.svh", 552)->__VnoInFunc_clear(vlSymsp, __Vinline_1___VnoInFunc_atomic_unlock___Vtask_clear__Vfuncout_3586);
                __Vlabel0: ;
            }
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__lineno = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::~Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "rw_info:" + VL_TO_STRING(__PVT__rw_info);
    out += ", sequencer:" + VL_TO_STRING(__PVT__sequencer);
    out += ", m_frontdoor_mutex:" + VL_TO_STRING(__PVT__m_frontdoor_mutex);
    out += ", m_mutex_guard:" + VL_TO_STRING(__PVT__m_mutex_guard);
    out += ", fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::to_string_middle();
    return (out);
}
