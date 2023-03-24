#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setData(int num1, int num2)
    {
        a = num1;
        b = num2;
    }

    void getData()
    {
        cout << "The complex number is " << a << "+" << b << "i." << endl;
    }
};

class Calculator
{
public:
    int add(int c, int d){
        return (c+d);
    }
    int sumRealComplex(Complex, Complex);
    
};

int main()
{
    Complex o1,o2;
    o1.setData(7, 8);
    o1.getData();
    
    o2.setData(6,7);
    o2.getData();

    Calculator calc;
    calc.sumRealComplex(o1, o2);
    return 0;
}