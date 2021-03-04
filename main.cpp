#include <iostream>
#include <math.h>
using namespace std;

int main(void){
//    Codifica un programa en C++ (cin y cout) que calcule la pendiente
//    de una recta que pasa a traves de dos puntos en un plano cartesiano

    double x1,y1,x2,y2,m;

    cout<<"Dame x1 ";cin>>x1;
    cout<<"Dame y1 ";cin>>y1;
    cout<<"Dame x2 ";cin>>x2;
    cout<<"Dame y2 ";cin>>y2;

    m = (y2-y1) / (x2-x1);

    cout<<"m = "<<m<<endl;

    return 0;
}
