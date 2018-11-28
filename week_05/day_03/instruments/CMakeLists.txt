cmake_minimum_required(VERSION 3.12)
project(01)

set(CMAKE_CXX_STANDARD 14)

add_executable(01 main.cpp Instrument.cpp Instrument.h StringedInstrument.cpp StringedInstrument.h ElectricGuitar.cpp ElectricGuitar.h BassGuitar.cpp BassGuitar.h Violin.cpp Violin.h)