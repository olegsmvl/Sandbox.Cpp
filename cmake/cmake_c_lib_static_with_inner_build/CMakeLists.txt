cmake_minimum_required(VERSION 3.10)

# Project name
project(MyCppProject)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(mylib_prj)

# Add the executable target
add_executable(MyCppExecutable main.cpp)

# Link the static library
target_link_libraries(MyCppExecutable PRIVATE mylib)

