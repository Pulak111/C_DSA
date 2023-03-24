// Multiplication table vertically upto n;
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number upto which u want multiplication table:";
    cin >> num;
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= num; j++)
        {
            cout << j <<" * " <<setw(2) << i << " = " << setw(2) << (i*j)  << "   " ;  
        }
        cout << endl;
    }
    return 0;
}