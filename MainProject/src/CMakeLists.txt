cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 99)

include_directories(${CMAKE_SOURCE_DIR}/MainProject/inc)
include_directories(${CMAKE_SOURCE_DIR}/LibProject/inc)
link_directories(${CMAKE_SOURCE_DIR}/LibProject/src)
add_executable(Main main.c)

target_link_libraries(Main LibProject)

add_definitions(-DFRUIT=\"apple\")
