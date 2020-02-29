#include <iostream>
#include <cstdlib>

using namespace std;

// Declare Functions
int fibo(int numb);
int Factorial(int numb);



// Main
int main()
{
    // 1. With Fibonacci

    /*
    int n=0;
    std::cout << "How many numbers?" << endl;
    std::cin >> n;

    for(int i=0; i<n; i++)
    {
        std::cout << fibo(i) << " "; 
    }
    */

    // find the number-th in the fibonacci , dont have to show the array 

    /*
    int i=3;
    std::cout<< fibo(7) <<endl;
    */
   

    // 2. Factorial
    std::cout <<Factorial(5);


    return 0;
}



// Define Functions

//// 1. With Fibonacci

int fibo(int numb)
{
    if (numb==1 || numb==0)
    {
        return numb;
    }

    return fibo(numb-1) +fibo(numb-2);
}


/// 2. With Factorial

int Factorial(int numb)
{
    if (numb==0 || numb==1)
    {
        return 1;
    }

    return numb* Factorial(numb-1);
}
