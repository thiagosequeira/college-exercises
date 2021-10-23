#include "iostream"
#include "ctime"
#include "LinkedList.h"

using namespace std;

int main(){
	srand(time(NULL));
	LinkedList <char> list;
	int cantVocal = 0, cantCons = 0;
	
	for (int i = 0; i < 20; i++) {
		list.insert(i, rand()%25+65);
	}
	
	for (int ii = 0; ii < 20; ii++) {
		if (list.get(ii) == 'A' || list.get(ii) == 'E' || list.get(ii) == 'I' || list.get(ii) == 'O' || list.get(ii) == 'U') {
			cantVocal++;
		}else{
			cantCons++;
		}
	}
	list.print();
	cout << endl;
	
	cout << "La cantidad de vocales son: " << cantVocal << endl;
	cout << "La cantidad de consonantes son: " << cantCons << endl;
}
