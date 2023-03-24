#include <iostream>
using namespace std;

int main()
{
    int num;
    for(num = 2; num <= 50; num++)
    {  int i;
        for(i = 2; i <= num; i++){
            if(num%i == 0)
            {
                break;
            }
        }
        if(i == num)
        {
            cout << num << endl;
        }
}
    return 0;

}