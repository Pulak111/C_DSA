// Maximum and minimum among three number
#include<iostream>
using namespace std;
int max(int, int, int);
int min(int, int, int);
int main()
{
    int num1, num2 ,num3;
    cout << "Enter the three number:";
    cin >> num1 >> num2 >> num3;
    cout << "Maximum among " << num1 <<", " << num2 <<" & " << num3 << ": " << max(num1, num2, num3) << endl;
    cout << "Minimum among " << num1 <<", " << num2 <<" & " << num3 << ": " << min(num1, num2, num3) << endl; 
}
int max(int a, int b, int c)
{
    int max1, max;
    if(a == b && b == c)
    {
        cout << "All numbers are same.";
        return 0;
    }
    if(a >= b)
    {
        max1 = a;
    }
    else
    {
        max1 = b;
    }
    if(max1 >= c)
    {
        max = max1;
    }
    else
    {
        max = c;
    }
    return max;

}
int min(int a, int b, int c)
{
    int min1, min;
    if(a <= b)
    {
        min1 = a;
    }
    else
    {
        min1 = b;
    }
    if(min1 <= c)
    {
        min = min1;
    }
    else
    {
        min = c;
    }
    return min;
}
