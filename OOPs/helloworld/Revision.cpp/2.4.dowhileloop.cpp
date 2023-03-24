#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. : ";
    cin>>n;

    do{
        cout<<n<<" is a integer."<<endl;
        cout<<"Enter the no. again : ";
        cin>>n;
    } while(n>0);
    return 0;
}