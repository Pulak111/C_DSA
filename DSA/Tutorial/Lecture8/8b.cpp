// Calculator Program
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the two numbers :";
    cin >> num1 >> num2;
    char ch;
    cout << "Enter the operation : ";
    cin >> ch;
    switch(ch)
    {
        case '+': cout << (num1 + num2) << endl;
                break;
        case '-': cout << (num1 - num2) << endl;
                break;
        case '*': cout << (num1 * num2) << endl;
                break;
        case '/': cout << (num1 / num2) << endl;
                break;
        case '%': cout << (num1 % num2) << endl;
                break;       
        default : cout << "No such operation is define." << endl;
    }
}