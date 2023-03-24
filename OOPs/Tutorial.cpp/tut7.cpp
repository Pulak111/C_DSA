#include <iostream>

using namespace std;

int c = 655;

int main()
{
    // *********** Built in data types ***************
    /*  int a, b, c;
     cout<<"Enter the value of a : "<<endl;
     cin>>a;
     cout<<"Enter the value of b : "<<endl;
     cin>>b;
     c = a+b;
     cout<<"The sum is "<<c<<"."<<endl;
     cout<<"The global c is : "<<::c<<"."<<endl;

     cout<<endl;  */

    // ************ float, double and long doouble literals ************
    float d = 34.4f;
    long double e = 3.12345678l;
    cout << "The value of D is " << d << ".\nThe value of E is " << e << "." << endl;
    cout << "The size of 34.4 is " << sizeof(34.4) << "." << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << "." << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << "." << endl;

    cout << endl;

    // ********** Reference Variable *********
    /* float x= 43;
     float & y=x;
     cout<<"The value of c is " <<x<<"."<<endl;
     cout<<"Enter the value of y : "<<y<<endl;

     cout<<endl;

     // ********** Typecasting **********
     int m= 45;
     float n= 45.14;

     cout<<"The value of A is "<<(float)m<<". "<<endl;
     cout<<"The value of B is "<<float(m)<<". "<<endl;

     cout<<endl;

     cout<<"The value of C is "<<(int)n<<". "<<endl;
     cout<<"The value of D is "<<int (n)<<"."<<endl;

     int o= int(n);
     cout<<"The value of E is "<<int(o)<<"."<<endl;

     cout<<endl;

     cout<<"The expression is "<<m+n<<"."<<endl;
     cout<<"The expression is "<<m+int(n)<<".";  */

    return 0;
}