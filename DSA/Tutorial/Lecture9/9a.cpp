#include<iostream>
using namespace std;
int main()
{
    int number[15] ;
// Accessing an element in an array
    cout <<"Value at 12th index : " << number[12] << endl; // Throws the garbage value as there is no assign value at 12th index.
    
    // cout << "Value at 17th indes : " << number[17]; // Give an error as 'number' array is define only for 15 elements.

// Initalising an array
    int second[3] = {5, 7, 11};

// Access an element in an array;
    cout << "Value at 2nd index in array 'second' : " << second[2] << endl;

// Finding size of Array
    int third[] = {2, 3, 4, 23, 56};
    int sizeThird = sizeof(third) / sizeof(int);
    cout << "Size of array 'third' : " << sizeThird << endl;

// Taking input in an array
    int size;
    cout << "Enter the number of element: ";
    cin >> size;
    int num[100];
    for(int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

}