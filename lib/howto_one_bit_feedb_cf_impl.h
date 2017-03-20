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

#ifndef INCLUDED_RECEIVER_NODE_HOWTO_ONE_BIT_FEEDB_CF_IMPL_H
#define INCLUDED_RECEIVER_NODE_HOWTO_ONE_BIT_FEEDB_CF_IMPL_H

#include <receiver_node/howto_one_bit_feedb_cf.h>

#include <iostream>

namespace gr {
  namespace receiver_node {

    class howto_one_bit_feedb_cf_impl : public howto_one_bit_feedb_cf
    {
     private:
      // Nothing to declare in this block.

     public:
      howto_one_bit_feedb_cf_impl(double sample_rate, int decim_factor);
      double d_sample_rate;
      int d_decim_factor;

      int d_nbr_output_floats;
      float d_treshold;
      int d_nbr_samples_packet;
      int d_nbr_samples_cycle;

      int cpt_samples;
      int cpt_samples_packet;
      int feedback_symbol;
      int packet_number;
      double avg_rss;
      double current_rss;
      double rss_max;
      double past_rss [4];

      ~howto_one_bit_feedb_cf_impl();

      // Where all the action really happens
      void forecast (int noutput_items, gr_vector_int &ninput_items_required);

      int work(int noutput_items,
           gr_vector_const_void_star &input_items,
           gr_vector_void_star &output_items);
    };

  } // namespace receiver_node
} // namespace gr

#endif /* INCLUDED_RECEIVER_NODE_HOWTO_ONE_BIT_FEEDB_CF_IMPL_H */

