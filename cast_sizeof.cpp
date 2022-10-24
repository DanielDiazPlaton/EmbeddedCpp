/*************************************************************************
 * 
 *      \author Daniel Diaz Platon
 *      \date   saturday, September 11, 2022
 *      \brief  cast and sizeof
 * 
 *************************************************************************/

#include <iostream>
#include <cstdint>

using namespace std;

int main(){

/*******************************************
 * CAST OPERATION
 *******************************************/
    uint16_t x = 17;
    uint16_t y = 16;
    float resp;

    resp = (float)x / y;

    cout << resp << endl;

    resp = static_cast<float>(x) / y;
    cout << resp << endl;

/*******************************************
 * SIZEOF OPERATOR (in bytes)
 *******************************************/
    cout << "Sizeof" << endl;
    cout << sizeof(x) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(resp) << endl;





} // End main