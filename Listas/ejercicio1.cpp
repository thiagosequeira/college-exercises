#include "iostream"
#include "ctime"
#include "LinkedList.h"

using namespace std;

LinkedList <int> load (LinkedList <int>);
void show (LinkedList <int>);
void average (LinkedList <int>);
void five_multiples (LinkedList <int>);

int main(){

	LinkedList <int> l;
	l = load(l);
	show(l);
	five_multiples(l);
	
	return 0;
}
	
LinkedList <int> load (LinkedList <int> list){
	
	srand(time(NULL));
	
	for (int i = 0; i < 10; i++) {
		list.insert(i, rand()%100+1);
	}
	
	return list;
}
	
void show (LinkedList <int> list){
	list.print();
}

void average (LinkedList <int> list){
	int adder = 0;
	float average = 0;
	
	for (int i = 0; i < 10; i++) {
		adder = adder + list.get(i);
	}
	
	average = (float)adder / (float)list.size();
	cout << "El promedio de los valores es: " << average << endl;
}
	
void five_multiples (LinkedList <int> list){
	
	cout << "Los multiplos de 5 son: " << endl;
	for (int i = 0; i < 10; i++) {
		if (list.get(i) % 5 == 0) {
			if(i == 0){
				cout << list.get(i);
			}else{
				cout << "\t" << list.get(i);
			}
		}
	}
	
}
