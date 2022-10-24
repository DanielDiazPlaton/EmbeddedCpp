/**
 * @file usoArrayClass.cpp
 * @author Daniel Diaz Platon (daniel_dp96@hotmail.com)
 * @brief Inthis file we check the class Array.h
 * @version 0.1
 * @date 2022-10-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;

int main()
{
    Array enteros1( 7 ); // objeto Array de siete elementos
    Array enteros2; // objeto Array de 10 elementos creado de manera predeterminada

    // imprime el tamanio y contenido de enteros1
    cout << "El tamanio del objeto Array enteros1 es: "
        << enteros1.getSize()
        << "\nEl objeto Array despues de la inicializacion es:\n" << enteros1;

    // imprime el tamanio y el contenido de enteros2
    cout << "\nEl tamanio y el contenido de enteros2 es: "
        << enteros2.getSize()
        << "\nEl objeto Array despues de la inicializacion es:\n" << enteros2;

    // recibe e imprime enteros1 y enteros2
    cout << "\nIntroduzca 17 enteros: " << endl;
    cin >> enteros1 >> enteros2;

    cout << "\nDespues de la entrada, los objetos Array contienen:\n"
        << "enteros1:\n" << enteros1
        << "enteros2:\n" << enteros2;

    // usa el operador de desigualdad (!=) sobrecargado
    cout << "\nEvaluando: enteros1 != enteros2" << endl;

    if( enteros1 != enteros2 )
        cout << "enteros1 y enteros2 no son iguales" << endl;

    // crea el objeto Array enteros3, usando enteros1 como inicializador
    // imprime el tamanio y el contenido
    Array enteros3( enteros1 ); // invoca el constructor copia

    cout << "El tamanio del objeto Array enteros3 es: "
        << enteros3.getSize()
        << "\nEl objeto Array despues de la inicializacion es:\n" << enteros3;

    // usa el operador de asignacion (=) sobrecargado
    cout << "\nAsignando enteros2 a enteros1:" << endl;
    enteros1 = enteros2; // observe que el objeto Array de destino es mas perquenio

    cout << "enteros1:\n" << enteros1
        << "eneteros2:\n" << enteros2;

    // usa el operador de igualdad (==) sobrecargado
    cout << "\nEvaluando: enteros1 == enteros2" << endl;

    if( enteros1 == enteros2 )
        cout << "enteros1 y enteros2 son iguales" << endl;

    // usa el operador de subindice sobrecargado para crear rvalue
    cout << "\nenteros1[5] es " << enteros1[ 5 ];

    // usa el operador de subindice sobrecargado para crear lvalue
    cout << "\n\nAsignando 1000 a enteros[5]" << endl;
    enteros1[ 5 ] = 1000;
    cout << "enteros1:\n" << enteros1;

    // trata de usar un subindice fuera de rango
    try
    {
        cout << "\nTrata de asignar 1000 a enteros1[15]" << endl;
        enteros1[ 15 ] = 1000; // ERROR: subindice fuera de rango
    }
    catch( out_of_range &ex )
    {
        cout << "Ocurrio una excepcion: " << ex.what() << endl;
    }
    


} // End main