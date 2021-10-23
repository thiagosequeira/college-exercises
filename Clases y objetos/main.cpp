#include <iostream>
#include <string>
#include "vehicle.h"

using namespace std;

int main(){
	vehicle v;
	string type = " ";
	string patente = " ";
	string color = " ";
	int capacity = 0;
	
	vehicle listVehicle[2];
	
	for(int i = 0; i < 2; i++){
		cout << "Ingrese vehiculo: ";
		cin >> type;
		v.setType(type);
		cout << "Ingrese las patentes: ";
		cin >> patente;
		v.setPatente(patente);
		cout << "Ingrese el color del vehiculo: ";
		cin >> color;
		v.setColor(color);
		cout << "Ingrece la capacidad: ";
		cin >> capacity;
		v.setCapacity(capacity);
		listVehicle[i] = v;
	}
	
	cout << "Los datos son: " << endl;
	for(int i = 0; i < 2; i++){
		cout<<listVehicle[i].getType()<<" "<<listVehicle[i].getPatente()<<" "<<listVehicle[i].getColor()<<" "<<listVehicle[i].getCapacity()<<endl;
	}
	return 0;
}

