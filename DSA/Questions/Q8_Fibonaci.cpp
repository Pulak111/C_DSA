// Fibonacci : 0, 1, 1, 2, 3, 5, 8, 13, 21, ......
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of term you want:";
    cin >> n;
    int a = 0;
    int b = 1;
    if(n == 1)
    {
        cout << 0;
    }
    else if(n == 2)
    {
        cout << a << " " << b ;
    }
    else if (n >= 3)
    {
    cout << a << " " << b << " ";
    for(int i = 1; i <= n - 2; i++)
    {
        int sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
        
    }
    }
}