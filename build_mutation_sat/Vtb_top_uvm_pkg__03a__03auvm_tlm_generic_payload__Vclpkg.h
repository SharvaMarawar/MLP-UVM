// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TLM_GENERIC_PAYLOAD__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TLM_GENERIC_PAYLOAD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_comparer;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0ce0e3;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_packer;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_recorder;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vtb_top_uvm_pkg__03a__03auvm_tlm_extension_base;
class Vtb_top_uvm_pkg__03a__03auvm_tlm_generic_payload;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_tlm_generic_payload : public Vtb_top_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_dmi;
    ::IData/*31:0*/ __PVT__m_command;
    ::IData/*31:0*/ __PVT__m_length;
    ::IData/*31:0*/ __PVT__m_response_status;
    ::IData/*31:0*/ __PVT__m_byte_enable_length;
    ::IData/*31:0*/ __PVT__m_streaming_width;
    ::QData/*63:0*/ __PVT__m_address;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlQueue<::CData/*7:0*/> __PVT__m_data;
    ::VlQueue<::CData/*7:0*/> __PVT__m_byte_enable;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tlm_extension_base>, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tlm_extension_base>> __PVT__m_extensions;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tlm_extension_base>> __PVT__m_rand_exts;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_generic_payload"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_tlm_generic_payload* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_tlm_generic_payload(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> comparer, ::CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_record(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_address(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ &get_address__Vfuncrtn);
    void __VnoInFunc_get_command(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_command__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_response_string(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_response_string__Vfuncrtn);
    void __VnoInFunc_get_streaming_width(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_streaming_width__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_is_response_ok(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_response_ok__Vfuncrtn);
    void __VnoInFunc_post_randomize(Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_pre_randomize(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_address(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ addr);
    void __VnoInFunc_set_command(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ command);
    void __VnoInFunc_set_streaming_width(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ width);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_tlm_generic_payload() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_tlm_generic_payload();
};


#endif  // guard
