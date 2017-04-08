/* -*- c++ -*- */

#define RECEIVER_NODE_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "receiver_node_swig_doc.i"

%{
#include "receiver_node/howto_correct_gmsk_cc.h"
#include "receiver_node/howto_one_bit_feedb_cf.h"
%}


%include "receiver_node/howto_correct_gmsk_cc.h"
GR_SWIG_BLOCK_MAGIC2(receiver_node, howto_correct_gmsk_cc);
%include "receiver_node/howto_one_bit_feedb_cf.h"
GR_SWIG_BLOCK_MAGIC2(receiver_node, howto_one_bit_feedb_cf);
