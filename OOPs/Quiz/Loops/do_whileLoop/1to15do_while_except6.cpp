#include <iostream>
using namespace std;
int main()
{
    int i;
    i = 1;
    do
    {
        if (i != 6)
        {
            cout << i << " ";
            i++;
        }
        else
        {
            i++;
        }
    } while (i <= 15);
    return 0;
}