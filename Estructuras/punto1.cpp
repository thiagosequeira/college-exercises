#include <iostream>
using namespace std;

struct datos{
	string artista;
	string titulo;
	int duracion;
};

int main(){
	
	struct datos d[3];
	char op = ' ';
	string buscarCancion = " ";
	bool banderaEncontrado = false;
	
	do{
		cout << "MENU DE OPCIONES" << endl;
		cout << "a. agregar \n b. mostrar \n c. buscar" << endl;
		cin >> op;
		
		switch(op){
		case 'a':
			for(int ii = 0; ii < 3; ii++){
				cout << "Ingrese los siguientes datos: " << endl;
				cout << "Artista: " << endl;
				getline(cin, d[ii].artista, '.');
				cout << "Titulo de la cancion: " << endl;
				getline(cin, d[ii].titulo, '.');
				cout << "Duracion de la cancion: " << endl;
				cin >> d[ii].duracion;
			}
			break;
		case 'b':
			for(int ii = 0; ii < 3; ii++){
				cout << "\n Datos: " << endl;
				cout << "Artista: " << d[ii].artista << endl;
				cout << "Titulo: " << d[ii].titulo << endl;
				cout << "Duracion: " << d[ii].duracion << endl;
			}
			break;
		case 'c':
			cout << "Ingrese cancion a buscar: " << endl;
			getline(cin, buscarCancion, '.');
			banderaEncontrado = false;
			for(int ii = 0; ii < 3; ii++){
				if(buscarCancion == d[ii].titulo){
					cout << "Cancion encontrada: " << d[ii].artista << " " << d[ii].titulo << endl;
					banderaEncontrado = true;
				}
			}
			if(banderaEncontrado == false ){
				cout << "No se encontro la cancion." << endl;
			}
			break;
		}
		
		cout << "\n Desea seguir? (S/N)?" << endl;
		cin >> op;
		
	} while(op == 's' || op == 'S');
	

	return 0;
}

