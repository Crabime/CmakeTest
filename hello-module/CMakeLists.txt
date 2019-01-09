cmake_minimum_required(VERSION 3.13)

project(hello_module)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

add_subdirectory(src)