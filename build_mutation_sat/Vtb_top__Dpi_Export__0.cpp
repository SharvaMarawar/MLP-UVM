// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.

#include "Vtb_top.h"
#include "Vtb_top__Syms.h"
#include "verilated_dpi.h"


void Vtb_top::m__uvm_report_dpi(int severity, const char* id, const char* message, int verbosity, const char* filename, int line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root::m__uvm_report_dpi\n"); );
    // Locals
    ::IData/*31:0*/ severity__Vcvt;
    severity__Vcvt = 0;
    static thread_local ::std::string id__Vcvt;
    static thread_local ::std::string message__Vcvt;
    ::IData/*31:0*/ verbosity__Vcvt;
    verbosity__Vcvt = 0;
    static thread_local ::std::string filename__Vcvt;
    ::IData/*31:0*/ line__Vcvt;
    line__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("m___05Fuvm_report_dpi");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtb_top__Vcb_m___05Fuvm_report_dpi_t __Vcb = reinterpret_cast<Vtb_top__Vcb_m___05Fuvm_report_dpi_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    severity__Vcvt = (severity);
    id__Vcvt = VL_CVT_N_CSTR(id);
    message__Vcvt = VL_CVT_N_CSTR(message);
    verbosity__Vcvt = (verbosity);
    filename__Vcvt = VL_CVT_N_CSTR(filename);
    line__Vcvt = (line);
    (*__Vcb)((Vtb_top__Syms*)(__Vscopep->symsp()), severity__Vcvt, id__Vcvt, message__Vcvt, verbosity__Vcvt, filename__Vcvt, line__Vcvt);
}

void Vtb_top::uvm_polling_value_change_notify(int sv_key) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root::uvm_polling_value_change_notify\n"); );
    // Locals
    ::IData/*31:0*/ sv_key__Vcvt;
    sv_key__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("uvm_polling_value_change_notify");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtb_top__Vcb_uvm_polling_value_change_notify_t __Vcb = reinterpret_cast<Vtb_top__Vcb_uvm_polling_value_change_notify_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    sv_key__Vcvt = (sv_key);
    (*__Vcb)((Vtb_top__Syms*)(__Vscopep->symsp()), sv_key__Vcvt);
}
