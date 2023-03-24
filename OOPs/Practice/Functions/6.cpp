// Eligible for vote or not
#include <iostream>
using namespace std;
void vote(int);
int main()
{
    int age1, age2, age3,age4;
    cout << "Enter the four age :";
    cin >> age1 >> age2 >> age3 >> age4;
    vote(age1);
    vote(age2);
    vote(age3);
    vote(age4);
    return 0;
}
void vote(int a)
{
    if(a < 0)
    {
        cout << "You have not given right age." << endl;
    }
    else if(a >= 18)
    {
        cout << "You are eligible for voting." << endl;
    }
    else
    {
        cout << "You are not eligible for voting." << endl;
    }
}

