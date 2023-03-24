// Number of Notes
#include <iostream>
using namespace std;
int main()
{
    int money = 1263;
    //int a= money;

    switch(money)
    {
        case (1263):
        {
            cout << "Rs 100 notes :" << (money / 100) << endl;
            money = money % 100;
        }
        case 2:
        {
            cout << "Rs 50 notes :" << (money / 50) << endl;
            money = money % 50;
        }
        case 3:
        {
            cout << "Rs 10 notes :" << (money / 10) << endl;
            money = money % 10;
        }
        case 4:
        {
            cout << "Rs 1 notes :" << (money / 1) << endl;
        }
    }
}