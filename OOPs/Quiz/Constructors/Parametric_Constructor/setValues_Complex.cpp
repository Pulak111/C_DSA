// Pirnt Complex number using Parametric constructor

#include <iostream>
using namespace std;

class Complex
{
    int a ,b;

public:
    Complex(int, int);
    void PrintComplex();
};

Complex ::Complex(int x, int y)
{
    a = x; 
    b = y;
}

void Complex :: PrintComplex()
{
    cout << "The complex number is " << a << "+" << b<< "i." << endl;
}
int main()
{
    Complex c1(4,5);
    c1.PrintComplex();

    Complex c2(8,7);
    c2.PrintComplex();

    return 0;
}