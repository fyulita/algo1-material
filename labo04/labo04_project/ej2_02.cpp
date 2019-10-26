#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void guardarVector(const vector<int>& v, const string& nombreArchivo){
    ofstream archivoOut;
    archivoOut.open(R"(archivos\out\)" + nombreArchivo);
    for (int i = 0; i < v.size(); i++){
        if (i == v.size() - 1){
            archivoOut << v[i] << endl;
        } else {
            archivoOut << v[i] << " ";
        }
    }
    archivoOut.close();
}

int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    guardarVector(v, "ej2_02.txt");
    return 0;
}