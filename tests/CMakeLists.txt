cmake_minimum_required(VERSION 2.8)

include_directories(${CMAKE_SOURCE_DIR})

add_executable(MyTester main.cpp project_euler_tests.cpp)

find_library(GTEST gtest PATHS ${CMAKE_SOURCE_DIR}/tests)

target_link_libraries(MyTester prjeuler ${GTEST} pthread)
