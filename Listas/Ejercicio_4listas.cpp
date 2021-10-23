#include <iostream>
#include <string>
#include <fstream>
#include "LinkedList.h"

using namespace std;

struct invoice{
    int client_number;
    string commune;
    float GB;
    float amount;

};

int menu ();
void load (LinkedList<invoice>);
void pay (LinkedList<invoice>);
void show (LinkedList<invoice>);

int main (){

    int option = 0;
    LinkedList<invoice> bills;
    load(bills);

    do{
        option = menu();
        switch(option){
            case 0:
                break;
            case 1:
                pay(bills);
                break;
            case 2:

                break;

            default:
                cout<<"Ingrese una opcion valida"<<endl;
        }
    }while(option != 0);


    return 0;
}

void load (LinkedList<invoice> b){
    struct invoice bill;
    bill.client_number = 1;
    bill.commune = "Anisacate";
    bill.GB = 100;
    bill.amount = bill.GB * 70;
    b.push_front(bill);
    bill.client_number = 2;
    bill.commune = "La Bolsa";
    bill.GB = 30;
    bill.amount = bill.GB * 70;
    b.push_front(bill);
    bill.client_number = 3;
    bill.commune = "Villa Los Aromos";
    bill.GB = 35;
    bill.amount = bill.GB * 70;
    b.push_front(bill);
}

int menu (){
    int option = 0;
    cout<<"Ingrese la opcion a realizar"<<endl;
    cout<<"1. Pagar factura"<<endl;
    cout<<"2. Mostrar listado y generar archivo con las facturas pagadas"<<endl;
    cout<<"0. Salir"<<endl;
    cin>>option;
    return option;
}

void pay (LinkedList<invoice> b){

    string commune;
    float amount;
    int day;
    cout<<"Ingrese la comuna que va a pagar"<<endl;
    getline(cin,commune,'.');
    cout<<"N Cliente "<<"Comuna "<<"GB consumidos "<<"Monto a Pagar"<<endl;

    for (int i = 0; i < b.size(); ++i) {
        cout<<b.get(i).commune<<endl;
        if(commune == b.get(i).commune){
            cout<<b.get(i).client_number<<"\t"<<b.get(i).commune<<b.get(i).GB<<b.get(i).amount<<endl;
            cout<<"Ingrese el dia de pago: "<<endl;
            cin>>day;
            if(day >= 11){
                cout<<"El monto a pagar es: "<<b.get(i).amount + 10<<endl;
                cout<<"Ingrese el monto pagado"<<endl;
                cin>>amount;
                cout<<"RECIBO"<<endl;
                cout<<"N° Cliente: "<<b.get(i).client_number<<"\n"<<"Comuna: "<<b.get(i).commune<<"\n"<<"GB: "<<b.get(i).GB<<"\n"<<"Monto pagado: "<<amount<<"\n"<<"Saldo: "<<(b.get(i).amount + 10) - amount<<endl;
            }
            else{
                cout<<"El monto a pagar es: "<<b.get(i).amount<<endl;
                cout<<"Ingrese el monto pagado"<<endl;
                cin>>amount;
                cout<<"RECIBO"<<endl;
                cout<<"N° Cliente: "<<b.get(i).client_number<<"\n"<<"Comuna: "<<b.get(i).commune<<"\n"<<"GB: "<<b.get(i).GB<<"\n"<<"Monto pagado: "<<amount<<"\n"<<"Saldo: "<<b.get(i).amount - amount<<endl;
            }
        }
    }
}