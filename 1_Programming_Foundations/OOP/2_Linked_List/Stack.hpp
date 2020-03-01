#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <cstdlib>

using namespace std;

class nodeProcess
{
private:
    struct Node
    {
        int value;
        Node* next;
    };
    Node* head;
    
public:
    void insertNode(int value);
    void printNode();
    void deleteNode();

    nodeProcess();
    ~nodeProcess();
};



/*
class nodeProcess()
{
private:
    struct Node
    {
        int value;
        Node* next;
    };

    typedef Node* nodePtr;

    void insertNode(nodePtr& head ,int value);

    void printNode();
}

*/




#endif