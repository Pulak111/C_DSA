#include<iostream>
using namespace std;

int main()
{
    int date;
    cout<<"Enter the date of May : ";
    cin>>date;

    for(int date; date<=30;date++){
        
        if(date%2==0){
            continue;
        }
        cout<<"On "<<date<<" of May Ujjwal can go out of home."<<endl;
    }
    return 0;
}