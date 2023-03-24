// Perfect Numbers
#include <iostream>
using namespace std;
int main()
{   
    int sum = 0;
    for (int i = 1; i <=500; i++)
    {
        for(int n = 1; n <i; n++)
        {
            if(i % n == 0)
            {
                sum = sum + n;
            }
        }
        if(i == sum)
        {
            cout << i << endl  ;
        }
        sum = 0;
    }
}