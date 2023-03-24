// ********** RECURSION *********
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int a;
    cout << "Enter the number : ";
    cin >> a;
    cout << "The value of " << a << "! is " << factorial(a) << ".";
    // STEP BY STEP METHOD(eg. 4!)
    /* 4!=4*factorial(3);
       4!=4*3*factorial(2);
       4!=4*3*2*faactorial(1);
       4!=4*3*2*1=24; */

    return 0;
}