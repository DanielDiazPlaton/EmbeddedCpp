

#ifndef _STACK_MEMORY_H
#define _STACK_MEMORY_H

#define SIZE    10

class Stack_Memory {
    public:
        void setValue(int);
        bool isEmpty(void);
        void push(void);
        void pop(void);
        void showTop(void);
        void displayStack(void);
    private:
        int x[SIZE];
        int top = -1;   // increment by 1 when the stack has space
        int value;
};      // End Class Stack_Memory

#endif          // _STACK_MEMORY_H