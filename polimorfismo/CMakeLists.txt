cmake_minimum_required(VERSION 3.14)
project(polimorfismo)

set(CMAKE_CXX_STANDARD 14)

add_executable(polimorfismo main.cpp Vehiculo.cpp Vehiculo.h Automovil.h Automovil.cpp)