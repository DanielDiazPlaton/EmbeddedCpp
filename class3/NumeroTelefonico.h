#ifndef NUMERO_TELEFONICO_H
#define NUMERO_TELEFONICO_H

#include <iostream>
#include <string>


/*
 * Sobrecarga de los operadores binarios de insercion de flujo y extraccion de flujo
 */
class NumeroTelefonico {

    friend std::ostream &operator<<( std::ostream &, const NumeroTelefonico & );
    friend std::istream &operator>>( std::istream &, NumeroTelefonico & );

    private:
        std::string codigoArea;
        std::string intercambio;
        std::string linea;

}; // End class


#endif