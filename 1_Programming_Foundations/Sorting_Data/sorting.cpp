#include <iostream>
#include <array>
#include <vector>


using namespace std;

// Declare functions

template <typename T>
void bubbleSort(std::vector<T>& vectorArray);

template <typename T>
void disPlay(std::vector<T> vectorArray);

template<typename T>
void mergeSort(std::vector<T>& vectorArray);

template <typename T>
void merge(std::vector<T>& vectorArray, std::vector<T> leftArray, std::vector<T> rightArray);

template <typename T>
int partition(std::vector<T>& vectorArray, int low, int high);

template<typename T>
void quickSort(std::vector<T>& vectorArray, int low, int high);






// Main Function

int main()
{
    // Define a vector array
    std::vector<int> vectorA= {20, 6, 8, 53, 23, 87, 42, 19};

    // Bubble Sort
    ///bubbleSort(vectorA);
    ///disPlay(vectorA);


    // Merge Sort
    mergeSort(vectorA);
    

    // Quick Sort
    //quickSort(vectorA, 0, vectorA.size());
    disPlay(vectorA);


   
    
    return 0;
}



// Define Function

/// The Bubble Sort Algorithm

template <typename T>
void bubbleSort(std::vector<T>& vectorArray)
{
    for (int k=0; k< vectorArray.size()-2; k++)
    {
        for(int i=0; i< vectorArray.size()-1; i++)
        {
            if (vectorArray[i] > vectorArray[i+1])
            {
                swap(vectorArray[i], vectorArray[i+1]);
            }
        }
    }
}


// Merge Sort Algorithm

template<typename T>
void mergeSort(std::vector<T>& vectorArray)
{
    if (vectorArray.size()>1)
    {
        int mid= int(vectorArray.size()/2);

        std::vector<T> leftArray (vectorArray.cbegin(), vectorArray.cbegin() + mid);
        //std::cout << "Left Array is: \n";
        //disPlay(leftArray);
        std::vector<T> rightArray (vectorArray.cbegin() + mid, vectorArray.cend());
        //std::cout << "Right Array is: \n";
        //disPlay(rightArray);

        mergeSort(leftArray);
        mergeSort(rightArray);

        merge(vectorArray, leftArray, rightArray);

    }


}


template <typename T>
void merge(std::vector<T>& vectorArray, std::vector<T> leftArray, std::vector<T> rightArray)
{
    int i= 0; // index from leftArray
    int j= 0; // index from rightArray
    int k= 0; // index from vectorArray

    while(i< leftArray.size() && j<rightArray.size())
    {
        if (leftArray[i]<rightArray[j])
        {
            vectorArray[k]= leftArray[i];
            i++;
        }

        else
        {
            vectorArray[k]= rightArray[j];
            j++;
        }
        k++;
    }

    // insert the remainder elements from left or right vector
    while(i< leftArray.size())
    {
        vectorArray[k]= leftArray[i];
        i++;
        k++;
    }

    while(j< rightArray.size())
    {
        vectorArray[k]= rightArray[j];
        j++;
        k++;
    }

}




// Quick Sort includes 2 function: Partitioning and quickSort functions

/// Paritioning 
template <typename T>
int partition(std::vector<T>& vectorArray, int low, int high)
{
    int i= low; // index for low values
    int j= high; // index for high values
    int pivotValue= vectorArray[low];
    
    
    while (i < j)
    {
        do{
            i++;
        }while (vectorArray[i]< pivotValue && i< high);

        //std::cout << "i= " <<i << std::endl;
        do{
            j--;
        }while (vectorArray[j]> pivotValue && j>low);

        //std::cout << "j= "<<j<< std::endl;

        if (i<j)
        {
            swap(vectorArray[i], vectorArray[j]);   
        }
    }
    swap(vectorArray[low], vectorArray[j]);
    return j;    
}


template<typename T>
void quickSort(std::vector<T>& vectorArray, int low, int high)
{
    if (low<high)
    {
        int pivotPos= partition(vectorArray, low, high);

        quickSort(vectorArray, low, pivotPos);
        quickSort(vectorArray, pivotPos+1, high);

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


