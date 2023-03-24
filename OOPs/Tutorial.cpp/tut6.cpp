/* There are two types of header files
1. System header files : It comes with the compiler */
#include <iostream>
// 2. User define header files : It is written by the Programmer
// #include"thist.h" // -->> This will produce an error if this.h is not present in the current directory

using namespace std;

int main()
{
    int a = 10, b = 6;
    cout << "Operators in c++" << endl;
    cout << "Following are the operators in c++" << endl;

    // Arithmetic operators

    cout << endl;
    cout << "Following are the type of Arithmetic Operators \n";
    cout << "The value of A is " << a + b << endl;
    cout << "The value of B is " << a - b << endl;
    cout << "The value of C is " << a * b << endl;
    cout << "The value of D is " << a / b << endl;
    cout << "The value of E is " << a % b << endl;
    cout << "The value of F is " << a++ << endl; //(The value of a print then it increase by 1 for next command.)
    cout << "The value of G is " << a-- << endl; //(The value of (a+1) print and then decreased by 1 for next command.)
    cout << "The value of H is " << ++a << endl; //(The value of ((a+1)-1) is increased by 1 then print it.)
    cout << "The value of I is " << --a << endl; //(The above value is decrease by 1 then print it.)

    cout << endl;

    /* Assingment operators --> These are used to assigned the value of variable
    int a =3, b=9
    char c= 'd'; */

    // Comparision Operators
    cout << "Following are the types of comparision operators \n";
    cout << "The value of J is : " << (a == b) << endl;
    cout << "The value of K is : " << (a != b) << endl;
    cout << "The value of L is : " << (a <= b) << endl;
    cout << "The vakue of M is : " << (a >= b) << endl;
    cout << "The value of N is : " << (a < b) << endl;
    cout << "The value of O is : " << (a > b) << endl;
    cout << endl;

    // Logical Operators
    cout << " The value of 'Logical and Operator' P is : " << ((a == b) && (a < b));
    cout << "\n The value of 'Logical or Operator' Q is : " << ((a == b) || (a < b)) << endl;
    cout << " The value of 'Logical not Operator' R is : " << (!((a == b) && (a < b))) << endl;// "It means not of ('a' equal to 'b' and 'a' is smaller than 'b')." 
    cout << " The value of 'Logical not Operator' S is : " << (!(a == b) && (a < b));// "It means 'a' not equal to 'b' and 'a' is smaller than 'b'." 

    return 0;
}