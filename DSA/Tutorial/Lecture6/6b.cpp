// Wrong Code
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the negative number : ";
    cin >> n;
    n = -n;
    int ans = 0;
    int i = 0;
    while(n != 0)
    {
        int bit = n & 1;
        if(bit == 0)
        {
            bit = 1;
        }
        else
        {
            bit = 0;
        }
        ans = (bit * pow(10,i)) + ans;
        n = n>> 1;
        i++;
    }
    cout << "Binary number : " << ans << endl;
    
}