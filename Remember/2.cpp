// String append
#include<iostream>
#include<vector>
#include<limits.h>
#include<math.h>
#include<vector>
#include<cmath>
#include <string>
using namespace std;
int main()
{
    char a = 'a';
    string result = "";
    result.append(5, a);
    cout << a << "*5 = " << result << endl;
    return 0;
}