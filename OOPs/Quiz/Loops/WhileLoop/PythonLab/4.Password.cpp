#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    cout << i << ".Enter the password : ";
    cin >> n;
    while (i <= 5)
    {
        if (n == 123)
        {
            cout << "You are logged in the system on '" << i << "' time.";
            break;
        }
        else
        {
            i = i + 1;
            if (i > 5)
            {
                cout << "You are tried maximum time." << endl;
                break;
            }
            
            cout << "You had entered wrong password." << endl;
            cout << i << ".Enter the password again : ";
            cin >> n;
            
        }
    }
}