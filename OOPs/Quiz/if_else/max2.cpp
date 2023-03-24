//****** Max. b/w two numbers ******
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Give the two numbers : ";
    cin>>num1>>num2;
    if(num1==num2){
        cout<<"Both the no. are same.";
    }
    else if(num1>num2){
        cout<<num1;
    }
    else{
        cout<<num2;
    }
    return 0;
}
