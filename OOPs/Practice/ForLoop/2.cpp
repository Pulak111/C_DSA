// Sum first 10 natural Numbers
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of natural number upto 10 is " << sum << ".";

}