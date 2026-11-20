// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi943e2137> __Vfunc_get__Vfuncout_817;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi943e2137__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_817);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_817;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b, vlProcess, vlSymsp, "uvm_resource_db_default_implementation_t"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi33de813b::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc_get_by_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string scope, ::std::string name, ::CData/*0:0*/ rpterr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> &get_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc_get_by_name\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_818;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1249;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1252;
    __Vtask_uvm_report_warning__verbosity_1252 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1254;
    __Vtask_uvm_report_warning__line_1254 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1256;
    __Vtask_uvm_report_warning__report_enabled_checked_1256 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_819;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1257;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::IData/*31:0*/ __VlefExpr_1;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_0__get_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc_base;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> rsrc;
    ::std::string msg;
    {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
        msg = ""s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource__Tz7d09f080__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __VlefCall_0__get_type);
        VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_db_implementation.svh", 268)->__VnoInFunc_get_by_name(vlProcess, vlSymsp, scope, name, __VlefCall_0__get_type, rpterr, rsrc_base);
        if ((VlNull{} == rsrc_base)) {
            get_by_name__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        __VlefExpr_1 = VL_CAST_DYNAMIC(rsrc_base, rsrc);
        if ((1U & (~ (0U != __VlefExpr_1)))) {
            if (rpterr) {
                VL_SFORMAT_NX(msg,"Resource with name %s in scope %s has incorrect type",2
                              , 'S',&(name), 'S',&(scope));
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_818);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_818;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1249);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1249;
                __VlefCall_2__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_db_implementation.svh", 280)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_db_implementation.svh", 280)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RSRCTYPE"s, __VlefCall_3__get_report_verbosity_level);
                __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
                if (__VlefLogAnd_5) {
                    VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_db_implementation.svh", 280)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RSRCTYPE"s, __VlefCall_4__get_report_action);
                    __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_5))) {
                    __Vtask_uvm_report_warning__report_enabled_checked_1256 = 1U;
                    this->__Vtask_uvm_report_warning__context_name_1255 = ""s;
                    __Vtask_uvm_report_warning__line_1254 = 0x00000118U;
                    this->__Vtask_uvm_report_warning__filename_1253 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_db_implementation.svh"s;
                    __Vtask_uvm_report_warning__verbosity_1252 = 0U;
                    this->__Vtask_uvm_report_warning__message_1251 
                        = msg;
                    this->__Vtask_uvm_report_warning__id_1250 = "RSRCTYPE"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_819);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_819;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1257);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_1257;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_1250, this->__Vtask_uvm_report_warning__message_1251, __Vtask_uvm_report_warning__verbosity_1252, this->__Vtask_uvm_report_warning__filename_1253, __Vtask_uvm_report_warning__line_1254, this->__Vtask_uvm_report_warning__context_name_1255, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1256));
                }
            }
            get_by_name__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_by_name__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc_show_msg(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string rtype, ::std::string action, ::std::string scope, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc_show_msg\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_820;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1258;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_1261;
    __Vtask_uvm_report_info__verbosity_1261 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_1263;
    __Vtask_uvm_report_info__line_1263 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_1265;
    __Vtask_uvm_report_info__report_enabled_checked_1265 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_821;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1266;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::std::string __VlefCall_1__convert2string;
    ::std::string __VlefCall_0__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    ::std::string msg;
    msg = "bit"s;
    if ((VlNull{} != accessor)) {
        VL_NULL_CHECK(accessor, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_db_implementation.svh", 320)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    } else {
        __VlefCall_0__get_full_name = "<unknown>"s;
    }
    if ((VlNull{} == rsrc)) {
        __VlefCall_1__convert2string = "null (failed lookup)"s;
    } else {
        VL_NULL_CHECK(rsrc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_db_implementation.svh", 321)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_1__convert2string);
    }
    VL_SFORMAT_NX(msg,"%s scope='%s' name='%s' (type %s) %s accessor=%s = %s",7
                  , 'S',&(rtype), 'S',&(scope), 'S',&(name)
                  , 'S',&(msg), 'S',&(action), 'S',&(__VlefCall_0__get_full_name)
                  , 'S',&(__VlefCall_1__convert2string));
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_820);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_820;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1258);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_1258;
    __VlefCall_2__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_db_implementation.svh", 323)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_db_implementation.svh", 323)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, id, __VlefCall_3__get_report_verbosity_level);
    __VlefLogAnd_5 = VL_LTES_III(32, 0x00000064U, __VlefCall_3__get_report_verbosity_level);
    if (__VlefLogAnd_5) {
        VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_db_implementation.svh", 323)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, id, __VlefCall_4__get_report_action);
        __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_5))) {
        __Vtask_uvm_report_info__report_enabled_checked_1265 = 1U;
        this->__Vtask_uvm_report_info__context_name_1264 = ""s;
        __Vtask_uvm_report_info__line_1263 = 0x00000143U;
        this->__Vtask_uvm_report_info__filename_1262 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_db_implementation.svh"s;
        __Vtask_uvm_report_info__verbosity_1261 = 0x00000064U;
        this->__Vtask_uvm_report_info__message_1260 
            = msg;
        this->__Vtask_uvm_report_info__id_1259 = id;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_821);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__Vfuncout_821;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1266);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1266;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_1259, this->__Vtask_uvm_report_info__message_1260, __Vtask_uvm_report_info__verbosity_1261, this->__Vtask_uvm_report_info__filename_1262, __Vtask_uvm_report_info__line_1263, this->__Vtask_uvm_report_info__context_name_1264, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_1265));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc_set(Vtb_top__Syms* __restrict vlSymsp, ::std::string scope, ::std::string name, ::CData/*0:0*/ val, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc_set\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_0__is_tracing;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> rsrc;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
    rsrc = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080, vlProcess, vlSymsp, name, "<not provided>"s);
    VL_NULL_CHECK(rsrc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_db_implementation.svh", 338)->__VnoInFunc_write(vlSymsp, val, accessor);
    VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_db_implementation.svh", 339)->__VnoInFunc_set_scope(vlProcess, vlSymsp, rsrc, scope);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
    if (__VlefCall_0__is_tracing) {
        this->__VnoInFunc_show_msg(vlSymsp, "RSRCDB/SET"s, "Resource"s, "set"s, scope, name, accessor, rsrc);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::~Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi9283022b::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi33de813b::to_string_middle();
    return (out);
}
