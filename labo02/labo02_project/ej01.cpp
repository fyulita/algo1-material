#include <iostream>

int sumaNotas(){
    int suma = 0;
    for(int l = 1; l <= 10; l++){
        int nota;
        std :: cout << "Introducir nota: ";
        std :: cin >> nota;
        suma = suma + nota;
    }
    return suma;
}

int main() {
    std::cout << sumaNotas() << std::endl;
    return 0;
}