// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_SPELL_CHKR__TZ805A4AC6__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_SPELL_CHKR__TZ805A4AC6__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::std::string __Vtask_uvm_report_info__id_894;
            ::std::string __Vtask_uvm_report_info__message_895;
            ::std::string __Vtask_uvm_report_info__filename_897;
            ::std::string __Vtask_uvm_report_info__context_name_899;
            ::std::string __Vfunc_m_uvm_string_queue_join__Vfuncout_595;
            ::std::string __Vtask_uvm_report_info__id_903;
            ::std::string __Vtask_uvm_report_info__message_904;
            ::std::string __Vtask_uvm_report_info__filename_906;
            ::std::string __Vtask_uvm_report_info__context_name_908;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_check(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc>> &strtab, ::std::string s, ::CData/*0:0*/ &check__Vfuncrtn);
    void __VnoInFunc_levenshtein_distance(Vtb_top__Syms* __restrict vlSymsp, ::std::string s, ::std::string t, ::IData/*31:0*/ &levenshtein_distance__Vfuncrtn);
    void __VnoInFunc_minimum(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ a, ::IData/*31:0*/ b, ::IData/*31:0*/ c, ::IData/*31:0*/ &minimum__Vfuncrtn);
};


class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6 : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_spell_chkr__Tz805a4ac6"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6(*this); }
    Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp) {}
    ~Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6() {}
};


#endif  // guard
