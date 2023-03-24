// ncR calculation 
/*
n!/(r! * (n - r)!)
*/
#include<iostream>
using namespace std;
int factorial(int);
int nCr(int, int);
int main()
{
    int n, r;
    cout << "Enter the value of n, r : ";
    cin >> n >> r;
    cout << nCr(n, r);
    return 0;
}
int factorial(int a)
{
    if(a <= 1)
    {
        return 1;
    }
    return (a * factorial(a - 1));
}
int nCr(int n, int r)
{
    return(factorial(n)/(factorial(r) * factorial(n - r)));
}