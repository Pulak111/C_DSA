/*
1
2 2
3 3 3
4 4 4 4
*/
#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the number of rows you want:";
    cin >> r;
    int i = 1;
    while(i <= r)
    {
        int j = 1;
        while(j <= i)
        {
            cout << i << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }
}