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

#ifndef INCLUDED_RECEIVER_NODE_HOWTO_CORRECT_GMSK_CC_IMPL_H
#define INCLUDED_RECEIVER_NODE_HOWTO_CORRECT_GMSK_CC_IMPL_H

#include <receiver_node/howto_correct_gmsk_cc.h>

#include <iostream>

namespace gr {
  namespace receiver_node {

    class howto_correct_gmsk_cc_impl : public howto_correct_gmsk_cc
    {
     private:
      // Nothing to declare in this block.
      // friend howto_correct_gmsk_cc_sptr howto_make_correct_gmsk_cc (double nbr_samples_packet, double sampling_freq);
      
      
     public:
      howto_correct_gmsk_cc_impl(double nbr_samples_packet, double sampling_freq);
      double d_nbr_samples_packet;
      double d_sampling_freq;
      
      int   cpt_samples;
      double  phase_shift;
      ~howto_correct_gmsk_cc_impl();
      

      // Where all the action really happens
      void forecast (int noutput_items, gr_vector_int &ninput_items_required);

      int general_work(int noutput_items,
           gr_vector_int &ninput_items,
           gr_vector_const_void_star &input_items,
           gr_vector_void_star &output_items);
    };

  } // namespace receiver_node
} // namespace gr

#endif /* INCLUDED_RECEIVER_NODE_HOWTO_CORRECT_GMSK_CC_IMPL_H */

