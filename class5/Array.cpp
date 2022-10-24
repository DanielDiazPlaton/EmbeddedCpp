/**
 * @file Array.h
 * @author Daniel Diaz Platon (daniel_dp96@hotmail.com)
 * @brief Class Array.h
 * @version 0.1
 * @date 2022-10-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */


/*  Standard Headers*/
#include <iostream>
#include <iomanip>
#include <stdexcept>

/*  Personal Headers*/
#include "Array.h"

using namespace std;

// Constructor predeterminado para la clase Array (tamaño predeterminado 10)
Array::Array( int sizeArray )
    : tamanio( tamanio > 0 ? sizeArray :
        throw invalid_argument("El tamanio del arreglo debe ser mayor que 0") ),
    ptr(  new int[ tamanio ])
    {
        for (  size_t i = 0; i < tamanio; ++i )
            ptr[ i ] = 0; // establece el elemento del arreglo basado en apuntador
    } // end constructor Array

// Constructor de copia para la clase Array
// debe recibir una referencia a un objeto Array
Array::Array( const Array &arregloACopiar )
: tamanio( arregloACopiar.tamanio ),
    ptr( new int[tamanio])
    {
        for (  size_t i = 0; i < tamanio; ++i )
            ptr[ i ] = arregloACopiar.ptr[ i ]; // lo copia en el objeto
    }

// destructor para la clase Array
Array::~Array()
{
    delete [] ptr; // libera el espacio del arreglo basado en apuntador
} // fin del destructor

//devuelve el numero de elementos del objeto Array
size_t Array::getSize() const{
    return tamanio; // numero de elementos en el objeto Array
} // end function getSize()

// operador de asignacion sobrecargado
// devolucion de const evita: ( a1 = a2 ) = a3
const Array &Array::operator=( const Array &derecho )
{
    if( &derecho != this ) // evita la auto-asignacion
    {
        // Para los objetos Array de distintos tamanios, designa el arreglo original del lado
        // izquierdo, despues asigna el nuevo arreglo del lado izquierdo
        if( tamanio != derecho.tamanio )
        {
            delete [] ptr; // libera espacio
            tamanio = derecho.tamanio; // cambia el tamanio de este objeto
            ptr = new int[ tamanio ]; // crea espacio para la copia del arreglo
        } // fin if inside

        for( size_t i = 0; i < tamanio; ++i )
            ptr[ i ] = derecho.ptr[ i ];  // copia el arreglo en el objeto
    } // fin de if outside

    return *this; // permite x = y = <, por ejemplo
} // end function operator=

// Determina si dos objetos Array son iguales y devuelve true, en caso contrario devuelve false
bool Array::operator==( const Array &derecho ) const
{
    if( tamanio != derecho.tamanio )
        return false; // arreglos con distinto numero de elementos

    for( size_t i = 0; i < tamanio; ++i )
        if( ptr[ i ] != derecho.ptr[ i ] )
            return false; // el contenido de los objetos Array no es igual

    return true; // los objetos Array son iguales
} // end function operator==

// Operador de subindice sobrecargado para objetos Array no const; la devolucion de una
// referencia crea un lvalue modificable
int &Array::operator[]( int subindice )
{
    // comprueba error de subindice fuera de rango
    if( subindice < 0 || subindice >= tamanio )
        throw out_of_range("Subindice fuera de rango");
    
    return ptr[ subindice ]; // devolucion de referencia
} // end function operator[]

// Operador de subindice sobrecargado para objetos Array const devolucion de referencia const
// crea un rvalue
int &Array::operator[]( int subindice ) const{
    // comprueba error de subindice fuera de rango
    if( subindice < 0 || subindice >= tamanio )
        throw out_of_range("Subindice fuera de rango");

    return ptr[ subindice ]; // devuleve una copia de este elemento
} // end dunction operator[]

// operador de entrada sobrecargado para la clase Array;
// recibe valores para el objeto Array completo
istream &operator>>( istream &entrada, Array &a )
{
    for( size_t i = 0; i < a.tamanio; ++i )
        entrada >> a.ptr[ i ];

    return entrada; // permite cin >> x >> y
} // end function

// operador de salida sobrecargado para la clase Array
ostream &operator<<( ostream &salida, const Array &a )
{
    for( size_t i = 0; i < a.tamanio; ++i )
    {
        salida << setw( 12 ) << a.ptr[ i ];

        if( ( i + 1 ) % 4 == 0 ) // 4 numeros por fila de salida
            salida << endl;  
    } // end for

    if( a.tamanio % 4 != 0 ) // fin de la ultima linea de salida
        salida << endl;

        return salida; // permite << x << y;
} // end function operator<<


