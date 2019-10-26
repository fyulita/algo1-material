//
// Created by feder on 8/12/2019.
//
# include <iostream>

// Version recursiva.
int f(int n){
    if(n == 0){
        return 0;
    } if(n == 1){
        return 1;
    } else{
        return f(n - 1) + f(n - 2);
    }
}

// Version iterativa.
int g(int n){
    int a = 0;
    int b = 1;
    for(int i = 1; i < n; i = i + 1){
        int temp = a;
        a = b;
        b = temp + b;
    }
    return b;
}

int main(){
    std :: cout << "El resultado es: " << g(6) << std :: endl;
    return 0;
}