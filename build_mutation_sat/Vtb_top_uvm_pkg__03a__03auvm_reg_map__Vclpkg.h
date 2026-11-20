// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REG_MAP__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REG_MAP__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_top_uvm_pkg.h"
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_event_;
class Vtb_top_uvm_pkg__03a__03auvm_mem;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pia0d5f9ca;
class Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi5f4a92bc;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_reg;
class Vtb_top_uvm_pkg__03a__03auvm_reg_adapter;
class Vtb_top_uvm_pkg__03a__03auvm_reg_block;
class Vtb_top_uvm_pkg__03a__03auvm_reg_field;
class Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vtb_top_uvm_pkg__03a__03auvm_reg_item;
class Vtb_top_uvm_pkg__03a__03auvm_reg_map;
class Vtb_top_uvm_pkg__03a__03auvm_reg_map_info;
class Vtb_top_uvm_pkg__03a__03auvm_reg_seq_base;
class Vtb_top_uvm_pkg__03a__03auvm_reg_transaction_order_policy;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vtb_top_uvm_pkg__03a__03auvm_sequencer_base;
class Vtb_top_uvm_pkg__03a__03auvm_vreg;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __PVT__m_backdoor;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_backdoor(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &backdoor__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_reg_map : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_byte_addressing;
    ::CData/*0:0*/ __PVT__m_auto_predict;
    ::CData/*0:0*/ __PVT__m_check_on_read;
    ::IData/*31:0*/ __PVT__m_n_bytes;
    ::IData/*31:0*/ __PVT__m_endian;
    ::IData/*31:0*/ __PVT__m_system_n_bytes;
    ::QData/*63:0*/ __PVT__m_base_addr;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>, ::QData/*63:0*/> __PVT__m_submaps;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>, ::std::string> __PVT__m_submap_rights;
    ::std::string __Vtask_uvm_report_error__id_4958;
    ::std::string __Vtask_uvm_report_error__message_4959;
    ::std::string __Vtask_uvm_report_error__filename_4961;
    ::std::string __Vtask_uvm_report_error__context_name_4963;
    ::std::string __Vtask_uvm_report_error__id_4967;
    ::std::string __Vtask_uvm_report_error__message_4968;
    ::std::string __Vtask_uvm_report_error__filename_4970;
    ::std::string __Vtask_uvm_report_error__context_name_4972;
    ::std::string __Vtask_uvm_report_error__id_4976;
    ::std::string __Vtask_uvm_report_error__message_4977;
    ::std::string __Vtask_uvm_report_error__filename_4979;
    ::std::string __Vtask_uvm_report_error__context_name_4981;
    ::std::string __Vtask_uvm_report_warning__id_4986;
    ::std::string __Vtask_uvm_report_warning__message_4987;
    ::std::string __Vtask_uvm_report_warning__filename_4989;
    ::std::string __Vtask_uvm_report_warning__context_name_4991;
    ::std::string __Vtask_uvm_report_warning__id_4995;
    ::std::string __Vtask_uvm_report_warning__message_4996;
    ::std::string __Vtask_uvm_report_warning__filename_4998;
    ::std::string __Vtask_uvm_report_warning__context_name_5000;
    ::std::string __Vtask_uvm_report_error__id_5004;
    ::std::string __Vtask_uvm_report_error__message_5005;
    ::std::string __Vtask_uvm_report_error__filename_5007;
    ::std::string __Vtask_uvm_report_error__context_name_5009;
    ::std::string __Vtask_uvm_report_warning__id_5015;
    ::std::string __Vtask_uvm_report_warning__message_5016;
    ::std::string __Vtask_uvm_report_warning__filename_5018;
    ::std::string __Vtask_uvm_report_warning__context_name_5020;
    ::std::string __Vtask_uvm_report_warning__id_5024;
    ::std::string __Vtask_uvm_report_warning__message_5025;
    ::std::string __Vtask_uvm_report_warning__filename_5027;
    ::std::string __Vtask_uvm_report_warning__context_name_5029;
    ::std::string __Vtask_uvm_report_error__id_5033;
    ::std::string __Vtask_uvm_report_error__message_5034;
    ::std::string __Vtask_uvm_report_error__filename_5036;
    ::std::string __Vtask_uvm_report_error__context_name_5038;
    ::std::string __Vtask_uvm_report_info__id_5042;
    ::std::string __Vtask_uvm_report_info__message_5043;
    ::std::string __Vtask_uvm_report_info__filename_5045;
    ::std::string __Vtask_uvm_report_info__context_name_5047;
    ::std::string __Vtask_uvm_report_error__id_5051;
    ::std::string __Vtask_uvm_report_error__message_5052;
    ::std::string __Vtask_uvm_report_error__filename_5054;
    ::std::string __Vtask_uvm_report_error__context_name_5056;
    ::std::string __Vtask_uvm_report_error__id_5060;
    ::std::string __Vtask_uvm_report_error__message_5061;
    ::std::string __Vtask_uvm_report_error__filename_5063;
    ::std::string __Vtask_uvm_report_error__context_name_5065;
    ::std::string __Vtask_uvm_report_warning__id_5069;
    ::std::string __Vtask_uvm_report_warning__message_5070;
    ::std::string __Vtask_uvm_report_warning__filename_5072;
    ::std::string __Vtask_uvm_report_warning__context_name_5074;
    ::std::string __Vtask_uvm_report_error__id_5079;
    ::std::string __Vtask_uvm_report_error__message_5080;
    ::std::string __Vtask_uvm_report_error__filename_5082;
    ::std::string __Vtask_uvm_report_error__context_name_5084;
    ::std::string __Vtask_uvm_report_error__id_5088;
    ::std::string __Vtask_uvm_report_error__message_5089;
    ::std::string __Vtask_uvm_report_error__filename_5091;
    ::std::string __Vtask_uvm_report_error__context_name_5093;
    ::std::string __Vtask_uvm_report_error__id_5097;
    ::std::string __Vtask_uvm_report_error__message_5098;
    ::std::string __Vtask_uvm_report_error__filename_5100;
    ::std::string __Vtask_uvm_report_error__context_name_5102;
    ::std::string __Vtask_uvm_report_info__id_5120;
    ::std::string __Vtask_uvm_report_info__message_5121;
    ::std::string __Vtask_uvm_report_info__filename_5123;
    ::std::string __Vtask_uvm_report_info__context_name_5125;
    ::std::string __Vtask_uvm_report_info__id_5136;
    ::std::string __Vtask_uvm_report_info__message_5137;
    ::std::string __Vtask_uvm_report_info__filename_5139;
    ::std::string __Vtask_uvm_report_info__context_name_5141;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> __PVT__m_sequence_wrapper;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_adapter> __PVT__m_adapter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> __PVT__m_sequencer;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> __PVT__m_parent;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __PVT__m_parent_map;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info>> __PVT__m_regs_info;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info>> __PVT__m_mems_info;
    ::VlAssocArray<::QData/*63:0*/, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>> __PVT__m_regs_by_offset;
    ::VlAssocArray<::QData/*63:0*/, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>> __PVT__m_regs_by_offset_wo;
    ::VlAssocArray<::VlWide<5>/*159:0*/, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>> __PVT__m_mems_by_offset;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_transaction_order_policy> __PVT__policy;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_map"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_reg_map* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_reg_map(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    void __VnoInFunc_Xget_bus_infoX(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, ::IData/*31:0*/ &size, ::IData/*31:0*/ &lsb, ::IData/*31:0*/ &addr_skip);
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    void __VnoInFunc_add_reg(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> rg, ::QData/*63:0*/ offset, ::std::string rights, ::CData/*0:0*/ unmapped, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor);
    void __VnoInFunc_ceil(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ a, ::IData/*31:0*/ b, ::IData/*31:0*/ &ceil__Vfuncrtn);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    VlCoroutine __VnoInFunc_do_bus_access(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    VlCoroutine __VnoInFunc_do_bus_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    VlCoroutine __VnoInFunc_do_bus_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual VlCoroutine __VnoInFunc_do_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_get_adapter(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ hier, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_adapter> &get_adapter__Vfuncrtn);
    void __VnoInFunc_get_addr_unit_bytes(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_addr_unit_bytes__Vfuncrtn);
    void __VnoInFunc_get_auto_predict(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_auto_predict__Vfuncrtn);
    void __VnoInFunc_get_base_addr(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ hier, ::QData/*63:0*/ &get_base_addr__Vfuncrtn);
    void __VnoInFunc_get_check_on_read(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_check_on_read__Vfuncrtn);
    void __VnoInFunc_get_endian(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ hier, ::IData/*31:0*/ &get_endian__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> &fields, ::IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_mem_map_info(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> mem, ::CData/*0:0*/ error, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> &get_mem_map_info__Vfuncrtn);
    virtual void __VnoInFunc_get_memories(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem>> &mems, ::IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_n_bytes(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ hier, ::IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    void __VnoInFunc_get_parent_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_parent_map__Vfuncrtn);
    void __VnoInFunc_get_physical_addresses(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ base_addr, ::QData/*63:0*/ mem_offset, ::IData/*31:0*/ n_bytes, ::VlQueue<::QData/*63:0*/> &addr, ::IData/*31:0*/ &get_physical_addresses__Vfuncrtn);
    void __VnoInFunc_get_physical_addresses_to_map(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ base_addr, ::QData/*63:0*/ mem_offset, ::IData/*31:0*/ n_bytes, ::VlQueue<::QData/*63:0*/> &addr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> parent_map, ::IData/*31:0*/ &byte_offset, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> mem, ::IData/*31:0*/ &get_physical_addresses_to_map__Vfuncrtn);
    void __VnoInFunc_get_reg_map_info(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> rg, ::CData/*0:0*/ error, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> &get_reg_map_info__Vfuncrtn);
    virtual void __VnoInFunc_get_registers(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>> &regs, ::IData/*31:0*/ hier);
    void __VnoInFunc_get_root_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_root_map__Vfuncrtn);
    void __VnoInFunc_get_sequencer(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ hier, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> &get_sequencer__Vfuncrtn);
    void __VnoInFunc_get_submap_offset(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> submap, ::QData/*63:0*/ &get_submap_offset__Vfuncrtn);
    void __VnoInFunc_get_submaps(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>> &maps, ::IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_virtual_registers(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg>> &regs, ::IData/*31:0*/ hier);
    void __VnoInFunc_m_set_mem_offset(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> mem, ::QData/*63:0*/ offset, ::CData/*0:0*/ unmapped);
    void __VnoInFunc_m_set_reg_offset(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> rg, ::QData/*63:0*/ offset, ::CData/*0:0*/ unmapped);
    VlCoroutine __VnoInFunc_perform_accesses(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<Vtb_top_uvm_reg_bus_op__struct__0> &accesses, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind);
    virtual void __VnoInFunc_set_sequencer(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    virtual void __VnoInFunc_unregister(Vtb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_reg_map() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_reg_map();
};


#endif  // guard
