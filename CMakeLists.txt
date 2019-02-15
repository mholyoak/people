cmake_minimum_required(VERSION 3.12)
project(people)

set(CMAKE_CXX_STANDARD 17)

add_executable(people main.cpp Person.cpp Person.h)