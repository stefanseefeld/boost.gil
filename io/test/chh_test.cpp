/*
    Copyright 2013 Christian Henning
    Use, modification and distribution are subject to the Boost Software License,
    Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt).
*/

// Test will include all format's headers and load and write some images.
// This test is more of a compilation test.

#include <iostream>

#include <boost/gil/extension/io/png_all.hpp>

#include <boost/test/unit_test.hpp>

#include "paths.hpp"

using namespace std;
using namespace boost::gil;


BOOST_AUTO_TEST_SUITE( gil_io_tests )

BOOST_AUTO_TEST_CASE( non_bit_aligned_image_test )
{
        rgba8_image_t img;
        read_image( png_filename, img, png_tag() );
#ifdef BOOST_GIL_IO_TEST_ALLOW_WRITING_IMAGES
        write_view( png_out + "all_formats_test.png", view( img ), png_tag() );
#endif // BOOST_GIL_IO_TEST_ALLOW_WRITING_IMAGES
}

BOOST_AUTO_TEST_SUITE_END()
