cmake_minimum_required(VERSION 3.1)

project(calculator)
add_library(calculator SHARED src/multiple.c src/sqrt.c src/factorial.c)
enable_testing()
add_executable(calculator.test tests/multiple.cpp tests/usl.cpp)
target_link_libraries(calculator.test calculator gtest gtest_main pthread)
include(GoogleTest)
gtest_discover_tests(calculator.test)




