// ***** Function Prototype *****

#include <iostream>
using namespace std;

// Function Prototype
// int sum(int a, int b);//-->Acceptable
// int sum(int a, b);//-->Not Acceptable
int sum(int, int); //--> Only Data type accepted
void g();
// void g(void)-->Acceptable;
int main()
{
    int num1, num2;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    cout << "The sum of given numbers are : " << sum(num1, num2);
    g();

    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void g()
{
    cout << "\nHello, Good Morning ";
}
// num1,num2 are actual parameter
// a & b are formal parameter which will take the value from actual parameter num1 & num2;