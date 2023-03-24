// Product of two Numbers
#include <iostream>
using namespace std;
int product(int, int);
int main()
{
    int num1 , num2;
    cout << "Enter the two numbers: ";
    cin >> num1 >> num2;
    cout << "The product of " << num1 << " & " << num2 << " is : " << product(num1, num2);
    return 0;
}
int product(int a, int b)
{
    return (a*b);
}