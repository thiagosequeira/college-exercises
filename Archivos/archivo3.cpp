#include <iostream>
#include <fstream>
#include <string>
#define TAM 3
using namespace std;

struct Product {
	string name;
	string brand;
	string date;
	int cost, size;
};

int menu(void);
void write(Product []);
void read(void);

int main(){
	Product p[TAM];
	int option = 0;
	
	do{
		option = menu();
		switch(option){
		case 1:
			write(p);
			break;
		case 2:
			read();
			break;
		default:
			cout << "Ingrese una opcion valida" << endl;
		}
	} while(option != 0);
}
	
int menu (){
	int op = 0;
	cout << "Ingrese la opcion a realizar" << endl;
	cout << "1. Cargar lista de produstos en el archivo" << endl;
	cout << "2. Mostrar lista de productos" << endl;
	cout << "0. Salir" << endl;
	cin >> op;
	return op;
}
	
void write (Product pr [TAM]){
	for(int ii = 0; ii < TAM; ii++){
		cout << "Ingrese el nombre del producto" << endl;
		getline(&cin, &pr[ii].name, cin '.');
		cout << "Ingrese la marca del producto" << endl;
		getline(&cin, &pr[ii].brand, cin '.');
		cout << "Ingrese la fecha de elaboracion del producto" << endl;
		getline(&cin, &pr[ii].date, cin '.');
		cout << "Ingrese el tamaño del producto" << endl;
		cin >> pr[ii].size;
	}
	ofstream Product;
	Product.open("Listado_Producto.txt");
	for(ii = 0; ii < TAM; ii++){
		Product << "Datos del producto: " << ii+1 << endl;
		Product << "Nombre: " << pr[ii].name << endl;
		Product << "Marca: " << pr[ii].brand << endl;
		Product << "Precio: " << pr[ii].cost << endl;
		Product << "Tamaño: " << pr[ii].size << endl;
	}
	Product.close();
}

void read(){
	string message;
	ifstream Product;
	Product.open("Listado_Producto.txt");
	while(Product.eof()){
		getline(&Product, &message);
		cout << message << endl;
	}
	Product.close();
}
