#include<iostream>
#include<climits>
using namespace std;
int MaxArr(int num[], int size);
int MinArr(int num[], int size);

int main()
{
    int totEle;
    cout << "Enter the number of elements in the array: ";
    cin >> totEle;
    int array[100];
    for(int i = 0; i < totEle; i++)
    {
        cin >> array[i];
    }
    cout << "Maximum value in the given array : " << MaxArr(array, totEle) << endl;
    cout << "Minimum value in the given array : " << MinArr(array, totEle) << endl;
    return 0;
}
int MaxArr(int num[], int size)
{
    int Max = INT_MIN;
    for(int i = 0; i < size; i++)
    {
        Max = max(Max, num[i]);
        /*if(num[i] > Max)
        {
            Max = num[i];
        }*/
    }
    return Max;
}
int MinArr(int num[], int size)
{
    int Min = INT_MAX;
    for(int i = 0; i < size; i++)
    {
        // Min = min(Min, num[i]);
        if(num[i] < Min)
        {
            Min = num[i];
        }
    }
    return Min;
}
