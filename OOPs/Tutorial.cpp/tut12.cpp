// ****** Pointers ********
#include <iostream>
using namespace std;
int main()
{
    // Pointer is a data type which store the address of other data types.By using the pointer we can access the variable and also changes its value.

    int a = 3;
    int *b = &a; //(& ---> mpercent)
    // & ----> (Address of) operator
    cout << endl;
    cout << "The adddres of a is " << &a << endl;
    cout << "The address of a is " << b << endl; // currently not understand this line.
    cout << endl;

    // * ---> (Value at) Derefrence operator
    cout << "The value at address b is " << *b << endl;
    *b = 16;
    cout << "The new value at address b is " << *b << endl;
    cout << endl;
    // Pointer to Pointer
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << endl;
    cout << "The valaue at address c is " << *c << endl;
    cout << "The value at address_at(value_at(c)) is " << **c << endl; // currently not understand this line.

    cout << endl;
    return 0;
}