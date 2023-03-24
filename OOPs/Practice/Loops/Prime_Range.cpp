#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the range of the number :";
    cin >> num1 >> num2;
    int i,num;
    for(int i = num1; i <= num2; i++)
    {
        for(num = 2; num < i; num++)
        {
            if(i%num == 0)
            {
                break;
            }
        }
        if(num == i)
        {
            cout << i << " ";
        }
    }
}