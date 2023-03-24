// Accessibg Array using for Loop
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int third[15] = {2, 7};
    for(int i = 0; i < 15; i++)
    {
        cout <<"Value at index [" << setw(2) << i << "]: " << third[i] << endl; 
    }
}