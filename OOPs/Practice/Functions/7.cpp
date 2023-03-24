// Prime or not
#include <iostream>
using namespace std;
void prime(int);
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    prime(num);
}
void prime(int a)
{
    int div = 0;
    for(int i = 1; i <= a; i++)
    {
        if(a % i == 0)
        div += 1;
    }
    if(div == 2)
    {
        cout << a << " is prime." << endl;
    }
    else if(div == 1)
    {
        cout << a << " is neither prime nor composite." << endl;
    }
    else
    {
        cout << a << " is not prime." << endl;
    }

}