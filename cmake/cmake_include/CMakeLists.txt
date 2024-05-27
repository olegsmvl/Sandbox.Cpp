cmake_minimum_required(VERSION 2.4)
project(hello_world)
include_directories(${CMAKE_SOURCE_DIR}/dep/)
add_executable(app main.cpp)