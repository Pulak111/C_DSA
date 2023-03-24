#include <iostream>
using namespace std;

class Complex
{friend  Complex sumComplex (Complex, Complex);
    int a, b;

public :
    void setNumber(int, int);
    void printNumber();
};

void Complex :: setNumber(int a1, int b1)
{
    a = a1;
    b = b1;
}

void Complex :: printNumber()
{
    cout << "The sum of the given complex number is " << a << "+" << b << "i." << endl;
}

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a+o2.a) , (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;

    c1.setNumber(6, 5);
    c2.setNumber(7, 4);
    sum = sumComplex(c1, c2);
    sum.printNumber();
}