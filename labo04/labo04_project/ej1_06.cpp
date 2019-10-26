#include <iostream>
#include <vector>
using namespace std;

/* Ya lo habia hecho antes jeje */
void mostrarVector(const vector<int>& v){
    std :: cout << "[";
    for (int i = 0; i < v.size(); i++){
        if (i == v.size() - 1){
            std::cout << v[i] << "]" << std::endl;
        } else{
            std::cout << v[i] << ", ";
        }
    }
}

int main() {
    vector<int> v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    mostrarVector(v);
    return 0;
}
