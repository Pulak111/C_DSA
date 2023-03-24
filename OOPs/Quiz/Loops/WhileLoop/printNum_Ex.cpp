#include <iostream>
using namespace std;
int main()
{
    int i =1;
    while(i <= 10)
    {
        if(i==6)
        {
            i++;
        }
        else
        {
            cout << i << endl;
            i++;
        }
    }
    return 0;
}