#include <iostream>
using namespace std;

class Triangle
{
public:
    int area(int b, int h)
    {
        return (1  * b * h)/2;
    }
};

int main()
{  
    Triangle isoceles;
    int b;
    int h;
    cout << "Enter base: ";
    cin >> b;
    cout << "Enter height: ";
    cin >> h;

    cout << "The area of Triangle with height " << h << " and base " << b << " is " << isoceles.area(b, h);
    return 0;
}