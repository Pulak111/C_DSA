// Prime or Not 
#include <iostream>
using namespace std;
int main()
{
    int num;
    int i;
    cout << "Enter the number:";
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
        cout << num << " is prime number.";
    }
    return 0;
}