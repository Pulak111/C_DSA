// Sum upto n Natural Numbers
#include <iostream>
using namespace std;
int main()
{
    int num;
    int sum = 0;
    cout << "Enter the last number upto which you want the sum :";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
        cout << i << " ";
    }
    cout << "\nThe sum of the natural number upto " << num << " is " << sum << ".";
    return 0;
}