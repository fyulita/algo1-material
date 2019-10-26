#include <vector>
#include <iostream>
#include <assert.h>

using namespace std;

int minimo(vector<int> v){
	assert(v.size() > 0);
	int min = v[0];
	for(int i = 0; i<v.size(); i++){
		if (v[i]<min)
			min = v[i];
	}
	return min;
}

void doble(vector<int>& v){
	for(int i = 0; i<v.size(); i++)
		v[i] = 2*v[i];
}

vector<int> sumarElemento(vector<int> v, int m){
	doble(v);
	for(int i = 0; i<v.size(); i++){
		v[i] = v[i] + m;
	}
	return v;
}

int main(){
	int min;
	/* Descomentar estas lineas para ver al assert en accion */
	// vector<int> vacio = {};
	// min = minimo(vacio);

	vector<int> v = {4,5,-1,6,3,9,15,16,0};
	min = minimo(v);
	v = sumarElemento(v,min);

	for(int i = 0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}