cmake_minimum_required(VERSION 3.16)


project(exampleProject VERSION 1.0 LANGUAGES CXX)

add_library(namespace_test_library mylibns.cpp mylibns.hpp)
add_executable(namespace_test_program myprogns.cpp)
target_link_libraries(namespace_test_program PUBLIC namespace_test_library)
# target_include_directories(single_folder PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

