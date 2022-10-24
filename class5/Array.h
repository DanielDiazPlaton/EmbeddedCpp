/**
 * @file Array.h
 * @author Daniel Diaz Platon (daniel_dp96@hotmail.com)
 * @brief Class Array.h
 * @version 0.1
 * @date 2022-10-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array
{
    friend std::ostream &operator<<( std::ostream &, const Array &);
    friend std::istream &operator>>( std::istream &, Array &);

    public:
        explicit Array( int = 10 );         // predetermined constructor
        Array( const Array & );             // constructor of copy
        ~Array();                           // Destructor
        size_t getSize() const;             // Return size

        const Array &operator=( const Array & );    // operator of assigment
        bool operator==( const Array & ) const;     // operator of equal

        // operator of nonequal; return the reverse of ==
        bool operator!=( const Array &derecho ) const
        {
            return ! ( *this == derecho );          // invoque Array::operator==
        }

        // operator of subindice para los objetos no const devuelve un lvalue modificable
        int &operator[]( int );

        // operator de subindice para los objetos const devuelve rvalue
        int &operator[]( int ) const;
    private:
        size_t tamanio;                     // arreglo tamanio basado en apuntador
        int *ptr;                           // apuntador al primer elemento del arreglo basado
                                            // en apuntador

}; // End class Array

#endif