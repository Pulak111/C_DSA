// Volume of 3D shapes.

#include <iostream>
using namespace std;

int volume(int);
float volume(float, float,float);
float volume(int, int);
double volume(float); // It shows that this function may be found further but not guarantee that it should be found compulasary.

int main()
{
    cout << "The volume of sphere of side 6 unit is " << volume(6) << "." << endl;
    cout << "The volume of the cuboid of dimension (5*4*3) unit is " << volume (5, 4, 3) << "." << endl;
    cout << "the volume of the cylider of radius 3 unit and height 5 unit is " << volume (3, 5) << "." << endl;
    //cout << "The volume of the sphere of radius 4.1 unit is " << volume (4.12) << endl;
    return 0;
}

int volume(int a)
{
    return (a * a * a);
}

float volume (float a, float b, float c)
{
    return (a * b * c);
}

float volume (int r, int h)
{
    return (3.14 * r * r * h);
}

