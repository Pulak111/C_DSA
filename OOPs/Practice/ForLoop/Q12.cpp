// Sum of the series (1*1 + 2*2 + .... n*n)
#include <iostream>
using namespace std;
int main()
{
    int num;
    int sum = 0;
    cout << "Enter the last number of the series :";
    cin >> num;
    for(int i = 1; i <= num; i++)
    {
        sum = sum + (i*i);
    }
    cout << "The sum of the given series whose last number " << num << ": " << sum;
}