#!/bin/sh
export VOLK_GENERIC=1
export GR_DONT_LOAD_PREFS=1
export srcdir=/home/bao/Documents/gr-transmit_node/python
export GR_CONF_CONTROLPORT_ON=False
export PATH=/home/bao/Documents/gr-transmit_node/build/python:$PATH
export LD_LIBRARY_PATH=/home/bao/Documents/gr-transmit_node/build/lib:$LD_LIBRARY_PATH
export PYTHONPATH=/home/bao/Documents/gr-transmit_node/build/swig:$PYTHONPATH
/usr/bin/python2 /home/bao/Documents/gr-transmit_node/python/qa_howto_tx_packet_source.py 
