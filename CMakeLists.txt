# Copyright (c)  2022  Xiaomi Corporation (author: Fangjun Kuang)

cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

project(kaldi-native-io-cmake-example)

if(DEFINED kaldi_native_io_DIR)
  list(APPEND CMAKE_PREFIX_PATH "${kaldi_native_io_DIR}")
elseif(DEFINED ENV{kaldi_native_io_DIR})
  list(APPEND CMAKE_PREFIX_PATH "$ENV{kaldi_native_io_DIR}")
endif()

message(STATUS "CMAKE_PREFIX_PATH: ${CMAKE_PREFIX_PATH}")

find_package(kaldi_native_io REQUIRED)
if(NOT kaldi_native_io_FOUND)
  message(FATAL_ERROR "Please use
  export kaldi_native_io_DIR=$(python -c 'import kaldi_native_io; print(kaldi_native_io.cmake_prefix_path)')
  mkdir build
  cd build
  cmake ..
  ")
endif()
message(STATUS "kaldi_native_io_DIR: ${kaldi_native_io_DIR}")

string(APPEND CMAKE_CXX_FLAGS " ${KALDI_NATIVE_IO_CXX_FLAGS} ")
message(STATUS "CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")

set(CMAKE_CXX_STANDARD 14 CACHE STRING "The C++ version to be used.")
set(CMAKE_CXX_EXTENSIONS OFF)

message(STATUS "C++ Standard version: ${CMAKE_CXX_STANDARD}")

add_executable(main main.cc)
target_link_libraries(main PRIVATE ${KALDI_NATIVE_IO_LIBRARIES})
