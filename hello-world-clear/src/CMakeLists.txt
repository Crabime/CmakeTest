cmake_minimum_required(VERSION 3.13)

add_executable(hello-world-clear HelloWorldClearMain.c)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

install(TARGETS hello-world-clear RUNTIME DESTINATION bin)