cmake_minimum_required(VERSION 3.6)
project(labo08)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)

set(SOURCE_FILES main.cpp
        ejercicios.cpp
        test/Ej1_productoVectorialTest.cpp
        test/Ej2_trasponerTest.cpp
        test/Ej3_multiplicarTest.cpp
        test/Ej4_promediarTest.cpp
        test/Ej5_contarPicosTest.cpp
        test/Ej6_esTriangularTest.cpp
        test/Ej7_hayAmenazaTest.cpp
        test/Ej8_diferenciaDiagonalesTest.cpp
        )

add_executable(labo07 ${SOURCE_FILES})

target_link_libraries(labo08 gtest gtest_main)
