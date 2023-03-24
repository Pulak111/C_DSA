/*
A A A A
B B B B
C C C C 
D D D D
*/
#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the number of rows:";
    cin >> r;
    int i = 1;
    while(i <= r)
    {
        int j = 1;
        while(j <= r)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j++;
        }
        i++;
        cout << endl;
    }
}