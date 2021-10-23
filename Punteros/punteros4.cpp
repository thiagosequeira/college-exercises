#include <iostream>
using namespace std;

int main(){
	float vector[5] = {4.5,8,2.3,1.1,3};
	float *ptr = vector;
	
	cout << "Resultados: " << endl;
	for(int i = 0; i < 5; i++){
		cout << *(ptr + i) << ".";
	}
	
	cout << "\n\nResultados:" << endl;
	float max = 0, min, sum, prom = 0;
	float *ptrMax = 0, *ptrMin, *ptrSum, *ptrProm = 0;
	ptrMax = &max, ptrMin = &min, ptrSum = &sum, ptrProm = &prom;
	
	for(int i = 0; i < 5; i++){
		if(i == 0){
			*ptrMax = ptr[i];
			*ptrMin = ptr[i];
		}else{
			if(ptr[i] > *ptrMax){
				*ptrMax = ptr[i];
			}
			if(ptr[i] < *ptrMin){
			*ptrMin = ptr[i];	
			}
		}
		*ptrSum = *ptrSum + ptr[i];
	}
	
	*ptrProm = *ptrSum / 5;
	
	cout << "Max: " << *ptrMax << endl;
	cout << "Min: " << *ptrMin << endl;
	cout << "Prom: " << *ptrProm << endl;
	return 0;
}

