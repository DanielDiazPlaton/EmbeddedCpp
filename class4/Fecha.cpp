#include <iostream>
#include <string>
#include "Fecha.h"
using namespace std;

// inicializa miembro estatico; una copia a nivel de clase
const array< unsigned int, 13 > Fecha::days = 
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

// constructor fecha
Fecha::Fecha( int month, int day, int year ){
    setFecha( month, day, year );
}

// set month, day, year
void Fecha::setFecha( int mm, int dd, int aa ){
    if( mm >= 1 && mm <= 12 )
        month = mm;
    else
        throw invalid_argument("Month debe estar entre 1 y 12");

    if( aa >= 1900 && aa <= 2100 )
        year = aa;
    else 
        throw invalid_argument("Year debe ser >= 1900 y <= 2100");

    // prueba si es year bisiesto
    if( ( month == 2 && yearBisiesto( year ) && dd >= 1 && dd <= 29 ) ||
        ( dd >= 1 && dd <= days[ month ] ) )
        day = dd;
    else
        throw invalid_argument("Day fuera de rango para el mes y year actual");
}

// operator de incremento prefijo sobrecargado
Fecha &Fecha::operator++(){
    ayudaIncremento(); // incrementa la fecha
    return *this; // devuelve referencia para crear un lvalue
}

// opertaor de incremento postfijo sobrecargado; observe que el parametro entero
// de muestra no tiene un nombre de parametro
Fecha Fecha::operator++( int ){
    Fecha temp = *this; // contiene el estado actual del objeto
    ayudaIncremento();

    // devuelve objeto temporal almacenado y sin incrementar
    return temp; // devuelve un valor; no devulve una referencia
}

// suma el numero especificado de dias a la fecha
Fecha &Fecha::operator+=( unsigned int diasAdicionales ){
    for( int i = 0; i < diasAdicionales; ++i )
        ayudaIncremento();

    return *this; // permite la asignacion en cascada
}

bool Fecha::yearBisiesto( int yearPrueba ){
    if( yearPrueba % 400 == 0 || ( yearPrueba % 100 != 0 && yearPrueba % 4 == 0 ) )
        return true; // year bisiesto
    else
        return false; // not year bisiesto
}

bool Fecha::finDeMes( int dayPrueba ) const {
    if( month == 2 && yearBisiesto( year ) )
        return dayPrueba == 29; // ultimo dia de february bisiesto
    else
        return dayPrueba == days[ month ];
}

void Fecha::ayudaIncremento(){
    // dia no es fin de mes
    if( !finDeMes( day ) )
        ++day;
    else
        if(  month < 12 ) // dia es fin de mes y mes < 12
        {
            ++month;
            day = 1;
        } else {
            ++year; // ioncrementa year
            month = 1; // primer month del nuevo year
            day = 1; // primer day del nuevo month
        }
}

ostream &operator<<( ostream &salida, const Fecha &d ){
    static string nombreMes[13] = { "", "Enero", "Febrero",
        "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto",
        "Septiembre", "Octubre", "Noviembre", "Diciembre" };
    salida << nombreMes[d.month] << " " << d.day << ", " << d.year;
    return salida; // permite la asignacion en cascada
}



