cmake_minimum_required(VERSION 3.16)


project(exampleProject VERSION 1.0 LANGUAGES CXX)

add_library(mylib mylib.cpp mylib.hpp)
add_executable(myprog myprog.cpp)
target_link_libraries(myprog PUBLIC mylib)
# target_include_directories(single_folder PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

