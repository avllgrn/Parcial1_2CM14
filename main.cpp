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


















int main(void){

    //Codifica un programa que sume dos puntos en un plano cartesiano
    Punto A, B, C;

    cout<<"A";A.muestraTusDatos();cout<<endl;
    cout<<"B";B.muestraTusDatos();cout<<endl;
    cout<<"C";C.muestraTusDatos();cout<<endl;
    system("pause");
    system("cls");

    cout<<"A"<<endl;
    A.pideleAlUsuarioTusDatos();
    cout<<"B"<<endl;
    B.pideleAlUsuarioTusDatos();

    C.modificaTuX( A.dameTuX() + B.dameTuX() );
    C.modificaTuY( A.dameTuY() + B.dameTuY() );

    system("cls");
    cout<<"\tA";A.muestraTusDatos();cout<<endl;
    cout<<"+\tB";B.muestraTusDatos();cout<<endl;
    cout<<"=\tC";C.muestraTusDatos();cout<<endl;

    return 0;
}
