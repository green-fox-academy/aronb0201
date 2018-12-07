cmake_minimum_required(VERSION 3.12)
project(coordinate C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(coordinate
        coordinate.c
        coordinate.h
        main.c)
