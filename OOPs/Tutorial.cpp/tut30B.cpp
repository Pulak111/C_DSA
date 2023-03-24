// Parametric Constructor

#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int, int);
    void printPoint();
};

Point ::Point(int a, int b)
{
    x = a;
    y = b;
}

void Point :: printPoint()
{
    cout << "The point is (" << x << "," << y << ")." << endl;
}

int main()
{
    Point p(1,1);
    p.printPoint();

    Point q(4,6);
    q.printPoint();

    return 0;
}

// Write a programm to print distance between 2 points.
/* 
(1,1) & (1,1) ---> 0;
(0,1) & (0,6) ---> 5;
(1,0) & (70,0) ---> 69;
*/