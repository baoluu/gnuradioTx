#!/bin/sh
export VOLK_GENERIC=1
export GR_DONT_LOAD_PREFS=1
export srcdir=/home/bao/Documents/gr-transmit_node/lib
export GR_CONF_CONTROLPORT_ON=False
export PATH=/home/bao/Documents/gr-transmit_node/build/lib:$PATH
export LD_LIBRARY_PATH=/home/bao/Documents/gr-transmit_node/build/lib:$LD_LIBRARY_PATH
export PYTHONPATH=$PYTHONPATH
test-transmit_node 
