#include <iostream>
using namespace std;
int main()
{
    int a;
    float b;
    char c;
    bool d;
    cout << "Enter the integer, float, char :";
    cin >> a >> b >> c;
    cout << "Sizeof " << a << "(int) is " << sizeof(a) << endl;
    cout << "Sizeof " << b << "(float) is " << sizeof(b) << endl;
    cout << "Sizeof " << c << "(char) is " << sizeof(c) << endl;
    /*cout << "Enter the boolean:";
    cin >> d;
    cout << "Sizeof " << d << " is " << sizeof(d) << endl;
    */
    
}
