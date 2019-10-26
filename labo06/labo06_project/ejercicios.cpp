#include "../template-alumnos/ejercicios.h"


// Ejercicio 1
bool existePico(vector<int> v){
    bool result = false;
    for(int i = 1; i < v.size() - 1; i++){
        if(v[i] > v[i - 1] and v[i] > v[i + 1]){
            result = true;
        }
    }
	return result;
}

// Ejercicio 2
int mcd(int m, int n){
	int i = m;
    while(not(m % i == 0 and n % i == 0)){
        i -= 1;
    }
    return i;
}

// Ejercicio 3
int indiceMinSubsec(vector<int> v, int l, int r){
	int i = l;
	int j = l;
    while(i <= r){
        if(v[i] < v[j]){
            j = i;
        }
        i++;
    }
    return j;
}

// Ejercicio 4
void ordenar1(vector<int>& v){
	int i = 0;
	vector<int> w;
	while(i < v.size()){

	}
}

// Ejercicio 5
void ordenar2(vector<int>& v){
	return;
}

// Ejercicio 6
tuple<int,int> division(int n, int d){
	return make_tuple(0,0);
}
