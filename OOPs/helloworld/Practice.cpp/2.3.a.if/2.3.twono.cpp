#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter the two no. :";
    cin>>num1>>num2;

    if(num1==num2){
        cout<<"Both numbers are equal.";
    }
    else{
        if(num1>num2){
            cout<<num1<<" is greater than "<<num2<<".";
        }
        else{
            cout<<num1<<" is smaller than "<<num2<<".";
        }
    }
    return 0;
}