#include<iostream>
using namespace std;

class Animal{
    char sound;
    int leg;

    public :
     char species; 
     char name;

    void setData(char,int);
    void getData(){
        cout<<"The name of the "<<species<<" is "<<name<<"."<<endl;
        cout<<"The "<<species<<" have "<<leg<<" leg & sound"<<sound<<endl;
    } 
};
void Animal :: setData(char ='c',int d){
   leg = d;
   sound = 'c';
}
int main(){
    Animal a;
    a.species='G';
    a.name='T';
    a.setData('m',4);
    a.getData();
}