#include <cstdint>
#include <iostream>
#include "Estatico.h"



/*
*   Los datos miembro static y las funciones miembro static de una clase existen, y se 
*   pueden usar aun si no se han instanciado objetos de esa clase
*/

Estatico::Estatico(){}

// Debo inicializar la variable static con alcance global una sola vez para que la puedan 
// ocupar todas las demas funciones
uint16_t Estatico::valueStatic = 0;  


// no es necesario colocar las funciones como static
void Estatico::showValue(void){
    std::cout << "The value set is: " << valueStatic << std::endl;
}

void Estatico::setValue(uint16_t newValue){
    valueStatic = newValue;
}