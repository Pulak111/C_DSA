// Printing 1 to 10 except 6.
#include <iostream>
using namespace std;
int main (){
    for(int i = 1; i <= 10; i++)
    {
        if(i==6)
    {
        continue;
    }
        cout << i << endl;
    }
}
