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
/* BINDTOOL_HEADER_FILE(fft_v.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(ef3398e963b1b296e309b81721bef8cb)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/fft/fft_v.h>
// pydoc.h is automatically generated in the build directory
#include <fft_v_pydoc.h>


template <class T, bool forward>
void bind_fft_v_template(py::module& m, const char* classname)
{
    using fft_v_blk = gr::fft::fft_v<T, forward>;

    py::class_<fft_v_blk,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<fft_v_blk>>(m, classname)
        .def(py::init(&gr::fft::fft_v<T, forward>::make),
             py::arg("fft_size"),
             py::arg("window"),
             py::arg("shift") = false,
             py::arg("nthreads") = 1)
        .def("set_nthreads", &fft_v_blk::set_nthreads, py::arg("n"))
        .def("nthreads", &fft_v_blk::nthreads)
        .def("set_window", &fft_v_blk::set_window, py::arg("window"));
}

void bind_fft_v(py::module& m)
{
    bind_fft_v_template<gr_complex, true>(m, "fft_vcc_fwd");
    bind_fft_v_template<gr_complex, false>(m, "fft_vcc_rev");
    bind_fft_v_template<float, true>(m, "fft_vfc_fwd");
    bind_fft_v_template<float, false>(m, "fft_vfc_rev");
}
