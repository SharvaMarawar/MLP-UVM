// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_ROOT__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_ROOT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor;
class Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity;
class Vtb_top_uvm_pkg__03a__03auvm_cmdline_verbosity;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_component_proxy;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_domain;
class Vtb_top_uvm_pkg__03a__03auvm_factory;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_phase_hopper;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_report_handler;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_report_server;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_;
class Vtb_top_uvm_pkg__03a__03auvm_visitor_;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_root__Vclpkg final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_relnotes_done;
    ::CData/*0:0*/ __PVT__set_timeout__Vstatic__m_uvm_timeout_overridable;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __PVT__m_inst;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_root__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_root__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_root__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_root__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> &get__Vfuncrtn);
    void __VnoInFunc_m_uvm_get_root(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> &m_uvm_get_root__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_root : public Vtb_top_uvm_pkg__03a__03auvm_component {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__finish_on_completion;
    ::CData/*0:0*/ __PVT__enable_print_topology;
    ::CData/*0:0*/ __PVT__m_phase_all_done;
    ::QData/*63:0*/ __PVT__phase_timeout;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlQueue<::std::string> __PVT__m_uvm_verbosity_settings;
    ::std::string __Vfunc_m_uvm_string_queue_join__Vfuncout_1274;
    ::std::string __Vfunc_uvm_is_match__expr_1275;
    ::std::string __Vfunc_uvm_is_match__str_1276;
    ::std::string __Vfunc_uvm_re_match__re_1279;
    ::std::string __Vfunc_uvm_re_match__str_1280;
    ::std::string __Vfunc_m_uvm_string_queue_join__Vfuncout_1283;
    ::std::string __Vtask_uvm_string_split__str_2515;
    ::std::string __Vtask_uvm_string_split__str_2520;
    ::std::string __Vtask_uvm_string_split__str_2525;
    ::std::string __Vtask_uvm_string_split__str_2530;
    ::std::string __Vtask_uvm_string_split__str_2540;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor> __PVT__clp;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>> __PVT__top_levels;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity>> __PVT__m_time_settings;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_root"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_root* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_root(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_die(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_find_all(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string comp_match, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>> &comps, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_get_finish_on_completion(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_finish_on_completion__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_m_add_child(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> child, ::CData/*0:0*/ &m_add_child__Vfuncrtn);
    void __VnoInFunc_m_check_uvm_field_flag_size(Vtb_top__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_m_check_verbosity(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_cl_init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_cmdline_checks(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_config_settings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_dump_args(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_factory_settings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_max_quit_settings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_timeout_settings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_verbosity_settings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_do_verbosity_settings____Vfork_2__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
  public:
    void __VnoInFunc_m_find_all_recurse(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string comp_match, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>> &comps, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_m_process_config(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string cfg, ::CData/*0:0*/ is_int, ::CData/*0:0*/ is_bitstream);
    void __VnoInFunc_m_process_default_sequence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string cfg);
    void __VnoInFunc_m_process_inst_override(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string ovr);
    void __VnoInFunc_m_process_type_override(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string ovr);
    virtual void __VnoInFunc_phase_started(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_print_topology(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report_header(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ file);
    virtual VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    VlCoroutine __VnoInFunc_run_test(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string test_name);
  private:
    VlCoroutine __VnoInFunc_run_test____Vfork_1__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_1__sync, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase_hopper> &unnamedblk239__DOT__hopper);
  public:
    void __VnoInFunc_set_timeout(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ timeout, ::CData/*0:0*/ overridable);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_root() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_root();
};


#endif  // guard
