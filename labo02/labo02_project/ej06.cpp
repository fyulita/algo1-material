//
// Created by fyulita on 8/26/2019.
//

#include <iostream>

void triplicarPorValor(int n){
    n = 3 * n;
}

void triplicarPorReferencia(int &n){
    n = 3 * n;
}

int main() {
    int n = 1;
    triplicarPorValor(n);
    std :: cout << n << :: std :: endl;
    std :: cout << "El valor de n no cambia porque la funcion por valor (copia) no cambia el valor original de n. Solo asigna el valor 3n a una distinta posicion de memoria." << std :: endl;
    triplicarPorReferencia(n);
    std :: cout << n << :: std :: endl;
    std :: cout << "Aca el valor de n si cambio porque la funcion por referencia asigna el valor 3n en la posicion de memoria donde antes estaba el valor n." << std :: endl;
    return 0;
}