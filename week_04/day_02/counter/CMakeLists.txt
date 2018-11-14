cmake_minimum_required(VERSION 3.12)
project(counter)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(counter
        .idea/codeStyles/Project.xml
        .idea/counter.iml
        .idea/misc.xml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/counter.cbp
        cmake-build-debug/counter.exe
        cmake-build-debug/Makefile
        CMakeLists.txt
        Counter.cpp
        Counter.h
        main.cpp)
