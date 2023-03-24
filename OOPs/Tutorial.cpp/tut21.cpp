// ********* Classes *********
#include <iostream>
#include <iomanip> // --->For setw function
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setData(int a1, int b1, int c1); // Declaration
    void getData();                       /*{
                               cout<<"The value of a is "<<a<<"."<<endl;
                               cout<<"The value of b is "<<b<<"."<<endl;
                               cout<<"The value of c is "<<c<<"."<<endl;
                               cout<<"The value of d is "<<d<<"."<<endl;
                               cout<<"The value of e is "<<e<<"."<<endl;
                           }*/
};

void Employee ::setData(int a1, int b1, int c1)
{
    // :: --->Scope Resolution Operator
    a = a1;
    b = b1;
    c = c1;
}

// Other Method to define getData
void Employee ::getData()
{
    cout << "The value of a is " << setw(3) << a << "." << endl;
    cout << "The value of b is " << setw(3) << b << "." << endl;
    cout << "The value of c is " << setw(3) << c << "." << endl;
    cout << "The value of d is " << setw(3) << d << "." << endl;
    cout << "The value of e is " << setw(3) << e << "." << endl;
}

int main()
{
    Employee Priyanshu;
    Priyanshu.d = 23;
    Priyanshu.e = 34;
    // Priyanshu.a =5; --> It will throw error because a is private so we cannot modify it here.
    Priyanshu.setData(1, 2, 4);
    Priyanshu.getData();
    return 0;
}