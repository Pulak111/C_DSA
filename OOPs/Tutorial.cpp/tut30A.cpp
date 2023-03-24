#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor Declaration
    void printNum()
    {
        cout << "Your complex number is " << a << "+" << b << "i." << endl;
    }
};

Complex ::Complex(int a1, int b1) // This is a parameterized constructor as it takes 2 parameters here.
{
    a = a1;
    b = b1;
}

int main()
{
    // Implicit Call
    Complex a(4, 5);
    a.printNum();

    // Explicit Call
    Complex b = Complex(5, 7);
    b.printNum();

    return 0;
}