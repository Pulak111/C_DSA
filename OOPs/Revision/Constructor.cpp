// Default Argument Points

#include <iostream>
using namespace std;

class Simple
{
    int a, b, c;

public:
    Simple(int x, int y = 5, int z = 7)
    {
        a = x;
        b = y;
        c = z;
    }
    void printData();
};

void Simple ::printData()
{
    cout << "The value of data1, data2 and data3 is " << a << ", " << b << " and " << c << "." << endl; 
}

int main()
{
    Simple s1(3), s2(4,8), s3(1, 2, 3);
    s1.printData();
    s2.printData();
    s3.printData();
    return 0;
}