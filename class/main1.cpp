/*************************************************************************
 * 
 *      \author Daniel Diaz Platon
 *      \date   saturday, September 26, 2022
 *      \brief  main1.cpp
 * 
 *************************************************************************/

#include <iostream>
#include <stdexcept>
#include "Time.h"

using namespace std;

int main(){
    Tiempo t; // instance a object t of class Time.h

    // print initial values
    cout << "El tiempo universal inicial es: ";
    t.printUniversal();
    cout << "El tiempo universal estandar es: ";
    t.printEstandar();

    t.setTime(13,27,6);

    // print initial values
    cout << "El tiempo universal despues de setTime es: ";
    t.printUniversal();
    cout << "El tiempo universal estandar despues de setTime es: ";
    t.printEstandar();

    //intenta establecer el tiempom con valores invalidos
    try
    {
        t.setTime(99,99,99);   
    }
    catch( invalid_argument &e)
    {
        cout << "\n\nExcepcion: " << e.what() << endl;
    }

    // print initial values
    cout << "El tiempo universal despues de invalid setTime es: ";
    t.printUniversal();
    cout << "El tiempo universal estandar despues de invalid setTime es: ";
    t.printEstandar();
    cout << endl;    

}

