#include <iostream>
using namespace std;

class Complejo{
private:
    double real;
    double imaginario;
public:
    Complejo(void){
        this->real = 0.0;
        this->imaginario = 0.0;
        //cout << "Objeto construido, this -> " << this << endl;
    };
    Complejo(double real, double imaginario){
        this->real = real;
        this->imaginario = imaginario;
        //cout << "Objeto construido, this -> " << this << endl;
    };
    ~Complejo(void){
        //cout << "Objeto destruido, this -> " << this << endl;
    };
    void pideleAlUsuarioTusDatos(void){
        cout<<"Dame mi real ";
        cin>>this->real;
        cout<<"Dame mi imaginario ";
        cin>>this->imaginario;
    };
    void muestraTusDatos(void){
        cout << this->real;
        if(this->imaginario < 0)
            cout << this->imaginario;
        else
            cout << "+" << this->imaginario;
        cout<<"i";
    };
    double dameTuReal(void){
        return this->real;
    };
    void modificaTuReal(double real){
        this->real = real;
    };
    double dameTuImaginario(void){
        return this->imaginario;
    };
    void modificaTuImaginario(double imaginario){
        this->imaginario = imaginario;
    };
};

Complejo multiplica(Complejo C1, Complejo C2);

int main(void){
    Complejo A, B, C;
    //1. Pide datos
    A.pideleAlUsuarioTusDatos();
    B.pideleAlUsuarioTusDatos();

    //2. Calcula formulas
    C = multiplica(A,B);

    //3. Muestra resultados
    C.muestraTusDatos();cout<<endl<<endl;

    return 0;
}

Complejo multiplica(Complejo C1, Complejo C2){
    Complejo Resultante;
    //R3 = R1*R2 - I1*I2
    //I3 = R1*I2 + R2*I1

    Resultante.modificaTuReal(
        C1.dameTuReal()*C2.dameTuReal() - C1.dameTuImaginario()*C2.dameTuImaginario()
    );

    Resultante.modificaTuImaginario(
        C1.dameTuReal()*C2.dameTuImaginario() + C2.dameTuReal()*C1.dameTuImaginario()
    );

    return Resultante;
}
