/*
1
2 3
3 4 5
4 5 6 7
*/
#include<iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the number of rows you want for pattern:";
    cin >> r;
    for(int i = 1; i <= r; i++)
    {
        int k = i;
        for(int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}