// Print Complex number using default Constructor
#include <iostream>
using namespace std;

class Complex
{
    int a,b;

public:
    Complex();
    void printComplex();
};

Complex ::Complex()
{
    a = 0;
    b = 0;
}

void Complex ::printComplex()
{
    cout << "The complex number is " << a << "+" << b << "i." << endl;
}

int main()
{
    Complex c1, c2, c3;

    c1.printComplex();
    c2.printComplex();
    c3.printComplex();

return 0;
}