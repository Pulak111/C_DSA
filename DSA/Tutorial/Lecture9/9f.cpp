// Update array element by changing in function

#include<iostream>
using namespace std;
void printArr(int arrr[], int size);
void updateArr(int arr[], int size);
int main()
{
    int Arr[] = {1, 23, 34, 123};
    int size = sizeof(Arr) / sizeof(int);
    cout << "Elements of array inside 'main' function initial : ";
    // Initial array inside main function
    printArr(Arr, size);
    
    // Updating Array
    updateArr(Arr, size);

    // Final Array inside main function
    cout << "Elements of array inside 'main' function : ";
    printArr(Arr, size);
    
}
void printArr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}
void updateArr(int arr[], int size)
{
    arr[1] = 2;
    cout << "Elements of array inside 'update' function : ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}