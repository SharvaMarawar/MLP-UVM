// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_ANALYSIS_PORT__TZ8B2DCFEF__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_ANALYSIS_PORT__TZ8B2DCFEF__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_verdict;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_port_base__Tzf8f0ec90;
class Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__piab7525b9;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz8b2dcfef__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz8b2dcfef__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz8b2dcfef__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz8b2dcfef__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz8b2dcfef__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_port_base__Tzf8f0ec90__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz8b2dcfef : public Vtb_top_uvm_pkg__03a__03auvm_port_base__Tzf8f0ec90 {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_analysis_port__Tz8b2dcfef"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz8b2dcfef(*this); }
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_verdict> t);
    Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz8b2dcfef() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz8b2dcfef();
};


#endif  // guard
