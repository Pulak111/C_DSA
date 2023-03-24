// ********* Function Overlapping **********
#include <iostream>
#include <iomanip>
using namespace std;
/*int add (int a,int b){
    cout<<"using function 1 is ";
    return a+b;
}
int add(int a, int b, int c){
    cout<<"using function 2 is ";
    return a+b+c;
}
int main(){
    cout<<"The sum of 3 & 5 is  "<<setw(3)<<add(3,5)<<"."<<endl;
    cout<<"The sum of 3,5,7 are "<<setw(3)<<add(3,5,7)<<"."<<endl;
    return 0;
}*/
// Eg.2 Volume
float volume(double r, int h)
{
    return (3.14 * r * r * h);
}
int volume(int a)
{
    return (a * a * a);
}
int volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    cout << "The volume of cube of side 3 unit is " << volume(3) << "." << endl;
    cout << "The volume of cuboid of dimension 3*5*7 is " << volume(3, 5, 7) << "." << endl;
    cout << "The volume of cylider of radius 3 & height 5 is " << volume(3, 5) << ".";
    return 0;
}
