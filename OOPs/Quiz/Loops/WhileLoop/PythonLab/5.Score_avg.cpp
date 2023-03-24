#include <iostream>
using namespace std;
int main()
{
    int score;
    double avg = 0;
    int counter = 0;
    int i = 1;
    int num = 0;
    while (i > 0)
    {
        cout << "Enter the score : ";
        cin >> score;
        i = score;
        
        if(score >= 90)
        {
            counter = counter + 1;
        }
        if(score > 0)
        {
            avg = avg + score;
            num = num + 1;
        }
    }
if(counter > 0)   
{
    cout  << "Number of students having 'A' grade : " << counter << endl;
}
cout << "The average marks of the student is " << (avg/num) << endl;
}