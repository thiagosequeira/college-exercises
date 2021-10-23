#include <iostream>
#include <math.h>
using namespace std;

void sum(float *, float *);
void res(float *, float *);
void mult(float *, float *);
void div(float *, float *);
void pot(float *, float *);
void rai(float *, float *);

int main(){
	char op = ' ';
	float num1, num2;
	
	cout << "ingrese el numero 1: " << endl;
	cin >> num1;
	cout << "ingrese el numero 2: " << endl;
	cin >> num2;
	
	float *ptrNum1 = &num2;
	float *ptrNum2 = &num1;
	
	do{
		cout << "menu" << endl;
		cout << "a- sumar" << endl;
		cout << "b- restar" << endl;
		cout << "c- multiplicar" << endl;
		cout << "d- dividir" << endl;
		cout << "e- potencia" << endl;
		cout << "f- raiz" << endl;
		cin >> op;
		
		switch(op){
		case 'a':
			sum(ptrNum1, ptrNum2);
			break;
		case 'b': 
			res(ptrNum1, ptrNum2);
			break;
		case 'c':
			mult(ptrNum1, ptrNum2);
			break;
		case 'd':
			div(ptrNum1, ptrNum2);
			break;
		case 'e':
			pot(ptrNum1, ptrNum2);
			break;
		case 'f':
			rai(ptrNum1, ptrNum2);
			break;
		}
		
		cout << "\n continuar? (S/N)";
		cin >> op;
		
	} while(op == 's');
	return 0;
}
	
void sum(float *ptrNum1, float *ptrNum2){
	cout << "resultado: " << *ptrNum1 + *ptrNum2 << endl;
}
	
void res(float *ptrNum1, float *ptrNum2){
	cout << "resultado: " << *ptrNum1 - *ptrNum2 << endl;
}
	
void mult(float *ptrNum1, float *ptrNum2){
	cout << "resultado: " << *ptrNum1 * *ptrNum2 << endl;
}
	
void div(float *ptrNum1, float *ptrNum2){
	cout << "resultado: " << *ptrNum1 / *ptrNum2 << endl;
}
	
void pot(float *ptrNum1, float *ptrNum2){
	cout << "resultado " << pow(*ptrNum1,(*ptrNum2)) << endl; 
}
	
void rai(float *ptrNum1, float *ptrNum2){
	cout << "resultado: " << pow(*ptrNum1,(1/(*ptrNum2))) << endl;
	cout << "resultado num1: " << sqrt(*ptrNum1) << endl;
	cout << "resultado num2: " << sqrt(*ptrNum2) << endl;
}

