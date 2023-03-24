// Total Number of set Bit (In Binary Set Bit = 1)
#include<iostream>
using namespace std;
int setBit(int);
int main()
{
    int num1, num2;
    int TotalSetBit;
    cout << "Enter the two number: ";
    cin >> num1 >> num2;
    TotalSetBit = setBit(num1) + setBit(num2);
    cout << TotalSetBit;
}
int setBit(int num)
{
    int count = 0;
    while(num != 0)
    {
        int bit = (num & 1);
        if(bit == 1)
        {
            count += 1;
        }
        num = (num >> 1);
    }
    return count;
}