#include <iostream>
using namespace std;
int main(void)
{
	
	int *ptr=NULL;
	int  val=5;
	
	ptr=&val;
	
	cout << "Valor de val: " << val << endl;
	cout << "Posicion de memoria de val: " << &val << endl;
	cout << "valor de ptr: " << ptr << endl;
	cout << "Posicion de memoria de ptr: " << &ptr << endl;
	cout << "Val accedido por ptr: " << *ptr << endl;
	
	return(0);
}
