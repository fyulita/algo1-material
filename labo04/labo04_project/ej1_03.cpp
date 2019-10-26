#include <iostream>
#include <vector>
using namespace std;

vector<int> reverso (const vector<int>& v){
    vector<int> w;
    for (int i = 0; i < v.size(); i++){
        w.push_back(v[v.size() - 1 - i]);
    }
    return w;
}

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
    v.push_back(2);
    v.push_back(100);
    v.push_back(6);
    mostrarVector(reverso(v));
    return 0;
}

