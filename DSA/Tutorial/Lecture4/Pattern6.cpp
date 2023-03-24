/*

*
* *
* * *

*/
#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the number of rows:";
    cin >> r;
    int i = 1;
    while (i <= r)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }
}