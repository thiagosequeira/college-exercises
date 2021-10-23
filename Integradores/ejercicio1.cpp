#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

struct Factura{
	int numero;
	string fecha;
	int monto;
};

int menu();
void cargarDatos(Factura *, int);
void cantidadVentas(int);
int calcular(Factura *, int);
void guardarArchivo(Factura *, int);


int main(){
	int size = 0, option = 0, total = 0;

	Factura * f;

	cout<<"Ingrese la cantidad de ventas a almacenar (como maximo 3)"<<endl;
	cin>>size;
	
	f = new Factura [size];
	
	do{
		option = menu();
		switch(option){
		case 1:
			cargarDatos(f,size);
			break;
		case 2:
			cantidadVentas(size);
			break;
		case 3:
			total = calcular(f,size);
			cout << "La suma es: " << total << endl;
			break;
		case 4:

			break;
		default:
			cout << "error" << endl;
			break;
		}
	}while(option != 0);
	
	delete[] f;
	
	return 0;
}

int menu(){
	int op = 0;
	cout<<"Ingrese la opcion a realizar"<<endl;
	cout<<"1. Cargar datos."<<endl;	
	cout<<"2. Mostrar cantidad de ventas cargadas."<<endl;
	cout<<"3. Calcular la recaudación del día."<<endl;
	cout<<"4. Guardar los datos en un archivo."<<endl;
	cout<<"0. Salir"<<endl;
	cin>>op;
	return op;
}

void cargarDatos(Factura * f, int size){
	
	for(int i = 0; i < size; i++){
		f[i].numero = i+1;
		cout << "Numero de factura: " << f[i].numero << endl;
		cout << "Fecha: " << endl;
		getline(cin,f[i].fecha, '.');
		cout << "Monto: " << endl;
		cin >> f[i].monto;
	}
	
}
	
void cantidadVentas(int size){
	cout << "Cantidad de ventas cargadas son: " << size << endl;
}

int calcular(Factura * f, int s){
	int suma = 0;
	
	if(s == 0){
		return f[s].monto;
	} else{
		suma = suma + f[s].monto + calcular(f,s-1);
	}
	return suma;
}

void guardarArchivo(Factura * f, int s){
	ofstream archivo;
	archivo.open("facturas.txt");
	for (int i = 0; i < s; i++) {
		archivo << "numero de venta: " << i << endl;
		archivo << "fecha: " << f[i].fecha << endl;
		archivo << "monto: " << f[i].monto << endl;
	}
	archivo.close();
}
