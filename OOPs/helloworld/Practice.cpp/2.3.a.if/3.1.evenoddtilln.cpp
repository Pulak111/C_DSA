// *********** Even no. upto n **********
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. : ";
    cin>>n;
   

    for(int i=0; i<n+1; i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<",";
    }
    return 0;
}