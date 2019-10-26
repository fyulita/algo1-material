cmake_minimum_required(VERSION 3.8)
project(taller)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        test/cases.cpp
        test/cases.h
        test/test.h
        ejercicios.cpp
        ejercicios.h
        main.cpp)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(taller ${SOURCE_FILES})