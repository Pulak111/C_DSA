// Power Function
#include <iostream>
using namespace std;
int power(int, int);
int main()
{
    int num1, num2;
    cout << "Enter the two number :";
    cin >> num1 >> num2;
    cout << power(num1, num2);
}
int power(int a, int b)
{
    int ans = 1;
    for(int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}