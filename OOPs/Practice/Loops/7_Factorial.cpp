#include <iostream>
using namespace std;
int main()
{
    int num,i;
    int factorial = 1;
    cout << "Enter the number :";
    cin >> num;
    i = num;
    //const int i = num;
    if(num == 1 or num == 0)
    {
        cout << num << "! = 1";
    }
    else
    {
        while(num > 1)
        {
            factorial = factorial * num;
            num = num - 1;
        }
        
    }
    cout << i <<"! = " << factorial ;
    return 0;
}