#include <iostream>
#include <queue>
using namespace std;

int menu ();
queue<int> load (queue<int>);
void show (queue<int>);
queue<int> delete_element (queue<int>);
queue<int> insert (queue<int>);

int main (){

    int option;
    queue<int> queue;

    do{
        option = menu();
        switch(option){
            case 0:
                break;
            case 1:
                queue = load(queue);
                break;
            case 2:
                show(queue);
                break;
            case 3:
                queue = delete_element(queue);
                break;
            case 4:
                queue = insert(queue);
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

queue<int> load (queue<int> q){

    int number;
    cout<<"Ingrese los valores (O para salir)"<<endl;
    do {
        cin>>number;
        if(number != 0){
            q.push(number);
        }

    }while(number != 0);
    return q;

}

void show (queue<int> q){

    queue<int> aux;
    while(!q.empty()){

        cout<< q.front() <<" - ";
        aux.push(q.front());
        q.pop();

    }
    q = aux;
    cout<<endl;

}

queue<int> delete_element (queue<int> q){

    int quantity;

    cout<<"Ingrese la cantidad de elementos a borrar"<<endl;
    cin>>quantity;
    for (int i = 0; i < quantity; ++i) {
        q.pop();
    }
    return q;

}

queue<int> insert (queue<int> q){

    int number;
    cout<<"Ingrese el dato a agregar en la cola"<<endl;
    cin>>number;
    q.push(number);
    return q;

}
