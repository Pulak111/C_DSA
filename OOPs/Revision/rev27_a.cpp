// Friend Class Calculator
#include <iostream>
using namespace std;

class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        int c = a + b;
        return c;
    }
    int sumRealComplex(Complex, Complex, Complex);
    int sumImagComplex(Complex, Complex, Complex);
};

class Complex
{
    int a, b;
    friend int Calculator ::sumImagComplex(Complex, Complex, Complex);
    friend int Calculator ::sumRealComplex(Complex, Complex, Complex);

public:
    void setNumber(int x, int y)
    {
        a = x;
        b = y;
    }
    void printComplex()
    {
        cout << "The complex number is " << a << " + " << b << "i." << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2, Complex o3)
{
    return (o1.a + o2.a + o3.a);
}
int Calculator ::sumImagComplex(Complex o1, Complex o2, Complex o3)
{
    return (o1.b + o2.b + o3.b);
}

int main()
{
    Complex o1, o2, o3;
    o1.setNumber(4, 5);
    o1.printComplex();

    o2.setNumber(8, 6);
    o2.printComplex();

    o3.setNumber(7, 4);
    o3.printComplex();

    Calculator sum;
    int realsum = sum.sumRealComplex(o1, o2, o3);
    cout << "The sum of the real parts of the given complexes are " << realsum << "." << endl;
    int imagsum = sum.sumImagComplex(o1, o2, o3);
    cout << "The sum of the imaginary part of the given complexes are " << imagsum << "." << endl;

    return 0;
}