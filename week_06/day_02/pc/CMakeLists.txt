cmake_minimum_required(VERSION 3.12)
project(pc C)

set(CMAKE_C_STANDARD 99)

add_executable(pc main.c personal_computer.h personal_computer.c)