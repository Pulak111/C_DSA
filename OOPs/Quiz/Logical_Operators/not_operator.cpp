// Try to check logical Operators.

#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 3 ;
    /*cout << "Enter the value of a :";
    cin >> a;
    cout << "Enter the value of b :";
    cin >> b;
    cout << "The value of logical and operator for 'a' and 'b' is " << ((a == b) && (a < b)) << "." << endl;*/
    cout << "The value of logical or operator for 'a' and 'b' is " << ((a == b) || (a > b)) << "." << endl;
    cout << "The value of logical not operator for 'a' and 'b' is " << (!((a == b) && (a > b))) << "." << endl;
    cout << "The value of logical not operator for 'a' and 'b' is " << (!(a == b) && (a > b)) << "." << endl;
    cout << "The value of logical not operator for 'a' and 'b' is " << ((a == b) && !(a < b)) << "." << endl;

}