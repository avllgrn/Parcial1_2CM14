#include <iostream>
#include <fstream>
using namespace std;

int main(void){
    ofstream ArchivoDeSalida("otro.txt");


    ArchivoDeSalida <<"Hola\nmundo!"<<endl
                    <<"Otra linea debajo"<<endl
                    <<123<<endl
                    <<456.789<<endl
                    <<'@'<<endl<<endl;


    float a, b, c;
    cout<<"Ingresa a ";cin>>a;
    cout<<"Ingresa b ";cin>>b;
    c=a+b;

    cout           << a << " + " << b << " = " << c <<endl;
    ArchivoDeSalida<< a << " + " << b << " = " << c <<endl;

    ArchivoDeSalida.close();
    return 0;
}
