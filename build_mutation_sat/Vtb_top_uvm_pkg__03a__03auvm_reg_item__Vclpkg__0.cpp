// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi3429b725> __Vfunc_get__Vfuncout_1507;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi3429b725__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1507);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1507;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, ""s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_item"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_sequence_item::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__prior = 0xffffffffU;
    /*super.new*/;
    this->__PVT__value.renew(1U);
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT____Vvalue_size, 0x0000000000000020ULL, 
                                                                   "__Vvalue_size", 0ULL);
}

extern const ::VlUnpacked<::std::string, 4> Vtb_top__ConstPool__CONSARRAY_7;
extern const ::VlUnpacked<::std::string, 4> Vtb_top__ConstPool__CONSARRAY_8;
extern const ::VlUnpacked<::std::string, 4> Vtb_top__ConstPool__CONSARRAY_9;
extern const ::VlUnpacked<::std::string, 4> Vtb_top__ConstPool__CONSARRAY_10;

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_3__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_2;
    ::IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    ::std::string __VlefCall_0__get_full_name;
    ::IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    ::std::string s;
    ::std::string value_s;
    convert2string__Vfuncrtn = ""s;
    s = ""s;
    value_s = ""s;
    if ((VlNull{} == this->__PVT__element)) {
        __VlefCall_0__get_full_name = "null"s;
    } else {
        VL_NULL_CHECK(this->__PVT__element, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 231)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    }
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("kind="s, 
                                                                                ((3U 
                                                                                < this->__PVT__kind)
                                                                                 ? ""s
                                                                                 : Vtb_top__ConstPool__CONSARRAY_7
                                                                                [
                                                                                (3U 
                                                                                & this->__PVT__kind)])), " ele_kind="s), 
                                                     ((2U 
                                                       < this->__PVT__element_kind)
                                                       ? ""s
                                                       : Vtb_top__ConstPool__CONSARRAY_8
                                                      [
                                                      (3U 
                                                       & this->__PVT__element_kind)])), " ele_name="s), __VlefCall_0__get_full_name);
    __VlefLogAnd_2 = VL_LTS_III(32, 1U, this->__PVT__value.size());
    if (__VlefLogAnd_2) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x0000012cU, 0U, "RegModel"s, __VlefCall_1__uvm_report_enabled);
        __VlefLogAnd_2 = (0U != __VlefCall_1__uvm_report_enabled);
    }
    if (__VlefLogAnd_2) {
        value_s = "'{"s;
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__value.size())) {
            value_s = VL_CONCATN_NNN(value_s, VL_SFORMATF_N_NX("%0h,",1
                                                               , '#',64,this->__PVT__value.at(unnamedblk1__DOT__i)) );
            unnamedblk1__DOT__i = ((::IData)(1U) + unnamedblk1__DOT__i);
        }
        value_s = VL_PUTC_N(value_s, (VL_LEN_IN(value_s) 
                                      - (::IData)(1U)), 0x7dU);
    } else {
        VL_SFORMAT_NX(value_s,"%0h",1, '#',64,this->__PVT__value.at(0U));
    }
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, " value="s), value_s);
    if ((2U == this->__PVT__element_kind)) {
        s = VL_CONCATN_NNN(s, VL_SFORMATF_N_NX(" offset=%0h",1
                                               , '#',64,this->__PVT__offset) );
    }
    if ((VlNull{} == this->__PVT__map)) {
        __VlefCall_3__get_full_name = "null"s;
    } else {
        VL_NULL_CHECK(this->__PVT__map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 254)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
    }
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(s, " map="s), __VlefCall_3__get_full_name), " path="s), 
                       ((3U < this->__PVT__path) ? ""s
                         : Vtb_top__ConstPool__CONSARRAY_9
                        [(3U & this->__PVT__path)]));
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, " status="s), 
                       ((2U < this->__PVT__status) ? ""s
                         : Vtb_top__ConstPool__CONSARRAY_10
                        [(3U & this->__PVT__status)]));
    convert2string__Vfuncrtn = s;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_22__get_line;
    ::std::string __VlefCall_21__get_fname;
    ::IData/*31:0*/ __VlefCall_20__get_priority;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_19__get_parent_sequence;
    ::std::string __VlefCall_18__get_bd_kind;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_17__get_extension;
    ::IData/*31:0*/ __VlefCall_16__get_door;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_15__get_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_14__get_local_map;
    ::IData/*31:0*/ __VlefCall_13__get_status;
    ::QData/*63:0*/ __VlefCall_12__get_offset;
    ::IData/*31:0*/ __VlefCall_11__get_kind;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __VlefCall_10__get_element;
    ::IData/*31:0*/ __VlefCall_9__get_element_kind;
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_5__uvm_get_report_object;
    ::IData/*31:0*/ __VlefExpr_4;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rhs_;
    {
        if ((VlNull{} == rhs)) {
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_0__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 270)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 270)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "REG/NULL"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 270)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "REG/NULL"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "REG/NULL"s, "do_copy: rhs argument is null"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh"s, 0x0000010eU, ""s, 1U);
            }
        }
        __VlefExpr_4 = VL_CAST_DYNAMIC(rhs, rhs_);
        if ((1U & (~ (0U != __VlefExpr_4)))) {
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_5__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 274)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 274)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "WRONG_TYPE"s, __VlefCall_6__get_report_verbosity_level);
            __VlefLogAnd_8 = VL_LTES_III(32, 0U, __VlefCall_6__get_report_verbosity_level);
            if (__VlefLogAnd_8) {
                VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 274)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "WRONG_TYPE"s, __VlefCall_7__get_report_action);
                __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_8))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "WRONG_TYPE"s, "Provided rhs is not of type uvm_reg_item"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh"s, 0x00000112U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        Vtb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 278)->__VnoInFunc_get_element_kind(vlSymsp, __VlefCall_9__get_element_kind);
        this->__VnoInFunc_set_element_kind(vlSymsp, __VlefCall_9__get_element_kind);
        VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 279)->__VnoInFunc_get_element(vlSymsp, __VlefCall_10__get_element);
        this->__VnoInFunc_set_element(vlSymsp, __VlefCall_10__get_element);
        VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 280)->__VnoInFunc_get_kind(vlSymsp, __VlefCall_11__get_kind);
        this->__VnoInFunc_set_kind(vlSymsp, __VlefCall_11__get_kind);
        VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 281)->__VnoInFunc_get_value_array(vlSymsp, this->__PVT__value);
        VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 282)->__VnoInFunc_get_offset(vlSymsp, __VlefCall_12__get_offset);
        this->__VnoInFunc_set_offset(vlSymsp, __VlefCall_12__get_offset);
        VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 283)->__VnoInFunc_get_status(vlSymsp, __VlefCall_13__get_status);
        this->__VnoInFunc_set_status(vlSymsp, __VlefCall_13__get_status);
        VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 284)->__VnoInFunc_get_local_map(vlSymsp, __VlefCall_14__get_local_map);
        this->__VnoInFunc_set_local_map(vlSymsp, __VlefCall_14__get_local_map);
        VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 285)->__VnoInFunc_get_map(vlSymsp, __VlefCall_15__get_map);
        this->__VnoInFunc_set_map(vlSymsp, __VlefCall_15__get_map);
        VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 286)->__VnoInFunc_get_door(vlSymsp, __VlefCall_16__get_door);
        this->__VnoInFunc_set_door(vlSymsp, __VlefCall_16__get_door);
        VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 287)->__VnoInFunc_get_extension(vlSymsp, __VlefCall_17__get_extension);
        this->__VnoInFunc_set_extension(vlSymsp, __VlefCall_17__get_extension);
        VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 288)->__VnoInFunc_get_bd_kind(vlSymsp, __VlefCall_18__get_bd_kind);
        this->__VnoInFunc_set_bd_kind(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_18__get_bd_kind));
        VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 289)->__VnoInFunc_get_parent_sequence(vlSymsp, __VlefCall_19__get_parent_sequence);
        this->__VnoInFunc_set_parent_sequence(vlSymsp, __VlefCall_19__get_parent_sequence);
        VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 290)->__VnoInFunc_get_priority(vlSymsp, __VlefCall_20__get_priority);
        this->__VnoInFunc_set_priority(vlSymsp, __VlefCall_20__get_priority);
        VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 291)->__VnoInFunc_get_fname(vlSymsp, __VlefCall_21__get_fname);
        this->__VnoInFunc_set_fname(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_21__get_fname));
        VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 292)->__VnoInFunc_get_line(vlSymsp, __VlefCall_22__get_line);
        this->__VnoInFunc_set_line(vlSymsp, __VlefCall_22__get_line);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_element_kind(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ element_kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_element_kind\n"); );
    // Body
    this->__PVT__element_kind = element_kind;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_element_kind(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_element_kind__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_element_kind\n"); );
    // Body
    get_element_kind__Vfuncrtn = this->__PVT__element_kind;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_element(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> element) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_element\n"); );
    // Body
    this->__PVT__element = element;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_element(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &get_element__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_element\n"); );
    // Body
    get_element__Vfuncrtn = this->__PVT__element;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_kind(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_kind\n"); );
    // Body
    this->__PVT__kind = kind;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_kind(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_kind__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_kind\n"); );
    // Body
    get_kind__Vfuncrtn = this->__PVT__kind;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_value(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ value, ::IData/*31:0*/ idx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_value\n"); );
    // Body
    if ((idx >= this->__PVT__value.size())) {
        this->__PVT__value.renew_copy(((::IData)(1U) 
                                       + idx), this->__PVT__value);
    }
    this->__PVT__value.atWrite(idx) = value;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_value(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ idx, ::QData/*63:0*/ &get_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_value\n"); );
    // Body
    get_value__Vfuncrtn = ((idx < this->__PVT__value.size())
                            ? this->__PVT__value.at(idx)
                            : 0ULL);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_value_size(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_value_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_value_size\n"); );
    // Body
    get_value_size__Vfuncrtn = this->__PVT__value.size();
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_value_array(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::QData/*63:0*/> &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_value_array\n"); );
    // Body
    value = this->__PVT__value;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_offset(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ offset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_offset\n"); );
    // Body
    this->__PVT__offset = offset;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_offset(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ &get_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_offset\n"); );
    // Body
    get_offset__Vfuncrtn = this->__PVT__offset;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_status(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_status\n"); );
    // Body
    this->__PVT__status = status;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_status(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_status\n"); );
    // Body
    get_status__Vfuncrtn = this->__PVT__status;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_local_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_local_map\n"); );
    // Body
    this->__PVT__local_map = map;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_local_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_local_map\n"); );
    // Body
    get_local_map__Vfuncrtn = this->__PVT__local_map;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_map\n"); );
    // Body
    this->__PVT__map = map;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_map\n"); );
    // Body
    get_map__Vfuncrtn = this->__PVT__map;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_door(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ door) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_door\n"); );
    // Body
    this->__PVT__path = door;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_door(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_door__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_door\n"); );
    // Body
    get_door__Vfuncrtn = this->__PVT__path;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_parent_sequence(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_parent_sequence\n"); );
    // Body
    this->__PVT__parent = parent;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_parent_sequence(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> &get_parent_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_parent_sequence\n"); );
    // Body
    get_parent_sequence__Vfuncrtn = this->__PVT__parent;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_priority(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_priority\n"); );
    // Body
    this->__PVT__prior = value;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_priority(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_priority__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_priority\n"); );
    // Body
    get_priority__Vfuncrtn = this->__PVT__prior;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_extension(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_extension\n"); );
    // Body
    this->__PVT__extension = extension;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_extension(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &get_extension__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_extension\n"); );
    // Body
    get_extension__Vfuncrtn = this->__PVT__extension;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_bd_kind(Vtb_top__Syms* __restrict vlSymsp, ::std::string bd_kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_bd_kind\n"); );
    // Body
    this->__PVT__bd_kind = bd_kind;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_bd_kind(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_bd_kind__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_bd_kind\n"); );
    // Body
    get_bd_kind__Vfuncrtn = this->__PVT__bd_kind;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_fname(Vtb_top__Syms* __restrict vlSymsp, ::std::string fname) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_fname\n"); );
    // Body
    this->__PVT__fname = fname;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_fname(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_fname__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_fname\n"); );
    // Body
    get_fname__Vfuncrtn = this->__PVT__fname;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_line(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_set_line\n"); );
    // Body
    this->__PVT__lineno = line;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_line(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_line__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_line\n"); );
    // Body
    get_line__Vfuncrtn = this->__PVT__lineno;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___Vresize_constrained_arrays(vlSymsp);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_max_values_resize_constrained_array(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_max_values_resize_constrained_array\n"); );
    // Body
    this->__PVT__value.resize(this->__PVT____Vvalue_size);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_max_values_setup_constraint(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_max_values_setup_constraint\n"); );
    // Body
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(bvand (__Vbv (bvsgt __Vvalue_size #x00000000)) (__Vbv (bvslt __Vvalue_size #x000003e8)))"s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 0x00000069U, 
                                                              "  constraint max_values { value.size() > 0 && value.size() < 1000; }");
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(__Vbv (bvsge __Vvalue_size #x00000000))"s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 0x00000069U, 
                                                              "  constraint max_values { value.size() > 0 && value.size() < 1000; }");
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vresize_constrained_arrays(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vresize_constrained_arrays\n"); );
    // Body
    {
        // Inlined CFunc: __VnoInFunc_max_values_resize_constrained_array
        this->__PVT__value.resize(this->__PVT____Vvalue_size);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_max_values_setup_constraint(vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___VupdateRandVars\n"); );
    // Body
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.update_var(this->__PVT____Vvalue_size, 
                                                                    "__Vvalue_size");
}

extern const ::VlUnpacked<::IData/*31:0*/, 4> Vtb_top__ConstPool__CONSARRAY_16;

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___VBasicRand\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_1____VBasicRand;
    ::IData/*31:0*/ __VlefCall_0__randomize;
    ::IData/*31:0*/ __VrandBlock__18__DOT____Vrandarr___3;
    __VrandBlock__18__DOT____Vrandarr___3 = 0;
    ::IData/*31:0*/ __VrandBlock__18__DOT____Vrandarr___3__Vloopsize;
    __VrandBlock__18__DOT____Vrandarr___3__Vloopsize = 0;
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__kind = ((3U >= (3U & VL_RANDOM_RNG_I(__Vm_rng)))
                          ? Vtb_top__ConstPool__CONSARRAY_16
                         [(3U & VL_RANDOM_RNG_I(__Vm_rng))]
                          : 0U);
    __VrandBlock__18__DOT____Vrandarr___3 = 0U;
    while ((__VrandBlock__18__DOT____Vrandarr___3 < this->__PVT__value.size())) {
        __VrandBlock__18__DOT____Vrandarr___3__Vloopsize 
            = this->__PVT__value.size();
        this->__PVT__value.atWrite(__VrandBlock__18__DOT____Vrandarr___3) 
            = VL_RANDOM_RNG_Q(__Vm_rng);
        if ((__VrandBlock__18__DOT____Vrandarr___3__Vloopsize 
             <= this->__PVT__value.size())) {
            __VrandBlock__18__DOT____Vrandarr___3 = 
                ((::IData)(1U) + __VrandBlock__18__DOT____Vrandarr___3);
        }
    }
    this->__PVT__offset = VL_RANDOM_RNG_Q(__Vm_rng);
    if ((VlNull{} != this->__PVT__parent)) {
        VL_NULL_CHECK(this->__PVT__parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 57)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
        __VBasicRand__Vfuncrtn = (__VBasicRand__Vfuncrtn 
                                  & __VlefCall_0__randomize);
    }
    if ((VlNull{} != this->__PVT__extension)) {
        VL_NULL_CHECK(this->__PVT__extension, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_item.svh", 57)->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_1____VBasicRand);
        __VBasicRand__Vfuncrtn = (__VBasicRand__Vfuncrtn 
                                  & __VlefCall_1____VBasicRand);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_item::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__element_kind = 0;
    __PVT__kind = 0;
    __PVT__value.atDefault() = 0;
    __PVT__offset = 0;
    __PVT__status = 0;
    __PVT__path = 0;
    __PVT__lineno = 0;
    __PVT____Vvalue_size = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_reg_item::~Vtb_top_uvm_pkg__03a__03auvm_reg_item() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_item::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_item::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_item::to_string_middle\n"); );
    // Body
    std::string out;
    out += "element_kind:" + VL_TO_STRING(__PVT__element_kind);
    out += ", element:" + VL_TO_STRING(__PVT__element);
    out += ", kind:" + VL_TO_STRING(__PVT__kind);
    out += ", value:" + VL_TO_STRING(__PVT__value);
    out += ", offset:" + VL_TO_STRING(__PVT__offset);
    out += ", status:" + VL_TO_STRING(__PVT__status);
    out += ", local_map:" + VL_TO_STRING(__PVT__local_map);
    out += ", map:" + VL_TO_STRING(__PVT__map);
    out += ", path:" + VL_TO_STRING(__PVT__path);
    out += ", parent:" + VL_TO_STRING(__PVT__parent);
    out += ", prior:" + VL_TO_STRING(__PVT__prior);
    out += ", extension:" + VL_TO_STRING(__PVT__extension);
    out += ", bd_kind:" + VL_TO_STRING(__PVT__bd_kind);
    out += ", fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    out += ", __Vvalue_size:" + VL_TO_STRING(__PVT____Vvalue_size);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_sequence_item::to_string_middle();
    return (out);
}
