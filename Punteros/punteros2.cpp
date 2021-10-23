#include <iostream>
#define TAM 26

using namespace std;

void load (char *);
void show_lowercase (char *);
void show_capital_letters(char *);

int main (){

    char alphabet [TAM];
    load(alphabet);
    show_lowercase(alphabet);
    show_capital_letters(alphabet);

    return 0;
}

void load(char * al){
    for(int ii = 0; ii < TAM; ii++){
        al[ii]=65+ii;
    }
}

void show_lowercase (char * al){
    for(int ii = 0; ii < TAM; ii++){
        al[ii] = tolower(al[ii]);
    }
    cout << "Minusculas \n" << endl;
    for(int ii = 0; ii < TAM; ii++){
        cout << al[ii];
    }
    cout << endl;
}

void show_capital_letters (char * al){
    for(int ii = 0; ii < TAM; ii++){
        al[ii] = toupper(al[ii]);
    }
    cout << "\nMayusculas \n" << endl;
    for(int ii = 0; ii < TAM; ii++){
        cout << al[ii];
    }
    cout << endl;
}
