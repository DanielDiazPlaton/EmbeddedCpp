#include "TimeOfDay.h"
#include <iostream>

using namespace std;

TimeOfDay::TimeOfDay(){
    hours = 0;
    minutes = 0;
    seconds = 0;
}

TimeOfDay::TimeOfDay(int initHours, int initMinutes, int initSeconds){
    hours = initHours;
    minutes = initMinutes;
    seconds = initSeconds;
}

TimeOfDay TimeOfDay::increment() const{
    // Create a duplicate of instance
    TimeOfDay result(hours, minutes, seconds); // Constrctor call
    
    result.seconds++;
    if(result.seconds > 59){
        result.seconds = 0;
        result.minutes++;
        if(result.minutes > 59){
            result.minutes = 0;
            result.hours++;
            if(result.hours > 23){
                result.hours = 0;
            }
        }
    }
    
    return result;
}

void TimeOfDay::write() const{
    if(hours < 10)
        cout << '0';
    cout << hours << ':';
    if(minutes < 10)
        cout << '0';
    cout << minutes << ':';
    if(seconds < 10)
        cout << '0';
    cout << seconds;
}

bool TimeOfDay::equal(TimeOfDay otherTime) const{
    return (hours == otherTime.hours 
            && minutes == otherTime.minutes 
            && seconds == otherTime.seconds);
}

bool TimeOfDay::lessThan(TimeOfDay otherTime) const{
    return (hours < otherTime.hours || hours == otherTime.hours 
            && minutes < otherTime.minutes || hours == otherTime.hours 
            && minutes == otherTime.minutes
            && seconds < otherTime.seconds);
}

    
    
    
    