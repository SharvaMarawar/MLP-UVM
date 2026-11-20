// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REG_BLOCK__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REG_BLOCK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_comparer;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_mem;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pid4ac347c;
class Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi7a622f08;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_packer;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_queue__Tz2757cb3c;
class Vtb_top_uvm_pkg__03a__03auvm_reg;
class Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor;
class Vtb_top_uvm_pkg__03a__03auvm_reg_block;
class Vtb_top_uvm_pkg__03a__03auvm_reg_field;
class Vtb_top_uvm_pkg__03a__03auvm_reg_map;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_top_uvm_pkg__03a__03auvm_vreg;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_enable_reg_lookup_cache;
    ::IData/*31:0*/ __PVT__id;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block>, ::CData/*0:0*/> __PVT__m_roots;
            ::VlAssocArray<::std::string, ::IData/*31:0*/> __PVT__m_root_names;
            ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block>> __PVT__m_reg_block_registry;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_get_root_blocks(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block>> &blks);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_reg_block : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__locked;
    ::IData/*31:0*/ __PVT__default_path;
    ::IData/*31:0*/ __PVT__has_cover;
    ::IData/*31:0*/ __PVT__cover_on;
    ::IData/*31:0*/ __PVT__lineno;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>, ::CData/*0:0*/> __PVT__maps;
    ::VlAssocArray<::std::string, ::std::string> __PVT__root_hdl_paths;
    ::std::string __PVT__m_name;
    ::std::string __PVT__default_hdl_path;
    ::std::string __PVT__fname;
    ::std::string __Vtask_uvm_report_info__id_5152;
    ::std::string __Vtask_uvm_report_info__message_5153;
    ::std::string __Vtask_uvm_report_info__filename_5155;
    ::std::string __Vtask_uvm_report_info__context_name_5157;
    ::std::string __Vtask_uvm_report_info__id_5161;
    ::std::string __Vtask_uvm_report_info__message_5162;
    ::std::string __Vtask_uvm_report_info__filename_5164;
    ::std::string __Vtask_uvm_report_info__context_name_5166;
    ::std::string __Vtask_uvm_report_error__id_5171;
    ::std::string __Vtask_uvm_report_error__message_5172;
    ::std::string __Vtask_uvm_report_error__filename_5174;
    ::std::string __Vtask_uvm_report_error__context_name_5176;
    ::std::string __Vtask_uvm_report_error__id_5183;
    ::std::string __Vtask_uvm_report_error__message_5184;
    ::std::string __Vtask_uvm_report_error__filename_5186;
    ::std::string __Vtask_uvm_report_error__context_name_5188;
    ::std::string __Vtask_uvm_report_warning__id_5194;
    ::std::string __Vtask_uvm_report_warning__message_5195;
    ::std::string __Vtask_uvm_report_warning__filename_5197;
    ::std::string __Vtask_uvm_report_warning__context_name_5199;
    ::std::string __Vtask_uvm_report_warning__id_5203;
    ::std::string __Vtask_uvm_report_warning__message_5204;
    ::std::string __Vtask_uvm_report_warning__filename_5206;
    ::std::string __Vtask_uvm_report_warning__context_name_5208;
    ::std::string __Vtask_uvm_report_warning__id_5212;
    ::std::string __Vtask_uvm_report_warning__message_5213;
    ::std::string __Vtask_uvm_report_warning__filename_5215;
    ::std::string __Vtask_uvm_report_warning__context_name_5217;
    ::VlAssignableEvent __PVT__m_uvm_lock_model_complete;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> __PVT__parent;
    ::VlAssocArray<::IData/*31:0*/, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block>> __PVT__blks;
    ::VlAssocArray<::IData/*31:0*/, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>> __PVT__regs;
    ::VlAssocArray<::IData/*31:0*/, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg>> __PVT__vregs;
    ::VlAssocArray<::IData/*31:0*/, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>> __PVT__mems;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> __PVT__backdoor;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi7a622f08> __PVT__hdl_paths_pool;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __PVT__default_map;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_block"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_reg_block* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_reg_block(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    void __VnoInFunc_XsampleX(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ addr, ::CData/*0:0*/ is_read, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> comparer, ::CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer);
    void __VnoInFunc_get_backdoor(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ inherited, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn);
    void __VnoInFunc_get_blocks(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block>> &blks, ::IData/*31:0*/ hier);
    void __VnoInFunc_get_default_door(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_default_door__Vfuncrtn);
    void __VnoInFunc_get_default_hdl_path(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_default_hdl_path__Vfuncrtn);
    void __VnoInFunc_get_default_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> &fields, ::IData/*31:0*/ hier);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::std::string> &paths, ::std::string kind, ::std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>> &maps);
    virtual void __VnoInFunc_get_memories(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>> &mems, ::IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_registers(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>> &regs, ::IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_virtual_registers(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg>> &regs, ::IData/*31:0*/ hier);
    void __VnoInFunc_has_hdl_path(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind, ::CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    void __VnoInFunc_is_hdl_path_root(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind, ::CData/*0:0*/ &is_hdl_path_root__Vfuncrtn);
    void __VnoInFunc_is_locked(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_locked__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_mirror(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::IData/*31:0*/ check, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind);
    virtual void __VnoInFunc_sample(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ offset, ::CData/*0:0*/ is_read, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_sample_values(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_set_coverage(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ is_on, ::IData/*31:0*/ &set_coverage__Vfuncrtn);
    void __VnoInFunc_set_lock(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ v);
    virtual void __VnoInFunc_unregister(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> m);
    virtual VlCoroutine __VnoInFunc_update(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_reg_block() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::IData/*31:0*/ has_coverage);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_reg_block();
};


#endif  // guard
