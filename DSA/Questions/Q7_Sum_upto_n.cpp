#include <iostream>
using namespace std;
int main()
{
    int num;
    
    cout << "Enter the natural number upto which you want sum: ";
    cin >> num;
    int sum = 0;
    for(int i = 1; i <= num; i++)
    {
        sum += i; 
    }
    cout << "Sum of natural number upto " << num << ": " << sum ;
}