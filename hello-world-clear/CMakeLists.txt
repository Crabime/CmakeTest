cmake_minimum_required(VERSION 3.13)

project(hello-world-clear)

add_subdirectory(src)

INSTALL(FILES COPYRIGHT README.md DESTINATION share/doc/cmake/hello-world-clear)
INSTALL(PROGRAMS runhello.sh DESTINATION bin)
INSTALL(DIRECTORY doc/ DESTINATION share/doc/cmake/hello-world-clear)