cmake_minimum_required(VERSION 3.12)
project(copy_file)

set(CMAKE_CXX_STANDARD 14)

add_executable(copy_file
        .idea/codeStyles/Project.xml
        .idea/copy_file.iml
        .idea/misc.xml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/copy_file.cbp
        cmake-build-debug/copy_file.exe
        cmake-build-debug/Makefile
        CMakeLists.txt
        copy.txt
        main.cpp
        paste.txt)
