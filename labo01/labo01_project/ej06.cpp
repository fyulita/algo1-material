//
// Created by feder on 8/12/2019.
//
# include <iostream>

// Version recursiva.
int f(int n){
    if(n == 1){
        return 1;
    } if(n % 2 == 0){
        return f(n - 1);
    } else{
        return n + f(n - 2);
    }
}

// Version iterativa.
int g(int n){
    int a = 0;
    if(n % 2 == 0) {
        for(int i = 1; i < (n / 2) + 1; i = i + 1){
            a = a + 2 * i - 1;
        }
    } else{
        for(int i = 1; i < ((n + 1) / 2) + 1; i = i + 1){
            a = a + 2 * i - 1;
        }
    }
    return a;
}

int main(){
    std :: cout << "El resultado es: " << g(7) << std :: endl;
    return 0;
}