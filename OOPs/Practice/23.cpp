#include <iostream>
using namespace std;

class shop
{
    int itemId[4];
    int price[4];
    int counter;

public:
    void init_counter()
    {
        counter = 0;
    }
    void setPrice();
    void displayPrice();
};

void shop ::setPrice()
{

    cout << "Enter the id of the item no. " << (counter + 1) << ":" << endl;
    cin >> itemId[counter];
    cout << "Enter the price of item no. " << (counter + 1) << ":" << endl;
    cin >> price[counter];
    counter++;
}
void shop ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item no. " << (i + 1) << " with id " << itemId[i] << " is " << price[i] << ".";
    }
}

int main()
{
    shop dukan;
    dukan.init_counter();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}
