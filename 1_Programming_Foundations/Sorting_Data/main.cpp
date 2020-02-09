#include <iostream>
#include <array>
#include <vector>


using namespace std;

// Declare functions

template <typename T>
void bubbleSort(std::vector<T>& vectorArray);

template <typename T>
void disPlay(std::vector<T> vectorArray);






// Main Function

int main()
{
    // Define a vector array
    std::vector<int> vectorA= {23, 5, 18, 7, 1, 3, 6};

    // Bubble Sort
    bubbleSort(vectorA);
    disPlay(vectorA);






    return 0;
}



// Define Function

/// The Bubble Sort Algorithm

template <typename T>
void bubbleSort(std::vector<T>& vectorArray)
{
    for (int k=0; k< vectorArray.size()-1; k++)
    {
        for(int i=0; i< vectorArray.size()-2; i++)
        {
            if (vectorArray[i] > vectorArray[i+1])
            {
                swap(vectorArray[i], vectorArray[i+1]);
            }
        }
    }
}




/// print vector
template <typename T>
void disPlay(std::vector<T> vectorArray)
{
    for (int i=0; i< vectorArray.size()-1; i++)
    {
        std::cout << vectorArray[i] << "\t";
    }
}


