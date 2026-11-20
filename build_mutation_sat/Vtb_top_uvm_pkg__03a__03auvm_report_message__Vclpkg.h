// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REPORT_MESSAGE__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REPORT_MESSAGE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03aprocess;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi58324c77;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_recorder;
class Vtb_top_uvm_pkg__03a__03auvm_report_handler;
class Vtb_top_uvm_pkg__03a__03auvm_report_message;
class Vtb_top_uvm_pkg__03a__03auvm_report_message_element_base;
class Vtb_top_uvm_pkg__03a__03auvm_report_message_element_container;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_report_server;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_report_message__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_report_message__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_report_message__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_report_message__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_report_message__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_new_report_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> &new_report_message__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_report_message : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*1:0*/ __PVT___severity;
    ::IData/*31:0*/ __PVT___verbosity;
    ::IData/*31:0*/ __PVT___line;
    ::IData/*31:0*/ __PVT___action;
    ::IData/*31:0*/ __PVT___file;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __PVT___id;
    ::std::string __PVT___message;
    ::std::string __PVT___filename;
    ::std::string __PVT___context_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __PVT___report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_handler> __PVT___report_handler;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> __PVT___report_server;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message_element_container> __PVT___report_message_element_container;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_report_message"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_report_message* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_report_message(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_add_int(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlWide<128>/*4095:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix, ::IData/*31:0*/ action);
    virtual void __VnoInFunc_add_object(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::IData/*31:0*/ action);
    virtual void __VnoInFunc_add_string(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string value, ::IData/*31:0*/ action);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_record(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_get_action(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_action__Vfuncrtn);
    void __VnoInFunc_get_context(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_context__Vfuncrtn);
    void __VnoInFunc_get_element_container(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message_element_container> &get_element_container__Vfuncrtn);
    virtual void __VnoInFunc_get_file(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_file__Vfuncrtn);
    void __VnoInFunc_get_filename(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_filename__Vfuncrtn);
    void __VnoInFunc_get_id(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_id__Vfuncrtn);
    virtual void __VnoInFunc_get_line(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_line__Vfuncrtn);
    void __VnoInFunc_get_message(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_message__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_report_handler(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_handler> &get_report_handler__Vfuncrtn);
    void __VnoInFunc_get_report_object(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> &get_report_object__Vfuncrtn);
    virtual void __VnoInFunc_get_report_server(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn);
    virtual void __VnoInFunc_get_severity(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ &get_severity__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_verbosity(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_verbosity__Vfuncrtn);
    void __VnoInFunc_m_record_core_properties(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_m_record_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_action(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ act);
    void __VnoInFunc_set_context(Vtb_top__Syms* __restrict vlSymsp, ::std::string cn);
    virtual void __VnoInFunc_set_file(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ fl);
    virtual void __VnoInFunc_set_line(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ ln);
    void __VnoInFunc_set_report_handler(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_handler> rh);
    void __VnoInFunc_set_report_message(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::std::string context_name);
    void __VnoInFunc_set_report_object(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> ro);
    virtual void __VnoInFunc_set_report_server(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> rs);
    virtual void __VnoInFunc_set_severity(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ sev);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_report_message() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_report_message();
};


#endif  // guard
