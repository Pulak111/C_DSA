// input marks & function return grade
#include <iostream>
using namespace std;
void grade(int);

int main()
{
    int mark;
    cout << "Enter the marks of student :";
    cin >> mark;
    grade(mark);
}
void grade(int marks)
{
    if (marks > 100)
    {
        cout << "Not possible";
    }
    else if(marks > 90  && marks <= 100 )
    {
        cout << "AA";
    }
    else if(marks > 80 && marks <= 90 )
    {
        cout << "AB";
    }
    else if(marks > 70 && marks <= 80)
    {
        cout << "BB";
    }
    else if(marks > 60 && marks <= 70)
    {
        cout << "BC";
    }
    else if(marks > 50 && marks <= 60)
    {
        cout << "CD";
    }
    else if(marks > 40 && marks <= 50)
    {
        cout << "DD";
    }
    else
    {
        cout << "Fail";
    }
}