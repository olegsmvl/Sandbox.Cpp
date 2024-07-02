cmake_minimum_required(VERSION 3.10)
project(app_hello_world)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(app_hello_world main.cpp)

# Set install directories
install(TARGETS app_hello_world DESTINATION bin)

# Include CPack
include(CPack)

# Set CPack options
# Set CPack options for DEB
set(CPACK_GENERATOR "DEB")
set(CPACK_PACKAGE_NAME "myproject")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_PACKAGE_CONTACT "your.email@example.com")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "MyProject is a sample project.")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Your Name") # required
set(CPACK_DEBIAN_PACKAGE_SECTION "utils")
set(CPACK_DEBIAN_PACKAGE_PRIORITY "optional")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "libc6 (>= 2.7)")
set(CPACK_DEBIAN_ARCHITECTURE ${CMAKE_SYSTEM_PROCESSOR})
set(CPACK_PACKAGE_FILE_NAME "${CPACK_PACKAGE_NAME}_${CPACK_PACKAGE_VERSION}_${CPACK_DEBIAN_ARCHITECTURE}")