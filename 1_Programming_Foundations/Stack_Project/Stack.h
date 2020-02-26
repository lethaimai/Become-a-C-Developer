#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <string>

using namespace std;

class Stack
{
private:
    // Create an struct Item
    struct Item
    {
        string name;
        int value;
        Item* prev;
    };

    // Create a stack pointer
    Item* stackPtr;
    
public:
    void Push(string name, int value);
    void Pop();
    void Print();

    Stack();
    ~Stack();
};




#endif