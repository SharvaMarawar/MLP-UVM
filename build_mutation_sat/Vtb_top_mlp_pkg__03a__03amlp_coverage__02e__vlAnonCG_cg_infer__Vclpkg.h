// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_COVERAGE__02E__VLANONCG_CG_INFER__VCLPKG_H_
#define VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_COVERAGE__02E__VLANONCG_CG_INFER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_top_std.h"
class Vtb_top_mlp_pkg__03a__03amlp_coverage;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer__Vclpkg final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT____Vint;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            Vtb_top_vl_covergroup_type_options_t__struct__0 __PVT__type_option;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer__Vclpkg);
    VL_UNMOVABLE(Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer__Vclpkg);

    // INTERNAL METHODS
};


class Vtb_top__Syms;

class Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer : public virtual VlClass {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::VlCoverpointT<1>* __PVT____Vcp_cp_x0;
    ::VlCoverpointT<1>* __PVT____Vcp_cp_x1;
    ::VlCoverpointT<1>* __PVT____Vcp_cp_x2;
    ::VlCoverpointT<1>* __PVT____Vcp_cp_x3;
    ::VlCoverpointT<1>* __PVT____Vcp_cp_y0;
    ::VlCoverpointT<1>* __PVT____Vcp_cp_y1;
    ::VlCoverpointT<1>* __PVT____Vcp_cp_y2;
    ::VlCoverpointT<1>* __PVT____Vcp_cp_y3;
    ::VlCoverpointT<5>* __PVT____Vcp_cp_shift;
    ::VlCoverpointT<1>* __PVT____Vcp_cp_leak;
    ::VlCoverpointT<1>* __PVT____Vcp_cp_class;
    ::VlCoverpointT<1>* __PVT____Vcp_cp_correct;
    ::VlCoverpointT<1>* __PVT____Vcp_cp_in_wait;
    ::VlCoverpointT<1>* __PVT____Vcp_cp_out_wait;
    ::VlCoverCrossT<2, 40, 0, 0, 0>* __PVT____Vcx_cx_shift_leak;
    Vtb_top_mlp_pkg__03a__03amlp_coverage* __PVT____Vcg_enclosingp;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    Vtb_top_vl_covergroup_options_t__struct__0 __PVT__option;
    ::VlCovInstHandle __PVT____Vcg_inst;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "mlp_pkg::mlp_coverage.__vlAnonCG_cg_infer"; }
    VlClass* clone() const { return new Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer(*this); }
    void __VnoInFunc_get_inst_coverage(Vtb_top__Syms* __restrict vlSymsp, ::std::string covered_bins, ::std::string total_bins, double &get_inst_coverage__Vfuncrtn);
    void __VnoInFunc_get_inst_coverage__Vtcwrap_1_2(Vtb_top__Syms* __restrict vlSymsp, double &get_inst_coverage__Vtcwrap_1_2__Vfuncrtn);
    void __VnoInFunc_sample(Vtb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp, Vtb_top_mlp_pkg__03a__03amlp_coverage* __Vcg_parentp);
    ~Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer() {}
};


#endif  // guard
