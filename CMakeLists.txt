cmake_minimum_required(VERSION 3.26)
project(TimeMachine)

set(CMAKE_CXX_STANDARD 17)

add_executable(TimeMachine main.cpp
        Nodo.cpp
        Nodo.h
        Doublelist.cpp
        Doublelist.h)
