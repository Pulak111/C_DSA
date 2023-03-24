#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"The size of A is "<<sizeof(a)<<"."<<endl;

    float b=2.13;
    cout<<"The size of B is "<<sizeof(b)<<"."<<endl;

    long double d;
    cout<<"The size of D is "<<sizeof(d)<<"."<<endl;

    char c;
    cout<<"The size of C is "<<sizeof(c)<<"."<<endl;

    bool e;
    cout<<"The size of E is "<<sizeof(e)<<"."<<endl;
    return 0;
}