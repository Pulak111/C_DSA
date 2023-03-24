#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter the number : ";
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a<<" is greatest no. among "<<a<<","<<b<<","<<c<<"."<<endl;
        }
        else{
            cout<<c<<" is greatest no. among "<<a<<","<<b<<","<<c<<"."<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<" is greatest no. among "<<a<<","<<b<<","<<c<<"."<<endl;
        }
        else{
            int sum=23;
            cout<<c<<" is greatest no. among "<<a<<","<<b<<","<<c<<"."<<sum<<""<<endl;
        }
    }
    return 0;
}