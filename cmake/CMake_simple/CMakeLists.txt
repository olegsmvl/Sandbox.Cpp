cmake_minimum_required(VERSION 2.4)
project(hello_world)
add_executable(app main.cpp)
target_compile_options(app PRIVATE -Werror -Wall -Wextra)
