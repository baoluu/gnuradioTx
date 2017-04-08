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

#ifndef INCLUDED_TRANSMIT_NODE_HOWTO_BFWEIGHT2_CC_IMPL_H
#define INCLUDED_TRANSMIT_NODE_HOWTO_BFWEIGHT2_CC_IMPL_H

#include <transmit_node/howto_bfweight2_cc.h>

namespace gr {
  namespace transmit_node {

    class howto_bfweight2_cc_impl : public howto_bfweight2_cc
    {
     private:
      // Nothing to declare in this block.

     public:
      howto_bfweight2_cc_impl(gr_complex bf_weight);
      ~howto_bfweight2_cc_impl();
      gr_complex d_bf_weight;

      gr_complex bf_weight () const {return d_bf_weight; }

      // Where all the action really happens
      void forecast (int noutput_items, gr_vector_int &ninput_items_required);

      int work(int noutput_items,
           gr_vector_const_void_star &input_items,
           gr_vector_void_star &output_items);

      void set_bf_weight (gr_complex bf_weight);

    };

  } // namespace transmit_node
} // namespace gr

#endif /* INCLUDED_TRANSMIT_NODE_HOWTO_BFWEIGHT2_CC_IMPL_H */

