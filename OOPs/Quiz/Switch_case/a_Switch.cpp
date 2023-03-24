// **** switch case 'Without Using Break '  ****
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number :";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << 6;
    case 2:
        cout << 7;
    case 3:
        cout << 8;

    default:
        cout << 9;
    }
}