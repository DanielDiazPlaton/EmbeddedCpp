/*************************************************************************
 * 
 *      \author Daniel Diaz Platon
 *      \date   saturday, September 26, 2022
 *      \brief  Time.h
 * 
 *************************************************************************/

/*   avoid multiples inclusion header   */
#ifndef TIEMPO_H
#define TIEMPO_H

class Tiempo{
    public:
        Tiempo(); // Constructor
        void setTime(int, int, int);    // int hours, int minutes, int seconds
        void printUniversal() const;
        void printEstandar() const;
    private:
        unsigned int hours; // 0 - 23
        unsigned int minutes; // 0 - 59
        unsigned int seconds; // 0 - 59
}; // end class Tiempo

#endif

