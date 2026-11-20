// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi4adbd1a1> __Vfunc_get__Vfuncout_7;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi4adbd1a1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_7);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_7;
}

void Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_item, vlProcess, vlSymsp, "mlp_item"s);
    } else {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_item, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_item"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_item::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_sequence_item::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_item::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__op = 0U;
    this->__PVT__addr = 0U;
    this->__PVT__data = 0U;
    this->__PVT__while_busy = 0U;
    this->__PVT__collide = 0U;
    this->__PVT__gap = 0U;
    this->__PVT__ready_pct = 0x00000064U;
    this->__PVT__hold = 0U;
    this->__PVT__rst_when = 0U;
    this->__PVT__rst_hold = 2U;
    /*super.new*/;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT__gap, 0x0000000000000020ULL, 
                                                                   "gap", 0ULL);
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT__ready_pct, 0x0000000000000020ULL, 
                                                                   "ready_pct", 0ULL);
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT__hold, 0x0000000000000020ULL, 
                                                                   "hold", 0ULL);
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT__rst_hold, 0x0000000000000020ULL, 
                                                                   "rst_hold", 0ULL);
}

void Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc_get_xp(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_xp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc_get_xp\n"); );
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

void Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc_set_xp(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc_set_xp\n"); );
    // Body
    this->__PVT__x[0U] = (0x000000ffU & p);
    this->__PVT__x[1U] = (0x000000ffU & (p >> 8U));
    this->__PVT__x[2U] = (0x000000ffU & (p >> 0x10U));
    this->__PVT__x[3U] = (p >> 0x18U);
}

extern const ::VlUnpacked<::std::string, 8> Vtb_top__ConstPool__CONSARRAY_12;

void Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc_convert2string\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    convert2string__Vfuncrtn = ""s;
    if ((0U == this->__PVT__op)) {
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"INFER x=[%0d %0d %0d %0d] gap=%0d",5
                      , '~',8,this->__PVT__x[0U], '~',8,this->__PVT__x[1U]
                      , '~',8,this->__PVT__x[2U], '~',8,this->__PVT__x[3U]
                      , '#',32,this->__PVT__gap);
    } else if ((1U == this->__PVT__op)) {
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"CFG   addr=%0d data=%0d while_busy=%0b collide=%0b gap=%0d",5
                      , '#',5,this->__PVT__addr, '~',8,(::IData)(this->__PVT__data)
                      , '#',1,(::IData)(this->__PVT__while_busy)
                      , '#',1,this->__PVT__collide, '#',32,this->__PVT__gap);
    } else if ((2U == this->__PVT__op)) {
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"READY pct=%0d hold=%0d",2
                      , '#',32,this->__PVT__ready_pct
                      , '#',32,this->__PVT__hold);
    } else if ((3U == this->__PVT__op)) {
        __Vtemp_1 = ((4U < this->__PVT__rst_when) ? ""s
                      : Vtb_top__ConstPool__CONSARRAY_12
                     [(7U & this->__PVT__rst_when)]);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"RESET when=%s hold=%0d gap=%0d",3
                      , 'S',&(__Vtemp_1), '#',32,this->__PVT__rst_hold
                      , '#',32,this->__PVT__gap);
    } else {
        convert2string__Vfuncrtn = "DRAIN"s;
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc_c_sane_setup_constraint(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc_c_sane_setup_constraint\n"); );
    // Body
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(bvand (__Vbv (bvuge gap #x00000000)) (__Vbv (bvule gap #x00000014)))"s, "mlp_items.sv", 0x00000045U, 
                                                              "    gap       inside {[0:20]};");
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(bvand (__Vbv (bvuge ready_pct #x00000000)) (__Vbv (bvule ready_pct #x00000064)))"s, "mlp_items.sv", 0x00000046U, 
                                                              "    ready_pct inside {[0:100]};");
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(bvand (__Vbv (bvuge hold #x00000000)) (__Vbv (bvule hold #x0000003c)))"s, "mlp_items.sv", 0x00000047U, 
                                                              "    hold      inside {[0:60]};");
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(bvand (__Vbv (bvuge rst_hold #x00000001)) (__Vbv (bvule rst_hold #x00000004)))"s, "mlp_items.sv", 0x00000048U, 
                                                              "    rst_hold  inside {[1:4]};");
}

void Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_c_sane_setup_constraint(vlSymsp);
}

void Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc___VupdateRandVars\n"); );
    // Body
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.update_var(this->__PVT__gap, 
                                                                    "gap");
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.update_var(this->__PVT__ready_pct, 
                                                                    "ready_pct");
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.update_var(this->__PVT__hold, 
                                                                    "hold");
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.update_var(this->__PVT__rst_hold, 
                                                                    "rst_hold");
}

extern const ::VlUnpacked<::IData/*31:0*/, 5> Vtb_top__ConstPool__CONSARRAY_13;

void Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_item::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__op = Vtb_top__ConstPool__CONSARRAY_13
        [VL_MODDIV_III(32, (::IData)(VL_RANDOM_RNG_I(__Vm_rng)), (::IData)(5U))];
    this->__PVT__x[0U] = (0x000000ffU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__x[1U] = (0x000000ffU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__x[2U] = (0x000000ffU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__x[3U] = (0x000000ffU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__addr = (0x0000001fU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__data = (0x000000ffU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__while_busy = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__collide = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__rst_when = Vtb_top__ConstPool__CONSARRAY_13
        [VL_MODDIV_III(32, (::IData)(VL_RANDOM_RNG_I(__Vm_rng)), (::IData)(5U))];
}

void Vtb_top_mlp_pkg__03a__03amlp_item::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_item::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__x[0] = 0;
    VL_UNPACKED_FILL(__PVT__x.data(), sizeof(__PVT__x[0]), 4);
}

Vtb_top_mlp_pkg__03a__03amlp_item::~Vtb_top_mlp_pkg__03a__03amlp_item() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_item::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_item::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_item::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_item::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_item::to_string_middle\n"); );
    // Body
    std::string out;
    out += "op:" + VL_TO_STRING(__PVT__op);
    out += ", x:" + VL_TO_STRING(__PVT__x);
    out += ", addr:" + VL_TO_STRING(__PVT__addr);
    out += ", data:" + VL_TO_STRING(__PVT__data);
    out += ", while_busy:" + VL_TO_STRING(__PVT__while_busy);
    out += ", collide:" + VL_TO_STRING(__PVT__collide);
    out += ", gap:" + VL_TO_STRING(__PVT__gap);
    out += ", ready_pct:" + VL_TO_STRING(__PVT__ready_pct);
    out += ", hold:" + VL_TO_STRING(__PVT__hold);
    out += ", rst_when:" + VL_TO_STRING(__PVT__rst_when);
    out += ", rst_hold:" + VL_TO_STRING(__PVT__rst_hold);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_sequence_item::to_string_middle();
    return (out);
}
