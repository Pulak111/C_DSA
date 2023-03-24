// Linear Search
#include<iostream>
using namespace std;

void setArr(int arr[], int size);
bool serIntArr(int arr[], int size, int key);
int main()
{
    int element, key;
    int arr[100];
    cout << "Enter the number of element in the array: ";
    cin >> element;
    setArr(arr, element);
    cout << "Enter the integer you want to search :";
    cin >> key;
    bool foundKey = serIntArr(arr, element, key);
    if(foundKey)
    {
        cout << key << " is present in the given array.";
    }
    else
    {
        cout << key << " is not present in the given array.";
    }
}

void setArr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
}
bool serIntArr(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            return true;
        }
    }
    return false;
}