/*************************************************************************
 * 
 *      \author Daniel Diaz Platon
 *      \date   saturday, September 10, 2022
 *      \brief  templates
 * 
 *************************************************************************/

#include <iostream>
#include <cstdint>

using namespace std;

int main(){

    int x = 5;
    int y = 2;
    float res;

    // res = (float)x/y;
    res = static_cast<float>(x)/y;

    cout << res;
} // End main