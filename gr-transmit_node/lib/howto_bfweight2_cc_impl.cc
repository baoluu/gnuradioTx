/* -*- c++ -*- */
/* 
 * Copyright 2017 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <gnuradio/io_signature.h>
#include "howto_bfweight2_cc_impl.h"

namespace gr {
  namespace transmit_node {

    howto_bfweight2_cc::sptr
    howto_bfweight2_cc::make(gr_complex bf_weight)
    {
      return gnuradio::get_initial_sptr
        (new howto_bfweight2_cc_impl(bf_weight));
    }

    /*
     * The private constructor
     */
    howto_bfweight2_cc_impl::howto_bfweight2_cc_impl(gr_complex bf_weight)
      : gr::sync_block("howto_bfweight2_cc",
              gr::io_signature::make(1, 1, sizeof(gr_complex)),
              gr::io_signature::make(1, 1, sizeof(gr_complex))),
                d_bf_weight(bf_weight)
    {}

    /*
     * Our virtual destructor.
     */
    howto_bfweight2_cc_impl::~howto_bfweight2_cc_impl()
    {
    }

    void
    howto_bfweight2_cc_impl::forecast (int noutput_items, gr_vector_int &ninput_items_required)
    {
      /* <+forecast+> e.g. ninput_items_required[0] = noutput_items */
    }

    int
    howto_bfweight2_cc_impl::work (int noutput_items,
                       gr_vector_const_void_star &input_items,
                       gr_vector_void_star &output_items)
    {
      const gr_complex *in = (const gr_complex *) input_items[0];
      gr_complex *out = (gr_complex *) output_items[0];

      for (int i = 0; i < noutput_items; i++){
        out[i] = d_bf_weight*in[i];
      }

      // Tell runtime system how many output items we produced.
      return noutput_items;
    }

    void
    howto_bfweight2_cc_impl::set_bf_weight (gr_complex bf_weight)
    {
      d_bf_weight = bf_weight;
    }

  } /* namespace transmit_node */
} /* namespace gr */

