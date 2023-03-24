#include <iostream>
using namespace std;

class Employee
{
    int id, sal;

public:
    char fav;

    void setData(int a, int b);
    void getData()
    {
        cout << "The id of the employee Priyanshu is " << id << "." << endl;
        cout << "The salary of that employee is " << sal << "." << endl;
        cout << "The fav char of that employee is " << fav << "." << endl;
    }
};

void Employee ::setData(int a, int b)
{
    id = a;
    sal = b;
}

int main()
{
    Employee Priyanshu;
    Priyanshu.fav = 'J';
    Priyanshu.setData(123, 1985854);
    Priyanshu.getData();
    return 0;
}
