#include <iostream>
#include <vector>
#ifndef DYV_H
#define DYV_H
using namespace std;


template <typename T>
int BusquedaBinaria(T X, vector<T> V, int ini, int fin){
	if (ini > fin){
		cout << "No se encuentra en el array " << endl;
	}
    int medio = (ini + fin)/2; 
    if(V[medio] == X){
		return medio;
	}
	else if(V[medio] > X){
		return BusquedaBinaria(X, V, ini, medio-1);
	}
	else{
		return BusquedaBinaria(X, V, medio+1, fin);
	}
                 
}

template <typename T>
int BusquedaBinaria_INV(T X, vector<T> V, int ini, int fin){
	if (ini > fin){
		cout << "No se encuentra en el array " << endl;
        }
	int medio = (ini + fin)/2;

	if(V[medio] == X){
		return medio;
        }
	else if(V[medio] > X){
		return BusquedaBinaria(X, V,medio+1, fin);
        }
	else{
		return BusquedaBinaria(X, V, ini, medio-1);
        }

}
#endif
