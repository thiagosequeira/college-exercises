#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace std;

struct stock{
	int codigo = 0;
	string nombre = " ";
	int cantidad = 0;
	float precio = 0;
};

LinkedList <stock> load (LinkedList <stock>);
void show (LinkedList <stock>);
void rest (LinkedList <stock>);
void add (LinkedList <stock>);

int main(){

	LinkedList <stock> s;
	
	s = load(s);
	show(s);
	rest(s);
	add(s);
	
	return 0;
}

LinkedList <stock> load (LinkedList <stock> stock){
	struct stock aux;
	
	for (int i = 0; i < 3; i++) {
		aux.codigo = i + 1;
		cout << "Ingrese el nombre del producto nuevo: " << i + 1 << endl;
		getline(cin, aux.nombre, '.');
		cout << "Ingrese la cantidad de alimentos en stock: " << endl;
		cin >> aux.cantidad;
		cout << "Ingrese el precio de lista: " << endl;
		cin >> aux.precio;
		stock.insert(i, aux);
	}
	
	return stock;
}
	
void show (LinkedList <stock> stock){
	cout << "Codigo \t Nombre \t Cantidad \t Precio" << endl;
	
	for (int i = 0; i < 3; i++) {
		cout << " " << stock.get(i).codigo;
		cout << " " << stock.get(i).nombre;
		cout << " " << stock.get(i).cantidad;
		cout << " " << stock.get(i).precio;
	}

}
	
void rest (LinkedList <stock> stock){
	int codigo = 0;
	int stockToRemove = 0;
	struct stock aux;
	
	cout << "Ingrese el codigo del producto a descontar stock" << endl;
	cin >> codigo;
	cout << "Ingrese el stock a reducir: " << endl;
	cin >> stockToRemove;
	
	for (int i = 0; i < 3; i++) {
		if (stock.get(i).codigo == codigo){
			aux.codigo = stock.get(i).codigo;
			aux.cantidad = stock.get(i).cantidad;
			aux.nombre = stock.get(i).nombre;
			aux.precio = stock.get(i).precio;
			stock.replace(i, aux);
		}
	}
}

void add (LinkedList <stock> stock){
	int codigo = 0;
	int stockToAdd = 0;
	struct stock aux;
	
	cout << "Ingrese el codigo del producto a agregar stock: " << endl;
	cin >> codigo;
	cout << "Ingrese el stock a agregar: " << endl;
	cin >> stockToAdd;
	
	for (int i = 0; i < 3; i++) {
		if (stock.get(i).codigo == codigo){
			aux.codigo = stock.get(i).codigo;
			aux.cantidad = stock.get(i).cantidad;
			aux.nombre = stock.get(i).nombre;
			aux.precio = stock.get(i).precio;
			stock.replace(i, aux);
		}
	}
}
