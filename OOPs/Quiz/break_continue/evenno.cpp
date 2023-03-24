// ****** Even no. b/w two numbers ******
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the natural number : ";
    cin >> num1 >> num2;
    for (int i = num1; i <= num2; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}