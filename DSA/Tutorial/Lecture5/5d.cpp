// For Loop
#include <iostream>
using namespace std;
int main()
{
    for(int a = 0, b = 1; a >= 0 && b >= 1; a--,b--) // a = 0 b = 1, then a = -1 & b = 0
    {
        cout << a << " " << b << " " << endl;
    }
}