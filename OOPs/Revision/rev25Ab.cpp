
#include <iostream>
using namespace std;

class Employee
{
    int id;

public:
    void setId();
    void printId();
};

void Employee ::setId()
{
        cout << "Enter the id of the employee : ";
        cin >> id;
    
}

void Employee ::printId()
{
    
        cout << "The id of the employee is " << id << "." << endl;
    
}

int main()
{
    Employee meta[4];
    for (int i = 0; i < 4; i++)
    {   
        meta[i].setId();
        meta[i].printId();
    }
    return 0;
}