cmake_minimum_required(VERSION 2.8)

project (prjeuler)

add_subdirectory(tests)

include_directories("${CMAKE_SOURCE_DIR}")

set(PRJ_SOURCES
       ${CMAKE_SOURCE_DIR}/src/myInteger.cpp;
       ${CMAKE_SOURCE_DIR}/src/mytree.cpp;
       ${CMAKE_SOURCE_DIR}/src/mydate.cpp;
)

add_library(prjeuler ${PRJ_SOURCES})

install (TARGETS prjeuler DESTINATION lib)
