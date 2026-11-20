// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_cfg::init(Vtb_top__Syms* __restrict vlSymsp, Vtb_top_mlp_pkg__03a__03amlp_coverage* __Vcg_parentp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_cfg::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT____Vcg_enclosingp = __Vcg_parentp;
    this->__PVT____Vcg_inst.attach(vlSymsp->_vm_contextp__->covergroupRegistryp()->newCovergroupInst("mlp_pkg::mlp_coverage::cg_cfg", false));
    this->__PVT____Vcg_inst.lendWeight(&this->__PVT__option
                                       .__PVT__weight, 
                                       VlFileLineDebug{"mlp_coverage.sv", 101});
    this->__PVT____Vcp_cp_addr = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_addr->init("mlp_pkg::mlp_coverage::cg_cfg.cp_addr", 1U, 0x00000017U);
    this->__PVT____Vcp_cp_addr->addArrayNamer(VlCovBinKind::KIND_NORMAL, 0x00000010U, 
                                              "weight", 
                                              "mlp_coverage.sv", 0x0000006aU, 0x0000000cU);
    this->__PVT____Vcp_cp_addr->addArrayNamer(VlCovBinKind::KIND_NORMAL, 4U, 
                                              "bias", 
                                              "mlp_coverage.sv", 0x0000006bU, 0x0000000cU);
    this->__PVT____Vcp_cp_addr->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                               "shift", 
                                               "mlp_coverage.sv", 0x0000006cU, 0x0000000cU);
    this->__PVT____Vcp_cp_addr->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                               "leak", 
                                               "mlp_coverage.sv", 0x0000006dU, 0x0000000cU);
    this->__PVT____Vcp_cp_addr->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                               "unused", 
                                               "mlp_coverage.sv", 0x0000006eU, 0x0000000cU);
    this->__PVT____Vcp_cp_busy = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_busy->init("mlp_pkg::mlp_coverage::cg_cfg.cp_busy", 1U, 2U);
    this->__PVT____Vcp_cp_busy->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                               "idle", 
                                               "mlp_coverage.sv", 0x00000070U, 0x0000002dU);
    this->__PVT____Vcp_cp_busy->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                               "busy", 
                                               "mlp_coverage.sv", 0x00000070U, 0x0000003eU);
    this->__PVT____Vcp_cp_applied = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_applied->init("mlp_pkg::mlp_coverage::cg_cfg.cp_applied", 1U, 2U);
    this->__PVT____Vcp_cp_applied->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                  "applied", 
                                                  "mlp_coverage.sv", 0x00000071U, 0x0000002dU);
    this->__PVT____Vcp_cp_applied->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                  "ignored", 
                                                  "mlp_coverage.sv", 0x00000071U, 0x00000041U);
    this->__PVT____Vcp_cp_with_in = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_with_in->init("mlp_pkg::mlp_coverage::cg_cfg.cp_with_in", 1U, 2U);
    this->__PVT____Vcp_cp_with_in->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                  "no_input", 
                                                  "mlp_coverage.sv", 0x00000072U, 0x0000002dU);
    this->__PVT____Vcp_cp_with_in->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                  "input_offered", 
                                                  "mlp_coverage.sv", 0x00000072U, 0x00000042U);
    this->__PVT____Vcp_cp_kind = this->__PVT____Vcg_inst.p()->addCoverpoint<5>();
    this->__PVT____Vcp_cp_kind->init("mlp_pkg::mlp_coverage::cg_cfg.cp_kind", 1U, 5U);
    this->__PVT____Vcp_cp_kind->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                               "weight", 
                                               "mlp_coverage.sv", 0x00000075U, 0x0000000cU);
    this->__PVT____Vcp_cp_kind->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                               "bias", 
                                               "mlp_coverage.sv", 0x00000076U, 0x0000000cU);
    this->__PVT____Vcp_cp_kind->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                               "shift", 
                                               "mlp_coverage.sv", 0x00000077U, 0x0000000cU);
    this->__PVT____Vcp_cp_kind->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                               "leak", 
                                               "mlp_coverage.sv", 0x00000078U, 0x0000000cU);
    this->__PVT____Vcp_cp_kind->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                               "unused", 
                                               "mlp_coverage.sv", 0x00000079U, 0x0000000cU);
    this->__PVT____Vcx_cx_kind_busy = this->__PVT____Vcg_inst.p()->addCross<2, 10, 0, 0, 0>();
    { VlCoverpoint* __Vcx_cps[] = {this->__PVT____Vcp_cp_kind, this->__PVT____Vcp_cp_busy}; this->__PVT____Vcx_cx_kind_busy->init(
                                                                                "mlp_pkg::mlp_coverage::cg_cfg.cx_kind_busy", 1U, 2U, 
                                                                                __Vcx_cps, 
                                                                                "mlp_coverage.sv", 0x0000007bU, 0x00000013U); }
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_cfg::__VnoInFunc_sample(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_cfg::__VnoInFunc_sample\n"); );
    // Body
    ::IData/*31:0*/ __VcpValue_cp_addr;
    __VcpValue_cp_addr = 0;
    __VcpValue_cp_addr = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 105)
        ->__PVT__v_addr;
    if ((VL_LTES_III(32, 0U, __VcpValue_cp_addr) & 
         VL_GTES_III(32, 0x0000000fU, __VcpValue_cp_addr))) {
        this->__PVT____Vcp_cp_addr->incrementBin(__VcpValue_cp_addr);
    }
    if ((VL_LTES_III(32, 0x00000010U, __VcpValue_cp_addr) 
         & VL_GTES_III(32, 0x00000013U, __VcpValue_cp_addr))) {
        this->__PVT____Vcp_cp_addr->incrementBin(((::IData)(0x00000010U) 
                                                  + 
                                                  (__VcpValue_cp_addr 
                                                   - (::IData)(0x00000010U))));
    }
    if ((0x00000014U == __VcpValue_cp_addr)) {
        this->__PVT____Vcp_cp_addr->incrementBin(0x00000014U);
    }
    if ((0x00000015U == __VcpValue_cp_addr)) {
        this->__PVT____Vcp_cp_addr->incrementBin(0x00000015U);
    }
    if ((VL_LTES_III(32, 0x00000016U, __VcpValue_cp_addr) 
         & VL_GTES_III(32, 0x0000001fU, __VcpValue_cp_addr))) {
        this->__PVT____Vcp_cp_addr->incrementBin(0x00000016U);
    }
    ::CData/*0:0*/ __VcpValue_cp_busy;
    __VcpValue_cp_busy = 0;
    __VcpValue_cp_busy = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 112)
        ->__PVT__v_busy;
    this->__PVT____Vcp_cp_busy->clearHitList();
    if ((1U & (~ (::IData)(__VcpValue_cp_busy)))) {
        this->__PVT____Vcp_cp_busy->incrementBin(0U);
    }
    if (__VcpValue_cp_busy) {
        this->__PVT____Vcp_cp_busy->incrementBin(1U);
    }
    ::CData/*0:0*/ __VcpValue_cp_applied;
    __VcpValue_cp_applied = 0;
    __VcpValue_cp_applied = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 113)
        ->__PVT__v_applied;
    if (__VcpValue_cp_applied) {
        this->__PVT____Vcp_cp_applied->incrementBin(0U);
    }
    if ((1U & (~ (::IData)(__VcpValue_cp_applied)))) {
        this->__PVT____Vcp_cp_applied->incrementBin(1U);
    }
    ::CData/*0:0*/ __VcpValue_cp_with_in;
    __VcpValue_cp_with_in = 0;
    __VcpValue_cp_with_in = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 114)
        ->__PVT__v_with_in;
    if ((1U & (~ (::IData)(__VcpValue_cp_with_in)))) {
        this->__PVT____Vcp_cp_with_in->incrementBin(0U);
    }
    if (__VcpValue_cp_with_in) {
        this->__PVT____Vcp_cp_with_in->incrementBin(1U);
    }
    ::IData/*31:0*/ __VcpValue_cp_kind;
    __VcpValue_cp_kind = 0;
    __VcpValue_cp_kind = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 116)
        ->__PVT__v_addr;
    this->__PVT____Vcp_cp_kind->clearHitList();
    if ((VL_LTES_III(32, 0U, __VcpValue_cp_kind) & 
         VL_GTES_III(32, 0x0000000fU, __VcpValue_cp_kind))) {
        this->__PVT____Vcp_cp_kind->incrementBin(0U);
    }
    if ((VL_LTES_III(32, 0x00000010U, __VcpValue_cp_kind) 
         & VL_GTES_III(32, 0x00000013U, __VcpValue_cp_kind))) {
        this->__PVT____Vcp_cp_kind->incrementBin(1U);
    }
    if ((0x00000014U == __VcpValue_cp_kind)) {
        this->__PVT____Vcp_cp_kind->incrementBin(2U);
    }
    if ((0x00000015U == __VcpValue_cp_kind)) {
        this->__PVT____Vcp_cp_kind->incrementBin(3U);
    }
    if ((VL_LTES_III(32, 0x00000016U, __VcpValue_cp_kind) 
         & VL_GTES_III(32, 0x0000001fU, __VcpValue_cp_kind))) {
        this->__PVT____Vcp_cp_kind->incrementBin(4U);
    }
    this->__PVT____Vcx_cx_kind_busy->sample();
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_cfg::__VnoInFunc_get_inst_coverage(Vtb_top__Syms* __restrict vlSymsp, ::std::string covered_bins, ::std::string total_bins, double &get_inst_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_cfg::__VnoInFunc_get_inst_coverage\n"); );
    // Body
    get_inst_coverage__Vfuncrtn = this->__PVT____Vcg_inst.p()->coverage();
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_cfg::__VnoInFunc_get_inst_coverage__Vtcwrap_1_2(Vtb_top__Syms* __restrict vlSymsp, double &get_inst_coverage__Vtcwrap_1_2__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_cfg::__VnoInFunc_get_inst_coverage__Vtcwrap_1_2\n"); );
    // Body
    ::std::string covered_bins;
    covered_bins = VL_CVT_PACK_STR_NI(vlSymsp->vlInst.TOP__mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_cfg__Vclpkg.__PVT____Vint);
    ::std::string total_bins;
    total_bins = VL_CVT_PACK_STR_NI(vlSymsp->vlInst.TOP__mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_cfg__Vclpkg.__PVT____Vint);
    this->__VnoInFunc_get_inst_coverage(vlSymsp, covered_bins, total_bins, get_inst_coverage__Vtcwrap_1_2__Vfuncrtn);
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_cfg::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_cfg::_ctor_var_reset\n"); );
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
