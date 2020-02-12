#include <iostream>
#include <array>
#include <vector>




using namespace std;

// Declare Functions
template <typename T>
int unOrderedSearch(std::vector<T> arrayVector, int value);

template <typename T>
int BinarySearch(std::vector<T> arrayVector, int n, int value);

template <typename T>
int findMax(std::vector<T> arrayVector);

template <typename T>
void disPlay(std::vector<T> vectorArray);


// Main Functions

main()
{
    std::vector<int> arrayVector = {6, 8, 19, 20, 123, 78, 49, 53, 56};
    
    std::cout << findMax(arrayVector) << endl;
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


/// finding max value in a list recursively
template <typename T>
int findMax(std::vector<T> arrayVector)
{
    if(arrayVector.size()==1)
    {
        return arrayVector[0];
    }

    int op1= arrayVector[0];
    std::vector<T> newVector (arrayVector.cbegin() + 1, arrayVector.cend());
    // disPlay(newVector);
    int op2= findMax(newVector);

    if (op1>op2)
    {
        return op1;
    }
    else
    {
        return op2;
    }
    
}


/// print vector
template <typename T>
void disPlay(std::vector<T> vectorArray)
{
    for (int i=0; i< vectorArray.size(); i++)
    {
        std::cout << vectorArray[i] << "\t";
    }
    std::cout << "\n";
}