// Error in output
#include <iostream> 
using namespace std;
int main()
{
int a = 1;
int b = 2;
if(a-- > 0 || ++b > 2 ) // a = 1 then a becomes 0 'or' b increase by 1 b = 3 
{
cout << "Stagel - Inside If "; // This will execute
}
else
{
cout << "Stage - Inside else ";
}
cout << "\n" << a << " " << b << endl; // 0 3
}