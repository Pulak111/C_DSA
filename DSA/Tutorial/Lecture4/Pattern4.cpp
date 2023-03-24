/*
3 2 1
3 2 1
3 2 1
*/
#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the number of rows you want to print:";
    cin >> r;
    int i = 1;
    while(i <= r)
    {
        int j = r;
        while(j >= 1)
        {
            cout << j << " ";
            j -= 1;
        }
        i += 1;
        cout << endl;
    }
}