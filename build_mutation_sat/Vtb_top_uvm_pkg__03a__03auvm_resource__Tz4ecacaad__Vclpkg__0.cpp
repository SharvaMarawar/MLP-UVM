// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad__Vclpkg::__VnoInFunc_get_type(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__Vnontrivs.__PVT__my_type)) {
        this->__Vnontrivs.__PVT__my_type = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad, vlProcess, vlSymsp, ""s, "<not provided>"s);
    }
    get_type__Vfuncrtn = this->__Vnontrivs.__PVT__my_type;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pif9a6191a> __Vfunc_get__Vfuncout_611;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pif9a6191a__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_611);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_611;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad, vlProcess, vlSymsp, ""s, "<not provided>"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad, vlProcess, vlSymsp, name, "<not provided>"s);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_resource#(bit[0:0])"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string scope) {
    Vtb_top_uvm_pkg__03a__03auvm_resource_base::init(vlProcess, vlSymsp, name, scope);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_m_value_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &m_value_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_m_value_type_name\n"); );
    // Body
    m_value_type_name__Vfuncrtn = "bit[0:0]"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_m_value_as_string(Vtb_top__Syms* __restrict vlSymsp, ::std::string &m_value_as_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_m_value_as_string\n"); );
    // Body
    VL_SFORMAT_NX(m_value_as_string__Vfuncrtn,"%p",1
                  , '#',1,this->__PVT__val);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_get_type_handle\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad> __Vfunc_get_type__Vfuncout_612;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource__Tz4ecacaad__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__Vfuncout_612);
    get_type_handle__Vfuncrtn = __Vfunc_get_type__Vfuncout_612;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor, ::CData/*0:0*/ &read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    read__Vfuncrtn = 0U;
    this->__VnoInFunc_do_read(vlProcess, vlSymsp, accessor, read__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_do_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor, ::CData/*0:0*/ &do_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_do_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_0__is_auditing;
    do_read__Vfuncrtn = 0U;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg.__VnoInFunc_is_auditing(vlSymsp, __VlefCall_0__is_auditing);
    if (__VlefCall_0__is_auditing) {
        this->__VnoInFunc_record_read_access(vlProcess, vlSymsp, accessor);
    }
    do_read__Vfuncrtn = this->__PVT__val;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_do_write(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ t, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_do_write\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_940;
    __Vtask_uvm_report_error__verbosity_940 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_942;
    __Vtask_uvm_report_error__line_942 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_944;
    __Vtask_uvm_report_error__report_enabled_checked_944 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_613;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_945;
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
            __Vtask_uvm_report_error__report_enabled_checked_944 = 0U;
            this->__Vtask_uvm_report_error__context_name_943 = ""s;
            __Vtask_uvm_report_error__line_942 = 0U;
            this->__Vtask_uvm_report_error__filename_941 = ""s;
            __Vtask_uvm_report_error__verbosity_940 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_939
                          ,"resource %s is read only -- cannot modify",1
                          , 'S',&(__VlefCall_1__get_name));
            this->__Vtask_uvm_report_error__id_938 = "resource"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_613);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_613;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_945);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_945;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_938, this->__Vtask_uvm_report_error__message_939, __Vtask_uvm_report_error__verbosity_940, this->__Vtask_uvm_report_error__filename_941, __Vtask_uvm_report_error__line_942, this->__Vtask_uvm_report_error__context_name_943, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_944));
            goto __Vlabel0;
        }
        if (((::IData)(this->__PVT__val) == (::IData)(t))) {
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

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_set_priority(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_set_priority\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
    VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource.svh", 270)->__VnoInFunc_set_priority(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad>{this}, pri);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__val = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::~Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad::to_string_middle\n"); );
    // Body
    std::string out;
    out += "val:" + VL_TO_STRING(__PVT__val);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_resource_base::to_string_middle();
    return (out);
}
