/*
1 2 3
4 5 6
7 8 9
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int r;
    cout << "Enter the number of rows:";
    cin >>r;
    int i = 1;
    int s = 1;
    while(i <= r)
    {
        int j = 1;
        while(j <= r)
        {
            cout << setw(2) << s << " ";
            s += 1;
            j += 1;          
        }
        i += 1;
        cout << endl;
    }
}