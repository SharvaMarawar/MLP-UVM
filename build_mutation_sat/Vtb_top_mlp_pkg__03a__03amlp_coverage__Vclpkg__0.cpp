// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_registry__piebed7786> __Vfunc_get__Vfuncout_91;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__piebed7786__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_91);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_91;
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "mlp_coverage"s;
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_top_uvm_pkg__03a__03auvm_subscriber__Tz8b2dcfef::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__cg_infer = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer, vlSymsp, 
                                   this);
    this->__PVT__cg_cfg = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_cfg, vlSymsp, 
                                 this);
    this->__PVT__cg_reset = VL_NEW(Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_reset, vlSymsp, 
                                   this);
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_out_class(Vtb_top__Syms* __restrict vlSymsp, ::CData/*7:0*/ y, ::IData/*31:0*/ &out_class__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_out_class\n"); );
    // Body
    {
        out_class__Vfuncrtn = 0U;
        if ((0xffffff80U == VL_EXTENDS_II(32,8, (::IData)(y)))) {
            out_class__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,8, (::IData)(y)))) {
            out_class__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        if ((0U == VL_EXTENDS_II(32,8, (::IData)(y)))) {
            out_class__Vfuncrtn = 2U;
            goto __Vlabel0;
        }
        if ((0x0000007fU == VL_EXTENDS_II(32,8, (::IData)(y)))) {
            out_class__Vfuncrtn = 4U;
            goto __Vlabel0;
        }
        out_class__Vfuncrtn = 3U;
        __Vlabel0: ;
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_signed_value_bin(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ value, ::IData/*31:0*/ &signed_value_bin__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_signed_value_bin\n"); );
    // Body
    {
        signed_value_bin__Vfuncrtn = 0U;
        if ((0xffffff80U == value)) {
            signed_value_bin__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (VL_GTS_III(32, 0U, value)) {
            signed_value_bin__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        if ((0U == value)) {
            signed_value_bin__Vfuncrtn = 2U;
            goto __Vlabel0;
        }
        if ((0x0000007fU == value)) {
            signed_value_bin__Vfuncrtn = 4U;
            goto __Vlabel0;
        }
        signed_value_bin__Vfuncrtn = 3U;
        __Vlabel0: ;
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_shift_bin(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ value, ::IData/*31:0*/ &shift_bin__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_shift_bin\n"); );
    // Body
    {
        shift_bin__Vfuncrtn = 0U;
        if ((0U == value)) {
            shift_bin__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((1U == value)) {
            shift_bin__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        if ((2U == value)) {
            shift_bin__Vfuncrtn = 2U;
            goto __Vlabel0;
        }
        if (VL_GTES_III(32, 7U, value)) {
            shift_bin__Vfuncrtn = 3U;
            goto __Vlabel0;
        }
        shift_bin__Vfuncrtn = 4U;
        __Vlabel0: ;
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_wait_bin(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ value, ::IData/*31:0*/ &wait_bin__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_wait_bin\n"); );
    // Body
    {
        wait_bin__Vfuncrtn = 0U;
        if ((0U == value)) {
            wait_bin__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((1U == value)) {
            wait_bin__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        if (VL_GTES_III(32, 3U, value)) {
            wait_bin__Vfuncrtn = 2U;
            goto __Vlabel0;
        }
        wait_bin__Vfuncrtn = 3U;
        __Vlabel0: ;
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_stage_bin(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ stage, ::IData/*31:0*/ &stage_bin__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_stage_bin\n"); );
    // Body
    stage_bin__Vfuncrtn = ((2U & (::IData)(stage)) ? 
                           ((1U & (::IData)(stage))
                             ? 3U : 1U) : ((1U & (::IData)(stage))
                                            ? 2U : 0U));
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_config_kind(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ addr, ::IData/*31:0*/ &config_kind__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_config_kind\n"); );
    // Body
    {
        config_kind__Vfuncrtn = 0U;
        if ((VL_LTES_III(32, 0U, addr) & VL_GTES_III(32, 0x0000000fU, addr))) {
            config_kind__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((VL_LTES_III(32, 0x00000010U, addr) & VL_GTES_III(32, 0x00000013U, addr))) {
            config_kind__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        if ((0x00000014U == addr)) {
            config_kind__Vfuncrtn = 2U;
            goto __Vlabel0;
        }
        if ((0x00000015U == addr)) {
            config_kind__Vfuncrtn = 3U;
            goto __Vlabel0;
        }
        config_kind__Vfuncrtn = 4U;
        __Vlabel0: ;
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_write(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_verdict> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_write\n"); );
    // Body
    ::IData/*31:0*/ __VtempIndex11;
    __VtempIndex11 = 0;
    ::IData/*31:0*/ __VtempIndex10;
    __VtempIndex10 = 0;
    ::IData/*31:0*/ __VtempIndex9;
    __VtempIndex9 = 0;
    ::IData/*31:0*/ __VtempIndex8;
    __VtempIndex8 = 0;
    ::IData/*31:0*/ __VtempIndex7;
    __VtempIndex7 = 0;
    ::IData/*31:0*/ __VtempIndex6;
    __VtempIndex6 = 0;
    ::IData/*31:0*/ __VtempIndex5;
    __VtempIndex5 = 0;
    ::IData/*31:0*/ __VtempIndex4;
    __VtempIndex4 = 0;
    ::IData/*31:0*/ __VtempIndex3;
    __VtempIndex3 = 0;
    ::IData/*31:0*/ __VtempIndex2;
    __VtempIndex2 = 0;
    ::IData/*31:0*/ __VtempIndex1;
    __VtempIndex1 = 0;
    if ((0U == VL_NULL_CHECK(t, "mlp_coverage.sv", 197)
         ->__PVT__kind)) {
        this->__PVT__v_x0 = VL_EXTENDS_II(32,8, VL_NULL_CHECK(t, "mlp_coverage.sv", 199)
                                          ->__PVT__x[0U]);
        this->__PVT__v_x1 = VL_EXTENDS_II(32,8, VL_NULL_CHECK(t, "mlp_coverage.sv", 199)
                                          ->__PVT__x[1U]);
        this->__PVT__v_x2 = VL_EXTENDS_II(32,8, VL_NULL_CHECK(t, "mlp_coverage.sv", 199)
                                          ->__PVT__x[2U]);
        this->__PVT__v_x3 = VL_EXTENDS_II(32,8, VL_NULL_CHECK(t, "mlp_coverage.sv", 199)
                                          ->__PVT__x[3U]);
        this->__VnoInFunc_out_class(vlSymsp, VL_NULL_CHECK(t, "mlp_coverage.sv", 200)
                                    ->__PVT__y_act[0U], this->__PVT__v_o0);
        this->__VnoInFunc_out_class(vlSymsp, VL_NULL_CHECK(t, "mlp_coverage.sv", 201)
                                    ->__PVT__y_act[1U], this->__PVT__v_o1);
        this->__VnoInFunc_out_class(vlSymsp, VL_NULL_CHECK(t, "mlp_coverage.sv", 202)
                                    ->__PVT__y_act[2U], this->__PVT__v_o2);
        this->__VnoInFunc_out_class(vlSymsp, VL_NULL_CHECK(t, "mlp_coverage.sv", 203)
                                    ->__PVT__y_act[3U], this->__PVT__v_o3);
        this->__PVT__v_shift = VL_NULL_CHECK(t, "mlp_coverage.sv", 204)
            ->__PVT__shift;
        this->__PVT__v_leak = VL_NULL_CHECK(t, "mlp_coverage.sv", 205)
            ->__PVT__leak;
        this->__PVT__v_iris = VL_NULL_CHECK(t, "mlp_coverage.sv", 206)
            ->__PVT__is_iris;
        this->__PVT__v_class = VL_NULL_CHECK(t, "mlp_coverage.sv", 207)
            ->__PVT__pred_act;
        this->__PVT__v_correct = (VL_NULL_CHECK(t, "mlp_coverage.sv", 208)
                                  ->__PVT__is_iris 
                                  && (VL_NULL_CHECK(t, "mlp_coverage.sv", 208)
                                      ->__PVT__pred_act 
                                      == VL_NULL_CHECK(t, "mlp_coverage.sv", 208)
                                      ->__PVT__label));
        this->__PVT__v_in_wait = VL_NULL_CHECK(t, "mlp_coverage.sv", 209)
            ->__PVT__in_wait;
        this->__PVT__v_out_wait = VL_NULL_CHECK(t, "mlp_coverage.sv", 210)
            ->__PVT__out_wait;
        this->__VnoInFunc_signed_value_bin(vlSymsp, this->__PVT__v_x0, __VtempIndex1);
        if (VL_LIKELY(((4U >= (7U & __VtempIndex1))))) {
            this->__PVT__x_hits[0U][(7U & __VtempIndex1)] 
                = ((::IData)(1U) + ((4U >= (7U & __VtempIndex1))
                                     ? this->__PVT__x_hits[0U]
                                    [(7U & __VtempIndex1)]
                                     : 0U));
        }
        this->__VnoInFunc_signed_value_bin(vlSymsp, this->__PVT__v_x1, __VtempIndex2);
        if (VL_LIKELY(((4U >= (7U & __VtempIndex2))))) {
            this->__PVT__x_hits[1U][(7U & __VtempIndex2)] 
                = ((::IData)(1U) + ((4U >= (7U & __VtempIndex2))
                                     ? this->__PVT__x_hits[1U]
                                    [(7U & __VtempIndex2)]
                                     : 0U));
        }
        this->__VnoInFunc_signed_value_bin(vlSymsp, this->__PVT__v_x2, __VtempIndex3);
        if (VL_LIKELY(((4U >= (7U & __VtempIndex3))))) {
            this->__PVT__x_hits[2U][(7U & __VtempIndex3)] 
                = ((::IData)(1U) + ((4U >= (7U & __VtempIndex3))
                                     ? this->__PVT__x_hits[2U]
                                    [(7U & __VtempIndex3)]
                                     : 0U));
        }
        this->__VnoInFunc_signed_value_bin(vlSymsp, this->__PVT__v_x3, __VtempIndex4);
        if (VL_LIKELY(((4U >= (7U & __VtempIndex4))))) {
            this->__PVT__x_hits[3U][(7U & __VtempIndex4)] 
                = ((::IData)(1U) + ((4U >= (7U & __VtempIndex4))
                                     ? this->__PVT__x_hits[3U]
                                    [(7U & __VtempIndex4)]
                                     : 0U));
        }
        if (VL_LIKELY(((4U >= (7U & this->__PVT__v_o0))))) {
            this->__PVT__y_hits[0U][(7U & this->__PVT__v_o0)] 
                = ((::IData)(1U) + ((4U >= (7U & this->__PVT__v_o0))
                                     ? this->__PVT__y_hits[0U]
                                    [(7U & this->__PVT__v_o0)]
                                     : 0U));
        }
        if (VL_LIKELY(((4U >= (7U & this->__PVT__v_o1))))) {
            this->__PVT__y_hits[1U][(7U & this->__PVT__v_o1)] 
                = ((::IData)(1U) + ((4U >= (7U & this->__PVT__v_o1))
                                     ? this->__PVT__y_hits[1U]
                                    [(7U & this->__PVT__v_o1)]
                                     : 0U));
        }
        if (VL_LIKELY(((4U >= (7U & this->__PVT__v_o2))))) {
            this->__PVT__y_hits[2U][(7U & this->__PVT__v_o2)] 
                = ((::IData)(1U) + ((4U >= (7U & this->__PVT__v_o2))
                                     ? this->__PVT__y_hits[2U]
                                    [(7U & this->__PVT__v_o2)]
                                     : 0U));
        }
        if (VL_LIKELY(((4U >= (7U & this->__PVT__v_o3))))) {
            this->__PVT__y_hits[3U][(7U & this->__PVT__v_o3)] 
                = ((::IData)(1U) + ((4U >= (7U & this->__PVT__v_o3))
                                     ? this->__PVT__y_hits[3U]
                                    [(7U & this->__PVT__v_o3)]
                                     : 0U));
        }
        if ((VL_LTES_III(32, 0U, this->__PVT__v_shift) 
             & VL_GTES_III(32, 0x0000000fU, this->__PVT__v_shift))) {
            this->__VnoInFunc_shift_bin(vlSymsp, this->__PVT__v_shift, __VtempIndex5);
            if (VL_LIKELY(((4U >= (7U & __VtempIndex5))))) {
                this->__PVT__shift_hits[(7U & __VtempIndex5)] 
                    = ((::IData)(1U) + ((4U >= (7U 
                                                & __VtempIndex5))
                                         ? this->__PVT__shift_hits
                                        [(7U & __VtempIndex5)]
                                         : 0U));
            }
            if ((VL_LTES_III(32, 0U, this->__PVT__v_leak) 
                 & VL_GTES_III(32, 7U, this->__PVT__v_leak))) {
                this->__PVT__leak_hits[(7U & this->__PVT__v_leak)] 
                    = ((::IData)(1U) + this->__PVT__leak_hits
                       [(7U & this->__PVT__v_leak)]);
                this->__VnoInFunc_shift_bin(vlSymsp, this->__PVT__v_shift, __VtempIndex6);
                if (VL_LIKELY(((4U >= (7U & __VtempIndex6))))) {
                    this->__PVT__shift_leak_hits[(7U 
                                                  & __VtempIndex6)][(7U 
                                                                     & this->__PVT__v_leak)] 
                        = ((::IData)(1U) + this->__PVT__shift_leak_hits
                           [((4U >= (7U & __VtempIndex6))
                              ? (7U & __VtempIndex6)
                              : 0U)][(7U & this->__PVT__v_leak)]);
                }
            }
        }
        if (this->__PVT__v_iris) {
            if ((VL_LTES_III(32, 0U, this->__PVT__v_class) 
                 & VL_GTES_III(32, 2U, this->__PVT__v_class))) {
                if (VL_LIKELY(((2U >= (3U & this->__PVT__v_class))))) {
                    this->__PVT__class_hits[(3U & this->__PVT__v_class)] 
                        = ((::IData)(1U) + ((2U >= 
                                             (3U & this->__PVT__v_class))
                                             ? this->__PVT__class_hits
                                            [(3U & this->__PVT__v_class)]
                                             : 0U));
                }
            }
            this->__PVT__correct_hits[this->__PVT__v_correct] 
                = ((::IData)(1U) + this->__PVT__correct_hits
                   [this->__PVT__v_correct]);
        }
        if (VL_LTES_III(32, 0U, this->__PVT__v_in_wait)) {
            this->__VnoInFunc_wait_bin(vlSymsp, this->__PVT__v_in_wait, __VtempIndex7);
            this->__PVT__in_wait_hits[(3U & __VtempIndex7)] 
                = ((::IData)(1U) + this->__PVT__in_wait_hits
                   [(3U & __VtempIndex7)]);
        }
        if (VL_LTES_III(32, 0U, this->__PVT__v_out_wait)) {
            this->__VnoInFunc_wait_bin(vlSymsp, this->__PVT__v_out_wait, __VtempIndex8);
            this->__PVT__out_wait_hits[(3U & __VtempIndex8)] 
                = ((::IData)(1U) + this->__PVT__out_wait_hits
                   [(3U & __VtempIndex8)]);
        }
        VL_NULL_CHECK(this->__PVT__cg_infer, "mlp_coverage.sv", 249)->__VnoInFunc_sample(vlSymsp);
    } else if ((1U == VL_NULL_CHECK(t, "mlp_coverage.sv", 197)
                ->__PVT__kind)) {
        this->__PVT__v_addr = VL_NULL_CHECK(t, "mlp_coverage.sv", 252)
            ->__PVT__addr;
        this->__PVT__v_busy = VL_NULL_CHECK(t, "mlp_coverage.sv", 253)
            ->__PVT__busy;
        this->__PVT__v_applied = VL_NULL_CHECK(t, "mlp_coverage.sv", 254)
            ->__PVT__applied;
        this->__PVT__v_with_in = VL_NULL_CHECK(t, "mlp_coverage.sv", 255)
            ->__PVT__with_in;
        this->__PVT__busy_hits[this->__PVT__v_busy] 
            = ((::IData)(1U) + this->__PVT__busy_hits
               [this->__PVT__v_busy]);
        this->__PVT__applied_hits[this->__PVT__v_applied] 
            = ((::IData)(1U) + this->__PVT__applied_hits
               [this->__PVT__v_applied]);
        this->__PVT__with_in_hits[this->__PVT__v_with_in] 
            = ((::IData)(1U) + this->__PVT__with_in_hits
               [this->__PVT__v_with_in]);
        if ((VL_LTES_III(32, 0U, this->__PVT__v_addr) 
             & VL_GTES_III(32, 0x0000001fU, this->__PVT__v_addr))) {
            this->__PVT__addr_hits[(0x0000001fU & this->__PVT__v_addr)] 
                = ((::IData)(1U) + this->__PVT__addr_hits
                   [(0x0000001fU & this->__PVT__v_addr)]);
        }
        if ((VL_LTES_III(32, 0U, this->__PVT__v_addr) 
             & VL_GTES_III(32, 0x0000001fU, this->__PVT__v_addr))) {
            this->__VnoInFunc_config_kind(vlSymsp, this->__PVT__v_addr, __VtempIndex9);
            if (VL_LIKELY(((4U >= (7U & __VtempIndex9))))) {
                this->__PVT__kind_busy_hits[(7U & __VtempIndex9)][this->__PVT__v_busy] 
                    = ((::IData)(1U) + this->__PVT__kind_busy_hits
                       [((4U >= (7U & __VtempIndex9))
                          ? (7U & __VtempIndex9) : 0U)]
                       [this->__PVT__v_busy]);
            }
        }
        VL_NULL_CHECK(this->__PVT__cg_cfg, "mlp_coverage.sv", 270)->__VnoInFunc_sample(vlSymsp);
    } else if ((2U == VL_NULL_CHECK(t, "mlp_coverage.sv", 197)
                ->__PVT__kind)) {
        this->__PVT__v_stage = VL_NULL_CHECK(t, "mlp_coverage.sv", 273)
            ->__PVT__stage;
        this->__PVT__v_stalled = VL_NULL_CHECK(t, "mlp_coverage.sv", 274)
            ->__PVT__stalled;
        this->__PVT__v_aborted = VL_NULL_CHECK(t, "mlp_coverage.sv", 275)
            ->__PVT__aborted;
        this->__VnoInFunc_stage_bin(vlSymsp, this->__PVT__v_stage, __VtempIndex10);
        this->__PVT__stage_hits[(3U & __VtempIndex10)] 
            = ((::IData)(1U) + this->__PVT__stage_hits
               [(3U & __VtempIndex10)]);
        this->__PVT__stalled_hits[this->__PVT__v_stalled] 
            = ((::IData)(1U) + this->__PVT__stalled_hits
               [this->__PVT__v_stalled]);
        if ((0U == this->__PVT__v_aborted)) {
            this->__PVT__aborted_hits[0U] = ((::IData)(1U) 
                                             + this->__PVT__aborted_hits[0U]);
        } else if ((1U == this->__PVT__v_aborted)) {
            this->__PVT__aborted_hits[1U] = ((::IData)(1U) 
                                             + this->__PVT__aborted_hits[1U]);
        } else {
            this->__PVT__aborted_hits[2U] = ((::IData)(1U) 
                                             + this->__PVT__aborted_hits[2U]);
        }
        if ((1U & (~ (((0U == (::IData)(this->__PVT__v_stage)) 
                       | (2U == (::IData)(this->__PVT__v_stage))) 
                      & (::IData)(this->__PVT__v_stalled))))) {
            this->__VnoInFunc_stage_bin(vlSymsp, this->__PVT__v_stage, __VtempIndex11);
            this->__PVT__stage_stall_hits[(3U & __VtempIndex11)][this->__PVT__v_stalled] 
                = ((::IData)(1U) + this->__PVT__stage_stall_hits
                   [(3U & __VtempIndex11)][this->__PVT__v_stalled]);
        }
        VL_NULL_CHECK(this->__PVT__cg_reset, "mlp_coverage.sv", 295)->__VnoInFunc_sample(vlSymsp);
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_write_cov_row(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ fd, ::std::string group_name, ::std::string coverpoint_name, ::std::string bin_name, ::IData/*31:0*/ hits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_write_cov_row\n"); );
    // Body
    VL_FWRITEF_NX(fd,"%s,%s,%s,%0d,%0d\n",5, 'S',&(group_name)
                  , 'S',&(coverpoint_name), 'S',&(bin_name)
                  , '#',32,hits, '~',32,((0U < hits)
                                          ? 1U : 0U));
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_report_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_report_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    double __VlefCall_14__get_inst_coverage__Vtcwrap_1_2;
    double __VlefCall_13__get_inst_coverage__Vtcwrap_1_2;
    double __VlefCall_12__get_inst_coverage__Vtcwrap_1_2;
    ::CData/*0:0*/ __VlefLogAnd_11;
    ::IData/*31:0*/ __VlefCall_10__get_report_action;
    ::IData/*31:0*/ __VlefCall_9__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_8__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_7;
    ::IData/*31:0*/ __VlefCall_6__get_report_action;
    ::IData/*31:0*/ __VlefCall_5__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_4__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    ::IData/*31:0*/ fd;
    ::IData/*31:0*/ i;
    ::IData/*31:0*/ j;
    {
        fd = 0U;
        i = 0U;
        j = 0U;
        fd = VL_FOPEN_NN("results/coverage_detail.csv"s
                         , "w"s);
        ;
        if ((0U == fd)) {
            this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "mlp_coverage.sv", 320)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "mlp_coverage.sv", 320)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "COV"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "mlp_coverage.sv", 320)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "COV"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "COV"s, "Could not open results/coverage_detail.csv"s, 0U, "mlp_coverage.sv"s, 0x00000140U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        VL_FWRITEF_NX(fd,"group,coverpoint,bin,hits,covered\n",0);
        i = 0U;
        while (VL_GTS_III(32, 4U, i)) {
            this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, VL_SFORMATF_N_NX("input_x%0d",1
                                                                                , '~',32,i) , "min"s, this->__PVT__x_hits
                                            [(3U & i)][0U]);
            this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, VL_SFORMATF_N_NX("input_x%0d",1
                                                                                , '~',32,i) , "negative"s, this->__PVT__x_hits
                                            [(3U & i)][1U]);
            this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, VL_SFORMATF_N_NX("input_x%0d",1
                                                                                , '~',32,i) , "zero"s, this->__PVT__x_hits
                                            [(3U & i)][2U]);
            this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, VL_SFORMATF_N_NX("input_x%0d",1
                                                                                , '~',32,i) , "positive"s, this->__PVT__x_hits
                                            [(3U & i)][3U]);
            this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, VL_SFORMATF_N_NX("input_x%0d",1
                                                                                , '~',32,i) , "max"s, this->__PVT__x_hits
                                            [(3U & i)][4U]);
            i = ((::IData)(1U) + i);
        }
        i = 0U;
        while (VL_GTS_III(32, 4U, i)) {
            this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, VL_SFORMATF_N_NX("output_y%0d",1
                                                                                , '~',32,i) , "min"s, this->__PVT__y_hits
                                            [(3U & i)][0U]);
            this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, VL_SFORMATF_N_NX("output_y%0d",1
                                                                                , '~',32,i) , "negative"s, this->__PVT__y_hits
                                            [(3U & i)][1U]);
            this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, VL_SFORMATF_N_NX("output_y%0d",1
                                                                                , '~',32,i) , "zero"s, this->__PVT__y_hits
                                            [(3U & i)][2U]);
            this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, VL_SFORMATF_N_NX("output_y%0d",1
                                                                                , '~',32,i) , "positive"s, this->__PVT__y_hits
                                            [(3U & i)][3U]);
            this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, VL_SFORMATF_N_NX("output_y%0d",1
                                                                                , '~',32,i) , "max"s, this->__PVT__y_hits
                                            [(3U & i)][4U]);
            i = ((::IData)(1U) + i);
        }
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "shift"s, "s0"s, this->__PVT__shift_hits[0U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "shift"s, "s1"s, this->__PVT__shift_hits[1U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "shift"s, "s2"s, this->__PVT__shift_hits[2U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "shift"s, "s3_7"s, this->__PVT__shift_hits[3U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "shift"s, "s8_15"s, this->__PVT__shift_hits[4U]);
        i = 0U;
        while (VL_GTS_III(32, 8U, i)) {
            this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "leak_shift"s, VL_SFORMATF_N_NX("leak_%0d",1
                                                                                , '~',32,i) , this->__PVT__leak_hits
                                            [(7U & i)]);
            i = ((::IData)(1U) + i);
        }
        i = 0U;
        while (VL_GTS_III(32, 5U, i)) {
            j = 0U;
            while (VL_GTS_III(32, 8U, j)) {
                this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "shift_x_leak"s, VL_SFORMATF_N_NX("shift%0d_leak%0d",2
                                                                                , '~',32,i
                                                                                , '~',32,j) , this->__PVT__shift_leak_hits
                                                [((4U 
                                                   >= 
                                                   (7U 
                                                    & i))
                                                   ? 
                                                  (7U 
                                                   & i)
                                                   : 0U)]
                                                [(7U 
                                                  & j)]);
                j = ((::IData)(1U) + j);
            }
            i = ((::IData)(1U) + i);
        }
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "iris_class"s, "setosa"s, this->__PVT__class_hits[0U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "iris_class"s, "versicolor"s, this->__PVT__class_hits[1U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "iris_class"s, "virginica"s, this->__PVT__class_hits[2U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "prediction"s, "wrong"s, this->__PVT__correct_hits[0U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "prediction"s, "right"s, this->__PVT__correct_hits[1U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "input_wait"s, "none"s, this->__PVT__in_wait_hits[0U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "input_wait"s, "one"s, this->__PVT__in_wait_hits[1U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "input_wait"s, "few"s, this->__PVT__in_wait_hits[2U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "input_wait"s, "many"s, this->__PVT__in_wait_hits[3U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "output_wait"s, "none"s, this->__PVT__out_wait_hits[0U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "output_wait"s, "one"s, this->__PVT__out_wait_hits[1U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "output_wait"s, "few"s, this->__PVT__out_wait_hits[2U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "infer"s, "output_wait"s, "many"s, this->__PVT__out_wait_hits[3U]);
        i = 0U;
        while (VL_GTS_III(32, 0x00000020U, i)) {
            this->__VnoInFunc_write_cov_row(vlSymsp, fd, "config"s, "address"s, VL_SFORMATF_N_NX("addr_%0d",1
                                                                                , '~',32,i) , this->__PVT__addr_hits
                                            [(0x0000001fU 
                                              & i)]);
            i = ((::IData)(1U) + i);
        }
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "config"s, "busy"s, "idle"s, this->__PVT__busy_hits[0U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "config"s, "busy"s, "busy"s, this->__PVT__busy_hits[1U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "config"s, "applied"s, "ignored"s, this->__PVT__applied_hits[0U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "config"s, "applied"s, "applied"s, this->__PVT__applied_hits[1U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "config"s, "with_input"s, "no_input"s, this->__PVT__with_in_hits[0U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "config"s, "with_input"s, "input_offered"s, this->__PVT__with_in_hits[1U]);
        i = 0U;
        while (VL_GTS_III(32, 5U, i)) {
            j = 0U;
            while (VL_GTS_III(32, 2U, j)) {
                this->__VnoInFunc_write_cov_row(vlSymsp, fd, "config"s, "kind_x_busy"s, VL_SFORMATF_N_NX("kind%0d_busy%0d",2
                                                                                , '~',32,i
                                                                                , '~',32,j) , this->__PVT__kind_busy_hits
                                                [((4U 
                                                   >= 
                                                   (7U 
                                                    & i))
                                                   ? 
                                                  (7U 
                                                   & i)
                                                   : 0U)]
                                                [(1U 
                                                  & j)]);
                j = ((::IData)(1U) + j);
            }
            i = ((::IData)(1U) + i);
        }
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "reset"s, "pipeline_stage"s, "idle"s, this->__PVT__stage_hits[0U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "reset"s, "pipeline_stage"s, "stage1"s, this->__PVT__stage_hits[1U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "reset"s, "pipeline_stage"s, "outreg"s, this->__PVT__stage_hits[2U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "reset"s, "pipeline_stage"s, "both"s, this->__PVT__stage_hits[3U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "reset"s, "stalled"s, "free"s, this->__PVT__stalled_hits[0U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "reset"s, "stalled"s, "stalled"s, this->__PVT__stalled_hits[1U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "reset"s, "aborted"s, "none"s, this->__PVT__aborted_hits[0U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "reset"s, "aborted"s, "one"s, this->__PVT__aborted_hits[1U]);
        this->__VnoInFunc_write_cov_row(vlSymsp, fd, "reset"s, "aborted"s, "several"s, this->__PVT__aborted_hits[2U]);
        i = 0U;
        while (VL_GTS_III(32, 4U, i)) {
            j = 0U;
            while (VL_GTS_III(32, 2U, j)) {
                if ((1U & (~ (((0U == i) | (1U == i)) 
                              & (1U == j))))) {
                    this->__VnoInFunc_write_cov_row(vlSymsp, fd, "reset"s, "stage_x_stalled"s, VL_SFORMATF_N_NX("stage%0d_stalled%0d",2
                                                                                , '~',32,i
                                                                                , '~',32,j) , this->__PVT__stage_stall_hits
                                                    [
                                                    (3U 
                                                     & i)]
                                                    [
                                                    (1U 
                                                     & j)]);
                }
                j = ((::IData)(1U) + j);
            }
            i = ((::IData)(1U) + i);
        }
        VL_FCLOSE_I(fd); this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_4__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_4__uvm_get_report_object, "mlp_coverage.sv", 434)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "mlp_coverage.sv", 434)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "COV"s, __VlefCall_5__get_report_verbosity_level);
        __VlefLogAnd_7 = VL_LTES_III(32, 0x00000064U, __VlefCall_5__get_report_verbosity_level);
        if (__VlefLogAnd_7) {
            VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "mlp_coverage.sv", 434)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "COV"s, __VlefCall_6__get_report_action);
            __VlefLogAnd_7 = (0U != __VlefCall_6__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_7))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "COV"s, "Detailed coverage CSV written to results/coverage_detail.csv"s, 0x00000064U, "mlp_coverage.sv"s, 0x000001b2U, ""s, 1U);
        }
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_8__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_8__uvm_get_report_object, "mlp_coverage.sv", 442)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "mlp_coverage.sv", 442)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "COV"s, __VlefCall_9__get_report_verbosity_level);
        __VlefLogAnd_11 = VL_LTES_III(32, 0x00000064U, __VlefCall_9__get_report_verbosity_level);
        if (__VlefLogAnd_11) {
            VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "mlp_coverage.sv", 442)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "COV"s, __VlefCall_10__get_report_action);
            __VlefLogAnd_11 = (0U != __VlefCall_10__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_11))) {
            VL_NULL_CHECK(this->__PVT__cg_infer, "mlp_coverage.sv", 442)->__VnoInFunc_get_inst_coverage__Vtcwrap_1_2(vlSymsp, __VlefCall_12__get_inst_coverage__Vtcwrap_1_2);
            VL_NULL_CHECK(this->__PVT__cg_cfg, "mlp_coverage.sv", 442)->__VnoInFunc_get_inst_coverage__Vtcwrap_1_2(vlSymsp, __VlefCall_13__get_inst_coverage__Vtcwrap_1_2);
            VL_NULL_CHECK(this->__PVT__cg_reset, "mlp_coverage.sv", 442)->__VnoInFunc_get_inst_coverage__Vtcwrap_1_2(vlSymsp, __VlefCall_14__get_inst_coverage__Vtcwrap_1_2);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "COV"s, VL_SFORMATF_N_NX("functional coverage: cg_infer %0.2f %%   cg_cfg %0.2f %%   cg_reset %0.2f %%",3
                                                                                , 'D',__VlefCall_12__get_inst_coverage__Vtcwrap_1_2
                                                                                , 'D',__VlefCall_13__get_inst_coverage__Vtcwrap_1_2
                                                                                , 'D',__VlefCall_14__get_inst_coverage__Vtcwrap_1_2) , 0x00000064U, "mlp_coverage.sv"s, 0x000001baU, ""s, 1U);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_mlp_pkg__03a__03amlp_coverage::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __PVT__x_hits[__Vi0][0] = 0;
        VL_UNPACKED_FILL(__PVT__x_hits[__Vi0].data(), sizeof(__PVT__x_hits[__Vi0][0]), 5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __PVT__y_hits[__Vi0][0] = 0;
        VL_UNPACKED_FILL(__PVT__y_hits[__Vi0].data(), sizeof(__PVT__y_hits[__Vi0][0]), 5);
    }
    __PVT__shift_hits[0] = 0;
    VL_UNPACKED_FILL(__PVT__shift_hits.data(), sizeof(__PVT__shift_hits[0]), 5);
    __PVT__leak_hits[0] = 0;
    VL_UNPACKED_FILL(__PVT__leak_hits.data(), sizeof(__PVT__leak_hits[0]), 8);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __PVT__shift_leak_hits[__Vi0][0] = 0;
        VL_UNPACKED_FILL(__PVT__shift_leak_hits[__Vi0].data(), sizeof(__PVT__shift_leak_hits[__Vi0][0]), 8);
    }
    __PVT__class_hits[0] = 0;
    VL_UNPACKED_FILL(__PVT__class_hits.data(), sizeof(__PVT__class_hits[0]), 3);
    __PVT__correct_hits[0] = 0;
    VL_UNPACKED_FILL(__PVT__correct_hits.data(), sizeof(__PVT__correct_hits[0]), 2);
    __PVT__in_wait_hits[0] = 0;
    VL_UNPACKED_FILL(__PVT__in_wait_hits.data(), sizeof(__PVT__in_wait_hits[0]), 4);
    __PVT__out_wait_hits[0] = 0;
    VL_UNPACKED_FILL(__PVT__out_wait_hits.data(), sizeof(__PVT__out_wait_hits[0]), 4);
    __PVT__addr_hits[0] = 0;
    VL_UNPACKED_FILL(__PVT__addr_hits.data(), sizeof(__PVT__addr_hits[0]), 32);
    __PVT__busy_hits[0] = 0;
    VL_UNPACKED_FILL(__PVT__busy_hits.data(), sizeof(__PVT__busy_hits[0]), 2);
    __PVT__applied_hits[0] = 0;
    VL_UNPACKED_FILL(__PVT__applied_hits.data(), sizeof(__PVT__applied_hits[0]), 2);
    __PVT__with_in_hits[0] = 0;
    VL_UNPACKED_FILL(__PVT__with_in_hits.data(), sizeof(__PVT__with_in_hits[0]), 2);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __PVT__kind_busy_hits[__Vi0][0] = 0;
        VL_UNPACKED_FILL(__PVT__kind_busy_hits[__Vi0].data(), sizeof(__PVT__kind_busy_hits[__Vi0][0]), 2);
    }
    __PVT__stage_hits[0] = 0;
    VL_UNPACKED_FILL(__PVT__stage_hits.data(), sizeof(__PVT__stage_hits[0]), 4);
    __PVT__stalled_hits[0] = 0;
    VL_UNPACKED_FILL(__PVT__stalled_hits.data(), sizeof(__PVT__stalled_hits[0]), 2);
    __PVT__aborted_hits[0] = 0;
    VL_UNPACKED_FILL(__PVT__aborted_hits.data(), sizeof(__PVT__aborted_hits[0]), 3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __PVT__stage_stall_hits[__Vi0][0] = 0;
        VL_UNPACKED_FILL(__PVT__stage_stall_hits[__Vi0].data(), sizeof(__PVT__stage_stall_hits[__Vi0][0]), 2);
    }
    __PVT__v_x0 = 0;
    __PVT__v_x1 = 0;
    __PVT__v_x2 = 0;
    __PVT__v_x3 = 0;
    __PVT__v_o0 = 0;
    __PVT__v_o1 = 0;
    __PVT__v_o2 = 0;
    __PVT__v_o3 = 0;
    __PVT__v_shift = 0;
    __PVT__v_leak = 0;
    __PVT__v_class = 0;
    __PVT__v_iris = 0;
    __PVT__v_correct = 0;
    __PVT__v_in_wait = 0;
    __PVT__v_out_wait = 0;
    __PVT__v_addr = 0;
    __PVT__v_busy = 0;
    __PVT__v_applied = 0;
    __PVT__v_with_in = 0;
    __PVT__v_stage = 0;
    __PVT__v_stalled = 0;
    __PVT__v_aborted = 0;
}

Vtb_top_mlp_pkg__03a__03amlp_coverage::~Vtb_top_mlp_pkg__03a__03amlp_coverage() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::~\n"); );
}

std::string Vtb_top_mlp_pkg__03a__03amlp_coverage::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_mlp_pkg__03a__03amlp_coverage::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_mlp_pkg__03a__03amlp_coverage::to_string_middle\n"); );
    // Body
    std::string out;
    out += "x_hits:" + VL_TO_STRING(__PVT__x_hits);
    out += ", y_hits:" + VL_TO_STRING(__PVT__y_hits);
    out += ", shift_hits:" + VL_TO_STRING(__PVT__shift_hits);
    out += ", leak_hits:" + VL_TO_STRING(__PVT__leak_hits);
    out += ", shift_leak_hits:" + VL_TO_STRING(__PVT__shift_leak_hits);
    out += ", class_hits:" + VL_TO_STRING(__PVT__class_hits);
    out += ", correct_hits:" + VL_TO_STRING(__PVT__correct_hits);
    out += ", in_wait_hits:" + VL_TO_STRING(__PVT__in_wait_hits);
    out += ", out_wait_hits:" + VL_TO_STRING(__PVT__out_wait_hits);
    out += ", addr_hits:" + VL_TO_STRING(__PVT__addr_hits);
    out += ", busy_hits:" + VL_TO_STRING(__PVT__busy_hits);
    out += ", applied_hits:" + VL_TO_STRING(__PVT__applied_hits);
    out += ", with_in_hits:" + VL_TO_STRING(__PVT__with_in_hits);
    out += ", kind_busy_hits:" + VL_TO_STRING(__PVT__kind_busy_hits);
    out += ", stage_hits:" + VL_TO_STRING(__PVT__stage_hits);
    out += ", stalled_hits:" + VL_TO_STRING(__PVT__stalled_hits);
    out += ", aborted_hits:" + VL_TO_STRING(__PVT__aborted_hits);
    out += ", stage_stall_hits:" + VL_TO_STRING(__PVT__stage_stall_hits);
    out += ", v_x0:" + VL_TO_STRING(__PVT__v_x0);
    out += ", v_x1:" + VL_TO_STRING(__PVT__v_x1);
    out += ", v_x2:" + VL_TO_STRING(__PVT__v_x2);
    out += ", v_x3:" + VL_TO_STRING(__PVT__v_x3);
    out += ", v_o0:" + VL_TO_STRING(__PVT__v_o0);
    out += ", v_o1:" + VL_TO_STRING(__PVT__v_o1);
    out += ", v_o2:" + VL_TO_STRING(__PVT__v_o2);
    out += ", v_o3:" + VL_TO_STRING(__PVT__v_o3);
    out += ", v_shift:" + VL_TO_STRING(__PVT__v_shift);
    out += ", v_leak:" + VL_TO_STRING(__PVT__v_leak);
    out += ", v_class:" + VL_TO_STRING(__PVT__v_class);
    out += ", v_iris:" + VL_TO_STRING(__PVT__v_iris);
    out += ", v_correct:" + VL_TO_STRING(__PVT__v_correct);
    out += ", v_in_wait:" + VL_TO_STRING(__PVT__v_in_wait);
    out += ", v_out_wait:" + VL_TO_STRING(__PVT__v_out_wait);
    out += ", v_addr:" + VL_TO_STRING(__PVT__v_addr);
    out += ", v_busy:" + VL_TO_STRING(__PVT__v_busy);
    out += ", v_applied:" + VL_TO_STRING(__PVT__v_applied);
    out += ", v_with_in:" + VL_TO_STRING(__PVT__v_with_in);
    out += ", v_stage:" + VL_TO_STRING(__PVT__v_stage);
    out += ", v_stalled:" + VL_TO_STRING(__PVT__v_stalled);
    out += ", v_aborted:" + VL_TO_STRING(__PVT__v_aborted);
    out += ", cg_infer:" + VL_TO_STRING(__PVT__cg_infer);
    out += ", cg_cfg:" + VL_TO_STRING(__PVT__cg_cfg);
    out += ", cg_reset:" + VL_TO_STRING(__PVT__cg_reset);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_subscriber__Tz8b2dcfef::to_string_middle();
    return (out);
}
