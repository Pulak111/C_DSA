// Print Counting function
#include<iostream>
using namespace std;
void counting (int);
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    counting(num);
}
void counting(int a)
{
    for(int i = 1; i <= a; i++)
    {
        cout << i << " ";
    }
}