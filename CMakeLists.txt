cmake_minimum_required(VERSION 3.1)
project(archiwumx)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    .gitignore
    README.md)

add_executable(archiwumx ${SOURCE_FILES} first.h first.cpp)