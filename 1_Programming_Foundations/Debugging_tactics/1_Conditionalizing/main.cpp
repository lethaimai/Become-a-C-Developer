#include <iostream>
#include <vector>
#include "sort.hpp"

using namespace std;
int main()
{

    std::vector<int> arrayA=  {20, 6, 8, 19, 23, 87, 42, 53};
 
    bubbleSort(arrayA);
    displayVect(arrayA);



    return 0;
}