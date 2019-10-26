//
// Created by feder on 8/12/2019.
//
# include <iostream>

// Funcion auxiliar recursiva.
int sumaDivisoresHasta(int n, int t){
    if (t == 1){
        return 1;
    } if(n % t == 0){
        return t + sumaDivisoresHasta(n, t - 1);
    } else{
        return sumaDivisoresHasta(n, t - 1);
    }
}

// Version recursiva.
int sumaDivisores(int n){
    return sumaDivisoresHasta(n, n);
}

// Version iterativa.
int g(int n){
    int ans = 0;
    for(int i = 1; i < n + 1; i = i + 1){
        if(n % i == 0){
            ans = ans + i;
        } else{
            //Do nothing.
        }
    }
    return ans;
}

int main(){
    std :: cout << "El resultado es: " << g(7) << std :: endl;
    return 0;
}