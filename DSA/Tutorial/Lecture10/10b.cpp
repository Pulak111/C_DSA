// Find Unique Number in odd Number of index array where there is only one unique number(Code Ninja)
#include<iostream>
using namespace std;
void inp_arr(int arr[], int n);
int main()
{
    //int arr[7] = {2, 1, 5, 13, 1, 2, 5};
    int num;
    cout << "Enter the number of 'odd' elements in array which have only one distinct elements: ";
    cin >> num;
    int arr[1000];
    inp_arr(arr, num);
    int ans = 0;
    for(int i = 0; i < num; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans;
}
void inp_arr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}