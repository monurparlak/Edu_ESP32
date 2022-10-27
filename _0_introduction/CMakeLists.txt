cmake_minimum_required(VERSION 3.19)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(_0_introduction)

set (CMAKE_CXX_STANDARD 20)

add_compile_options("-Wno-volatile")