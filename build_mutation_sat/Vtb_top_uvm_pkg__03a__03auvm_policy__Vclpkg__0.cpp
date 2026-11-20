// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_policy::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_policy::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc_flush(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc_flush\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__PVT__m_policy_stack.clear();
}

void Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc_set_extension(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &set_extension__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc_set_extension\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_3__get_object_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_2__get_object_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_1__get_object_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_0__get_object_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> m_set_extension;
    if (VL_UNLIKELY(((VlNull{} == extension)))) {
        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "NULLEXT"s, "Attempting to set  null extension "s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(extension, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_policy.svh", 115)->__VnoInFunc_get_object_type(vlSymsp, __VlefCall_0__get_object_type);
    if ((0U != this->__PVT__m_extensions.exists(__VlefCall_0__get_object_type))) {
        VL_NULL_CHECK(extension, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_policy.svh", 116)->__VnoInFunc_get_object_type(vlSymsp, __VlefCall_1__get_object_type);
        m_set_extension = this->__PVT__m_extensions
            .at(__VlefCall_1__get_object_type);
        VL_NULL_CHECK(extension, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_policy.svh", 117)->__VnoInFunc_get_object_type(vlSymsp, __VlefCall_2__get_object_type);
        this->__PVT__m_extensions.atWrite(__VlefCall_2__get_object_type) 
            = extension;
        set_extension__Vfuncrtn = m_set_extension;
    } else {
        VL_NULL_CHECK(extension, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_policy.svh", 122)->__VnoInFunc_get_object_type(vlSymsp, __VlefCall_3__get_object_type);
        this->__PVT__m_extensions.atWrite(__VlefCall_3__get_object_type) 
            = extension;
        set_extension__Vfuncrtn = VlNull{};
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc_get_extension(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> ext_type, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &get_extension__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc_get_extension\n"); );
    // Body
    get_extension__Vfuncrtn = ((0U != this->__PVT__m_extensions.exists(ext_type))
                                ? this->__PVT__m_extensions
                               .at(ext_type) : VlNull{});
}

void Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc_push_active_object(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc_push_active_object\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_842;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1340;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1343;
    __Vtask_uvm_report_error__verbosity_1343 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1345;
    __Vtask_uvm_report_error__line_1345 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1347;
    __Vtask_uvm_report_error__report_enabled_checked_1347 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_843;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1348;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    if ((VlNull{} != obj)) {
        this->__PVT__m_policy_stack.push_front(obj);
    } else {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_842);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_842;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1340);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1340;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_policy.svh", 176)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_policy.svh", 176)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM_POLICY_PUSHNULL"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_policy.svh", 176)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM_POLICY_PUSHNULL"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            __Vtask_uvm_report_error__report_enabled_checked_1347 = 1U;
            this->__Vtask_uvm_report_error__context_name_1346 = ""s;
            __Vtask_uvm_report_error__line_1345 = 0x000000b0U;
            this->__Vtask_uvm_report_error__filename_1344 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_policy.svh"s;
            __Vtask_uvm_report_error__verbosity_1343 = 0U;
            this->__Vtask_uvm_report_error__message_1342 = "Attempting to push an null object push_active_object onto the policy stack"s;
            this->__Vtask_uvm_report_error__id_1341 = "UVM_POLICY_PUSHNULL"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_843);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_843;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1348);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1348;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1341, this->__Vtask_uvm_report_error__message_1342, __Vtask_uvm_report_error__verbosity_1343, this->__Vtask_uvm_report_error__filename_1344, __Vtask_uvm_report_error__line_1345, this->__Vtask_uvm_report_error__context_name_1346, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1347));
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc_pop_active_object(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &pop_active_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc_pop_active_object\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_844;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1349;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_1352;
    __Vtask_uvm_report_info__verbosity_1352 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_1354;
    __Vtask_uvm_report_info__line_1354 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_1356;
    __Vtask_uvm_report_info__report_enabled_checked_1356 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_845;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1357;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> m_tmp;
    if ((0U != this->__PVT__m_policy_stack.size())) {
        m_tmp = this->__PVT__m_policy_stack.pop_front();
        pop_active_object__Vfuncrtn = m_tmp;
    } else {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_844);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_844;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1349);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1349;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_policy.svh", 193)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_policy.svh", 193)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "UVM_POLICY_EMPTY_POPACTIVE_OBJECT"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0x000001f4U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_policy.svh", 193)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVM_POLICY_EMPTY_POPACTIVE_OBJECT"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            __Vtask_uvm_report_info__report_enabled_checked_1356 = 1U;
            this->__Vtask_uvm_report_info__context_name_1355 = ""s;
            __Vtask_uvm_report_info__line_1354 = 0x000000c1U;
            this->__Vtask_uvm_report_info__filename_1353 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_policy.svh"s;
            __Vtask_uvm_report_info__verbosity_1352 = 0x000001f4U;
            this->__Vtask_uvm_report_info__message_1351 = "Attempting to pop an empty policy stack"s;
            this->__Vtask_uvm_report_info__id_1350 = "UVM_POLICY_EMPTY_POPACTIVE_OBJECT"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_845);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_845;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1357);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1357;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_1350, this->__Vtask_uvm_report_info__message_1351, __Vtask_uvm_report_info__verbosity_1352, this->__Vtask_uvm_report_info__filename_1353, __Vtask_uvm_report_info__line_1354, this->__Vtask_uvm_report_info__context_name_1355, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_1356));
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc_get_active_object_depth(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_active_object_depth__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc_get_active_object_depth\n"); );
    // Body
    get_active_object_depth__Vfuncrtn = this->__PVT__m_policy_stack.size();
}

void Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_policy::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_policy::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_policy::~Vtb_top_uvm_pkg__03a__03auvm_policy() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_policy::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_policy::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_policy::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_policy::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_policy::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_extensions:" + VL_TO_STRING(__PVT__m_extensions);
    out += ", m_policy_stack:" + VL_TO_STRING(__PVT__m_policy_stack);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
