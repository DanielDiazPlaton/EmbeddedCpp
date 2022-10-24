#include <iostream>
#include <string>
using namespace std;

int main(){

    string s1("feliz");
    string s2(" cumpleanios");
    string s3;

    // prueba los operadores de igualdad y relaciones sobrecargados
    cout << "s1 es \"" << s1 << "\"; s2 es \"" << s2 << "\"; s3 es \""
        << s3 << "\""
        << "\n\nLos resultados de comparar s2 y s1:"
        << "\ns2 == s1 produce " << (s2 == s1 ? "true" : "false")
        << "\ns2 != s1 produce " << (s2 != s1 ? "true" : "false")
        << "\ns2 > s1 produce " << (s2 > s1 ? "true" : "false")
        << "\ns2 < s1 produce " << (s2 < s1 ? "true" : "false")
        << "\ns2 >= s1 produce " << (s2 >= s1 ? "true" : "false")
        << "\ns2 <= s1 produce " << (s2 <= s1 ? "true" : "false");

    // prueba la funcion miembro empty de string
    cout << "\n\nPrueba de s3.empty(): " << endl;

    if(s3.empty()){
        cout << "s3 esta vacia; se asigno s1 a s3;" << endl;
        s3 = s1;
        cout << "s3 es \"" << s3 << "\"";
    }

    // prueba el operador de concatenacion sobrecargado de string
    cout << "\n\ns1 += s2 produce s1 = ";
    s1 += s2;
    cout << s1;

    //prueba el operador de concatenacion sobrecargado de string con una cadena estilo C
    cout << "\n\ns1 += \" a ti\" produce" << endl;
    s1 += "a ti";
    cout << "s1 = " << s1 << "\n\n";

    //prueba la funcion miembro substr de string
    cout << "La subcadena de s1 que empieza en la ubicacion 0 para\n"
        << "17 caracteres, s1.substr(0,17), es: \n"
        << s1.substr(0,17) << "\n\n";

    // prueba la opcion "hasta el final de la cadena" de substr
    cout << "La subcadena de s1 que empieza en\n"
        << "la ubicacion 18, s1.substr(18), es:\n"
        << s1.substr(18) << endl;

    //prueba el constructor de copia
    string s4(s1);
    cout << "\ns4 = " << s4 << "\n\n";

    //prueba el operador de asignacion de copia sobrecargado(=) con la auto-asignacion
    cout << "asignando s4 a s4" << endl;
    s4 = s4;
    cout << "s4 = " << s4 << endl;

    //prueba el uso del operador de subindice sobrecargado para crear un lvalue
    s1[0] = 'F';
    s1[6] = 'C';
    cout << "\ns1 despues de s1[0] = 'F' y s1[6] = 'C' es: " << s1 << "\n\n";

    //prueba el subindice fuera de rango con la funcion miembro "at" de string
    try{
        cout << "El intento de asignar 'd' a s1.at(30) produce:" << endl;
        s1.at(30) = 'd'; // ERROR: subindice fuera de rango
    } catch( out_of_range &ex ){
        cout << "Ocurrio una excepcion: " << ex.what() << endl;
    }
        
}