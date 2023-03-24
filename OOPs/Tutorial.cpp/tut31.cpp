// Constructor Overlappint

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex();
    Complex(int);
    Complex(int, int);

    void printNum();
};

Complex ::Complex()
{
    a = 0;
    b = 0;
}

Complex ::Complex(int x)
{
    a = x;
    b = 0;
}

Complex :: Complex(int x, int y)
{
    a = x;
    b = y;
}

void Complex ::printNum()
{
    cout << "The complex number is " << a << "+" << b << "i." << endl;
}

int main()
{
    Complex c1(4,5);
    Complex c2(4);
    Complex c3;
    

    c1.printNum();
    c2.printNum();
    c3.printNum();
}