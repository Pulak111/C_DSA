// if size of array is N then (1 to N-1) numbers are fix & 1 number is repeated that we need to find.
#include<iostream>
#include<vector>
using namespace std;
int dupli_arr(vector<int> &arr, int n);

int main()
{
    vector<int> arr {1,2,3,2};
    int num = arr.size();
    int duplicate = dupli_arr(arr, num);  
    cout << duplicate;  
}
int dupli_arr(vector<int> &arr, int n)
{
    int ans = 0;
    
    for(int i = 0; i < arr.size(); i++)
    {
        ans = (ans ^ arr[i]);
    }
    for(int i = 1; i < n; i++)
    {
        ans = (ans ^ i);
    }
    return ans;
}