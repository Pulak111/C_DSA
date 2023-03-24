// ******* Vote Requirement ******
#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter the age of the person : ";
    cin>>age;
    if(age>18){
        cout<<"That person is eligible for voting.";
    }
    else{
        cout<<"That person is not eligible for voting.";
    }
    return 0;
}