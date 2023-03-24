// Vowel or not using switch_case.

#include <iostream>
using namespace std;

int main()
{
    char alph;
    cout << "Enter the alphabet :";
    cin >> alph;

    switch (alph)
    {
    case 'a':
        cout << alph << " is vowel.";
        break;

    case 'e':
        cout << alph << " is vowel.";
        break;

    case 'i':
        cout << alph << " is vowel.";
        break;

    case 'o':
        cout << alph << " is vowel.";
        break;

    case 'u':
        cout << alph << " is vowel.";
        break;

    case 'A':
        cout << alph << " is vowel.";
        break;
    case 'E':
        cout << alph << " is vowel.";
        break;
    case 'I':
        cout << alph << " is vowel.";
        break;
    case 'O':
        cout << alph << " is vowel.";
        break;
    case 'U':
        cout << alph << " is vowel.";
        break;

    default:
        cout << alph << " is consonat.";
        break;
    }
}