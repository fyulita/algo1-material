#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

vector<int> leerVector(const string& nombreArchivo){
    ifstream archivoIn;
    archivoIn.open(nombreArchivo, ios::in);
    vector<int> res;
    int x;
    while (not archivoIn.eof()){
        archivoIn >> x;
        res.push_back(x);
    }
    archivoIn.close();
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

int main(){
    mostrarVector(leerVector(R"(archivos\in\10NumerosEntre1y10EnOrden2.in)"));
    return 0;
}