// *********Array*********
#include <iostream>
using namespace std;
int main()
{
  //  int marks[]={23,24,25,27};
  // cout <<marks[2]<<endl;
  // cout<<endl;
  // int mathMarks[]={70,45,34,98,85,99};
  /* cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    mathMarks[4]=67;
    cout<<mathMarks[4]<<endl;
    cout<<mathMarks[5]<<endl;
    cout<<endl;*/

  /* for(int i=0; i<=5; i++){
      cout<<"The marks of the student "<<i<<" is "<<mathMarks[i]<<endl;
  }
  cout<<endl; */

  /*  int i=0;
    while(i<=5){
        cout<<"The marks of the student "<<i<<" is "<<mathMarks[i]<<endl;
        i++;
    }
    cout<<endl;*/

  /* int i=0;
  do{
      cout<<"The marks of the student "<<i<<" is "<<mathMarks[i]<<endl;
      i++;
  }while(i<=5); */

  //  Array & Pointer

  int marks[] = {32, 99, 38, 51};
  int *pointer = marks;
  /*cout<<"The value of *p is "<<*p<<endl;
  cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
  cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
  cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

  cout<<"The address of pointer is "<<pointer<<endl;
  cout<<"The address of (pointer+1) is "<<(pointer+1)<<endl;
  cout<<"The address of (pointer+2) is "<<(pointer+2)<<endl;
  cout<<"The address of (pointer+3) is "<<(pointer+3)<<endl;
*/
  // cout<<*(pointer++)<<endl;
  // cout<<*(++pointer);
  for (int i = 0; i < 4; i++)
  {
    cout << "The marks of the student of rank " << i + 1 << " is " << *pointer << "." << endl;
    pointer++;
  }

  return 0;
}