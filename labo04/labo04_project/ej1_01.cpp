#include <iostream>
#include <vector>
using namespace std;

bool divide (const vector<int>& v, int a){
    bool b = true;
    for(int i : v){
        b = b and (i % a == 0);
    }
    return b;
}

int main() {
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    int a = 2;
    if (divide(v, a)){
        std::cout << "True" << std::endl;
    } else{
        std::cout << "False" << std::endl;
    }
    return 0;
}