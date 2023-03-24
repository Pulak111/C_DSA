#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public : 
    void setData(int, int);
    void printComplex();
    void sumComplex(Complex o1, Complex o2);
};

void Complex :: setData(int a1, int b1)
{
    a = a1; 
    b = b1;
}

void Complex :: printComplex()
{
    cout << "The complex number is " << a << "+" << b << "i." << endl;
}

void Complex :: sumComplex(Complex o1, Complex o2)
{
    a = (o1.a + o2.a);
    b = (o1.b + o2.b);
}

int main()
{
    Complex a1, a2, sum;
    a1.setData(6, 7);
    a2.setData(5, 4);
    sum.sumComplex(a1, a2);

    a1.printComplex();
    a2.printComplex();
    sum.printComplex();
}