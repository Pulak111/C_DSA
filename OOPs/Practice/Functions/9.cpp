// Factorial of a Number
#include <iostream>
using namespace std;
int factorial(int);
int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    cout << "The factorial of " << num << " : " << factorial(num);
}
int factorial(int a)
{
    int fact = 1;
    for(int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}