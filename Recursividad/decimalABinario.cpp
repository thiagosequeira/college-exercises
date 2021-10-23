#include <iostream>
using namespace std;

void binario(int n){
	if(n != 0){
		binario(n/2);
		printf("%i", n%2);
	}
}

int main(int argc, char *argv[]) {
	int num = 0;
	printf("Convertir decimal a binario \n");
	printf("Introduce un numero decimal: \n");
	scanf("%i", &num);
	printf("Su numero binario es: \t ");binario(num);
	return 0;
}

