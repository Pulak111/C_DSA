#include <iostream>
using namespace std;
int main()
{
    int num, i;
    cout << "Enter the number :";
    cin >> num;
    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            cout << num << " is not a prime number.";
            break;
        }
    }
    if(i == num)
    {
        cout << num << " is a prime number.";
    }
    return 0;
}
    