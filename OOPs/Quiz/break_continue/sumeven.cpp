#include<iostream>
using namespace std;
int main(){
    int EvenNumber;
    cout << "Enter the last even number:";
    cin>>EvenNumber;
    int sum=0;
    if(EvenNumber%2 == 0){
    for(int i=1; i<=EvenNumber; i++){
        if(i%2!=0){
            continue;
        }
        sum=sum+i;
    }
    cout<<"Sum of even no. upto "<<EvenNumber<<" is "<<sum<<".";
    }
    else
    {
        cout << EvenNumber << " is not an even number.";
    }
    return 0;
}