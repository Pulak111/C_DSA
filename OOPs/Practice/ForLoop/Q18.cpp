// Cube of a number upto given last number
#include <iostream>
using namespace std;
int main()
{
    int num;
    int cube;
    cout << "Enter the last number:";
    cin >> num;
    for(int i = 1; i <= num; i++)
    {
        cube = i*i*i;
        cout << "The cube of " << i <<" :" << cube << endl;
    }
    return 0;
}