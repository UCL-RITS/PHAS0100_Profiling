cmake_minimum_required(VERSION 3.0)

project(profiling_exercise)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include_directories(include)
SET(CMAKE_CXX_FLAGS -pg)
add_executable(ProfileTest source/profile_test.cpp)
