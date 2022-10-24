#include <iostream>
#include "Fecha.h"
using namespace std;

int main(){
    Fecha d1( 12, 27, 2010 ); // Diciembre 27, 2010
    Fecha d2; // valor predeterminado

    cout << "d1 es " << d1 << "\nd2 es " << d2;
    cout << "\n\nd1 += 7 es " << ( d1 += 7 );

    d2.setFecha( 2, 28, 2008 );
    cout << "\n\n  d2 es " << d2;
    cout << "\n++d2 es " << ++d2 << " (anio bisiesto permite 29)";

    Fecha d3( 7, 13, 2010 );

    cout << "\n\nPrueba del operador de incremento prefijo:\n"
        << "  d3 es " << d3 << endl;
    cout << "++d3 es " << ++d3 << endl;
    cout << " d3 es " << d3;

    cout << "\n\nPrueba del operador de incremento postfijo:\n"
        << "  d3 es " << d3 << endl;
    cout << "d3++ es " << d3++ << endl;
    cout << "  d3 es " << d3 << endl;
}