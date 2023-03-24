#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. :";
    cin>>n;

    int sum=0;
    for(int counter=1; counter<=n; counter++)
    sum=sum+counter;
    cout<<"The sum of natural number upto "<<n<<" is "<<sum<<".";
    return 0;
}