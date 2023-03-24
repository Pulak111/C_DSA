// ****** Memory Allocation Using Arrays ******
#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void setPrice();
    void displayPrice();
};

void shop ::setPrice(void)
{
    cout << "Enter Id of your item no. " << counter + 1 << "." << endl;
    cin >> itemId[counter];
    cout << "Enter the price of your item " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item " << (i + 1) << " with id " << itemId[i] << " is " << itemPrice[i] << "." << endl;
    }
}

int main()
{
    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}