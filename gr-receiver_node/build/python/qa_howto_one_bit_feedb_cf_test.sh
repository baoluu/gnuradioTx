#!/bin/sh
export VOLK_GENERIC=1
export GR_DONT_LOAD_PREFS=1
export srcdir=/home/bao/Documents/gr-receiver_node/python
export GR_CONF_CONTROLPORT_ON=False
export PATH=/home/bao/Documents/gr-receiver_node/build/python:$PATH
export LD_LIBRARY_PATH=/home/bao/Documents/gr-receiver_node/build/lib:$LD_LIBRARY_PATH
export PYTHONPATH=/home/bao/Documents/gr-receiver_node/build/swig:$PYTHONPATH
/usr/bin/python2 /home/bao/Documents/gr-receiver_node/python/qa_howto_one_bit_feedb_cf.py 
