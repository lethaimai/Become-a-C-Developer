#include <iostream>
#include <array>
#include <vector>


using namespace std;

// declare functions
void countDown(int num);
int power(int num, int pwr);
int factorial(int num);
void bubleSort(std::vector<int> arrayNum);

template <typename T>
void mergeSort(std::vector<T>& arrayVector);

template <typename T>
void mergeVector(std::vector<T>& arrayVector, std::vector<T>& leftArray, std::vector<T>& rightArray);

template <typename T>
void display(std::vector<T> arrayVector);

template <typename T>
int partitionSort(std::vector<T>& arrayVector, int lowI, int highI);

template <typename T>
void quickSort(std::vector<T>& arrayVector, int lowI, int highI);


int main()
{
    std::vector<int> vectorNum= {12,5,34,56,21,3};

    //std::vector<int> newVector= mergeSort(vectorNum);
    //mergeSort(vectorNum);

    quickSort(vectorNum, 0, vectorNum.size()-1);
    display(vectorNum);



    return 0;
}

void countDown(int num)
{
    if (num==0)
    {
        std::cout<< "done\n";
    }
    else
    {
        std::cout<< num <<endl;
        countDown(num-1);
    }
}

int power(int num, int pwr)
{
    if (pwr==0)
        return 1;
    return num*power(num, pwr-1);;
}

int factorial(int num)
{
    if (num==0)
        return 1;
    return num* factorial(num-1);
}


void bubleSort(std::vector<int> &arrayNum) // passed by reference
{
    for (int k=1; k< (arrayNum.size()-1); k++)
    {
        for (int i=0; i < arrayNum.size()-2; i++)
        {
            if (arrayNum[i]> arrayNum[i+1])
            {
                int c= arrayNum[i];
                arrayNum[i]= arrayNum[i+1];
                arrayNum[i+1]= c;
            }
        }
    }
}




template <typename T>
void mergeSort(std::vector<T>& arrayVector)
{
    if (arrayVector.size()>1)
    {
        int mid= int(arrayVector.size()/2);
        std::cout << " mid= " << mid;

        std::vector<T> leftArray(arrayVector.cbegin(), arrayVector.cbegin()+mid);
        std::cout << "\nLeft array is: \n";
        display(leftArray);

        std::vector<T> rightArray(arrayVector.cbegin()+mid, arrayVector.cend());
        std::cout << "\nRight array is: \n";
        display(rightArray);

        mergeSort(leftArray);
        mergeSort(rightArray);

        mergeVector(arrayVector, leftArray, rightArray);

    }
}

template <typename T>
void mergeVector(std::vector<T>& arrayVector, std::vector<T>& leftArray, std::vector<T>& rightArray)
{
    int i=0; // index of left array
    int j=0; // index of right array
    int k=0; // index of array Vector

    while(i<leftArray.size() && j<rightArray.size())
    {
        if (leftArray[i]<rightArray[j])
        {
            arrayVector[k]= leftArray[i];
            i+=1;
        }
        else
        {
            arrayVector[k]= rightArray[j];
            j+=1;
        }
        k+=1;
    }

    while(i< leftArray.size())
    {
        arrayVector[k]= leftArray[i];
        i+=1;
        k+=1;
    }

    while(j<rightArray.size())
    {
        arrayVector[k]= rightArray[j];
        j+=1;
        k+=1;
    }
    std::cout << " Merge the vector: \n";
    display(arrayVector);
}

template <typename T>
void display(std::vector<T> arrayVector)
{
    for(int i=0; i< arrayVector.size(); i++)
    {
        std::cout << arrayVector[i] << "\t";
    }
    std::cout <<endl;
}

template <typename T>
int partitionSort(std::vector<T>& arrayVector, int lowI, int highI)
{
    int pivot= arrayVector[lowI];
    int i= lowI+1;
    int j= highI;

    while (i<j)
    {
        while(arrayVector[i]<pivot)
        {
            i++;
        }

        while(arrayVector[j]>pivot)
        {
            j--;
        }

        if (i<j)
            swap(arrayVector[i], arrayVector[j]);
    }
    swap(arrayVector[lowI], arrayVector[j]);
    return j;
}


template <typename T>
void quickSort(std::vector<T>& arrayVector, int lowI, int highI)
{
    if (lowI<highI)
    {
        int pivotI= partitionSort(arrayVector, lowI, highI);
        quickSort(arrayVector, lowI, pivotI-1);
        quickSort(arrayVector, pivotI+1, highI);
    }
}
