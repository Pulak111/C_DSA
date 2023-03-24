// Sum n Natural Number
#include <iostream>
using namespace std;
int main()
{
    int num;
    int sum = 0;
    cout << "Enter the last natural number upto which you want sum:";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    cout << sum << " is the sum of the natural number upto " << num << ".";
}