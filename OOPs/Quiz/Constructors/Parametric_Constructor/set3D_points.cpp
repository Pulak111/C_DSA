// Printing 3D points using parametric constructor

#include <iostream>
using namespace std;

class Point
{
    int x, y, z;

public:
    Point(int, int, int);
    void print_point();
};

Point ::Point(int x1, int y1, int z1)
{
    x = x1;
    y = y1;
    z = z1;
}

void Point ::print_point()
{
    cout << "The given 3D point is (" << x << "," << y << "," << z << ")." << endl;
}

int main()
{
    Point p1(0, 0, 0);
    p1.print_point();

    Point p2(0, 0, 1);
    p2.print_point();

    Point p3(4, 5, 6);
    p3.print_point();

    return 0;
}