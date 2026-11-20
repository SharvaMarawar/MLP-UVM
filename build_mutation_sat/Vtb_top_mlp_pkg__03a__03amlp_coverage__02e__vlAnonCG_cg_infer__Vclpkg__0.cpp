// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer::init(Vtb_top__Syms* __restrict vlSymsp, Vtb_top_mlp_pkg__03a__03amlp_coverage* __Vcg_parentp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT____Vcg_enclosingp = __Vcg_parentp;
    this->__PVT____Vcg_inst.attach(vlSymsp->_vm_contextp__->covergroupRegistryp()->newCovergroupInst("mlp_pkg::mlp_coverage::cg_infer", false));
    this->__PVT____Vcg_inst.lendWeight(&this->__PVT__option
                                       .__PVT__weight, 
                                       VlFileLineDebug{"mlp_coverage.sv", 76});
    this->__PVT____Vcp_cp_x0 = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_x0->init("mlp_pkg::mlp_coverage::cg_infer.cp_x0", 1U, 5U);
    this->__PVT____Vcp_cp_x0->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "min", 
                                             "mlp_coverage.sv", 0x00000050U, 0x00000023U);
    this->__PVT____Vcp_cp_x0->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "neg", 
                                             "mlp_coverage.sv", 0x00000050U, 0x00000036U);
    this->__PVT____Vcp_cp_x0->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "zero", 
                                             "mlp_coverage.sv", 0x00000050U, 0x0000004eU);
    this->__PVT____Vcp_cp_x0->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "pos", 
                                             "mlp_coverage.sv", 0x00000050U, 0x0000005fU);
    this->__PVT____Vcp_cp_x0->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "max", 
                                             "mlp_coverage.sv", 0x00000050U, 0x00000075U);
    this->__PVT____Vcp_cp_x1 = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_x1->init("mlp_pkg::mlp_coverage::cg_infer.cp_x1", 1U, 5U);
    this->__PVT____Vcp_cp_x1->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "min", 
                                             "mlp_coverage.sv", 0x00000051U, 0x00000023U);
    this->__PVT____Vcp_cp_x1->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "neg", 
                                             "mlp_coverage.sv", 0x00000051U, 0x00000036U);
    this->__PVT____Vcp_cp_x1->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "zero", 
                                             "mlp_coverage.sv", 0x00000051U, 0x0000004eU);
    this->__PVT____Vcp_cp_x1->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "pos", 
                                             "mlp_coverage.sv", 0x00000051U, 0x0000005fU);
    this->__PVT____Vcp_cp_x1->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "max", 
                                             "mlp_coverage.sv", 0x00000051U, 0x00000075U);
    this->__PVT____Vcp_cp_x2 = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_x2->init("mlp_pkg::mlp_coverage::cg_infer.cp_x2", 1U, 5U);
    this->__PVT____Vcp_cp_x2->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "min", 
                                             "mlp_coverage.sv", 0x00000052U, 0x00000023U);
    this->__PVT____Vcp_cp_x2->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "neg", 
                                             "mlp_coverage.sv", 0x00000052U, 0x00000036U);
    this->__PVT____Vcp_cp_x2->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "zero", 
                                             "mlp_coverage.sv", 0x00000052U, 0x0000004eU);
    this->__PVT____Vcp_cp_x2->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "pos", 
                                             "mlp_coverage.sv", 0x00000052U, 0x0000005fU);
    this->__PVT____Vcp_cp_x2->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "max", 
                                             "mlp_coverage.sv", 0x00000052U, 0x00000075U);
    this->__PVT____Vcp_cp_x3 = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_x3->init("mlp_pkg::mlp_coverage::cg_infer.cp_x3", 1U, 5U);
    this->__PVT____Vcp_cp_x3->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "min", 
                                             "mlp_coverage.sv", 0x00000053U, 0x00000023U);
    this->__PVT____Vcp_cp_x3->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "neg", 
                                             "mlp_coverage.sv", 0x00000053U, 0x00000036U);
    this->__PVT____Vcp_cp_x3->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "zero", 
                                             "mlp_coverage.sv", 0x00000053U, 0x0000004eU);
    this->__PVT____Vcp_cp_x3->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "pos", 
                                             "mlp_coverage.sv", 0x00000053U, 0x0000005fU);
    this->__PVT____Vcp_cp_x3->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "max", 
                                             "mlp_coverage.sv", 0x00000053U, 0x00000075U);
    this->__PVT____Vcp_cp_y0 = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_y0->init("mlp_pkg::mlp_coverage::cg_infer.cp_y0", 1U, 5U);
    this->__PVT____Vcp_cp_y0->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "sat_lo", 
                                             "mlp_coverage.sv", 0x00000055U, 0x00000023U);
    this->__PVT____Vcp_cp_y0->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "neg", 
                                             "mlp_coverage.sv", 0x00000055U, 0x00000036U);
    this->__PVT____Vcp_cp_y0->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "zero", 
                                             "mlp_coverage.sv", 0x00000055U, 0x00000046U);
    this->__PVT____Vcp_cp_y0->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "pos", 
                                             "mlp_coverage.sv", 0x00000055U, 0x00000057U);
    this->__PVT____Vcp_cp_y0->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "sat_hi", 
                                             "mlp_coverage.sv", 0x00000055U, 0x00000067U);
    this->__PVT____Vcp_cp_y1 = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_y1->init("mlp_pkg::mlp_coverage::cg_infer.cp_y1", 1U, 5U);
    this->__PVT____Vcp_cp_y1->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "sat_lo", 
                                             "mlp_coverage.sv", 0x00000056U, 0x00000023U);
    this->__PVT____Vcp_cp_y1->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "neg", 
                                             "mlp_coverage.sv", 0x00000056U, 0x00000036U);
    this->__PVT____Vcp_cp_y1->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "zero", 
                                             "mlp_coverage.sv", 0x00000056U, 0x00000046U);
    this->__PVT____Vcp_cp_y1->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "pos", 
                                             "mlp_coverage.sv", 0x00000056U, 0x00000057U);
    this->__PVT____Vcp_cp_y1->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "sat_hi", 
                                             "mlp_coverage.sv", 0x00000056U, 0x00000067U);
    this->__PVT____Vcp_cp_y2 = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_y2->init("mlp_pkg::mlp_coverage::cg_infer.cp_y2", 1U, 5U);
    this->__PVT____Vcp_cp_y2->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "sat_lo", 
                                             "mlp_coverage.sv", 0x00000057U, 0x00000023U);
    this->__PVT____Vcp_cp_y2->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "neg", 
                                             "mlp_coverage.sv", 0x00000057U, 0x00000036U);
    this->__PVT____Vcp_cp_y2->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "zero", 
                                             "mlp_coverage.sv", 0x00000057U, 0x00000046U);
    this->__PVT____Vcp_cp_y2->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "pos", 
                                             "mlp_coverage.sv", 0x00000057U, 0x00000057U);
    this->__PVT____Vcp_cp_y2->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "sat_hi", 
                                             "mlp_coverage.sv", 0x00000057U, 0x00000067U);
    this->__PVT____Vcp_cp_y3 = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_y3->init("mlp_pkg::mlp_coverage::cg_infer.cp_y3", 1U, 5U);
    this->__PVT____Vcp_cp_y3->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "sat_lo", 
                                             "mlp_coverage.sv", 0x00000058U, 0x00000023U);
    this->__PVT____Vcp_cp_y3->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "neg", 
                                             "mlp_coverage.sv", 0x00000058U, 0x00000036U);
    this->__PVT____Vcp_cp_y3->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "zero", 
                                             "mlp_coverage.sv", 0x00000058U, 0x00000046U);
    this->__PVT____Vcp_cp_y3->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "pos", 
                                             "mlp_coverage.sv", 0x00000058U, 0x00000057U);
    this->__PVT____Vcp_cp_y3->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                             "sat_hi", 
                                             "mlp_coverage.sv", 0x00000058U, 0x00000067U);
    this->__PVT____Vcp_cp_shift = this->__PVT____Vcg_inst.p()->addCoverpoint<5>();
    this->__PVT____Vcp_cp_shift->init("mlp_pkg::mlp_coverage::cg_infer.cp_shift", 1U, 5U);
    this->__PVT____Vcp_cp_shift->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                "s0", 
                                                "mlp_coverage.sv", 0x0000005aU, 0x00000029U);
    this->__PVT____Vcp_cp_shift->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                "s1", 
                                                "mlp_coverage.sv", 0x0000005aU, 0x00000038U);
    this->__PVT____Vcp_cp_shift->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                "s2", 
                                                "mlp_coverage.sv", 0x0000005aU, 0x00000047U);
    this->__PVT____Vcp_cp_shift->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                "s3_7", 
                                                "mlp_coverage.sv", 0x0000005aU, 0x00000056U);
    this->__PVT____Vcp_cp_shift->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                "s8_15", 
                                                "mlp_coverage.sv", 0x0000005aU, 0x0000006bU);
    this->__PVT____Vcp_cp_leak = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_leak->init("mlp_pkg::mlp_coverage::cg_infer.cp_leak", 1U, 8U);
    this->__PVT____Vcp_cp_leak->addArrayNamer(VlCovBinKind::KIND_NORMAL, 8U, 
                                              "l", 
                                              "mlp_coverage.sv", 0x0000005bU, 0x00000029U);
    this->__PVT____Vcp_cp_class = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_class->init("mlp_pkg::mlp_coverage::cg_infer.cp_class", 1U, 3U);
    this->__PVT____Vcp_cp_class->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                "setosa", 
                                                "mlp_coverage.sv", 0x0000005eU, 0x0000003aU);
    this->__PVT____Vcp_cp_class->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                "versicolor", 
                                                "mlp_coverage.sv", 0x0000005eU, 0x0000004dU);
    this->__PVT____Vcp_cp_class->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                "virginica", 
                                                "mlp_coverage.sv", 0x0000005eU, 0x00000064U);
    this->__PVT____Vcp_cp_correct = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_correct->init("mlp_pkg::mlp_coverage::cg_infer.cp_correct", 1U, 2U);
    this->__PVT____Vcp_cp_correct->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                  "right", 
                                                  "mlp_coverage.sv", 0x0000005fU, 0x0000003aU);
    this->__PVT____Vcp_cp_correct->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                  "wrong", 
                                                  "mlp_coverage.sv", 0x0000005fU, 0x0000004cU);
    this->__PVT____Vcp_cp_in_wait = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_in_wait->init("mlp_pkg::mlp_coverage::cg_infer.cp_in_wait", 1U, 4U);
    this->__PVT____Vcp_cp_in_wait->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                  "none", 
                                                  "mlp_coverage.sv", 0x00000061U, 0x0000002fU);
    this->__PVT____Vcp_cp_in_wait->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                  "one", 
                                                  "mlp_coverage.sv", 0x00000061U, 0x00000040U);
    this->__PVT____Vcp_cp_in_wait->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                  "few", 
                                                  "mlp_coverage.sv", 0x00000061U, 0x00000050U);
    this->__PVT____Vcp_cp_in_wait->addSingleNamer(VlCovBinKind::KIND_NORMAL, 
                                                  "many", 
                                                  "mlp_coverage.sv", 0x00000061U, 0x00000064U);
    this->__PVT____Vcp_cp_out_wait = this->__PVT____Vcg_inst.p()->addCoverpoint<1>();
    this->__PVT____Vcp_cp_out_wait->init("mlp_pkg::mlp_coverage::cg_infer.cp_out_wait", 1U, 4U);
    this->__PVT____Vcp_cp_out_wait->addSingleNamer(
                                                   VlCovBinKind::KIND_NORMAL, 
                                                   "none", 
                                                   "mlp_coverage.sv", 0x00000062U, 0x0000002fU);
    this->__PVT____Vcp_cp_out_wait->addSingleNamer(
                                                   VlCovBinKind::KIND_NORMAL, 
                                                   "one", 
                                                   "mlp_coverage.sv", 0x00000062U, 0x00000040U);
    this->__PVT____Vcp_cp_out_wait->addSingleNamer(
                                                   VlCovBinKind::KIND_NORMAL, 
                                                   "few", 
                                                   "mlp_coverage.sv", 0x00000062U, 0x00000050U);
    this->__PVT____Vcp_cp_out_wait->addSingleNamer(
                                                   VlCovBinKind::KIND_NORMAL, 
                                                   "many", 
                                                   "mlp_coverage.sv", 0x00000062U, 0x00000064U);
    this->__PVT____Vcx_cx_shift_leak = this->__PVT____Vcg_inst.p()->addCross<2, 40, 0, 0, 0>();
    { VlCoverpoint* __Vcx_cps[] = {this->__PVT____Vcp_cp_shift, this->__PVT____Vcp_cp_leak}; this->__PVT____Vcx_cx_shift_leak->init(
                                                                                "mlp_pkg::mlp_coverage::cg_infer.cx_shift_leak", 1U, 2U, 
                                                                                __Vcx_cps, 
                                                                                "mlp_coverage.sv", 0x0000005cU, 0x00000014U); }
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer::__VnoInFunc_sample(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer::__VnoInFunc_sample\n"); );
    // Body
    ::IData/*31:0*/ __VcpValue_cp_x0;
    __VcpValue_cp_x0 = 0;
    __VcpValue_cp_x0 = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 80)
        ->__PVT__v_x0;
    if ((0xffffff80U == __VcpValue_cp_x0)) {
        this->__PVT____Vcp_cp_x0->incrementBin(0U);
    }
    if ((VL_LTES_III(32, 0xffffff81U, __VcpValue_cp_x0) 
         & VL_GTES_III(32, 0xffffffffU, __VcpValue_cp_x0))) {
        this->__PVT____Vcp_cp_x0->incrementBin(1U);
    }
    if ((0U == __VcpValue_cp_x0)) {
        this->__PVT____Vcp_cp_x0->incrementBin(2U);
    }
    if ((VL_LTES_III(32, 1U, __VcpValue_cp_x0) & VL_GTES_III(32, 0x0000007eU, __VcpValue_cp_x0))) {
        this->__PVT____Vcp_cp_x0->incrementBin(3U);
    }
    if ((0x0000007fU == __VcpValue_cp_x0)) {
        this->__PVT____Vcp_cp_x0->incrementBin(4U);
    }
    ::IData/*31:0*/ __VcpValue_cp_x1;
    __VcpValue_cp_x1 = 0;
    __VcpValue_cp_x1 = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 81)
        ->__PVT__v_x1;
    if ((0xffffff80U == __VcpValue_cp_x1)) {
        this->__PVT____Vcp_cp_x1->incrementBin(0U);
    }
    if ((VL_LTES_III(32, 0xffffff81U, __VcpValue_cp_x1) 
         & VL_GTES_III(32, 0xffffffffU, __VcpValue_cp_x1))) {
        this->__PVT____Vcp_cp_x1->incrementBin(1U);
    }
    if ((0U == __VcpValue_cp_x1)) {
        this->__PVT____Vcp_cp_x1->incrementBin(2U);
    }
    if ((VL_LTES_III(32, 1U, __VcpValue_cp_x1) & VL_GTES_III(32, 0x0000007eU, __VcpValue_cp_x1))) {
        this->__PVT____Vcp_cp_x1->incrementBin(3U);
    }
    if ((0x0000007fU == __VcpValue_cp_x1)) {
        this->__PVT____Vcp_cp_x1->incrementBin(4U);
    }
    ::IData/*31:0*/ __VcpValue_cp_x2;
    __VcpValue_cp_x2 = 0;
    __VcpValue_cp_x2 = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 82)
        ->__PVT__v_x2;
    if ((0xffffff80U == __VcpValue_cp_x2)) {
        this->__PVT____Vcp_cp_x2->incrementBin(0U);
    }
    if ((VL_LTES_III(32, 0xffffff81U, __VcpValue_cp_x2) 
         & VL_GTES_III(32, 0xffffffffU, __VcpValue_cp_x2))) {
        this->__PVT____Vcp_cp_x2->incrementBin(1U);
    }
    if ((0U == __VcpValue_cp_x2)) {
        this->__PVT____Vcp_cp_x2->incrementBin(2U);
    }
    if ((VL_LTES_III(32, 1U, __VcpValue_cp_x2) & VL_GTES_III(32, 0x0000007eU, __VcpValue_cp_x2))) {
        this->__PVT____Vcp_cp_x2->incrementBin(3U);
    }
    if ((0x0000007fU == __VcpValue_cp_x2)) {
        this->__PVT____Vcp_cp_x2->incrementBin(4U);
    }
    ::IData/*31:0*/ __VcpValue_cp_x3;
    __VcpValue_cp_x3 = 0;
    __VcpValue_cp_x3 = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 83)
        ->__PVT__v_x3;
    if ((0xffffff80U == __VcpValue_cp_x3)) {
        this->__PVT____Vcp_cp_x3->incrementBin(0U);
    }
    if ((VL_LTES_III(32, 0xffffff81U, __VcpValue_cp_x3) 
         & VL_GTES_III(32, 0xffffffffU, __VcpValue_cp_x3))) {
        this->__PVT____Vcp_cp_x3->incrementBin(1U);
    }
    if ((0U == __VcpValue_cp_x3)) {
        this->__PVT____Vcp_cp_x3->incrementBin(2U);
    }
    if ((VL_LTES_III(32, 1U, __VcpValue_cp_x3) & VL_GTES_III(32, 0x0000007eU, __VcpValue_cp_x3))) {
        this->__PVT____Vcp_cp_x3->incrementBin(3U);
    }
    if ((0x0000007fU == __VcpValue_cp_x3)) {
        this->__PVT____Vcp_cp_x3->incrementBin(4U);
    }
    ::IData/*31:0*/ __VcpValue_cp_y0;
    __VcpValue_cp_y0 = 0;
    __VcpValue_cp_y0 = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 85)
        ->__PVT__v_o0;
    if ((0U == __VcpValue_cp_y0)) {
        this->__PVT____Vcp_cp_y0->incrementBin(0U);
    }
    if ((1U == __VcpValue_cp_y0)) {
        this->__PVT____Vcp_cp_y0->incrementBin(1U);
    }
    if ((2U == __VcpValue_cp_y0)) {
        this->__PVT____Vcp_cp_y0->incrementBin(2U);
    }
    if ((3U == __VcpValue_cp_y0)) {
        this->__PVT____Vcp_cp_y0->incrementBin(3U);
    }
    if ((4U == __VcpValue_cp_y0)) {
        this->__PVT____Vcp_cp_y0->incrementBin(4U);
    }
    ::IData/*31:0*/ __VcpValue_cp_y1;
    __VcpValue_cp_y1 = 0;
    __VcpValue_cp_y1 = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 86)
        ->__PVT__v_o1;
    if ((0U == __VcpValue_cp_y1)) {
        this->__PVT____Vcp_cp_y1->incrementBin(0U);
    }
    if ((1U == __VcpValue_cp_y1)) {
        this->__PVT____Vcp_cp_y1->incrementBin(1U);
    }
    if ((2U == __VcpValue_cp_y1)) {
        this->__PVT____Vcp_cp_y1->incrementBin(2U);
    }
    if ((3U == __VcpValue_cp_y1)) {
        this->__PVT____Vcp_cp_y1->incrementBin(3U);
    }
    if ((4U == __VcpValue_cp_y1)) {
        this->__PVT____Vcp_cp_y1->incrementBin(4U);
    }
    ::IData/*31:0*/ __VcpValue_cp_y2;
    __VcpValue_cp_y2 = 0;
    __VcpValue_cp_y2 = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 87)
        ->__PVT__v_o2;
    if ((0U == __VcpValue_cp_y2)) {
        this->__PVT____Vcp_cp_y2->incrementBin(0U);
    }
    if ((1U == __VcpValue_cp_y2)) {
        this->__PVT____Vcp_cp_y2->incrementBin(1U);
    }
    if ((2U == __VcpValue_cp_y2)) {
        this->__PVT____Vcp_cp_y2->incrementBin(2U);
    }
    if ((3U == __VcpValue_cp_y2)) {
        this->__PVT____Vcp_cp_y2->incrementBin(3U);
    }
    if ((4U == __VcpValue_cp_y2)) {
        this->__PVT____Vcp_cp_y2->incrementBin(4U);
    }
    ::IData/*31:0*/ __VcpValue_cp_y3;
    __VcpValue_cp_y3 = 0;
    __VcpValue_cp_y3 = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 88)
        ->__PVT__v_o3;
    if ((0U == __VcpValue_cp_y3)) {
        this->__PVT____Vcp_cp_y3->incrementBin(0U);
    }
    if ((1U == __VcpValue_cp_y3)) {
        this->__PVT____Vcp_cp_y3->incrementBin(1U);
    }
    if ((2U == __VcpValue_cp_y3)) {
        this->__PVT____Vcp_cp_y3->incrementBin(2U);
    }
    if ((3U == __VcpValue_cp_y3)) {
        this->__PVT____Vcp_cp_y3->incrementBin(3U);
    }
    if ((4U == __VcpValue_cp_y3)) {
        this->__PVT____Vcp_cp_y3->incrementBin(4U);
    }
    ::IData/*31:0*/ __VcpValue_cp_shift;
    __VcpValue_cp_shift = 0;
    __VcpValue_cp_shift = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 90)
        ->__PVT__v_shift;
    this->__PVT____Vcp_cp_shift->clearHitList();
    if ((0U == __VcpValue_cp_shift)) {
        this->__PVT____Vcp_cp_shift->incrementBin(0U);
    }
    if ((1U == __VcpValue_cp_shift)) {
        this->__PVT____Vcp_cp_shift->incrementBin(1U);
    }
    if ((2U == __VcpValue_cp_shift)) {
        this->__PVT____Vcp_cp_shift->incrementBin(2U);
    }
    if ((VL_LTES_III(32, 3U, __VcpValue_cp_shift) & 
         VL_GTES_III(32, 7U, __VcpValue_cp_shift))) {
        this->__PVT____Vcp_cp_shift->incrementBin(3U);
    }
    if ((VL_LTES_III(32, 8U, __VcpValue_cp_shift) & 
         VL_GTES_III(32, 0x0000000fU, __VcpValue_cp_shift))) {
        this->__PVT____Vcp_cp_shift->incrementBin(4U);
    }
    ::IData/*31:0*/ __VcpValue_cp_leak;
    __VcpValue_cp_leak = 0;
    __VcpValue_cp_leak = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 91)
        ->__PVT__v_leak;
    this->__PVT____Vcp_cp_leak->clearHitList();
    if ((VL_LTES_III(32, 0U, __VcpValue_cp_leak) & 
         VL_GTES_III(32, 7U, __VcpValue_cp_leak))) {
        this->__PVT____Vcp_cp_leak->incrementBin(__VcpValue_cp_leak);
    }
    ::IData/*31:0*/ __VcpValue_cp_class;
    __VcpValue_cp_class = 0;
    if (VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 94)
        ->__PVT__v_iris) {
        __VcpValue_cp_class = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 94)
            ->__PVT__v_class;
        if ((0U == __VcpValue_cp_class)) {
            this->__PVT____Vcp_cp_class->incrementBin(0U);
        }
        if ((1U == __VcpValue_cp_class)) {
            this->__PVT____Vcp_cp_class->incrementBin(1U);
        }
        if ((2U == __VcpValue_cp_class)) {
            this->__PVT____Vcp_cp_class->incrementBin(2U);
        }
    }
    ::CData/*0:0*/ __VcpValue_cp_correct;
    __VcpValue_cp_correct = 0;
    if (VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 95)
        ->__PVT__v_iris) {
        __VcpValue_cp_correct = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 95)
            ->__PVT__v_correct;
        if (__VcpValue_cp_correct) {
            this->__PVT____Vcp_cp_correct->incrementBin(0U);
        }
        if ((1U & (~ (::IData)(__VcpValue_cp_correct)))) {
            this->__PVT____Vcp_cp_correct->incrementBin(1U);
        }
    }
    ::IData/*31:0*/ __VcpValue_cp_in_wait;
    __VcpValue_cp_in_wait = 0;
    __VcpValue_cp_in_wait = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 97)
        ->__PVT__v_in_wait;
    if ((0U == __VcpValue_cp_in_wait)) {
        this->__PVT____Vcp_cp_in_wait->incrementBin(0U);
    }
    if ((1U == __VcpValue_cp_in_wait)) {
        this->__PVT____Vcp_cp_in_wait->incrementBin(1U);
    }
    if ((VL_LTES_III(32, 2U, __VcpValue_cp_in_wait) 
         & VL_GTES_III(32, 3U, __VcpValue_cp_in_wait))) {
        this->__PVT____Vcp_cp_in_wait->incrementBin(2U);
    }
    if (VL_LTES_III(32, 4U, __VcpValue_cp_in_wait)) {
        this->__PVT____Vcp_cp_in_wait->incrementBin(3U);
    }
    ::IData/*31:0*/ __VcpValue_cp_out_wait;
    __VcpValue_cp_out_wait = 0;
    __VcpValue_cp_out_wait = VL_NULL_CHECK(this->__PVT____Vcg_enclosingp, "mlp_coverage.sv", 98)
        ->__PVT__v_out_wait;
    if ((0U == __VcpValue_cp_out_wait)) {
        this->__PVT____Vcp_cp_out_wait->incrementBin(0U);
    }
    if ((1U == __VcpValue_cp_out_wait)) {
        this->__PVT____Vcp_cp_out_wait->incrementBin(1U);
    }
    if ((VL_LTES_III(32, 2U, __VcpValue_cp_out_wait) 
         & VL_GTES_III(32, 3U, __VcpValue_cp_out_wait))) {
        this->__PVT____Vcp_cp_out_wait->incrementBin(2U);
    }
    if (VL_LTES_III(32, 4U, __VcpValue_cp_out_wait)) {
        this->__PVT____Vcp_cp_out_wait->incrementBin(3U);
    }
    this->__PVT____Vcx_cx_shift_leak->sample();
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer::__VnoInFunc_get_inst_coverage(Vtb_top__Syms* __restrict vlSymsp, ::std::string covered_bins, ::std::string total_bins, double &get_inst_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer::__VnoInFunc_get_inst_coverage\n"); );
    // Body
    get_inst_coverage__Vfuncrtn = this->__PVT____Vcg_inst.p()->coverage();
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer::__VnoInFunc_get_inst_coverage__Vtcwrap_1_2(Vtb_top__Syms* __restrict vlSymsp, double &get_inst_coverage__Vtcwrap_1_2__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer::__VnoInFunc_get_inst_coverage__Vtcwrap_1_2\n"); );
    // Body
    ::std::string covered_bins;
    covered_bins = VL_CVT_PACK_STR_NI(vlSymsp->vlInst.TOP__mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer__Vclpkg.__PVT____Vint);
    ::std::string total_bins;
    total_bins = VL_CVT_PACK_STR_NI(vlSymsp->vlInst.TOP__mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer__Vclpkg.__PVT____Vint);
    this->__VnoInFunc_get_inst_coverage(vlSymsp, covered_bins, total_bins, get_inst_coverage__Vtcwrap_1_2__Vfuncrtn);
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer::_ctor_var_reset\n"); );
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
