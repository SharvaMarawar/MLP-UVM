// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT__start_offset, 0x0000000000000040ULL, 
                                                                   "start_offset", 0ULL);
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_randomize\n"); );
    // Body
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    this->__VnoInFunc___VBasicRand(vlSymsp, randomize__Vfuncrtn);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng));
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_uvm_mem_mam_policy_valid_setup_constraint(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_uvm_mem_mam_policy_valid_setup_constraint\n"); );
    // Locals
    ::std::string __Vtemp_1;
    ::std::string __Vtemp_2;
    // Body
    VL_SFORMAT_NX(__Vtemp_1,"#x%x",1, '#',64,this->__PVT__min_offset);
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (bvuge start_offset %s))",1
                                                                               , 'S',&(__Vtemp_1)) , "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem_mam.svh", 0x000001eaU, 
                                                              "      start_offset >= min_offset;");
    VL_SFORMAT_NX(__Vtemp_2,"#x%x",1, '#',64,(1ULL 
                                              + (this->__PVT__max_offset 
                                                 - (::QData)((::IData)(this->__PVT__len)))));
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (bvule start_offset %s))",1
                                                                               , 'S',&(__Vtemp_2)) , "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem_mam.svh", 0x000001ebU, 
                                                              "      start_offset <= max_offset - len + 1;");
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_uvm_mem_mam_policy_no_overlap_setup_constraint(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_uvm_mem_mam_policy_no_overlap_setup_constraint\n"); );
    // Locals
    ::std::string __Vtemp_1;
    ::std::string __Vtemp_2;
    ::std::string __Vtemp_3;
    ::std::string __Vtemp_4;
    ::std::string __Vtemp_5;
    ::std::string __Vtemp_6;
    ::std::string __Vtemp_7;
    ::std::string __Vtemp_8;
    // Body
    ::IData/*31:0*/ __VrandBlock__21__DOT__i;
    __VrandBlock__21__DOT__i = 0;
    __VrandBlock__21__DOT__i = 0U;
    while ((__VrandBlock__21__DOT__i < this->__PVT__in_use.size())) {
        VL_SFORMAT_NX(__Vtemp_1,"#x%x",1, '#',64,VL_NULL_CHECK(this->__PVT__in_use.at(__VrandBlock__21__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem_mam.svh", 496)
                      ->__PVT__Xend_offsetX);
        VL_SFORMAT_NX(__Vtemp_2,"#x%x",1, '#',64,(::QData)((::IData)(this->__PVT__len)));
        VL_SFORMAT_NX(__Vtemp_3,"(bvadd start_offset %s)",1
                      , 'S',&(__Vtemp_2));
        VL_SFORMAT_NX(__Vtemp_4,"(bvsub %s #x0000000000000001)",1
                      , 'S',&(__Vtemp_3));
        VL_SFORMAT_NX(__Vtemp_5,"#x%x",1, '#',64,VL_NULL_CHECK(this->__PVT__in_use.at(__VrandBlock__21__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem_mam.svh", 497)
                      ->__PVT__Xstart_offsetX);
        VL_SFORMAT_NX(__Vtemp_6,"(__Vbv (bvule start_offset %s))",1
                      , 'S',&(__Vtemp_1));
        VL_SFORMAT_NX(__Vtemp_7,"(__Vbv (bvuge %s %s))",2
                      , 'S',&(__Vtemp_4), 'S',&(__Vtemp_5));
        VL_SFORMAT_NX(__Vtemp_8,"(bvand %s %s)",2, 'S',&(__Vtemp_6)
                      , 'S',&(__Vtemp_7));
        Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (not (__Vbool %s)))",1
                                                                                , 'S',&(__Vtemp_8)) , "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_mem_mam.svh", 0x000001f0U, 
                                                                  "        !(start_offset <= in_use[i].Xend_offsetX &&");
        __VrandBlock__21__DOT__i = ((::IData)(1U) + __VrandBlock__21__DOT__i);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_uvm_mem_mam_policy_valid_setup_constraint(vlSymsp);
    this->__VnoInFunc_uvm_mem_mam_policy_no_overlap_setup_constraint(vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc___VupdateRandVars\n"); );
    // Body
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.update_var(this->__PVT__start_offset, 
                                                                    "start_offset");
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__len = 0;
    __PVT__start_offset = 0;
    __PVT__min_offset = 0;
    __PVT__max_offset = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::~Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy::~\n"); );
}
