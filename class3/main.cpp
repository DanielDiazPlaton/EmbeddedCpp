#include <iostream>
#include "NumeroTelefonico.h"
using namespace std;

int main(){

    NumeroTelefonico telefono;

    cout << "Escriba el numero telefonico en la forma (123) 456-7890" << endl;

    /*
     * cin >> telefono invoca a operator>> generando de manera implicita
     * la llamada a la funcion no miembro operator>>(cin, telefono)
     */
    cin >> telefono;

    cout << "El numero telefonico introducido fue: ";

    /*
     * cout << telefono invoca a operator<< generando de mnanera implicita la llamada
     * a la funcion no miembro operator<<(cout, telefono)
     */
    cout << telefono << endl;

} // End main