cmake_minimum_required(VERSION 3.12)
project(animals_in_the_zoo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(animals_in_the_zoo
        Animal.cpp
        Animal.h
        Birds.cpp
        Birds.h
        main.cpp
        Mammal.cpp
        Mammal.h
        Reptile.cpp
        Reptile.h)
