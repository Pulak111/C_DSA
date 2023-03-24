#include <iostream>
using namespace std;

class Y;

class X
{
    int num1;

    friend void add(X, Y);

public:
    void setVal(int a)
    {
        num1 = a;
    }
};

class Y
{
    int num2;

public:
    void setVal(int b)
    {
        num2 = b;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "The sum of the objects of X and Y is " << (o1.num1 + o2.num2) << endl;
}

int main()
{
    X A;
    A.setVal(5);

    Y B;
    B.setVal(9);

    add(A, B);
    return 0;
}
