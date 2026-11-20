// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTB_TOP__DPI_H_
#define VERILATED_VTB_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh:125:15
    extern void m__uvm_report_dpi(int severity, const char* id, const char* message, int verbosity, const char* filename, int line);
    // DPI export at /home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/uvm_pkg.sv:71:17
    extern void uvm_polling_value_change_notify(int sv_key);

#ifdef __cplusplus
}
#endif

#endif  // guard
