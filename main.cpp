#include <iostream>
using namespace std;

int main(void){

    string cadena;
    int i, n;

    cout<<"Ingresa una cadena ";
    getline(cin, cadena);
    n = cadena.size();

    cout<<"Tu cadena: "<<cadena<<endl;
    cout<<"Tiene "<<n<<" caracteres."<<endl<<endl;


    cout<<"cadena["<<3<<"] = "<<cadena.at(3)<<endl<<endl;

    for(i=0;i<n;i++)
        cout<<"cadena["<<i<<"] = "<<cadena.at(i)<<endl;

    return 0;
}
