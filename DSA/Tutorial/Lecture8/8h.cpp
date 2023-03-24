// Prime or Not
/*
1 --> Prime
0 --> Not Prime
*/
#include <iostream>
using namespace std;
bool isPrime(int);
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if(isPrime(num))
    {
        cout << num << " is Prime." << endl;
    }
    else
    {
        cout << num << " is not Prime." << endl;
    }

}
bool isPrime(int a)
{
    for(int i = 2; i < a; i++)
    {
        if(a % i == 0)
        {
            return 0;
        }
    }
    if(a == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}