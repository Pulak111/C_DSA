#include <iostream>
using namespace std;
/*int main()
{
    for (int i = 1; i <= 10; i++){
        if(i==6){
            continue;
        }
        else
        {
            cout << i << endl;
        }
    }
}*/

/*int main()
{
    int i =1;
    while(i<=10){
        if(i==6)
        {
            i++;
        }
        else
        {
           cout << i << endl;
           i++;
        }
    }
}
*/
int main()
{
    int i;
    i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i < 0);
}