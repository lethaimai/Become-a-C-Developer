#ifndef SORT_HPP_INCLUDED
#define SORT_HPP_INCLUDED

// comment or uncomment this line to show/ unshow the statement
#define ENABLE_DEBUG 

#include <iostream>
#include <vector>
#include <array>
#include "sort.cpp"


template<typename T>
void bubbleSort(std::vector<T>& arrayVector);


template<typename T>
void displayVect(std::vector<T> arrayVector);


#endif