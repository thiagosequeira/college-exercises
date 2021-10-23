#include <iostream>
using namespace std;

int sumar(int n){
	int suma = 0;
	if(n == 1){
		suma = 1;
	}else{
		suma = n + sumar(n - 1);
	}
	return suma;
}

int sumar(int);
	
int main(){
	
	int nelementos;
	do{
		cout << "digite el numero de elementos: ";
		cin >> nelementos;
	} while(nelementos <= 0);
	
	cout << "\n la suma es: " << sumar(nelementos) << endl;
	
	return 0;
}

