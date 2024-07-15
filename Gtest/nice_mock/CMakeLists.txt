cmake_minimum_required(VERSION 3.12)

project(MyProject)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the main executable
add_executable(MyProject app.cpp)

enable_testing()

# Add subdirectory for tests
add_subdirectory(tests)