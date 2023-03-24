#include <iostream>
using namespace std;

class Y;

class X
{
    int a;

public:
    void inData(int num)
    {
        a = num;
    }
    void printData()
    {
        cout << a << "." << endl;
    }
    friend void exchange(X &o1,Y &o2);
};

class Y
{
    int b;

public:
    void inData(int num)
    {
        b = num;
    }
    void printData()
    {
        cout << b << "." << endl;
    }
    friend void exchange(X &o1, Y &o2);
};

void exchange(X &o1, Y &o2)
{
    int temp = o1.a;
        o1.a = o2.b;
        o2.b = temp;
}

int main()
{
    X A;
    A.inData(6);
    cout << "The initial value of A is ";
    A.printData();

    Y B;
    B.inData(9);
    cout << "The initial value of B is ";
    B.printData();

    exchange(A, B);
    cout << "The value of A after exchange is " ;
    A.printData();

    cout << "The value of B after exchange is ";
    B.printData();
}