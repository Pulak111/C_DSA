// Complex number

#include <iostream>
using namespace std;

class Complex
{
    int imag, real;

public:
    void setData(int, int);
    void printComplex();
    friend Complex sumComplex(Complex, Complex);
};

void Complex ::setData(int a, int b)
{
    real = a;
    imag = b;
}

void Complex ::printComplex()
{
    cout << "The complex number is " << real << " + " << imag << "i." << endl;
}

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setData((o1.real + o2.real), (o1.imag + o2.imag));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setData(5, 6);
    c1.printComplex();

    c2.setData(7, 5);
    c2.printComplex();

    sum = sumComplex(c1, c2);
    sum.printComplex();

    return 0;
}