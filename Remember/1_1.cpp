// Typecasting integer into string & its length
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num = 1233;
    string num_str = to_string(num);
    cout << num_str << endl;
    int len = num_str.length();
    cout << "Length of string(" << num_str << "): " << len << endl;
    
}
