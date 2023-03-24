#include <iostream>
// #include<iomanip> (setw function)
using namespace std;
int main()
{
    /* int a=34;
    // char c='c';
    cout<<"The value of A was : "<<a<<endl;
    // cout<<"The value of C was : "<<c<<endl;
        a=45;
     //   c='d';
    cout<<"The value of A is : "<<a<<endl;
    // cout<<"The value of C is : "<<c; */

    /* const int a=4;
     cout<<"The value of A is "<<a;
     // a=5; */

    // ********Manipulators in C++ *********
    /*cout<<endl;
    int a=2,b=12,c=123,d=1234;
    cout<<"The value of A is : "<<a<<endl;
    cout<<"The value of B is : "<<b<<endl;
    cout<<"The value of C is : "<<c<<endl;
    cout<<"The value of D is : "<<d<<endl;
    cout<<endl;
    cout<<"The value of A is : "<<setw(4)<<a<<endl;
    cout<<"The value of B is : "<<setw(4)<<b<<endl;
    cout<<"The value of C is : "<<setw(4)<<c<<endl;
    cout<<"The value of D is : "<<setw(4)<<d<<endl; */

    // Operator Precedence
    int a = 3, b = 4;
    // int c=a*5+b;
    int c = ((((a * 5) + b) - 45) + 87);
    cout << c;
    return 0;
}