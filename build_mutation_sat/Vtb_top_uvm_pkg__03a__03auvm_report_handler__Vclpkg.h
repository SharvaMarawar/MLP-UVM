// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REPORT_HANDLER__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REPORT_HANDLER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pibac5cd21;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3;
class Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_report_handler;
class Vtb_top_uvm_pkg__03a__03auvm_report_message;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_report_server;
class Vtb_top_uvm_pkg__03a__03auvm_root;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_report_handler__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_report_handler__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_report_handler__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_report_handler__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_report_handler__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_format_action(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ action, ::std::string &format_action__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_report_handler : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__m_max_verbosity_level;
    ::IData/*31:0*/ __PVT__default_file_handle;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssocArray<::CData/*1:0*/, ::IData/*31:0*/> __PVT__severity_actions;
    ::VlAssocArray<::CData/*1:0*/, ::IData/*31:0*/> __PVT__severity_file_handles;
    ::std::string __Vfunc_uvm_report_enabled__id_1111;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92> __PVT__id_verbosities;
    ::VlAssocArray<::CData/*1:0*/, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92>> __PVT__severity_id_verbosities;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92> __PVT__id_actions;
    ::VlAssocArray<::CData/*1:0*/, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92>> __PVT__severity_id_actions;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3> __PVT__sev_overrides;
    ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3>> __PVT__sev_id_overrides;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92> __PVT__id_file_handles;
    ::VlAssocArray<::CData/*1:0*/, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92>> __PVT__severity_id_file_handles;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_report_handler"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_report_handler* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_report_handler(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_get_action(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::IData/*31:0*/ &get_action__Vfuncrtn);
    void __VnoInFunc_get_file_handle(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::IData/*31:0*/ &get_file_handle__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_severity_id_file(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::IData/*31:0*/ &get_severity_id_file__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_get_verbosity_level(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::IData/*31:0*/ &get_verbosity_level__Vfuncrtn);
    void __VnoInFunc_initialize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_process_report_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> report_message);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string name, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity_level, ::std::string filename, ::IData/*31:0*/ line, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> client);
    void __VnoInFunc_run_hooks(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> client, ::CData/*1:0*/ severity, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::CData/*0:0*/ &run_hooks__Vfuncrtn);
    void __VnoInFunc_set_default_file(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ file);
    void __VnoInFunc_set_id_action(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::IData/*31:0*/ action);
    void __VnoInFunc_set_id_file(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::IData/*31:0*/ file);
    void __VnoInFunc_set_id_verbosity(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::IData/*31:0*/ verbosity);
    void __VnoInFunc_set_severity_action(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::IData/*31:0*/ action);
    void __VnoInFunc_set_severity_file(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::IData/*31:0*/ file);
    void __VnoInFunc_set_severity_id_action(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::IData/*31:0*/ action);
    void __VnoInFunc_set_severity_id_override(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ cur_severity, ::std::string id, ::CData/*1:0*/ new_severity);
    void __VnoInFunc_set_severity_override(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ cur_severity, ::CData/*1:0*/ new_severity);
    void __VnoInFunc_set_verbosity_level(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ verbosity_level);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_report_handler() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_report_handler();
};


#endif  // guard
