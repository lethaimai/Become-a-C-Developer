#include <iostream>
#include <cstdlib>

using namespace std;

// Create a class with constructor, normally a constructor
// should be defined at the public space

class City
{
    private:
        string nameCity;
        int numberPopulation;
    
    public:
        // Here is Constructor
        City(string nameCityNew, int numberPopulationNew)
        {
            nameCity= nameCityNew;
            numberPopulation= numberPopulationNew;
        }


        void Display()
        {
            std::cout << "Name of City: " << nameCity <<endl;
            std::cout << "Number of Population: " << numberPopulation <<endl;
        }
};




int main()
{
    // Create an Object with class City, the constructor will be automatically called
    City Danang("Danang", 137);
    Danang.Display();

    return 0;
}