// Non prime number numbe in a given range
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the starting number: ";
    cin >> num1;
    cout << "Enter the last number: ";
    cin >> num2;
    int i,j;
    for(int i = num1; i <= num2; i++)
    {
        for(j = 2; j <i; j++)
        {
            if(i % j == 0)
            {
                break;
            }
        }
        if(j != i)
        {
            cout << i << " ";
        }
    }
    return 0;
}