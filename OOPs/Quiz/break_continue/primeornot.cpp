#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << num << " is not prime.";
            break;
        }
    }
    
    if (i == num)
    {
        cout << i << " is prime.";
    }

    return 0;
}