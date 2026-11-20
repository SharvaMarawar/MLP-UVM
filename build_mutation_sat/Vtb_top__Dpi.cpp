// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vtb_top::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vtb_top__Dpi.h"
#include "Vtb_top.h"

#ifndef VL_DPIDECL_m__uvm_report_dpi_
#define VL_DPIDECL_m__uvm_report_dpi_
void m__uvm_report_dpi(int severity, const char* id, const char* message, int verbosity, const char* filename, int line) {
    // DPI export at /home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh:125:15
    return Vtb_top::m__uvm_report_dpi(severity, id, message, verbosity, filename, line);
}
#endif

#ifndef VL_DPIDECL_uvm_polling_value_change_notify_
#define VL_DPIDECL_uvm_polling_value_change_notify_
void uvm_polling_value_change_notify(int sv_key) {
    // DPI export at /home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/uvm_pkg.sv:71:17
    return Vtb_top::uvm_polling_value_change_notify(sv_key);
}
#endif

