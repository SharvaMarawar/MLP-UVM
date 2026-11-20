// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pia18cdc6b> __Vfunc_get__Vfuncout_12;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pia18cdc6b__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_12);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_12;
}

void Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_ref_model> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_ref_model, vlProcess, vlSymsp, "mlp_ref_model"s);
    } else {
        tmp = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_ref_model, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_ref_model"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_ref_model::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_ref_model::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    {
        // Inlined CFunc: __VnoInFunc_reset
        this->__PVT__w[0U][0U] = 0U;
        this->__PVT__w[0U][1U] = 0U;
        this->__PVT__w[0U][2U] = 0U;
        this->__PVT__w[0U][3U] = 0U;
        this->__PVT__w[1U][0U] = 0U;
        this->__PVT__w[1U][1U] = 0U;
        this->__PVT__w[1U][2U] = 0U;
        this->__PVT__w[1U][3U] = 0U;
        this->__PVT__w[2U][0U] = 0U;
        this->__PVT__w[2U][1U] = 0U;
        this->__PVT__w[2U][2U] = 0U;
        this->__PVT__w[2U][3U] = 0U;
        this->__PVT__w[3U][0U] = 0U;
        this->__PVT__w[3U][1U] = 0U;
        this->__PVT__w[3U][2U] = 0U;
        this->__PVT__w[3U][3U] = 0U;
        this->__PVT__b[0U] = 0U;
        this->__PVT__b[1U] = 0U;
        this->__PVT__b[2U] = 0U;
        this->__PVT__b[3U] = 0U;
        this->__PVT__sh = 0U;
        this->__PVT__leak = 3U;
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc_reset\n"); );
    // Body
    this->__PVT__w[0U][0U] = 0U;
    this->__PVT__w[0U][1U] = 0U;
    this->__PVT__w[0U][2U] = 0U;
    this->__PVT__w[0U][3U] = 0U;
    this->__PVT__w[1U][0U] = 0U;
    this->__PVT__w[1U][1U] = 0U;
    this->__PVT__w[1U][2U] = 0U;
    this->__PVT__w[1U][3U] = 0U;
    this->__PVT__w[2U][0U] = 0U;
    this->__PVT__w[2U][1U] = 0U;
    this->__PVT__w[2U][2U] = 0U;
    this->__PVT__w[2U][3U] = 0U;
    this->__PVT__w[3U][0U] = 0U;
    this->__PVT__w[3U][1U] = 0U;
    this->__PVT__w[3U][2U] = 0U;
    this->__PVT__w[3U][3U] = 0U;
    this->__PVT__b[0U] = 0U;
    this->__PVT__b[1U] = 0U;
    this->__PVT__b[2U] = 0U;
    this->__PVT__b[3U] = 0U;
    this->__PVT__sh = 0U;
    this->__PVT__leak = 3U;
}

void Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc_same_cfg(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_ref_model> o, ::CData/*0:0*/ &same_cfg__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc_same_cfg\n"); );
    // Body
    {
        same_cfg__Vfuncrtn = 0U;
        if ((this->__PVT__w[0U][0U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 50)
             ->__PVT__w[0U][0U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__w[0U][1U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 50)
             ->__PVT__w[0U][1U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__w[0U][2U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 50)
             ->__PVT__w[0U][2U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__w[0U][3U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 50)
             ->__PVT__w[0U][3U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__w[1U][0U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 50)
             ->__PVT__w[1U][0U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__w[1U][1U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 50)
             ->__PVT__w[1U][1U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__w[1U][2U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 50)
             ->__PVT__w[1U][2U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__w[1U][3U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 50)
             ->__PVT__w[1U][3U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__w[2U][0U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 50)
             ->__PVT__w[2U][0U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__w[2U][1U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 50)
             ->__PVT__w[2U][1U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__w[2U][2U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 50)
             ->__PVT__w[2U][2U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__w[2U][3U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 50)
             ->__PVT__w[2U][3U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__w[3U][0U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 50)
             ->__PVT__w[3U][0U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__w[3U][1U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 50)
             ->__PVT__w[3U][1U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__w[3U][2U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 50)
             ->__PVT__w[3U][2U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__w[3U][3U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 50)
             ->__PVT__w[3U][3U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__b[0U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 51)
             ->__PVT__b[0U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__b[1U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 51)
             ->__PVT__b[1U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__b[2U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 51)
             ->__PVT__b[2U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((this->__PVT__b[3U] != VL_NULL_CHECK(o, "mlp_ref_model.sv", 51)
             ->__PVT__b[3U])) {
            same_cfg__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        same_cfg__Vfuncrtn = ((this->__PVT__sh == VL_NULL_CHECK(o, "mlp_ref_model.sv", 52)
                               ->__PVT__sh) && (this->__PVT__leak 
                                                == VL_NULL_CHECK(o, "mlp_ref_model.sv", 52)
                                                ->__PVT__leak));
        __Vlabel0: ;
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc_write(Vtb_top__Syms* __restrict vlSymsp, ::CData/*4:0*/ addr, ::CData/*7:0*/ data, ::CData/*0:0*/ busy, ::CData/*0:0*/ &write__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc_write\n"); );
    // Body
    {
        write__Vfuncrtn = 0U;
        if (busy) {
            write__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((0x10U > (::IData)(addr))) {
            this->__PVT__w[(3U & ((::IData)(addr) >> 2U))][(3U 
                                                            & (::IData)(addr))] 
                = VL_EXTENDS_II(32,8, (::IData)(data));
        } else if ((0x14U > (::IData)(addr))) {
            this->__PVT__b[(3U & (::IData)(addr))] 
                = VL_EXTENDS_II(32,8, (::IData)(data));
        } else if ((0x14U == (::IData)(addr))) {
            this->__PVT__sh = (0x0000000fU & (::IData)(data));
        } else if ((0x15U == (::IData)(addr))) {
            this->__PVT__leak = (7U & (::IData)(data));
        } else {
            write__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        write__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc_predict(Vtb_top__Syms* __restrict vlSymsp, ::VlUnpacked<::CData/*7:0*/, 4> x) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc_predict\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk7__DOT__unnamedblk8__DOT__a;
    ::IData/*31:0*/ unnamedblk7__DOT__unnamedblk8__DOT__s;
    unnamedblk7__DOT__unnamedblk8__DOT__a = this->__PVT__b[0U];
    unnamedblk7__DOT__unnamedblk8__DOT__a = (unnamedblk7__DOT__unnamedblk8__DOT__a 
                                             + VL_MULS_III(32, this->__PVT__w[0U][0U], 
                                                           VL_EXTENDS_II(32,8, x[0U])));
    unnamedblk7__DOT__unnamedblk8__DOT__a = (unnamedblk7__DOT__unnamedblk8__DOT__a 
                                             + VL_MULS_III(32, this->__PVT__w[0U][1U], 
                                                           VL_EXTENDS_II(32,8, x[1U])));
    unnamedblk7__DOT__unnamedblk8__DOT__a = (unnamedblk7__DOT__unnamedblk8__DOT__a 
                                             + VL_MULS_III(32, this->__PVT__w[0U][2U], 
                                                           VL_EXTENDS_II(32,8, x[2U])));
    unnamedblk7__DOT__unnamedblk8__DOT__a = (unnamedblk7__DOT__unnamedblk8__DOT__a 
                                             + VL_MULS_III(32, this->__PVT__w[0U][3U], 
                                                           VL_EXTENDS_II(32,8, x[3U])));
    unnamedblk7__DOT__unnamedblk8__DOT__s = VL_SHIFTRS_III(32,32,32, unnamedblk7__DOT__unnamedblk8__DOT__a, this->__PVT__sh);
    this->__PVT__r_leaky[0U] = VL_GTS_III(32, 0U, unnamedblk7__DOT__unnamedblk8__DOT__s);
    this->__PVT__r_acc[0U] = unnamedblk7__DOT__unnamedblk8__DOT__a;
    if (VL_GTS_III(32, 0U, unnamedblk7__DOT__unnamedblk8__DOT__s)) {
        unnamedblk7__DOT__unnamedblk8__DOT__s = VL_SHIFTRS_III(32,32,32, unnamedblk7__DOT__unnamedblk8__DOT__s, this->__PVT__leak);
    }
    this->__PVT__r_sat_hi[0U] = VL_LTS_III(32, 0x0000007fU, unnamedblk7__DOT__unnamedblk8__DOT__s);
    this->__PVT__r_sat_lo[0U] = VL_GTS_III(32, 0xffffff80U, unnamedblk7__DOT__unnamedblk8__DOT__s);
    unnamedblk7__DOT__unnamedblk8__DOT__a = this->__PVT__b[1U];
    unnamedblk7__DOT__unnamedblk8__DOT__a = (unnamedblk7__DOT__unnamedblk8__DOT__a 
                                             + VL_MULS_III(32, this->__PVT__w[1U][0U], 
                                                           VL_EXTENDS_II(32,8, x[0U])));
    unnamedblk7__DOT__unnamedblk8__DOT__a = (unnamedblk7__DOT__unnamedblk8__DOT__a 
                                             + VL_MULS_III(32, this->__PVT__w[1U][1U], 
                                                           VL_EXTENDS_II(32,8, x[1U])));
    unnamedblk7__DOT__unnamedblk8__DOT__a = (unnamedblk7__DOT__unnamedblk8__DOT__a 
                                             + VL_MULS_III(32, this->__PVT__w[1U][2U], 
                                                           VL_EXTENDS_II(32,8, x[2U])));
    unnamedblk7__DOT__unnamedblk8__DOT__a = (unnamedblk7__DOT__unnamedblk8__DOT__a 
                                             + VL_MULS_III(32, this->__PVT__w[1U][3U], 
                                                           VL_EXTENDS_II(32,8, x[3U])));
    this->__PVT__r_y[0U] = (VL_LTS_III(32, 0x0000007fU, unnamedblk7__DOT__unnamedblk8__DOT__s)
                             ? 0x0000007fU : (VL_GTS_III(32, 0xffffff80U, unnamedblk7__DOT__unnamedblk8__DOT__s)
                                               ? 0x00000080U
                                               : (0x000000ffU 
                                                  & unnamedblk7__DOT__unnamedblk8__DOT__s)));
    unnamedblk7__DOT__unnamedblk8__DOT__s = VL_SHIFTRS_III(32,32,32, unnamedblk7__DOT__unnamedblk8__DOT__a, this->__PVT__sh);
    this->__PVT__r_leaky[1U] = VL_GTS_III(32, 0U, unnamedblk7__DOT__unnamedblk8__DOT__s);
    this->__PVT__r_acc[1U] = unnamedblk7__DOT__unnamedblk8__DOT__a;
    if (VL_GTS_III(32, 0U, unnamedblk7__DOT__unnamedblk8__DOT__s)) {
        unnamedblk7__DOT__unnamedblk8__DOT__s = VL_SHIFTRS_III(32,32,32, unnamedblk7__DOT__unnamedblk8__DOT__s, this->__PVT__leak);
    }
    this->__PVT__r_sat_hi[1U] = VL_LTS_III(32, 0x0000007fU, unnamedblk7__DOT__unnamedblk8__DOT__s);
    this->__PVT__r_sat_lo[1U] = VL_GTS_III(32, 0xffffff80U, unnamedblk7__DOT__unnamedblk8__DOT__s);
    unnamedblk7__DOT__unnamedblk8__DOT__a = this->__PVT__b[2U];
    unnamedblk7__DOT__unnamedblk8__DOT__a = (unnamedblk7__DOT__unnamedblk8__DOT__a 
                                             + VL_MULS_III(32, this->__PVT__w[2U][0U], 
                                                           VL_EXTENDS_II(32,8, x[0U])));
    unnamedblk7__DOT__unnamedblk8__DOT__a = (unnamedblk7__DOT__unnamedblk8__DOT__a 
                                             + VL_MULS_III(32, this->__PVT__w[2U][1U], 
                                                           VL_EXTENDS_II(32,8, x[1U])));
    unnamedblk7__DOT__unnamedblk8__DOT__a = (unnamedblk7__DOT__unnamedblk8__DOT__a 
                                             + VL_MULS_III(32, this->__PVT__w[2U][2U], 
                                                           VL_EXTENDS_II(32,8, x[2U])));
    unnamedblk7__DOT__unnamedblk8__DOT__a = (unnamedblk7__DOT__unnamedblk8__DOT__a 
                                             + VL_MULS_III(32, this->__PVT__w[2U][3U], 
                                                           VL_EXTENDS_II(32,8, x[3U])));
    this->__PVT__r_y[1U] = (VL_LTS_III(32, 0x0000007fU, unnamedblk7__DOT__unnamedblk8__DOT__s)
                             ? 0x0000007fU : (VL_GTS_III(32, 0xffffff80U, unnamedblk7__DOT__unnamedblk8__DOT__s)
                                               ? 0x00000080U
                                               : (0x000000ffU 
                                                  & unnamedblk7__DOT__unnamedblk8__DOT__s)));
    unnamedblk7__DOT__unnamedblk8__DOT__s = VL_SHIFTRS_III(32,32,32, unnamedblk7__DOT__unnamedblk8__DOT__a, this->__PVT__sh);
    this->__PVT__r_leaky[2U] = VL_GTS_III(32, 0U, unnamedblk7__DOT__unnamedblk8__DOT__s);
    if (VL_GTS_III(32, 0U, unnamedblk7__DOT__unnamedblk8__DOT__s)) {
        unnamedblk7__DOT__unnamedblk8__DOT__s = VL_SHIFTRS_III(32,32,32, unnamedblk7__DOT__unnamedblk8__DOT__s, this->__PVT__leak);
    }
    this->__PVT__r_acc[2U] = unnamedblk7__DOT__unnamedblk8__DOT__a;
    this->__PVT__r_sat_hi[2U] = VL_LTS_III(32, 0x0000007fU, unnamedblk7__DOT__unnamedblk8__DOT__s);
    this->__PVT__r_sat_lo[2U] = VL_GTS_III(32, 0xffffff80U, unnamedblk7__DOT__unnamedblk8__DOT__s);
    unnamedblk7__DOT__unnamedblk8__DOT__a = this->__PVT__b[3U];
    unnamedblk7__DOT__unnamedblk8__DOT__a = (unnamedblk7__DOT__unnamedblk8__DOT__a 
                                             + VL_MULS_III(32, this->__PVT__w[3U][0U], 
                                                           VL_EXTENDS_II(32,8, x[0U])));
    unnamedblk7__DOT__unnamedblk8__DOT__a = (unnamedblk7__DOT__unnamedblk8__DOT__a 
                                             + VL_MULS_III(32, this->__PVT__w[3U][1U], 
                                                           VL_EXTENDS_II(32,8, x[1U])));
    unnamedblk7__DOT__unnamedblk8__DOT__a = (unnamedblk7__DOT__unnamedblk8__DOT__a 
                                             + VL_MULS_III(32, this->__PVT__w[3U][2U], 
                                                           VL_EXTENDS_II(32,8, x[2U])));
    unnamedblk7__DOT__unnamedblk8__DOT__a = (unnamedblk7__DOT__unnamedblk8__DOT__a 
                                             + VL_MULS_III(32, this->__PVT__w[3U][3U], 
                                                           VL_EXTENDS_II(32,8, x[3U])));
    this->__PVT__r_y[2U] = (VL_LTS_III(32, 0x0000007fU, unnamedblk7__DOT__unnamedblk8__DOT__s)
                             ? 0x0000007fU : (VL_GTS_III(32, 0xffffff80U, unnamedblk7__DOT__unnamedblk8__DOT__s)
                                               ? 0x00000080U
                                               : (0x000000ffU 
                                                  & unnamedblk7__DOT__unnamedblk8__DOT__s)));
    unnamedblk7__DOT__unnamedblk8__DOT__s = VL_SHIFTRS_III(32,32,32, unnamedblk7__DOT__unnamedblk8__DOT__a, this->__PVT__sh);
    this->__PVT__r_leaky[3U] = VL_GTS_III(32, 0U, unnamedblk7__DOT__unnamedblk8__DOT__s);
    if (VL_GTS_III(32, 0U, unnamedblk7__DOT__unnamedblk8__DOT__s)) {
        unnamedblk7__DOT__unnamedblk8__DOT__s = VL_SHIFTRS_III(32,32,32, unnamedblk7__DOT__unnamedblk8__DOT__s, this->__PVT__leak);
    }
    if (VL_LTS_III(32, 0x0000007fU, unnamedblk7__DOT__unnamedblk8__DOT__s)) {
        this->__PVT__r_y[3U] = 0x0000007fU;
        this->__PVT__r_acc[3U] = unnamedblk7__DOT__unnamedblk8__DOT__a;
        this->__PVT__r_sat_hi[3U] = 1U;
    } else {
        this->__PVT__r_y[3U] = (VL_GTS_III(32, 0xffffff80U, unnamedblk7__DOT__unnamedblk8__DOT__s)
                                 ? 0x00000080U : (0x000000ffU 
                                                  & unnamedblk7__DOT__unnamedblk8__DOT__s));
        this->__PVT__r_acc[3U] = unnamedblk7__DOT__unnamedblk8__DOT__a;
        this->__PVT__r_sat_hi[3U] = 0U;
    }
    this->__PVT__r_sat_lo[3U] = VL_GTS_III(32, 0xffffff80U, unnamedblk7__DOT__unnamedblk8__DOT__s);
}

void Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_ref_model::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_mlp_pkg__03a__03amlp_ref_model::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_ref_model::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __PVT__w[__Vi0][0] = 0;
        VL_UNPACKED_FILL(__PVT__w[__Vi0].data(), sizeof(__PVT__w[__Vi0][0]), 4);
    }
    __PVT__b[0] = 0;
    VL_UNPACKED_FILL(__PVT__b.data(), sizeof(__PVT__b[0]), 4);
    __PVT__sh = 0;
    __PVT__leak = 0;
    __PVT__r_acc[0] = 0;
    VL_UNPACKED_FILL(__PVT__r_acc.data(), sizeof(__PVT__r_acc[0]), 4);
    __PVT__r_y[0] = 0;
    VL_UNPACKED_FILL(__PVT__r_y.data(), sizeof(__PVT__r_y[0]), 4);
    __PVT__r_sat_hi[0] = 0;
    VL_UNPACKED_FILL(__PVT__r_sat_hi.data(), sizeof(__PVT__r_sat_hi[0]), 4);
    __PVT__r_sat_lo[0] = 0;
    VL_UNPACKED_FILL(__PVT__r_sat_lo.data(), sizeof(__PVT__r_sat_lo[0]), 4);
    __PVT__r_leaky[0] = 0;
    VL_UNPACKED_FILL(__PVT__r_leaky.data(), sizeof(__PVT__r_leaky[0]), 4);
}

Vtb_top_mlp_pkg__03a__03amlp_ref_model::~Vtb_top_mlp_pkg__03a__03amlp_ref_model() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_ref_model::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_ref_model::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_ref_model::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_ref_model::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_ref_model::to_string_middle\n"); );
    // Body
    std::string out;
    out += "w:" + VL_TO_STRING(__PVT__w);
    out += ", b:" + VL_TO_STRING(__PVT__b);
    out += ", sh:" + VL_TO_STRING(__PVT__sh);
    out += ", leak:" + VL_TO_STRING(__PVT__leak);
    out += ", r_acc:" + VL_TO_STRING(__PVT__r_acc);
    out += ", r_y:" + VL_TO_STRING(__PVT__r_y);
    out += ", r_sat_hi:" + VL_TO_STRING(__PVT__r_sat_hi);
    out += ", r_sat_lo:" + VL_TO_STRING(__PVT__r_sat_lo);
    out += ", r_leaky:" + VL_TO_STRING(__PVT__r_leaky);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
