// Swap two consecutive element
#include<iostream>
using namespace std;
void swapArr(int arr[], int size);
void swapArr_Wtf(int arr[], int);
void printArr(int arr[], int size);
int main()
{
    int arr_Even[6] = {1, 2, 3, 4, 5, 6};
    int arr_Odd[7] = {2, 5, 34, 45, 56, 78, 89};
    swapArr(arr_Even, 6);
    printArr(arr_Even, 6);
    
    swapArr_Wtf(arr_Odd, 7);
    printArr(arr_Odd, 7);
    return 0;
}
void swapArr(int arr[], int size)
{
    for(int i = 0; i < size; i+= 2)
    {
        if((i + 1) < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }

}
// If we want to swap without using inbuilt swap function
void swapArr_Wtf(int arr[], int size)
{
    for(int i = 0; i < size; i += 2)
    if((i + 1) < size)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}
void printArr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}