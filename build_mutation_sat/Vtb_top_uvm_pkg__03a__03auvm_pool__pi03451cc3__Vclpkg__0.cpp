// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__piaee949c9> __Vfunc_get__Vfuncout_181;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__piaee949c9__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_181);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_181;
}

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3, vlProcess, vlSymsp, ""s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_pool"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ key, ::CData/*1:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_get\n"); );
    // Body
    if ((1U & (~ (0U != this->__PVT__pool.exists(key))))) {
        this->__PVT__pool.atWrite((::IData)(key)) = 0U;
    }
    get__Vfuncrtn = this->__PVT__pool.at((::IData)(key));
}

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_add(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ key, ::CData/*1:0*/ item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_add\n"); );
    // Body
    this->__PVT__pool.atWrite((::IData)(key)) = item;
}

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_num(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_num\n"); );
    // Body
    num__Vfuncrtn = this->__PVT__pool.size();
}

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_delete(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ key) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_delete\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_255;
    __Vtask_uvm_report_warning__verbosity_255 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_257;
    __Vtask_uvm_report_warning__line_257 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_259;
    __Vtask_uvm_report_warning__report_enabled_checked_259 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_182;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_260;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__exists;
    {
        this->__VnoInFunc_exists(vlSymsp, key, __VlefCall_0__exists);
        if (VL_UNLIKELY(((1U & (~ (0U != __VlefCall_0__exists)))))) {
            __Vtask_uvm_report_warning__report_enabled_checked_259 = 0U;
            this->__Vtask_uvm_report_warning__context_name_258 = ""s;
            __Vtask_uvm_report_warning__line_257 = 0U;
            this->__Vtask_uvm_report_warning__filename_256 = ""s;
            __Vtask_uvm_report_warning__verbosity_255 = 0x000000c8U;
            this->__Vtask_uvm_report_warning__message_254 = "delete: pool key doesn't exist. Ignoring delete request"s;
            this->__Vtask_uvm_report_warning__id_253 = "POOLDEL"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_182);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_182;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_260);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_260;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_253, this->__Vtask_uvm_report_warning__message_254, __Vtask_uvm_report_warning__verbosity_255, this->__Vtask_uvm_report_warning__filename_256, __Vtask_uvm_report_warning__line_257, this->__Vtask_uvm_report_warning__context_name_258, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_259));
            goto __Vlabel0;
        }
        this->__PVT__pool.erase(key);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_exists(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ key, ::IData/*31:0*/ &exists__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_exists\n"); );
    // Body
    exists__Vfuncrtn = this->__PVT__pool.exists(key);
}

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_first(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ &key, ::IData/*31:0*/ &first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_first\n"); );
    // Body
    first__Vfuncrtn = 0U;
    first__Vfuncrtn = this->__PVT__pool.first(key);
}

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_next(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ &key, ::IData/*31:0*/ &next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_next\n"); );
    // Body
    next__Vfuncrtn = 0U;
    next__Vfuncrtn = this->__PVT__pool.next(key);
}

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogOr_1;
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3> p;
    {
        Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefLogOr_1 = (VlNull{} == rhs);
        if ((1U & (~ (::IData)(__VlefLogOr_1)))) {
            __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, p);
            __VlefLogOr_1 = (1U & (~ (0U != __VlefExpr_0)));
        }
        if (__VlefLogOr_1) {
            goto __Vlabel0;
        }
        this->__PVT__pool = VL_NULL_CHECK(p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_pool.svh", 234)
            ->__PVT__pool;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefExpr_1;
    ::CData/*0:0*/ __VlefExpr_0;
    ::std::string v;
    ::IData/*31:0*/ cnt;
    ::std::string item;
    ::CData/*1:0*/ key;
    v = ""s;
    cnt = 0U;
    item = ""s;
    key = 0U;
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_pool.svh", 242)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "pool"s, this->__PVT__pool.size(), "aa_object_string"s, 0x2eU);
    __VlefExpr_0 = (0U != this->__PVT__pool.first(key));
    if (__VlefExpr_0) {
        do {
            VL_SFORMAT_NX(item,"%0d",1, '~',32,cnt);
            item = VL_CONCATN_NNN(VL_CONCATN_NNN("[-key"s, item), "--]"s);
            VL_SFORMAT_NX(v,"%d",1, '#',2,this->__PVT__pool
                          .at((::IData)(key)));
            VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_pool.svh", 250)->__VnoInFunc_print_generic(vlProcess, vlSymsp, item, ""s, 0xffffffffU, v, 0x5bU);
            __VlefExpr_1 = (0U != this->__PVT__pool.next(key));
        } while (__VlefExpr_1);
    }
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_pool.svh", 255)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
}

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__pool.atDefault() = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::~Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3::to_string_middle\n"); );
    // Body
    std::string out;
    out += "pool:" + VL_TO_STRING(__PVT__pool);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
