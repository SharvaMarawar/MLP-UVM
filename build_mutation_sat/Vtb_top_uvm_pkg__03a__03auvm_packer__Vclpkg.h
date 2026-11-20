// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_PACKER__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_PACKER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_factory;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi6438d778;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_packer;
class Vtb_top_uvm_pkg__03a__03auvm_policy;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_packer__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlQueue<::CData/*0:0*/> __PVT__bitstream;
            ::VlQueue<::CData/*0:0*/> __PVT__fabitstream;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_packer__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_packer__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_packer__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_packer__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_policy__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_packer : public Vtb_top_uvm_pkg__03a__03auvm_policy {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__reverse_order;
    ::CData/*7:0*/ __PVT__byte_size;
    ::CData/*0:0*/ __PVT__nopack;
    ::CData/*0:0*/ __PVT__physical;
    ::CData/*0:0*/ __PVT__abstract;
    ::IData/*31:0*/ __PVT__m_pack_iter;
    ::IData/*31:0*/ __PVT__m_unpack_iter;
    ::IData/*31:0*/ __PVT__word_size;
    ::VlWide<1024>/*32767:0*/ __PVT__m_bits;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __Vtask_uvm_report_error__id_1506;
    ::std::string __Vtask_uvm_report_error__message_1507;
    ::std::string __Vtask_uvm_report_error__filename_1509;
    ::std::string __Vtask_uvm_report_error__context_name_1511;
    ::std::string __Vtask_uvm_report_error__id_1515;
    ::std::string __Vtask_uvm_report_error__message_1516;
    ::std::string __Vtask_uvm_report_error__filename_1518;
    ::std::string __Vtask_uvm_report_error__context_name_1520;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory> __PVT__m_factory;
    ::VlAssocArray<::IData/*31:0*/, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>> __PVT__m_object_references;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_packer"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_packer* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_packer(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_enough_bits(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ needed, ::std::string id, ::CData/*0:0*/ &enough_bits__Vfuncrtn);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_pack_field_int(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ value, ::IData/*31:0*/ size);
    void __VnoInFunc_pack_string(Vtb_top__Syms* __restrict vlSymsp, ::std::string value);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_unpack_bits(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::CData/*0:0*/> &value, ::IData/*31:0*/ size);
    void __VnoInFunc_unpack_field_int(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ size, ::QData/*63:0*/ &unpack_field_int__Vfuncrtn);
    void __VnoInFunc_unpack_string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &unpack_string__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_packer() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_packer();
};


#endif  // guard
