#include<iostream>
using namespace std;

int main(){
    int i;
    int a=1, b=10;
    cout<<"No. between "<<a<<" and "<<b<<" which are not divisible by 3 are ";
    for(i=0; i<10; i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<",";
    }
    return 0;
}