#include <iostream>
using namespace std;
int main()
{
    for(int i = 0; i <= 5; i--) // First print 0, then increase it by 1 so i = 1, then decrement by 1 so i = 0(finally)
    {
        cout << i << " ";       // so this become infinite loop printing 0
        i++;
    }
}