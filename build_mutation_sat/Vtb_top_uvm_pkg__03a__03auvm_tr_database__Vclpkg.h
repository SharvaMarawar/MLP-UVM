// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TR_DATABASE__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TR_DATABASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03aprocess;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_link_base;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_recorder;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_tr_database;
class Vtb_top_uvm_pkg__03a__03auvm_tr_stream;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_tr_database__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_tr_database__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_tr_database__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_tr_database__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_tr_database__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_tr_database : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_is_opened;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream>, ::CData/*0:0*/> __PVT__m_streams;
    ::std::string __Vtask_uvm_report_warning__id_1524;
    ::std::string __Vtask_uvm_report_warning__message_1525;
    ::std::string __Vtask_uvm_report_warning__filename_1527;
    ::std::string __Vtask_uvm_report_warning__context_name_1529;
    ::std::string __Vtask_uvm_report_warning__id_1533;
    ::std::string __Vtask_uvm_report_warning__message_1534;
    ::std::string __Vtask_uvm_report_warning__filename_1536;
    ::std::string __Vtask_uvm_report_warning__context_name_1538;
    ::std::string __Vtask_uvm_report_warning__id_1542;
    ::std::string __Vtask_uvm_report_warning__message_1543;
    ::std::string __Vtask_uvm_report_warning__filename_1545;
    ::std::string __Vtask_uvm_report_warning__context_name_1547;
    ::std::string __Vtask_uvm_report_warning__id_1551;
    ::std::string __Vtask_uvm_report_warning__message_1552;
    ::std::string __Vtask_uvm_report_warning__filename_1554;
    ::std::string __Vtask_uvm_report_warning__context_name_1556;
    ::std::string __Vtask_uvm_report_warning__id_1560;
    ::std::string __Vtask_uvm_report_warning__message_1561;
    ::std::string __Vtask_uvm_report_warning__filename_1563;
    ::std::string __Vtask_uvm_report_warning__context_name_1565;
    ::std::string __Vtask_uvm_report_warning__id_1569;
    ::std::string __Vtask_uvm_report_warning__message_1570;
    ::std::string __Vtask_uvm_report_warning__filename_1572;
    ::std::string __Vtask_uvm_report_warning__context_name_1574;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tr_database"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_do_establish_link(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_link_base> link);
    virtual void __VnoInFunc_do_open_db(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &do_open_db__Vfuncrtn);
    virtual void __VnoInFunc_do_open_stream(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string scope, ::std::string type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> &do_open_stream__Vfuncrtn);
    void __VnoInFunc_establish_link(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_link_base> link);
    void __VnoInFunc_open_db(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &open_db__Vfuncrtn);
    void __VnoInFunc_open_stream(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string scope, ::std::string type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> &open_stream__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_tr_database() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_tr_database();
};


#endif  // guard
