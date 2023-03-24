#include <iostream>
using namespace std;

class C2;

class C1
{
    int val1;

public:
    void indata(int a1)
    {
        val1 = a1;
    }

    void display()
    {
        cout << val1 << "." << endl;
    }
    friend void exchange(C1 &x, C2 &y);
};

class C2
{
    int val2;
    friend void exchange(C1 &x, C2 &y);

public:
    void indata(int a2)
    {
        val2 = a2;
    }

    void display()
    {
        cout << val2 << "." << endl;
    }
};

void exchange(C1 &x, C2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    C1 oC1;
    C2 oC2;

    oC1.indata(34);
    oC2.indata(67);

    exchange(oC1, oC2);

    cout << "The value of C1 after exchange becomes : ";
    oC1.display();

    cout << "The value of C1 after exchange becomes : ";
    oC2.display();

    return 0;
}