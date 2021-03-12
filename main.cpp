#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;

int main(void){
    srand(time(NULL));

    int V[100], V2[100], i, n;

    cout<<"Ingresa n ";cin>>n;

    for(i=0;i<n;i++)
        cout<<"V2["<<i<<"] = "<<V[i]<<endl;
    cout<<endl<<endl;

    for(i=0;i<n;i++)
        V[i] = (rand()%100);

    ofstream ArchivoDeSalida("prueba.txt");

    for(i=0;i<n;i++)
        ArchivoDeSalida<<V[i]<<endl;

    ArchivoDeSalida.close();



    ifstream ArchivoDeEntrada("prueba.txt");
    for(i=0;i<n;i++)
        ArchivoDeEntrada>>V2[i];

    ArchivoDeEntrada.close();

    for(i=0;i<n;i++)
        cout<<"V2["<<i<<"] = "<<V[i]<<endl;
    cout<<endl<<endl;

    return 0;
}












