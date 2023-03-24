// ***** Continue Statement *****
#include <iostream>
using namespace std;
int main()
{
    /*for (int i = 1; i < 40; i++)
    {
        cout << i << " ";
        if (i == 6)
        {
            break;
        } 
    }*/

    for (int i = 1; i < 40; i++)
    {
        if (i == 6)
        {
            break;
        }
        cout << i << " ";
    }

    return 0;
}