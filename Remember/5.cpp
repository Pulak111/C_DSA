// Binary number to decimal
#include<iostream>
#include<math.h>
using namespace std;
int bi_di(int);
int main()
{
    int bi_digit;
    cin >> bi_digit;
    int dec_di = bi_di(bi_digit);
    cout << dec_di;
}
int bi_di(int a)
{   int i = 0;
    int dec = 0;
    while(a != 0)
    {
        cout << a << endl;
        int bit = (a & 1);
        if(bit == 1)
        {
            dec = dec + pow(2,i);
            //printf("%d \n", dec);
        }
        i++;
        a = (a >> 1);
        //printf("a:%d \n \n",a);

    }
   // printf("\n");
    return dec;
}