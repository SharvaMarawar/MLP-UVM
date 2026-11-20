// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_component_registry__pi60c0b805> __Vfunc_get__Vfuncout_1450;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_abstract_component_registry__pi60c0b805__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1450);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1450;
}

void Vtb_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_agent"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_agent::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_top_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_agent::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__PVT__is_active = 1U;
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_build_phase\n"); );
    // Locals
    ::CData/*0:0*/ __Vfunc_from_name__Vfuncout_1451;
    __Vfunc_from_name__Vfuncout_1451 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_13__read;
    ::IData/*31:0*/ __VlefExpr_12;
    ::IData/*31:0*/ __VlefCall_11__read;
    ::IData/*31:0*/ __VlefExpr_10;
    ::VlWide<128>/*4095:0*/ __VlefCall_9__read;
    ::IData/*31:0*/ __VlefExpr_8;
    ::QData/*63:0*/ __VlefCall_7__read;
    ::IData/*31:0*/ __VlefExpr_6;
    ::IData/*31:0*/ __VlefExpr_5;
    ::CData/*0:0*/ __VlefCall_4__from_name;
    ::IData/*31:0*/ __VlefExpr_3;
    ::IData/*31:0*/ __VlefExpr_2;
    ::IData/*31:0*/ __VlefCall_1__size;
    ::std::string __VlefCall_0__get_full_name;
    ::IData/*31:0*/ unnamedblk1__DOT__i;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> unnamedblk1__DOT__unnamedblk2__DOT__rsrc;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz1de6fff2> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT_____05Ftmp_rsrc___05F;
    ::CData/*0:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_val___05F;
    ::std::string unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_string_val___05F;
    ::CData/*0:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz2757cb3c> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT_____05Ftmp_rsrc___05F;
    ::CData/*0:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F;
    ::CData/*0:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz4ecacaad> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk7__DOT_____05Ftmp_rsrc___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tzb939a3ab> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk8__DOT_____05Ftmp_rsrc___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz39e91f07> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk9__DOT_____05Ftmp_rsrc___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk10__DOT_____05Ftmp_rsrc___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tza70e6849> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk11__DOT_____05Ftmp_rsrc___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> rq;
    ::CData/*0:0*/ found;
    found = 0U;
    Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/comps/uvm_agent.svh", 85)->__VnoInFunc_lookup_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "is_active"s, VlNull{}, 0U, rq);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_sort_by_precedence(vlProcess, vlSymsp, rq);
    unnamedblk1__DOT__i = 0U;
    unnamedblk1__DOT__i = 0U;
    while (true) {
        VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/comps/uvm_agent.svh", 87)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
        if (!((VL_LTS_III(32, unnamedblk1__DOT__i, __VlefCall_1__size) 
               && (1U & (~ (::IData)(found)))))) break;
        VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/comps/uvm_agent.svh", 88)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk1__DOT__i, unnamedblk1__DOT__unnamedblk2__DOT__rsrc);
        __VlefExpr_2 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT_____05Ftmp_rsrc___05F);
        found = (1U & __VlefExpr_2);
        if (found) {
            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/comps/uvm_agent.svh", 93)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_agent>{this}, this->__PVT__is_active);
        }
        if ((1U & (~ (::IData)(found)))) {
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_val___05F = 0U;
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_string_val___05F = ""s;
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F = 0U;
            __VlefExpr_3 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT_____05Ftmp_rsrc___05F);
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F 
                = (1U & __VlefExpr_3);
            if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F) {
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/comps/uvm_agent.svh", 93)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_agent>{this}, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_string_val___05F);
            }
            __VlefCall_4__from_name = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F;
            if (__VlefCall_4__from_name) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg.__VnoInFunc_from_name(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_string_val___05F, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_val___05F, __Vfunc_from_name__Vfuncout_1451);
                __VlefCall_4__from_name = __Vfunc_from_name__Vfuncout_1451;
            }
            if (__VlefCall_4__from_name) {
                this->__PVT__is_active = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_val___05F;
                found = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F;
            }
        }
        if ((1U & (~ (::IData)(found)))) {
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F = 0U;
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F = 0U;
            __VlefExpr_5 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk7__DOT_____05Ftmp_rsrc___05F);
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F 
                = (1U & __VlefExpr_5);
            if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk7__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/comps/uvm_agent.svh", 93)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_agent>{this}, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F);
            }
            if ((1U & (~ (::IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F)))) {
                __VlefExpr_6 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk8__DOT_____05Ftmp_rsrc___05F);
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F 
                    = (1U & __VlefExpr_6);
                if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk8__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/comps/uvm_agent.svh", 93)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_agent>{this}, __VlefCall_7__read);
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F 
                        = (1U & (::IData)(__VlefCall_7__read));
                }
                if ((1U & (~ (::IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F)))) {
                    __VlefExpr_8 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk9__DOT_____05Ftmp_rsrc___05F);
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F 
                        = (1U & __VlefExpr_8);
                    if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk9__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/comps/uvm_agent.svh", 93)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_agent>{this}, __VlefCall_9__read);
                        unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F 
                            = (1U & __VlefCall_9__read[0U]);
                    }
                }
                if ((1U & (~ (::IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F)))) {
                    __VlefExpr_10 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk10__DOT_____05Ftmp_rsrc___05F);
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F 
                        = (1U & __VlefExpr_10);
                    if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk10__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/comps/uvm_agent.svh", 93)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_agent>{this}, __VlefCall_11__read);
                        unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F 
                            = (1U & __VlefCall_11__read);
                    }
                }
                if ((1U & (~ (::IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F)))) {
                    __VlefExpr_12 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk11__DOT_____05Ftmp_rsrc___05F);
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F 
                        = (1U & __VlefExpr_12);
                    if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk11__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/comps/uvm_agent.svh", 93)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_agent>{this}, __VlefCall_13__read);
                        unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F 
                            = (1U & __VlefCall_13__read);
                    }
                }
            }
            if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                this->__PVT__is_active = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F;
                found = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F;
            }
        }
        unnamedblk1__DOT__i = ((::IData)(1U) + unnamedblk1__DOT__i);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vtb_top_uvm_pkg__03a__03auvm_agent::~Vtb_top_uvm_pkg__03a__03auvm_agent() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_agent::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_agent::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_agent::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_agent::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_agent::to_string_middle\n"); );
    // Body
    std::string out;
    out += "is_active:" + VL_TO_STRING(__PVT__is_active);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_component::to_string_middle();
    return (out);
}
