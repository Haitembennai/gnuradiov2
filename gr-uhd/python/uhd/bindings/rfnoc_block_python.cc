/*
 * Copyright 2021 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(rfnoc_block.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(a090f45dcc320d7e1f19f63c585e5aa0)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/uhd/rfnoc_block.h>
// pydoc.h is automatically generated in the build directory
#include <rfnoc_block_pydoc.h>

void bind_rfnoc_block(py::module& m)
{

    using rfnoc_block = ::gr::uhd::rfnoc_block;


    py::class_<rfnoc_block, gr::block, gr::basic_block, std::shared_ptr<rfnoc_block>>(
        m, "rfnoc_block", D(rfnoc_block))


        .def_static("make_block_ref",
                    &rfnoc_block::make_block_ref,
                    py::arg("graph"),
                    py::arg("block_args"),
                    py::arg("block_name"),
                    py::arg("device_select") = -1,
                    py::arg("block_select") = -1,
                    py::arg("max_ref_count") = 1,
                    D(rfnoc_block, make_block_ref))


        .def("get_unique_id", &rfnoc_block::get_unique_id, D(rfnoc_block, get_unique_id))


        .def("general_work",
             &rfnoc_block::general_work,
             py::arg("noutput_items"),
             py::arg("ninput_items"),
             py::arg("input_items"),
             py::arg("output_items"),
             D(rfnoc_block, general_work))

        ;
}
