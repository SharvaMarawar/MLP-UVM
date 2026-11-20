// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz54780af0__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt, ::std::string inst_name, ::std::string field_name, Vtb_top_mlp_if* &value, ::CData/*0:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz54780af0__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    Vtb_top_mlp_if* __Vtask_get__value_799;
    __Vtask_get__value_799 = nullptr;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pic43944d7> imp;
    get__Vfuncrtn = 0U;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db_implementation_t__pic43944d7__Vclpkg.__VnoInFunc_get_imp(vlProcess, vlSymsp, imp);
    __Vtask_get__value_799 = value;
    VL_NULL_CHECK(imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db.svh", 86)->__VnoInFunc_get(vlProcess, vlSymsp, cntxt, inst_name, field_name, __Vtask_get__value_799, get__Vfuncrtn);
    value = __Vtask_get__value_799;
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz54780af0__Vclpkg::__VnoInFunc_set(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt, ::std::string inst_name, ::std::string field_name, Vtb_top_mlp_if* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz54780af0__Vclpkg::__VnoInFunc_set\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_800;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_2__get_depth;
    ::std::string __VlefCall_1__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pidb5ac2bd> __VlefCall_0__new;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pidb5ac2bd> pool;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pic43944d7> imp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db_implementation_t__pic43944d7__Vclpkg.__VnoInFunc_get_imp(vlProcess, vlSymsp, imp);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    if ((VlNull{} == cntxt)) {
        VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db.svh", 134)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_800);
        cntxt = __Vtask_get_root__Vfuncout_800;
    }
    if ((1U & (~ (0U != this->__Vnontrivs.__PVT__m_rsc.exists(cntxt))))) {
        __VlefCall_0__new = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_pool__pidb5ac2bd, vlProcess, vlSymsp, ""s);
        this->__Vnontrivs.__PVT__m_rsc.atWrite(cntxt) 
            = __VlefCall_0__new;
    }
    pool = this->__Vnontrivs.__PVT__m_rsc.at(cntxt);
    VL_NULL_CHECK(cntxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db.svh", 143)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    VL_NULL_CHECK(cntxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db.svh", 143)->__VnoInFunc_get_depth(vlSymsp, __VlefCall_2__get_depth);
    VL_NULL_CHECK(imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db.svh", 143)->__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), inst_name, field_name, value, __VlefCall_2__get_depth, pool, cntxt);
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz54780af0::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tz54780af0::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz54780af0::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz54780af0::~Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz54780af0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz54780af0::~\n"); );
}
