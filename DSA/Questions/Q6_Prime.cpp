// Given number is prime or not
#include <iostream>
using namespace std;
/*int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    int div = 0;
    int i = 1;
    while(i <= num)
    {
        if(num % i == 0)
        {
            div += 1;    
        }
        i += 1;
    }
    if(div == 2)
    {
        cout << num <<" is prime number";
    }
    else
    {
        cout << num << " is not prime number.";
    }
}*/
int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    int i;
    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            break;
        }
    }
    if(i == num)
    {
        cout << num << " is prime.";
    }
    else
    {
        cout << num << " is not prime.";
    }
}