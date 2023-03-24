#include<iostream>
using namespace std;

int fib(int n);
       
int main()
{
    int num;
    cout << "Enter the nth number which value you want to get in fibonaci series : ";
    cin >> num;
    cout << fib(num);
    return 0;
}
int fib(int n) {

        if(n == 1) 
            return 0;
        else if(n == 2)
        {
            return 1;
        }
        return fib(n - 1) + fib(n - 2); 
    }