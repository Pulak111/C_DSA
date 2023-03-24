#include<iostream>
using namespace std;
void printArray(char array[], int size);
int main()
{
    char ch[] = {'a', 'b', 'c', 'e', 'f'};
    int sizech = sizeof(ch) / sizeof(char);
    printArray(ch, sizech);
    return 0;
}
void printArray(char arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "Element at index [" << i << "] : " << arr[i] << endl;
    }
    cout << endl;
}

