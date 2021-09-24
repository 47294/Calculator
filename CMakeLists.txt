cmake_minimum_required(VERSION 3.1)

project(calculator)
add_library(calculator SHARED src/multiple.c)
add_executable(calculator.test tests/multiple.test.cpp)
target_link_libraries(calculator.test calculator gtest pthread)



