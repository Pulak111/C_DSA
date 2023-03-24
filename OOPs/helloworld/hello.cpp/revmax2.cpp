//******* To find greatest No. ********* 
#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter the number : ";
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a<<" is greatest number among "<<a<<","<<b<<","<<c<<"."<<endl;
        }
        else{
            cout<<c<<" is greatest number aamong "<<a<<","<<b<<","<<c<<"."<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<" is greatest number aamong "<<a<<","<<b<<","<<c<<"."<<endl;
        }
        else{
            cout<<c<<" is greatest number aamong "<<a<<","<<b<<","<<c<<"."<<endl;
        }
    }
return 0;

}