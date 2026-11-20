// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi20b521b1> __Vfunc_get__Vfuncout_8;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi20b521b1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_8);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_8;
}

void Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_mon_item, vlProcess, vlSymsp, "mlp_mon_item"s);
    } else {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_mon_item, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_mon_item"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_mon_item::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_mon_item::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc_get_xp(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_xp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc_get_xp\n"); );
    // Body
    ::IData/*31:0*/ p;
    p = 0U;
    p = ((0xff000000U & p) | (((::IData)(this->__PVT__x[2U]) 
                               << 0x00000010U) | (((::IData)(this->__PVT__x[1U]) 
                                                   << 8U) 
                                                  | this->__PVT__x[0U])));
    p = ((0x00ffffffU & p) | ((::IData)(this->__PVT__x[3U]) 
                              << 0x00000018U));
    get_xp__Vfuncrtn = p;
}

void Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc_convert2string\n"); );
    // Locals
    ::CData/*1:0*/ __Vfunc_stage_name__s_9;
    __Vfunc_stage_name__s_9 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_0__stage_name;
    convert2string__Vfuncrtn = ""s;
    if ((0U == this->__PVT__kind)) {
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"IN    cyc=%0d x=[%0d %0d %0d %0d] waited=%0d",6
                      , '#',64,this->__PVT__cycle, '~',8,this->__PVT__x[0U]
                      , '~',8,this->__PVT__x[1U], '~',8,this->__PVT__x[2U]
                      , '~',8,this->__PVT__x[3U], '#',32,this->__PVT__waited);
    } else if ((1U == this->__PVT__kind)) {
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"OUT   cyc=%0d y=[%0d %0d %0d %0d] waited=%0d",6
                      , '#',64,this->__PVT__cycle, '~',8,this->__PVT__y[0U]
                      , '~',8,this->__PVT__y[1U], '~',8,this->__PVT__y[2U]
                      , '~',8,this->__PVT__y[3U], '#',32,this->__PVT__waited);
    } else if ((2U == this->__PVT__kind)) {
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"CFG   cyc=%0d addr=%0d data=%0d busy=%0b with_in=%0b",5
                      , '#',64,this->__PVT__cycle, '#',5,(::IData)(this->__PVT__addr)
                      , '~',8,(::IData)(this->__PVT__data)
                      , '#',1,(::IData)(this->__PVT__busy)
                      , '#',1,this->__PVT__with_in);
    } else {
        __Vfunc_stage_name__s_9 = this->__PVT__stage;
        __VlefCall_0__stage_name = ((0U == (::IData)(__Vfunc_stage_name__s_9))
                                     ? "IDLE"s : ((2U 
                                                   == (::IData)(__Vfunc_stage_name__s_9))
                                                   ? "STAGE1"s
                                                   : 
                                                  ((1U 
                                                    == (::IData)(__Vfunc_stage_name__s_9))
                                                    ? "OUTREG"s
                                                    : "BOTH"s)));
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"RESET cyc=%0d stage=%s stalled=%0b",3
                      , '#',64,this->__PVT__cycle, 'S',&(__VlefCall_0__stage_name)
                      , '#',1,(::IData)(this->__PVT__stalled));
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_mon_item::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_mlp_pkg__03a__03amlp_mon_item::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_mon_item::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__kind = 0;
    __PVT__cycle = 0;
    __PVT__x[0] = 0;
    VL_UNPACKED_FILL(__PVT__x.data(), sizeof(__PVT__x[0]), 4);
    __PVT__y[0] = 0;
    VL_UNPACKED_FILL(__PVT__y.data(), sizeof(__PVT__y[0]), 4);
    __PVT__addr = 0;
    __PVT__data = 0;
    __PVT__busy = 0;
    __PVT__with_in = 0;
    __PVT__waited = 0;
    __PVT__stage = 0;
    __PVT__stalled = 0;
}

Vtb_top_mlp_pkg__03a__03amlp_mon_item::~Vtb_top_mlp_pkg__03a__03amlp_mon_item() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_mon_item::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_mon_item::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_mon_item::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_mon_item::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_mon_item::to_string_middle\n"); );
    // Body
    std::string out;
    out += "kind:" + VL_TO_STRING(__PVT__kind);
    out += ", cycle:" + VL_TO_STRING(__PVT__cycle);
    out += ", x:" + VL_TO_STRING(__PVT__x);
    out += ", y:" + VL_TO_STRING(__PVT__y);
    out += ", addr:" + VL_TO_STRING(__PVT__addr);
    out += ", data:" + VL_TO_STRING(__PVT__data);
    out += ", busy:" + VL_TO_STRING(__PVT__busy);
    out += ", with_in:" + VL_TO_STRING(__PVT__with_in);
    out += ", waited:" + VL_TO_STRING(__PVT__waited);
    out += ", stage:" + VL_TO_STRING(__PVT__stage);
    out += ", stalled:" + VL_TO_STRING(__PVT__stalled);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
