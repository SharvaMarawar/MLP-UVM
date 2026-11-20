// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REPORT_CATCHER__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REPORT_CATCHER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03aprocess;
class Vtb_top_uvm_pkg__03a__03auvm_callback;
class Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pic23a657c;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_report_catcher;
class Vtb_top_uvm_pkg__03a__03auvm_report_handler;
class Vtb_top_uvm_pkg__03a__03auvm_report_message;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_report_server;
class Vtb_top_uvm_pkg__03a__03auvm_root;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_register_cb_uvm_report_catcher;
    ::CData/*0:0*/ __PVT__m_set_action_called;
    ::CData/*0:0*/ __PVT__do_report;
    ::CData/*0:0*/ __PVT__process_all_report_catchers__Vstatic__in_catcher;
    ::IData/*31:0*/ __PVT__m_demoted_fatal;
    ::IData/*31:0*/ __PVT__m_demoted_error;
    ::IData/*31:0*/ __PVT__m_demoted_warning;
    ::IData/*31:0*/ __PVT__m_caught_fatal;
    ::IData/*31:0*/ __PVT__m_caught_error;
    ::IData/*31:0*/ __PVT__m_caught_warning;
    ::IData/*31:0*/ __PVT__m_debug_flags;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::std::string __Vfunc_m_uvm_string_queue_join__Vfuncout_1097;
            ::std::string __Vfunc_m_uvm_string_queue_join__Vfuncout_1098;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> __PVT__m_modified_report_message;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> __PVT__m_orig_report_message;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_process_all_report_catchers(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> rm, ::IData/*31:0*/ &process_all_report_catchers__Vfuncrtn);
    void __VnoInFunc_summarize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ file);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_callback__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_report_catcher : public Vtb_top_uvm_pkg__03a__03auvm_callback {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __Vfunc_uvm_report_enabled__id_1091;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_report_catcher"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    void __VnoInFunc_catch(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &catch__Vfuncrtn);
    void __VnoInFunc_process_report_catcher(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &process_report_catcher__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> msg);
    void __VnoInFunc_uvm_report(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string fname, ::IData/*31:0*/ line, ::std::string context_name, ::CData/*0:0*/ report_enabled_checked);
    void __VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string fname, ::IData/*31:0*/ line, ::std::string context_name, ::CData/*0:0*/ report_enabled_checked);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_report_catcher() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_report_catcher();
};


#endif  // guard
