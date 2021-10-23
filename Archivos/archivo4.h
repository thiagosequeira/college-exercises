#include <string>
using namespace std;

class Producto{
private:
	string name;
	string brand;
	int cost;
	string date;
	string size;
public:
	Producto();
	void setName(string name);
	string getName();
	void setBrand(string brand);
	string getBrand();
	void setDate(string date);
	string getDate();
	void setSize(string size);
	string getSize();
	void setCost(string cost);
	int getCost();
};

Producto :: Producto(){	
}

void Producto :: setName(string na){
	name = na;
}

string  :: getType(){
	return type;
}

void book :: setAuthor(string a){
	author = a;
}

string book :: getAuthor(){
	return author;
}

void book :: setPages(int p){
	pages = p;
}

int book :: getPages(){
	return pages;
}
