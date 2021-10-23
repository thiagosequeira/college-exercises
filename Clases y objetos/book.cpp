#include <iostream>
#include "book.h"
using namespace std;

int main() {
	book b;
	string type = " ";
	string author = " ";
	int pages = 0;
	
	book listBook[2];
	
	for(int i = 0; i < 2; i++){
		cout << "Ingrese genero del libro: ";
		cin >> type;
		b.setType(type);
		cout << "Ingrese autor del libro;: ";
		cin >> author;
		b.setAuthor(author);
		cout << "Ingrese cuantas paginas tiene: ";
		cin >> pages;
		b.setPages(pages);
		listBook[i] = b;
	}
	
	cout << "Los datos son: " << endl;
	for(int i = 0; i < 2; i++){
		cout << listBook[i].getType() << " " << listBook[i].getAuthor() << " " << listBook[i].getPages() << endl;
	}
	
	return 0;
}

