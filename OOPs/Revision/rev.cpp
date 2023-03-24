#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n1, n2, r,s;
    cout << "Enter the number :";
    cin >> n1 >> n2;
    s = pow((n1-n2),2);
    cout << s << endl;
    r = sqrt(s);
    cout << r << endl;;
}