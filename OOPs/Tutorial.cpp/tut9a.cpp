// ***** if, else if, else statement *****

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age :";
    cin >> age;
    if ((age < 18) & (age > 0))
    {
        cout << "You cannot came to your party." << endl;
    }
    else if (age == 18)
    {
        cout << "You can get kid pass in my party." << endl;
    }
    else if (age <= 0)
    {
        cout << "You had not birth yet." << endl;
    }
    else
    {
        cout << "You can came in my party without any disturbance." << endl;
    }
    return 0;
}