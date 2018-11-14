cmake_minimum_required(VERSION 3.12)
project(fleet_of_things)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(fleet_of_things
        .idea/codeStyles/Project.xml
        .idea/fleet_of_things.iml
        .idea/misc.xml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/fleet_of_things.cbp
        cmake-build-debug/fleet_of_things.exe
        cmake-build-debug/Makefile
        CMakeLists.txt
        fleet.cpp
        fleet.h
        main.cpp
        thing.cpp
        thing.h)
