// Strong number
#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int num;
    
    int sum = 0;
    cout << "Enter the number:";
    cin >> num;
    int n = num;
    while (num > 0)
    {
        int r = num % 10;
        int a = factorial(r);
        //cout << a << endl;
        num = num / 10;
       //cout << num << endl;
        sum = sum + a;
    }
    if(sum == n)
    {
        cout << n << " is strong number.";
    }
    else
    {
        cout << n << " is not strong number.";
    }

}