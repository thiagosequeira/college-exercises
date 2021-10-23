#include <iostream>
#include <fstream>

using namespace std;

struct producto{
	string name;
	string brand;
	string date;
	string size;
	int cost;
};

int main(int argc, char *argv[]) {
	
	struct producto p;
	
	cout << "Ingrese el nombre del producto: ";
	cin >> p.name;
	
	cout << "Ingrese la marca del producto: ";
	cin >> p.brand;

	cout << "Ingrese el precio del producto: ";
	cin >> p.cost;

	cout << "Ingrese la fecha de elaboracion del producto: ";
	cin >> p.date;

	cout << "Ingrese el tamaño del producto: ";
	cin >> p.size;

	
	ofstream ofs;
	ofs.open("archivo1.txt");
	
	ofs << "Nombre del producto: " << p.name << endl;
	ofs << "Marca: " << p.brand << endl;
	ofs << "Precio: " << p.cost << endl;
	ofs << "Fecha de elaboracion: " << p.date << endl;
	ofs << "Tamaño del producto: " << p.size << endl;
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

