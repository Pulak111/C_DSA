#include <iostream>
using namespace std;

// Inline Function --->>>It reduces the time to run any function.
//                       use when function is simple.Don't use in static Variable,Loops,Switch Functions.

/*inline int product(int a, int b){
    return a*b+1;
}
int main(){
    int a,b;
    cout<<"Enter the value of a & b : ";
    cin>>a>>b;
    cout<<"The product of (a & b) +1 is "<<product(a,b)<<"."<<endl;
    return 0;
}*/

// Static Function

/*int product(int a, int b){
    static int c=0; // This execute only one time.
    c=c+1;  // From 2nd time and forward this function will run and value of c remain save.
    return a*b+c;
}
int main(){
    int a,b;
    cout<<"Enter the value of a & b :";
    cin>>a>>b;
    cout<<"The result if given function is "<<product(a,b)<<endl;
    cout<<"The result if given function is "<<product(a,b)<<endl;
    cout<<"The result if given function is "<<product(a,b)<<endl;
    return 0;
}*/

// Default Argument
float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

int main()
{
    int money = 100000;
    cout << "If you have Rs " << money << " then you will get Rs " << moneyReceived(money) << " after 1 year in your bank account." << endl;
    cout << "If VIP have Rs " << money << " then he will get  Rs " << moneyReceived(money, 1.1) << " after 1 year in his  bank account.";
    return 0;
}

// Constant Argument