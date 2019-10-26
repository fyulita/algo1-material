#include <iostream>
#include <vector>
using namespace std;

int mayor (const vector<int>& v){
    int m;
    for (int i = 0; i < v.size(); i++){
        if (i == 0){
            m = v[i];
        } if (v[i] > m){
            m = v[i];
        }
    }
    return m;
}

int main() {
    vector<int> v;
    v.push_back(2);
    v.push_back(100);
    v.push_back(6);
    std::cout << mayor(v) << std::endl;
    return 0;
}
