#include <iostream>
using namespace std;

class Complex
{
    int a,b;

public:
    Complex ()
    {
        a = 0;
        b = 0;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex(int x , int y)
    {
        a = x;
        b = y;
    }
    void printComplex();
};

void Complex ::printComplex()
{
    cout << "The complex number is " << a << " + " << b << "i." << endl;
}

int main()
{
    Complex c1(5,6);
    c1.printComplex();

    Complex c2(5);
    c2.printComplex();

    Complex c3;
    c3.printComplex();

    return 0;
}