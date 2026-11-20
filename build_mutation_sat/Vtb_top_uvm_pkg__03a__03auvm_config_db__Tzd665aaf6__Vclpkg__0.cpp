// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_config_db__Tzd665aaf6__Vclpkg::__VnoInFunc_set(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt, ::std::string inst_name, ::std::string field_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_config_db__Tzd665aaf6__Vclpkg::__VnoInFunc_set\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_892;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_2__get_depth;
    ::std::string __VlefCall_1__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi233523da> __VlefCall_0__new;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi233523da> pool;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi814132c0> imp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db_implementation_t__pi814132c0__Vclpkg.__VnoInFunc_get_imp(vlProcess, vlSymsp, imp);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    if ((VlNull{} == cntxt)) {
        VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db.svh", 134)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_892);
        cntxt = __Vtask_get_root__Vfuncout_892;
    }
    if ((1U & (~ (0U != this->__Vnontrivs.__PVT__m_rsc.exists(cntxt))))) {
        __VlefCall_0__new = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_pool__pi233523da, vlProcess, vlSymsp, ""s);
        this->__Vnontrivs.__PVT__m_rsc.atWrite(cntxt) 
            = __VlefCall_0__new;
    }
    pool = this->__Vnontrivs.__PVT__m_rsc.at(cntxt);
    VL_NULL_CHECK(cntxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db.svh", 143)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    VL_NULL_CHECK(cntxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db.svh", 143)->__VnoInFunc_get_depth(vlSymsp, __VlefCall_2__get_depth);
    VL_NULL_CHECK(imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db.svh", 143)->__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), inst_name, field_name, value, __VlefCall_2__get_depth, pool, cntxt);
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db__Tzd665aaf6::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tzd665aaf6::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_config_db__Tzd665aaf6::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

Vtb_top_uvm_pkg__03a__03auvm_config_db__Tzd665aaf6::~Vtb_top_uvm_pkg__03a__03auvm_config_db__Tzd665aaf6() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_config_db__Tzd665aaf6::~\n"); );
}
