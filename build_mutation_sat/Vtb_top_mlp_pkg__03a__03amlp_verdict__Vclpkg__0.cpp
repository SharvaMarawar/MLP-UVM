// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_verdict::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_verdict::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pie5fe8ff3> __Vfunc_get__Vfuncout_10;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pie5fe8ff3__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_10);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_10;
}

void Vtb_top_mlp_pkg__03a__03amlp_verdict::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_verdict::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_verdict> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_verdict, vlProcess, vlSymsp, "mlp_verdict"s);
    } else {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_verdict, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_mlp_pkg__03a__03amlp_verdict::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_verdict::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_verdict"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_verdict::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_verdict::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__pass = 1U;
    this->__PVT__label = 0xffffffffU;
    this->__PVT__pred_act = 0xffffffffU;
    /*super.new*/;
}

void Vtb_top_mlp_pkg__03a__03amlp_verdict::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_verdict::__VnoInFunc_convert2string\n"); );
    // Locals
    ::CData/*1:0*/ __Vfunc_stage_name__s_11;
    __Vfunc_stage_name__s_11 = 0;
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_0__stage_name;
    convert2string__Vfuncrtn = ""s;
    if ((0U == this->__PVT__kind)) {
        __Vtemp_1 = ((::IData)(this->__PVT__is_iris)
                      ? VL_SFORMATF_N_NX(" label=%0d pred=%0d",2
                                         , '~',32,this->__PVT__label
                                         , '~',32,this->__PVT__pred_act) 
                      : ""s);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s x=[%0d %0d %0d %0d] exp=[%0d %0d %0d %0d] act=[%0d %0d %0d %0d] lat=%0d%s",15
                      , '#',32,((::IData)(this->__PVT__pass)
                                 ? 0x50415353U : 0x4641494cU)
                      , '~',8,this->__PVT__x[0U], '~',8,this->__PVT__x[1U]
                      , '~',8,this->__PVT__x[2U], '~',8,this->__PVT__x[3U]
                      , '~',8,this->__PVT__y_exp[0U]
                      , '~',8,this->__PVT__y_exp[1U]
                      , '~',8,this->__PVT__y_exp[2U]
                      , '~',8,this->__PVT__y_exp[3U]
                      , '~',8,this->__PVT__y_act[0U]
                      , '~',8,this->__PVT__y_act[1U]
                      , '~',8,this->__PVT__y_act[2U]
                      , '~',8,this->__PVT__y_act[3U]
                      , '#',64,this->__PVT__latency
                      , 'S',&(__Vtemp_1));
    } else if ((1U == this->__PVT__kind)) {
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"CFG addr=%0d data=%0d busy=%0b applied=%0b",4
                      , '#',5,this->__PVT__addr, '~',8,(::IData)(this->__PVT__data)
                      , '#',1,(::IData)(this->__PVT__busy)
                      , '#',1,this->__PVT__applied);
    } else {
        __Vfunc_stage_name__s_11 = this->__PVT__stage;
        __VlefCall_0__stage_name = ((0U == (::IData)(__Vfunc_stage_name__s_11))
                                     ? "IDLE"s : ((2U 
                                                   == (::IData)(__Vfunc_stage_name__s_11))
                                                   ? "STAGE1"s
                                                   : 
                                                  ((1U 
                                                    == (::IData)(__Vfunc_stage_name__s_11))
                                                    ? "OUTREG"s
                                                    : "BOTH"s)));
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"RESET stage=%s stalled=%0b aborted=%0d",3
                      , 'S',&(__VlefCall_0__stage_name)
                      , '#',1,(::IData)(this->__PVT__stalled)
                      , '#',32,this->__PVT__aborted);
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_verdict::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_verdict::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_verdict::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_verdict::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_verdict::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_verdict::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_verdict::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_verdict::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_mlp_pkg__03a__03amlp_verdict::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_verdict::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__kind = 0;
    __PVT__x[0] = 0;
    VL_UNPACKED_FILL(__PVT__x.data(), sizeof(__PVT__x[0]), 4);
    __PVT__y_exp[0] = 0;
    VL_UNPACKED_FILL(__PVT__y_exp.data(), sizeof(__PVT__y_exp[0]), 4);
    __PVT__y_act[0] = 0;
    VL_UNPACKED_FILL(__PVT__y_act.data(), sizeof(__PVT__y_act[0]), 4);
    __PVT__acc[0] = 0;
    VL_UNPACKED_FILL(__PVT__acc.data(), sizeof(__PVT__acc[0]), 4);
    __PVT__sat_hi[0] = 0;
    VL_UNPACKED_FILL(__PVT__sat_hi.data(), sizeof(__PVT__sat_hi[0]), 4);
    __PVT__sat_lo[0] = 0;
    VL_UNPACKED_FILL(__PVT__sat_lo.data(), sizeof(__PVT__sat_lo[0]), 4);
    __PVT__leaky[0] = 0;
    VL_UNPACKED_FILL(__PVT__leaky.data(), sizeof(__PVT__leaky[0]), 4);
    __PVT__shift = 0;
    __PVT__leak = 0;
    __PVT__is_iris = 0;
    __PVT__in_wait = 0;
    __PVT__out_wait = 0;
    __PVT__latency = 0;
    __PVT__in_cycle = 0;
    __PVT__addr = 0;
    __PVT__data = 0;
    __PVT__busy = 0;
    __PVT__applied = 0;
    __PVT__with_in = 0;
    __PVT__stage = 0;
    __PVT__stalled = 0;
    __PVT__aborted = 0;
}

Vtb_top_mlp_pkg__03a__03amlp_verdict::~Vtb_top_mlp_pkg__03a__03amlp_verdict() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_verdict::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_verdict::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_verdict::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_verdict::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_verdict::to_string_middle\n"); );
    // Body
    std::string out;
    out += "kind:" + VL_TO_STRING(__PVT__kind);
    out += ", pass:" + VL_TO_STRING(__PVT__pass);
    out += ", x:" + VL_TO_STRING(__PVT__x);
    out += ", y_exp:" + VL_TO_STRING(__PVT__y_exp);
    out += ", y_act:" + VL_TO_STRING(__PVT__y_act);
    out += ", acc:" + VL_TO_STRING(__PVT__acc);
    out += ", sat_hi:" + VL_TO_STRING(__PVT__sat_hi);
    out += ", sat_lo:" + VL_TO_STRING(__PVT__sat_lo);
    out += ", leaky:" + VL_TO_STRING(__PVT__leaky);
    out += ", shift:" + VL_TO_STRING(__PVT__shift);
    out += ", leak:" + VL_TO_STRING(__PVT__leak);
    out += ", is_iris:" + VL_TO_STRING(__PVT__is_iris);
    out += ", label:" + VL_TO_STRING(__PVT__label);
    out += ", pred_act:" + VL_TO_STRING(__PVT__pred_act);
    out += ", in_wait:" + VL_TO_STRING(__PVT__in_wait);
    out += ", out_wait:" + VL_TO_STRING(__PVT__out_wait);
    out += ", latency:" + VL_TO_STRING(__PVT__latency);
    out += ", in_cycle:" + VL_TO_STRING(__PVT__in_cycle);
    out += ", addr:" + VL_TO_STRING(__PVT__addr);
    out += ", data:" + VL_TO_STRING(__PVT__data);
    out += ", busy:" + VL_TO_STRING(__PVT__busy);
    out += ", applied:" + VL_TO_STRING(__PVT__applied);
    out += ", with_in:" + VL_TO_STRING(__PVT__with_in);
    out += ", stage:" + VL_TO_STRING(__PVT__stage);
    out += ", stalled:" + VL_TO_STRING(__PVT__stalled);
    out += ", aborted:" + VL_TO_STRING(__PVT__aborted);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
