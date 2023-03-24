// Sum of the series ((1) + (1+2) + (1+2+3) + ... (1+2+3+...+n))
#include <iostream>
using namespace std;
int main()
{   
    int num;
    int a = 0;
    int sum = 0;
    cout << "Enter the last number of the given series:";
    cin >> num;
    for(int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            a = a + j;
            
        }
        sum = sum + a;
        a = 0;
        //sum = sum + a;
    }
    cout << "The sum of the given sequence whose last number is " << num << ": " << sum;
    return 0;
}