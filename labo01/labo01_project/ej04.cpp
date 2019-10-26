//
// Created by feder on 8/12/2019.
//
# include <iostream>

bool f(int n){
    int divisores = 0;
    for(int i = 2; i < n; i = i + 1){
        if(n % i == 0){
            divisores = divisores + 1;
        } else{
            //no hacer nada
        }
    }
    return divisores == 0;
}

int main(){
    std :: cout << "El resultado es: " << f(5) << std :: endl;
    return 0;
}