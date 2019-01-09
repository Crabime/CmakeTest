cmake_minimum_required(VERSION 3.13)

add_executable(curltest curlmain.c)

include_directories(/usr/include/curl)

target_link_libraries(curltest curl)

#find_package(curl)
#
#if (CURL_FOUND)
#    include_directories(${CURL_INCLUDE_DIRS})
#    target_link_libraries(curltest ${CURL_LIBRARIES})
#else(CURL_FOUND)
#    message(FATAL_ERROR "CURL library not found")
#endif (CURL_FOUND)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
