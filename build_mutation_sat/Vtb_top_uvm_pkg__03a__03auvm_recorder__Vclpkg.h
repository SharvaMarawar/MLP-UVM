// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_RECORDER__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_RECORDER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03aprocess;
class Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi8ef681a5;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_field_op;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_policy;
class Vtb_top_uvm_pkg__03a__03auvm_recorder;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pie4df6861;
class Vtb_top_uvm_pkg__03a__03auvm_tr_stream;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_recorder__Vclpkg final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__m_id;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder>, ::IData/*31:0*/> __PVT__m_ids_by_recorder;
            ::VlAssocArray<::IData/*31:0*/, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder>> __PVT__m_recorders_by_id;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_recorder__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_recorder__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_recorder__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_recorder__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_get_recorder_from_handle(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ id, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> &get_recorder_from_handle__Vfuncrtn);
    void __VnoInFunc_m_free_id(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ id);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_policy__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_recorder : public Vtb_top_uvm_pkg__03a__03auvm_policy {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_warn_null_stream;
    ::CData/*0:0*/ __PVT__m_is_opened;
    ::CData/*0:0*/ __PVT__m_is_closed;
    ::CData/*0:0*/ __PVT__identifier;
    ::CData/*0:0*/ __PVT__physical;
    ::CData/*0:0*/ __PVT__abstract;
    ::IData/*31:0*/ __PVT__recording_depth;
    ::IData/*27:0*/ __PVT__default_radix;
    ::IData/*31:0*/ __PVT__tr_handle;
    ::IData/*27:0*/ __PVT__policy;
    ::QData/*63:0*/ __PVT__m_open_time;
    ::QData/*63:0*/ __PVT__m_close_time;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>, ::VlAssocArray<::IData/*27:0*/, ::IData/*31:0*/>> __PVT__m_recur_states;
    ::std::string __Vtask_uvm_report_warning__id_1628;
    ::std::string __Vtask_uvm_report_warning__message_1629;
    ::std::string __Vtask_uvm_report_warning__filename_1631;
    ::std::string __Vtask_uvm_report_warning__context_name_1633;
    ::std::string __Vtask_uvm_report_error__id_1637;
    ::std::string __Vtask_uvm_report_error__message_1638;
    ::std::string __Vtask_uvm_report_error__filename_1640;
    ::std::string __Vtask_uvm_report_error__context_name_1642;
    ::std::string __Vtask_uvm_report_error__id_1647;
    ::std::string __Vtask_uvm_report_error__message_1648;
    ::std::string __Vtask_uvm_report_error__filename_1650;
    ::std::string __Vtask_uvm_report_error__context_name_1652;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pie4df6861> __PVT__m_stream_dap;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_recorder"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    void __VnoInFunc_close(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ close_time);
    virtual void __VnoInFunc_do_close(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ close_time);
    virtual void __VnoInFunc_do_free(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_open(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> stream, ::QData/*63:0*/ open_time, ::std::string type_name);
    virtual void __VnoInFunc_do_record_field(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlWide<128>/*4095:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix);
    virtual void __VnoInFunc_do_record_field_int(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix);
    virtual void __VnoInFunc_do_record_generic(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string value, ::std::string type_name);
    virtual void __VnoInFunc_do_record_object(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_do_record_string(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string value);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_free(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ close_time);
    virtual void __VnoInFunc_get_default_radix(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ &get_default_radix__Vfuncrtn);
    void __VnoInFunc_get_handle(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_handle__Vfuncrtn);
    virtual void __VnoInFunc_get_id_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_id_enabled__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_recursion_policy(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ &get_recursion_policy__Vfuncrtn);
    void __VnoInFunc_get_stream(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> &get_stream__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_is_closed(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_closed__Vfuncrtn);
    void __VnoInFunc_is_open(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_open__Vfuncrtn);
    void __VnoInFunc_m_do_open(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> stream, ::QData/*63:0*/ open_time, ::std::string type_name);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_record_field(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlWide<128>/*4095:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix);
    void __VnoInFunc_record_field_int(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix);
    void __VnoInFunc_record_generic(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string value, ::std::string type_name);
    void __VnoInFunc_record_object(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> value);
    void __VnoInFunc_record_string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string value);
    virtual void __VnoInFunc_set_recursion_policy(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ policy);
    void __VnoInFunc_use_record_attribute(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &use_record_attribute__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_recorder() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_recorder();
};


#endif  // guard
