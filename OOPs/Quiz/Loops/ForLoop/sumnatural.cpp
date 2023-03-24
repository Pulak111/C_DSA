#include <iostream>
using namespace std;
int main()
{
    int Naturalnumber;
    cout << "Enter the natural number :";
    cin >> Naturalnumber;
    int sum = 0;

    for (int i = 1; i <= Naturalnumber; i++)
    {
        sum = sum + i;
    }

    cout << "Sum of natural no. upto " << Naturalnumber << " is : " << sum;
    return 0;
}