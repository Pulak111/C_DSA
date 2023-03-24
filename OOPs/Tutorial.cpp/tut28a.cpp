#include <iostream>
using namespace std;

class Y;

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "The sum of data of X and Y is " << (o1.data + o2.num) << endl;
}

int main()
{
    X a1;
    a1.setValue(5);

    Y b1;
    b1.setValue(8);

    add(a1, b1);
    return 0;
}