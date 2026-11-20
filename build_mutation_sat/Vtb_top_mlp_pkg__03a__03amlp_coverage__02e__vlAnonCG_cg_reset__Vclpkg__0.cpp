// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_reset::init(Vtb_top__Syms* __restrict vlSymsp, Vtb_top_mlp_pkg__03a__03amlp_coverage* __Vcg_parentp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_reset::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT____Vcg_enclosingp = __Vcg_parentp;
    this->__PVT____Vcg_inst.attach(vlSymsp->_vm_contextp__->covergroupRegistryp()->newCovergroupInst("mlp_pkg::mlp_coverage::cg_reset", false));
    this->__PVT____Vcg_inst.lendWeight(&this->__PVT__option
                                       .__PVT__weight, 
                                       VlFileLineDebug{"mlp_coverage.sv", 126});
    this->__PVT____Vcp_cp_stage = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_stage->init("mlp_pkg::mlp_coverage::cg_reset.cp_stage", 1U, 4U);
    this->__PVT____Vcp_cp_stage->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                "idle", 
                                                "mlp_coverage.sv", 0x00000082U, 0x0000002dU);
    this->__PVT____Vcp_cp_stage->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                "stage1", 
                                                "mlp_coverage.sv", 0x00000082U, 0x00000042U);
    this->__PVT____Vcp_cp_stage->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                "outreg", 
                                                "mlp_coverage.sv", 0x00000082U, 0x00000059U);
    this->__PVT____Vcp_cp_stage->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                "both", 
                                                "mlp_coverage.sv", 0x00000082U, 0x00000070U);
    this->__PVT____Vcp_cp_stalled = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_stalled->init("mlp_pkg::mlp_coverage::cg_reset.cp_stalled", 1U, 2U);
    this->__PVT____Vcp_cp_stalled->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                  "free", 
                                                  "mlp_coverage.sv", 0x00000083U, 0x0000002dU);
    this->__PVT____Vcp_cp_stalled->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                  "stalled", 
                                                  "mlp_coverage.sv", 0x00000083U, 0x0000003eU);
    this->__PVT____Vcp_cp_aborted = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_aborted->init("mlp_pkg::mlp_coverage::cg_reset.cp_aborted", 1U, 3U);
    this->__PVT____Vcp_cp_aborted->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                  "none", 
                                                  "mlp_coverage.sv", 0x00000084U, 0x0000002dU);
    this->__PVT____Vcp_cp_aborted->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                  "one", 
                                                  "mlp_coverage.sv", 0x00000084U, 0x0000003eU);
    this->__PVT____Vcp_cp_aborted->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                  "several", 
                                                  "mlp_coverage.sv", 0x00000084U, 0x0000004eU);
    this->__PVT____Vcx_cx_stage_stall = this->__PVT____Vcg_inst.p()->addCross<2, 8, 1, 6, 1>();
    { VlCoverpoint* __Vcx_cps[] = {this->__PVT____Vcp_cp_stage, this->__PVT____Vcp_cp_stalled}; this->__PVT____Vcx_cx_stage_stall->init(
                                                                                "mlp_pkg::mlp_coverage::cg_reset.cx_stage_stall", 1U, 2U, 
                                                                                __Vcx_cps, 
                                                                                "mlp_coverage.sv", 0x00000085U, 0x00000015U); }
    this->__PVT____Vcx_cx_stage_stall->addBin(VlCovBinKind::KIND_IGNORE, 
                                              {10ULL}, 
                                              "no_stall_possible", 
                                              "mlp_coverage.sv", 0x00000086U, 7U);
    this->__PVT____Vcx_cx_stage_stall->finalizeBins();
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_reset::__VnoInFunc_sample(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_reset::__VnoInFunc_sample\n"); );
    // Body
    ::CData/*1:0*/ __VcpValue_cp_stage;
    __VcpValue_cp_stage = 0;
    __VcpValue_cp_stage = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 130)
        ->__PVT__v_stage;
    this->__PVT____Vcp_cp_stage->clearHitList();
    if ((0U == (::IData)(__VcpValue_cp_stage))) {
        this->__PVT____Vcp_cp_stage->incrementBin(0U);
    }
    if ((2U == (::IData)(__VcpValue_cp_stage))) {
        this->__PVT____Vcp_cp_stage->incrementBin(1U);
    }
    if ((1U == (::IData)(__VcpValue_cp_stage))) {
        this->__PVT____Vcp_cp_stage->incrementBin(2U);
    }
    if ((3U == (::IData)(__VcpValue_cp_stage))) {
        this->__PVT____Vcp_cp_stage->incrementBin(3U);
    }
    ::CData/*0:0*/ __VcpValue_cp_stalled;
    __VcpValue_cp_stalled = 0;
    __VcpValue_cp_stalled = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 131)
        ->__PVT__v_stalled;
    this->__PVT____Vcp_cp_stalled->clearHitList();
    if ((1U & (~ (::IData)(__VcpValue_cp_stalled)))) {
        this->__PVT____Vcp_cp_stalled->incrementBin(0U);
    }
    if (__VcpValue_cp_stalled) {
        this->__PVT____Vcp_cp_stalled->incrementBin(1U);
    }
    ::IData/*31:0*/ __VcpValue_cp_aborted;
    __VcpValue_cp_aborted = 0;
    __VcpValue_cp_aborted = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 132)
        ->__PVT__v_aborted;
    if ((0U == __VcpValue_cp_aborted)) {
        this->__PVT____Vcp_cp_aborted->incrementBin(0U);
    }
    if ((1U == __VcpValue_cp_aborted)) {
        this->__PVT____Vcp_cp_aborted->incrementBin(1U);
    }
    if (VL_LTES_III(32, 2U, __VcpValue_cp_aborted)) {
        this->__PVT____Vcp_cp_aborted->incrementBin(2U);
    }
    this->__PVT____Vcx_cx_stage_stall->sample();
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_reset::__VnoInFunc_get_inst_coverage(Vtb_top__Syms* __restrict vlSymsp, ::std::string covered_bins, ::std::string total_bins, double &get_inst_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_reset::__VnoInFunc_get_inst_coverage\n"); );
    // Body
    get_inst_coverage__Vfuncrtn = this->__PVT____Vcg_inst.p()->coverage();
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_reset::__VnoInFunc_get_inst_coverage__Vtcwrap_1_2(Vtb_top__Syms* __restrict vlSymsp, double &get_inst_coverage__Vtcwrap_1_2__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_reset::__VnoInFunc_get_inst_coverage__Vtcwrap_1_2\n"); );
    // Body
    ::std::string covered_bins;
    covered_bins = VL_CVT_PACK_STR_NI(vlSymsp->vlInst.TOP__mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_reset__Vclpkg.__PVT____Vint);
    ::std::string total_bins;
    total_bins = VL_CVT_PACK_STR_NI(vlSymsp->vlInst.TOP__mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_reset__Vclpkg.__PVT____Vint);
    this->__VnoInFunc_get_inst_coverage(vlSymsp, covered_bins, total_bins, get_inst_coverage__Vtcwrap_1_2__Vfuncrtn);
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_reset::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_reset::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__option.__PVT__weight = 1U;
    ;
    __PVT__option.__PVT__goal = 0;
    __PVT__option.__PVT__at_least = 0;
    __PVT__option.__PVT__auto_bin_max = 0;
    __PVT__option.__PVT__cross_num_print_missing = 0;
    __PVT__option.__PVT__cross_retain_auto_bins = 0;
    __PVT__option.__PVT__detect_overlap = 0;
    __PVT__option.__PVT__per_instance = 0;
    __PVT__option.__PVT__get_inst_coverage = 0;
    __PVT____Vcg_enclosingp = nullptr;
}
