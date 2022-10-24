#ifndef FECHA_H
#define FECHA_H

#include <array>
#include <iostream>

class Fecha {
    friend std::ostream &operator<<( std::ostream &, const Fecha & );
    public:
        Fecha( int m = 1, int d = 1, int a = 1900 ); // constructor predeterminado
        void setFecha( int, int, int ); // set month, day, year
        Fecha &operator++(); // operator increment prefix
        Fecha operator++( int ); // operator increment postfix
        Fecha &operator+=( unsigned int ); // add days, modify object
        static bool yearBisiesto( int ); // Is it a year bisiesto?
        bool finDeMes( int ) const; // is the day last day?
    private:
        unsigned int month; 
        unsigned int day; 
        unsigned int year;
        static const std::array< unsigned int, 13 > days; // days per month
        void ayudaIncremento(); // funcion utilitaria para incrementar la fecha 
}; // End class Fecha

#endif