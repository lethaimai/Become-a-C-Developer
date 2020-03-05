#include <iostream>
#include <cstdlib>

using namespace std;

// Create a simple class
class smallobj
{
private:
    int somedata;
public:
    void setData(int d)
    {
        somedata= d;
    }

    void showData()
    {
        std::cout<< "Data is: " << somedata << endl;
    }
};



int main()
{
    smallobj s1, s2; // define two objects of class smallobj
    
    s1.setData(103);
    s2.setData(234);

    s1.showData();
    s2.showData();

    return 0;
}