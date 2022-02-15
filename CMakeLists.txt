CMAKE_MINIMUM_REQUIRED(VERSION 3.23)

project(Linear Algebra)

set(CMAKE_CXX_STANDARD 20)

add_library($PROJECT
        LA.cpp
        LA.h
        )