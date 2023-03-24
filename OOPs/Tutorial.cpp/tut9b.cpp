// ***** ' Switch, Case ' statement *****
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age :";
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You are mature now." << endl;
        break;

    case 5:
        cout << "You are infant now." << endl;
        break;

    default:
        cout << "No special classes." << endl;
        break;
    }
    return 0;
}