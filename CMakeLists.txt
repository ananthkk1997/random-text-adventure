cmake_minimum_required(VERSION 3.6)
project(random_text_adventure)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    CMakeLists.txt
    README.md game.cpp game.h Place.cpp Place.h)

add_executable(random_text_adventure ${SOURCE_FILES})