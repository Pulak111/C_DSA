#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << " Enter the value of num 1:\n"; /* '<<' This is called issertion operator */
    cin >> num1;                            /* '>>' is called Extracation operator */
    cout << " Enter the value of num2:\n";
    cin >> num2;

    cout << " The sum is " << num1 + num2;

    return 0;
}