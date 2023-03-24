// Accessing array using functions;
#include<iostream>
using namespace std;
void printArray(int array[], int size);
int main()
{
    int first[10] = {2,3};
    printArray(first, 10);
    int sizeFirst = sizeof(first)/ sizeof(int);
    cout << "Size of 'first' array: " << sizeFirst << endl << endl;

    int second[6] ={5, 6, 9, 11};
    printArray(second,6); // If we here increase the range more than size then get garbage value. e.g. 7 except of 6
    int third[5] = {1, 2, 5, 0, 6};
    printArray(third, 3);
    return 0;
}
void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "Element at index [" << i <<"]: " << array[i] << endl;
    }
    cout << endl;
}