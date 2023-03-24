#include<iostream>
using namespace std;
int sum(int, int);
int main(){
    int num1,num2;
    cout<<"Enter the two number : ";
    cin>>num1>>num2;
    cout<<"The sum of "<<num1<<" & "<<num2<< " are "<<sum(num1,num2)<<".";
    return 0;
}
int sum(int a, int b){
    int c=a+b;
    return c;
}