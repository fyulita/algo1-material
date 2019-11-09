//
// Created by fyulita on 8/26/2019.
//

#include <iostream>

int sumaNotas(int n){
    int suma = 0;
    for(int l = 1; l <= n; l++){
        int nota;
        std :: cout << "Introducir nota: ";
        std :: cin >> nota;
        suma = suma + nota;
    }
    return suma;
}

int main() {
    std::cout << sumaNotas(3) << std::endl;
    return 0;
}