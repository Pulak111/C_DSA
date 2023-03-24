/*
A B C D
A B C D
A B C D 
A B C D
*/
#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the number of rows:";
    cin >> r;
    int i =1;
    while(i <= r)
    {
        int j = 1;
        while(j <= r)
        {
            char ch = 'A' + j - 1;
            cout << ch << " ";
            j++;
        }
        i++;
        cout << endl;
    }
}