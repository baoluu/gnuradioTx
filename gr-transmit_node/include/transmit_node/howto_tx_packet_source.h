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


#ifndef INCLUDED_TRANSMIT_NODE_HOWTO_TX_PACKET_SOURCE_H
#define INCLUDED_TRANSMIT_NODE_HOWTO_TX_PACKET_SOURCE_H

#include <transmit_node/api.h>
#include <gnuradio/sync_block.h>
#include <iostream>

namespace gr {
  namespace transmit_node {

    /*!
     * \brief <+description of block+>
     * \ingroup transmit_node
     *
     */
    class TRANSMIT_NODE_API howto_tx_packet_source : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<howto_tx_packet_source> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of transmit_node::howto_tx_packet_source.
       *
       * To avoid accidental use of raw pointers, transmit_node::howto_tx_packet_source's
       * constructor is in a private implementation
       * class. transmit_node::howto_tx_packet_source::make is the public interface for
       * creating new instances.
       */
      static sptr make(double sample_rate, double time_delay, int nbr_samples_packet, float f_in, float f_out);
    };

  } // namespace transmit_node
} // namespace gr

#endif /* INCLUDED_TRANSMIT_NODE_HOWTO_TX_PACKET_SOURCE_H */

