#include <iostream>
#include "DyV.h"
#include <vector>
using namespace std;

int main() {
	vector<int> a = {1,2,3,4,5,6,7,8,9};
	int result = BusquedaBinaria(2, a, 0, 8);
	cout << "El número buscado es: " << result << endl;
	
	vector<int> b = {5,7,6,4,8,3,9,2,1}
    int result2 = QuickSort(b, 0, 8);
    cout << "Vector ordenado: " << result2 << endl;
	for (int x : a){
    	cout << x << " ";
		cout << endl;
	}
	return 0;
}


