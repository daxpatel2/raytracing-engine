cmake_minimum_required(VERSION 3.24)
project(RaytracingCpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(RaytracingCpp
        Main.h
        test.cpp)
