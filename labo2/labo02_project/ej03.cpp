//
// Created by fyulita on 8/26/2019.
//

#include <iostream>

int resultadosNotas(int n){
    if(n < 6){
        std :: cout << "La cantidad de alumnos no puede ser menor que 6." << std :: endl;
        return 1;
    }
    int aprobados = 0;
    for(int l = 1; l <= n; l++){
        int nota;
        std :: cout << "Introducir nota:" << std :: endl;
        std :: cin >> nota;
        if(nota >= 60){
            aprobados++;
        }
    }
    std :: cout << "aprobaron " << aprobados << " alumnos y desaprobaron " << n - aprobados << " alumnos." << std :: endl;
    if(2 * n < 3 * aprobados){
        std :: cout << "Se puede incrementar el numero de plazas en el curso" << std :: endl;
    }
}

int main() {
    resultadosNotas(6);
    return 0;
}