// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CMDLINE_SET_SEVERITY__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CMDLINE_SET_SEVERITY__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor;
class Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity;
class Vtb_top_uvm_pkg__03a__03auvm_cmdline_setting_base;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::std::string __Vtask_uvm_string_split__str_2575;
            ::std::string __Vfunc_uvm_string_to_severity__sev_str_1310;
            ::std::string __Vfunc_uvm_string_to_severity__sev_str_1312;
            ::std::string __Vtask_get_full_name__Vfuncout_2580;
            ::std::string __Vfunc_m_uvm_string_queue_join__Vfuncout_1314;
            ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity>> __PVT__settings;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_check(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> ro);
    void __VnoInFunc_dump(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &dump__Vfuncrtn);
    void __VnoInFunc_init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> ro);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_cmdline_setting_base__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity : public Vtb_top_uvm_pkg__03a__03auvm_cmdline_setting_base {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__all_sev;
    ::CData/*1:0*/ __PVT__orig_sev;
    ::CData/*1:0*/ __PVT__sev;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __PVT__comp;
    ::std::string __PVT__id;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_cmdline_set_severity"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity(*this); }
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp);
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity();
};


#endif  // guard
