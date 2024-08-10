cmake_minimum_required(VERSION 3.10)
project(InnerLib)

# Define the library
add_library(mylib mylib.c)

# Include directories for the library
target_include_directories(mylib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

