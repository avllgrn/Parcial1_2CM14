#include <iostream>
#include <fstream>
using namespace std;

int main(void){
    ofstream ArchivoDeSalida("prueba.txt");

    ArchivoDeSalida << 123 << endl
                    << 45.67 << endl
                    << '@' << endl
                    << "Ferrocarrilero" << endl;
    ArchivoDeSalida.close();


    int entera;
    float flotante;
    char caracter;
    string cadena;

    cout<<"Entera: "<<entera<<endl
        <<"Flotante: "<<flotante<<endl
        <<"Caracter: "<<caracter<<endl
        <<"Cadena: "<<cadena<<endl<<endl;

    ifstream ArchivoDeEntrada("prueba.txt");
    ArchivoDeEntrada>>entera
                    >>flotante
                    >>caracter
                    >>cadena;
    ArchivoDeEntrada.close();


    cout<<"Entera: "<<entera<<endl
        <<"Flotante: "<<flotante<<endl
        <<"Caracter: "<<caracter<<endl
        <<"Cadena: "<<cadena<<endl<<endl;

    return 0;
}
