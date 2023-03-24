#include <iostream>
using namespace std;
int main()
{
int i = 1;
int j = 1;
while(i <=3)
{
    while(j<3)
    {
        cout << j << " ";
        j = j + 1;
    }
    i = i + 1;
    cout << endl;
    cout << endl;
    cout << i << " ";
}
}