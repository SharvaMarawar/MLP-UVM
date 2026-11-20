// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1__Vclpkg::__VnoInFunc_get_type(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__Vnontrivs.__PVT__my_type)) {
        this->__Vnontrivs.__PVT__my_type = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1, vlProcess, vlSymsp, ""s, "<not provided>"s);
    }
    get_type__Vfuncrtn = this->__Vnontrivs.__PVT__my_type;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1__Vclpkg::__VnoInFunc_get_highest_precedence(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> &q, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1> &get_highest_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1__Vclpkg::__VnoInFunc_get_highest_precedence\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> __Vfunc_get_highest_precedence__Vfuncout_655;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefExpr_4;
    ::IData/*31:0*/ __VlefExpr_3;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> __VlefCall_2__get;
    ::IData/*31:0*/ __VlefCall_1__size;
    ::IData/*31:0*/ __VlefCall_0__size;
    ::IData/*31:0*/ unnamedblk1__DOT__i;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1> rsrc;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1> r;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> tq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
        VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource.svh", 241)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((0U == __VlefCall_0__size)) {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        tq = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b, vlProcess, vlSymsp, ""s);
        rsrc = VlNull{};
        unnamedblk1__DOT__i = 0U;
        unnamedblk1__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource.svh", 250)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            if (!(VL_LTS_III(32, unnamedblk1__DOT__i, __VlefCall_1__size))) break;
            VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource.svh", 251)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk1__DOT__i, __VlefCall_2__get);
            __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__get, r);
            if ((0U != __VlefExpr_3)) {
                VL_NULL_CHECK(tq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource.svh", 252)->__VnoInFunc_push_back(vlSymsp, r);
            }
            unnamedblk1__DOT__i = ((::IData)(1U) + unnamedblk1__DOT__i);
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get_highest_precedence(vlProcess, vlSymsp, tq, __Vfunc_get_highest_precedence__Vfuncout_655);
        rb = __Vfunc_get_highest_precedence__Vfuncout_655;
        __VlefExpr_4 = VL_CAST_DYNAMIC(rb, rsrc);
        if ((1U & (~ (0U != __VlefExpr_4)))) {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_highest_precedence__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi6c562fe3> __Vfunc_get__Vfuncout_651;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi6c562fe3__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_651);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_651;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1, vlProcess, vlSymsp, ""s, "<not provided>"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1, vlProcess, vlSymsp, name, "<not provided>"s);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_resource#(class uvm_pkg::uvm_config_object_wrapper)"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string scope) {
    Vtb_top_uvm_pkg__03a__03auvm_resource_base::init(vlProcess, vlSymsp, name, scope);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_m_value_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &m_value_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_m_value_type_name\n"); );
    // Body
    m_value_type_name__Vfuncrtn = "class uvm_pkg::uvm_config_object_wrapper"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_m_value_as_string(Vtb_top__Syms* __restrict vlSymsp, ::std::string &m_value_as_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_m_value_as_string\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    __Vtemp_1 = VL_TO_STRING_DEREF(this->__PVT__val);
    VL_SFORMAT_NX(m_value_as_string__Vfuncrtn,"%p",1
                  , '!',&(__Vtemp_1));
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_get_type_handle\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1> __Vfunc_get_type__Vfuncout_652;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource__Tz918fb8f1__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__Vfuncout_652);
    get_type_handle__Vfuncrtn = __Vfunc_get_type__Vfuncout_652;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_read(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_object_wrapper> &read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_read\n"); );
    // Body
    this->__VnoInFunc_do_read(vlSymsp, accessor, read__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_do_read(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_object_wrapper> &do_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_do_read\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_0__is_auditing;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg.__VnoInFunc_is_auditing(vlSymsp, __VlefCall_0__is_auditing);
    if (__VlefCall_0__is_auditing) {
        this->__VnoInFunc_record_read_access(vlProcess, vlSymsp, accessor);
    }
    do_read__Vfuncrtn = this->__PVT__val;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_write(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_object_wrapper> t, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_write\n"); );
    // Body
    this->__VnoInFunc_do_write(vlSymsp, t, accessor);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_do_write(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_object_wrapper> t, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_do_write\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1007;
    __Vtask_uvm_report_error__verbosity_1007 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1009;
    __Vtask_uvm_report_error__line_1009 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1011;
    __Vtask_uvm_report_error__report_enabled_checked_1011 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_653;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1012;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_2__is_auditing;
    ::std::string __VlefCall_1__get_name;
    ::CData/*0:0*/ __VlefCall_0__is_read_only;
    {
        this->__VnoInFunc_is_read_only(vlSymsp, __VlefCall_0__is_read_only);
        if (VL_UNLIKELY((__VlefCall_0__is_read_only))) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            __Vtask_uvm_report_error__report_enabled_checked_1011 = 0U;
            this->__Vtask_uvm_report_error__context_name_1010 = ""s;
            __Vtask_uvm_report_error__line_1009 = 0U;
            this->__Vtask_uvm_report_error__filename_1008 = ""s;
            __Vtask_uvm_report_error__verbosity_1007 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_1006
                          ,"resource %s is read only -- cannot modify",1
                          , 'S',&(__VlefCall_1__get_name));
            this->__Vtask_uvm_report_error__id_1005 = "resource"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_653);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_653;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1012);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1012;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1005, this->__Vtask_uvm_report_error__message_1006, __Vtask_uvm_report_error__verbosity_1007, this->__Vtask_uvm_report_error__filename_1008, __Vtask_uvm_report_error__line_1009, this->__Vtask_uvm_report_error__context_name_1010, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1011));
            goto __Vlabel0;
        }
        if ((this->__PVT__val == t)) {
            goto __Vlabel0;
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg.__VnoInFunc_is_auditing(vlSymsp, __VlefCall_2__is_auditing);
        if (__VlefCall_2__is_auditing) {
            this->__VnoInFunc_record_write_access(vlProcess, vlSymsp, accessor);
        }
        this->__PVT__val = t;
        Vtb_top_uvm_pkg__03a__03auvm_resource_base::__PVT__modified = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_set_priority(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_set_priority\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
    VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource.svh", 270)->__VnoInFunc_set_priority(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1>{this}, pri);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::~Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource__Tz918fb8f1::to_string_middle\n"); );
    // Body
    std::string out;
    out += "val:" + VL_TO_STRING(__PVT__val);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_resource_base::to_string_middle();
    return (out);
}
