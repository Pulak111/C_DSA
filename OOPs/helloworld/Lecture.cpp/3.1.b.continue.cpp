#include<iostream>
using namespace std;

int main(){

    for(int i=0; i<10; i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<", ";
    }
    return 0;
}