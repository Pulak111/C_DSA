// Multiplication table of any number upto 10.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{   
    int num;
    cout << "Enter the number :";
    cin >> num;
    for(int i=1; i<=10; i++){
        cout << num << "*" << setw(2) << i << "=" << setw(3) << num * i <<endl;
    }
    return 0;
}