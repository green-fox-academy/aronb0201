cmake_minimum_required(VERSION 3.12)
project(kurvagarden)

set(CMAKE_CXX_STANDARD 14)

add_executable(kurvagarden main.cpp Flower.cpp Flower.h Tree.cpp Tree.h Plants.cpp Plants.h)