// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_DEFAULT_REPORT_SERVER__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_DEFAULT_REPORT_SERVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03aprocess;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_default_report_server;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_recorder;
class Vtb_top_uvm_pkg__03a__03auvm_report_handler;
class Vtb_top_uvm_pkg__03a__03auvm_report_message;
class Vtb_top_uvm_pkg__03a__03auvm_report_message_element_container;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_report_server;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_tr_database;
class Vtb_top_uvm_pkg__03a__03auvm_tr_stream;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_default_report_server__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_default_report_server__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_default_report_server__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_default_report_server__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_default_report_server__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_report_server__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_default_report_server : public Vtb_top_uvm_pkg__03a__03auvm_report_server {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__max_quit_overridable;
    ::CData/*0:0*/ __PVT__enable_report_id_count_summary;
    ::CData/*0:0*/ __PVT__record_all_messages;
    ::CData/*0:0*/ __PVT__show_verbosity;
    ::CData/*0:0*/ __PVT__show_terminator;
    ::CData/*0:0*/ __PVT__m_report_summarize_in_stack;
    ::IData/*31:0*/ __PVT__m_quit_count;
    ::IData/*31:0*/ __PVT__m_max_quit_count;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssocArray<::CData/*1:0*/, ::IData/*31:0*/> __PVT__m_severity_count;
    ::VlAssocArray<::std::string, ::IData/*31:0*/> __PVT__m_id_count;
    ::std::string __Vtask_uvm_report_info__id_1960;
    ::std::string __Vtask_uvm_report_info__message_1961;
    ::std::string __Vtask_uvm_report_info__filename_1963;
    ::std::string __Vtask_uvm_report_info__context_name_1965;
    ::std::string __Vfunc_m_uvm_string_queue_join__Vfuncout_1103;
    ::std::string __Vtask_uvm_report_info__id_1969;
    ::std::string __Vtask_uvm_report_info__message_1970;
    ::std::string __Vtask_uvm_report_info__filename_1972;
    ::std::string __Vtask_uvm_report_info__context_name_1974;
    ::std::string __Vfunc_m_uvm_string_queue_join__Vfuncout_1106;
    ::std::string __Vtask_uvm_report_info__id_1978;
    ::std::string __Vtask_uvm_report_info__message_1979;
    ::std::string __Vtask_uvm_report_info__filename_1981;
    ::std::string __Vtask_uvm_report_info__context_name_1983;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> __PVT__m_message_db;
    ::VlAssocArray<::std::string, ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream>>> __PVT__m_streams;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_default_report_server"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_default_report_server* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_default_report_server(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_compose_report_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> report_message, ::std::string report_object_name, ::std::string &compose_report_message__Vfuncrtn);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_execute_report_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> report_message, ::std::string composed_message);
    void __VnoInFunc_f_display(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ file, ::std::string str);
    virtual void __VnoInFunc_get_id_count(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::IData/*31:0*/ &get_id_count__Vfuncrtn);
    virtual void __VnoInFunc_get_id_set(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::std::string> &q);
    virtual void __VnoInFunc_get_max_quit_count(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_max_quit_count__Vfuncrtn);
    virtual void __VnoInFunc_get_message_database(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> &get_message_database__Vfuncrtn);
    virtual void __VnoInFunc_get_quit_count(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_quit_count__Vfuncrtn);
    virtual void __VnoInFunc_get_severity_count(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::IData/*31:0*/ &get_severity_count__Vfuncrtn);
    virtual void __VnoInFunc_get_severity_set(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::CData/*1:0*/> &q);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_incr_id_count(Vtb_top__Syms* __restrict vlSymsp, ::std::string id);
    void __VnoInFunc_incr_quit_count(Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_incr_severity_count(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity);
    void __VnoInFunc_is_quit_count_reached(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_quit_count_reached__Vfuncrtn);
    void __VnoInFunc_m_report_summarize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ file);
    virtual void __VnoInFunc_process_report_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> report_message);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report_summarize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ file);
    void __VnoInFunc_reset_quit_count(Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_reset_severity_counts(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_set_id_count(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::IData/*31:0*/ count);
    virtual void __VnoInFunc_set_max_quit_count(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ count, ::CData/*0:0*/ overridable);
    virtual void __VnoInFunc_set_message_database(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> database);
    virtual void __VnoInFunc_set_quit_count(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ quit_count);
    virtual void __VnoInFunc_set_severity_count(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::IData/*31:0*/ count);
    void __VnoInFunc_summarize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ file);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_default_report_server() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_default_report_server();
};


#endif  // guard
