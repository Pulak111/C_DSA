#include <iostream>
using namespace std;
int main()
{
    int side1, side2, side3;
    cout << "Give the sides of the traingle : ";
    cin >> side1 >> side2 >> side3;
    
    if(side1 > 0 && side2 > 0 && side3 > 0)
    {
    if (side1 == side2 == side3)
    {
        cout << "The given trianfle is equilateral.";
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        cout << "The given triangle is isosceles.";
    }
    else
    {
        cout << "The given triangle is scalene.";
    }
    }

    else
    {
        cout << "The side of triangle can't be negative." << endl;
    }
    return 0;
}