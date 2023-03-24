#include <iostream>
using namespace std;
int main()
{
    int n, i, num;
    int j;
    cout << "Enter the last number :";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (num = 2; num < i; num++)
        {
            if(i % num == 0)
            {
                break;
            }
        }
        if(num == i)
        {
            j = i;
        }
    }
    
    cout << j << " is the last prime number before " << n << ".";
    return 0;
}