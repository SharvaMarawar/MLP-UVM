// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TR_STREAM__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TR_STREAM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03aprocess;
class Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_recorder;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9;
class Vtb_top_uvm_pkg__03a__03auvm_tr_database;
class Vtb_top_uvm_pkg__03a__03auvm_tr_stream;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_tr_stream__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream>, ::IData/*31:0*/> __PVT__m_ids_by_stream;
            ::VlAssocArray<::IData/*31:0*/, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream>> __PVT__m_streams_by_id;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_tr_stream__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_tr_stream__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_tr_stream__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_tr_stream__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_tr_stream : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_warn_null_cfg;
    ::CData/*0:0*/ __PVT__m_is_opened;
    ::CData/*0:0*/ __PVT__m_is_closed;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder>, ::CData/*0:0*/> __PVT__m_records;
    ::std::string __Vtask_uvm_report_warning__id_1579;
    ::std::string __Vtask_uvm_report_warning__message_1580;
    ::std::string __Vtask_uvm_report_warning__filename_1582;
    ::std::string __Vtask_uvm_report_warning__context_name_1584;
    ::std::string __Vtask_uvm_report_warning__id_1589;
    ::std::string __Vtask_uvm_report_warning__message_1590;
    ::std::string __Vtask_uvm_report_warning__filename_1592;
    ::std::string __Vtask_uvm_report_warning__context_name_1594;
    ::std::string __Vtask_uvm_report_warning__id_1599;
    ::std::string __Vtask_uvm_report_warning__message_1600;
    ::std::string __Vtask_uvm_report_warning__filename_1602;
    ::std::string __Vtask_uvm_report_warning__context_name_1604;
    ::std::string __Vtask_uvm_report_error__id_1608;
    ::std::string __Vtask_uvm_report_error__message_1609;
    ::std::string __Vtask_uvm_report_error__filename_1611;
    ::std::string __Vtask_uvm_report_error__context_name_1613;
    ::std::string __Vtask_uvm_report_error__id_1618;
    ::std::string __Vtask_uvm_report_error__message_1619;
    ::std::string __Vtask_uvm_report_error__filename_1621;
    ::std::string __Vtask_uvm_report_error__context_name_1623;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9> __PVT__m_cfg_dap;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tr_stream"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_do_close(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_free(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_open(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> db, ::std::string scope, ::std::string stream_type_name);
    virtual void __VnoInFunc_do_open_recorder(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ open_time, ::std::string type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> &do_open_recorder__Vfuncrtn);
    void __VnoInFunc_get_db(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> &get_db__Vfuncrtn);
    void __VnoInFunc_get_handle(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_handle__Vfuncrtn);
    void __VnoInFunc_get_scope(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_scope__Vfuncrtn);
    void __VnoInFunc_get_stream_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_stream_type_name__Vfuncrtn);
    void __VnoInFunc_is_closed(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_closed__Vfuncrtn);
    void __VnoInFunc_is_open(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_open__Vfuncrtn);
    void __VnoInFunc_m_do_open(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> db, ::std::string scope, ::std::string stream_type_name);
    void __VnoInFunc_m_free_recorder(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_open_recorder(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ open_time, ::std::string type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> &open_recorder__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_tr_stream() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_tr_stream();
};


#endif  // guard
