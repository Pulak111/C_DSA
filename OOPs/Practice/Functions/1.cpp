// Sum of Two Number
#include<iostream>
using namespace std;
int sum(int, int);
int main()
{   int num1, num2;
    cout << "Enter the two number: ";
    cin >> num1 >> num2;
    cout << "The sum of " << num1 << " & " << num2 << " is : " << sum(num1, num2);
    return 0;
}
int sum(int a, int b)
{  
    return (a + b);   
}