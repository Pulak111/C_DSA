// Basic Input Output in string
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1, str2;
    /*cin >> str1;
    cout << str1 << endl;*/
    cout << "Enter the greetings: ";
    getline(cin, str2);
    str2.push_back('P'); // Add a single character at the end of the string.
    str2.pop_back(); // Delete the last character at the end of the string.
    cout << str2 << endl;
    cout << "The length of the string(" << str2 << "): " << str2.length(); // Count space in length
}