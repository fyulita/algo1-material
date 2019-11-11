#ifndef ALGORITMOS_UTILES_FUNCIONES_H
#define ALGORITMOS_UTILES_FUNCIONES_H

#include <vector>
#include <string>
using namespace std;
using flag = vector<int>;

bool busquedaLineal(vector<int> &s, int x);
bool busquedaBinaria(vector<int> &s, int x);
bool busquedaString(string &t, string &p);
bool busquedaKMP(string &t, string &p);

void selectionSort(vector<int> &s);
void insertionSort(vector<int> &s);
void cocktailSort(vector<int> &s);
void bubbleSort(vector<int> &s);
void cocktailShakerSort(vector<int> &s);
void bingoSort(vector<int> &s);
void dutchNationalFlag(flag &s);

#endif //ALGORITMOS_UTILES_FUNCIONES_H
