// Constructor with Default Arguments
#include <iostream>
using namespace std;

class Simple
{
    int data1, data2, data3;

public:
    Simple(int, int, int);
    void printData();
};

Simple ::Simple(int a, int b = 6, int c = 9)
{
    data1 = a;
    data2 = b;
    data3 = c;
}

void Simple ::printData()
{
    cout << "The value of data1, data2 and data 3 is " << data1 << " , " << data2 << " and " << data3 << " respectively." << endl;
}

int main()
{
    Simple s1(2,3,4);
    Simple s2(2,3);
    Simple s3(5);

    s1.printData();
    s2.printData();
    s3.printData();
}