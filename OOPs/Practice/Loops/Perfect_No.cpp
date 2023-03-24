#include <iostream>
using namespace std;
int main()
{
    int i,num;
    int sum = 0;
    for(int i = 1; i <= 1000; i++)
    {
        for(num = 1; num < i; num++)
        {
            if(i % num == 0)
            {
                sum = sum + num;
            }
        }
        if(i == sum)
        {
            cout << i << " ";
        }
        sum = 0;
    }
    return 0;
}