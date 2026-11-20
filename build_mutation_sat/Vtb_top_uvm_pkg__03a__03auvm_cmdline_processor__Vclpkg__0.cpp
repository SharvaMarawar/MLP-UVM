// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg::__VnoInFunc_get_inst(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor> &get_inst__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg::__VnoInFunc_get_inst\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__Vnontrivs.__PVT__m_inst)) {
        this->__Vnontrivs.__PVT__m_inst = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor, vlProcess, vlSymsp, "uvm_cmdline_proc"s);
    }
    get_inst__Vfuncrtn = this->__Vnontrivs.__PVT__m_inst;
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_args(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::std::string> &args) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_args\n"); );
    // Body
    args = this->__PVT__m_argv;
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_matches(Vtb_top__Syms* __restrict vlSymsp, ::std::string match, ::VlQueue<::std::string> &args, ::IData/*31:0*/ &get_arg_matches__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_matches\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1289;
    __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1289 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match__Vfuncout_1290;
    __Vfunc_uvm_re_match__Vfuncout_1290 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match____Vincrement1_1294;
    __Vfunc_uvm_re_match____Vincrement1_1294 = 0;
    // Body
    ::CData/*0:0*/ __VlefCall_0__uvm_is_match;
    ::IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk1__DOT__i__Vloopsize;
    unnamedblk1__DOT__i__Vloopsize = 0;
    ::CData/*0:0*/ match_is_regex;
    ::IData/*31:0*/ len;
    match_is_regex = ((VL_LTS_III(32, 2U, VL_LEN_IN(match)) 
                       & (0x2fU == VL_GETC_N(match,0U))) 
                      & (0x2fU == VL_GETC_N(match,(
                                                   VL_LEN_IN(match) 
                                                   - (::IData)(1U)))));
    len = VL_LEN_IN(match);
    args.clear();
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__m_argv.size())) {
        unnamedblk1__DOT__i__Vloopsize = this->__PVT__m_argv.size();
        __VlefCall_0__uvm_is_match = match_is_regex;
        if (__VlefCall_0__uvm_is_match) {
            this->__Vfunc_uvm_is_match__str_1288 = 
                VL_CVT_PACK_STR_NN(this->__PVT__m_argv.at(unnamedblk1__DOT__i));
            this->__Vfunc_uvm_is_match__expr_1287 = match;
            this->__Vfunc_uvm_re_match__str_1292 = this->__Vfunc_uvm_is_match__str_1288;
            this->__Vfunc_uvm_re_match__re_1291 = this->__Vfunc_uvm_is_match__expr_1287;
            __Vfunc_uvm_re_match____Vincrement1_1294 = 0U;
            {
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1291))) {
                    __Vfunc_uvm_re_match__Vfuncout_1290 = 0U;
                    goto __Vlabel0;
                }
                if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1291,0U))) {
                    this->__Vfunc_uvm_re_match__re_1291 
                        = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__re_1291,1U,
                                      (VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1291) 
                                       - (::IData)(1U)));
                }
                while (((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                         != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_1292)) 
                        & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_1291,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_1291,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__str_1292,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_1291,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        __Vfunc_uvm_re_match__Vfuncout_1290 = 1U;
                        goto __Vlabel0;
                    }
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                }
                while ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_1292))) {
                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1291,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        if ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                             == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1291))) {
                            __Vfunc_uvm_re_match__Vfuncout_1290 = 0U;
                            goto __Vlabel0;
                        }
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_1291,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                 == VL_GETC_N(this->__Vfunc_uvm_re_match__str_1292,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1291,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                        __Vfunc_uvm_re_match____Vincrement1_1294 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = __Vfunc_uvm_re_match____Vincrement1_1294;
                    }
                }
                while ((VL_LTS_III(32, vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                   VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1291)) 
                        & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1291,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                }
                __Vfunc_uvm_re_match__Vfuncout_1290 
                    = ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1291))
                        ? 0U : 1U);
                __Vlabel0: ;
            }
            __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1289 
                = __Vfunc_uvm_re_match__Vfuncout_1290;
            __VlefCall_0__uvm_is_match = (0U == __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1289);
        }
        if (__VlefCall_0__uvm_is_match) {
            args.push_back(this->__PVT__m_argv.at(unnamedblk1__DOT__i));
        } else if ((VL_GTES_III(32, VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk1__DOT__i)), len) 
                    & (VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk1__DOT__i),0U,
                                   (len - (::IData)(1U))) 
                       == match))) {
            args.push_back(this->__PVT__m_argv.at(unnamedblk1__DOT__i));
        }
        if ((unnamedblk1__DOT__i__Vloopsize <= this->__PVT__m_argv.size())) {
            unnamedblk1__DOT__i = ((::IData)(1U) + unnamedblk1__DOT__i);
        }
    }
    get_arg_matches__Vfuncrtn = args.size();
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_value(Vtb_top__Syms* __restrict vlSymsp, ::std::string match, ::std::string &value, ::IData/*31:0*/ &get_arg_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_value\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    ::IData/*31:0*/ chars;
    chars = VL_LEN_IN(match);
    get_arg_value__Vfuncrtn = 0U;
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__m_argv.size())) {
        if (VL_GTES_III(32, VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk2__DOT__i)), chars)) {
            if ((VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk2__DOT__i),0U,
                             (chars - (::IData)(1U))) 
                 == match)) {
                get_arg_value__Vfuncrtn = ((::IData)(1U) 
                                           + get_arg_value__Vfuncrtn);
                if ((1U == get_arg_value__Vfuncrtn)) {
                    value = VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk2__DOT__i),chars,
                                        (VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk2__DOT__i)) 
                                         - (::IData)(1U)));
                }
            }
        }
        unnamedblk2__DOT__i = ((::IData)(1U) + unnamedblk2__DOT__i);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_values(Vtb_top__Syms* __restrict vlSymsp, ::std::string match, ::VlQueue<::std::string> &values, ::IData/*31:0*/ &get_arg_values__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_values\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    ::IData/*31:0*/ chars;
    chars = VL_LEN_IN(match);
    values.clear();
    unnamedblk3__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__i, this->__PVT__m_argv.size())) {
        if (VL_GTES_III(32, VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk3__DOT__i)), chars)) {
            if ((VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk3__DOT__i),0U,
                             (chars - (::IData)(1U))) 
                 == match)) {
                values.push_back(VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk3__DOT__i),chars,
                                             (VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk3__DOT__i)) 
                                              - (::IData)(1U))));
            }
        }
        unnamedblk3__DOT__i = ((::IData)(1U) + unnamedblk3__DOT__i);
    }
    get_arg_values__Vfuncrtn = values.size();
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_report_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::~Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_cmdline_processor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_argv:" + VL_TO_STRING(__PVT__m_argv);
    out += ", m_plus_argv:" + VL_TO_STRING(__PVT__m_plus_argv);
    out += ", m_uvm_argv:" + VL_TO_STRING(__PVT__m_uvm_argv);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_report_object::to_string_middle();
    return (out);
}
