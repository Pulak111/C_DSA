#include <iostream>
using namespace std;

class Y;

class X
{
    int num1;

public:
    void setData(int a)
    {
        num1 = a;
    }

    friend void add(X, Y);
};

class Y
{
    int num2;

    friend void add(X, Y);

public:
    void setData(int b)
    {
        num2 = b;
    }
};

void add(X o1, Y o2)
{
    cout << "Product of data of X and Y gives " << (o1.num1 * o2.num2) << "." << endl;
}

int main()
{
    X o1;
    o1.setData(7);

    Y o2;
    o2.setData(8);

    add(o1, o2);

    return 0;
}