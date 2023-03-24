#include <iostream>
using namespace std;

/*void swap (int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}*/ // ----> This will not swip the value of the given output.

void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int num1, num2;
    cout << "Enter the value of x :";
    cin >> num1;
    cout << "Enter the value of y :";
    cin >> num2;
    cout << "Initially the value of x is " << num1 << " and the value of y is " << num2 << "." << endl;
    swapPointer(&num1, &num2);
    cout << "The value of x after swipping is " << num1 << " and the value of y after swipping is " << num2 << "." << endl;
    cout << "The value of x after swipping is " << num1 << " and the value of y after swipping is " << num2 << "." << endl;

    return 0;
}