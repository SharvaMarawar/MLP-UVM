// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_std__03a__03asemaphore::__VnoInFunc_dropKilled(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_std__03a__03asemaphore::__VnoInFunc_dropKilled\n"); );
    // Body
    ::CData/*0:0*/ __VlefLogAnd_1;
    ::IData/*31:0*/ __VlefCall_0__status;
    while (true) {
        __VlefLogAnd_1 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
        if (__VlefLogAnd_1) {
            VL_NULL_CHECK(this->__PVT__m_queue.at(0U)
                          .__PVT__proc, "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 208)->__VnoInFunc_status(vlSymsp, __VlefCall_0__status);
            __VlefLogAnd_1 = (4U == __VlefCall_0__status);
        }
        if (!(__VlefLogAnd_1)) break;
        std::ignore = this->__PVT__m_queue.pop_front();
    }
}

void Vtb_top_std__03a__03asemaphore::init(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_std__03a__03asemaphore::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_keyCount = keyCount;
}

void Vtb_top_std__03a__03asemaphore::__VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_std__03a__03asemaphore::__VnoInFunc_put\n"); );
    // Body
    this->__PVT__m_keyCount = (this->__PVT__m_keyCount 
                               + keyCount);
}

VlCoroutine Vtb_top_std__03a__03asemaphore::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_std__03a__03asemaphore::__VnoInFunc_get\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_h01c489ad__0;
    __Vtrigprevexpr_h01c489ad__0 = 0;
    ::CData/*0:0*/ __Vtrigprevexpr_h9ade9bc3__0;
    __Vtrigprevexpr_h9ade9bc3__0 = 0;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vfunc_self__Vfuncout_104;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VlefLogOr_3;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __VlefCall_2__self;
    ::IData/*31:0*/ __VlefCall_1__status;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __VlefCall_0__self;
    {
        {
            // Inlined CFunc: __VnoInFunc_dropKilled
            ::CData/*0:0*/ __Vinline_0___VnoInFunc_dropKilled___VlefLogAnd_1;
            ::IData/*31:0*/ __Vinline_0___VnoInFunc_dropKilled___VlefCall_0__status;
            while (true) {
                __Vinline_0___VnoInFunc_dropKilled___VlefLogAnd_1 
                    = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                if (__Vinline_0___VnoInFunc_dropKilled___VlefLogAnd_1) {
                    VL_NULL_CHECK(this->__PVT__m_queue.at(0U)
                                  .__PVT__proc, "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 208)->__VnoInFunc_status(vlSymsp, __Vinline_0___VnoInFunc_dropKilled___VlefCall_0__status);
                    __Vinline_0___VnoInFunc_dropKilled___VlefLogAnd_1 
                        = (4U == __Vinline_0___VnoInFunc_dropKilled___VlefCall_0__status);
                }
                if (!(__Vinline_0___VnoInFunc_dropKilled___VlefLogAnd_1)) break;
                std::ignore = this->__PVT__m_queue.pop_front();
            }
        }
        if ((VL_GTES_III(32, this->__PVT__m_keyCount, keyCount) 
             & ((0U == this->__PVT__m_queue.size()) 
                | VL_GTS_III(32, this->__PVT__m_queue.at(0U)
                             .__PVT__reqKeys, keyCount)))) {
            this->__PVT__m_keyCount = (this->__PVT__m_keyCount 
                                       - keyCount);
            goto __Vlabel0;
        }
        this->__PVT__m_queue.push_back(Vtb_top_procKeys__struct__0{
                ([&]() {
                        vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__Vfuncout_104);
                    }(), __Vfunc_self__Vfuncout_104),
                (::IData)(keyCount)
            });
        while (true) {
            vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __VlefCall_0__self);
            if (!((this->__PVT__m_queue.at(0U).__PVT__proc 
                   != __VlefCall_0__self))) break;
            if ((1U & (~ ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_queue.at(0U)
                                              .__PVT__proc, "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 230)
                          ->__VnoInFunc_status(vlSymsp, __VlefCall_1__status);
                                __VlefLogOr_3 = (4U 
                                                 == __VlefCall_1__status);
                                if ((1U & (~ (::IData)(__VlefLogOr_3)))) {
                                    vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __VlefCall_2__self);
                                    __VlefLogOr_3 = 
                                        (this->__PVT__m_queue.at(0U)
                                         .__PVT__proc 
                                         == __VlefCall_2__self);
                                }
                            }(), (::IData)(__VlefLogOr_3))))) {
                ::CData/*0:0*/ __VdynTrigger_h093e032e__0;
                __VdynTrigger_h093e032e__0 = 0;
                __VdynTrigger_h093e032e__0 = 0U;
                while ((1U & (~ (::IData)(__VdynTrigger_h093e032e__0)))) {
                    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@([true] $_EXPRSTMT( // Function: status std::semaphore.m_queue.at(32'sh0).proc.(std::semaphore.__VlefCall_1__status); std::semaphore.__VlefLogOr_3 = (32'h4 == std::semaphore.__VlefCall_1__status); if ((~ std::semaphore.__VlefLogOr_3)) begin // Function: self __VnoInFunc_self(std::semaphore.__VlefCall_2__self); std::semaphore.__VlefLogOr_3 = (std::semaphore.m_queue.at(32'sh0).proc == std::semaphore.__VlefCall_2__self); end , std::semaphore.__VlefLogOr_3); )", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 
                                                                                230);
                    __Vtrigprevexpr_h9ade9bc3__0 = 
                        ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_queue.at(0U)
                                          .__PVT__proc, "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 230)
                         ->__VnoInFunc_status(vlSymsp, __VlefCall_1__status);
                            __VlefLogOr_3 = (4U == __VlefCall_1__status);
                            if ((1U & (~ (::IData)(__VlefLogOr_3)))) {
                                vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __VlefCall_2__self);
                                __VlefLogOr_3 = (this->__PVT__m_queue.at(0U)
                                                 .__PVT__proc 
                                                 == __VlefCall_2__self);
                            }
                        }(), (::IData)(__VlefLogOr_3));
                    __VdynTrigger_h093e032e__0 = __Vtrigprevexpr_h9ade9bc3__0;
                    vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h093e032e__0);
                }
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                                vlProcess, 
                                                                                "@([true] $_EXPRSTMT( // Function: status std::semaphore.m_queue.at(32'sh0).proc.(std::semaphore.__VlefCall_1__status); std::semaphore.__VlefLogOr_3 = (32'h4 == std::semaphore.__VlefCall_1__status); if ((~ std::semaphore.__VlefLogOr_3)) begin // Function: self __VnoInFunc_self(std::semaphore.__VlefCall_2__self); std::semaphore.__VlefLogOr_3 = (std::semaphore.m_queue.at(32'sh0).proc == std::semaphore.__VlefCall_2__self); end , std::semaphore.__VlefLogOr_3); )", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 
                                                                                230);
            }
            {
                // Inlined CFunc: __VnoInFunc_dropKilled
                ::CData/*0:0*/ __Vinline_1___VnoInFunc_dropKilled___VlefLogAnd_1;
                ::IData/*31:0*/ __Vinline_1___VnoInFunc_dropKilled___VlefCall_0__status;
                while (true) {
                    __Vinline_1___VnoInFunc_dropKilled___VlefLogAnd_1 
                        = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                    if (__Vinline_1___VnoInFunc_dropKilled___VlefLogAnd_1) {
                        VL_NULL_CHECK(this->__PVT__m_queue.at(0U)
                                      .__PVT__proc, "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 208)->__VnoInFunc_status(vlSymsp, __Vinline_1___VnoInFunc_dropKilled___VlefCall_0__status);
                        __Vinline_1___VnoInFunc_dropKilled___VlefLogAnd_1 
                            = (4U == __Vinline_1___VnoInFunc_dropKilled___VlefCall_0__status);
                    }
                    if (!(__Vinline_1___VnoInFunc_dropKilled___VlefLogAnd_1)) break;
                    std::ignore = this->__PVT__m_queue.pop_front();
                }
            }
        }
        if (VL_LTS_III(32, this->__PVT__m_keyCount, keyCount)) {
            ::CData/*0:0*/ __VdynTrigger_h3f241d20__0;
            __VdynTrigger_h3f241d20__0 = 0;
            __VdynTrigger_h3f241d20__0 = 0U;
            while ((1U & (~ (::IData)(__VdynTrigger_h3f241d20__0)))) {
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@([true] (std::semaphore.m_keyCount >= std::semaphore.keyCount))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 
                                                                                233);
                __Vtrigprevexpr_h01c489ad__0 = VL_GTES_III(32, this->__PVT__m_keyCount, keyCount);
                __VdynTrigger_h3f241d20__0 = __Vtrigprevexpr_h01c489ad__0;
                vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h3f241d20__0);
            }
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                            vlProcess, 
                                                                            "@([true] (std::semaphore.m_keyCount >= std::semaphore.keyCount))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 
                                                                            233);
        }
        this->__PVT__m_keyCount = (this->__PVT__m_keyCount 
                                   - keyCount);
        std::ignore = this->__PVT__m_queue.pop_front();
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_std__03a__03asemaphore::__VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ keyCount, ::IData/*31:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_std__03a__03asemaphore::__VnoInFunc_try_get\n"); );
    // Body
    {
        try_get__Vfuncrtn = 0U;
        if (VL_LTS_III(32, this->__PVT__m_keyCount, keyCount)) {
            try_get__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        this->__PVT__m_keyCount = (this->__PVT__m_keyCount 
                                   - keyCount);
        try_get__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_std__03a__03asemaphore::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_std__03a__03asemaphore::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_queue.atDefault().__PVT__reqKeys = 0;
    __PVT__m_keyCount = 0;
}
