//**** Constructor *****
//Characteristics of Constructor
/*
(1.) It is declared in public section of the class.
(2.) They are automatically invoked whenever the object is created.
(3.) They can't return values and do not have return types.
(4.) It can have default arguments. 
(5.) We can't refer to their address.
*/

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:

// Creating a Constructor 
// Constructor is a special member function with the same name as of the class.
// It is used to initialize the object of its class. 
// It is automatically invoked whenever an object is created.
    Complex(); // Constructor Declaration
    void printNum();
};

Complex ::Complex() // ---> This is a default constructor as it takes no parameter.
{
    a = 0;
    b = 0;
    cout << "Hello World!" << endl;;
}

void Complex ::printNum()
{
    cout << "The complex number is " << a << "+" << b << "i." << endl;
}

int main()
{
    Complex c1, c2, c3;
    c1.printNum();
    c2.printNum();
    c3.printNum();
    return 0;
}