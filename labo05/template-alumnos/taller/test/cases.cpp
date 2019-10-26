#include <iostream>
#include "cases.h"
#include "test.h"
#include "../ejercicios.h"

using namespace std;

bool test01_estaOrdenado(){
    int testNumber = 1;
    string testName = "estaOrdenado";
    
    printBeginTest(testNumber, testName);
    
    vector<int> ordDesc = {123, 3, 0, -1, -123};
    vector<int> ordAsc = {-501, 0, 12, 456, 501, 99999};
    vector<int> vacio = {};
    vector<int> desord = {-1, 0, 1, -1, 56, 98, 10};
    vector<int> unoSolo = {23};
    vector<int> soloDos = {1,2};
    vector<int> pico = {-4,-3,-2,-1,0,-1,-2,-3,-4};
    vector<int> dosPicos = {0,1,2,3,4,3,2,1,0,1,2,3,4,3,2,1};
    vector<int> iguales = {0,0,0,0,0,0,0,0,0,0};
    
    bool res = asegurar(estaOrdenado(ordDesc), true, "Orden Descendiente");
    res &= asegurar(estaOrdenado(ordAsc), true, "Orden Ascendiente");
    res &= asegurar(estaOrdenado(vacio), true, "Vacio");
    res &= asegurar(estaOrdenado(desord), false, "Desordenado");
    res &= asegurar(estaOrdenado(unoSolo), true, "Uno Solo");
    res &= asegurar(estaOrdenado(soloDos), true, "Solo Dos");
    res &= asegurar(estaOrdenado(dosPicos), false, "Dos Picos");
    res &= asegurar(estaOrdenado(iguales), true, "Iguales");

    printEndTest(testNumber, testName);
    return res;
}

bool test02_esPrimo(){
    int testNumber = 2;
    string testName = "esPrimo";
    printBeginTest(testNumber, testName);
    
    bool res = asegurar(esPrimo(0), false, "0");
    res &= asegurar(esPrimo(1), false, "1");
    res &= asegurar(esPrimo(2), true, "2");
    res &= asegurar(esPrimo(3), true, "3");
    res &= asegurar(esPrimo(5), true, "5");
    res &= asegurar(esPrimo(17), true, "17");
    res &= asegurar(esPrimo(-2), false, "-2");
    res &= asegurar(esPrimo(919), true, "919");
    res &= asegurar(esPrimo(643), true, "643");
    res &= asegurar(esPrimo(-643), false, "-643");
    res &= asegurar(esPrimo(100), false, "100");
    printEndTest(testNumber, testName);
    return res;
}

bool test03_pertenece(){
    int testNumber = 3;
    string testName = "pertenece";
    printBeginTest(testNumber, testName);
    
    vector<int> enteros= {5, -323, 253, 0, -7, 100};
    vector<int> vacio= {};
    vector<int> todosIguales = {1,1,1,1,1,1,1,1,1,1,1};
    
    bool res = asegurar(pertenece(0,enteros), true, "Caso Standard 1");
    res &= asegurar(pertenece(7,enteros), false, "Caso Standard 2");
    res &= asegurar(pertenece(100,enteros), true, "al final");
    res &= asegurar(pertenece(-323,enteros), true, "Menor a 0");
    res &= asegurar(pertenece(1,vacio), false, "Vacio");
    res &= asegurar(pertenece(1,todosIguales), true, "todos iguales 1");
    res &= asegurar(pertenece(4,todosIguales), false, "todos iguales 2");
    printEndTest(testNumber, testName);
    return res;
}

bool test04_desvioEstandar(){
    int testNumber = 4;
    string testName = "desvioEstandar";
    printBeginTest(testNumber, testName);
    
    vector<float> notas = {20,15,26,32,18,28,35,14,26,22,17};
    vector<float> norm = {-0.5, 0.98, 1.2, -1.0, -0.345, 0.478, 1.230};
    vector<float> todosCero = {0,0,0,0,0};
    vector<float> otraData = {9.87, 9.60, 9.56, 8.01, 7.99, 9.87, 7.67, 9.14};
    
    bool res = asegurar(desvioEstandar(notas), 6.6332, "Notas");
    res &= asegurar(desvioEstandar(norm), 0.83790, "Normal");
    res &= asegurar(desvioEstandar(todosCero), 0, "todos ceros");
    res &= asegurar(desvioEstandar(otraData), 0.86354, "otra data");
    printEndTest(testNumber, testName);
    return res;
}

bool test05_fibonacci(){
    int testNumber = 5;
    string testName = "fibonacci";
    printBeginTest(testNumber, testName);
    
    bool res = asegurar(fibonacci(0), 0);
    res &= asegurar(fibonacci(1), 1, "1");
    res &= asegurar(fibonacci(2), 1, "2");
    res &= asegurar(fibonacci(3), 2, "3");
    res &= asegurar(fibonacci(4), 3, "4");
    res &= asegurar(fibonacci(5), 5, "5");
    res &= asegurar(fibonacci(7), 13, "7");
    res &= asegurar(fibonacci(15), 610, "15");
    res &= asegurar(fibonacci(50), 12586269025, "50");
    res &= asegurar(fibonacci(16), 987, "16");
    res &= asegurar(fibonacci(45), 1134903170, "45");
    printEndTest(testNumber, testName);
    return res;
}

bool test06_maximoComunDivisor(){
    int testNumber = 6;
    string testName = "maximoComunDivisor";
    printBeginTest(testNumber, testName);
    
    bool res = asegurar(maximoComunDivisor(1,1), 1, "(1,1)");
    res &= asegurar(maximoComunDivisor(1,2), 1, "(1,2)");
    res &= asegurar(maximoComunDivisor(6,2), 2, "(6,2)");
    res &= asegurar(maximoComunDivisor(17,19), 1, "(17,19)");
    res &= asegurar(maximoComunDivisor(100,0), 100, "(100,0)");
    res &= asegurar(maximoComunDivisor(100,10), 10, "(100,10)");
    res &= asegurar(maximoComunDivisor(28,56), 28, "(28,56)");
    res &= asegurar(maximoComunDivisor(6,10), 2, "(6,10)");
    res &= asegurar(maximoComunDivisor(-6,10), 2, "(-6,10)");
    res &= asegurar(maximoComunDivisor(10,-6), 2, "(10,-6)");
    res &= asegurar(maximoComunDivisor(0,1), 1, "(0,1)");
    
    printEndTest(testNumber, testName);
    return res;
}

bool test07_sumaDoble(){
    int testNumber = 7;
    string testName = "sumaDoble";
    printBeginTest(testNumber, testName);
    
    vector<int> impares = {1,3,5,7,9,11,23,33,99,101};
    vector<int> pares= {2,4,6,8,10,50,990};
    vector<int> mezcla = {-1, 0, 500, 22, -2, 35, 16, -10, 12, 66, 76, -2};
    vector<int> vacio= {};
    vector<int> paresNeg = {-2,1,1,1,-2,2,1,-2,-2,1};
    
    bool res = asegurar(sumaDoble(impares), 0, "impares");
    res &= asegurar(sumaDoble(pares), 2140, "pares");
    res &= asegurar(sumaDoble(mezcla), 1384, "mezcla");
    res &= asegurar(sumaDoble(vacio), 0, "vacio");
    res &= asegurar(sumaDoble(paresNeg), 4, "pares negativos");
    printEndTest(testNumber, testName);
    return res;
}

bool test08_cantPalabras(){
    int testNumber = 8;
    string testName = "cantPalabras";
    printBeginTest(testNumber, testName);

    bool res = true;
    // Poner el path completo o bien en CLion entrar a Run->Edit Configuration y en donde dice
    // "Working directory" escribir la ruta en donde se encuentra el archivo main.cpp
    res &= asegurar(cantPalabras("datos/loremIpsum.txt"), 98, "Lorem Ipsum");
    res &= asegurar(cantPalabras("datos/losprofetas.txt"), 64, "Los Profetas");

    printEndTest(testNumber, testName);
    return res;
}

bool test09_valorMedio(){
    int testNumber = 9;
    string testName = "valorMedio";
    printBeginTest(testNumber, testName);

    bool res = true;
    res &= asegurar(valorMedio(), 0.4948, "valor medio");

    printEndTest(testNumber, testName);
    return res;
}

bool test10_fraccion(){
    int testNumber = 10;
    string testName = "fraccion";
    printBeginTest(testNumber, testName);

    vector<int> variado = {1,2,3,-5,7,9,-11,23,-33,99};
    vector<int> todosPos = {1,2,3,7,9,23,99};
    vector<int> todosNeg = {-1,-2,-3,-7,-9,-23,-99};
    vector<int> con0= {0,0,-2,4,6,8,10,50,0};
    vector<int> todos0s = {0,0,0,0};
    vector<int> vacio= {};
    vector<int> todosIgualesPos = {1,1,1,1,1,1,1};
    vector<int> todosIgualesNeg = {-1,-1,-1,-1,-1,-1,-1};

    float calc;
    bool res = true;
    fraccion(variado,calc);
    res &= asegurar(calc, 0.7, "variado");    
    fraccion(todosPos,calc);
    res &= asegurar(calc, 1, "todosPos");
    fraccion(todosNeg,calc);
    res &= asegurar(calc, 0, "todosNeg");
    fraccion(con0,calc);
    res &= asegurar(calc, 0.555, "con0");
    fraccion(todos0s,calc);
    res &= asegurar(calc , 0, "todos0s");
    fraccion(vacio,calc);
    res &= asegurar(calc, 0, "vacio");
    fraccion(todosIgualesPos,calc);
    res &= asegurar(calc, 1, "todosIgualesPos");
    fraccion(todosIgualesNeg,calc);
    res &= asegurar(calc, 0, "todosIgualesNeg");

    printEndTest(testNumber, testName);
    return res;
}