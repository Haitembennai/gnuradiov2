/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(symbol_sync_cc.h)                                          */
/* BINDTOOL_HEADER_FILE_HASH(a6425f9904862a6d1eac5e8f884e14cd)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/symbol_sync_cc.h>
// pydoc.h is automatically generated in the build directory
#include <symbol_sync_cc_pydoc.h>

void bind_symbol_sync_cc(py::module& m)
{

    using symbol_sync_cc = ::gr::digital::symbol_sync_cc;


    py::class_<symbol_sync_cc,
               gr::block,
               gr::basic_block,
               std::shared_ptr<symbol_sync_cc>>(m, "symbol_sync_cc", D(symbol_sync_cc))

        .def(py::init(&symbol_sync_cc::make),
             py::arg("detector_type"),
             py::arg("sps"),
             py::arg("loop_bw"),
             py::arg("damping_factor") = 1.F,
             py::arg("ted_gain") = 1.F,
             py::arg("max_deviation") = 1.5F,
             py::arg("osps") = 1,
             py::arg("slicer") = gr::digital::constellation_sptr(),
             py::arg("interp_type") = ::gr::digital::ir_type::IR_MMSE_8TAP,
             py::arg("n_filters") = 128,
             py::arg("taps") = std::vector<float>(),
             D(symbol_sync_cc, make))


        .def("loop_bandwidth",
             &symbol_sync_cc::loop_bandwidth,
             D(symbol_sync_cc, loop_bandwidth))


        .def("damping_factor",
             &symbol_sync_cc::damping_factor,
             D(symbol_sync_cc, damping_factor))


        .def("ted_gain", &symbol_sync_cc::ted_gain, D(symbol_sync_cc, ted_gain))


        .def("alpha", &symbol_sync_cc::alpha, D(symbol_sync_cc, alpha))


        .def("beta", &symbol_sync_cc::beta, D(symbol_sync_cc, beta))


        .def("set_loop_bandwidth",
             &symbol_sync_cc::set_loop_bandwidth,
             py::arg("omega_n_norm"),
             D(symbol_sync_cc, set_loop_bandwidth))


        .def("set_damping_factor",
             &symbol_sync_cc::set_damping_factor,
             py::arg("zeta"),
             D(symbol_sync_cc, set_damping_factor))


        .def("set_ted_gain",
             &symbol_sync_cc::set_ted_gain,
             py::arg("ted_gain"),
             D(symbol_sync_cc, set_ted_gain))


        .def("set_alpha",
             &symbol_sync_cc::set_alpha,
             py::arg("alpha"),
             D(symbol_sync_cc, set_alpha))


        .def("set_beta",
             &symbol_sync_cc::set_beta,
             py::arg("beta"),
             D(symbol_sync_cc, set_beta))

        ;
}
