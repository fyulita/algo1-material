//
// Created by feder on 8/12/2019.
//
# include <iostream>

int f(int x, int y){
    int ans;
    if(x > y){
        ans = x + y;
    } else{
        ans = x * y;
    }
    return ans;
}

int main(){
    std :: cout << "El resultado es: " << f(5, 2) << std :: endl;
    return 0;
}