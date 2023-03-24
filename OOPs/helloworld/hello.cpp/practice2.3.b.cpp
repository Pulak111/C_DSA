// ********* Relation between two number. *********
#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter the no. : ";
    cin>>x>>y;

    if(x==y){
        cout<<"Both are equal.";
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