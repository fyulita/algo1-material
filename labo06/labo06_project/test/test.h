#ifndef TEST_INCLUDED_H
#define TEST_INCLUDED_H

#include <iostream>
#include <sstream>
#include <string>
#include <cassert>
#include <cmath> 
#include <tuple>
#include <vector>

using namespace std;

void printBeginTest(int testNumber, string testName){
    cout << "Corriendo test " << testNumber << " " << testName << endl;
}

void printEndTest(int testNumber, string testName){
    cout << "Finalizado test " << testNumber << " " << testName << endl << endl;
}

template<typename T>
void printFail(const T calc, const T orig, string testName){
    cout << "Falló caso: " << testName << ". Actual: " << calc << " Esperado: " << orig << endl;
}

bool esBuenaAproximacion(const float calc, const float orig, const float precision){
    float absErr = abs(calc-orig);
    if(calc == 0 || orig == 0){
        return absErr < precision;
    }else{
        return (absErr / abs(calc)) < precision;
    }
}

bool asegurar(const float calc, const float orig, string testName = " "){
    float precision = 0.01;
    if(esBuenaAproximacion(calc, orig, precision)){
        return true;
    }else{
        printFail(calc, orig, testName);
        return false;
    }
}

template<typename T>
bool asegurar(const T calc, const T orig, string testName = " "){
    if(calc != orig){
        printFail(calc, orig, testName);
        return false;
    }else{
        return true;
    }
}

/*Funciones ad-hoc*/

// Imprime tuple
template<typename T, typename S>
ostream& operator<< (ostream & out, tuple<T,S> const& t) {
    out << "<" << get<0>(t) << "," << get<1>(t) << ">";
    return out;
}

// Imprime vector
template<typename T>
ostream& operator<< (ostream & out, vector<T> const& v) {
    out << "{";
    int i;
    for(i=0; i<v.size()-1; i++){
        out << v[i] << ", ";
    }
    out << v[i] << "}";

    return out;
}

#endif //TEST_INCLUDED_H
