// Print natural number
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the last natural number upto which you want to print: ";
    cin >> num;
    int i = 1;
    while(i <= num)
    {
        cout << i << " ";
        i += 1;
    }

}