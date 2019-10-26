#include <iostream>
#include <vector>
using namespace std;

vector<int> rotar (const vector<int>& v, int k){
    vector<int> res;
    for (int i = 0; i < v.size() - k; i++){
        res.push_back(v[i + k]);
    }
    for (int i = 0; i < k; i++){
        res.push_back(i);
    }
    return res;
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
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    mostrarVector(rotar(v, 2));
    return 0;
}
