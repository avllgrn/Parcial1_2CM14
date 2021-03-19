#include <iostream>
using namespace std;

int main(void){

    string cadena1, subcadena1, subcadena2;
    int i, n, inicio, fin;

    cout<<"Ingresa una cadena ";
    getline(cin, cadena1);
    n = cadena1.size();

    for(i=0;i<n;i++){
        cout<<"["<<i<<"] = "<<cadena1.at(i)<<endl;
    }

    cout<<"Ingresa  inicio ";cin>>inicio;
    cout<<"Ingresa  fin ";cin>>fin;

    subcadena1.append(cadena1.substr(inicio));
    subcadena2.append(cadena1.substr(0,fin));

    cout<<"cadena1: "<<cadena1<<endl;
    cout<<"subcadena1: "<<subcadena1<<endl;
    cout<<"subcadena2: "<<subcadena2<<endl;

    return 0;
}
