// Binary to Decimal
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the binary number:";
    cin >> n;
    int digit = 0;
    int j = -1;
    int c = 0;
    while(n != 0)
    {
        int r = n % 10;
        /*if(r != 1 || r != 0)
        cout << "Not a binary number.";
        c += 1;
        break;*/
        j += 1;
        if(r == 1)
        {
            digit = digit + pow(2,j);
        }
        n = n / 10;

    }
    //if(c == 0)
    {
        cout << "Number is : " << digit;
    }
}
