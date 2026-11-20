// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::IData/*31:0*/ size, ::IData/*31:0*/ n_bits, ::IData/*31:0*/ has_cover) {
    Vtb_top_uvm_pkg__03a__03auvm_reg::init(vlProcess, vlSymsp, name, n_bits, has_cover);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_size = size;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT____Vfifo_size, 0x0000000000000020ULL, 
                                                                   "__Vfifo_size", 0ULL);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_build(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_build\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__get_n_bits;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi24f2ccc5__Vclpkg.__VnoInFunc_create(vlSymsp, "value"s, VlNull{}, ""s, this->__PVT__value);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_0__get_n_bits);
    VL_NULL_CHECK(this->__PVT__value, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 90)->__VnoInFunc_configure(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_fifo>{this}, __VlefCall_0__get_n_bits, 0U, "RW"s, 0U, 0ULL, 1U, 0U, 1U);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_set(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ value, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_set\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__get_n_bits;
    {
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_0__get_n_bits);
        value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_0__get_n_bits) 
                          - 1ULL));
        if ((this->__PVT__fifo.size() == this->__PVT__m_size)) {
            goto __Vlabel0;
        }
        Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set(vlProcess, vlSymsp, value, fname, lineno);
        this->__PVT__m_set_cnt = ((::IData)(1U) + this->__PVT__m_set_cnt);
        this->__PVT__fifo.push_back(VL_NULL_CHECK(this->__PVT__value, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 158)
                                    ->__PVT__value);
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_update(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_update\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_write__status_4420;
    __Vtask_write__status_4420 = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ unnamedblk1__DOT__i;
    {
        status = 0U;
        if ((1U & ((~ (0U != this->__PVT__m_set_cnt)) 
                   | (0U == this->__PVT__fifo.size())))) {
            goto __Vlabel0;
        }
        Vtb_top_uvm_pkg__03a__03auvm_reg::__PVT__m_update_in_progress = 1U;
        unnamedblk1__DOT__i = 0U;
        unnamedblk1__DOT__i = (this->__PVT__fifo.size() 
                               - this->__PVT__m_set_cnt);
        while (VL_LTS_III(32, 0U, this->__PVT__m_set_cnt)) {
            if (VL_LTES_III(32, 0U, unnamedblk1__DOT__i)) {
                co_await this->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__status_4420, this->__PVT__fifo.at(unnamedblk1__DOT__i), path, map, parent, prior, extension, fname, lineno);
                status = __Vtask_write__status_4420;
            }
            unnamedblk1__DOT__i = ((::IData)(1U) + unnamedblk1__DOT__i);
            this->__PVT__m_set_cnt = (this->__PVT__m_set_cnt 
                                      - (::IData)(1U));
        }
        Vtb_top_uvm_pkg__03a__03auvm_reg::__PVT__m_update_in_progress = 0U;
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string fname, ::IData/*31:0*/ lineno, ::QData/*63:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    get__Vfuncrtn = this->__PVT__fifo.at(0U);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::IData/*31:0*/ kind, ::CData/*7:0*/ be) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_do_predict\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1735;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4421;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4424;
    __Vtask_uvm_report_warning__verbosity_4424 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4426;
    __Vtask_uvm_report_warning__line_4426 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4428;
    __Vtask_uvm_report_warning__report_enabled_checked_4428 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1736;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4429;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_7;
    ::IData/*31:0*/ __VlefCall_6__get_report_action;
    ::IData/*31:0*/ __VlefCall_5__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_4__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_3__get_compare;
    ::IData/*31:0*/ __VlefCall_2__get_n_bits;
    ::QData/*63:0*/ __VlefCall_1__get_value;
    ::IData/*31:0*/ __VlefCall_0__get_status;
    ::QData/*63:0*/ unnamedblk2__DOT__value;
    ::QData/*63:0*/ unnamedblk2__DOT__mirror_val;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT__unnamedblk3__DOT___local_report_object_;
    {
        Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, (::IData)(be));
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 228)->__VnoInFunc_get_status(vlSymsp, __VlefCall_0__get_status);
        if ((1U == __VlefCall_0__get_status)) {
            goto __Vlabel0;
        }
        if (((2U == kind) || (0U == kind))) {
            if (((this->__PVT__fifo.size() != this->__PVT__m_size) 
                 & (~ (::IData)(Vtb_top_uvm_pkg__03a__03auvm_reg::__PVT__m_update_in_progress)))) {
                this->__PVT__fifo.push_back(VL_NULL_CHECK(this->__PVT__value, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 241)
                                            ->__PVT__value);
            }
        } else if ((1U == kind)) {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 248)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_1__get_value);
            this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_2__get_n_bits);
            unnamedblk2__DOT__value = (__VlefCall_1__get_value 
                                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_2__get_n_bits) 
                                          - 1ULL));
            unnamedblk2__DOT__mirror_val = 0ULL;
            if ((0U == this->__PVT__fifo.size())) {
                goto __Vlabel0;
            }
            unnamedblk2__DOT__mirror_val = this->__PVT__fifo.pop_front();
            VL_NULL_CHECK(this->__PVT__value, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 254)->__VnoInFunc_get_compare(vlSymsp, __VlefCall_3__get_compare);
            if (((1U == __VlefCall_3__get_compare) 
                 && (unnamedblk2__DOT__mirror_val != unnamedblk2__DOT__value))) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1735);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1735;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4421);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4421;
                __VlefCall_4__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_4__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 256)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT__unnamedblk3__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 256)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "MIRROR_MISMATCH"s, __VlefCall_5__get_report_verbosity_level);
                __VlefLogAnd_7 = VL_LTES_III(32, 0U, __VlefCall_5__get_report_verbosity_level);
                if (__VlefLogAnd_7) {
                    VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 256)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "MIRROR_MISMATCH"s, __VlefCall_6__get_report_action);
                    __VlefLogAnd_7 = (0U != __VlefCall_6__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_7))) {
                    __Vtask_uvm_report_warning__report_enabled_checked_4428 = 1U;
                    this->__Vtask_uvm_report_warning__context_name_4427 = ""s;
                    __Vtask_uvm_report_warning__line_4426 = 0x00000100U;
                    this->__Vtask_uvm_report_warning__filename_4425 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh"s;
                    __Vtask_uvm_report_warning__verbosity_4424 = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_4423
                                  ,"Observed DUT read value 'h%0h != mirror value 'h%0h",2
                                  , '#',64,unnamedblk2__DOT__value
                                  , '#',64,unnamedblk2__DOT__mirror_val);
                    this->__Vtask_uvm_report_warning__id_4422 = "MIRROR_MISMATCH"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1736);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1736;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4429);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4429;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4422, this->__Vtask_uvm_report_warning__message_4423, __Vtask_uvm_report_warning__verbosity_4424, this->__Vtask_uvm_report_warning__filename_4425, __Vtask_uvm_report_warning__line_4426, this->__Vtask_uvm_report_warning__context_name_4427, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4428));
                }
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_pre_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_pre_write\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1737;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4430;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4433;
    __Vtask_uvm_report_error__verbosity_4433 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4435;
    __Vtask_uvm_report_error__line_4435 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4437;
    __Vtask_uvm_report_error__report_enabled_checked_4437 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1738;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4438;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1739;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4439;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4442;
    __Vtask_uvm_report_error__verbosity_4442 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4444;
    __Vtask_uvm_report_error__line_4444 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4446;
    __Vtask_uvm_report_error__report_enabled_checked_4446 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1740;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4447;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_7;
    ::IData/*31:0*/ __VlefCall_6__get_report_action;
    ::IData/*31:0*/ __VlefCall_5__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_4__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk4__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT___local_report_object_;
    {
        if (((0U != this->__PVT__m_set_cnt) & (~ (::IData)(Vtb_top_uvm_pkg__03a__03auvm_reg::__PVT__m_update_in_progress)))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1737);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1737;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4430);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4430;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 278)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk4__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 278)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "Needs Update"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 278)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "Needs Update"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                __Vtask_uvm_report_error__report_enabled_checked_4437 = 1U;
                this->__Vtask_uvm_report_error__context_name_4436 = ""s;
                __Vtask_uvm_report_error__line_4435 = 0x00000116U;
                this->__Vtask_uvm_report_error__filename_4434 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh"s;
                __Vtask_uvm_report_error__verbosity_4433 = 0U;
                this->__Vtask_uvm_report_error__message_4432 = "Must call update() after set() and before write()"s;
                this->__Vtask_uvm_report_error__id_4431 = "Needs Update"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1738);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1738;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4438);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4438;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4431, this->__Vtask_uvm_report_error__message_4432, __Vtask_uvm_report_error__verbosity_4433, this->__Vtask_uvm_report_error__filename_4434, __Vtask_uvm_report_error__line_4435, this->__Vtask_uvm_report_error__context_name_4436, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4437));
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 279)->__VnoInFunc_set_status(vlSymsp, 1U);
            goto __Vlabel0;
        }
        if (((this->__PVT__fifo.size() >= this->__PVT__m_size) 
             & (~ (::IData)(Vtb_top_uvm_pkg__03a__03auvm_reg::__PVT__m_update_in_progress)))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1739);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1739;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4439);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4439;
            __VlefCall_4__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_4__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 283)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 283)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "FIFO Full"s, __VlefCall_5__get_report_verbosity_level);
            __VlefLogAnd_7 = VL_LTES_III(32, 0U, __VlefCall_5__get_report_verbosity_level);
            if (__VlefLogAnd_7) {
                VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 283)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "FIFO Full"s, __VlefCall_6__get_report_action);
                __VlefLogAnd_7 = (0U != __VlefCall_6__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_7))) {
                __Vtask_uvm_report_error__report_enabled_checked_4446 = 1U;
                this->__Vtask_uvm_report_error__context_name_4445 = ""s;
                __Vtask_uvm_report_error__line_4444 = 0x0000011bU;
                this->__Vtask_uvm_report_error__filename_4443 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh"s;
                __Vtask_uvm_report_error__verbosity_4442 = 0U;
                this->__Vtask_uvm_report_error__message_4441 = "Write to full FIFO ignored"s;
                this->__Vtask_uvm_report_error__id_4440 = "FIFO Full"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1740);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1740;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4447);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4447;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4440, this->__Vtask_uvm_report_error__message_4441, __Vtask_uvm_report_error__verbosity_4442, this->__Vtask_uvm_report_error__filename_4443, __Vtask_uvm_report_error__line_4444, this->__Vtask_uvm_report_error__context_name_4445, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4446));
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 284)->__VnoInFunc_set_status(vlSymsp, 1U);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_pre_read(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_pre_read\n"); );
    // Body
    if ((0U == this->__PVT__fifo.size())) {
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 301)->__VnoInFunc_set_status(vlSymsp, 1U);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_post_randomize(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_post_randomize\n"); );
    // Body
    this->__PVT__m_set_cnt = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_valid_fifo_size_resize_constrained_array(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_valid_fifo_size_resize_constrained_array\n"); );
    // Body
    this->__PVT__fifo.resize(this->__PVT____Vfifo_size);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___Vresize_constrained_arrays(vlSymsp);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
    {
        // Inlined CFunc: __VnoInFunc_post_randomize
        this->__PVT__m_set_cnt = 0U;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_valid_fifo_size_setup_constraint(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc_valid_fifo_size_setup_constraint\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    VL_SFORMAT_NX(__Vtemp_1,"#x%x",1, '#',32,this->__PVT__m_size);
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (bvule __Vfifo_size %s))",1
                                                                               , 'S',&(__Vtemp_1)) , "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 0x00000040U, 
                                                              "      fifo.size() <= m_size;");
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(__Vbv (bvsge __Vfifo_size #x00000000))"s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_fifo.svh", 0x00000040U, 
                                                              "      fifo.size() <= m_size;");
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___Vresize_constrained_arrays(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___Vresize_constrained_arrays\n"); );
    // Body
    {
        // Inlined CFunc: __VnoInFunc_valid_fifo_size_resize_constrained_array
        this->__PVT__fifo.resize(this->__PVT____Vfifo_size);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_valid_fifo_size_setup_constraint(vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___VupdateRandVars\n"); );
    // Body
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.update_var(this->__PVT____Vfifo_size, 
                                                                    "__Vfifo_size");
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::__VnoInFunc___VBasicRand\n"); );
    // Body
    ::IData/*31:0*/ __VrandBlock__20__DOT____Vrandarr___4;
    __VrandBlock__20__DOT____Vrandarr___4 = 0;
    ::IData/*31:0*/ __VrandBlock__20__DOT____Vrandarr___4__Vloopsize;
    __VrandBlock__20__DOT____Vrandarr___4__Vloopsize = 0;
    __VBasicRand__Vfuncrtn = 1U;
    __VrandBlock__20__DOT____Vrandarr___4 = 0U;
    while ((__VrandBlock__20__DOT____Vrandarr___4 < this->__PVT__fifo.size())) {
        __VrandBlock__20__DOT____Vrandarr___4__Vloopsize 
            = this->__PVT__fifo.size();
        this->__PVT__fifo.atWriteAppend(__VrandBlock__20__DOT____Vrandarr___4) 
            = VL_RANDOM_RNG_Q(__Vm_rng);
        if ((__VrandBlock__20__DOT____Vrandarr___4__Vloopsize 
             <= this->__PVT__fifo.size())) {
            __VrandBlock__20__DOT____Vrandarr___4 = 
                ((::IData)(1U) + __VrandBlock__20__DOT____Vrandarr___4);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_set_cnt = 0;
    __PVT__m_size = 0;
    __PVT__fifo.atDefault() = 0;
    __PVT____Vfifo_size = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::~Vtb_top_uvm_pkg__03a__03auvm_reg_fifo() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_fifo::to_string_middle\n"); );
    // Body
    std::string out;
    out += "value:" + VL_TO_STRING(__PVT__value);
    out += ", m_set_cnt:" + VL_TO_STRING(__PVT__m_set_cnt);
    out += ", m_size:" + VL_TO_STRING(__PVT__m_size);
    out += ", fifo:" + VL_TO_STRING(__PVT__fifo);
    out += ", __Vfifo_size:" + VL_TO_STRING(__PVT____Vfifo_size);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_reg::to_string_middle();
    return (out);
}
