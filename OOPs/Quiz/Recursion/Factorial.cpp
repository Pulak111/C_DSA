// Recursion (Calling the function itself)
#include <iostream>
using namespace std;
int factorial(int);

int main()
{
    int n;
    cout << "Enter the number which factorial do you want :";
    cin >> n;
    if (n >= 0)
    {
        cout << n << "! = " << factorial(n);
        
    }
    else
    {
        cout << n << "! is not define in mathematics." << endl;
    }
    return 0;
}

int factorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    return (num * factorial(num - 1));
}