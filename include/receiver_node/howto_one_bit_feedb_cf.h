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


#ifndef INCLUDED_RECEIVER_NODE_HOWTO_ONE_BIT_FEEDB_CF_H
#define INCLUDED_RECEIVER_NODE_HOWTO_ONE_BIT_FEEDB_CF_H

#include <receiver_node/api.h>
#include <gnuradio/sync_decimator.h>

namespace gr {
  namespace receiver_node {

    /*!
     * \brief <+description of block+>
     * \ingroup receiver_node
     *
     */
    class RECEIVER_NODE_API howto_one_bit_feedb_cf : virtual public gr::sync_decimator
    {
     public:
      typedef boost::shared_ptr<howto_one_bit_feedb_cf> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of receiver_node::howto_one_bit_feedb_cf.
       *
       * To avoid accidental use of raw pointers, receiver_node::howto_one_bit_feedb_cf's
       * constructor is in a private implementation
       * class. receiver_node::howto_one_bit_feedb_cf::make is the public interface for
       * creating new instances.
       */
      static sptr make(double sample_rate, int decim_factor);
    };

  } // namespace receiver_node
} // namespace gr

#endif /* INCLUDED_RECEIVER_NODE_HOWTO_ONE_BIT_FEEDB_CF_H */

