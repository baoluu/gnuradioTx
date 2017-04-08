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


#ifndef INCLUDED_TRANSMIT_NODE_HOWTO_EKF2_FF_H
#define INCLUDED_TRANSMIT_NODE_HOWTO_EKF2_FF_H

#include <transmit_node/api.h>
#include <gnuradio/block.h>
#include <iostream>

#include <gsl/gsl_matrix.h>
#include <gsl/gsl_blas.h>
#include <gsl/gsl_linalg.h>
#include <gsl/gsl_permutation.h>

namespace gr {
  namespace transmit_node {

    /*!
     * \brief <+description of block+>
     * \ingroup transmit_node
     *
     */
    class TRANSMIT_NODE_API howto_ekf2_ff : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<howto_ekf2_ff> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of transmit_node::howto_ekf2_ff.
       *
       * To avoid accidental use of raw pointers, transmit_node::howto_ekf2_ff's
       * constructor is in a private implementation
       * class. transmit_node::howto_ekf2_ff::make is the public interface for
       * creating new instances.
       */
      static sptr make(double sample_rate, double Tm, double initial_freq, const std::vector<double> &elts_Q, const std::vector<double> &elts_R);
    };

  } // namespace transmit_node
} // namespace gr

#endif /* INCLUDED_TRANSMIT_NODE_HOWTO_EKF2_FF_H */

