// Factorial using recursion
#include <iostream>
using namespace std;
int factorial(int);
int main()
{
    int num;
    cout << "Enter the number which factorial you want : ";
    cin >> num;
    if(num >= 0)
    {
        cout << num << "! = " << factorial(num);
    }
    else
    {
        cout << "Factorial of negative number is not define in mathematics.";
    }
    
}
int factorial(int n){
    
        if(n <= 1)
        {
            return 1;
        }
        return (n*factorial(n - 1));

    }