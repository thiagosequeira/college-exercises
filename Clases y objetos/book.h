#include <string>
using namespace std;

class book{
private:
	string type;
	string author;
	int pages;
public:
	book();
	void setType(string type);
	string getType();
	void setAuthor(string author);
	string getAuthor();
	void setPages(int pages);
	int getPages();
};

book :: book(){	
}

void book :: setType(string t){
	type = t;
}

string book :: getType(){
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
