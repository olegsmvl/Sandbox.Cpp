cmake_minimum_required(VERSION 3.5)

# THIS HAS TO COME BEFORE THE PROJECT LINE
set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")
# THIS HAS TO COME BEFORE THE PROJECT LINE

project(hello_world)
add_executable(app main.c)

target_include_directories(app PRIVATE libs)
