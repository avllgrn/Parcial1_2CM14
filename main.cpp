#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;

int main(void){
    srand(time(NULL));

    cout<<"Numero entre [0, 10) " << (rand()%10) << endl;

    cout<<"Numero entre [0, 50) " << (rand()%50) << endl;

    cout<<"Numero entre [0, 700) " << (rand()%700) << endl;

    return 0;
}
