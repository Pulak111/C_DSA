#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setData(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void printNum()
    {
        cout << "The complex no. is " << a << "+" << b << "i." << endl;
    }
    friend complex sumComplex(complex O1, complex O2);
};
complex sumComplex(complex O1, complex O2){
    complex O3;
    O3.setData((O1.a+O2.a),(O1.b+O2.b));
    return O3;
}
int main()
{
    complex C1,C2,Sum;
    C1.setData(5, 6);
    C1.printNum();

    C2.setData(6,5);
    C2.printNum();

    Sum = sumComplex(C1,C2);
    Sum.printNum();
    return 0;
}