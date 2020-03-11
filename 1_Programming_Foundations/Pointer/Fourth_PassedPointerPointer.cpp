/*
    In this lesson you learn about passing a pointer of pointer into a function. You will see when you pass a pointer of pointer into a function and you want to modify this 
    pointer value, it does work. Basically passed pointer of pointer into function is also like passed pointer reference.  See the picture in readme 
*/
#include <iostream>
#include <cstdlib>

using namespace std;

// Declare a function
int globalValue= 42;

// Passed pointer of pointer  into a function
void changeValuePointer(int** ptr)
{
    *ptr= &globalValue;
    std::cout << "Function is called\n";
    std::cout << "Pointer is pointing to value: " << **ptr << " in the function\n";
}



// Main function
int main()
{
    int var= 23;
    int* ptr_to_var= &var;

    std::cout<< "Pointer is pointing to value: " << *ptr_to_var<< endl;

    changeValuePointer(&ptr_to_var);  // passed the address of pointer named ptr_to_var into function

    std::cout<< "Pointer is pointing to value: " << *ptr_to_var;
         
    return 0;
}

