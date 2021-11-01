#include <iostream>
#include <stack>
using namespace std;

int menu ();
stack<int> load (stack<int>);
void show (stack<int>);
stack<int> delete_element (stack<int>);
stack<int> insert (stack<int>);

int main(int argc, char *argv[]) {
	
	int option;
	stack<int> stack;
	
	do{
		option = menu();
		switch(option){
		case 0:
			break;
		case 1:
			stack = load(stack);
			break;
		case 2:
			show(stack);
			break;
		case 3:
			stack = delete_element(stack);
			break;
		case 4:
			stack = insert(stack);
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
	cout<<"1. Cargar datos"<<endl;
	cout<<"2. Mostrar listado de datos"<<endl;
	cout<<"3. Borrar un elemento de la cola"<<endl;
	cout<<"4. Agregar un elemento a la cola"<<endl;
	cout<<"0. Salir"<<endl;
	cin>>option;
	return option;
	
}

stack<int> load (stack<int> s){
	
	int number;
	cout<<"Ingrese los valores (O para salir)"<<endl;
	do {
		cin>>number;
		if(number != 0){
			s.push(number);
		}
		
	}while(number != 0);
	return s;
	
}
	
void show (stack<int> s){
	
	stack<int> aux;
	while(!s.empty()){
		
		cout<< s.top() <<" - ";
		aux.push(s.top());
		s.pop();
		
	}
	s = aux;
	cout<<endl;
	
}
	
stack<int> delete_element (stack<int> s){
	
	int quantity;
	
	cout<<"Ingrese la cantidad de elementos a borrar"<<endl;
	cin>>quantity;
	for (int i = 0; i < quantity; ++i) {
		s.pop();
	}
	return s;
	
}

stack<int> insert (stack<int> s){
	
	int number;
	cout<<"Ingrese el dato a agregar en la cola"<<endl;
	cin>>number;
	s.push(number);
	return s;
	
}
