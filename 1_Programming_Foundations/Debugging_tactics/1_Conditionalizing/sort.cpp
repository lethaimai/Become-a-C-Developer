#include <iostream>
#include <vector>
#include <array>
#include "sort.hpp"

using namespace std;

template<typename T>
void bubbleSort(std::vector<T>& arrayVector)
{
#ifdef ENABLE_DEBUG
std::cerr << "bubbleSort() called\n";
#endif

    for (int k= 0; k < arrayVector.size()-2; k++)
    {
        for (int i=0; i< arrayVector.size()-1; i++)
        {
            if (arrayVector[i]> arrayVector[i+1])
            {
                swap(arrayVector[i], arrayVector[i+1]);
            }
        }
     }
}



template<typename T>
void displayVect(std::vector<T> arrayVector)
{
#ifdef ENABLE_DEBUG
std::cerr << "displayVect() called\n";
#endif

    for(int i=0; i< arrayVector.size(); i++)
    {
        std::cout << arrayVector[i] << "\t";
    }
    std::cout << "\n";
}


