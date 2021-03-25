#include <iostream>
#include "Entero.h"
using namespace std;


Entero suma(Entero E1, Entero E2);
Entero resta(Entero E1, Entero E2);

int main(void){

    Entero A, B, C;

    A.pideleAlUsuarioTusDatos();
    B.pideleAlUsuarioTusDatos();

    C = resta(A, B);

    C.muestraTusDatos();cout<<endl<<endl;

    return 0;
}

Entero suma(Entero E1, Entero E2){
    Entero E3;
    E3.modificaTuValor(E1.dameTuValor() + E2.dameTuValor());
    return E3;
}
Entero resta(Entero E1, Entero E2){
    Entero E3;
    E3.modificaTuValor(E1.dameTuValor() - E2.dameTuValor());
    return E3;
}
