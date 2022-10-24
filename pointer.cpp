/*************************************************************************
 * 
 *      \author Daniel Diaz Platon
 *      \date   saturday, September 10, 2022
 *      \brief  pointer
 * 
 *************************************************************************/

#include <iostream>
#include <cstdint>

using namespace std;

int main(){


/********************************************
 * Pointers types
 ********************************************/
    uint8_t w = 98;
    uint8_t x = 98;
    uint8_t* y;
    uint8_t* z = &x;
    y = &x;

    if( y == z )
        cout << "\n" << *y << endl;

/********************************************
 * References types
 ********************************************/
    uint8_t& u = w; // Reference required be initialize
    uint8_t& v = x; 

    cout << "\n" << u << endl;
    cout << "\n" << v << endl;

} // End main