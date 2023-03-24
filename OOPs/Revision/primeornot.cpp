#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    int i ;
    for(i = 2; i < num; i++)
    {
        if(num%i ==0)
        {
            cout << num << " is not prime number." << endl;
            break;
        }
    }
    if(i == num)
    {
        cout << num << " is prime number." << endl;
    }
    else if(num == 1)
    {
        cout << num << " is not prime nor composite number." << endl;
    }
    else if(num == 2)
    {
        cout << num << " is prime number." << endl;
    }
    return 0;
}