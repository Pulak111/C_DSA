#include <iostream>
using namespace std;

class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);


    int sumImagComplex(Complex, Complex);
};
class Complex
{
    int a, b;
    // Individually declaring function as a friend;
    /*friend int Calculator ::sumRealComplex(Complex, Complex);
    friend int Calculator ::sumImagComplex(Complex, Complex);*/

    //
    friend class Calculator;

public:
    void setNum(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void printNum()
    {
        cout << "The complex number is " << a << "+" << b << "i." << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumImagComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setNum(1, 4);
    o1.printNum();
    o2.setNum(5, 7);
    o2.printNum();
    Calculator calc;
    int resReal = calc.sumRealComplex(o1, o2);
    cout << "The sum of real parts of the complex o1 & o2 is " << resReal << "." << endl;
    int resImag = calc.sumImagComplex(o1, o2);
    cout << "The sum of imaginary part of the complex o1 & o2 is " << resImag << "." << endl;
    return 0;
}
