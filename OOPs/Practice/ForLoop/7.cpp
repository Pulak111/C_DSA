// Factorial of a number
#include <iostream>
using namespace std;
int main()
{
    int num;
    int fact = 1;
    cout << "Enter the number:";
    cin >> num;
    const int x = num;
    if(num == 1 or num == 0)
    {
        cout << num << "! = " << "1";
    }
    else
    {
        /*while(num != 1)
        {
            fact = fact * num;
            num = num - 1;
        }*/
        for(int a = 1; a <= num; a++)
        {
            fact = fact*a;
        }
    }
    //cout << x << "! = " << fact;
    cout << num << "! = " << fact;
}