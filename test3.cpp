#include <iostream>
using namespace std;
class Complex
{
public:
    float real;
    float imag;
    void setValue(float r, float i)
    {
        real = r;
        imag = i;
    }
    void sumreal(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
    }
    void sumimag(Complex c1, Complex c2)
    {
        imag = c1.imag + c2.imag;
    }
};
int main()
{
    Complex c1, c2, c3;

    float r1;
    float i1;
    float r2;
    float i2;

    cout << "Enter real part of first complex number: ";
    cin >> r1;
    cout << "Enter imaginary part of the second complex number: ";
    cin >> i1;

    cout << "Enter imaginary part of second complex number: ";
    cin >> r2;
    cout << "Enter imaginary part of second complex number: ";
    cin >> i2;

 

    return 0;
}