// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi68a5ab13> __Vfunc_get__Vfuncout_13;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi68a5ab13__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_13);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_13;
}

void Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_dataset> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_dataset, vlProcess, vlSymsp, "mlp_dataset"s);
    } else {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_dataset, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_dataset"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_dataset::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_dataset::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__test_n = 0U;
    /*super.new*/;
    this->__PVT__cfg_model = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_ref_model, vlProcess, vlSymsp, "cfg_model"s);
}

void Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_size(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__xp.size();
}

void Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_load_cfg(Vtb_top__Syms* __restrict vlSymsp, ::std::string path, ::CData/*0:0*/ &load_cfg__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_load_cfg\n"); );
    // Locals
    ::CData/*0:0*/ __Vtask_write__Vfuncout_12;
    __Vtask_write__Vfuncout_12 = 0;
    // Body
    ::IData/*31:0*/ fd;
    ::IData/*31:0*/ code;
    ::IData/*31:0*/ a;
    ::IData/*31:0*/ d;
    {
        load_cfg__Vfuncrtn = 0U;
        fd = 0U;
        code = 0U;
        a = 0U;
        d = 0U;
        fd = VL_FOPEN_NN(path, "r"s);
        ;
        if ((0U == fd)) {
            load_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        {
            while (true) {
                code = VL_FSCANF_INX(fd,"%d %d",2, '#',32,&(a)
                                     , '#',32,&(d)) ;
                if ((2U != code)) {
                    goto __Vlabel1;
                }
                this->__PVT__cfg_addr.push_back(a);
                this->__PVT__cfg_data.push_back(d);
                VL_NULL_CHECK(this->__PVT__cfg_model, "mlp_dataset.sv", 44)->__VnoInFunc_write(vlSymsp, 
                                                                                (0x0000001fU 
                                                                                & a), 
                                                                                (0x000000ffU 
                                                                                & d), 0U, __Vtask_write__Vfuncout_12);
            }
            __Vlabel1: ;
        }
        VL_FCLOSE_I(fd); load_cfg__Vfuncrtn = VL_LTS_III(32, 0U, this->__PVT__cfg_addr.size());
        __Vlabel0: ;
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_load_vectors(Vtb_top__Syms* __restrict vlSymsp, ::std::string path, ::CData/*0:0*/ &load_vectors__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_load_vectors\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_pack_x__a0_14;
    __Vfunc_pack_x__a0_14 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a1_15;
    __Vfunc_pack_x__a1_15 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a2_16;
    __Vfunc_pack_x__a2_16 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a3_17;
    __Vfunc_pack_x__a3_17 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a0_18;
    __Vfunc_pack_x__a0_18 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a1_19;
    __Vfunc_pack_x__a1_19 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a2_20;
    __Vfunc_pack_x__a2_20 = 0;
    ::IData/*31:0*/ __Vfunc_pack_x__a3_21;
    __Vfunc_pack_x__a3_21 = 0;
    // Body
    ::IData/*31:0*/ __VlefCall_1__pack_x;
    ::IData/*31:0*/ __VlefCall_0__pack_x;
    ::IData/*31:0*/ fd;
    ::IData/*31:0*/ code;
    ::IData/*31:0*/ x0;
    ::IData/*31:0*/ x1;
    ::IData/*31:0*/ x2;
    ::IData/*31:0*/ x3;
    ::IData/*31:0*/ y0;
    ::IData/*31:0*/ y1;
    ::IData/*31:0*/ y2;
    ::IData/*31:0*/ y3;
    ::IData/*31:0*/ lab;
    {
        load_vectors__Vfuncrtn = 0U;
        fd = 0U;
        code = 0U;
        x0 = 0U;
        x1 = 0U;
        x2 = 0U;
        x3 = 0U;
        y0 = 0U;
        y1 = 0U;
        y2 = 0U;
        y3 = 0U;
        lab = 0U;
        fd = VL_FOPEN_NN(path, "r"s);
        ;
        if ((0U == fd)) {
            load_vectors__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        {
            while (true) {
                code = VL_FSCANF_INX(fd,"%d %d %d %d %d %d %d %d %d",9
                                     , '#',32,&(x0)
                                     , '#',32,&(x1)
                                     , '#',32,&(x2)
                                     , '#',32,&(x3)
                                     , '#',32,&(y0)
                                     , '#',32,&(y1)
                                     , '#',32,&(y2)
                                     , '#',32,&(y3)
                                     , '#',32,&(lab)) ;
                if ((9U != code)) {
                    goto __Vlabel1;
                }
                __Vfunc_pack_x__a3_17 = x3;
                __Vfunc_pack_x__a2_16 = x2;
                __Vfunc_pack_x__a1_15 = x1;
                __Vfunc_pack_x__a0_14 = x0;
                __VlefCall_0__pack_x = 0U;
                __VlefCall_0__pack_x = ((((0x0000ff00U 
                                           & (__Vfunc_pack_x__a3_17 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & __Vfunc_pack_x__a2_16)) 
                                         << 0x00000010U) 
                                        | ((0x0000ff00U 
                                            & (__Vfunc_pack_x__a1_15 
                                               << 8U)) 
                                           | (0x000000ffU 
                                              & __Vfunc_pack_x__a0_14)));
                this->__PVT__xp.push_back(__VlefCall_0__pack_x);
                __Vfunc_pack_x__a3_21 = y3;
                __Vfunc_pack_x__a2_20 = y2;
                __Vfunc_pack_x__a1_19 = y1;
                __Vfunc_pack_x__a0_18 = y0;
                __VlefCall_1__pack_x = 0U;
                __VlefCall_1__pack_x = ((((0x0000ff00U 
                                           & (__Vfunc_pack_x__a3_21 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & __Vfunc_pack_x__a2_20)) 
                                         << 0x00000010U) 
                                        | ((0x0000ff00U 
                                            & (__Vfunc_pack_x__a1_19 
                                               << 8U)) 
                                           | (0x000000ffU 
                                              & __Vfunc_pack_x__a0_18)));
                this->__PVT__yp.push_back(__VlefCall_1__pack_x);
                this->__PVT__label.push_back(lab);
                this->__PVT__lab_of.atWrite(this->__PVT__xp.atBack(0U)) 
                    = lab;
                this->__PVT__y_of.atWrite(this->__PVT__xp.atBack(0U)) 
                    = this->__PVT__yp.atBack(0U);
            }
            __Vlabel1: ;
        }
        VL_FCLOSE_I(fd); this->__PVT__test_n = this->__PVT__xp.size();
        load_vectors__Vfuncrtn = VL_LTS_III(32, 0U, this->__PVT__xp.size());
        __Vlabel0: ;
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_lookup(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ p, ::IData/*31:0*/ &lab, ::IData/*31:0*/ &yg, ::CData/*0:0*/ &lookup__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_lookup\n"); );
    // Body
    {
        lookup__Vfuncrtn = 0U;
        lab = 0U;
        yg = 0U;
        if ((1U & (~ (0U != this->__PVT__lab_of.exists(p))))) {
            lookup__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        lab = this->__PVT__lab_of.at(p);
        yg = this->__PVT__y_of.at(p);
        lookup__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_cfg_equals(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_ref_model> m, ::CData/*0:0*/ &cfg_equals__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_cfg_equals\n"); );
    // Body
    ::CData/*0:0*/ __VlefCall_0__same_cfg;
    cfg_equals__Vfuncrtn = 0U;
    __VlefCall_0__same_cfg = VL_LTS_III(32, 0U, this->__PVT__cfg_addr.size());
    if (__VlefCall_0__same_cfg) {
        VL_NULL_CHECK(m, "mlp_dataset.sv", 78)->__VnoInFunc_same_cfg(vlSymsp, this->__PVT__cfg_model, __VlefCall_0__same_cfg);
    }
    cfg_equals__Vfuncrtn = __VlefCall_0__same_cfg;
}

void Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_dataset::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_mlp_pkg__03a__03amlp_dataset::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_dataset::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__xp.atDefault() = 0;
    __PVT__yp.atDefault() = 0;
    __PVT__label.atDefault() = 0;
    __PVT__cfg_addr.atDefault() = 0;
    __PVT__cfg_data.atDefault() = 0;
    __PVT__lab_of.atDefault() = 0;
    __PVT__y_of.atDefault() = 0;
}

Vtb_top_mlp_pkg__03a__03amlp_dataset::~Vtb_top_mlp_pkg__03a__03amlp_dataset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_dataset::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_dataset::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_dataset::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_dataset::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_dataset::to_string_middle\n"); );
    // Body
    std::string out;
    out += "xp:" + VL_TO_STRING(__PVT__xp);
    out += ", yp:" + VL_TO_STRING(__PVT__yp);
    out += ", label:" + VL_TO_STRING(__PVT__label);
    out += ", cfg_addr:" + VL_TO_STRING(__PVT__cfg_addr);
    out += ", cfg_data:" + VL_TO_STRING(__PVT__cfg_data);
    out += ", test_n:" + VL_TO_STRING(__PVT__test_n);
    out += ", cfg_model:" + VL_TO_STRING(__PVT__cfg_model);
    out += ", lab_of:" + VL_TO_STRING(__PVT__lab_of);
    out += ", y_of:" + VL_TO_STRING(__PVT__y_of);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
