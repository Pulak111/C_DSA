// Even or Odd
#include<iostream>
using namespace std;
void even_odd(int);
int main()
{
    int a, b, c;
    cout << "Enter the three number :";
    cin >> a >> b >> c;
    even_odd(a);
    even_odd(b);
    even_odd(c);
}
void even_odd(int a)
{
    if(a < 0)
    {
        cout << "Even or odd is not define for negative number i.e. " << a << endl;
    }
    else if(a % 2 == 0)
    {  
        cout << a << " is even." << endl;
    }
    else
    {
        cout << a << " is odd." << endl;
    }
}