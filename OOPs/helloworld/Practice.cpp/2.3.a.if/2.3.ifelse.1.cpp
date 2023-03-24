// ******* Even or Odd 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. : ";
    cin>>n;

    if(n%2==0){
        cout<<n<<" is even no. "; 
    }
    else{
        cout<<n<<" is odd no. ";
    }
    return 0;
}