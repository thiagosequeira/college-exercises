#include <iostream>
using namespace std;

void changeValue(int *ptrA, int *ptrB);

int main(){
	int a = 1, b = 2;
	
	cout << "Valores iniciales:" << endl;
	cout << "a= " << a << " b= " << b << endl;
	changeValue(&a,&b);
	return 0;
}
	
void changeValue(int *ptrA, int *ptrB){
	int a = 0, b = 0, c = 0;
	a = *ptrA;
	c = a;
	*ptrA = *ptrB;
	*ptrB = c;
	
	cout << "Valores cambiados" << endl;
	cout << "a= " << *ptrA << " b= " << *ptrB << endl;
}

