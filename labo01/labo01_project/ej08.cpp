//
// Created by feder on 8/12/2019.
//
# include <iostream>

// Version recursiva.
int f(int n, int k){
    if(n == k || k == 0){
        return 1;
    } else{
        return f(n - 1, k) + f(n - 1, k - 1);
    }
}

// Para la version iterativa uno empieza desde el caso base (n = 0 y k = 0) y desde ahi uno deberia usar la formula
// en forma de suma para ir subiendo hasta los valores input de n y k. Pregunte y me dijeron que se puede hacer pero
// usando vectores, que aun no aprendimos. Si no, puede hacerse pero usando la formula factorial.

int main(){
    std :: cout << "El resultado es: " << f(4, 2) << std :: endl;
    return 0;
}