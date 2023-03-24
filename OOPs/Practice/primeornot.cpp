#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not prime.";
            break;
        }
    }
    if (i == n)
    {
        cout << n << " is prime number." << endl;
    }
    return 0;
}