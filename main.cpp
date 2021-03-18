#include <iostream>
using namespace std;

int main(void){

    string cadena1, cadena2, cadena3;

    cout<<"cadena1: "<<cadena1<<endl;
    cout<<"cadena2: "<<cadena2<<endl<<endl;
    system("pause");

    cout<<"Ingresa una cadena ";
    getline(cin, cadena1);

    cout<<"Ingresa otra cadena ";
    getline(cin, cadena2);

    cadena3.append(cadena1);
    cadena3.append(cadena2);

    cout<<"cadena1: "<<cadena1<<endl;
    cout<<"cadena2: "<<cadena2<<endl;
    cout<<"cadena3: "<<cadena3<<endl<<endl;

    return 0;
}
