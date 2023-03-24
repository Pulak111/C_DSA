#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the first and last numbers : ";
    cin >> a >> b;
    for (int num = a; num <= b; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (num == i)
        {
            cout << num << " ";
        }
    }
    return 0;
}