// *** Pointers ***
#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    cout << "The value of a is " << a << "." << endl;
    cout << "The value of a is " << *b << "." << endl;
    cout << "The value of a is " << **c << "." << endl;
   cout << "The value of a is " << ***d << ".\n" << endl;

    cout << "The address of a is " << &a << "." << endl;
    cout << "The address of a is " << b << "." << endl;
    cout << "The address of a is " << *c << "." << endl;
    cout << "The address of a is " << **d << "." << endl;
    return 0;
}