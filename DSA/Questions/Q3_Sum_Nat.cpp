// Sum of natural number from 1 to n
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the natural number upto which you want to sum: ";
    cin >> num;
    int i = 1;
    int sum = 0;
    while(i <= num)
    {
        sum = sum + i;
        i += 1;
    }
    cout << "Sum of natural number upto " << num << " is :" << sum;
}