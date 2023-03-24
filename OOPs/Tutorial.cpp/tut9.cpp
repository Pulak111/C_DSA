// **** Basic Control Structure ****
/* 1. Sequence Structure
2. Selectiion structure
3. Loop structure */

#include <iostream>
using namespace std;
int main()
{
   // cout<<"This is tutorial 9";
   int age;
   cout << "Tell me your age : ";
   cin >> age;
   // **** Selection control structure: if-else if-else ladder
   /* if((age<18) && (age>0)){
    cout<<"You cannot come to my party."<<endl;
   }
   else if(age==18){
    cout<<"You will get kid pass in my party."<<endl;
   }
   else if(age<0){
    cout<<"You are yet not born."<<endl;
   }
   else{
    cout<<"You can came to my party."<<endl;
   } */

   // Selection control structure: switch case statements
   switch (age)
   {
   case 18:
      cout << "You are 18 yrs old." << endl;
      break;

   case 22:
      cout << "You are 22 yrs old." << endl;
      break;

   case 2:
      cout << "You are 2 yrs child only." << endl;
      break;

   default:
      cout << "No special cases" << endl;
      break;
   }
   return 0;
}