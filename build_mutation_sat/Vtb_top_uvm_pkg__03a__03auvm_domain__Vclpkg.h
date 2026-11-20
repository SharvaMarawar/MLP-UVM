// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_build_phase;
class Vtb_top_uvm_pkg__03a__03auvm_check_phase;
class Vtb_top_uvm_pkg__03a__03auvm_configure_phase;
class Vtb_top_uvm_pkg__03a__03auvm_connect_phase;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_domain;
class Vtb_top_uvm_pkg__03a__03auvm_end_of_elaboration_phase;
class Vtb_top_uvm_pkg__03a__03auvm_extract_phase;
class Vtb_top_uvm_pkg__03a__03auvm_final_phase;
class Vtb_top_uvm_pkg__03a__03auvm_main_phase;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_post_configure_phase;
class Vtb_top_uvm_pkg__03a__03auvm_post_main_phase;
class Vtb_top_uvm_pkg__03a__03auvm_post_reset_phase;
class Vtb_top_uvm_pkg__03a__03auvm_post_shutdown_phase;
class Vtb_top_uvm_pkg__03a__03auvm_pre_configure_phase;
class Vtb_top_uvm_pkg__03a__03auvm_pre_main_phase;
class Vtb_top_uvm_pkg__03a__03auvm_pre_reset_phase;
class Vtb_top_uvm_pkg__03a__03auvm_pre_shutdown_phase;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_report_phase;
class Vtb_top_uvm_pkg__03a__03auvm_reset_phase;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_run_phase;
class Vtb_top_uvm_pkg__03a__03auvm_shutdown_phase;
class Vtb_top_uvm_pkg__03a__03auvm_start_of_simulation_phase;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_domain__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> __PVT__m_uvm_domain;
            ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain>> __PVT__m_domains;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __PVT__m_uvm_schedule;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_domain__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_domain__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_domain__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_domain__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_add_uvm_phases(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> schedule);
    void __VnoInFunc_get_common_domain(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> &get_common_domain__Vfuncrtn);
    void __VnoInFunc_get_uvm_domain(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> &get_uvm_domain__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_phase__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_domain : public Vtb_top_uvm_pkg__03a__03auvm_phase {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __Vtask_uvm_report_error__id_2131;
    ::std::string __Vtask_uvm_report_error__message_2132;
    ::std::string __Vtask_uvm_report_error__filename_2134;
    ::std::string __Vtask_uvm_report_error__context_name_2136;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_domain"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_domain* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_domain(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_domain() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_domain();
};


#endif  // guard
