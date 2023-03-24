// Circumference & Area of Circle
#include <iostream>
#include <math.h>
using namespace std;
float circum(int);
float area(int);
int main()
{
    int r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << "The circumference of circle of radius " << r << " is : " << circum(r) << endl;
    cout << "The area of circle of radius " << r << " is : " << area(r); 
}
float circum(int a)
{
    float c;
    c = (2*3.14*a);
    return c;
}
float area(int a)
{
    float c;
    c = (3.14*pow(a,2));
    return c;
}