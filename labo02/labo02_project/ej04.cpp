//
// Created by fyulita on 8/26/2019.
//

#include <iostream>
#include <cmath>

int binarioDecimal(int b){
    int l = 0;
    int termino = 0;
    int d = 0;
    while(b / pow (10, l) > 1){
        termino = ((b - termino) / static_cast<int>(pow(10, l))) % 2;
        d = d + termino * static_cast<int>(pow(2, l));
        l++;
    }
    return d;
}

int main() {
    std :: cout << binarioDecimal(11011001) << std :: endl ;
    return 0;
}