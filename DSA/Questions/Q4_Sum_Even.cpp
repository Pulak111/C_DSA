// Sum of even number
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the even number upto which you want to sum: ";
    cin >> num;
    int sum = 0;
    for(int i = 1; i <= num; i++)
    {
        if(i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    cout << sum;
}