#include <iostream>
#include "cases.h"
#include "test.h"
#include "../ejercicios.h"

using namespace std;


bool test01_existePico(){
    int testNumber = 2;
    string testName = "existePico";
    
    printBeginTest(testNumber, testName);
    
    vector<int> tresConPicos = {3,4,2};
    vector<int> tresSinPicos = {1,2,3};
    vector<int> variosPicos = {3,4,2,1,6,4,3,6,8};
    vector<int> sinPico = {1,2,3,4,5,6,7,8};

    bool res = asegurar(existePico(tresConPicos), true, "Tres elementos con picos");
    res &= asegurar(existePico(tresSinPicos), false, "Tres elementos sin picos");
    res &= asegurar(existePico(variosPicos), true, "Varios picos");
    res &= asegurar(existePico(sinPico), false, "Sin pico");

    printEndTest(testNumber, testName);
    return res;
}

bool test02_mcd(){
    int testNumber = 3;
    string testName = "mcd";
    
    printBeginTest(testNumber, testName);
    
    bool res = asegurar(mcd(1, 1), 1, "unos");
    res &= asegurar(mcd(17, 33), 1, "uno Primo");
    res &= asegurar(mcd(17, 31), 1, "ambos primos");
    res &= asegurar(mcd(15, 45), 15, "multiplos");
    res &= asegurar(mcd(50, 50), 50, "iguales");

    printEndTest(testNumber, testName);
    return res;
}

bool test03_indiceMinSubsec(){
    int testNumber = 4;
    string testName = "indiceMinSubsec";
    
    printBeginTest(testNumber, testName);
    
    vector<int> unElemento = {1};
    vector<int> minimoAlPrincipio = {1,4,6,8,2};
    vector<int> minimoAlFinal = {1,4,6,8,2,0};
    vector<int> variosMinimos = {3,1,3,1,4,1,2};
    vector<int> todosIguales = {1,1,1,1};
    vector<int> negativos = {-1,-4,-5,1,1,1};
    vector<int> subsec = {0,-4,-5,1,1,0};

    
    bool res = asegurar(indiceMinSubsec(unElemento, 0,0), 0, "Un Elemento");
    res &= asegurar(indiceMinSubsec(minimoAlPrincipio, 0,4), 0, "Minimo al Principio");
    res &= asegurar(indiceMinSubsec(minimoAlFinal, 0,5), 5, "Minimo al final");
    res &= asegurar(indiceMinSubsec(negativos, 0,5), 2, "Negativos");
    res &= asegurar(indiceMinSubsec(subsec, 1,4), 2, "Subsec");

    printEndTest(testNumber, testName);
    return res;
}

bool test04_ordenar1(){
    int testNumber = 6;
    string testName = "ordenar1";
    
    printBeginTest(testNumber, testName);
    
    vector<int> unElemento = {3};
    vector<int> unElemento_out = {3};
    vector<int> dosElementos = {3,4};
    vector<int> dosElementos_out = {3,4};
    vector<int> desordenadaSinRepes = {3,4,2,1,6,10,14,0,8};
    vector<int> desordenadaSinRepes_out = {0,1,2,3,4,6,8,10,14};
    vector<int> desordenadaConRepes = {3,4,2,6,6,10,6,2,14,0,8,10};
    vector<int> desordenadaConRepes_out = {0,2,2,3,4,6,6,6,8,10,10,14};
    vector<int> ordenada = {0,1,2,3,4,6,6,8,10,14};
    vector<int> ordenada_out = {0,1,2,3,4,6,6,8,10,14};

    ordenar1(unElemento);
    bool res = asegurar(unElemento, unElemento_out, "Un Elemento");
    ordenar1(dosElementos);
    res &= asegurar(dosElementos, dosElementos_out, "Dos Elementos");
    ordenar1(desordenadaSinRepes);
    res &= asegurar(desordenadaSinRepes, desordenadaSinRepes_out, "Desordenada Sin Repes");
    ordenar1(desordenadaConRepes);
    res &= asegurar(desordenadaConRepes, desordenadaConRepes_out, "Desordenada Con Repes");
    ordenar1(ordenada);
    res &= asegurar(ordenada, ordenada_out, "Ordenada");

    printEndTest(testNumber, testName);
    return res;
}

bool test05_ordenar2(){
    int testNumber = 7;
    string testName = "ordenar2";
    
    printBeginTest(testNumber, testName);
    
    vector<int> unElemento = {0};
    vector<int> unElemento_out = {0};
    ordenar2(unElemento);
    bool res = asegurar(unElemento, unElemento_out, "Un elemento");

    vector<int> todosIguales = {0,0,0,0,0,0};
    vector<int> todosIguales_out = {0,0,0,0,0,0};
    ordenar2(todosIguales);
    res &= asegurar(todosIguales, todosIguales_out, "Todos iguales");

    vector<int> ordenados = {0,0,1,1,1,1,2,2};
    vector<int> ordenados_out = {0,0,1,1,1,1,2,2};
    ordenar2(ordenados);
    res &= asegurar(ordenados, ordenados_out, "Ordenados");

    vector<int> desordenados = {1,0,1,0,0,2,0,2};
    vector<int> desordenados_out = {0,0,0,0,1,1,2,2};
    ordenar2(desordenados);
    res &= asegurar(desordenados, desordenados_out, "Desordenados");

    vector<int> unoDeCada = {2,1,0};
    vector<int> unoDeCada_out = {0,1,2};
    ordenar2(unoDeCada);
    res &= asegurar(unoDeCada, unoDeCada_out, "Uno de cada");

    vector<int> sinUnos = {2,2,0,0,2,0,0,2,0};
    vector<int> sinUnos_out = {0,0,0,0,0,2,2,2,2};
    ordenar2(sinUnos);
    res &= asegurar(sinUnos, sinUnos_out, "Sin unos");

    vector<int> sinDos = {0,0,1,1,1,0};
    vector<int> sinDos_out = {0,0,0,1,1,1};
    ordenar2(sinDos);
    res &= asegurar(sinDos, sinDos_out, "Sin dos");

    printEndTest(testNumber, testName);
    return res;
}

bool test06_division(){
    int testNumber = 1;
    string testName = "division";
    
    printBeginTest(testNumber, testName);

    bool res = asegurar(division(50, 50), make_tuple(1,0), "Iguales");
    res &= asegurar(division(31, 19), make_tuple(1,31-19), "Primos");
    res &= asegurar(division(20, 32), make_tuple(0,20), "d mayor a n");
    res &= asegurar(division(25, 4), make_tuple(6,1), "happy path");

    printEndTest(testNumber, testName);
    return res;
}
