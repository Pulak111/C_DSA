#include <iostream>
using namespace std;
// This will not swap the value of x & y
/* void swap(int a, int b){   //temp a b
     int temp=a;             // 4   4 5
     a=b;                   //  4   5 5
     b=temp;               //   4   5 4
 }

 int main(){
     int x=4,y=5;
     cout<<"The value of x was "<<x<<" & the value of y was "<<y<<"."<<endl;
     swap(x,y);
     cout<<"The value of x was "<<x<<" & the value of y was "<<y<<"."<<endl;
     return 0;
 } */

// Call by Refrence Pointer ----->Swap value of X & Y
/* void swapPointer(int *a, int *b){  //temp *a *b
     int temp =*a;                   //  4    4  5
          *a=*b;                    //   4    5  4
          *b=temp;                 //    4    5  4
 }
 int main(){
     int x=4,y=5;
     cout<<"The value of x was "<<x<<" & the value of y was "<<y<<"."<<endl;
     swapPointer(&x,&y);
     cout<<"The value of x is  "<<x<<" & the value of y is  "<<y<<"."<<endl;
     return 0;
 }*/

// Call by refrence using C++ Refrence Variable
/*void swapRefrencVar(int &a, int &b){  //temp a b
    int temp=a;                        // 4    4 5
    a=b;                              //  4    5 4
    b=temp;                          //   4    5 4
}
int main(){
    int x=4, y=5;
    cout<<"The value of x was "<<x<<" & the value of y was "<<y<<"."<<endl;
    swapRefrencVar(x,y);
    cout<<"The value of x is  "<<x<<" & the value of y is  "<<y<<"."<<endl;
    return 0;
}*/

int &swapRefrenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
    int x = 4, y = 5;
    cout << "The value of x was " << x << " & the value of y was " << y << "." << endl;
    swapRefrenceVar(x, y) = 766; // which is written first its value got changed ,so here value of x got changed.
    cout << "The value of x is " << x << " & the value of y is " << y << "." << endl;
}
