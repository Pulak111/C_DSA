// Temprature unit conversion Farhenheit to Celsius
#include <iostream>
using namespace std;
int main()
{
    float tempF;
    float tempC;
    cout << "Enter the temprature in Farhenheit: ";
    cin >> tempF;
    tempC = (tempF - 32)*5/9;
    cout << tempC;
}
