// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi52c0085e> __Vfunc_get__Vfuncout_909;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi52c0085e__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_909);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_909;
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_text_tr_database> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_text_tr_database, vlProcess, vlSymsp, "unnamed-uvm_text_tr_database"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_text_tr_database, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_text_tr_database"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_tr_database::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_filename_dap = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c, vlProcess, vlSymsp, "filename_dap"s);
    VL_NULL_CHECK(this->__PVT__m_filename_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_database.svh", 87)->__VnoInFunc_set(vlProcess, vlSymsp, "tr_db.log"s);
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_db(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &do_open_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_db\n"); );
    // Body
    ::std::string __VlefCall_0__get;
    do_open_db__Vfuncrtn = 0U;
    if (VL_UNLIKELY(((0U == this->__PVT__m_file)))) {
        VL_NULL_CHECK(this->__PVT__m_filename_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_database.svh", 107)->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
        this->__PVT__m_file = VL_FOPEN_NN(__VlefCall_0__get
                                          , "a+"s);
        ;
        if ((0U != this->__PVT__m_file)) {
            VL_NULL_CHECK(this->__PVT__m_filename_dap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_database.svh", 110)->__VnoInFunc_lock(vlSymsp);
        }
    }
    do_open_db__Vfuncrtn = (0U != this->__PVT__m_file);
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_stream(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string scope, ::std::string type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> &do_open_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_stream\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_text_tr_stream> m_stream;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pic75a47a4__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, name, VlNull{}, ""s, m_stream);
    do_open_stream__Vfuncrtn = m_stream;
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_establish_link(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_link_base> link) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_establish_link\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_5__get_handle;
    ::IData/*31:0*/ __VlefCall_4__get_handle;
    ::IData/*31:0*/ __VlefExpr_3;
    ::IData/*31:0*/ __VlefCall_2__get_handle;
    ::IData/*31:0*/ __VlefCall_1__get_handle;
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_parent_child_link> unnamedblk1__DOT__pc_link;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_related_link> unnamedblk1__DOT__re_link;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> r_lhs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> r_rhs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> lhs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs;
    VL_NULL_CHECK(link, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_database.svh", 163)->__VnoInFunc_get_lhs(vlSymsp, lhs);
    VL_NULL_CHECK(link, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_database.svh", 164)->__VnoInFunc_get_rhs(vlSymsp, rhs);
    std::ignore = VL_CAST_DYNAMIC(lhs, r_lhs);
    std::ignore = VL_CAST_DYNAMIC(rhs, r_rhs);
    if ((1U & (~ ((VlNull{} == r_lhs) | (VlNull{} == r_rhs))))) {
        __VlefExpr_0 = VL_CAST_DYNAMIC(link, unnamedblk1__DOT__pc_link);
        if (VL_UNLIKELY(((0U != __VlefExpr_0)))) {
            VL_NULL_CHECK(r_lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_database.svh", 181)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
            VL_NULL_CHECK(r_rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_database.svh", 182)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_2__get_handle);
            VL_FWRITEF_NX(this->__PVT__m_file,"  LINK @%0t {TXH1:%0d TXH2:%0d RELATION=child}\n",4, 'T',-9
                          , '#',64,VL_TIME_UNITED_Q(1000)
                          , '~',32,__VlefCall_1__get_handle
                          , '~',32,__VlefCall_2__get_handle);
        } else {
            __VlefExpr_3 = VL_CAST_DYNAMIC(link, unnamedblk1__DOT__re_link);
            if (VL_UNLIKELY(((0U != __VlefExpr_3)))) {
                VL_NULL_CHECK(r_lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_database.svh", 189)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_4__get_handle);
                VL_NULL_CHECK(r_rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_text_tr_database.svh", 190)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_5__get_handle);
                VL_FWRITEF_NX(this->__PVT__m_file,"  LINK @%0t {TXH1:%0d TXH2:%0d RELATION=}\n",4, 'T',-9
                              , '#',64,VL_TIME_UNITED_Q(1000)
                              , '~',32,__VlefCall_4__get_handle
                              , '~',32,__VlefCall_5__get_handle);
            }
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_file = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::~Vtb_top_uvm_pkg__03a__03auvm_text_tr_database() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_tr_database::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_filename_dap:" + VL_TO_STRING(__PVT__m_filename_dap);
    out += ", m_file:" + VL_TO_STRING(__PVT__m_file);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_tr_database::to_string_middle();
    return (out);
}
