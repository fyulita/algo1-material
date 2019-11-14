cmake_minimum_required(VERSION 3.15)
project(Algoritmos_Utiles)
set(CMAKE_CXX_STANDARD 14)
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
set(SOURCE_FILES
        main.cpp
        busqueda.cpp
        ordenamiento.cpp
        tests/busquedaTests.cpp tests/ordenamientoTests.cpp)
add_executable(main ${SOURCE_FILES})
set(CMAKE_CXX_FLAGS "-g")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(main gtest gtest_main)
