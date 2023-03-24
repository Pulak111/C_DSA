#include <iostream>
using namespace std;
int main()
{
    int num,num1;
    cout << "Enter the number which factorial you want : ";
    cin >> num;
    num1 = num;
    int fact = 1;
    
    if (num == 0)
    {
        cout << "0! = 1";
    }
    else
    {
        while(num != 1)
        {
            fact = fact*num;
            num = num - 1;
        }
        cout << num1 << "! = " << fact ;
    }
    return 0;
}