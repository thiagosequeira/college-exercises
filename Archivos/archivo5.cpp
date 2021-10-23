#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string mensaje = " ";
	
	ofstream ejemplo;
	ejemplo.open("ejemplo.txt");
	
	cout << "Ingrese un mensaje: (fin = '.')" << endl;
	getline(cin, mensaje, '.');
	
	ejemplo << "Mensaje: " << endl;
	ejemplo << mensaje << endl;
	ejemplo.close();
	
	mensaje = " ";
	ifstream ejemploifs;
	ejemploifs.open("ejemplo.txt");
	cout << "\n Mensaje" << endl;
	while(!ejemploifs.eof()){
		getline(ejemploifs, mensaje);
		cout << mensaje << endl;
	}
	
	ejemploifs.close();
	
	return 0;
}

