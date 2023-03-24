// Priting different format of Complex Number.

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex();
    Complex(int);
    Complex(int, int);
    void print_Complex();
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

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}

void Complex ::print_Complex()
{
    cout << "The complex number is " << a << "+" << b << "i." << endl;
}

int main()
{
    Complex c1(5,6);
    c1.print_Complex();

    Complex c2(5);
    c2.print_Complex();

    Complex c3;
    c3.print_Complex();

    return 0;
}