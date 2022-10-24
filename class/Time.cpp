/*************************************************************************
 * 
 *      \author Daniel Diaz Platon
 *      \date   saturday, September 26, 2022
 *      \brief  Time.cpp
 * 
 *************************************************************************/

#include <iostream>
#include <iomanip>
#include <stdexcept> // definition of exeption invalid_argument
#include "Time.h"

using namespace std;

// constructor initialize every data members to 0
Tiempo::Tiempo()
    : hours(0), minutes(0), seconds(0)
    {} // end constructor

void Tiempo::setTime(int h, int m, int s){
    // valid hour, minute, second
    if((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)){
        hours = h;
        minutes = m;
        seconds = s;
    } // end if inside
    else {
        throw invalid_argument("Hour, minute or second were out of range");
    }  // end else inside
} // end function setTime()

void Tiempo::printUniversal() const{
    cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes 
    << ":" << setw(2) << seconds;
} // end function printUniversal()

void Tiempo::printEstandar() const{
    cout << ((hours == 0 || hours == 12)? 12 : hours % 12) << ":" << setfill('0') 
    << setw(2) <<  minutes << ":" << setw(2) << seconds << (hours < 12 ? " AM" : " PM");
} // end function printEstandar()




