// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_MLP_PKG__03A__03AUVM_ANALYSIS_IMP_OUT__PI547D26A9__VCLPKG_H_
#define VERILATED_VTB_TOP_MLP_PKG__03A__03AUVM_ANALYSIS_IMP_OUT__PI547D26A9__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_mon_item;
class Vtb_top_mlp_pkg__03a__03amlp_scoreboard;
class Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz46a19f5f;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_out__pi547d26a9__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_out__pi547d26a9__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_out__pi547d26a9__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_out__pi547d26a9__Vclpkg);
    VL_UNMOVABLE(Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_out__pi547d26a9__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz46a19f5f__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_out__pi547d26a9 : public Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz46a19f5f {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_scoreboard> __PVT__m_imp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "mlp_pkg::uvm_analysis_imp_out__pi547d26a9"; }
    VlClass* clone() const { return new Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_out__pi547d26a9(*this); }
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_out__pi547d26a9() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_scoreboard> imp);
    virtual ~Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_out__pi547d26a9();
};


#endif  // guard
