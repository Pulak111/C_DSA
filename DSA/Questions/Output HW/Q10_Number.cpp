/*
n = 123
p = 1*2*3
s = 1+2+3
output : p - s
*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    int product = 1;
    int sum = 0;
    while(num != 0)
    {
        int r = num % 10;
        product = product * r;
        sum = sum + r;
        num = num / 10;
    }
    cout << (product - sum);
    return 0;
}