// Sum of the given sequence
#include <iostream>
#include<math.h>
using namespace std;
int power(int);
int main()
{
    int num;
    float y;
    float sum = 0;
    cout << "Enter the number:";
    cin >> num;

    for(int a = 1; a <= num; a++)
    {
        cout << power(a) << endl;
        y = static_cast<float>(1)/(power(a));
        cout << y <<endl;
        cout << endl;
        sum = sum + y;
    }
    cout << "The sum of the given sequence :" << sum;
}

int power(int n)
{
        int x;
        x = n*n;
        for(int i = 1; i <= n-2; i++)
        {
            x = x*n;   
        }
        return(x);
}
