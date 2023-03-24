// Pass by Value
#include<iostream>
using namespace std;
void dummy(int n);
int main()
{
    int num;
    cout << "Enter the numbdr:";
    cin >> num;
    dummy(num);
    cout << "Number in main :" << num << endl;
}
void dummy(int n)
{
    n++;
    cout << "Number in dummy :" << n << endl;
}