#include <iostream>
using namespace std;

class BankDeposit
{
    int principal, years;
    float interestRate, returnValue;

public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r)
    {
        principal = p;
        years = y;
        interestRate = r;
        returnValue = principal;
        
        for(int i = 0; i < y; i++)
        {
            returnValue = returnValue*(1+interestRate);
        }
    }
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue*(1+interestRate);
    }
}

void BankDeposit ::show()
{
    cout << "The principal was " << principal << " and the money you get after " << years << " years is " << returnValue << "." << endl;
}

int main()
{
    BankDeposit bd1, bd2;

    int p, y, R;
    float r;

    cout << "Enter the principal amount :";
    cin >> p;
    cout << "Enter the years :";
    cin >> y;
    cout << "Enter the interest in float :";
    cin >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the principal amount :";
    cin >> p;
    cout << "Enter the years :";
    cin >> y;
    cout << "Enter the interest rate (%) :";
    cin >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    //bd3.show();
}