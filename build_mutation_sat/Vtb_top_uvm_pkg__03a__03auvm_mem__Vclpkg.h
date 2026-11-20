// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_MEM__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_MEM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_top_uvm_pkg.h"
class Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pie43eb369;
class Vtb_top_uvm_pkg__03a__03auvm_comparer;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat;
class Vtb_top_uvm_pkg__03a__03auvm_mem;
class Vtb_top_uvm_pkg__03a__03auvm_mem_mam;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445;
class Vtb_top_uvm_pkg__03a__03auvm_packer;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f;
class Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor;
class Vtb_top_uvm_pkg__03a__03auvm_reg_block;
class Vtb_top_uvm_pkg__03a__03auvm_reg_cbs;
class Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vtb_top_uvm_pkg__03a__03auvm_reg_item;
class Vtb_top_uvm_pkg__03a__03auvm_reg_map;
class Vtb_top_uvm_pkg__03a__03auvm_reg_map_info;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_top_uvm_pkg__03a__03auvm_sequencer_base;
class Vtb_top_uvm_pkg__03a__03auvm_vreg;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_mem__Vclpkg final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    ::IData/*31:0*/ __PVT__m_max_size;

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_mem__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_mem__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_mem__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_mem__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_mem : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_locked;
    ::CData/*0:0*/ __PVT__m_read_in_progress;
    ::CData/*0:0*/ __PVT__m_write_in_progress;
    ::CData/*0:0*/ __PVT__m_is_powered_down;
    ::IData/*31:0*/ __PVT__m_n_bits;
    ::IData/*31:0*/ __PVT__m_has_cover;
    ::IData/*31:0*/ __PVT__m_cover_on;
    ::IData/*31:0*/ __PVT__m_lineno;
    ::QData/*63:0*/ __PVT__m_size;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>, ::CData/*0:0*/> __PVT__m_maps;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg>, ::CData/*0:0*/> __PVT__m_vregs;
    ::std::string __PVT__m_access;
    ::std::string __PVT__m_fname;
    ::std::string __Vtask_uvm_report_error__id_4660;
    ::std::string __Vtask_uvm_report_error__message_4661;
    ::std::string __Vtask_uvm_report_error__filename_4663;
    ::std::string __Vtask_uvm_report_error__context_name_4665;
    ::std::string __Vtask_uvm_report_error__id_4669;
    ::std::string __Vtask_uvm_report_error__message_4670;
    ::std::string __Vtask_uvm_report_error__filename_4672;
    ::std::string __Vtask_uvm_report_error__context_name_4674;
    ::std::string __Vtask_uvm_report_warning__id_4678;
    ::std::string __Vtask_uvm_report_warning__message_4679;
    ::std::string __Vtask_uvm_report_warning__filename_4681;
    ::std::string __Vtask_uvm_report_warning__context_name_4683;
    ::std::string __Vtask_uvm_report_warning__id_4687;
    ::std::string __Vtask_uvm_report_warning__message_4688;
    ::std::string __Vtask_uvm_report_warning__filename_4690;
    ::std::string __Vtask_uvm_report_warning__context_name_4692;
    ::std::string __Vtask_uvm_report_error__id_4696;
    ::std::string __Vtask_uvm_report_error__message_4697;
    ::std::string __Vtask_uvm_report_error__filename_4699;
    ::std::string __Vtask_uvm_report_error__context_name_4701;
    ::std::string __Vtask_uvm_report_error__id_4705;
    ::std::string __Vtask_uvm_report_error__message_4706;
    ::std::string __Vtask_uvm_report_error__filename_4708;
    ::std::string __Vtask_uvm_report_error__context_name_4710;
    ::std::string __Vtask_uvm_report_error__id_4714;
    ::std::string __Vtask_uvm_report_error__message_4715;
    ::std::string __Vtask_uvm_report_error__filename_4717;
    ::std::string __Vtask_uvm_report_error__context_name_4719;
    ::std::string __Vtask_uvm_report_error__id_4723;
    ::std::string __Vtask_uvm_report_error__message_4724;
    ::std::string __Vtask_uvm_report_error__filename_4726;
    ::std::string __Vtask_uvm_report_error__context_name_4728;
    ::std::string __Vtask_uvm_report_error__id_4732;
    ::std::string __Vtask_uvm_report_error__message_4733;
    ::std::string __Vtask_uvm_report_error__filename_4735;
    ::std::string __Vtask_uvm_report_error__context_name_4737;
    ::std::string __Vtask_uvm_report_warning__id_4741;
    ::std::string __Vtask_uvm_report_warning__message_4742;
    ::std::string __Vtask_uvm_report_warning__filename_4744;
    ::std::string __Vtask_uvm_report_warning__context_name_4746;
    ::std::string __Vtask_uvm_report_warning__id_4750;
    ::std::string __Vtask_uvm_report_warning__message_4751;
    ::std::string __Vtask_uvm_report_warning__filename_4753;
    ::std::string __Vtask_uvm_report_warning__context_name_4755;
    ::std::string __Vtask_uvm_report_warning__id_4759;
    ::std::string __Vtask_uvm_report_warning__message_4760;
    ::std::string __Vtask_uvm_report_warning__filename_4762;
    ::std::string __Vtask_uvm_report_warning__context_name_4764;
    ::std::string __Vtask_uvm_report_warning__id_4768;
    ::std::string __Vtask_uvm_report_warning__message_4769;
    ::std::string __Vtask_uvm_report_warning__filename_4771;
    ::std::string __Vtask_uvm_report_warning__context_name_4773;
    ::std::string __Vfunc_uvm_report_enabled__id_1820;
    ::std::string __Vtask_uvm_report_info__id_4781;
    ::std::string __Vtask_uvm_report_info__message_4782;
    ::std::string __Vtask_uvm_report_info__filename_4784;
    ::std::string __Vtask_uvm_report_info__context_name_4786;
    ::std::string __Vfunc_uvm_report_enabled__id_1827;
    ::std::string __Vtask_uvm_report_info__id_4792;
    ::std::string __Vtask_uvm_report_info__message_4793;
    ::std::string __Vtask_uvm_report_info__filename_4795;
    ::std::string __Vtask_uvm_report_info__context_name_4797;
    ::std::string __Vtask_uvm_report_error__id_4801;
    ::std::string __Vtask_uvm_report_error__message_4802;
    ::std::string __Vtask_uvm_report_error__filename_4804;
    ::std::string __Vtask_uvm_report_error__context_name_4806;
    ::std::string __Vtask_uvm_report_warning__id_4810;
    ::std::string __Vtask_uvm_report_warning__message_4811;
    ::std::string __Vtask_uvm_report_warning__filename_4813;
    ::std::string __Vtask_uvm_report_warning__context_name_4815;
    ::std::string __Vtask_uvm_report_error__id_4819;
    ::std::string __Vtask_uvm_report_error__message_4820;
    ::std::string __Vtask_uvm_report_error__filename_4822;
    ::std::string __Vtask_uvm_report_error__context_name_4824;
    ::std::string __Vtask_uvm_report_error__id_4828;
    ::std::string __Vtask_uvm_report_error__message_4829;
    ::std::string __Vtask_uvm_report_error__filename_4831;
    ::std::string __Vtask_uvm_report_error__context_name_4833;
    ::std::string __Vtask_uvm_report_error__id_4837;
    ::std::string __Vtask_uvm_report_error__message_4838;
    ::std::string __Vtask_uvm_report_error__filename_4840;
    ::std::string __Vtask_uvm_report_error__context_name_4842;
    ::std::string __Vtask_uvm_report_error__id_4846;
    ::std::string __Vtask_uvm_report_error__message_4847;
    ::std::string __Vtask_uvm_report_error__filename_4849;
    ::std::string __Vtask_uvm_report_error__context_name_4851;
    ::std::string __Vtask_uvm_report_error__id_4855;
    ::std::string __Vtask_uvm_report_error__message_4856;
    ::std::string __Vtask_uvm_report_error__filename_4858;
    ::std::string __Vtask_uvm_report_error__context_name_4860;
    ::std::string __Vtask_uvm_report_info__id_4864;
    ::std::string __Vtask_uvm_report_info__message_4865;
    ::std::string __Vtask_uvm_report_info__filename_4867;
    ::std::string __Vtask_uvm_report_info__context_name_4869;
    ::std::string __Vtask_uvm_report_error__id_4873;
    ::std::string __Vtask_uvm_report_error__message_4874;
    ::std::string __Vtask_uvm_report_error__filename_4876;
    ::std::string __Vtask_uvm_report_error__context_name_4878;
    ::std::string __Vtask_uvm_report_info__id_4882;
    ::std::string __Vtask_uvm_report_info__message_4883;
    ::std::string __Vtask_uvm_report_info__filename_4885;
    ::std::string __Vtask_uvm_report_info__context_name_4887;
    ::std::string __Vtask_uvm_report_info__id_4892;
    ::std::string __Vtask_uvm_report_info__message_4893;
    ::std::string __Vtask_uvm_report_info__filename_4895;
    ::std::string __Vtask_uvm_report_info__context_name_4897;
    ::std::string __Vfunc_uvm_hdl_concat2string__image_1862;
    ::std::string __Vfunc_uvm_hdl_concat2string__image_1867;
    ::std::string __Vtask_uvm_report_error__id_4901;
    ::std::string __Vtask_uvm_report_error__message_4902;
    ::std::string __Vtask_uvm_report_error__filename_4904;
    ::std::string __Vtask_uvm_report_error__context_name_4906;
    ::std::string __Vtask_uvm_report_info__id_4911;
    ::std::string __Vtask_uvm_report_info__message_4912;
    ::std::string __Vtask_uvm_report_info__filename_4914;
    ::std::string __Vtask_uvm_report_info__context_name_4916;
    ::std::string __Vtask_uvm_report_error__id_4920;
    ::std::string __Vtask_uvm_report_error__message_4921;
    ::std::string __Vtask_uvm_report_error__filename_4923;
    ::std::string __Vtask_uvm_report_error__context_name_4925;
    ::std::string __Vtask_uvm_report_warning__id_4931;
    ::std::string __Vtask_uvm_report_warning__message_4932;
    ::std::string __Vtask_uvm_report_warning__filename_4934;
    ::std::string __Vtask_uvm_report_warning__context_name_4936;
    ::std::string __Vtask_uvm_report_warning__id_4940;
    ::std::string __Vtask_uvm_report_warning__message_4941;
    ::std::string __Vtask_uvm_report_warning__filename_4943;
    ::std::string __Vtask_uvm_report_warning__context_name_4945;
    ::std::string __Vtask_uvm_report_warning__id_4949;
    ::std::string __Vtask_uvm_report_warning__message_4950;
    ::std::string __Vtask_uvm_report_warning__filename_4952;
    ::std::string __Vtask_uvm_report_warning__context_name_4954;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> __PVT__m_parent;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> __PVT__m_backdoor;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445> __PVT__m_hdl_paths_pool;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_mam> __PVT__mam;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_mem"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_mem* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_mem(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    void __VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, ::CData/*0:0*/ &Xcheck_accessX__Vfuncrtn);
    void __VnoInFunc_XsampleX(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ addr, ::CData/*0:0*/ is_read, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_backdoor_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::IData/*31:0*/ &backdoor_read_func__Vfuncrtn);
    virtual void __VnoInFunc_backdoor_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> comparer, ::CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual VlCoroutine __VnoInFunc_do_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get_access(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string &get_access__Vfuncrtn);
    virtual void __VnoInFunc_get_address(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ offset, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_addresses(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ offset, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlQueue<::QData/*63:0*/> &addr, ::IData/*31:0*/ &get_addresses__Vfuncrtn);
    void __VnoInFunc_get_backdoor(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ inherited, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn);
    virtual void __VnoInFunc_get_block(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    void __VnoInFunc_get_default_map(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, ::std::string kind, ::std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_local_map(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>> &maps);
    void __VnoInFunc_get_n_bits(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_bits__Vfuncrtn);
    void __VnoInFunc_get_n_bytes(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_n_maps(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_maps__Vfuncrtn);
    virtual void __VnoInFunc_get_offset(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ offset, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ &get_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_rights(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string &get_rights__Vfuncrtn);
    void __VnoInFunc_get_size(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ &get_size__Vfuncrtn);
    virtual void __VnoInFunc_get_virtual_registers(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg>> &regs);
    void __VnoInFunc_has_hdl_path(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind, ::CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    void __VnoInFunc_is_in_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::CData/*0:0*/ &is_in_map__Vfuncrtn);
    virtual void __VnoInFunc_peek(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ offset, ::QData/*63:0*/ &value, ::std::string kind, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual void __VnoInFunc_poke(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ offset, ::QData/*63:0*/ value, ::std::string kind, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_read(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ offset, ::QData/*63:0*/ &value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual void __VnoInFunc_sample(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ offset, ::CData/*0:0*/ is_read, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_set_coverage(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ is_on, ::IData/*31:0*/ &set_coverage__Vfuncrtn);
    virtual void __VnoInFunc_set_offset(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ offset, ::CData/*0:0*/ unmapped);
    virtual VlCoroutine __VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ offset, ::QData/*63:0*/ value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_mem() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ size, ::IData/*31:0*/ n_bits, ::std::string access, ::IData/*31:0*/ has_coverage);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_mem();
};


#endif  // guard
