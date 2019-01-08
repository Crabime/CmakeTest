cmake_minimum_required(VERSION 3.13)
project(CmakeTest C)
subdirs(MainProject LibProject HelloWorld hello-world-clear hello-world-lib hello-world-shared)

set(CMAKE_C_STANDARD 99)
