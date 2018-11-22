cmake_minimum_required(VERSION 3.12)
project(instruments)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(cmake-build-debug)

add_executable(instruments
        cmake-build-debug/ElectricGuitar.cpp
        cmake-build-debug/ElectricGuitar.h
        cmake-build-debug/Violin.cpp
        cmake-build-debug/Violin.h
        BassGuitar.cpp
        BassGuitar.h
        Instrument.cpp
        Instrument.h
        main.cpp
        StringedInstrument.cpp
        StringedInstrument.h)
