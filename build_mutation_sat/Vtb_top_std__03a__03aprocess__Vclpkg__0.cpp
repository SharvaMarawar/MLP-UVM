// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_std__03a__03aprocess__Vclpkg::__VnoInFunc_self(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_std__03a__03aprocess> &self__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_std__03a__03aprocess__Vclpkg::__VnoInFunc_self\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_std__03a__03aprocess> p;

// $c statement at /home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv:119:7
vlProcess->initFromSelf(    p);
    if ((VlNull{} == p)) {
        p = VL_NEW(Vtb_top_std__03a__03aprocess, vlSymsp);

// $c statement at /home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv:122:9
        VL_NULL_CHECK(p, "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 122)->m_process = vlProcess;

// $c statement at /home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv:123:9
vlProcess->setSelf(&*        p);
    }
    self__Vfuncrtn = p;
}

void Vtb_top_std__03a__03aprocess::__VnoInFunc_status(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_std__03a__03aprocess::__VnoInFunc_status\n"); );
    // Body
    status__Vfuncrtn = 0U;
    status__Vfuncrtn = 
// $cpure expression at /home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv:139:21
this->m_process->state()
    ;
}

void Vtb_top_std__03a__03aprocess::__VnoInFunc_kill(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_std__03a__03aprocess::__VnoInFunc_kill\n"); );
    // Body

// $c statement at /home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv:148:7
    this->m_process->disable();
}

VlCoroutine Vtb_top_std__03a__03aprocess::__VnoInFunc_await(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_std__03a__03aprocess::__VnoInFunc_await\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_hc77220fd__0;
    __Vtrigprevexpr_hc77220fd__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_1__status;
    ::IData/*31:0*/ __VlefCall_0__status;
    if ((1U & (~ ([&]() {
                        this->__VnoInFunc_status(vlSymsp, __VlefCall_0__status);
                        this->__VnoInFunc_status(vlSymsp, __VlefCall_1__status);
                    }(), ((0U == __VlefCall_0__status) 
                          | (4U == __VlefCall_1__status)))))) {
        ::CData/*0:0*/ __VdynTrigger_hfca375f0__0;
        __VdynTrigger_hfca375f0__0 = 0;
        __VdynTrigger_hfca375f0__0 = 0U;
        while ((1U & (~ (::IData)(__VdynTrigger_hfca375f0__0)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@([true] $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__VlefCall_0__status); // Function: status __VnoInFunc_status(std::process.__VlefCall_1__status); , ((32'h0 == std::process.__VlefCall_0__status) | (32'h4 == std::process.__VlefCall_1__status))); )", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 
                                                                            162);
            __Vtrigprevexpr_hc77220fd__0 = ([&]() {
                    this->__VnoInFunc_status(vlSymsp, __VlefCall_0__status);
                    this->__VnoInFunc_status(vlSymsp, __VlefCall_1__status);
                }(), ((0U == __VlefCall_0__status) 
                      | (4U == __VlefCall_1__status)));
            __VdynTrigger_hfca375f0__0 = __Vtrigprevexpr_hc77220fd__0;
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hfca375f0__0);
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@([true] $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__VlefCall_0__status); // Function: status __VnoInFunc_status(std::process.__VlefCall_1__status); , ((32'h0 == std::process.__VlefCall_0__status) | (32'h4 == std::process.__VlefCall_1__status))); )", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 
                                                                        162);
    }
    co_return;
}

void Vtb_top_std__03a__03aprocess::__VnoInFunc_get_randstate(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_randstate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_std__03a__03aprocess::__VnoInFunc_get_randstate\n"); );
    // Body
    ::std::string s;
    s = VL_CVT_PACK_STR_NI(
// $c expression at /home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv:185:26
0
    );

// $c statement at /home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv:187:7
    s = this->m_process->randstate();
    get_randstate__Vfuncrtn = s;
}

void Vtb_top_std__03a__03aprocess::__VnoInFunc_set_randstate(Vtb_top__Syms* __restrict vlSymsp, ::std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_std__03a__03aprocess::__VnoInFunc_set_randstate\n"); );
    // Body

// $c statement at /home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv:192:7
    this->m_process->randstate(s);
}

void Vtb_top_std__03a__03aprocess::init(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_std__03a__03aprocess::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtb_top_std__03a__03aprocess::__VnoInFunc_srandom(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ seed) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_std__03a__03aprocess::__VnoInFunc_srandom\n"); );
    // Body
    m_process->srandom(seed);
}

void Vtb_top_std__03a__03aprocess::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_std__03a__03aprocess::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_std__03a__03aprocess::~Vtb_top_std__03a__03aprocess() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_std__03a__03aprocess::~\n"); );
    // Body



//*** Below code from `systemc in Verilog file
// From `systemc at /home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv:179:14

    if (m_process) m_process->clearSelf(this);
//*** Above code from `systemc in Verilog file


}
