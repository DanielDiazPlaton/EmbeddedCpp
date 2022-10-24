/*************************************************************************
 * 
 *      \author Daniel Diaz Platon
 *      \date   saturday, September 10, 2022
 *      \brief  classes
 * 
 *************************************************************************/

#include <iostream>
#include <cstdint>
#include "TimeOfDay.h"

using namespace std;


int main(){

    TimeOfDay time1(5,30,0);
    TimeOfDay time2;
    int loopCount;
    
    cout << "time1: ";
    time1.write();
    cout << " time2: ";
    time2.write();
    cout << endl;
    
    if(time1.equal(time2))
        cout << "times are equal" << endl;
    else
        cout << "Times are NOT equal" << endl;
        
    time2 = time1;
    
    cout << "time1: ";
    time1.write();
    cout << " time2: ";
    time2.write();
    cout << endl;
    
    if(time1.equal(time2))
        cout << "times are equal" << endl;
    else
        cout << "Times are NOT equal" << endl;

    
} // End main