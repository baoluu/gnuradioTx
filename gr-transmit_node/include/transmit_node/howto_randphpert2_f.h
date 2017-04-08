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


#ifndef INCLUDED_TRANSMIT_NODE_HOWTO_RANDPHPERT2_F_H
#define INCLUDED_TRANSMIT_NODE_HOWTO_RANDPHPERT2_F_H

#include <transmit_node/api.h>
#include <gnuradio/sync_block.h>
#include <gnuradio/random.h>

namespace gr {
  namespace transmit_node {

    /*!
     * \brief <+description of block+>
     * \ingroup transmit_node
     *
     */
    class TRANSMIT_NODE_API howto_randphpert2_f : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<howto_randphpert2_f> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of transmit_node::howto_randphpert2_f.
       *
       * To avoid accidental use of raw pointers, transmit_node::howto_randphpert2_f's
       * constructor is in a private implementation
       * class. transmit_node::howto_randphpert2_f::make is the public interface for
       * creating new instances.
       */
      static sptr make(double rand_pert_size, int bf_flag);
    };

  } // namespace transmit_node
} // namespace gr

#endif /* INCLUDED_TRANSMIT_NODE_HOWTO_RANDPHPERT2_F_H */

