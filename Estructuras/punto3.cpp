#include <iostream>
using namespace std;

struct Empleado{
	string legajo;
	string puesto;
	int sueldo;
};


int main() {
	
	struct Empleado e[3];
	char op = ' ';
	string buscarEmpleado = " ";
	bool banderaEncontrado = false;
	
	do{
		cout << "MENU DE OPCIONES" << endl;
		cout << "a. agregar \n b. mostrar \n c. buscar" << endl;
		cin >> op;
		
		switch(op){
		case 'a':
			for(int ii = 0; ii < 3; ii++){
				cout << "Ingrese los siguientes datos: " << endl;
				cout << "Legajo: " << endl;
				getline(cin, e[ii].legajo, '.');
				cout << "Puesto de trabajo: " << endl;
				getline(cin, e[ii].puesto, '.');
				cout << "sueldo: " << endl;
				cin >> e[ii].sueldo;
			}
			break;
		case 'b':
			for(int ii = 0; ii < 3; ii++){
				cout << "\n Datos: " << endl;
				cout << "Legajo: " << e[ii].legajo << endl;
				cout << "Puesto: " << e[ii].puesto << endl;
				cout << "Sueldo: " << e[ii].sueldo << endl;
			}
			break;
		case 'c':
			cout << "Ingrese empleado a buscar: " << endl;
			getline(cin, buscarEmpleado, '.');
			banderaEncontrado = false;
			for(int ii = 0; ii < 3; ii++){
				if(buscarEmpleado == e[ii].legajo){
					cout << "Empleado encontradx: " << e[ii].legajo << " " << e[ii].puesto << endl;
					banderaEncontrado = true;
				}
			}
			if(banderaEncontrado == false ){
				cout << "No se encontro el empleadx." << endl;
			}
			break;
		}
		
		cout << "\n Desea seguir? (S/N)?" << endl;
		cin >> op;
		
	} while(op == 's' || op == 'S');
	return 0;
}

