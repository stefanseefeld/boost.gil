/*
    Copyright 2008 Christian Henning
    Use, modification and distribution are subject to the Boost Software License,
    Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt).
*/

/*************************************************************************************************/

#ifndef boost_gil_extension_io_pnm_read_hpp_
#define boost_gil_extension_io_pnm_read_hpp_

////////////////////////////////////////////////////////////////////////////////////////
/// \file               
/// \brief
/// \author Christian Henning \n
///         
/// \date 2008 \n
///
////////////////////////////////////////////////////////////////////////////////////////

#include <boost/gil/extension/io/pnm/tags.hpp>
#include <boost/gil/extension/io/pnm/detail/supported_types.hpp>
#include <boost/gil/extension/io/pnm/detail/read.hpp>
#include <boost/gil/extension/io/pnm/detail/scanline_read.hpp>

#include <boost/gil/io/get_reader.hpp>
#include <boost/gil/io/make_backend.hpp>
#include <boost/gil/io/make_reader.hpp>
#include <boost/gil/io/make_dynamic_image_reader.hpp>
#include <boost/gil/io/make_scanline_reader.hpp>

#include <boost/gil/io/read_image.hpp>
#include <boost/gil/io/read_view.hpp>
#include <boost/gil/io/read_image_info.hpp>
#include <boost/gil/io/read_and_convert_image.hpp>
#include <boost/gil/io/read_and_convert_view.hpp>

#include <boost/gil/io/scanline_read_iterator.hpp>

#endif
