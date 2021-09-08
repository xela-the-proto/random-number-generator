cmake_minimum_required(VERSION 3.20)
project(RandomNumberGenerator)

set(CMAKE_CXX_STANDARD 14)

add_executable(RandomNumberGenerator main.cpp header.h confirmNumber.cpp)
