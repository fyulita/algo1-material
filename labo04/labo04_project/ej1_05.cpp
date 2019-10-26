#include <iostream>
#include <vector>
using namespace std;

bool estaOrdenado (const vector<int>& v){
    bool b_cre = true;
    bool b_decre = true;
    for (int i = 0; i < v.size() - 1; i++){
        b_cre = b_cre and (v[i] <= v[i + 1]);
    }
    for (int i = 0; i < v.size() - 1; i++){
        b_decre = b_decre and (v[i] >= v[i + 1]);
    }
    bool res = b_cre or b_decre;
    return res;
}

int main() {
    vector<int> v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    if (estaOrdenado(v)){
        std::cout << "True" << std::endl;
    } else{
        std::cout << "False" << std::endl;
    }
    return 0;
}
