/*************************************************************************
 * 
 *      \author Daniel Diaz Platon
 *      \date   saturday, September 10, 2022
 *      \brief  volatile, const, static, extern
 * 
 *************************************************************************/

#include <iostream>
#include <cstdint>

using namespace std;

/******************************************************************************************
 * FUNCTION PROTOTYPE
 ******************************************************************************************/

// STATIC AND AUTO
void counting_with_static();
void counting_without_static();
// REGISTER
void registerFunc();



int main(){

/***************************************
 * STATIC AND AUTO
 ***************************************/
    cout << "\n\nCounter with static key word reserve" << endl;
    for(int count = 1; count <= 10; count++){
        counting_with_static();
    }

    cout << "\n\nCounter without static key word reserve" << endl;
    for(int count = 1; count <= 10; count++){
        counting_without_static();
    }

    //cout << counter << endl; counter is not deallocated here


/***************************************
 * REGISTER (processor register)
 ***************************************/



} // End main


/******************************************************************************************
 * FUNCTION DEFINITION
 ******************************************************************************************/

/***************************************
 * STATIC AND AUTO
 ***************************************/
void counting_with_static(){
    static uint16_t counter = 0;

    counter++;
    cout << "count: " << counter << endl; 
}

void counting_without_static(){
    uint16_t counter = 0;

    counter++;
    cout << "count: " << counter << endl; 
}

/***************************************
 * REGISTER (processor register) is a suggestion, not an order
 ***************************************/
void registerFunc(){
    register int x;
}

