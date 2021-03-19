#include <iostream>
using namespace std;

int main(void){

    string cadena1, busqueda;
    int i, n;

    cout<<"Ingresa una cadena ";
    getline(cin, cadena1);
    cout<<"Ingresa  cadena a buscar ";
    getline(cin, busqueda);


    n = cadena1.size();
    for(i=0;i<n;i++){
        cout<<"["<<i<<"] = "<<cadena1.at(i)<<endl;
    }

    cout<<cadena1.find(busqueda)<<endl;
    cout<<cadena1.find(' ')<<endl;

    cout<<cadena1.rfind(busqueda)<<endl;
    cout<<cadena1.rfind(' ')<<endl;

    return 0;
}
