cmake_minimum_required(VERSION 3.12)
project(sandwich C)

set(CMAKE_C_STANDARD 99)

add_executable(sandwich main.c sandwich.c sandwich.h)