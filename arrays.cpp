/*************************************************************************
 * 
 *      \author Daniel Diaz Platon
 *      \date   saturday, September 10, 2022
 *      \brief  arrays
 * 
 *************************************************************************/

#include <iostream>
#include <cstdint>

#define SIZE    10

using namespace std;

bool isEmpty();
void push();
void pop();
void showTop();
void displayStack();

int x[SIZE];
int top = -1;   // increment by 1 when the stack has space
int value;
int menu;   // control menu

int main(){

    typedef void (*ptrStackFunction)(void);
    ptrStackFunction ptrFuc[4] = { displayStack, showTop, push, pop };

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
            }
            ptrFuc[menu]();
            cout << "\n\n\n\n\n";
        } else {
            cout << "La opcion que escogio no existe" << endl;
        }
    }
    

} // End main


bool isEmpty(){
    if(top == -1){
        return true;
    } else {
        return false;
    }
}


void push(){
    if( top == (SIZE-1)){
        cout << "Stack is full!" << endl;
    } else{
        top++; // increment stack first
        x[top] = value; // pass the value into the first position empty of the stack
    }
}

void pop(){
    if(isEmpty()){
        cout << "Stack is empty" << endl;
    } else {
        top--;
    }
    
}

void showTop(){
    if(isEmpty()){
        cout << "Stack is empty" << endl;
    } else {
        cout << "Element in a Top is: " << x[top] << endl;
    }
}

void displayStack(){
    if(isEmpty()){
        cout << "Stack is empty" << endl;
    } else {
        for(int i = 0; i <= top; i++)
            cout << x[i] << endl;
    }
}




