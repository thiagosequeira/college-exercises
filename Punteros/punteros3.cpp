#include <iostream>
using namespace std;

struct article{
	string name = " ";
	int cost = 0;
};

int main(){
	
	struct article list[3];
	list[0].name = "chocolate";
	list[0].cost = 300;
	list[1].name = "leche sancor";
	list[1].cost = 170;
	list[2].name = "galletas";
	list[2].cost = 60;
	
	struct article *ptrList;
	cout << "Lista de productos: \n" << endl;
	for(int ii = 0; ii < 3; ii++){
		ptrList = &list[ii];
		cout << ptrList-> name << "\t" << ptrList-> cost << endl;
	}
	
	
	
	return 0;
}

