#include <iostream>
using namespace std;
int main()
{
int a = 1;
int b = 2;
if(a-- > 0 && ++b > 2 ) // Here a = 1 then decrease by 1 (a = 0) & b first increased by 1 , and b = 3
{
cout << "Stagel - Inside If ";
} 
else
{
cout << "Stage - Inside else ";
}
cout <<"\n" << a << " " << b << endl; // 0 3
}