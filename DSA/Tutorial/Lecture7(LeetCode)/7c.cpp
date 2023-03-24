// Complement of a number
#include<iostream>
using namespace std;
int main()
{
    int num1;
    
    cout << "Enter the number :";
    cin >> num1;
    int num = num1;
    int mask = 0;
   while(num != 0)
   {
        mask = (mask << 1);
        mask =(mask | 1);
        num = (num >> 1);
   }
   //cout << mask;
   cout << ((~num1) & mask);

}