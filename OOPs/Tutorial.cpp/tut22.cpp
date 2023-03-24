// ****** Oops *******
// Oops--->Classes & Objects
// C++ --->Initially called 'C' with classes by Stroustroup
// Class--->Extension of structure in 'C'
// Structure had limitation
/*        --(1)Members are public
          --(2)No methods */
// Classes--->Structures+more
// Classes--->Can make few members as public & few as private
// Structures in C++ are typedef
// We can declare objects along with the class like following declaration
/* Class Employee{
    // Class definition
}Priyanshu,Ujjwal; */
// Priyanshu.salary=1,00,000 makes no sense if salary is private

#include <iostream>
#include <string>
using namespace std;

class binary
{
    void chk_bin();
    string s;

public:
    void read(void);
    void ones_compliment();
    void display();
};

void binary ::read()
{
    cout << "Enter a binary number : ";
    cin >> s;
}
void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format." << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    cout << "Displaying your binary number : ";
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number : ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}
