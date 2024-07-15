
find_package(GTest)
find_package(GMock)

# Add test executable
add_executable(test_main logic_test.cpp)

include(GoogleTest)

# Link test executable against GoogleTest libraries
target_link_libraries(test_main  GTest::gtest_main GTest::gmock)

# Add tests to CTest
gtest_discover_tests(test_main)
