// Reverse an Array
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 22, 3, 4, 54, 8, 6};
    int size = sizeof(arr)/ sizeof(int);
    int sta, end;
    sta = 0;
    end = size - 1;
/**/ //Reverse the same array
    while(sta < end)
    {
        int i = arr[sta];
        arr[sta] = arr[end];
        arr[end] = i;
        sta++;
        end--;
    }
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
/**/


// Create a new reverse array
/*
    int arrRev[size];
    while(sta <= end)
    {
        arrRev[sta] = arr[end];
        arrRev[end] = arr[sta];
        sta++;
        end--;
    }
    for(int i = 0; i < size; i++)
    {
        cout << arrRev[i] << " ";
    }
*/
}