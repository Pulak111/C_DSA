#include <iostream>
using namespace std;
int main()
{
    /* Loops in C++
    1.For Loop
    2.While Loop
    3.do-while loop */

    // ***** 1.For Loop in C++ *****

    // Syntax for 'forLoop'
    /* for(initialiization; condition; updation){
        loop body(C++ code);
    } */

    // for (int i = 0; i <40; i++){
    //       cout<<i<<endl;
    //   }
    // ***** 2.While Loop in C++ *****
    // Syntax:
    // While (condition)
    /* {
        c++ statemens;
    } */

    // Printing 1 to 40 using while loop
    /* int i =1;
     while(i<40){
         cout<<i<<",";
         i++;
     }
     cout<<i<<".";*/

    // Printing using do while Loop---->Print the initial condition i.e. in below example it will print 1 no matters condition satisfy or not.
    int i;
    i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 9);

    return 0;
}