#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include "Punto.h"
using namespace std;

int main(void){

    string cadena1, cadena2("Cadena dos"), enter;

    cout<<"cadena1: "<<cadena1<<endl;
    cout<<"cadena2: "<<cadena2<<endl;


    cout<<"cadena1 tiene "<<cadena1.size()<<" caracteres."<<endl;
    cout<<"cadena2 tiene "<<cadena2.size()<<" caracteres."<<endl;

    cout<<"cadena1 tiene "<<cadena1.length()<<" caracteres."<<endl;
    cout<<"cadena2 tiene "<<cadena2.length()<<" caracteres."<<endl;

    cout<<"cadena1 esta vacia? "<<cadena1.empty()<<endl;
    cout<<"cadena2 esta vacia? "<<cadena2.empty()<<endl;


    cout<<"Ingresa solo un nombre ";
    cin>>cadena1;
    getline(cin,enter);
    cout<<"Ingresa tus apellidos ";
    getline(cin,cadena2);
    cout<<"Hola, "<<cadena1<<" "<<cadena2<< "! =)"<<endl;


    cadena1.clear();
    cadena2.clear();
    cout<<"cadena1: "<<cadena1<<endl;
    cout<<"cadena2: "<<cadena2<<endl;



    return 0;
}
