#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

class Punto{
private:
    double x;
    double y;
public:
    Punto(void){
        this->x = 0.0;
        this->y = 0.0;
        //cout << "Objeto construido, this -> " << this << endl;
    };
    Punto(double x, double y){
        this->x = x;
        this->y = y;
        //cout << "Objeto construido, this -> " << this << endl;
    };
    ~Punto(void){
        //cout << "Objeto destruido, this -> " << this << endl;
    };
    void pideleAlUsuarioTusDatos(void){
        cout<<"Dame mi x ";
        cin>>this->x;
        cout<<"Dame mi y ";
        cin>>this->y;
    };
    void muestraTusDatos(void){
        cout << "(" << this->x << ", " << this->y <<")";
    };
    void guardaTusDatos(ofstream& ASalida) {
        ASalida << "(" << this->x << ", " << this->y << ")" << endl;
    };
    void cargaTusDatos(ifstream& AEntrada) {
        char caracter;
        AEntrada >> caracter;//Se extrae del archivo un parentesis
        AEntrada >> this->x;//Se extrae del archivo mi coordenada x
        AEntrada >> caracter;//Se extrae del archivo una coma
        AEntrada >> this->y;//Se extrae del archivo mi coordenada y
        AEntrada >> caracter;//Se extrae del archivo un parentesis
    };
    double dameTuX(void){
        return this->x;
    };
    void modificaTuX(double x){
        this->x = x;
    };
    double dameTuY(void){
        return this->y;
    };
    void modificaTuY(double y){
        this->y = y;
    };
    void modificaTusDatos(double x, double y){
        this->x = x;
        this->y = y;
    };
};
















int calculaCuadrante(Punto A);
double calculaDistanciaEntre(Punto A, Punto B);
double calculaPendienteDados(Punto A, Punto B);
Punto suma(Punto A, Punto B);
Punto resta(Punto A, Punto B);

int main(void){
    Punto A, B, C, D;
    double d, m;

    cout<<"Ingresa A"<<endl;
    A.pideleAlUsuarioTusDatos();
    cout<<"Ingresa B"<<endl;
    B.pideleAlUsuarioTusDatos();

    d = calculaDistanciaEntre(A,B);
    m = calculaPendienteDados(A,B);

    C = suma(A,B);
    D = resta(A,B);

    cout<<"d\t= "<<d<<endl
        <<"m\t= "<<m<<endl;
    cout<<"A+B\t= ";C.muestraTusDatos();cout<<endl;
    cout<<"A-B\t= ";D.muestraTusDatos();cout<<endl;

    return 0;
}

double calculaDistanciaEntre(Punto A, Punto B){
    return sqrt(
        pow(B.dameTuY()-A.dameTuY(), 2)
        +
        pow(B.dameTuX()-A.dameTuX(), 2)
    );
}
double calculaPendienteDados(Punto A, Punto B){
    return  (B.dameTuY()-A.dameTuY())
            /
            (B.dameTuX()-A.dameTuX());
}
Punto suma(Punto A, Punto B){
    Punto C;
    C.modificaTusDatos(
        A.dameTuX()+B.dameTuX()
        ,
        A.dameTuY()+B.dameTuY()
    );
    return C;
}
Punto resta(Punto A, Punto B){
    Punto C;
    C.modificaTusDatos(
        A.dameTuX()-B.dameTuX()
        ,
        A.dameTuY()-B.dameTuY()
    );
    return C;
}
int calculaCuadrante(Punto A){
    if(A.dameTuX() > 0 && A.dameTuY() > 0){
        return 1;
    }
    else if(A.dameTuX() < 0 && A.dameTuY() > 0){
        return 2;
    }
    else if(A.dameTuX() < 0 && A.dameTuY() < 0){
        return 3;
    }
    else if(A.dameTuX() > 0 && A.dameTuY() < 0){
        return 4;
    }
    else if(A.dameTuX() > 0 && A.dameTuY() == 0){
        return 5;
    }
    else if(A.dameTuX() < 0 && A.dameTuY() == 0){
        return 6;
    }
    else if(A.dameTuX() == 0 && A.dameTuY() > 0){
        return 7;
    }
    else if(A.dameTuX() == 0 && A.dameTuY() < 0){
        return 8;
    }
    else{
        return 0;
    }
}
