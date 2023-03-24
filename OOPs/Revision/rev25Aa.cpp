#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId();
    void getId();
};

void Employee :: setId()
{
    for(int i =0; i <4; i++)
    {
    cout << "Enter the id of employee number " << (i+1) << ":";
    cin >>id;
    }
}

void Employee :: getId()
{    
    for(int b =0; b<4; b++)
    {
    cout << "The id of employee number " <<(b+1) << " is " << id << "." <<endl;
   
    }
}

int main()
{
    Employee google[4];

    for (int a = 0; a <4; a++){
        google[a].setId();
        google[a].getId();
    }
    return 0;
}
    