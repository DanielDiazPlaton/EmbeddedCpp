/*************************************************************************
 * 
 *      \author Daniel Diaz Platon
 *      \date   saturday, September 10, 2022
 *      \brief  struct and union
 * 
 *************************************************************************/

#include <iostream>
#include <cstdint>

using namespace std;

void foo(){
    cout << "\n\n\t\t\tRunning in struct..." << endl;
}

void foo2(){
    cout << "\n\n\t\t\tRunning in union..." << endl;
}

int main(){

    typedef void (*ptr_function) (void);

/*********************
 *  STRUCT
 *********************/
    struct  
    {
        /* data */
        uint16_t flag;
        uint16_t count;
        uint32_t flag2;
        ptr_function prtFunc;
    } LED;
    
/*********************
 *  UNION
 *********************/
    union  
    {
        /* data */
        uint16_t flag;
        uint16_t count;
        uint32_t flag2;
        ptr_function prtFunc;
    } LED2;

    LED = {
        2,
        2,
        3,
        foo

    };

    LED2.flag = 2;
    LED2.flag2 = 3;
    LED2.count = 4;
    LED2.prtFunc = foo2;


/***********************
 * STRUCT
 ***********************/
    LED.prtFunc();
    cout <<  "\t\t\tSTRUCT" << endl;
    cout <<  "\n\t\t\t" << sizeof(LED) << endl;
    cout <<  "\n\t\t\t" << &LED.flag << endl;
    cout <<  "\n\t\t\t" << &LED.flag2 << endl;
    cout <<  "\n\t\t\t" << &LED.count << endl;
    cout <<  "\n\t\t\t" << &LED.prtFunc << endl;

/***********************
 * UNION
 ***********************/
    LED2.prtFunc();
    cout <<  "\t\t\tUNION" << endl;
    cout <<  "\n\t\t\t" << sizeof(LED2) << endl;
    cout <<  "\n\t\t\t" << &LED2.flag << endl;
    cout <<  "\n\t\t\t" << &LED2.flag2 << endl;
    cout <<  "\n\t\t\t" << &LED2.count << endl;
    cout <<  "\n\t\t\t" << &LED2.prtFunc << endl;
    

} // End main