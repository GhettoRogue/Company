cmake_minimum_required(VERSION 3.25)
project(Company)

set(CMAKE_CXX_STANDARD 17)

add_executable(Company main.cpp lib/Transport.h lib/TransportMode.h lib/Railway.h lib/Airplane.h lib/Auto.h)
