//Divisors of Natural Number
#include <iostream>
using namespace std;
int main()
{
    int num, i;
    int sum = 0;
    cout << "Enter the number :";
    cin >> num;
    for ( i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            cout << i << " ";
            sum = sum + i;
        }
    }
    cout << endl;
    cout << sum;
    return 0;
}