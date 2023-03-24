// Distance between two points

#include <iostream>
#include <cmath>
using namespace std;
//extern double pow(double, double);

class Point
{
    int x, y;

public:
friend  int distance(Point , Point);
    Point(int, int);
    void displayPoint();
};

Point :: Point(int a, int b)
{
    x = a; 
    y = b;
}

void Point ::displayPoint()
{
    cout << "The given point is (" << x << "," << y << ")." << endl; 
}

int distance(Point A, Point B)
{
    int d = sqrt(pow((A.x - B.x),2) + pow((A.y - B.y),2));
    return d;
}
int main()
{
    Point p1(1,1);
    p1.displayPoint();
    Point p2(1,1);
    p2.displayPoint();
    cout << "The distance between p1 & p2 is " ;
    cout << distance(p1,p2);
    cout << "." << endl;
    cout << endl;
    Point q1(0,1);
    q1.displayPoint();
    Point q2(0,7);
    q2.displayPoint();
    cout << "The distance between q1 and q2 point is " << distance(q1, q2) << "." << endl;
    cout << endl; 
    Point r1(1,0);
    r1.displayPoint();
    Point r2(70,0);
    r2.displayPoint();
    cout << "The distance between r1 and r2 is " << distance(r1,r2) << "." << endl;
    cout << endl;
    Point s1(3,4);
    s1.displayPoint();
    Point s2(4,5);
    s2.displayPoint();
    cout << "The distance between s1 and s2 is " << distance(s1,s2) << "." << endl;
    return 0;
}