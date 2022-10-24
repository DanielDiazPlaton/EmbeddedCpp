/*************************************************************************
 * 
 *      \author Daniel Diaz Platon
 *      \date   saturday, September 10, 2022
 *      \brief  enum
 * 
 *************************************************************************/

#include <iostream>
#include <cstdint>

using namespace std;

int main(){

    enum { SUSPENDED, READY, RUNNING } EventTask;
    typedef enum { SUSPENDED2, READY2, RUNNING2 } EventTask02;

    EventTask02 evtask;

    cout << SUSPENDED << " " << READY << " " << RUNNING << endl;

    cout << SUSPENDED2 << " " << READY2 << " " << RUNNING2 << endl;

} // End main