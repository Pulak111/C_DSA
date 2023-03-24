#include <iostream>
using namespace std;

class Y;

class X
{
    int num1;

    friend void exchange(X &, Y &);

public:
    void setData(int a)
    {
        num1 = a;
    }

    void printNum()
    {
        cout << num1 << "." << endl;
    }
};

class Y
{
    int num2;

public:
    void setData(int b)
    {
        num2 = b;
    }

    void printNum()
    {
        cout << num2 << "." << endl;
    }

    friend void exchange(X &, Y &);
};

void exchange(X &a, Y &b)
{
    int temp = a.num1;
    a.num1 = b.num2;
    b.num2 = temp;
}

int main()
{
    X o1;
    o1.setData(54);
    cout << "The value of data inside the class X is ";
    o1.printNum();

    Y o2;
    o2.setData(67);
    cout << "The value of data inside the class Y is ";
    o2.printNum();

    exchange (o1, o2);
    cout << "The value of data inside X after exchange becomes ";
    o1.printNum();
    cout << "The value of data inside Y after exchange becomes ";
    o2.printNum();
}
