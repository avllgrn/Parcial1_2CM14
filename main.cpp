#include <iostream>
#include <math.h>
using namespace std;

int main(void){
//    Codifica un programa en C++ (cin y cout) que calcule la distancia
//    entre dos puntos en un plano cartesiano

    double x1,y1,x2,y2,d;

    cout<<"Dame x1 ";cin>>x1;
    cout<<"Dame y1 ";cin>>y1;
    cout<<"Dame x2 ";cin>>x2;
    cout<<"Dame y2 ";cin>>y2;

    d = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2));

    cout<<"d = "<<d<<endl;

    return 0;
}
