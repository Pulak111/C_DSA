#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. : ";
    cin>>n;

    while(n>0){
        cout<<n<<" is positive integer."<<endl;
        cout<<"Enter the no. again : ";
        cin>>n;
    }
    return 0;
}