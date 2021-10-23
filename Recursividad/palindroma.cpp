#include <iostream>
#include <string.h>
#define EXT 20

using namespace std;

int main(){
	
	char palabra[EXT];
	int ini = 0, fin;
	
	bool palindroma(char val[], int ini, int fin);
	
	cout << "Ingrese unba palabra" << endl;
	cin.getline(palabra, EXT);
	
	fin = strlen(palabra)-1;
	
	if(palindroma (palabra, ini, fin)){
		cout << "La palabra" << palabra << " es palindroma" << endl;
	}else{
		cout << "La palabra" << palabra << " NO es palindroma" << endl;
	}
	
	return 0;
}
	
bool palindroma(char val[], int ini, int fin){
	
	if(ini >= fin){
		return true;
	}else{
		if(val[ini] == val[fin]){
			palindroma(val, ini+1, fin-1);
		}else{
			return false;
		}
	}
}

