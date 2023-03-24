/*
1
2 3
4 5 6
7 8 9 10
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int r;
    cout << "Enter the number of rows:";
    cin >> r;
    int row = 1;
    int n = 1;
    while(row <= r)
    {
        int column = 1;
        while(column <= row)
        {
            cout <<setw(2) << n << " ";
            n += 1;
            column += 1;
        }
        row += 1;
        cout << endl;
    }
}