#include <iostream>
using namespace std;

int main(void){

    string cadena1, cadena2;
    int i, n;

    cout<<"Ingresa una cadena ";
    getline(cin, cadena1);
    n = cadena1.size();

    cout<<"Tu cadena: "<<cadena1<<endl;

    for(i=0;i<n;i++){
        if(!(cadena1.at(i)==' '))
            cadena2.push_back(cadena1.at(i));
    }
    cout<<"cadena1: "<<cadena1<<endl;
    cout<<"cadena2: "<<cadena2<<endl;

    cout<<cadena1.compare(cadena2)<<endl;
    cout<<cadena2.compare(cadena1)<<endl;

    return 0;
}
