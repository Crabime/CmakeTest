cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 99)

project(hello-world)

set(SOURCE_FILES HelloWorldMain.c)

# STATUS means make status info
message(STATUS "this is BINARY dir" ${PROJECT_BINARY_DIR})
message(STATUS "this is SOURCE dir" ${PROJECT_SOURCE_DIR})

add_executable(hello-world ${SOURCE_FILES})
add_executable(chdir_test chdirtest.c)
