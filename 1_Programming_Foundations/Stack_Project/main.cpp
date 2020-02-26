#include <iostream>

#include "Stack.h"

using namespace std;

int main()
{
    // Create a stack object
    Stack mai;
    
    mai.Push("MAI", 23);
    mai.Push("SUSI", 22);
    mai.Push("ANNI", 26);

    mai.Pop();
    mai.Pop();
    mai.Pop();
    mai.Pop();
    mai.Print();
}