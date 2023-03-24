// Power of two or not
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    if(n == 1)
    {
        cout << "Yes";
    }
    while(n != 1 && n != 0)
      {   int r;
            r = n % 2;
            if(r != 0)
            {
                cout << "Not";
                break;
            }
          n = n / 2;
            if(n == 1)
            {
                cout << "Yes";
            }
      }
}