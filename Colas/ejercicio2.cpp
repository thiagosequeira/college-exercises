#include <iostream>
#include <queue>
using namespace std;

struct stock{
	int codigo;
	string nombre;
	int cantidad;
	int precioLista;
};

void mostrar (queue<stock>);
queue <stock> descontar(queue<stock>);
queue <stock> reponer(queue<stock>);

int menu ();

int main (){
	
	struct stock s;
	queue<stock> colaS;
	
	s.codigo = 1;
	s.nombre = "Leche";
	s.cantidad = 23;
	s.precioLista = 210;
	colaS.push(s);
	
	s.codigo = 2;
	s.nombre = "Choco";
	s.cantidad = 42;
	s.precioLista = 523;
	colaS.push(s);
	
	s.codigo = 3;
	s.nombre = "Galle";
	s.cantidad = 3;
	s.precioLista = 120;
	colaS.push(s);
	
	int option;
	
	do{
		option = menu();
		switch(option){
		case 1:
			mostrar(colaS);
			break;
		case 2:
			colaS = descontar(colaS);
			break;
		case 3:
			colaS = reponer(colaS);
			break;
		default:
			cout<<"Ingrese una opcion valida"<<endl;
		}
	}while(option != 0);
	
	return 0;
}
	
int menu (){
	
	int option = 0;
	
	cout<<"Ingrese la opcion a realizar"<<endl;
	cout<<"1. Mostrar listado de datos"<<endl;
	cout<<"2. Borrar un elemento de la cola"<<endl;
	cout<<"3. Agregar un elemento a la cola"<<endl;
	cout<<"0. Salir"<<endl;
	cin>>option;
	
	return option;	
}
	
void mostrar (queue<stock> colaS){
	struct stock s;
	
	queue<stock> auxCola;
	cout << "Cod\tNom\tCant\tPre" << endl;
	while(!colaS.empty()){
		s = colaS.front();
		cout << s.codigo << "\t" << s.nombre << "\t" << s.cantidad << "\t" << s.precioLista << endl;
		auxCola.push(colaS.front());
		colaS.pop();
	}
	colaS = auxCola;
}
	
queue <stock> descontar(queue<stock> colaS){
	struct stock s;
	queue<stock> auxCola;
	int cod = 0, desc = 0;
	cout << "ingrese el codigo del producto a descontar: ";
	cin >> cod;

	while(!colaS.empty()){
		s = colaS.front();
		if(s.codigo == cod){
			cout << "hay " << s.cantidad << " productos de " << s.nombre << ". ingrese la cantidad a descontar: ";
			cin >> desc;
			while(desc > s.cantidad){
				cout << "ingrese una cantidad menor o igual a " << s.nombre << ": ";
				cin >> desc;
			}
			s.cantidad = s.cantidad - desc;
		}
		auxCola.push(s);
		colaS.pop();
	}
	return auxCola;
}
	
queue <stock> reponer(queue<stock> colaS){
	struct stock s;
	queue<stock> auxCola;
	int cod = 0, rep = 0;
	cout << "ingrese el codigo del producto a reponer: ";
	cin >> cod;
	
	while(!colaS.empty()){
		s = colaS.front();
		if(s.codigo == cod){
			cout << "hay " << s.cantidad << " productos de " << s.nombre << ". ingrese la cantidad a descontar: ";
			cin >> rep;
			while(rep <= 0){
				cout << "ingrese una cantidad mayor a cero: ";
				cin >> rep;
			}
			s.cantidad = s.cantidad + rep;
		}
		auxCola.push(s);
		colaS.pop();
	}
	return auxCola;
}
