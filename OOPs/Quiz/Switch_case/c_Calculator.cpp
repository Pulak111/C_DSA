// Calculator making

#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operators;

    cout << "Enter the two numbers :";
    cin >> num1 >> num2;

    cout << "Enter the opeations :";
    cin >> operators;

    switch (operators)
    {
        case '+' :
        cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << ".";
        break;

        case '-' :
        cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2 << ".";
        break;

        case '*' :
        cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << ".";
        break;

        case '/' :
        cout << "The quotient when " << num1 << " divided by " << num2 << " is " << num1 / num2 << ".";
        break;

        default :
        cout << "No such operator found.";
        break;
    }
}