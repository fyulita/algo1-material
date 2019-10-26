cmake_minimum_required(VERSION 3.6)

project(taller)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        test/cases.cpp
        test/cases.h
        test/test.h
        ejercicios.cpp
        ejercicios.h
        main.cpp)

add_executable(taller ${SOURCE_FILES})