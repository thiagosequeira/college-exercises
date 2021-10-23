#include <iostream>
#include <locale.h>

using namespace std;

#define n1 0
#define n2 1

int calcularFibonacci(int);

int calcularFibonacci(int n){
	if (n == 1 || n == 0)
		return n;
	else
		return calcularFibonacci(n - 1) + calcularFibonacci(n - 2);
}

int main(){
	
	int n=0;
	
	cout << "Ingrese la cantidad de numeros a ver: ";
	cin >> n;
	
	for(int i = 0; i <= n-1; i++){
		cout << "Fibonacci: " << i+1 << " es: " << calcularFibonacci(i) << "\n";
	}
	return 0;
}


