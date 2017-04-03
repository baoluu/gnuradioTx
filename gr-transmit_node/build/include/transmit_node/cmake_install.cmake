# Install script for directory: /home/bao/Documents/gr-transmit_node/include/transmit_node

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/transmit_node" TYPE FILE FILES
    "/home/bao/Documents/gr-transmit_node/include/transmit_node/api.h"
    "/home/bao/Documents/gr-transmit_node/include/transmit_node/howto_bfweight2_cc.h"
    "/home/bao/Documents/gr-transmit_node/include/transmit_node/howto_ekf2_ff.h"
    "/home/bao/Documents/gr-transmit_node/include/transmit_node/howto_lo_estimation_cf.h"
    "/home/bao/Documents/gr-transmit_node/include/transmit_node/howto_randphpert2_f.h"
    "/home/bao/Documents/gr-transmit_node/include/transmit_node/howto_tx_packet_source.h"
    )
endif()

