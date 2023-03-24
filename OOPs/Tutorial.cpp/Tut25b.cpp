// ****** Complex Number ********
#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNumber()
    {
        cout << "The complex number is " << a << " + " << b << "i ." << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(4, 9);
    c1.printNumber();

    c2.setData(7, 8);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}