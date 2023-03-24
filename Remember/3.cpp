// Reverse a string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a;
    a = "Hello";
    reverse(a.begin(), a.end());
    cout << a;
}