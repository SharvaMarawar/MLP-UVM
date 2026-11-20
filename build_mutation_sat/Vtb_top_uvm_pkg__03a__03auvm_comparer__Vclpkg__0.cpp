// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

std::string VL_TO_STRING(const Vtb_top_state_info_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_comparer__Vclpkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{state:" + VL_TO_STRING(obj.__PVT__state);
    out += ", ret_val:" + VL_TO_STRING(obj.__PVT__ret_val);
    out += "}";
    return (out);
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi10be4173> __Vfunc_get__Vfuncout_879;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi10be4173__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_879);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_879;
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_comparer, vlProcess, vlSymsp, ""s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_comparer, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_comparer"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_policy::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__physical = 1U;
    this->__PVT__abstract = 1U;
    this->__PVT__policy = 0U;
    this->__PVT__show_max = 1U;
    this->__PVT__verbosity = 0x00000064U;
    this->__PVT__sev = 0U;
    this->__PVT__miscompares = ""s;
    this->__PVT__check_type = 1U;
    this->__PVT__result = 0U;
    /*super.new*/;
    this->__PVT__m_threshold = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_int(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ lhs, ::QData/*63:0*/ rhs, ::IData/*31:0*/ size, ::IData/*27:0*/ radix, ::CData/*0:0*/ &compare_field_int__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_int\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_880;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1460;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1463;
    __Vtask_uvm_report_error__verbosity_1463 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1465;
    __Vtask_uvm_report_error__line_1465 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1467;
    __Vtask_uvm_report_error__report_enabled_checked_1467 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_881;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1468;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    ::QData/*63:0*/ mask;
    ::std::string msg;
    {
        compare_field_int__Vfuncrtn = 0U;
        mask = 0;
        msg = ""s;
        if (VL_LTS_III(32, 0x00000040U, size)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_880);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_880;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1460);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1460;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 295)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 295)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/COMPARER/INT/BAD_SIZE"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 295)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/COMPARER/INT/BAD_SIZE"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                __Vtask_uvm_report_error__report_enabled_checked_1467 = 1U;
                this->__Vtask_uvm_report_error__context_name_1466 = ""s;
                __Vtask_uvm_report_error__line_1465 = 0x00000127U;
                this->__Vtask_uvm_report_error__filename_1464 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh"s;
                __Vtask_uvm_report_error__verbosity_1463 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_1462
                              ,"compare_field_int cannot be called with operand size of more than 64 bits. Input argument size=%0d",1
                              , '~',32,size);
                this->__Vtask_uvm_report_error__id_1461 = "UVM/COMPARER/INT/BAD_SIZE"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_881);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_881;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1468);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1468;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1461, this->__Vtask_uvm_report_error__message_1462, __Vtask_uvm_report_error__verbosity_1463, this->__Vtask_uvm_report_error__filename_1464, __Vtask_uvm_report_error__line_1465, this->__Vtask_uvm_report_error__context_name_1466, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1467));
            }
            compare_field_int__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        mask = 0xffffffffffffffffULL;
        mask = VL_SHIFTR_QQI(64,64,32, mask, ((::IData)(0x00000040U) 
                                              - size));
        if (((lhs & mask) != (rhs & mask))) {
            if ((0x01000000U == radix)) {
                VL_SFORMAT_NX(msg,"%s: lhs = 'b%0b : rhs = 'b%0b",3
                              , 'S',&(name), '#',64,
                              (lhs & mask), '#',64,
                              (rhs & mask));
            } else if ((0x06000000U == radix)) {
                VL_SFORMAT_NX(msg,"%s: lhs = 'o%0o : rhs = 'o%0o",3
                              , 'S',&(name), '#',64,
                              (lhs & mask), '#',64,
                              (rhs & mask));
            } else if ((0x02000000U == radix)) {
                VL_SFORMAT_NX(msg,"%s: lhs = %0d : rhs = %0d",3
                              , 'S',&(name), '#',64,
                              (lhs & mask), '#',64,
                              (rhs & mask));
            } else if ((0x09000000U == radix)) {
                VL_SFORMAT_NX(msg,"%s: lhs = %0t : rhs = %0t",4, 'T',-9
                              , 'S',&(name), '#',64,
                              (lhs & mask), '#',64,
                              (rhs & mask));
            } else if ((0x08000000U == radix)) {
                VL_SFORMAT_NX(msg,"%s: lhs = %0s : rhs = %0s",3
                              , 'S',&(name), '#',64,
                              (lhs & mask), '#',64,
                              (rhs & mask));
            } else if ((0x0a000000U == radix)) {
                VL_SFORMAT_NX(msg,"%s: lhs = %0d : rhs = %0d",3
                              , 'S',&(name), '#',64,
                              (lhs & mask), '#',64,
                              (rhs & mask));
            } else {
                VL_SFORMAT_NX(msg,"%s: lhs = 'h%0x : rhs = 'h%0x",3
                              , 'S',&(name), '#',64,
                              (lhs & mask), '#',64,
                              (rhs & mask));
            }
            this->__VnoInFunc_print_msg(vlProcess, vlSymsp, msg);
            compare_field_int__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        compare_field_int__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_m_current_context(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string &m_current_context__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_m_current_context\n"); );
    // Body
    ::std::string unnamedblk2__DOT__full_name;
    ::IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__i;
    unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    m_current_context__Vfuncrtn = ""s;
    if ((0U == this->__PVT__m_object_names.size())) {
        m_current_context__Vfuncrtn = name;
    } else if (((1U == this->__PVT__m_object_names.size()) 
                & (""s == name))) {
        m_current_context__Vfuncrtn = this->__PVT__m_object_names.at(0U);
    } else {
        unnamedblk2__DOT__full_name = ""s;
        unnamedblk2__DOT__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__i, this->__PVT__m_object_names.size())) {
            unnamedblk2__DOT__full_name = ((unnamedblk2__DOT__unnamedblk3__DOT__i 
                                            == (this->__PVT__m_object_names.size() 
                                                - (::IData)(1U)))
                                            ? VL_CONCATN_NNN(unnamedblk2__DOT__full_name, this->__PVT__m_object_names.at(unnamedblk2__DOT__unnamedblk3__DOT__i))
                                            : VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(unnamedblk2__DOT__full_name, this->__PVT__m_object_names.at(unnamedblk2__DOT__unnamedblk3__DOT__i)), "."s));
            unnamedblk2__DOT__unnamedblk3__DOT__i = 
                ((::IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__i);
        }
        m_current_context__Vfuncrtn = ((""s != name)
                                        ? VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(unnamedblk2__DOT__full_name, "."s), name)
                                        : unnamedblk2__DOT__full_name);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_object(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> lhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::CData/*0:0*/ &compare_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_object\n"); );
    // Locals
    ::CData/*0:0*/ __Vfunc_object_compared__ret_val_882;
    __Vfunc_object_compared__ret_val_882 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_883;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1469;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1472;
    __Vtask_uvm_report_warning__verbosity_1472 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1474;
    __Vtask_uvm_report_warning__line_1474 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1476;
    __Vtask_uvm_report_warning__report_enabled_checked_1476 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_884;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1477;
    ::IData/*31:0*/ __Vfunc_get_result__Vfuncout_885;
    __Vfunc_get_result__Vfuncout_885 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> __Vtask_pop_active_object__Vfuncout_1478;
    ::CData/*1:0*/ __Vtask_uvm_report__severity_1479;
    __Vtask_uvm_report__severity_1479 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report__verbosity_1482;
    __Vtask_uvm_report__verbosity_1482 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report__line_1484;
    __Vtask_uvm_report__line_1484 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report__report_enabled_checked_1486;
    __Vtask_uvm_report__report_enabled_checked_1486 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_886;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1487;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_31__get_verbosity;
    ::IData/*31:0*/ __VlefCond_30;
    ::IData/*31:0*/ __VlefCall_29__get_inst_id;
    ::std::string __VlefCall_28__get_name;
    ::IData/*31:0*/ __VlefCond_27;
    ::IData/*31:0*/ __VlefCall_26__get_inst_id;
    ::std::string __VlefCall_25__get_name;
    ::IData/*31:0*/ __VlefCall_24__get_result;
    ::IData/*31:0*/ __VlefCall_23__get_show_max;
    ::IData/*31:0*/ __VlefCall_22__get_show_max;
    ::IData/*31:0*/ __VlefCall_21__get_result;
    ::IData/*31:0*/ __VlefCall_20__get_active_object_depth;
    ::IData/*27:0*/ __VlefCall_19__get_recursion_policy;
    ::IData/*31:0*/ __VlefCall_18__get_result;
    ::CData/*0:0*/ __VlefCall_17__user_hook_enabled;
    ::std::string __VlefCall_16__get_name;
    ::std::string __VlefCall_15__get_name;
    ::std::string __VlefCall_14__get_type_name;
    ::std::string __VlefCall_13__get_type_name;
    ::std::string __VlefCall_12__get_type_name;
    ::std::string __VlefCall_11__get_type_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_10__get_object_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_9__get_object_type;
    ::CData/*0:0*/ __VlefCall_8__get_check_type;
    ::IData/*27:0*/ __VlefCall_7__get_recursion_policy;
    ::std::string __VlefCall_6__get_full_name;
    ::std::string __VlefCall_5__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::IData/*27:0*/ __VlefCall_0__get_recursion_policy;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk4__DOT___local_report_object_;
    ::std::string unnamedblk5__DOT__msg;
    ::IData/*31:0*/ old_result;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op> field_op;
    ::IData/*31:0*/ prev_state;
    ::CData/*0:0*/ ret_val;
    {
        compare_object__Vfuncrtn = 0U;
        old_result = 0U;
        prev_state = 0U;
        ret_val = 1U;
        if ((rhs == lhs)) {
            compare_object__Vfuncrtn = ret_val;
            goto __Vlabel0;
        }
        this->__PVT__m_object_names.push_back(name);
        if (((0x00040000U == this->__PVT__policy) & 
             (lhs != rhs))) {
            this->__VnoInFunc_print_msg_object(vlSymsp, lhs, rhs);
            ret_val = 0U;
        }
        if (((::IData)(ret_val) & ((VlNull{} == rhs) 
                                   | (VlNull{} == lhs)))) {
            this->__VnoInFunc_print_msg_object(vlSymsp, lhs, rhs);
            ret_val = 0U;
        }
        if (ret_val) {
            this->__VnoInFunc_get_recursion_policy(vlSymsp, __VlefCall_0__get_recursion_policy);
            this->__VnoInFunc_object_compared(vlSymsp, lhs, rhs, __VlefCall_0__get_recursion_policy, __Vfunc_object_compared__ret_val_882, prev_state);
            ret_val = __Vfunc_object_compared__ret_val_882;
            if ((0U != prev_state)) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_883);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_883;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1469);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1469;
                __VlefCall_1__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 458)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk4__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 458)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/COPIER/LOOP"s, __VlefCall_2__get_report_verbosity_level);
                __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
                if (__VlefLogAnd_4) {
                    VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 458)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/COPIER/LOOP"s, __VlefCall_3__get_report_action);
                    __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_4))) {
                    VL_NULL_CHECK(lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 458)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                    VL_NULL_CHECK(rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 458)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                    __Vtask_uvm_report_warning__report_enabled_checked_1476 = 1U;
                    this->__Vtask_uvm_report_warning__context_name_1475 = ""s;
                    __Vtask_uvm_report_warning__line_1474 = 0x000001caU;
                    this->__Vtask_uvm_report_warning__filename_1473 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh"s;
                    __Vtask_uvm_report_warning__verbosity_1472 = 0U;
                    this->__Vtask_uvm_report_warning__message_1471 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Possible loop when comparing '"s, __VlefCall_5__get_full_name), "' to '"s), __VlefCall_6__get_full_name), "'"s));
                    this->__Vtask_uvm_report_warning__id_1470 = "UVM/COPIER/LOOP"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_884);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_884;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1477);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_1477;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_1470, this->__Vtask_uvm_report_warning__message_1471, __Vtask_uvm_report_warning__verbosity_1472, this->__Vtask_uvm_report_warning__filename_1473, __Vtask_uvm_report_warning__line_1474, this->__Vtask_uvm_report_warning__context_name_1475, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1476));
                }
            }
            this->__VnoInFunc_push_active_object(vlProcess, vlSymsp, lhs);
            this->__VnoInFunc_get_recursion_policy(vlSymsp, __VlefCall_7__get_recursion_policy);
            this->__PVT__m_recur_states.atWrite(lhs).atWrite(rhs).atWrite(__VlefCall_7__get_recursion_policy) 
                = Vtb_top_state_info_t__struct__0{
                (::IData)(1U),
                (::CData)(0U)
            };
            this->__VnoInFunc_get_result(vlSymsp, __Vfunc_get_result__Vfuncout_885);
            old_result = __Vfunc_get_result__Vfuncout_885;
            this->__VnoInFunc_get_check_type(vlSymsp, __VlefCall_8__get_check_type);
            if (__VlefCall_8__get_check_type) {
                VL_NULL_CHECK(lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 467)->__VnoInFunc_get_object_type(vlSymsp, __VlefCall_9__get_object_type);
                VL_NULL_CHECK(rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 467)->__VnoInFunc_get_object_type(vlSymsp, __VlefCall_10__get_object_type);
                __VlefCall_8__get_check_type = (__VlefCall_9__get_object_type 
                                                != __VlefCall_10__get_object_type);
            }
            if (__VlefCall_8__get_check_type) {
                VL_NULL_CHECK(lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 468)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_11__get_type_name);
                VL_NULL_CHECK(rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 468)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_12__get_type_name);
                if ((__VlefCall_11__get_type_name != __VlefCall_12__get_type_name)) {
                    VL_NULL_CHECK(lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 469)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_13__get_type_name);
                    VL_NULL_CHECK(rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 469)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_14__get_type_name);
                    this->__VnoInFunc_print_msg(vlProcess, vlSymsp, 
                                                VL_CVT_PACK_STR_NN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("type: lhs = \""s, __VlefCall_13__get_type_name), "\" : rhs = \""s), __VlefCall_14__get_type_name), "\""s)));
                } else {
                    VL_NULL_CHECK(lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 472)->__VnoInFunc_get_name(vlSymsp, __VlefCall_15__get_name);
                    VL_NULL_CHECK(rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 472)->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
                    this->__VnoInFunc_print_msg(vlProcess, vlSymsp, 
                                                VL_CVT_PACK_STR_NN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("get_object_type() for "s, __VlefCall_15__get_name), " does not match get_object_type() for "s), __VlefCall_16__get_name)));
                }
            }
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, field_op);
            VL_NULL_CHECK(field_op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 477)->__VnoInFunc_set(vlProcess, vlSymsp, 4U, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer>{this}, rhs);
            VL_NULL_CHECK(lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 478)->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, field_op);
            VL_NULL_CHECK(field_op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 479)->__VnoInFunc_user_hook_enabled(vlProcess, vlSymsp, __VlefCall_17__user_hook_enabled);
            if (__VlefCall_17__user_hook_enabled) {
                VL_NULL_CHECK(lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 480)->__VnoInFunc_do_compare(vlSymsp, rhs, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer>{this}, ret_val);
            }
            VL_NULL_CHECK(field_op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 482)->__VnoInFunc_m_recycle(vlSymsp);
            this->__VnoInFunc_get_result(vlSymsp, __VlefCall_18__get_result);
            if (((::IData)(ret_val) & (__VlefCall_18__get_result 
                                       > old_result))) {
                ret_val = 0U;
            }
            this->__VnoInFunc_get_recursion_policy(vlSymsp, __VlefCall_19__get_recursion_policy);
            this->__PVT__m_recur_states.atWrite(lhs).atWrite(rhs).atWrite(__VlefCall_19__get_recursion_policy) 
                = Vtb_top_state_info_t__struct__0{
                (::IData)(2U),
                (::CData)(ret_val)
            };
            this->__VnoInFunc_pop_active_object(vlProcess, vlSymsp, __Vtask_pop_active_object__Vfuncout_1478);
        }
        std::ignore = this->__PVT__m_object_names.pop_back();
        this->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_20__get_active_object_depth);
        if (((~ (::IData)(ret_val)) & (0U == __VlefCall_20__get_active_object_depth))) {
            unnamedblk5__DOT__msg = ""s;
            this->__VnoInFunc_get_result(vlSymsp, __VlefCall_21__get_result);
            if ((0U != __VlefCall_21__get_result)) {
                this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_22__get_show_max);
                this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_23__get_show_max);
                this->__VnoInFunc_get_result(vlSymsp, __VlefCall_24__get_result);
                if (((0U != __VlefCall_22__get_show_max) 
                     & (__VlefCall_23__get_show_max 
                        < __VlefCall_24__get_result))) {
                    VL_SFORMAT_NX(unnamedblk5__DOT__msg
                                  ,"%0d Miscompare(s) (%0d shown) for object ",2
                                  , '#',32,this->__PVT__result
                                  , '#',32,this->__PVT__show_max);
                } else {
                    VL_SFORMAT_NX(unnamedblk5__DOT__msg
                                  ,"%0d Miscompare(s) for object ",1
                                  , '#',32,this->__PVT__result);
                }
            }
            if ((VlNull{} == lhs)) {
                __VlefCall_25__get_name = "<null>"s;
            } else {
                VL_NULL_CHECK(lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 523)->__VnoInFunc_get_name(vlSymsp, __VlefCall_25__get_name);
            }
            if ((VlNull{} == lhs)) {
                __VlefCond_27 = 0U;
            } else {
                VL_NULL_CHECK(lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 524)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_26__get_inst_id);
                __VlefCond_27 = __VlefCall_26__get_inst_id;
            }
            if ((VlNull{} == rhs)) {
                __VlefCall_28__get_name = "<null>"s;
            } else {
                VL_NULL_CHECK(rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 525)->__VnoInFunc_get_name(vlSymsp, __VlefCall_28__get_name);
            }
            if ((VlNull{} == rhs)) {
                __VlefCond_30 = 0U;
            } else {
                VL_NULL_CHECK(rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 526)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_29__get_inst_id);
                __VlefCond_30 = __VlefCall_29__get_inst_id;
            }
            this->__VnoInFunc_get_verbosity(vlSymsp, __VlefCall_31__get_verbosity);
            __Vtask_uvm_report__report_enabled_checked_1486 = 0U;
            this->__Vtask_uvm_report__context_name_1485 = ""s;
            __Vtask_uvm_report__line_1484 = 0x0000020fU;
            this->__Vtask_uvm_report__filename_1483 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh"s;
            __Vtask_uvm_report__verbosity_1482 = __VlefCall_31__get_verbosity;
            VL_SFORMAT_NX(this->__Vtask_uvm_report__message_1481
                          ,"%s%s@%0d vs. %s@%0d",5, 'S',&(unnamedblk5__DOT__msg)
                          , 'S',&(__VlefCall_25__get_name)
                          , '~',32,__VlefCond_27, 'S',&(__VlefCall_28__get_name)
                          , '~',32,__VlefCond_30);
            this->__Vtask_uvm_report__id_1480 = "MISCMP"s;
            __Vtask_uvm_report__severity_1479 = this->__PVT__sev;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_886);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report__Vstatic__cs 
                = __Vfunc_get__Vfuncout_886;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 119)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1487);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1487;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 120)->__VnoInFunc_uvm_report(vlProcess, vlSymsp, __Vtask_uvm_report__severity_1479, this->__Vtask_uvm_report__id_1480, this->__Vtask_uvm_report__message_1481, __Vtask_uvm_report__verbosity_1482, this->__Vtask_uvm_report__filename_1483, __Vtask_uvm_report__line_1484, this->__Vtask_uvm_report__context_name_1485, (::IData)(__Vtask_uvm_report__report_enabled_checked_1486));
        }
        compare_object__Vfuncrtn = ret_val;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string lhs, ::std::string rhs, ::CData/*0:0*/ &compare_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string msg;
    {
        compare_string__Vfuncrtn = 0U;
        msg = ""s;
        if ((lhs != rhs)) {
            msg = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN(
                                                                              VL_CONCATN_NNN(name, ": lhs = \""s), lhs), "\" : rhs = \""s), rhs), "\""s);
            this->__VnoInFunc_print_msg(vlProcess, vlSymsp, msg);
            compare_string__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        compare_string__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string msg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg\n"); );
    // Locals
    ::CData/*1:0*/ __Vtask_uvm_report__severity_1488;
    __Vtask_uvm_report__severity_1488 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report__verbosity_1491;
    __Vtask_uvm_report__verbosity_1491 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report__line_1493;
    __Vtask_uvm_report__line_1493 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report__report_enabled_checked_1495;
    __Vtask_uvm_report__report_enabled_checked_1495 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_887;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1496;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_3__get_verbosity;
    ::IData/*31:0*/ __VlefCall_2__get_show_max;
    ::IData/*31:0*/ __VlefCall_1__get_result;
    ::IData/*31:0*/ __VlefCall_0__get_show_max;
    ::std::string tmp;
    this->__VnoInFunc_m_current_context(vlSymsp, msg, tmp);
    this->__PVT__result = ((::IData)(1U) + this->__PVT__result);
    this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_0__get_show_max);
    this->__VnoInFunc_get_result(vlSymsp, __VlefCall_1__get_result);
    this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_2__get_show_max);
    if (((0U == __VlefCall_0__get_show_max) | (__VlefCall_1__get_result 
                                               <= __VlefCall_2__get_show_max))) {
        msg = VL_CONCATN_NNN("Miscompare for "s, tmp);
        this->__VnoInFunc_get_verbosity(vlSymsp, __VlefCall_3__get_verbosity);
        __Vtask_uvm_report__report_enabled_checked_1495 = 0U;
        this->__Vtask_uvm_report__context_name_1494 = ""s;
        __Vtask_uvm_report__line_1493 = 0x0000023fU;
        this->__Vtask_uvm_report__filename_1492 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh"s;
        __Vtask_uvm_report__verbosity_1491 = __VlefCall_3__get_verbosity;
        this->__Vtask_uvm_report__message_1490 = msg;
        this->__Vtask_uvm_report__id_1489 = "MISCMP"s;
        __Vtask_uvm_report__severity_1488 = this->__PVT__sev;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_887);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report__Vstatic__cs 
            = __Vfunc_get__Vfuncout_887;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 119)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1496);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1496;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 120)->__VnoInFunc_uvm_report(vlProcess, vlSymsp, __Vtask_uvm_report__severity_1488, this->__Vtask_uvm_report__id_1489, this->__Vtask_uvm_report__message_1490, __Vtask_uvm_report__verbosity_1491, this->__Vtask_uvm_report__filename_1492, __Vtask_uvm_report__line_1493, this->__Vtask_uvm_report__context_name_1494, (::IData)(__Vtask_uvm_report__report_enabled_checked_1495));
    }
    this->__PVT__miscompares = VL_CONCATN_NNN(VL_CONCATN_NNN(this->__PVT__miscompares, tmp), "\n"s);
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg_object(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> lhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg_object\n"); );
    // Locals
    ::CData/*1:0*/ __Vtask_uvm_report__severity_1497;
    __Vtask_uvm_report__severity_1497 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report__verbosity_1500;
    __Vtask_uvm_report__verbosity_1500 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report__line_1502;
    __Vtask_uvm_report__line_1502 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report__report_enabled_checked_1504;
    __Vtask_uvm_report__report_enabled_checked_1504 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_888;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1505;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_8__get_verbosity;
    ::IData/*31:0*/ __VlefCall_7__get_show_max;
    ::IData/*31:0*/ __VlefCall_6__get_result;
    ::IData/*31:0*/ __VlefCall_5__get_show_max;
    ::IData/*31:0*/ __VlefCond_4;
    ::IData/*31:0*/ __VlefCall_3__get_inst_id;
    ::IData/*31:0*/ __VlefCond_2;
    ::IData/*31:0*/ __VlefCall_1__get_inst_id;
    ::std::string __VlefCall_0__m_current_context;
    ::std::string tmp;
    this->__VnoInFunc_m_current_context(vlSymsp, ""s, __VlefCall_0__m_current_context);
    if ((VlNull{} != lhs)) {
        VL_NULL_CHECK(lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 590)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
        __VlefCond_2 = __VlefCall_1__get_inst_id;
    } else {
        __VlefCond_2 = 0U;
    }
    if ((VlNull{} != rhs)) {
        VL_NULL_CHECK(rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh", 591)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_3__get_inst_id);
        __VlefCond_4 = __VlefCall_3__get_inst_id;
    } else {
        __VlefCond_4 = 0U;
    }
    VL_SFORMAT_NX(tmp,"%s: lhs = @%0d : rhs = @%0d",3
                  , 'S',&(__VlefCall_0__m_current_context)
                  , '~',32,__VlefCond_2, '~',32,__VlefCond_4);
    this->__PVT__result = ((::IData)(1U) + this->__PVT__result);
    this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_5__get_show_max);
    this->__VnoInFunc_get_result(vlSymsp, __VlefCall_6__get_result);
    this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_7__get_show_max);
    if (((0U == __VlefCall_5__get_show_max) | (__VlefCall_6__get_result 
                                               <= __VlefCall_7__get_show_max))) {
        this->__VnoInFunc_get_verbosity(vlSymsp, __VlefCall_8__get_verbosity);
        __Vtask_uvm_report__report_enabled_checked_1504 = 0U;
        this->__Vtask_uvm_report__context_name_1503 = ""s;
        __Vtask_uvm_report__line_1502 = 0x00000259U;
        this->__Vtask_uvm_report__filename_1501 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_comparer.svh"s;
        __Vtask_uvm_report__verbosity_1500 = __VlefCall_8__get_verbosity;
        this->__Vtask_uvm_report__message_1499 = VL_CVT_PACK_STR_NN(
                                                                    VL_CONCATN_NNN("Miscompare for "s, tmp));
        this->__Vtask_uvm_report__id_1498 = "MISCMP"s;
        __Vtask_uvm_report__severity_1497 = this->__PVT__sev;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_888);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report__Vstatic__cs 
            = __Vfunc_get__Vfuncout_888;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 119)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1505);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1505;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 120)->__VnoInFunc_uvm_report(vlProcess, vlSymsp, __Vtask_uvm_report__severity_1497, this->__Vtask_uvm_report__id_1498, this->__Vtask_uvm_report__message_1499, __Vtask_uvm_report__verbosity_1500, this->__Vtask_uvm_report__filename_1501, __Vtask_uvm_report__line_1502, this->__Vtask_uvm_report__context_name_1503, (::IData)(__Vtask_uvm_report__report_enabled_checked_1504));
    }
    this->__PVT__miscompares = VL_CONCATN_NNN(VL_CONCATN_NNN(this->__PVT__miscompares, tmp), "\n"s);
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_flush(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_flush\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__PVT__miscompares = ""s;
    this->__PVT__check_type = 1U;
    this->__PVT__result = 0U;
    this->__PVT__m_recur_states.clear();
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_object_compared(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> lhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::IData/*27:0*/ recursion, ::CData/*0:0*/ &ret_val, ::IData/*31:0*/ &object_compared__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_object_compared\n"); );
    // Body
    object_compared__Vfuncrtn = 0U;
    ret_val = 0U;
    if ((0U != this->__PVT__m_recur_states.exists(lhs))) {
        if ((0U != this->__PVT__m_recur_states.at(lhs).exists(rhs))) {
            if ((0U != this->__PVT__m_recur_states.at(lhs)
                 .at(rhs).exists(recursion))) {
                if ((2U == this->__PVT__m_recur_states
                     .at(lhs).at(rhs).at(recursion)
                     .__PVT__state)) {
                    ret_val = this->__PVT__m_recur_states
                        .at(lhs).at(rhs).at(recursion)
                        .__PVT__ret_val;
                }
                object_compared__Vfuncrtn = this->__PVT__m_recur_states
                    .at(lhs).at(rhs).at(recursion).__PVT__state;
            } else {
                object_compared__Vfuncrtn = 0U;
            }
        } else {
            object_compared__Vfuncrtn = 0U;
        }
    } else {
        object_compared__Vfuncrtn = 0U;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_result(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_result__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_result\n"); );
    // Body
    get_result__Vfuncrtn = this->__PVT__result;
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_recursion_policy(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ policy) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_recursion_policy\n"); );
    // Body
    this->__PVT__policy = policy;
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_recursion_policy(Vtb_top__Syms* __restrict vlSymsp, ::IData/*27:0*/ &get_recursion_policy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_recursion_policy\n"); );
    // Body
    get_recursion_policy__Vfuncrtn = this->__PVT__policy;
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_check_type(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_check_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_check_type\n"); );
    // Body
    get_check_type__Vfuncrtn = this->__PVT__check_type;
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_show_max(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_show_max__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_show_max\n"); );
    // Body
    get_show_max__Vfuncrtn = this->__PVT__show_max;
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_verbosity(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_verbosity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_verbosity\n"); );
    // Body
    get_verbosity__Vfuncrtn = this->__PVT__verbosity;
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_severity(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_severity\n"); );
    // Body
    this->__PVT__sev = severity;
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_severity(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ &get_severity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_severity\n"); );
    // Body
    get_severity__Vfuncrtn = this->__PVT__sev;
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_threshold(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_threshold__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_threshold\n"); );
    // Body
    get_threshold__Vfuncrtn = this->__PVT__m_threshold;
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_comparer::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_recur_states.atDefault().atDefault().atDefault().__PVT__state = 0;
    __PVT__m_recur_states.atDefault().atDefault().atDefault().__PVT__ret_val = 0;
    __PVT__m_threshold = 0;
    __PVT__depth = 0;
    __PVT__compare_map.atDefault().atDefault() = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_comparer::~Vtb_top_uvm_pkg__03a__03auvm_comparer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_comparer::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_comparer::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_comparer::to_string_middle\n"); );
    // Body
    std::string out;
    out += "physical:" + VL_TO_STRING(__PVT__physical);
    out += ", abstract:" + VL_TO_STRING(__PVT__abstract);
    out += ", m_recur_states:" + VL_TO_STRING(__PVT__m_recur_states);
    out += ", policy:" + VL_TO_STRING(__PVT__policy);
    out += ", show_max:" + VL_TO_STRING(__PVT__show_max);
    out += ", verbosity:" + VL_TO_STRING(__PVT__verbosity);
    out += ", sev:" + VL_TO_STRING(__PVT__sev);
    out += ", miscompares:" + VL_TO_STRING(__PVT__miscompares);
    out += ", check_type:" + VL_TO_STRING(__PVT__check_type);
    out += ", result:" + VL_TO_STRING(__PVT__result);
    out += ", m_threshold:" + VL_TO_STRING(__PVT__m_threshold);
    out += ", m_object_names:" + VL_TO_STRING(__PVT__m_object_names);
    out += ", depth:" + VL_TO_STRING(__PVT__depth);
    out += ", compare_map:" + VL_TO_STRING(__PVT__compare_map);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_policy::to_string_middle();
    return (out);
}
