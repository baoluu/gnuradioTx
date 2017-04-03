/* -*- c++ -*- */

#define TRANSMIT_NODE_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "transmit_node_swig_doc.i"

%{
#include "transmit_node/howto_bfweight2_cc.h"
#include "transmit_node/howto_ekf2_ff.h"
#include "transmit_node/howto_lo_estimation_cf.h"
#include "transmit_node/howto_randphpert2_f.h"
#include "transmit_node/howto_tx_packet_source.h"
%}


%include "transmit_node/howto_bfweight2_cc.h"
GR_SWIG_BLOCK_MAGIC2(transmit_node, howto_bfweight2_cc);
%include "transmit_node/howto_ekf2_ff.h"
GR_SWIG_BLOCK_MAGIC2(transmit_node, howto_ekf2_ff);
%include "transmit_node/howto_lo_estimation_cf.h"
GR_SWIG_BLOCK_MAGIC2(transmit_node, howto_lo_estimation_cf);
%include "transmit_node/howto_randphpert2_f.h"
GR_SWIG_BLOCK_MAGIC2(transmit_node, howto_randphpert2_f);
%include "transmit_node/howto_tx_packet_source.h"
GR_SWIG_BLOCK_MAGIC2(transmit_node, howto_tx_packet_source);
