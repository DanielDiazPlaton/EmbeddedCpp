#include <iostream>
#include <cstdint>
#include "Estatico.h"


using namespace std;

int main(){

    uint16_t newValue;
    Estatico prueba1;
    Estatico prueba2;
    Estatico prueba3;

    prueba1.showValue();
    prueba1.setValue(15);
    prueba2.showValue();
    prueba2.setValue(20);
    prueba3.showValue();
    prueba3.setValue(25);
    prueba1.showValue();

}