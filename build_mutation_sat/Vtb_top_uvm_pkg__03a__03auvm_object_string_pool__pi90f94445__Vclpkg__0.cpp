// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0e100b0f> __Vfunc_get__Vfuncout_251;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi0e100b0f__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_251);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_251;
}

void Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445, vlProcess, vlSymsp, ""s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_obj_str_pool"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_pool__pi8a42b5b5::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string key, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f> __VlefCall_0__new;
    if ((1U & (~ (0U != Vtb_top_uvm_pkg__03a__03auvm_pool__pi8a42b5b5::__PVT__pool.exists(key))))) {
        __VlefCall_0__new = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f, vlProcess, vlSymsp, key);
        Vtb_top_uvm_pkg__03a__03auvm_pool__pi8a42b5b5::__PVT__pool.atWrite(key) 
            = __VlefCall_0__new;
    }
    get__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_pool__pi8a42b5b5::__PVT__pool
        .at(key);
}

void Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc_delete(Vtb_top__Syms* __restrict vlSymsp, ::std::string key) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc_delete\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_383;
    __Vtask_uvm_report_warning__verbosity_383 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_385;
    __Vtask_uvm_report_warning__line_385 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_387;
    __Vtask_uvm_report_warning__report_enabled_checked_387 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_252;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_388;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__exists;
    {
        this->__VnoInFunc_exists(vlSymsp, key, __VlefCall_0__exists);
        if (VL_UNLIKELY(((1U & (~ (0U != __VlefCall_0__exists)))))) {
            __Vtask_uvm_report_warning__report_enabled_checked_387 = 0U;
            this->__Vtask_uvm_report_warning__context_name_386 = ""s;
            __Vtask_uvm_report_warning__line_385 = 0U;
            this->__Vtask_uvm_report_warning__filename_384 = ""s;
            __Vtask_uvm_report_warning__verbosity_383 = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_382
                          ,"delete: key '%s' doesn't exist",1
                          , 'S',&(key));
            this->__Vtask_uvm_report_warning__id_381 = "POOLDEL"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_252);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_252;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_388);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_388;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_381, this->__Vtask_uvm_report_warning__message_382, __Vtask_uvm_report_warning__verbosity_383, this->__Vtask_uvm_report_warning__filename_384, __Vtask_uvm_report_warning__line_385, this->__Vtask_uvm_report_warning__context_name_386, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_387));
            goto __Vlabel0;
        }
        Vtb_top_uvm_pkg__03a__03auvm_pool__pi8a42b5b5::__PVT__pool.erase(key);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefExpr_1;
    ::CData/*0:0*/ __VlefExpr_0;
    ::std::string key;
    key = ""s;
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_pool.svh", 361)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "pool"s, Vtb_top_uvm_pkg__03a__03auvm_pool__pi8a42b5b5::__PVT__pool.size(), "aa_object_string"s, 0x2eU);
    __VlefExpr_0 = (0U != Vtb_top_uvm_pkg__03a__03auvm_pool__pi8a42b5b5::__PVT__pool.first(key));
    if (__VlefExpr_0) {
        do {
            VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_pool.svh", 366)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("["s, key), "]"s)), Vtb_top_uvm_pkg__03a__03auvm_pool__pi8a42b5b5::__PVT__pool
                                                                                .at(key), 0x5bU);
            __VlefExpr_1 = (0U != Vtb_top_uvm_pkg__03a__03auvm_pool__pi8a42b5b5::__PVT__pool.next(key));
        } while (__VlefExpr_1);
    }
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_pool.svh", 372)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
}

void Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::~Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_pool__pi8a42b5b5::to_string_middle();
    return (out);
}
