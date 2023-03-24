// Given input is lower / upper case alphabet or b/w 0 - 9
#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "Enter the value of a: ";
    a = cin.get();
    if(a >= 48 && a <= 57)
    {
    cout << "Given number is integer. " << endl;
    }
    else if(a >= 65 && a <= 90)
    {
        cout << "Given alphabet is upper case.";
    }
    
    else if(a >= 97 && a <= 122)
    {
        cout << "Given alphabet is lower case. " << endl;
    }
}