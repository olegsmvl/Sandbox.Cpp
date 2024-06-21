cmake_minimum_required(VERSION 3.10)

# Project name
project(MyCppProject)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the include directory
include_directories(${CMAKE_SOURCE_DIR})

# Specify the directory containing the shared library
link_directories(${CMAKE_SOURCE_DIR})

# Add the executable target
add_executable(MyCppExecutable main.cpp)

# Link the static library
target_link_libraries(MyCppExecutable mylibrary)

