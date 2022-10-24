
#include <iomanip>
#include "NumeroTelefonico.h"
using namespace std;

/*
 * Operador de insersion de flujo sobrecargado; no puede ser una 
 * funcion miembro si deseamos invocarlo con 
 * cout << unNumeroTelefonico
 */
ostream &operator<<( ostream &salida, const NumeroTelefonico &numero ){
    salida << "(" << numero.codigoArea << ") " << numero.intercambio << "-" << numero.linea;
    return salida; // permite cout << a << b << c;
} // End function operator<<

/*
 * Operador de extraccion de flujo sobrecargado; no puede ser una 
 * funcion miembro si deseamos invocarlo con 
 * cin >> unNumeroTelefonico
 */
istream &operator>>( istream &entrada, NumeroTelefonico &numero ){
    entrada.ignore(); // Omite (
    entrada >> setw(3) >> numero.codigoArea; // recibe el codigo de area
    entrada.ignore(2); // omite ) y espacio
    entrada >> setw(3) >> numero.intercambio;  // recibe intercambio
    entrada.ignore(); // omite el guion corto (-)
    entrada >> setw(4) >> numero.linea; // recibe linea
    return entrada; // permite cin >> a >> b >> c;
}


