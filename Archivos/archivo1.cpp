#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	string name;
	string brand;
	string date;
	string size;
	int cost;
	
	cout << "Ingrese el nombre del producto: ";
	cin >> name;
	
	cout << "Ingrese la marca del producto: ";
	cin >> brand;
	
	cout << "Ingrese el precio del producto: ";
	cin >> cost;
	
	cout << "Ingrese la fecha de elaboracion del producto: ";
	cin >> date;
	
	cout << "Ingrese el tamaño del producto: ";
	cin >> size;
	
	
	ofstream ofs;
	ofs.open("Datos_Producto.txt");
	
	ofs << "Nombre del producto: " << name << endl;
	ofs << "Marca: " << brand << endl;
	ofs << "Precio: " << cost << endl;
	ofs << "Fecha de elaboracion: " << date << endl;
	ofs << "Tamaño del producto: " << size << endl;
	ofs.close();
	
	string mensaje=" ";
	ifstream ifs;
	ifs.open("archivo1.txt");
	while(!ifs.eof()){
		getline(ifs,mensaje);
		cout << mensaje << endl;
	}
	ifs.close();
	
	return 0;
}
