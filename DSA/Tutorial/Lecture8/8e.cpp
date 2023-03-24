// Even Odd
#include <iostream>
using namespace std;
bool isEven(int);
int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    if(isEven(num))
    {
        cout << num << " is even." << endl;
    }
    else
    {
        cout << num << " is odd." << endl;
    }
    return 0;
}
/*
Even = 1
Odd = 0
*/
bool isEven(int a)
{
    if(a & 1)// Odd last bit 1
    {
        return 0;
    }
    return 1;
}