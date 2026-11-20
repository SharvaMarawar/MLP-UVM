// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_VREG__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_VREG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03asemaphore;
class Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pi664dc15a;
class Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pibf9bf78c;
class Vtb_top_uvm_pkg__03a__03auvm_comparer;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_mem;
class Vtb_top_uvm_pkg__03a__03auvm_mem_region;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_packer;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_reg_block;
class Vtb_top_uvm_pkg__03a__03auvm_reg_map;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_top_uvm_pkg__03a__03auvm_vreg;
class Vtb_top_uvm_pkg__03a__03auvm_vreg_cbs;
class Vtb_top_uvm_pkg__03a__03auvm_vreg_field;
class Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_vreg__Vclpkg final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_register_cb_uvm_vreg_cbs;

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_vreg__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_vreg__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_vreg__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_vreg__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_vreg : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__locked;
    ::CData/*0:0*/ __PVT__is_static;
    ::CData/*0:0*/ __PVT__read_in_progress;
    ::CData/*0:0*/ __PVT__write_in_progress;
    ::IData/*31:0*/ __PVT__n_bits;
    ::IData/*31:0*/ __PVT__n_used_bits;
    ::IData/*31:0*/ __PVT__incr;
    ::IData/*31:0*/ __PVT__lineno;
    ::QData/*63:0*/ __PVT__offset;
    ::QData/*63:0*/ __PVT__size;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __PVT__fname;
    ::std::string __Vtask_uvm_report_error__id_4488;
    ::std::string __Vtask_uvm_report_error__message_4489;
    ::std::string __Vtask_uvm_report_error__filename_4491;
    ::std::string __Vtask_uvm_report_error__context_name_4493;
    ::std::string __Vtask_uvm_report_error__id_4497;
    ::std::string __Vtask_uvm_report_error__message_4498;
    ::std::string __Vtask_uvm_report_error__filename_4500;
    ::std::string __Vtask_uvm_report_error__context_name_4502;
    ::std::string __Vtask_uvm_report_error__id_4507;
    ::std::string __Vtask_uvm_report_error__message_4508;
    ::std::string __Vtask_uvm_report_error__filename_4510;
    ::std::string __Vtask_uvm_report_error__context_name_4512;
    ::std::string __Vtask_uvm_report_error__id_4516;
    ::std::string __Vtask_uvm_report_error__message_4517;
    ::std::string __Vtask_uvm_report_error__filename_4519;
    ::std::string __Vtask_uvm_report_error__context_name_4521;
    ::std::string __Vtask_uvm_report_error__id_4525;
    ::std::string __Vtask_uvm_report_error__message_4526;
    ::std::string __Vtask_uvm_report_error__filename_4528;
    ::std::string __Vtask_uvm_report_error__context_name_4530;
    ::std::string __Vtask_uvm_report_error__id_4534;
    ::std::string __Vtask_uvm_report_error__message_4535;
    ::std::string __Vtask_uvm_report_error__filename_4537;
    ::std::string __Vtask_uvm_report_error__context_name_4539;
    ::std::string __Vtask_uvm_report_error__id_4543;
    ::std::string __Vtask_uvm_report_error__message_4544;
    ::std::string __Vtask_uvm_report_error__filename_4546;
    ::std::string __Vtask_uvm_report_error__context_name_4548;
    ::std::string __Vtask_uvm_report_error__id_4552;
    ::std::string __Vtask_uvm_report_error__message_4553;
    ::std::string __Vtask_uvm_report_error__filename_4555;
    ::std::string __Vtask_uvm_report_error__context_name_4557;
    ::std::string __Vtask_uvm_report_error__id_4561;
    ::std::string __Vtask_uvm_report_error__message_4562;
    ::std::string __Vtask_uvm_report_error__filename_4564;
    ::std::string __Vtask_uvm_report_error__context_name_4566;
    ::std::string __Vtask_uvm_report_error__id_4570;
    ::std::string __Vtask_uvm_report_error__message_4571;
    ::std::string __Vtask_uvm_report_error__filename_4573;
    ::std::string __Vtask_uvm_report_error__context_name_4575;
    ::std::string __Vtask_uvm_report_error__id_4579;
    ::std::string __Vtask_uvm_report_error__message_4580;
    ::std::string __Vtask_uvm_report_error__filename_4582;
    ::std::string __Vtask_uvm_report_error__context_name_4584;
    ::std::string __Vtask_uvm_report_info__id_4591;
    ::std::string __Vtask_uvm_report_info__message_4592;
    ::std::string __Vtask_uvm_report_info__filename_4594;
    ::std::string __Vtask_uvm_report_info__context_name_4596;
    ::std::string __Vtask_uvm_report_error__id_4600;
    ::std::string __Vtask_uvm_report_error__message_4601;
    ::std::string __Vtask_uvm_report_error__filename_4603;
    ::std::string __Vtask_uvm_report_error__context_name_4605;
    ::std::string __Vtask_uvm_report_info__id_4612;
    ::std::string __Vtask_uvm_report_info__message_4613;
    ::std::string __Vtask_uvm_report_info__filename_4615;
    ::std::string __Vtask_uvm_report_info__context_name_4617;
    ::std::string __Vtask_uvm_report_error__id_4621;
    ::std::string __Vtask_uvm_report_error__message_4622;
    ::std::string __Vtask_uvm_report_error__filename_4624;
    ::std::string __Vtask_uvm_report_error__context_name_4626;
    ::std::string __Vtask_uvm_report_info__id_4631;
    ::std::string __Vtask_uvm_report_info__message_4632;
    ::std::string __Vtask_uvm_report_info__filename_4634;
    ::std::string __Vtask_uvm_report_info__context_name_4636;
    ::std::string __Vtask_uvm_report_error__id_4640;
    ::std::string __Vtask_uvm_report_error__message_4641;
    ::std::string __Vtask_uvm_report_error__filename_4643;
    ::std::string __Vtask_uvm_report_error__context_name_4645;
    ::std::string __Vtask_uvm_report_info__id_4651;
    ::std::string __Vtask_uvm_report_info__message_4652;
    ::std::string __Vtask_uvm_report_info__filename_4654;
    ::std::string __Vtask_uvm_report_info__context_name_4656;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> __PVT__parent;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field>> __PVT__fields;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> __PVT__mem;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_region> __PVT__region;
    ::VlClassRef<Vtb_top_std__03a__03asemaphore> __PVT__atomic;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_vreg"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_vreg* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_vreg(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    VlCoroutine __VnoInFunc_XatomicX(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ on);
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> comparer, ::CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_access(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string &get_access__Vfuncrtn);
    virtual void __VnoInFunc_get_address(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_block(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field>> &fields);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>> &maps);
    void __VnoInFunc_get_memory(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bytes(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_n_maps(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_maps__Vfuncrtn);
    void __VnoInFunc_get_n_memlocs(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_memlocs__Vfuncrtn);
    void __VnoInFunc_get_offset_in_memory(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::QData/*63:0*/ &get_offset_in_memory__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_rights(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string &get_rights__Vfuncrtn);
    void __VnoInFunc_is_in_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::CData/*0:0*/ &is_in_map__Vfuncrtn);
    virtual void __VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual void __VnoInFunc_poke(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::QData/*63:0*/ &rdat, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::IData/*31:0*/ &status);
    virtual void __VnoInFunc_post_write(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::QData/*63:0*/ wdat, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::IData/*31:0*/ &status);
    virtual void __VnoInFunc_pre_read(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_pre_write(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::QData/*63:0*/ &wdat, ::IData/*31:0*/ &path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ idx, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_vreg() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::IData/*31:0*/ n_bits);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_vreg();
};


#endif  // guard
