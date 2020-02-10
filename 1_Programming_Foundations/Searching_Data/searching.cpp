#include <iostream>
#include <array>
#include <vector>

using namespace std;

// Declare Functions
template <typename T>
int unOrderedSearch(std::vector<T> arrayVector, int value);

template <typename T>
int BinarySearch(std::vector<T> arrayVector, int n, int value);



// Main Functions

main()
{
    std::vector<int> arrayVector = {6, 8, 19, 20, 23, 41, 49, 53, 56};
    
    std::cout << BinarySearch(arrayVector, arrayVector.size(), 41) << endl;
    return 0;
}

// Define Functions

/// searching on an ordered list
template <typename T>
int BinarySearch(std::vector<T> arrayVector, int n, int value) // n is the size of the arrayVector
{
    int start= 0;
    int end= n-1;

    while(start<=end)
    {
        int mid= (start +end)/2;
        if(value== arrayVector[mid])
        {
            return mid;
        }
        else if (value < arrayVector[mid])
        {
            end= mid-1;
        }
        else
        {
            start= mid+1;
        }
    }
    
}

/// searching on an unorered list
template <typename T>
int unOrderedSearch(std::vector<T> arrayVector, int value)
{
    for (int i = 0; i < arrayVector.size(); i++)
    {
        if (arrayVector[i] == value)
        {
            return i;
        }
    }
    return 0;
}
