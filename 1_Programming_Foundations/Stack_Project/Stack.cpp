#include <cstdlib>
#include <iostream>

#include "Stack.h"

using namespace std;

// Define constructor
Stack::Stack()
{
    // create an stack if the stack did not exist
    stackPtr= NULL;
}

// Define deconstructor
Stack::~Stack()
{
    // Destructor will be called automatically when it the programm ends
    // Do basically it works like this: p1 is alway below the p2 , and what the p2 is pointing to that will be deleted with "delete" command 
    Item* p1= stackPtr;
    Item* p2;

    while(p1 != NULL)
    {
        p2=p1;
        p1=p1->prev;
        p2->prev= NULL; // It is not neccessary
        delete p2;
    }

}

void Stack::Push(string new_name, int new_value)
{
    Item* newItem;
    newItem= new Item;
    newItem->name= new_name;
    newItem->value= new_value;
    newItem->prev= stackPtr;
    stackPtr= newItem;
}


void Stack::Print()
{
    Item* tmp= stackPtr;
    while (tmp!= NULL)
    {
        std::cout << tmp->name << "\t" << tmp->value << endl;
        tmp= tmp->prev;
    }
    
}

void Stack::Pop()
{
    // If the stack is empty
    if (stackPtr==NULL)
    {
        cout<< "There is nothing on the stack\n";
    }
    else
    {
        Item* tmp= stackPtr;
        stackPtr= tmp->prev;
        delete tmp;
    }
    
}