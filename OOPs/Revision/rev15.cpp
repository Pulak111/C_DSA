// Function Prototype
// Sum function + void

#include <iostream>
#include <iomanip>
using namespace std;
int sum(int, int, int);
void g();
int main()
{

    int num1, num2, num3;
    cout << "Enter the first number :";
    cin >> num1;
    cout << "Enter the second number :";
    cin >> num2;
    cout << "Enter the third number :";
    cin >> num3;

    cout << "The sum of " << num1 << "," << num2 << " and " << num3 << " are " << sum(num1, num2, num3) << endl;
    g();
    return 0;
}

int sum(int a, int b, int c)
{
    return (a + b + c);
}

void g()
{
    cout << "Hello World!";
}
