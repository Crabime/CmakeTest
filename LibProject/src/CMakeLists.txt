cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 99)

include_directories(${CMAKE_SOURCE_DIR}/LibProject/inc)
add_library(LibProject store.c)