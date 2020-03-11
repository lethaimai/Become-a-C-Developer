#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    // How to define apointer

    //// 1.
    int value= 5; // create a variable named value in Stack;
    int *ptr; // create a pointer in Stack

    ptr= &value;   // ptr value is the address(&) of value


    ///2. you can also define this in one statement
    int valueNew= 3;
    int *ptrNew= &valueNew;


    ///3. You can also declare a pointer while assigning its address a value
    int *ptrAsk= new int(21); // In this case the 21 value will be created on the HEAP while pointer ptrAsk is still on the Heap
    // To understand more about Heap and Stack, see the picture in file Readme

    /// Display the value of pointer

    std::cout<< "The value of pointer is: " << ptr << " and " << ptrNew <<endl;

    std::cout<< "Pointer is pointing to value: " << *ptr << " and " << *ptrNew<< endl;  // Deference pointer to take the value that pointer is pointing to
}