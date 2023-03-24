#include <iostream>
using namespace std;
int main()
{
    char ch = 'a';
    int num = 2;

    switch(ch)
    {
        case 1: cout << "Integer" << endl;
        break;
        case 'a': cout << "Alphabet" << endl;
                switch(num)
                {
                    case 1: cout << "Integer inside char case." << endl;
                        break;
                    case 2: cout << "Integer " << num << " inside case '" << ch << "'." << endl;
                        break;
                }
                break;
        default: cout << "No any special observation." << endl;
    }

}