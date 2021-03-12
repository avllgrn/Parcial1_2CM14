#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include "Punto.h"
using namespace std;

int main(void){
    srand(time(NULL));

    Punto Q;

    cout<<"Q";
    Q.muestraTusDatos();
    cout<<endl<<endl;

    Q.modificaTusDatos(rand()%100, rand()%100);

    cout<<"Q";
    Q.muestraTusDatos();
    cout<<endl<<endl;

    ofstream ArchivoDeSalida("prueba.txt");
    Q.guardaTusDatos(ArchivoDeSalida);
    ArchivoDeSalida.close();


    Punto Otro;
    cout<<"Otro";
    Otro.muestraTusDatos();
    cout<<endl<<endl;

    ifstream ArchivoDeEntrada("prueba.txt");
    Otro.cargaTusDatos(ArchivoDeEntrada);
    ArchivoDeEntrada.close();

    cout<<"Otro";
    Otro.muestraTusDatos();
    cout<<endl<<endl;

    return 0;
}
