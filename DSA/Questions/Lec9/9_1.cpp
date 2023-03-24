// Print the sum of all elements in an array
#include<iostream>
using namespace std;
int sumArr(int arr[], int size);
int main()
{
    int num;
    cout << "Enter the number of elements in array :";
    cin >> num;
    int Array[100];
    for(int i = 0; i < num; i++)
    {
        cin >> Array[i];
    }
    cout << sumArr(Array, num);  
}
int sumArr(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}