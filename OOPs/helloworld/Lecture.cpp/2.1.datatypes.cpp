#include<iostream>
using namespace std;

int main(){
    int a; //declaration
    a=12; //initialisation
    cout<<"The size of int : "<<sizeof(a)<<endl;

    float b;
    cout<<"The size of float : "<<sizeof(b)<<endl;

    char c;
    cout<<"The size of char : "<<sizeof(c)<<endl;

    bool d;
    cout<<"The size of bool : "<<sizeof(d)<<endl;

    short int si;
    cout<<"The size of short int : "<<sizeof(si)<<endl;

    long int li;
    cout<<"The size of long int : "<<sizeof(li)<<endl;

    return 0;
}
