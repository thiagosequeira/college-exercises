#include <iostream>
#include <stack>
using namespace std;

struct stock{
	int codigo;
	string nombre;
	int cantidad;
	int precioLista;
};

void mostrar (stack<stock>);
stack <stock> descontar(stack<stock>);
stack <stock> reponer(stack<stock>);

int menu ();

int main(int argc, char *argv[]) {
	
	struct stock s;
	stack<stock> pilaS;
	
	s.codigo = 1;
	s.nombre = "Leche";
	s.cantidad = 23;
	s.precioLista = 210;
	pilaS.push(s);
	
	s.codigo = 2;
	s.nombre = "Choco";
	s.cantidad = 42;
	s.precioLista = 523;
	pilaS.push(s);
	
	s.codigo = 3;
	s.nombre = "Galle";
	s.cantidad = 3;
	s.precioLista = 120;
	pilaS.push(s);
	
	int option;
	
	do{
		option = menu();
		switch(option){
		case 1:
			mostrar(pilaS);
			break;
		case 2:
			pilaS = descontar(pilaS);
			break;
		case 3:
			pilaS = reponer(pilaS);
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
	
void mostrar (stack<stock> pilaS){
	struct stock s;
	
	stack<stock> auxCola;
	cout << "Cod\tNom\tCant\tPre" << endl;
	while(!pilaS.empty()){
		s = pilaS.top();
		cout << s.codigo << "\t" << s.nombre << "\t" << s.cantidad << "\t" << s.precioLista << endl;
		auxCola.push(pilaS.top());
		pilaS.pop();
	}
	pilaS = auxCola;
}

stack <stock> descontar(stack<stock> pilaS){
	struct stock s;
	stack<stock> auxCola;
	int cod = 0, desc = 0;
	cout << "ingrese el codigo del producto a descontar: ";
	cin >> cod;
	
	while(!pilaS.empty()){
		s = pilaS.top();
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
		pilaS.pop();
	}
	return auxCola;
}
	
stack <stock> reponer(stack<stock> pilaS){
	struct stock s;
	stack<stock> auxCola;
	int cod = 0, rep = 0;
	cout << "ingrese el codigo del producto a reponer: ";
	cin >> cod;
	
	while(!pilaS.empty()){
		s = pilaS.top();
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
		pilaS.pop();
	}
	return auxCola;
}
