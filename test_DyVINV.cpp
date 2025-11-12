#include <iostream>
#include "DyV.h"
#include <vector>
using namespace std;

int main(){
	vector<int> a = {9,8,7,6,5,4,3,2,1};
	int result = BusquedaBinaria(2, a, 0, 8);
	cout << "El primer número buscado es: " << result << endl;

	return 0;	
}