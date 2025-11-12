#include <iostream>
#include "DyV.h"
#include <vector>
using namespace std;

int main(){
	vector<int> a = {1,2,3,4,5,6,7,8,9};
	int result = BusquedaBinaria(2, a, 0, 8);
	cout << "El primer número buscado es: " << result << endl;

	return 0;	
}
