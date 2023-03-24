// ****** Complex No sum *****
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setData(int, int);
    void printComplex();
    void sumComplex(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
};

void Complex :: setData(int a1, int b1)
{
    a = a1;
    b =b1;
}

void Complex :: printComplex()
{
    cout << "The complex number is " << a << "+" << b <<"i."<<endl;
}

int main()
{
    Complex A1, A2, sum;
    A1.setData(6,5);
    A1.printComplex();

    A2.setData(5,7);
    A2.printComplex();

    sum.sumComplex(A1, A2);
    sum.printComplex();

    return 0;
}