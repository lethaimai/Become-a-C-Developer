#include <iostream>
#include <vector>
#include <array>

using namespace std;

// Declare functions

class DateClass
{
private:
    // In general members of class are ussually made private
    int m_day;
    int m_month;
    int m_year;
    
public:

    void setDate(int day, int month, int year) // members functions are usually made public
    {
        m_day= day;
        m_month= month;
        m_year= year;
    }

    void print()
    {
        std::cout<< m_day << "/" << m_month << "/" << m_year;
    }

    // create function named copy to copy all the data from object Date

    void copy(const DateClass& Date)
    {
        m_day= Date.m_day;
        m_month= Date.m_month;
        m_year= Date.m_year;
    }

};


// Main
int main()
{
    DateClass today; // create an object class named today
    today.setDate(25, 02, 2020); // set all value to the object

    // Create a new object
    DateClass newday;
    // Copy all the value from object today to the object newday 
    newday.copy(today);
    newday.print();

 


    return 0;
}

// Define functions



