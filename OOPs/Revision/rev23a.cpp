#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int tracker;

public:
    void inittracker()
    {
        tracker = 0;
    }
    void setPrice();
    void displayPrice();
};

void shop :: setPrice()
{
    cout << "Enter the id of your item number " << tracker+1 << ":" <<endl;
    cin >>itemId[tracker];
    cout << "Enter the price of your item : " <<endl;
    cin >>itemPrice[tracker];
    tracker++;
}

void shop :: displayPrice()
{
    for(int i = 0; i < tracker; i++){
        cout << "The price of the item with id " << itemId[i] << " is " << itemPrice[i] << "." <<endl;
    }
}

int main(){
    shop allMart;
    allMart.inittracker();
    
    for (int a =0; a <=4; a++){
        allMart.setPrice();
    }

    allMart.displayPrice();
    return 0;
}