// Adding class member function

#include <iostream>
using namespace std;

class Y;

class X
{
    int a;

public:
    void setNum(int num1)
    {
        a = num1;
    }
    friend void add (X , Y);
};

class Y
{
    int b;

public:
    void setNum(int num2)
    {
        b = num2;
    }
    friend void add (X, Y);
};

void add(X o1, Y o2)
{
    cout << "When we add the values of the classes X and Y we get :" << (o1.a + o2.b);
}

int main()
{
    X a;
    a.setNum(4);

    Y b;
    b.setNum(5);
    
    add (a, b);
    return 0;
}