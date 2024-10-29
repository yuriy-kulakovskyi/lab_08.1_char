cmake_minimum_required(VERSION 3.14)
project(PR8_1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib/googletest)

add_executable(PR8_1
        src/h.cpp
        src/main.cpp
)

add_executable(PR8_1_tests
        src/h.cpp
        tests/test_h.cpp
)

target_link_libraries(PR8_1_tests gtest gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(PR8_1_tests)