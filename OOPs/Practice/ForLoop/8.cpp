// Last Prime Number begore a given number
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    int i;
    for(i = num; i > 1; i--)
    {
        int j;
        for(j = 2; j < num; j++)
        {
            if(i % j == 0)
            {
                break;
            }
        }
        if(i == j)
        {
            cout << "Last prime number before " << num <<": " << i;
            break;
        }
    }
    return 0;
}