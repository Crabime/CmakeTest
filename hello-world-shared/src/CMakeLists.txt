cmake_minimum_required(VERSION 3.13)

add_executable(hello-world-shared main.c)

include_directories(../include/hello)

find_library(HELLO_LIB NAMES hello PATHS "../lib/")

message(STATUS "library path HELLO_LIB is " ${HELLO_LIB})

target_link_libraries(hello-world-shared ${HELLO_LIB})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)