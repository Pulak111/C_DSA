#include <iostream>
using namespace std;
int main()
{
    int marks[] = {32, 99, 38, 51};
    int *p = marks;

    for(int i = 0; i < 4; i++)
    {
        cout << "The marks of the student of the rank " << (i+1) << " is " << marks[i] << "." << endl;
        cout << "The marks of the student of the rank " << (i+1) << " is " << *p << "." << endl;
        cout << "The address of the marks of the student of rank " << (i+1) << " is " << (marks+i) << "."  << endl;
        cout << "The address of the marks of the student of rank " << (i+1) << " is " << p << "." << endl;
        p++;
        cout << endl;
    }
    cout << marks << endl;
    cout << marks[0];
}