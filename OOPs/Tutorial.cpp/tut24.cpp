// ****** Static Data Members & Static Member function

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
    // count is static data member of class Employee.
public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of the employee number " << count << " is " << id << "." << endl;
    }
    static void getCount(void)
    {
        // count.id --->Shows an error as id is not static variable
        cout << "The value of count is " << count << endl;
    }
};
int Employee ::count; // Default value is 0;

int main()
{
    Employee Priyanshu, Ujjwal, Ritik;
    Priyanshu.setData();
    Priyanshu.getData();
    Employee::getCount();

    cout << endl;

    Ujjwal.setData();
    Ujjwal.getData();
    Employee::getCount();

    cout << endl;

    Ritik.setData();
    Ritik.getData();
    Employee::getCount();

    return 0;
}