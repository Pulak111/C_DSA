#include<iostream>
using namespace std;

int main(){
    int sum;
    cout<<"Enter the amount : ";
    cin>>sum;

    if(sum>5000){
        if(sum>6000){
            cout<<"Ujjwal is going to picnic with PJ . "<<endl;
        }
        else{
            cout<<"Ujjwal is going to shopping with PJ. "<<endl;
        }
    }
    else{
        if(sum>2000){
            cout<<"Ujjwal is going to picnic with friends . "<<endl;
        }
        else{
            cout<<"Ujjwal is staying home . "<<endl;
        }
    }
return 0;
    

}