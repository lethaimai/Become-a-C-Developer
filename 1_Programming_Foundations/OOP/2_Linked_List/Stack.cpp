#include <iostream>
#include <cstdlib>

#include "Stack.hpp"

using namespace std;


nodeProcess::nodeProcess()
{
    // Create a Srtuctor and initialize the value to this constructor
    head= new Node;
    head->value= 10;
    head->next= NULL;
}


nodeProcess::~nodeProcess()
{
    Node* p1;

    while (head!= NULL)
    {
        p1= head;
        head= head->next;
        p1->next= NULL;
        delete p1;
    }
}


void nodeProcess::insertNode(int value)
{
    Node* tmp;
    tmp= new Node;
    tmp->value= value;
    tmp->next= head;
    head= tmp;
}

void nodeProcess::deleteNode()
{
    Node* tmp= head;
    head= head->next;
    tmp->next= NULL;
    delete tmp;
}

void nodeProcess::printNode()
{
    Node* tmp= head;
    while (tmp!= NULL)
    {
        std::cout << tmp->value << endl;
        tmp= tmp->next;
    }
}


/*
void insertNode(nodePtr& head ,int value)
{
    nodePtr tmp;
    tmp= new Node;
    tmp->value= value;
    tmp->next= head;
    head= tmp; 
    tmp->value= NULL;
    delete tmp;    
}

*/