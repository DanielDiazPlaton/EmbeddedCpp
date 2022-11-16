/*************************************************************************
 * 
 *      \author Daniel Diaz Platon
 *      \date   Monday, November 14, 2022
 *      \brief  Test my own stack functions into the class Stack_Memory.h
 * 
 *************************************************************************/

#include <iostream>
#include "Stack_Memory.h"

using namespace std;

int main(){

int menu;   // control menu
int value;
Stack_Memory stack;

while(1){
    cout << "Que desea realizar:" << endl;
    cout << "0.- Ver stack" << endl;
    cout << "1.- Ver top" << endl;
    cout << "2.- agregar al stack" << endl;
    cout << "3.- quitar del stack" << endl;
    cout << "Resp: ";
    cin >> menu;
    if( menu <= 3 && menu >= 0){
        if( menu == 2){
            cout << "Introduce el valor para el stack: ";
            cin >> value;
            stack.setValue(value);
        }
        if(menu == 0){
            stack.displayStack();
        }
        if(menu == 1){
            stack.showTop();
        }
        if(menu == 2){
            stack.push();
        }
        if(menu == 3){
            stack.pop();
        }
        cout << "\n\n\n\n\n";
    } else {
        cout << "La opcion que escogio no existe" << endl;
    }
}

}  // End Main