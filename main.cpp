#include <iostream>
#include <stdio.h>
using namespace std;

int main(void){
    printf("Hello world!\n");
    cout << "Hello world!" << endl
         << "Otra linea debajo" << endl
         << "Una mas debajo"
         << "La ultima no esta debajo";

    system("pause");
    system("cls");

    int a = 3;
    float b = 4.5;
    char c = '@';

    cout<<a<<endl
        <<b<<endl
        <<c<<endl<<endl;

    cout<<a*2<<endl
        <<b-1.1<<endl
        <<c<<" y algo"<<endl<<endl;

    cout<<"a = "<<a<<endl
        <<"b = "<<b<<endl
        <<"c = "<<c<<endl<<endl;


    system("pause");
    system("cls");

    cout<<"Dame un numero ";
    cin>>a;
    cout<<"Dame otro numero ";
    cin>>b;
    cout<<"Dame un simbolo ";
    cin>>c;

    cout<<"a = "<<a<<endl
        <<"b = "<<b<<endl
        <<"c = "<<c<<endl<<endl;

    system("pause");
    system("cls");

    cout<<"Dame un entero, un flotante y un caracter ";
    cin>>a>>b>>c;

    cout<<"a = "<<a<<endl
        <<"b = "<<b<<endl
        <<"c = "<<c<<endl<<endl;


    system("pause");
    system("cls");

    char V[10];

    for(int i=0;i<10;i++){
        cout<<"Ingresa V["<<i<<"] ";
        cin>>V[i];
    }
    for(int j=0;j<10;j++){
        cout<<"V["<<j<<"] = "<<V[j]<<endl;
    }

    return 0;
}
