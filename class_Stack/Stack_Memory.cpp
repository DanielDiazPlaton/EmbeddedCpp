#include <iostream>
#include "Stack_Memory.h"

void Stack_Memory::setValue(int val){
    value = val;
}

bool Stack_Memory::isEmpty(){
    if(top == -1){
        return true;
    } else {
        return false;
    }
}

void Stack_Memory::push(){
    if( top == (SIZE-1)){
        std::cout << "Stack is full!" << std::endl;
    } else{
        top++; // increment stack first
        x[top] = value; // pass the value into the first position empty of the stack
    }
}

void Stack_Memory::pop(){
    if(isEmpty()){
        std::cout << "Stack is empty" << std::endl;
    } else {
        top--;
    }
}

void Stack_Memory::showTop(){
    if(isEmpty()){
        std::cout << "Stack is empty" << std::endl;
    } else {
        std::cout << "The Top Element is: " << x[top] << std::endl;
    }
}

void Stack_Memory::displayStack(){
    if(isEmpty()){
        std::cout << "Stack is empty" << std::endl;
    } else {
        for(int i = 0; i <= top; i++)
            std::cout << x[i] << std::endl;
    }
}