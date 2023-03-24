// Prime number in a range
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the two number :";
    cin >> num1 >> num2;
    int i;
    int c = 0;
    for (i = num1; i <= num2; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            cout << i << " ";
            c = c + 1;
        }
    }
    cout << "\nThe total number of prime number between " << num1 << " and " << num2 << ": " << c;
}