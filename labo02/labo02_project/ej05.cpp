//
// Created by fyulita on 8/26/2019.
//

#include <iostream>
#include <cmath>

void circulo(double r, double &d, double &c, double &a){
    double pi = 3.14159;
    d = 2 * r;
    c = 2 * pi * r;
    a = pi * pow(r, 2);
}

int main() {
    double r = 1.0;
    double d = 0.0;
    double c = 0.0;
    double a = 0.0;
    circulo(r, d, c, a);
    std :: cout << "El diametro es: " << d << std :: endl;
    std :: cout << "La circunferencia es: " << c << std :: endl;
    std :: cout << "El area es: " << a << std :: endl;
    return 0;
}