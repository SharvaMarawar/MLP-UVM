// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi3aa9af65> __Vfunc_get__Vfuncout_631;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi3aa9af65__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_631);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_631;
}

void Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f, vlProcess, vlSymsp, ""s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_queue"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ index, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_get\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_964;
    __Vtask_uvm_report_warning__verbosity_964 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_966;
    __Vtask_uvm_report_warning__line_966 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_968;
    __Vtask_uvm_report_warning__report_enabled_checked_968 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_632;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_969;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_1__size;
    ::IData/*31:0*/ __VlefCall_0__size;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> default_value;
    {
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if (VL_UNLIKELY(((VL_GTES_III(32, index, __VlefCall_0__size) 
                          | VL_GTS_III(32, 0U, index))))) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            __Vtask_uvm_report_warning__report_enabled_checked_968 = 0U;
            this->__Vtask_uvm_report_warning__context_name_967 = ""s;
            __Vtask_uvm_report_warning__line_966 = 0U;
            this->__Vtask_uvm_report_warning__filename_965 = ""s;
            __Vtask_uvm_report_warning__verbosity_964 = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_963
                          ,"get: given index out of range for queue of size %0d. Ignoring get request",1
                          , '~',32,__VlefCall_1__size);
            this->__Vtask_uvm_report_warning__id_962 = "QUEUEGET"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_632);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_632;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_969);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_969;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_962, this->__Vtask_uvm_report_warning__message_963, __Vtask_uvm_report_warning__verbosity_964, this->__Vtask_uvm_report_warning__filename_965, __Vtask_uvm_report_warning__line_966, this->__Vtask_uvm_report_warning__context_name_967, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_968));
            get__Vfuncrtn = default_value;
            goto __Vlabel0;
        }
        get__Vfuncrtn = this->__PVT__queue.at(index);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_size(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__queue.size();
}

void Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_delete(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ index) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_delete\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_972;
    __Vtask_uvm_report_warning__verbosity_972 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_974;
    __Vtask_uvm_report_warning__line_974 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_976;
    __Vtask_uvm_report_warning__report_enabled_checked_976 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_633;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_977;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_1__size;
    ::IData/*31:0*/ __VlefCall_0__size;
    {
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if (VL_UNLIKELY(((VL_GTES_III(32, index, __VlefCall_0__size) 
                          | VL_GTS_III(32, 0xffffffffU, index))))) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            __Vtask_uvm_report_warning__report_enabled_checked_976 = 0U;
            this->__Vtask_uvm_report_warning__context_name_975 = ""s;
            __Vtask_uvm_report_warning__line_974 = 0U;
            this->__Vtask_uvm_report_warning__filename_973 = ""s;
            __Vtask_uvm_report_warning__verbosity_972 = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_971
                          ,"delete: given index out of range for queue of size %0d. Ignoring delete request",1
                          , '~',32,__VlefCall_1__size);
            this->__Vtask_uvm_report_warning__id_970 = "QUEUEDEL"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_633);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_633;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_977);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_977;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_970, this->__Vtask_uvm_report_warning__message_971, __Vtask_uvm_report_warning__verbosity_972, this->__Vtask_uvm_report_warning__filename_973, __Vtask_uvm_report_warning__line_974, this->__Vtask_uvm_report_warning__context_name_975, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_976));
            goto __Vlabel0;
        }
        if ((0xffffffffU == index)) {
            this->__PVT__queue.clear();
        } else {
            this->__PVT__queue.erase(index);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_pop_front(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> &pop_front__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_pop_front\n"); );
    // Body
    pop_front__Vfuncrtn = this->__PVT__queue.pop_front();
}

void Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_push_front(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_push_front\n"); );
    // Body
    this->__PVT__queue.push_front(item);
}

void Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_push_back(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_push_back\n"); );
    // Body
    this->__PVT__queue.push_back(item);
}

void Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogOr_1;
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f> p;
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
        this->__PVT__queue = VL_NULL_CHECK(p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_queue.svh", 229)
            ->__PVT__queue;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_convert2string\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtemp_1 = VL_TO_STRING_DEREF(this->__PVT__queue);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"%p",1, '!',&(__Vtemp_1));
}

void Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::~Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f::to_string_middle\n"); );
    // Body
    std::string out;
    out += "queue:" + VL_TO_STRING(__PVT__queue);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
