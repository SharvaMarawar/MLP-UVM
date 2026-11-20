// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi245f5305> __Vfunc_get__Vfuncout_860;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi245f5305__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_860);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_860;
}

void Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_copier> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_copier, vlProcess, vlSymsp, "uvm_copier"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_copier, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_copier"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_copier::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_policy::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_copier::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__policy = 0U;
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc_copy_object(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> lhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc_copy_object\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_861;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1412;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1415;
    __Vtask_uvm_report_error__verbosity_1415 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1417;
    __Vtask_uvm_report_error__line_1417 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1419;
    __Vtask_uvm_report_error__report_enabled_checked_1419 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_862;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1420;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_863;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1421;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1424;
    __Vtask_uvm_report_error__verbosity_1424 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1426;
    __Vtask_uvm_report_error__line_1426 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1428;
    __Vtask_uvm_report_error__report_enabled_checked_1428 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_864;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1429;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __Vtask_pop_active_object__Vfuncout_1430;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*27:0*/ __VlefCall_11__get_recursion_policy;
    ::CData/*0:0*/ __VlefCall_10__user_hook_enabled;
    ::IData/*27:0*/ __VlefCall_9__get_recursion_policy;
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_5__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::IData/*27:0*/ __VlefCall_0__get_recursion_policy;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op> field_op;
    {
        this->__VnoInFunc_get_recursion_policy(vlSymsp, __VlefCall_0__get_recursion_policy);
        if ((0x00040000U == __VlefCall_0__get_recursion_policy)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_861);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_861;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1412);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1412;
            __VlefCall_1__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_copier.svh", 92)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_copier.svh", 92)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM_COPY_POLICY"s, __VlefCall_2__get_report_verbosity_level);
            __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
            if (__VlefLogAnd_4) {
                VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_copier.svh", 92)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM_COPY_POLICY"s, __VlefCall_3__get_report_action);
                __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_4))) {
                __Vtask_uvm_report_error__report_enabled_checked_1419 = 1U;
                this->__Vtask_uvm_report_error__context_name_1418 = ""s;
                __Vtask_uvm_report_error__line_1417 = 0x0000005cU;
                this->__Vtask_uvm_report_error__filename_1416 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_copier.svh"s;
                __Vtask_uvm_report_error__verbosity_1415 = 0U;
                this->__Vtask_uvm_report_error__message_1414 = "Attempting to make a copy of a object which is a reference"s;
                this->__Vtask_uvm_report_error__id_1413 = "UVM_COPY_POLICY"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_862);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_862;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1420);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1420;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1413, this->__Vtask_uvm_report_error__message_1414, __Vtask_uvm_report_error__verbosity_1415, this->__Vtask_uvm_report_error__filename_1416, __Vtask_uvm_report_error__line_1417, this->__Vtask_uvm_report_error__context_name_1418, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1419));
            }
            goto __Vlabel0;
        }
        if (((VlNull{} == rhs) | (VlNull{} == lhs))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_863);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_863;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1421);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1421;
            __VlefCall_5__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_copier.svh", 97)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_copier.svh", 97)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM_COPY_NULL_OBJ"s, __VlefCall_6__get_report_verbosity_level);
            __VlefLogAnd_8 = VL_LTES_III(32, 0U, __VlefCall_6__get_report_verbosity_level);
            if (__VlefLogAnd_8) {
                VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_copier.svh", 97)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM_COPY_NULL_OBJ"s, __VlefCall_7__get_report_action);
                __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_8))) {
                __Vtask_uvm_report_error__report_enabled_checked_1428 = 1U;
                this->__Vtask_uvm_report_error__context_name_1427 = ""s;
                __Vtask_uvm_report_error__line_1426 = 0x00000061U;
                this->__Vtask_uvm_report_error__filename_1425 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_copier.svh"s;
                __Vtask_uvm_report_error__verbosity_1424 = 0U;
                this->__Vtask_uvm_report_error__message_1423 = "Attempting to make a copy of a object with null src/target"s;
                this->__Vtask_uvm_report_error__id_1422 = "UVM_COPY_NULL_OBJ"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_864);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_864;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1429);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1429;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1422, this->__Vtask_uvm_report_error__message_1423, __Vtask_uvm_report_error__verbosity_1424, this->__Vtask_uvm_report_error__filename_1425, __Vtask_uvm_report_error__line_1426, this->__Vtask_uvm_report_error__context_name_1427, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1428));
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_push_active_object(vlProcess, vlSymsp, lhs);
        this->__VnoInFunc_get_recursion_policy(vlSymsp, __VlefCall_9__get_recursion_policy);
        this->__PVT__m_recur_states.atWrite(rhs).atWrite(lhs).atWrite(__VlefCall_9__get_recursion_policy) = 1U;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, field_op);
        VL_NULL_CHECK(field_op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_copier.svh", 104)->__VnoInFunc_set(vlProcess, vlSymsp, 1U, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_copier>{this}, rhs);
        VL_NULL_CHECK(lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_copier.svh", 105)->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, field_op);
        VL_NULL_CHECK(field_op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_copier.svh", 106)->__VnoInFunc_user_hook_enabled(vlProcess, vlSymsp, __VlefCall_10__user_hook_enabled);
        if (__VlefCall_10__user_hook_enabled) {
            VL_NULL_CHECK(lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_copier.svh", 107)->__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        }
        VL_NULL_CHECK(field_op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_copier.svh", 109)->__VnoInFunc_m_recycle(vlSymsp);
        this->__VnoInFunc_get_recursion_policy(vlSymsp, __VlefCall_11__get_recursion_policy);
        this->__PVT__m_recur_states.atWrite(rhs).atWrite(lhs).atWrite(__VlefCall_11__get_recursion_policy) = 2U;
        this->__VnoInFunc_pop_active_object(vlProcess, vlSymsp, __Vtask_pop_active_object__Vfuncout_1430);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc_flush(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc_flush\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__PVT__m_recur_states.clear();
}

void Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc_set_recursion_policy(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ policy) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc_set_recursion_policy\n"); );
    // Body
    this->__PVT__policy = policy;
}

void Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_recursion_policy(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ &get_recursion_policy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_recursion_policy\n"); );
    // Body
    get_recursion_policy__Vfuncrtn = this->__PVT__policy;
}

void Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_copier::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_copier::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_copier::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_recur_states.atDefault().atDefault().atDefault() = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_copier::~Vtb_top_uvm_pkg__03a__03auvm_copier() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_copier::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_copier::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_copier::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_copier::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_copier::to_string_middle\n"); );
    // Body
    std::string out;
    out += "policy:" + VL_TO_STRING(__PVT__policy);
    out += ", m_recur_states:" + VL_TO_STRING(__PVT__m_recur_states);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_policy::to_string_middle();
    return (out);
}
