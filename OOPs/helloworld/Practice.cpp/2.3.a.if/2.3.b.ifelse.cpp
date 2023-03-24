// ******** Comparision b/w two numbers *******
#include<iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"Enter the two no. : ";
    cin>>x>>y;

    if(x==y){
        cout<<"Both no. are equal .";
    }
    else{
        if(x>y){
            cout<<x<<" is greater than "<<y<<".";
        }
        else{
            cout<<x<<" is smaller than "<<y<<".";
        }
    }
return 0;
}