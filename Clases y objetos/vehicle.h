#include <string>
using namespace std;

class vehicle{
private:
	string type;
	int capacity;
	string patente;
	string color;
public:
	vehicle();
	void setType(string type);
	string getType();
	void setCapacity(int capacity);
	int getCapacity();
	void setPatente(string patente);
	string getPatente();
	void setColor(string color);
	string getColor();
};

vehicle :: vehicle(){
}
void vehicle :: setType(string t){
	type = t;
}

string vehicle :: getType(){
	return type;
}

void vehicle :: setCapacity(int c){
	capacity = c;
}

int vehicle :: getCapacity(){
	return capacity;
}
void vehicle :: setPatente(string p){
	patente = p;
}

string vehicle :: getPatente(){
	return patente;
}

void vehicle :: setColor(string col){
	color = col;
}

string vehicle :: getColor(){
	return color;
}
