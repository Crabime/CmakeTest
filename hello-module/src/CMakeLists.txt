cmake_minimum_required(VERSION 3.13)

find_package(hello REQUIRED COMPONENTS system)

if (HELLO_FOUND)
    add_executable(hello_module HelloModuleMain.c)
    include_directories(${HELLO_INCLUDE_DIR})
    target_link_libraries(hello_module ${HELLO_LIBRARY})
else(HELLO_FOUND)
    message(FATAL_ERROR "HELLO library not found")
endif (HELLO_FOUND)