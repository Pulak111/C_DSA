#include<iostream>
using namespace std;
int main()
{
    int a = 3;
    cout << a << endl;
    if(true)
    {
        int a = 5;
        int b = 6;
        cout << a << endl;
    }
    cout << a << endl;
    // cout << b << endl; //if b is not define after if statement we can't use it here.
}