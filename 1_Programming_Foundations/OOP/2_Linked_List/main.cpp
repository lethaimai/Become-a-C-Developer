#include <iostream>
#include <cstdlib>
#include "Stack.hpp"

using namespace std;



int main()
{
    nodeProcess First;
    First.insertNode(20);
    First.insertNode(30);
    First.insertNode(40);
    First.insertNode(50);

    First.deleteNode();
    First.deleteNode();
    
    First.printNode();

    
    





    return 0;
}