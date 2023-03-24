// Decimal To Binary '+ive' integer
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number for conversion in binary : ";
    cin >> num;
    int bi_di = 0;
    int i = 0;
    while(num != 0)
    {
        int bit = num & 1;
       // cout << "bit :" << bit << endl;
        bi_di = (bit * pow(10,i)) +bi_di;
        //cout <<"bi_di : " <<bi_di << endl;
        
        num = num >> 1;
       // cout << n << endl;
      //  cout << endl;
        i++;
    }
    cout << "Binary number : " << bi_di << endl;
}
